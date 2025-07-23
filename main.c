#include <stdio.h>

static inline int add(int a, int b) {
  return (a + b);
}

int main(void)
{
  int a = 2;
  int b = 3;
  printf("a + b = %d\n", add(a, b));

  return 0;
}
