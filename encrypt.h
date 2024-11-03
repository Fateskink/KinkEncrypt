/* encrypt.h */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <errno.h>

#define kink_decrypt(x, y) kink_encrypt(x, y)
struct s_encrypt {

};

typedef unsigned char int8;
typedef unsigned short int int16;
typedef unsigned int int32;
typedef struct s_encrypt Encrypt;

int main(void);

Encrypt *init_encrypt(int8, int16); // *key , size
int8 enc_byte(void);
int8 *kink_encrypt(int8*, int16);
