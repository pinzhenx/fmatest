#include "hex.h"

void mul_add(float *a, float *b, float scale, size_t n) {
    for (size_t i = 0; i < n; i++)
        a[i] += scale * b[i];
}

int main() {
    float a[4];
    float b[4];
    from_hex(a, "40a2ae3cf820073f6ef0b63f3c020a3e", sizeof(a));
    from_hex(b, "7077f13f803c763e0099454015633e40", sizeof(b));
    mul_add(a, b, 0.01, sizeof(a) / sizeof(a[0]));
    to_hex(a, sizeof(a));
    return 0;
}