#include <cstdint>
#include <string.h>
#include <stdlib.h>

extern "C" {
  const char *path_join(const char *x, const char *y) {
    char *ret = (char *) malloc(100);
    strcpy(ret, x);

    if (strcmp(x, "/")!=0) {
      strcat(ret, "/");
    }

    strcat(ret, y);

    return ret;
  }
}
