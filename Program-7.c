//INPUT - 3 1 2 3
//OUTPUT- 3 2 1
#include<stdio.h>
	int main()
	{
	  int a[10],i,n;
	  printf("Enter size of the array and the array elements");
	  scanf("%d",&n);
	  
	  for(i=0;i<n;i++)
	  scanf("%d",&a[i]);
	  printf("Array elements in reverse order : ");
	  for(i=n-1;i>=0;i--) 
	  printf("%d ",a[i]);
	  return(0);
	}
