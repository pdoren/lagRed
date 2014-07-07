#include "QThreadSPL.h"


bool QThreadSPL::startSocket(){
	return socket.setBlocking(false) &&
	socket.setBroadcast(true) &&
	socket.bind("0.0.0.0", PORT_TEAM) &&
	socket.setTarget(BROADCAST_ADDR, PORT_TEAM) &&
	socket.setLoopback(false);
}