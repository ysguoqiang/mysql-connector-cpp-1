/*
   Copyright (C) 2008, 2010, Oracle and/or its affiliates. All rights reserved.

   The MySQL Connector/C++ is licensed under the terms of the GPL
   <http://www.gnu.org/licenses/old-licenses/gpl-2.0.html>, like most
   MySQL Connectors. There are special exceptions to the terms and
   conditions of the GPL as it is applied to this software, see the
   FLOSS License Exception
   <http://www.mysql.com/about/legal/licensing/foss-exception.html>.
*/

#ifndef _SQL_PARAMETER_METADATA_H_
#define _SQL_PARAMETER_METADATA_H_

#include <cppconn/sqlstring.h>


namespace sql
{

class ParameterMetaData
{
public:
	enum
	{
		parameterModeIn,
		parameterModeInOut,
		parameterModeOut,
		parameterModeUnknown
	};
	enum
	{
		parameterNoNulls,
		parameterNullable,
		parameterNullableUnknown
	};

	virtual sql::SQLString getParameterClassName(unsigned int param) = 0;

	virtual int getParameterCount() = 0;

	virtual int getParameterMode(unsigned int param) = 0;

	virtual int getParameterType(unsigned int param) = 0;

	virtual sql::SQLString getParameterTypeName(unsigned int param) = 0;

	virtual int getPrecision(unsigned int param) = 0;

	virtual int getScale(unsigned int param) = 0;

	virtual int isNullable(unsigned int param) = 0;

	virtual bool isSigned(unsigned int param) = 0;

protected:
	virtual ~ParameterMetaData() {}
};


} /* namespace sql */

#endif /* _SQL_PARAMETER_METADATA_H_ */
