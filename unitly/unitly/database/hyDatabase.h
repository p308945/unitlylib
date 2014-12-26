#ifndef HY_DATABASE_H
#define HY_DATABASE_H

#include "stdhy.h"
#include "sqlite3.h"
//#include "sqlite3ext.h"

namespace DB
{

	class HyDataBaseManger
	{
	public:
		virtual bool OpenDataBase() = 0;
		virtual void CloseDataBase() = 0;
		virtual bool ExecuteSql(const char *sql) = 0;
	public:
		virtual ~HyDataBaseManger(){}
	};

	class HySqliteDB :public virtual HyDataBaseManger
	{
	public:
		HySqliteDB(string daName) :m_db(NULL),m_dbName(daName){}
	public:
		virtual bool OpenDataBase();
		virtual void CloseDataBase();
		virtual bool ExecuteSql(const char *sql);
	private:
		sqlite3 *m_db;
		string	m_dbName;
	};
}

#endif