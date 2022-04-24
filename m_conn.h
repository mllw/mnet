#ifndef __M_CONN_H__
#define __M_CONN_H__

#include <uv.h>

struct m_conn_s {
    uv_tcp_t tcp;
    
};

#endif //!__M_CONN_H__