#include<stdio.h>

void main(){
  int n,count;
  printf("Enter the array size:-");
  scanf("%d",&n);
  
  int a[n];
  int i;
  
  printf("Enter array element:-\n");
  
  for(i=0;i<n;i++)
  {
 	printf("Enter a[%d]:-",i);
 	scanf("%d",&a[i]);
 	count=i;
  }
 	printf("The length of an array is:%d",n);
 }

 
