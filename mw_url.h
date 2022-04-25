#ifndef __MW_URL_H__
#define __MW_URL_H__

#include "list.h"
#include "mw_string.h"

struct mw_url_s {

};

struct mw_url_param {
    mw_string key;
    mw_string value;
};

struct mw_url_param_list {
    struct list_head list;
};



#endif //!__MW_URL_H__