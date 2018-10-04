#include <openssl/ssl.h>

void CRYPTO_free(void *str) {
    free(str);
}
