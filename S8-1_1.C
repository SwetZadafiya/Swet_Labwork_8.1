/* Write a program to find the length of a 1D array. */

#include<stdio.h>
#include<conio.h>

void main(){

int a,b;
int array[99];

clrscr();

printf("Enter the size of Array : ");
scanf("%d",&a);

printf("Enter the Elements of Array : \n");

for(b=0;b<a;b++){
   printf("a[%d] = ",b);
   scanf("%d",&array[b]);
}

printf("Length  of the array is : %d ",b);

getch();
}