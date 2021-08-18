/*------------------------------Question 1------------------------------
Any year is entered through the keyboard, write a program to
determine whether the year is leap or not. Use the logical operators
&& and ||.
----------------------------------------------------------------------*/

#include<stdio.h>
#include<math.h>
#include<conio.h>
int main(){
    int year;
    printf("Enter the year: ");
    scanf("%d",&year);
    if(year%4==0 || year%400==0 || year%100==0){
        printf("%d is leap year",year);
    }else{
        printf("%d is not leap year",year);
    }
    return 0;
}

/*------------------------------Question 2------------------------------
Any character is entered through the keyboard, write a program to
determine whether the character entered is a capital letter, a small
case letter, a digit or a special symbol.
The following table shows the range of ASCII values for various
characters:
characters    :A – Z   a – z    0 – 9   special symbols
ASCII Values  :65–90  97–122   48– 57  0 - 47, 58 - 64, 91 - 96, 123 - 127
----------------------------------------------------------------------*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    char character;
    printf("Enter the Character: ");
    scanf("%c",&character);
    if(character>=65 && character<=90){
        printf("\n%c is capital letter.",character);
    }else if(character>=97 && character<=122){
        printf("\n%c is small letter.",character);
    }else if(character>=48 && character<=57){
        printf("\n%c is a digit.",character);
    }else{
        printf("\n%c is a special character.",character);
    }
    return 0;
}

/*------------------------------Question 3------------------------------
A certain grade of steel is graded according to the following
conditions:
(i) Hardness must be greater than 50
(ii) Carbon content must be less than 0.7
(iii) Tensile strength must be greater than 5600
The grades are as follows:
Grade is 10 if all three conditions are met
Grade is 9 if conditions (i) and (ii) are met
Grade is 8 if conditions (ii) and (iii) are met
Grade is 7 if conditions (i) and (iii) are met
Grade is 6 if only one condition is met
Grade is 5 if none of the conditions are met
Write a program, which will require the user to give values of
hardness, carbon content and tensile strength of the steel under
consideration and output the grade of the steel
----------------------------------------------------------------------*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int hard,tensile;
    float carbon;
    printf("Enter the Hardness: ");
    scanf("%d",&hard);
    printf("Enter the Tensile: ");
    scanf("%d",&tensile);
    printf("Enter the Carbon value: ");
    scanf("%d",&carbon);
    if(hard>50 && carbon<0.7 && tensile>5600){
        printf("Grade is 10");
    }else if(hard>50 && carbon<0.5 && tensile<=5600){
        printf("Grade is 9");
    }else if(hard<=50 && carbon>0.7 && tensile>5600){
        printf("Grade is 8");
    }else if(hard>50 && carbn<=0.7 && tensile>5600){
        printf("Grade is 7");
    }else{
        if(hard>50 && carbon>=0.7 && tensile<==5600 || hard<=50 && carbon<0.7 &7 tensile<=5600
           || hard<=50 && carbon>=0.7){
            printf("Grade is 6");
           }else{
               printf("Grade is 5");
           }
    }
}

/*------------------------------Question 4------------------------------
If the three sides of a triangle are entered through the keyboard,
write a program to check whether the triangle is valid or not. The
triangle is valid if the sum of two sides is greater than the largest of
the three sides.
----------------------------------------------------------------------*/

#include<stdio.h>
#include<math.h>
#include<conio.h>
int main(){
    int s1,s2,s3,large;
    printf("Enter the sides of an triangle : ");
    scanf("%d%d%d",&s1,&s2,&s3);
    if(s1>s2 && s1>s3){
        large=s1;
    }else if(s2>s1 && s2>s3){
        large=s2;
    }else{
        large=s3;
    }
    if((s1+s2)>large || (s2+s3)>large || (s3+s1)>large){
        printf("\nTriangle is valid");
    }else{
        printf("\nTriangle is invalid");
    }
    return 0;
}

/*------------------------------Question 5------------------------------
If the three sides of a triangle are entered through the keyboard,
write a program to check whether the triangle is isosceles,
equilateral, scalene or right angled triangle.
----------------------------------------------------------------------*/
/*Hint:
            -->All sides equal means its equilateral;
            -->if 2 sides equal its isoseles;
            -->all sides different means is ;
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int x,y,z;
    printf("Enter the Sides: ");
    scanf("%d%d%d",&x,&y,&z);
    if(x*x+y*y==z*z){
        printf("\nIts right angle triangle");
    }else if((x==y)&&(y==z)){
        printf("\nThe triangle is equilateral");
    }else if((x==z) && (x!=y) || (y==z) && (y!=x)||(x==y)&&(x!=y)){
        printf("\nthe triangle is isoseles");
    }else{
        printf("\nThe triangle is scalene.");
    }
    return 0;
}

/*------------------------------Question 6------------------------------
In boxing the weight class of a boxer is decided as per the following
table. Write a program that receives weight as input and prints out
the boxer’s weight class.
Boxer Class    : Flyweight Bantamweight Featherweight Middleweight Heavyweight
eight in Pounds: < 115     115 - 121     122 - 153    154 – 189    >= 190
----------------------------------------------------------------------*/

#include<stdio.h>
#include<math.h>
#include<conio.h>
int main(){
    int weight;
    printf("Enter the weight: ");
    scanf("%d",&weight);
    if(weight<115){
        printf("\nFlyweight");
    }else if(weight>=115 && weight<=121){
        printf("\nBantaweight");
    }else if(weight>=122 && weight<=153){
        printf("\nFeatherweight");
    }else if(weight>=154 && weight<=189){
        printf("\nMiddleweight");
    }else if(weight>=190){
        printf("\nHeavyweight");
    }
    return 0;
}

/*------------------------------Question 7------------------------------
In digital world colors are specified in Red-Green-Blue (RGB) format,
with values of R, G, B varying on an integer scale from 0 to 255. In
print publishing the colors are mentioned in Cyan-Magenta-Yellow-Black (CMYK)
format, with values of C, M, Y, and K varying on a real
scale from 0.0 to 1.0. Write a program that converts RGB color to
CMYK color as per the following formula:

        cyan=(white-red/255)/white;
        magenta=(white-green/255)/white;
        yellow=(white-blue/255)/white;
        black=1-white;

White = Max(Red / 255,Green / 255,Blue / 255)
Note that if the RGB values are all 0, then the CMY values
are all 0 and the K value is 1
----------------------------------------------------------------------*/

#include<stdio.h>
#include<math.h>
#include<conio.h>
int main(){
    float r,g,b,c,y,m,k,w=0;
    printf("Enter the R G B values: ");
    scanf("%f%f%f",&r,&g,&b);
    r=r/255;
    g=g/255;
    b=b/255;
    if(w<r){
        w=r;
    }else if(w<g){
        w=g;
    }else if(w<b){
        w=b;
    }
    c=(w-r)/w;
    m=(w-g)/w;
    y=(w-b)/w;
    k=1-w;
    printf("\nC : %f\nM :%f\nY :%f\nK :%f",c,m,y,k);
    return 0;
}

/*------------------------------Question 8------------------------------
Write a program that receives month and date of birth as input and
prints the corresponding Zodiac sign based on the following table:
Sun Sign Capricorn Aquarius Pisces Aries Taurus Gemini Cancer Leo
Virgo Libra Scorpio Sagittarius
From - To December 22 - January 19 January 20 - February 17 February 18 - March 19 March 20 - April 19
April 20 - May 20 May 21 - June 20 June 21 - July 22 July 23 - August 22 August 23 - September 22
September 23 - October 22 October 23 - November 21 November 22 - December 21
----------------------------------------------------------------------*/

#include<stdio.h>
#include<math.h>
#include<conio.h>
int main(){
    int d,m;
    printf("Enter the date and month of birth: ");
    scanf("%d %d",&d,&m);
    printf("\nZodiac is : ");
    if(m==12 && d>=22 || m==1 && d<=19)
	printf("Capricorn.");
	if(m==1 && d>=20 || m==2 && d<=17)
	printf("Aquaries.");
    if(m==2 && d>=18 || m==3 && d<=19)
	printf("Pisces");
    if(m ==3 && d>=20 || m==4 && d<= 19)
	printf("Aries");
    if(m==4 && d>=20 || m==5 && d<=20)
	printf("Taurus");
    if(m==5 && d>=21 || m==6 && d<=20)
	printf("Gemini");
    if(m==6 && d>=21 || m==7 && d<=22)
	printf("cancer");
    if(m==7 && d>=23 || m==8 && d<=22)
	printf("Leo");
    if(m==8 && d>=23 || m==9 && d<=22)
	printf("Virgo");
    if(m == 9 && d >= 23 || m == 10 && d <=22)
	printf("Libra");
    if(m==10 && d>=23 || m==11 && d<=21)
	printf("Scorpio");
    if(m==11 && d>=22 || m==12 && d<=21)
	printf("Sagittarius.");
    return 0;
}

/*------------------------------Question 9------------------------------
The Body Mass Index (BMI) is defined as ratio of the weight of a
person (in kilograms) to the square of the height (in meters). Write
a program that receives weight and height, calculates the BMI, and
reports the BMI category as per the following table:
----------------------------------------------------------------------*/

#include<stdio.h>
int main()
{
float w, h, bmi;

printf("\nEnter you wight (in kg) and height (in m) : ");
scanf("%f %f", &w, &h);

bmi = w / (h * h);

printf("\nYour BMI category is : ");

if(bmi < 15)
	printf("Starvation");

if(bmi >= 15.1 && bmi <= 17.5)
	printf("Anorexic");

if(bmi >= 17.6 && bmi <= 18.5)
	printf("Underweight");

if(bmi >= 18.6 && bmi <= 24.9)
	printf("Ideal");

if(bmi >= 25 && bmi <= 25.9)
	printf("Overweight");

if(bmi >= 30 && bmi <= 30.9)
	printf("Obese.");

if(bmi >= 40)
	printf("Morbidly Obese");
return 0;
}

/*------------------------------Question 10------------------------------
Using conditional operators determine:
(1) Whether the character entered through the keyboard is a
lower case alphabet or not.
(2) Whether a character entered through the keyboard is a special
symbol or not.
----------------------------------------------------------------------*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    char ch;
    printf("Enter the Character: ");
    scanf("%s",&ch);
    ch>=97 && ch<123? printf("Lowercase alphabet") : printf("Not a lowercase");
    return 0;
}

/*------------------------------Question 11------------------------------
Write a program using conditional operators to determine whether
a year entered through the keyboard is a leap year or not.
----------------------------------------------------------------------*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int year;
    printf("Enter the year: ");
    scanf("%d",&year);
    year%4?printf("%d is not a leap year",year):printf("%d is a leap year",year);
    return 0;
}

/*------------------------------Question 12------------------------------
Write a program to find the greatest of the three numbers entered
through the keyboard. Use conditional operators.
----------------------------------------------------------------------*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int a,b,c;
    printf("Enter the numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    a>b&&a>c?printf("%d is greater",a):(b>a&&b>c ? printf("%d is greater",b):printf("%d is greater",c));
    return 0;
}

/*------------------------------Question 13------------------------------
Write a program to receive value of an angle in degrees and check
whether sum of squares of sine and cosine of this angle is equal to
1.
----------------------------------------------------------------------*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    float sum=0,temp,degree;
    printf("Enter the angle : ");
    scanf("%f",&degree);
    temp=degree;
    degree=degree*((22.0/7.0)/180.0);
    sum=(pow(sin(degree),2)+pow(cos(degree),2));
    if(sum==1){
        printf("sin^2 + cos^2 =1 --> is true");
    }else{
        printf("sin^2 + cos^2=1 --> is False");
    }
    return 0;
}

/*------------------------------Question 14------------------------------
Rewrite the following program using conditional operators.
# include <stdio.h>
int main( )
{
    float sal ;
    printf ( "Enter the salary" ) ;
    scanf ( "%f", &sal ) ;
    if ( sal >= 25000 && sal <= 40000 )
        printf ( "Manager\n" ) ;
    else
        if ( sal >= 15000 && sal < 25000 )
            printf ( "Accountant\n" ) ;
        else
            printf ( "Clerk\n" ) ;
    return 0 ;
}
----------------------------------------------------------------------*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float sal;
    printf("Enter the salary");
    scanf("%f",&sal);
    sal>=25000 && sal<=40000?printf("Manager\n"):(sal>=15000 && sal<25000?printf("Accountant\n"):printf("Clerk"));
    return 0;
}

