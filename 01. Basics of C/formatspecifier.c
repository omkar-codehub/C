#include<stdio.h>
int main() {
    int a = 10;
    printf("%d %i\n",a,a);	//%i and %d has no difference in ouput

    int b = 0253;
    printf("%o %i %d\n",b,b,b);

    int c =0x2a3c;
    printf("%x %i %d\n",c,c,c);

    int d = 0b01001;            //no special format specifier for binary numbers;
    printf("%d %i %x %o\n",d,d,d,d);

    int num;
    sscanf("042","%i",&num); //here %i works properly for scanning input
    printf("%o %i %d\n",num,num,num);

    char ch = 'a';
    printf("%c\n",ch);

    float f = 1213.426f;
    printf("%f %g %e\n",f,f,f);

    double h = 112.7438156;
    printf("%lf %G %E\n",h,h,h);

    long la = 123542;
    printf("%ld\n",la);

    long long lla = 123425778;
    printf("%lld\n",lla);

    short sa = 32767;
    printf("%hd\n",sa);

    long double ld = 3.1415926535897932382L;
    printf("%Lf \n",ld);

    float u = 0.00034;
    printf("%e",u); //%e prints in exponential form`

    return 0;
}



/* output

10 10

253 171 171

2a3c 10812 10812

9 9 9 11

42 34 34

a

1213.426025 1213.43 1.213426e+03

112.743816 112.744 1.127438E+02

123542

123425778

32767

3.141593 

3.400000e-04

*/