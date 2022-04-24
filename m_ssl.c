#include "m_ssl.h"

int m_ssl_tcp_init(uv_loop_t* loop, m_ssl_tcp_t* ssl)
{
    int rv = 0;
    rv = uv_tcp_init(loop,&ssl->tcp);
    
    return rv;
}