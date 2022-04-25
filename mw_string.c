#include "mw_string.h"
#include "mw_utils.h"

#include <string.h>

int mw_string_new(mw_string** mwstr ,const char* str, size_t size)
{
    char* tmpstr;
    mw_string* tmp = mw_alloc(sizeof *tmp);
    if(!tmp) {
        goto cleanup ;
    }
    tmpstr = mw_alloc(size);
    if(!tmpstr) {
        goto cleanup;
    }
    memcpy(tmpstr,str,size);
    tmp->base = tmpstr;
    tmp->len = size;
    *mwstr = tmp;

    return 0;

cleanup:
    mw_string_free(tmp);
    return UV_EAI_MEMORY;
}


void mw_string_free(mw_string* str)
{
    if(str) {
        mw_free(str->base);
        mw_free(str);
    }
}

int mw_string_cmp(const mw_string *str1, const mw_string *str2)
{
    if(!str1 && !str2) {
        return 0;
    }
    if(!str1) {
        return -1;
    }
    if(!str2) {
        return 1;
    }
    if(str1->len != str2->len) {
        return str1->len - str2->len;
    }
    return memcmp(str1->base,str2->base,str1->len);
}