//
// Copyright (C) 2004-2006 Maciej Sobczak, Stephen Hutton, David Courtney
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//

#define SOCI_ODBC_SOURCE
#include "soci-odbc.h"

using namespace soci;
using namespace soci::details;


// concrete factory for ODBC concrete strategies
odbc_session_backend * odbc_backend_factory::make_session(
     std::string const &connectString) const
{
     return new odbc_session_backend(connectString);
}

odbc_backend_factory const soci::odbc;
