#include "facebase.h"
#include <stdio.h>

FaceBase::FaceBase()
	:_eye(':'), _mouth('|')
{
}

FaceBase::~FaceBase()
{
}

void FaceBase::showFace()
{
	printf("%c%c\n", _eye, _mouth);
}
