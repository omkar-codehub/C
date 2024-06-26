#include<stdio.h>

int main(){
    int a = 14;
    int x = printf("value of a = %d\n",a);  //printf is a function which displays output in console
    printf("Value of printf = %d\n",x);   //\n and space are also counted as 1 character

    int b,c;
    printf("Enter 2 numbers: ");
    int y = scanf("%d %d",&b,&c);   //scanf is a function which take input from keyboard. 
    printf("Value of scanf is = %d\n",y); // it prints the count of no. of inputs taken

    char n[10];
    printf("Enter your name: ");
    int z = scanf("%s",n);      //for string & is not required in scanf function
    printf("%d %c",z,n[8]);     // 1 is output for this

    return 0;

}