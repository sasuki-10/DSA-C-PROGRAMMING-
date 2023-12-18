#include<stdio.h>
void swap(int*p,int*q)
{
	int temp=*p;
	*p=*q;
	*q=temp;
}

void bubblesort(int arr[],int n)
{
   int i,j;
   int swapped=0;
   for(i=0;i<=n-1;i++)
   {
    for(j=0;j<n-i-1;j++)
    {
     if(arr[j]>arr[j+1]);
     {
	  swap(&arr[j],&arr[j+1]);
          swapped=1;
     }
     }
    if(swapped==0)
    break;
	}
}


void printarray(int arr[],int size)
{
	int i;
	for( i=0;i<size;i++)
	{
	printf(" %d",arr[i]);
	}
}

int main()
{
	int arr[]={50,26,36,78,5,12,58};
	int n;
	n=sizeof(arr)/sizeof(arr[0]);
	bubblesort(arr,n);
	printf("sorted array:");
	printarray(arr,n);
	return 0;
}
