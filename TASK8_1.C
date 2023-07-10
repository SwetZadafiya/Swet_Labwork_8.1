#include<stdio.h>
#include<conio.h>

void main(){

int marks[999];
int a,b;

clrscr();

printf("Enter total students of Classroom : ");
scanf("%d",&a);

for(b=0;b<a;b++){
   printf("Enter marks from 100 : ");
   scanf("%d",&marks[b]);
}
for(b=0;b<a;b++){
   if(marks[b]>=90){
     printf("Marks :- %d Grade(A)\n",marks[b]);
   }else if(marks[b]>=80){
     printf("Marks :- %d Grade(B)\n",marks[b]);
   }else if(marks[b]>=70){
     printf("Marks :- %d Grade(C)\n",marks[b]);
   }else if(marks[b]>=60){
     printf("Marks :- %d Grade(D)\n",marks[b]);
   }else if(marks[b]>=34){
     printf("Marks :- %d Grade(E)\n",marks[b]);
   }else{
     printf("Marks :- %d #FAILED#\n",marks[b]);
   }
}

getch();
}