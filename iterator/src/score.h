#ifndef _SCORE_H
#define _SCORE_H

#include <string>

using namespace std;

class Score {

public:
	Score(const string& name, int score) : _name(name), _score(score) {}
	virtual ~Score();

	void setName(const string& name) { _name = name; }
	string getName() { return _name; }

	void setScore(int score) { _score = score; }
	int getScore() { return _score; }

private:
	string _name;
	int _score;
};

#endif // _SCORE_H

