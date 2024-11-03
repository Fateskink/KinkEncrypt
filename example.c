/* example.c */
#include "arcfour.h"
#define F fflush(stdout)

void printbin(int8 *input, const int16 size) {
  int16 i;
  int8 *p;
  // i = 32 aa
  // i = 31 bb

  assert(size > 0);

  for (i = size, p = input; i; i--, p++) {
    if (!(i % 2)) {
      printf("  ");
    }

    printf("%.02x", *p);
  }

  printf("\n");
  return;
}

int main() {
  // Arcfour *arc;
  int16 skey;
  // int16 stext;
  char *key, *from;
  // char *encrypted, *decrypted;

  key = "kink";
  skey = strlen(key);
  from = "test encrypt";
  // stext = strlen(from);

  printf("init encryption...");
  // ecr = rc4init(*key, skey);

  printf("done\n");

  printf("%s \n->" , from);

  // encrypted = rc4encrypt((int8 *)from, stext);
  printbin((int8 *)key, skey);

  return 0;
}
