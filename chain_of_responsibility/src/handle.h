#ifndef _HANDLE_H
#define _HANDLE_H

class Handle {

public:
	virtual ~Handle();

	void setSuccessor(Handle* s) { _successor = s; }
	Handle* getSuccessor() { return _successor; }

protected:
	Handle();
	Handle(Handle* s);

private:
	Handle* _successor;
};

#endif // _HANDLE_H

