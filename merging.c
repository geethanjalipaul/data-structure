#include<stdio.h>
void main()
{
	int array1[50],array2[50],array3[100],m,n,i,j,k=0;
	printf("Enter the size of first array:\n");
	scanf("\n%d",&m);
	printf("Enter the sorted elements of first array:\n");
	for(i=0;i<m;i++)
{
	scanf("\n%d",&array1[i]);
}
	printf("\nEnter the size of second array:\n");
	scanf("%d",&n);
	printf("\nEnter the sorted elements of second array:\n");
	for(i=0;i<n;i++)
{	
	scanf("\n%d",&array2[i]);
}
	i=0;
	j=0;
	while(i<m&&j<n)
	{
		if(array1[i]<array2[i])
		{
			array3[k]=array1[i];
			i++;
		}
	else
		{
		array3[k]=array2[j];
		j++;
		}
		k++;
	}
		if(i>=m)
		{
			while(j<n)
			{
			array3[k]=array2[j];
			j++;
			k++;
			}
		}
		if(j>=n)
		{
		while(i<m)
			{
			array3[k]=array1[i];
			i++;
			k++;
		}
}
	printf("\nAfter merging:\n");
	for(i=0;i<m+n;i++)
	{
		printf("\n%d",array3[i]);
	}
}
