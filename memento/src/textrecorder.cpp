#include "textrecorder.h"
#include <iostream>

TextRecorder::TextRecorder()
{
}

TextRecorder::~TextRecorder()
{
}

TextRecordMemento* TextRecorder::createMemo()
{
	TextRecordMemento* m = new TextRecordMemento();
	m->setText(_text);

	return m;
}

void TextRecorder::loadMemo(TextRecordMemento* m)
{
	if (!m)
		return;

	_text = m->getText();
}

void TextRecorder::print()
{
	cout<<_text<<endl;
}
