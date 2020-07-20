#include "hex.h"

char hex_to_int(char c) {
  if (c >= '0' && c <= '9') return      c - '0';
  if (c >= 'A' && c <= 'F') return 10 + c - 'A';
  if (c >= 'a' && c <= 'f') return 10 + c - 'a';
  return -1;
}

void from_hex(void* ptr, char* hex, size_t nbytes) {
    for (size_t i = 0; i < nbytes; i++) {
        char high = hex_to_int(hex[2 * i]);
        char low = hex_to_int(hex[2 * i + 1]);
        ((char*)ptr)[i] = high << 4 | low;
    }
}

void to_hex(void* ptr, size_t nbytes) {
    char* hexmap = "0123456789abcdef";
    for(size_t i = 0; i < nbytes; i++) {
        char c = ((char*)ptr)[i];
        char low = c & 0x0F;
        char high = (c >> 4) & 0x0F;
        printf("%c%c", hexmap[high], hexmap[low]);
    }
    printf("\n");
}