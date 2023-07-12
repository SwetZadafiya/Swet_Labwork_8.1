#include<stdio.h>

void main(){

int i,n;

printf("Enter array size : ");
scanf("%d",&n);

int a[i],b[i],sum[i];

printf("Enter the Elements for first array : \n");

for(i=0;i<n;i++){
   printf("a[%d] = ",i);
   scanf("%d",&a[i]);
}

printf("Enter the Elements for second array : \n");

for(i=0;i<n;i++){
   printf("b[%d] = ",i);
   scanf("%d",&b[i]);
}

printf("Sum of Array : \n");

for(i=0;i,n;i++){
    sum[i]=a[i]+b[i];
}

for(i=0;i<n;i++){
   printf("%d\n",sum[i]);
}

}


