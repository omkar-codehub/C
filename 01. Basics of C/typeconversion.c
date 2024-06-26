#include<stdio.h>

int main()
{
    int a = 324167;
    short b = 523;
    char c = 120;
    float e = 7.342f;
    double d = 1.5342278;
    //implicit type conversion;
    d = e;
    float ab = a;
    int bc = b;
    short cd = c;

    printf(" %lf %f %d %hd \n",d,ab,bc,cd);

    //explicite type conversion;
    int a = 15,b = 4;
    float x = a/b;
    printf("x=%f\n",x);
    float z = (float)a/b; //explicite type conversion for accurate answer
    printf("z=%f\n",z);

    return 0;
}