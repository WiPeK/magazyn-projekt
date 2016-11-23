#include<iostream>
#pragma once

namespace dbDriverSpace {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace MySql::Data::MySqlClient;

	public ref class dbDriver
	{
		private:
			MySqlConnection^ connect;
			bool status;
			String^ error;
			String^ datasource;
			String^ port;
			String^ username;
			String^ password;
			String^ database;
		
		public:
			MySqlDataReader^ result;
			MySqlDataAdapter^ resultMany;
			
			dbDriver()
			{
				datasource = "localhost";
				port = "3306";
				username = "root";
				password = "root";
				database = "magazyn";
				String^ config = L"datasource=" + datasource + ";port=" + port + ";username=" + username + ";password=" + password + ";database=" + database;
				connect = gcnew MySqlConnection(config);
			}

			~dbDriver()
			{
			
			}

			bool getStatus()
			{
				return this->status;
			}

			String^ getError()
			{
				return this->error;
			}

			void closeConnection()
			{
				connect->Close();
			}

			void selectOne(String^ qry)
			{
				MySqlCommand^ query = gcnew MySqlCommand(qry, connect);
				try {
					connect->Open();
					this->result = query->ExecuteReader();
					
					if (this->result->Read())
					{
						this->status = true;
						this->error = "Query Select OK";
					}
					else
					{
						this->status = false;
						this->error = "Brak pasuj¹cych wyników.";
					}
				}
				catch (Exception^ ex)
				{
					this->error = ex->Message;
					this->status = false;
				}		
			}

			void selectMany(String^ qry)
			{
				MySqlCommand^ query = gcnew MySqlCommand(qry, connect);
				
				try {
					connect->Open();
					resultMany = gcnew MySqlDataAdapter();
					resultMany->SelectCommand = query;
					this->error = "Query SelectMany OK";
					this->status = true;
				}
				catch (Exception^ ex)
				{
					this->error = ex->Message;
					this->status = false;
				}
			}

			void update(String^ qry)
			{
				MySqlCommand^ query = gcnew MySqlCommand(qry, connect);
				try {
					connect->Open();
					if (query->ExecuteNonQuery())
					{
						this->status = true;
						this->error = "Query Update OK";
					}
					else
					{
						this->status = false;
						this->error = "Query Update Error";
					}
				}
				catch (Exception^ ex)
				{
					this->error = ex->Message;
					this->status = false;
				}
			}

			void insert(String^ qry)
			{
				MySqlCommand^ query = gcnew MySqlCommand(qry, connect);
				try {
					connect->Open();
					if (query->ExecuteNonQuery())
					{
						this->status = true;
						this->error = "Query Insert OK";
					}
					else
					{
						this->status = false;
						this->error = "Query Insert Error";
					}
				}
				catch (Exception^ ex)
				{
					this->error = ex->Message;
					this->status = false;
				}
			}
			

			void deleteFromSql(String^ qry)
			{
				MySqlCommand^ query = gcnew MySqlCommand(qry, connect);
				try {
					connect->Open();
					if (query->ExecuteNonQuery())
					{
						this->status = true;
						this->error = "Query Delete OK";
					}
					else
					{
						this->status = false;
						this->error = "Query Delete Error";
					}
				}
				catch (Exception^ ex)
				{
					this->error = ex->Message;
					this->status = false;
				}
			}

	};
}
#pragma endregion
