#ifndef _DOC_H
#define _DOC_H

class Doc {

public:
	Doc();
	virtual ~Doc();

	void setTitle(const char* title);
	char* getTitle();
	void setBody(const char* body);
	char* getBody();
	void setAuthor(const char* author);
	char* getAuthor();

	void printDoc();

private:
	char* _title;
	char* _body;
	char* _author;
};

#endif // _DOC_H

