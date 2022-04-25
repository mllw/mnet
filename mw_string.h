#ifndef __MW_STRING_H__
#define __MW_STRING_H__

#include <uv.h>

typedef uv_buf_t mw_string;

#define mw_string_init(arg,size) uv_buf_init(arg,size)

int mw_string_new(mw_string **mwstr ,const char *str, size_t size);
void mw_string_free(mw_string *str);

int mw_string_cmp(const mw_string *str1, const mw_string *str2);



#endif //!__MW_STRING_H__