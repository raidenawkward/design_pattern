#include "doc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Doc::Doc()
	:_title(NULL),
	_body(NULL),
	_author(NULL)
{
}

Doc::~Doc()
{
	if (_title)
		free(_title);
	if (_body)
		free(_body);
	if (_author)
		free(_author);
}

void Doc::setTitle(const char* str)
{
	_title = (char*)calloc(1, sizeof(char) * (strlen(str) + 1));
	if (_title)
		strcpy(_title, str);
}

char* Doc::getTitle()
{
	return _title;
}

void Doc::setBody(const char* str)
{
	_body = (char*)calloc(1, sizeof(char) * (strlen(str) + 1));
	if (_body)
		strcpy(_body, str);
}

char* Doc::getBody()
{
	return _body;
}

void Doc::setAuthor(const char* str)
{
	_author = (char*)calloc(1, sizeof(char) * (strlen(str) + 1));
	if (_author)
		strcpy(_author, str);
}

char* Doc::getAuthor()
{
	return _author;
}

void Doc::printDoc()
{
	printf("Title: %s\n", _title);
	printf("Body: %s\n", _body);
	printf("Author: %s\n", _author);
}
