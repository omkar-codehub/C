// Size and range of data types is depends on the compiler

#include<stdio.h>
int main()
{
    int a;
    short b;
    char c;
    double d;
    long e;
    float f;    //we cannot use long float
    long double g;  //we cannot use long long double (cannot use more than one long)
    long int h;
    long long int i;    //we cannot use more than 2 long for int
    short int j;
    long long k;

    // only above combinations are possible
    printf("int %lu\n",sizeof(a));
    printf("short %lu\n",sizeof(b));
    printf("char %lu\n",sizeof(c));
    printf("double %lu\n",sizeof(d));
    printf("long %lu\n",sizeof(e));
    printf("float %lu\n",sizeof(f));
    printf("long double %lu\n",sizeof(g));
    printf("long int %lu\n",sizeof(h));
    printf("long long int %lu \n",sizeof(i));
    printf("short int %lu \n",sizeof(j));
    printf("long long %lu \n",sizeof(k));
    return 0;
}

//return type of size of is long unsined int