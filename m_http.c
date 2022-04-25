#include "m_http.h"
#include "mw_utils.h"

#include <uv.h>

int mw_http_new(mw_http_t** h, const mw_string* url)
{
    mw_http_t* tmp;
    tmp = mw_alloc(sizeof *tmp);
    if(!tmp) {
        return UV_EAI_MEMORY;
    }
    *h = tmp;


    return 0;
}