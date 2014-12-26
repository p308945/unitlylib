#include "hyDatabase.h"

namespace DB
{


	bool HySqliteDB::OpenDataBase()
	{
		if (!m_dbName.empty())
		{
			int rc = 0;
			rc = sqlite3_open(m_dbName.c_str(), &m_db);
			if (rc)
			{
				const char *s = sqlite3_errmsg(m_db);
				fprintf(stderr, "Can't open database: %s/n", sqlite3_errmsg(m_db));
				sqlite3_close(m_db);
				m_db = NULL;
				return false;
			}
			return true;
		}
		
	}

	void HySqliteDB::CloseDataBase()
	{
		if (!m_db)
		{
			sqlite3_close(m_db);
		}
	}

	bool HySqliteDB::ExecuteSql(const char *sql)
	{
		return true;
	}

}