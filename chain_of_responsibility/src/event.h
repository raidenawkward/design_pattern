#ifndef _EVENT_H
#define _EVENT_H

class Event {

public:
	enum EventType {
		TYPE_KEY,
		TYPE_TOUCH,
		TYPE_UNKNOWN
	};

	Event(EventType type = TYPE_UNKNOWN);
	virtual ~Event();

	EventType getType() { return _type; }

private:
	EventType _type;
};

#endif // _EVENT_H

