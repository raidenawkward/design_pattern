#include <stdio.h>
#include <stdlib.h>

#include "passwordproxy.h"
#include "constpasswdproxy.h"


int main(int argc, char** argv)
{
	PasswordProxy* proxy = new ConstPasswdProxy();

	bool verify = proxy->verify("abc");
	printf("result: %d\n", verify);

	verify = proxy->verify("1234");
	printf("result: %d\n", verify);

	delete proxy;

	return 0;
}
