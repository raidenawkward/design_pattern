#include <stdio.h>
#include <stdlib.h>

#include <iostream>

#include "score.h"
#include "scorelist.h"
#include "scoreiterator.h"

using namespace std;

int main(int argc, char** argv)
{
	ScoreList* list = new ScoreList();

	Score* s1 = new Score("s1", 10);
	Score* s2 = new Score("s2", 15);
	Score* s3 = new Score("s3", 9);
	Score* s4 = new Score("s4", 0);
	Score* s5 = new Score("s5", 19);

	list->append(s1);
	list->append(s2);
	list->append(s3);
	list->append(s4);
	list->append(s5);

	ScoreIterator* it= list->iterator();

	it->first();
	do {
		Score* s = it->current();
		if (!s)
			continue;

		cout<<s->getName()<<":"<<s->getScore()<<endl;

	} while (it->next());

	for (int i = 0; i < list->count(); ++i) {
		if (list->get(i))
			delete list->get(i);
	}
	delete list;
	delete it;

	return 0;
}
