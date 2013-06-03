#include "scorelist.h"

ScoreList::ScoreList()
	: _count(0)
{
}

ScoreList::~ScoreList()
{
}

bool ScoreList::append(Score* score)
{
	if (_count >= LIST_MAX_SIZE)
		return false;

	_list[_count++] = score;
}

Score* ScoreList::get(int index)
{
	if (index < 0 || index >= _count)
		return NULL;

	return _list[index];
}

ScoreIterator* ScoreList::iterator()
{
	ScoreIterator* it = new ScoreIterator(this);

	return it;
}
