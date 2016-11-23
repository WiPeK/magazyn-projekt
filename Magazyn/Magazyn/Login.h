#include <ctime>
#include <string>
#include "databaseDriver.h"
#include "Magazin.h"
#pragma once

namespace Magazyn {

	using namespace MySql::Data::MySqlClient;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace dbDriverSpace;
	

	/// <summary>
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnExit;
	protected:
	private: System::Windows::Forms::Button^  btnLogin;
	private: System::Windows::Forms::TextBox^  textBoxLogin;
	private: System::Windows::Forms::TextBox^  textBoxPassword;
	private: System::Windows::Forms::Label^  labelLogin;
	private: System::Windows::Forms::Label^  labelPassword;
	private: System::Windows::Forms::Label^  labelTitle;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->textBoxLogin = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPassword = (gcnew System::Windows::Forms::TextBox());
			this->labelLogin = (gcnew System::Windows::Forms::Label());
			this->labelPassword = (gcnew System::Windows::Forms::Label());
			this->labelTitle = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnExit
			// 
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnExit->Location = System::Drawing::Point(12, 252);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(127, 31);
			this->btnExit->TabIndex = 0;
			this->btnExit->Text = L"Zamknij program";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &Login::btnExit_Click);
			// 
			// btnLogin
			// 
			this->btnLogin->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnLogin->Location = System::Drawing::Point(231, 229);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(148, 54);
			this->btnLogin->TabIndex = 1;
			this->btnLogin->Text = L"Zaloguj";
			this->btnLogin->UseVisualStyleBackColor = true;
			this->btnLogin->Click += gcnew System::EventHandler(this, &Login::btnLogin_Click);
			// 
			// textBoxLogin
			// 
			this->textBoxLogin->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBoxLogin->Location = System::Drawing::Point(181, 110);
			this->textBoxLogin->MaxLength = 255;
			this->textBoxLogin->Name = L"textBoxLogin";
			this->textBoxLogin->Size = System::Drawing::Size(163, 29);
			this->textBoxLogin->TabIndex = 2;
			this->textBoxLogin->Text = L"wipek";
			// 
			// textBoxPassword
			// 
			this->textBoxPassword->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBoxPassword->Location = System::Drawing::Point(181, 159);
			this->textBoxPassword->MaxLength = 255;
			this->textBoxPassword->Name = L"textBoxPassword";
			this->textBoxPassword->PasswordChar = '*';
			this->textBoxPassword->Size = System::Drawing::Size(163, 29);
			this->textBoxPassword->TabIndex = 3;
			this->textBoxPassword->Text = L"12345";
			// 
			// labelLogin
			// 
			this->labelLogin->AutoSize = true;
			this->labelLogin->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelLogin->Location = System::Drawing::Point(103, 112);
			this->labelLogin->Name = L"labelLogin";
			this->labelLogin->Size = System::Drawing::Size(61, 24);
			this->labelLogin->TabIndex = 4;
			this->labelLogin->Text = L"Login";
			// 
			// labelPassword
			// 
			this->labelPassword->AutoSize = true;
			this->labelPassword->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelPassword->Location = System::Drawing::Point(103, 159);
			this->labelPassword->Name = L"labelPassword";
			this->labelPassword->Size = System::Drawing::Size(63, 24);
			this->labelPassword->TabIndex = 5;
			this->labelPassword->Text = L"Has³o";
			// 
			// labelTitle
			// 
			this->labelTitle->AutoSize = true;
			this->labelTitle->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelTitle->Location = System::Drawing::Point(140, 9);
			this->labelTitle->Name = L"labelTitle";
			this->labelTitle->Size = System::Drawing::Size(125, 32);
			this->labelTitle->TabIndex = 6;
			this->labelTitle->Text = L"Magazyn";
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(391, 295);
			this->Controls->Add(this->labelTitle);
			this->Controls->Add(this->labelPassword);
			this->Controls->Add(this->labelLogin);
			this->Controls->Add(this->textBoxPassword);
			this->Controls->Add(this->textBoxLogin);
			this->Controls->Add(this->btnLogin);
			this->Controls->Add(this->btnExit);
			this->Name = L"Login";
			this->Text = L"Login";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnExit_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
private: System::Void btnLogin_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ query = "Select id_employers from employers where login ='" + this->textBoxLogin->Text + "' and password = password('" + this->textBoxPassword->Text + "') limit 1";
	dbDriver db;
	db.selectOne(query);
	if (db.getStatus())
	{
		int id_employers = db.result->GetInt32(0);

		//TODO czas zalogowania

		//String^ queryUpdate = "UPDATE employers SET last_log_in ='" + date + "' WHERE id_employers='" + id_employers + "'";
		db.closeConnection();
		this->Hide();
		Magazin^ magazin = gcnew Magazin(id_employers);
		magazin->ShowDialog();
		this->Close();
	}
	else
	{
		MessageBox::Show(db.getError());
		db.closeConnection();
	}
		
}
};
}
