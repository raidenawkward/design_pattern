#include "scoreiterator.h"

ScoreIterator::ScoreIterator(ScoreList* list)
	: _list(list), _current(0)
{
}

ScoreIterator::~ScoreIterator()
{
}

void ScoreIterator::first()
{
	if (!_list)
		return;

	_current = 0;
}

void ScoreIterator::end()
{
	if (!_list)
		return;

	_current = _list->count() - 1;
}

bool ScoreIterator::next()
{
	if (!_list)
		return false;

	if (_current >= _list->count() - 1)
		return false;

	++_current;

	return true;
}

Score* ScoreIterator::current()
{
	if (!_list)
		return NULL;

	return _list->get(_current);
}
