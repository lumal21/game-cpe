/*
 * Client.cpp
 *
 *  Created on: 7 de out de 2016
 *      Author: lumal21
 */

#include "Client.hpp"
#include "../Server/Server.hpp"
#include "../ConfigProgram/ConfigProgram.hpp"

namespace Client {

Client::Client(int argc, char* argv[]) {
	if(argc == 2){
		if(argv[1] == "config")
		{
			ConfigProgram::ConfigProgram();
		}
		else if(argv[1] == "server")
		{
			Server::Server();
		}
	}else{
		Server::Server();
		initGameClient();
	}

}

Client::~Client() {
	// TODO Auto-generated destructor stub
}

} /* namespace Client */
