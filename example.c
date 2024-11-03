/* example.c */
#include "encrypt.h"
#define F fflush(stdout)

void printbin(int8 *input, const int16 size) {
  int16 i;
  int8 *p;
  // i = 32 aa
  // i = 31 bb

  assert(size > 0);

  for (i = size, p = input; i; i--, p++) {
    if (!((i + 1) % 2)) {
      printf("  ");
    }

    printf("%.02x", *p);
  }

  printf("\n");
  return;
}

int main() {
  // Encrypt *ecr;
  int16 skey;
  // int16 stext;
  char *key, *from;
  // char *encrypted, *decrypted;

  key = "kink";
  skey = strlen(key);
  from = "test encrypt";
  // stext = strlen(from);

  printf("init encryption...\n");
  // ecr = init_encrypt(*key, skey);

  printf("done\n");

  printf("%s ->\n" , from);

  // encrypted = kink_encrypt((int8 *)from, stext);
  printbin((int8 *)key, skey);

  return 0;
}
