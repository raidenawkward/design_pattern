#ifndef _SCOREITERATOR_H
#define _SCOREITERATOR_H

#include "iterator.h"
#include "score.h"
#include "scorelist.h"

class ScoreList;

class ScoreIterator : public Iterator {

public:
	ScoreIterator(ScoreList* list);
	virtual ~ScoreIterator();

	virtual void first();
	virtual void end();
	virtual bool next();

	virtual Score* current();

private:
	ScoreList* _list;
	int _current;
};

#endif // _SCOREITERATOR_H

