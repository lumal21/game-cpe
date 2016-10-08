/*
 * ConsoleOutput.h
 *
 *  Created on: 8 de out de 2016
 *      Author: lumal21
 */

#ifndef SRC_CONSOLEOUTPUT_H_
#define SRC_CONSOLEOUTPUT_H_

#include <string>

class ConsoleOutput {
public:
	enum ErrorsCode{

	};
	static void registerFatalError(std::string,int);
	static void registerError(std::string);
	static void registerEvent(std::string);
protected:
	std::string getFormatedTime();
};

#endif /* SRC_CONSOLEOUTPUT_H_ */
