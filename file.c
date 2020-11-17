#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <cmath>

int main()
{
 printf("%f \n", cos(1));
 const int n = 40; // 0.034957
 if (n < 2) return 1;
 float res = n;
 for (int i = n-1; i >= 0; i--)
 res = i + cos(res);
 printf("%f\n", res);
}
