/*
 * Printer.h
 *
 *  Created on: Jul 4, 2014
 *      Author: jh
 */

#ifndef PRINTER_H_
#define PRINTER_H_

class Printer
{
private:
	char str[];

public:
	void SetString(char *s);
	void ShowString();
};

#endif /* PRINTER_H_ */
