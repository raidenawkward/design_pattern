#ifndef _SCORELIST_H
#define _SCORELIST_H

#include "score.h"
#include "scoreiterator.h"

#define LIST_MAX_SIZE (32)

class ScoreIterator;

class ScoreList {

public:
	ScoreList();
	virtual ~ScoreList();

	bool append(Score* score);
	Score* get(int index);
	int count() { return _count; }

	ScoreIterator* iterator();

private:
	Score* _list[LIST_MAX_SIZE];
	int _count;
};

#endif // _SCORELIST_H

