#include "core_errno.h"

void *core_ascii_to_hex(char *in, int len, char *out)
{
    int i, j, high, low;
    for (i = 0, j = 0; i < len; i+=2, j+=1)
    {
        high = in[i]  > '9' ? in[i] - 'A' + 10 : in[i] - '0';
        low = in[i+1] > '9' ? in[i+1] - 'A' + 10 : in[i+1] - '0';

        out[j] = (high << 4) | low;
    }

    return out;
}