#ifndef _FACEBASE_H
#define _FACEBASE_H

class FaceBase {

public:
	virtual ~FaceBase();

	virtual void showFace();

	virtual void setEye(char eye) { _eye = eye; }
	virtual char getEye() { return _eye; }
	virtual void setMouth(char mouth) { _mouth = mouth; }
	virtual char getMouth() { return _mouth; }

protected:
	FaceBase();

	char _eye;
	char _mouth;
};

#endif // _FACEBASE_H

