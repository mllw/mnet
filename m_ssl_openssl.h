#ifndef __M_SSL_OPENSSL_H__
#define __M_SSL_OPENSSL_H__

#include <openssl/ssl.h>

struct m_ssl_ctx_s
{
    SSL *ssl;
    SSL_CTX *ctx;
};

#endif //!__M_SSL_OPENSSL_H__