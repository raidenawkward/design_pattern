#include "bluefacedecorator.h"
#include <stdio.h>

BlueFaceDecorator::BlueFaceDecorator(FaceBase* face)
	:_face(face)
{
}

BlueFaceDecorator::~BlueFaceDecorator()
{
}

void BlueFaceDecorator::showFace()
{
	if (!_face)
		return;

	printf("\033[40;34m%c%c\033[0m\n", _face->getEye(), _face->getMouth());
}
