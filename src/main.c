#include "stdio.h"
#include "string.h"

int paragona(char *t1, char *t2) {
  for (char *p = t1, *q = t2; *p && *q; ++p, ++q) {
    if ((*p) + 1 == *q)
      continue;
    return 0;
  }
  return 1;
}

int main() {
  char *t1 = "abc";
  char *t2 = "xbcd";

  int ok = paragona(t1, t2);

  printf("risultato %d, %s - %s", ok, t1, t2);
}
