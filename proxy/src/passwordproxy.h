#ifndef _PASSWORDPROXY_H
#define _PASSWORDPROXY_H

class PasswordProxy {

public:
	virtual ~PasswordProxy();

	virtual bool verify(const char*) = 0;

protected:
	PasswordProxy();
};

#endif // _PASSWORDPROXY_H

