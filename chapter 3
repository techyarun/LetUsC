/*------------------------------Question 1------------------------------
If cost price and selling price of an item are input through the
keyboard, write a program to determine whether the seller has
made profit or incurred loss. Also determine how much profit he
made or loss he incurred.
----------------------------------------------------------------------*/
/*Formula:
                    Selling price(sp) - Cost price(cp) -->sp>0 means
                    Cost price(cp) - Selling Price(sp) --> sp<0 means
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    float sp,cp;
    printf("Enter the Cost price and Selling price: ");
    scanf("%f %f",&cp,&sp);
    if(sp-cp>0){
        printf("Profit Occur: %2f\n",sp-cp);
    }else if(sp-cp<0){
        printf("Loss Occur: %2f\n",cp-sp);
    }
    return 0;
}

/*------------------------------Question 2------------------------------
Any integer is input through the keyboard. Write a program to find
out whether it is an odd number or even number.
----------------------------------------------------------------------*/
/*Formula:
                    even number: input%2==0
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n%2==0){
        printf("%d is Even number",n);
    }else{
        printf("%d is Odd number",n);
    }
    return 0;
}

/*------------------------------Question 3------------------------------
Any year is input through the keyboard. Write a program to
determine whether the year is a leap year or not.
(Hint: Use the % (modulus) operator)
----------------------------------------------------------------------*/
/*Formula:
                leap year=input/400 (or)
                leap year=input/100 (or)
                leap year=input/4
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
int  main(){
    int year;
    printf("Enter the year: ");
    scanf("%d",&year);
    if((year%100==0)&&(year%100==0)&&(year%4==0)){
        printf("%d is an leap year",year);
    }else{
        printf("%d is not an leap year",year);
    }
    return 0;
}

/*------------------------------Question 4------------------------------
According to the Gregorian calendar, it was Monday on the date
01/01/01. If any year is input through the keyboard write a program
to find out what is the day on 1st January of this year.
----------------------------------------------------------------------*/
/*Formula:
            normal days=(input year - 1) * 365 L
            leap days=(input year-1)/4- (input year-1)/100+(input year-1)/400;
            total days=normal days + leap days
            first day=total days % 7 (7 days in a week)
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int year,firstDay,leapDay;
    long int normalDays,totalDays;
    printf("Enter the year: ");
    scanf("%d",&year);
    normalDays= (year-1)*365L;
    leapDay=(year-1)/4- (year-1)/100+(year-1)/400;
    totalDays=leapDay+normalDays;
    firstDay=totalDays%7;
    if(firstDay==0){
        printf("Monday");
    }
    if(firstDay==1){
        printf("Tuesday");
    }
    if(firstDay==2){
        printf("Wednesday");
    }
    if(firstDay==3){
        printf("Thursday");
    }
    if(firstDay==4){
        printf("Friday");
    }
    if(firstDay==5){
        printf("Saturday");
    }
    if(firstDay==6){
        printf("Sunday");
    }
    return 0;
}

/*------------------------------Question 5------------------------------
A five-digit number is entered through the keyboard. Write a
program to obtain the reversed number and to determine whether
the original and reversed numbers are equal or not
----------------------------------------------------------------------*/
/*Formula:
           -->store number locally on another variable
           -->if number not equal to 0 then condition satisfies
           -->rev=rev * 10;
           -->rev=rev+input%10;
           -->number=number/10;
           -->check locally store temp variable with reverse number
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
int  main(){
    int number,temp,rev=0;
    printf("Enter five digit number: ");
    scanf("%d",&number);
    temp=number;
    while(number!=0){
            rev=rev*10;
            rev=rev+number%10;
            number=number/10;
    }
    if(temp==rev){
        printf("Reverse number is Equal or Palindrome");
    }else{
        printf("Reverse number is not Equal or not an Palindrome");
    }
    return 0;
}

/*------------------------------Question 6------------------------------
If the ages of Ram, Shyam and Ajay are input through the keyboard,
write a program to determine the youngest of the three.
----------------------------------------------------------------------*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
int ram,sam,ajay;
printf("Enter the age of Ram, Shyam and Ajay respectively : ");
scanf("%d%d%d", &ram,&sam,&ajay);
if(ram<sam && ram<ajay)
	printf("\nRam is youngest among all.");
else if(sam<ram && sam<ajay)
	printf("\nShyam is youngest among all.");
else
	printf("\nAjay is youngest among all.");
return 0;
}

/*------------------------------Question 7------------------------------
Write a program to check whether a triangle is valid or not, when
the three angles of the triangle are entered through the keyboard.
A triangle is valid if the sum of all the three angles is equal to 180
degrees.
----------------------------------------------------------------------*/


#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int angle1,angle2,angle3,total;
    printf("Enter the angles of triangle: ");
    scanf("%d %d %d",&angle1,&angle2,&angle3);
    total=angle1+angle2+angle3;
    if(total==180){
        printf("Its valid...");
    }else{
        printf("Its not valid....");
    }
    return 0;
}

/*------------------------------Question 8------------------------------
Write a program to find the absolute value of a number entered
through the keyboard.
----------------------------------------------------------------------*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int number;
    printf("Enter the number : ");
    scanf("%d",&number);
    printf("\n The absolute value of %d  is : %d",number,abs(number));
    return 0;
}

/*------------------------------Question 9------------------------------
Given the length and breadth of a rectangle, write a program to find
whether the area of the rectangle is greater than its perimeter. For
example, the area of the rectangle with length = 5 and breadth = 4
is greater than its perimeter.
----------------------------------------------------------------------*/
/*Formula:
            area=length * breath
            perimeter= 2(length+breath)
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    float area,perimeter,l,b;
    printf("Enter the length and breath: ");
    scanf("%f%f",&l,&b);
    area=l*b;
    perimeter=2*l + 2*b;
    if(area>perimeter){
        printf("\nthe area of %f is greater than perimeter of %f",area,perimeter);
    }else{
        printf("\nthe area of %f is greater than perimeter of %f",area,perimeter);
    }
    return 0;
}

/*------------------------------Question 10------------------------------
Given three points (x1, y1), (x2, y2) and (x3, y3), write a program
to check if all the three points fall on one straight line.
----------------------------------------------------------------------*/
/*Formula:
                collinear=(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int x1,x2,x3,y1,y2,y3,linear;
    printf("\nEnter the value of X1 and Y1: ");
    scanf("%d%d",&x1,&y1);
    printf("\nEnter the value of X2 and Y2: ");
    scanf("%d%d",&x2,&y2);
    printf("\nEnter the value of X3 and Y3: ");
    scanf("%d%d",&x3,&y3);
    linear=(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
    if(!linear){
        printf("\nThe points are Collinear");
    }else{
        printf("\nThe points are not collinear");
    }
    return 0;
}

/*------------------------------Question 11------------------------------
Given the coordinates (x, y) of center of a circle and its radius, write
a program that will determine whether a point lies inside the circle,
on the circle or outside the circle.
(Hint: Use sqrt( ) and pow( )functions)
----------------------------------------------------------------------*/
/*Formula:
                    radius > sqrt(pow(x,2)+pow(y,2)) -->lies inside circle,
                    radius = sqrt(pow(x,2)+pow(y,2)) -->lies in circle,
                    radius < sqrt(pow(x,2)+pow(y,2)) -->lies outside circle
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    float x,y,radius;
    printf("Enter the radius: ");
    scanf("%f",&radius);
    printf("\nX and Y coordinates are : ");
    scanf("%f%f",&x,&y);
    if(radius > sqrt(pow(x,2)+pow(y,2))){
        printf("\nThe points lie inside the circle.");
    }else if (radius==sqrt(pow(x,2)+pow(y,2))){
        printf("\nThe points lie in the circle.");
    }else{
        printf("\nThe points lie outside the circle.");
    }
    return 0;
}

/*------------------------------Question 12------------------------------
Given a point (x, y), write a program to find out if it lies on the
X-axis, Y-axis or on the origin.
----------------------------------------------------------------------*/
/*Formula:
                (x,y)=(0,0) --> lies on orgin
                (x,y)=(0,1) --> lies on y-axis
                (x,y)=(1,0) --> lies on x-axis
                (x,y)=(1,1) --> lies on plane
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    float x,y;
    printf("Enter the x-y coordinates: ");
    scanf("%f%f",&x,&y);
    if(x==0 && y==0){
        printf("\nThe point is on orgin.");
    }else if(x==0 && y!=0){
        printf("\nThe point is on y-axis.");
    }else if(x!=0 && y==0){
        printf("\nThe point is on X-axis.");
    }else if(x!=0 && y!=0){
        printf("\nThe point is on the plane.");
    }
    return 0;
}
