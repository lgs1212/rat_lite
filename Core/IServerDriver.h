#pragma once
#include "IBaseNetworkDriver.h"

namespace SL {
	namespace Remote_Access_Library {
		namespace Network {
			class Packet;
			class ISocket;

			class IServerDriver : public IBaseNetworkDriver {
			public:
				IServerDriver() {}
				virtual ~IServerDriver() {}
			};
		}
	}
}
