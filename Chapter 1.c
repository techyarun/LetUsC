/*------------------------------Question 1------------------------------
Ramesh’s basic salary is input through the keyboard. His dearness
allowance is 40% of basic salary, and house rent allowance is 20% of
basic salary. Write a program to calculate his gross salary.
----------------------------------------------------------------------*/
/*Formula for gross salary:
                    gross salary=DA+HRA+Basic salary
*/
#include<stdio.h>
#include<conio.h>
int main(){
    int bs,da,hra,gs;
    printf("Enter the Basic salary: ");
    scanf("%d",&bs);
    da=bs+0.4;
    hra=bs+0.2;
    gs=bs+da+hra;
    printf("Data allowance DA is: %d\n",da);
    printf("House Rent Allowance HRA is :%d\n",hra);
    printf("Gross salary is: %d",gs);
    return 0;
}

/*------------------------------Question 2------------------------------
The distance between two cities (in km.) is input through the
keyboard. Write a program to convert and print this distance in
meters, feet, inches and centimeters.
----------------------------------------------------------------------*/
/*Formula for Distance to Meter /Feet/inches/centimeter:
            1 km=1000 meter;
            1 km=3280.8399 feet;
            1 km=39370.0787 inch;
            1 km=100000 centimeter;
*/
#include<stdio.h>
#include<conio.h>
int main(){
    float km,meter,feet,inch,cm;
    printf("Enter the Kilometer:");
    scanf("%f",&km);
    meter=km*1000;
    feet=km*3280.8399;
    inch=km*39370.0787;
    cm=km*100000;
    printf("Distance between 2 cities in Meter: %.2f\n",meter);
    printf("Distance between 2 cities in Feet: %.2f\n",feet);
    printf("Distance between 2 cities in inch: %.2f\n",inch);
    printf("distance between 2 cities in Centimeter: %.2f\n",cm);
    return 0;
}

/*------------------------------Question 3------------------------------
If the marks obtained by a student in five different subjects are
input through the keyboard, write a program to find out the
aggregate marks and percentage marks obtained by the student.
Assume that the maximum marks that can be obtained by a student
in each subject is 100.
----------------------------------------------------------------------*/
/*Formula for to get total marks and their average percentage is :
                percentage=total marks/100
*/

#include<stdio.h>
#include<conio.h>
int main(){
    int m1,m2,m3,m4,m5,marks,percentage;
    printf("Enter the marks: ");
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
    marks=m1+m2+m3+m4+m5;
    percentage=marks/5;
    printf("Total aggregate marks: %d\n",marks);
    printf("Percentage: %d\n",percentage);
    return 0;
}

/*------------------------------Question 4------------------------------
Temperature of a city in Fahrenheit degrees is input through the
keyboard. Write a program to convert this temperature into
Centigrade degrees.
----------------------------------------------------------------------*/
/*Formula for converting Fahrenheit to Centigrade F->C
                    C=(f-32)*100/180
 */

#include<stdio.h>
#include<conio.h>
int main(){
    float f,c;
    printf("Enter the Fahrenheit: ");
    scanf("%f",&f);
    c=(f-32)*100/180;
    printf("C = %.2f",c);
    return 0;
}

/*------------------------------Question 5------------------------------
The length and breadth of a rectangle and radius of a circle are
input through the keyboard. Write a program to calculate the area
and perimeter of the rectangle, and the area and circumference of
the circle.
----------------------------------------------------------------------*/
/*Formula :
        area of rectangle=lenght * breath;
        perimeter of the rectangle=2(length * breath);
        area of circle=3.14*r^2;
        circumference of circle=2*3.14*r;
*/

#include<stdio.h>
#include<conio.h>
int main(){
    float l,b,r,area_rect,peri_rect,area_circle,Circumference_Circle;
    printf("Enter the length: ");
    scanf("%f",&l);
    printf("Enter the Breath:  ");
    scanf("%f",&b);
    area_rect=l*b;
    peri_rect=2*(l+b);
    printf("Area of Rectangle is: %.2f\n",area_rect);
    printf("Perimeter of Rectangle: %.2f\n\n",peri_rect);
    printf("Enter the Radius: ");
    scanf("%f",&r);
    area_circle=3.14*r*r;
    Circumference_Circle=2*3.14*r;
    printf("Area of Circle is : %.2f\n",area_circle);
    printf("Circumference of Circle is: %.2f\n",Circumference_Circle);
    return 0;
}

/*------------------------------Question 6------------------------------
Paper of size A0 has dimensions 1189 mm x 841 mm. Each
subsequent size A(n) is defined as A(n-1) cut in half parallel to its
shorter sides. Thus paper of size A1 would have dimensions 841
mm x 594 mm. Write a program to calculate and print paper sizes
A0, A1, A2, … A8.
----------------------------------------------------------------------*/
/*Formula for sheet
                A=1000;B=800;
                C=B;D=A/2;
*/

#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r;
    a=1189;
    b=841;
    printf("A0 : %dmm x %dmm\n",a,b);
    c=b;
    d=a/2;
    printf("A1 : %dmm x %dmm\n",c,d);
    e=d;
    f=c/2;
    printf("A2 : %dmm x %dmm\n",e,f);
    g=f;
    h=e/2;
    printf("A3 : %dmm x %dmm\n",g,h);
    i=h;
    j=g/2;
    printf("A4 : %dmm x %dmm\n",i,j);
    k=j;
    l=i/2;
    printf("A5 : %dmm x %dmm\n",k,l);
    m=l;
    n=k/2;
    printf("A6 : %dmm x %dmm\n",m,n);
    o=n;
    p=m/2;
    printf("A7 : %dmm x %dmm\n",o,p);
    q=p;
    r=o/2;
    printf("A8 : %dmm x %dmm\n",q,r);
    return 0;
}
