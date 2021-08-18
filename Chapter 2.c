/*------------------------------Question 1------------------------------
If a five-digit number is input through the keyboard, write a
program to calculate the sum of its digits. (Hint: Use the modulus
operator ‘%’)
----------------------------------------------------------------------*/
/*Formula:
                            variable=(input/our values)%10;
                    to eliminate the values and store it to the variable
*/
#include<stdio.h>
#include<conio.h>
int main(){
    int number,a,b,c,d,e;
    printf("Enter the number: ");
    scanf("%d",&number);
    a=(number/10000)%10;
    b=(number/1000)%10;
    c=(number/100)%10;
    d=(number/10)%10;
    e=number%10;
    printf("\n(%d)sum of digit is: %d",number,a+b+c+d+e);
    return 0;
}

/*------------------------------Question 2------------------------------
If a five-digit number is input through the keyboard, write a
program to reverse the number.
----------------------------------------------------------------------*/



#include<stdio.h>
#include<conio.h>
int main(){
    int number,a,b,c,d,e,sum;
    printf("Enter the number: ");
    scanf("%d",&number);
    a=(number/10000)%10;
    b=(number/1000)%10;
    c=(number/100)%10;
    d=(number/10)%10;
    e=number%10;
    sum=e*10000+d*1000+c*100+b*10+a;
    printf("\n(%d)sum of digit is: %d",number,sum);
    return 0;
}

/*------------------------------Question 3------------------------------
 If lengths of three sides of a triangle are input through the
keyboard, write a program to find the area of the triangle.
----------------------------------------------------------------------*/
/*Formula:
                    Total=a*b*c/2
                    area=sqrt(total*(total-a)*(total-b)*(total-c))
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float a , b , c , s , area;
    printf("\nEnter three sides of the triangle : ");
    scanf("%f%f%f", &a, &b, &c);
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("\nArea : %f", area);
    getch();
    return 0;
}

/*------------------------------Question 4------------------------------
 Write a program to receive Cartesian co-ordinates (x, y) of a point
and convert them into polar co-ordinates (r,fi).
----------------------------------------------------------------------*/
/*Formula :
                 r = sqrt ( x2+ y2) and fi= tan-1( y / x )

*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    float x,y;
    printf("Enter the X and Y coordinates: ");
    scanf("%f%f",&x,&y);
    printf("polar Coordinates are(%f,%f).\n",sqrt(pow(x,2.0)+pow(y,2.0)),atan(y/x));
    return 0;
}

/*------------------------------Question 5------------------------------
 Write a program to receive values of latitude (L1, L2) and longitude
(G1, G2), in degrees, of two places on the earth and output the
distance (D) between them in nautical miles. The formula for
distance in nautical miles is:
----------------------------------------------------------------------*/
/*Formula:
                D = 3963 cos-1( sin L1 sin L2 + cos L1 cos L2 * cos ( G2 – G1 ) )
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
float l1,l2,g1,g2, D;

printf("\nEnter (two) the values of lattitude : ");
scanf("%f%f", &l1, &l2);

printf("\nEnter (two) the values of longitude : ");
scanf("%f%f", &g1, &g2);

D = 3963*acos(sin(l1)*sin(l2) + cos(l1)*cos(l2)*cos(g2-g1));

printf("\nDistance : %f", D);

getch();
return 0;
}

/*------------------------------Question 6------------------------------
 Wind chill factor is the felt air temperature on exposed skin due to
wind. The wind chill temperature is always lower than the air
temperature, and is calculated where t is the temperature and v is the wind
velocity.Write a program to receive values of t and v and calculate wind
chill factor(wcf).
----------------------------------------------------------------------*/

/*Formula:
wcf = 35.74 + 0.6215t + ( 0.4275t - 35.75 ) * v
0.16
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
float t, v, wcf;

printf("\nEnter the values of temperature and wind velocity: ");
scanf("%f%f", &t, &v);
wcf = 35.74 + 0.6215*t + (0.42751*t - 35.75)*pow(v, 0.16);
printf("Wind Chill Factor : %f", wcf);

getch();
return 0;
}

/*------------------------------Question 7------------------------------
 If value of an angle is input through the keyboard, write a program
to print all its Trigonometric ratios.
----------------------------------------------------------------------*/

#include<stdio.h>
#include<math.h>
int main()
{
printf("Enter the value of angle\n");
float angle;
scanf("%f",&angle);
printf("The sine of angle = %f.\n",sin(angle));
printf("The cosine of angle = %f.\n",cos(angle));
printf("The tangent of angle = %f.\n",tan(angle));
printf("The cotangent of angle = %f.\n",(1/tan(angle)));
printf("The cosecant of angle = %f.\n",(1/sin(angle)));
printf("The secant of angle = %f.\n",(1/cos(angle)));
return 0;
}

/*------------------------------Question 8------------------------------
  Two numbers are input through the keyboard into two locations C
and D. Write a program to interchange the contents of C and D.
----------------------------------------------------------------------*/

#include<stdio.h>
int main()
{
printf("Enter two numbers\n");
int c,d;
scanf("%d %d",&c,&d);
printf("Before Interchange C=%d and D=%d.\n",c,d);
c=c+d;
d=c-d;
c=c-d;
printf("After Interchange C=%d and D=%d.\n",c,d);
return 0;
}

/*------------------------------Question 9------------------------------
  Consider a currency system in which there are notes of seven
denominations, namely, Re. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100. If
a sum of Rs. N is entered through the keyboard, write a program to
compute the smallest number of notes that will combine to give Rs.
N
----------------------------------------------------------------------*/

#include<stdio.h>
#include<conio.h>
int main()
{
int n100, n50, n10, n5, n2, n1, num;

printf("\nEnter the amount : ");
scanf("%d", &num);
n100 = num / 100;
num = num % 100;
n50 = num / 50;
num = num % 50;
n10 = num / 10;
num = num % 10;
n5 = num / 5;
num = num % 5;
n2 = num / 2;
num = num % 2;
n1 = num / 1;

printf("\n\nTo give amount of %d you have to give : \n");
printf("%d of notes of hundred.\n", n100);
printf("%d of notes of fifty.\n", n50);
printf("%d of notes of ten.\n", n10);
printf("%d of notes of five.\n", n5);
printf("%d of notes of two.\n", n2);
printf("%d of notes of one.\n", n1);

getch();
return 0;
}
