#include <stdio.h>
#include <math.h>
int main()
{
int n;
double S, a, x, e;
printf("Input x: ");
scanf_s("%lf", &x);
printf("Input epsilon: ");
scanf_s("%lf", &e);
for (n = 2, S = a = 1; fabs(a) > e; n += 2)
{
a *= (x * x) / (n * (n - 1));
S += a;
}
printf("%lf", S);
}
