// Finding area of rectangle
/*#include<stdio.h>
int main(){
    int a = 10;
    int b = 20;
    int r = a*b;
    printf("%d",r);
    return 0;
}*/
// Taking input from user
 /*#include <stdio.h>
int main(){
    printf("enter the value of a ");
    int a;
    scanf("%d",&a);
    printf("enter the value of b");
    int b;
    scanf("%d",&b);
    int r = a*b;
    printf("The area of rectangle is %d" , r);
    return 0;
} */
// area of circle and cylinder 
/*#include<stdio.h>
int main (){
    printf("enter the value of r");
    float r;
    scanf("%f",&r);
    float y = 3.14*r*r;
    printf(" the value of area of circle is %f",y);
 
    // finding the area of cylinder
    printf("\n enter the value of height h");
    float h;
scanf("%f",&h);
    float z = 3.14*r*r*h;
    printf("the value of area of cylinder is %f",z);
    return 0;
}*/
#include<stdio.h>
int main (){
    printf("enter the value of radius r");
    float r;
    scanf("%f",&r);
    printf("the area of circle with radius %f is%f ",r,3.14*r*r);
    return 0;

}
