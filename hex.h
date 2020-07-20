#include <stdio.h>

// torch.from_numpy(numpy.frombuffer(bytes.fromhex(hex_str), dtype='float32'))
void from_hex(void* ptr, char* hex, size_t nbytes);

// t.numpy().tobytes().hex()
void to_hex(void* ptr, size_t nbytes);