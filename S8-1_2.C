/* Write a programme to find leap years between two given numbers and store them in an array. And then print that array. */

#include<stdio.h>
#include<conio.h>

void main(){

float array[999];
float a,b,avg,sum=0.0;

clrscr();

printf("Enter the sive of Array : ");
scanf("%d",&a);

printf("Enter the Elements of Array : \n");

for(b=0;b<a;b++){
   printf("a[%d] = ",b);
   scanf("%f",&array[a]);
   sum += array[a];
}

avg = sum/a;
printf("Average of an array : %f ",avg);

getch();
}



