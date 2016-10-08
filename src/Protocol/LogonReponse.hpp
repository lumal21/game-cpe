/*
 * LogonReponse.hpp
 *
 *  Created on: 8 de out de 2016
 *      Author: lumal21
 */

#ifndef SRC_PROTOCOL_LOGONREPONSE_HPP_
#define SRC_PROTOCOL_LOGONREPONSE_HPP_

namespace Protocol {

class LogonReponse: public Protocol {
public:
	enum Status{
		SUCCESS,
		INVALID_USERNAME,
		INVALID_PASSWORD,
		CREATE_PASSWORD,
		PASSWORD_INCORRECT,
	};
	LogonReponse(std::string,char);
	char getStatus();
	virtual ~LogonReponse();
protected:
	char m_id = 0x03;
	char m_status;
};

} /* namespace Protocol */

#endif /* SRC_PROTOCOL_LOGONREPONSE_HPP_ */
