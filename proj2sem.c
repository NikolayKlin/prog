#include <stdio.h>

#define _CRT_SECURE_NO_WARNINGS

typedef unsigned char byte;
typedef unsigned short int word;
typedef word Adress;

#define MEMSIZE (64*1024)

void b_write(Adress adr, byte b);
byte b_read(Adress adr);
void w_write(Adress adr, word w);
word w_read(Adress adr);

int main()
{
	return 0;
}
