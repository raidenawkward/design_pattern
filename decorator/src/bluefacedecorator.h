#ifndef _BLUEFACEDECORATOR_H
#define _BLUEFACEDECORATOR_H

#include "facebase.h"

class BlueFaceDecorator : public FaceBase {

public:
	BlueFaceDecorator(FaceBase* face);
	virtual ~BlueFaceDecorator();

	virtual void showFace();

protected:
	FaceBase* _face;
};

#endif // _BLUEFACEDECORATOR_H

