#ifndef _TEXTRECORDMEMENTO_H
#define _TEXTRECORDMEMENTO_H

#include <string>

using namespace std;

class TextRecordMemento {

public:
private:
	friend class TextRecorder;

	TextRecordMemento();
	virtual ~TextRecordMemento();

	string getText() const { return _text; }
	void setText(const string& s) { _text = s; }

	string _text;
};

#endif // _TEXTRECORDMEMENTO_H

