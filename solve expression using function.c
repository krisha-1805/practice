#include<stdio.h>
float add(float x, float y)
{
    return x + y;
}
float subtract(float x, float y)
{
    return x - y;
}
float multiply(float x, float y)
{
    return x*y;
}
float divide(float x, float y)
{
    return x/y;
}
int main()
{
    float a, b, c, d, e;
    printf("Enter 5 values: ");
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
    float n=add((5*a), (6*b));
    float num=multiply(n, (7*e));
    float den=subtract((3*c), (4*d));
    float ans=divide(num, den);
    printf("Answer= %f", ans);
    return 0;
}
