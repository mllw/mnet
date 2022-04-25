#ifndef __M_CONN_H__
#define __M_CONN_H__

#include <uv.h>

struct mw_conn_s {
    uv_tcp_t tcp;
    
};

typedef struct mw_conn_s mw_conn_t;

#endif //!__M_CONN_H__