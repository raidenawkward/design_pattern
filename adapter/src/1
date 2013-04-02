#ifndef _COLORPRINTER_H
#define _COLORPRINTER_H

enum Color {
	COLOR_BlACK = 30,
	COLOR_RED = 31,
	COLOR_GREEN,
	COLOR_YELLOW,
	COLOR_BLUE,
	COLOR_PURPLE,
	COLOR_DARKGREEN,
	COLOR_WHITE,
	COLOR_UNKNOWN
};

class ColorPrinter {

public:
	ColorPrinter();
	virtual ~ColorPrinter();

	void setColor(Color c);
	void print(const char* str);

protected:
	Color _color;
};

#endif // _COLORPRINTER_H
