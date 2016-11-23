#include "include/occi.h"

#pragma once

using namespace oracle::occi;

namespace dbOracle {
	public class dbOracle
	{
	public:
		/**
		* Inserting a row into the table.
		*/
		bool insertRow(std::string sqlStmt)
		{
			bool status = false;
			stmt = conn->createStatement(sqlStmt);
			try {
				stmt->executeUpdate();
				status = true;
			}
			catch (SQLException ex)
			{
				status = false;
			}

			conn->terminateStatement(stmt);
			return (status ? true : false);
		}

		/**
		* updating a row
		*/
		bool updateRow(std::string sqlStmt)
		{
			bool status = false;
			stmt = conn->createStatement(sqlStmt);
			try {
				stmt->executeUpdate();
				status = true;
			}
			catch (SQLException ex)
			{
				status = false;
			}

			conn->terminateStatement(stmt);
			return (status ? true : false);
		}

		/**
		* deletion of a row
		*/
		bool deleteRow(std::string sqlStmt)
		{
			bool status = false;
			stmt = conn->createStatement(sqlStmt);
			try {
				stmt->executeUpdate();
				status = true;
			}
			catch (SQLException ex)
			{
				status = false;
			}

			conn->terminateStatement(stmt);
			return (status ? true : false);
		}

		/**
		* displaying all the rows in the table
		*/
		ResultSet * Select(std::string sqlStmt)
		{
			ResultSet *rset;
			try {
				stmt = conn->createStatement(sqlStmt);
				rset = stmt->executeQuery();
			}
			catch (SQLException ex)
			{
				rset = nullptr;
			}

			stmt->closeResultSet(rset);
			conn->terminateStatement(stmt);
			return rset;
		}

		dbOracle()
		{
			env = Environment::createEnvironment(Environment::DEFAULT);
			conn = env->createConnection("SYSTEM", "root", "wipek");
		}

		~dbOracle()
		{
			env->terminateConnection(conn);
			Environment::terminateEnvironment(env);
		}

	private:
		Environment *env;
		Connection *conn;
		Statement *stmt;
	};
}
#pragma endregion
