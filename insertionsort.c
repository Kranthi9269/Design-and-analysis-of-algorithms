// INSERTION SORT 
#include<stdio.h> 
void main() 
{ 
 int a[10],i,j,size,key; 
 printf("Enter Array Size:"); 
 scanf("%d",&size); 
  
 if(size>=10) 
 printf("Array Overflow"); 
    else 
    { 

 
 printf("Enter Array Elements:"); 
 for(i=0;i<size;i++) 
 scanf("%d",&a[i]); 
  
 printf("Array Elements before sorting=\n"); 
 for(i=0;i<size;i++) 
 printf("%d\t",a[i]); 
  
 //logic 
for(i=1;i<size;i++) 
 { 
  key=a[i]; 
  j=i-1; 
  while(j>=0&&a[j]>key) 
  { 
   a[j+1]=a[j]; 
   j=j-1; 
   } 
   a[j+1]=key; 
  } 
   
  printf("\nSorted Array:\n"); 
  for(i=0;i<size;i++) 
  printf("%d\t",a[i]); 
 } 
 
} 

