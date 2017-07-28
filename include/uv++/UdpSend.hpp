#ifndef UV_UDP_SEND_HPP
#define UV_UDP_SEND_HPP

#include <functional>

#include <uv.h>

#include "Req.hpp"

namespace uv
{
	class Udp;


	class UdpSend : public Req<uv_udp_send_t>
	{
	public:
		inline UdpSend();

	private:
		friend class Udp;
	};





	UdpSend::UdpSend()
	{
		m_handle.data = this;
	}
}


#endif