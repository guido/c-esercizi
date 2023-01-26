#include "stdbool.h"
#include "stdio.h"
#include "string.h"

bool check(char *v1, char *v2, int dim1, int dim2);
bool cerca(char c, char *v2, int dim2);

int main() {
  char *t1 = "aybc";
  char *t2 = "xbcd";

  bool ok = check(t1, t2, strlen(t1), strlen(t2));

  printf("risultato %d, %s - %s", ok, t1, t2);
}

bool check(char *v1, char *v2, int dim1, int dim2) {
  for (int j = 0; j < dim1; ++j) {
    if (cerca(v1[j] + 1, v2, dim2)) {
      continue;
    }
    return false;
  }

  return true;
}

bool cerca(char c, char *testo, int dim) {
  for (int j = 0; j < dim; ++j) {
    if (testo[j] == c)
      return true;
  }
  return false;
}