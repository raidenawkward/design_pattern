#ifndef _CONSTPASSWDPROXY_H
#define _CONSTPASSWDPROXY_H

#include "passwordproxy.h"

#define CONST_PASSWD ("1234")

class ConstPasswdProxy : public PasswordProxy {

public:
	ConstPasswdProxy();
	virtual ~ConstPasswdProxy();

	virtual bool verify(const char* passwd);

protected:
};

#endif // _CONSTPASSWDPROXY_H

