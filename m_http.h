#ifndef __M_HTTP_H__
#define __M_HTTP_H__

#include "m_conn.h"
#include "mw_string.h"

struct mw_http_s {
    mw_conn_t conn;
};

typedef struct mw_http_s mw_http_t;

int mw_http_new(mw_http_t** h, const mw_string* url);

#endif //!__M_HTTP_H__