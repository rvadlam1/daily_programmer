#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int num, denom, hcf;
  if (argc == 3) {
    num = atoi(argv[1]);
    denom = atoi(argv[2]);
    hcf = gcd(num,denom);
    printf("\n%d %d\n",(num/hcf),(denom/hcf));
    return 0;
  } else {
    printf("\nNumber of args=%d",argc);
    return 1;
  }
}

int gcd(int a, int b) {
  if (b==0) {
    return a;
  } else {
    return gcd(b, a%b);
  }
}
