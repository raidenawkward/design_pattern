#ifndef _TEXTRECORDER_H
#define _TEXTRECORDER_H

#include <string>
#include "textrecordmemento.h"

using namespace std;

class TextRecorder {

public:
	TextRecorder();
	virtual ~TextRecorder();

	TextRecordMemento* createMemo();
	void loadMemo(TextRecordMemento* m);

	void setText(const string& text) {
_text = text; }

	void print();

private:
	string _text;
};

#endif // _TEXTRECORDER_H

