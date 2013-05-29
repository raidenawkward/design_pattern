#include <stdio.h>
#include <stdlib.h>

#include "textrecorder.h"
#include "textrecordmemento.h"


int main(int argc, char** argv)
{
	TextRecorder* recorder = new TextRecorder;

	recorder->setText("sentence 1");
	TextRecordMemento* m1 = recorder->createMemo();
	recorder->print();

	recorder->setText("sentence 2");
	TextRecordMemento* m2 = recorder->createMemo();
	recorder->print();

	recorder->loadMemo(m1);
	recorder->print();

	recorder->loadMemo(m2);
	recorder->print();

	return 0;
}
