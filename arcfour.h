/* arcfour.h */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <errno.h>

#define arc_decrypt(x, y) arc_encrypt(x, y)
struct s_arcfour {

};

typedef unsigned char int8;
typedef unsigned short int int16;
typedef unsigned int int32;
typedef struct s_arcfour Arcfour;

int main(void);

Arcfour *init_encrypt(int8, int16); // *key , size
int8 enc_byte(void);
int8 *kink_encrypt(int8*, int16);
