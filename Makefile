fma: fma.c hex.c
	gcc fma.c hex.c -mavx2 -mfma -Ofast -o fma

nofma: fma.c hex.c
	gcc fma.c hex.c -o nofma

all: fma nofma
	./fma
	./nofma

clean:
	rm fma nofma

	