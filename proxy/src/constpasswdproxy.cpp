#include "constpasswdproxy.h"
#include <string.h>

ConstPasswdProxy::ConstPasswdProxy()
{
}

ConstPasswdProxy::~ConstPasswdProxy()
{
}

bool ConstPasswdProxy::verify(const char* passwd)
{
	return strcmp(passwd, CONST_PASSWD) == 0;
}
