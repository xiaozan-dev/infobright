/* Copyright (C) 2005-2008 Infobright Inc.

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License version 2.0 as
published by the Free  Software Foundation.

This program is distributed in the hope that  it will be useful, but
WITHOUT ANY WARRANTY; without even  the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License version 2.0 for more details.

You should have received a  copy of the GNU General Public License
version 2.0  along with this  program; if not, write to the Free
Software Foundation,  Inc., 59 Temple Place, Suite 330, Boston, MA
02111-1307 USA  */

#include "system/Configuration.h"
using namespace boost;
using namespace boost::program_options;


#define INIT_BOOST_PROPERTY(name, datatype, seed) Configuration::PropertyDescriptor<datatype> Configuration::name(#name, seed)
INIT_BOOST_PROPERTY(AllowMySQLQueryPath, int, 0);

#undef INIT_BOOST_PROPERTY

void Configuration::InitializeEditionSpecificOptions(options_description_easy_init& initializer)
{
}
