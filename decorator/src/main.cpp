#include <stdio.h>
#include <stdlib.h>


#include "facebase.h"
#include "smileface.h"
#include "unhappyface.h"
#include "bluefacedecorator.h"

int main(int argc, char** argv)
{
	FaceBase *smile = new SmileFace();
	FaceBase *unhappy = new UnhappyFace();

	BlueFaceDecorator *d1 = new BlueFaceDecorator(smile);
	BlueFaceDecorator *d2 = new BlueFaceDecorator(unhappy);

	smile->showFace();
	unhappy->showFace();
	d1->showFace();
	d2->showFace();

	return 0;
}
