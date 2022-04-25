#include "mw_utils.h"
#include <string.h>

void* mw_alloc(size_t size)
{
    void * ret;
    ret = malloc(size);
    if(ret) {
        memset(ret,0,size);
    }
    return ret;
}

void mw_free(void* arg)
{
    if(arg) {
        free(arg);
    }
}
