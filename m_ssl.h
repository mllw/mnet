#ifndef __M_SSL_H__
#define __M_SSL_H__
#include <uv.h>


typedef struct m_ssl_ctx_s m_ssl_ctx_t;

struct m_ssl_tcp_s {
    uv_tcp_t tcp;
    m_ssl_ctx_t* ctx;
};

typedef struct m_ssl_tcp_s m_ssl_tcp_t;

int m_ssl_tcp_init(uv_loop_t* loop, m_ssl_tcp_t* ssl);

int m_ssl_tcp_connect();

#endif //!__M_SSL_H__