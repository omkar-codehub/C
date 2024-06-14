/*Documentation section*/

#include<stdio.h> //Preprocessor section

#define PI 3.14 //definition section

void area(int radius);    //Global declaration section

int main(){ // main section
   int radius = 5; //main body
   area(radius);
   return 0;
}

void area(int radius){      //Sub program section
    float area = PI * radius * radius;
    printf("Area of circle is %f",area);
}