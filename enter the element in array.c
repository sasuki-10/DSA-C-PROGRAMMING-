#include <stdio.h>
#include <conio.h>
int main()
{
   int arr[5];
   int i;

printf("Input 5 elements in the array:");
 
for(i=0; i<5; i++)
  {
   printf("arr[%d]=",i);
   scanf("%d" ,&arr[i]);
  }
 printf("Elements in array are: ");
  for(i=0; i<5; i++)
  {
    printf(" %d", arr[i]);
  }

   printf("\n");
}
