#include "tank.h"
#include <iostream>

using namespace std;

Tank::Tank()
{
}

Tank::~Tank()
{
}

void Tank::fire()
{
	cout<<"[Tank] fire!"<<endl;
}

void Tank::move()
{
	cout<<"[Tank] moving..."<<endl;
}

void Tank::reload()
{
	cout<<"[Tank] reload..."<<endl;
}
