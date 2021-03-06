#include "lib.hpp"

#include <stdio.h>
#include <stdlib.h>

void gen_random(char *s, const int len) {
    static const char alphanum[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < len-1; ++i) {
        s[i] = alphanum[random() % (sizeof(alphanum) - 1)];
    }
    s[len-1] = 0;
}
