#include<stdio.h>
void main(int argc, char const *argv[])
{
	do
	{
		int ch;
		printf("1:SGPA Calculator\n2:CGPA Calculator\n3:Exit\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:void sgpac();
				break;
			case 2:void cgpac();
				break;
			case 3:exit(0);
		}
	}while(ch!=3);
}
void sgpac()
{
	{
    int i,n;
	printf("Enter the no. of subjects:\n");
	scanf("%d",&n);
	float a[n-1],b[n-1],sm=0,sc=0,sgp;
	for (i = 0; i < n; i++)
	{	
		printf("subject %d:\n",i+1);
		printf("marks:\n");
		scanf("%f",&a[i]);
		printf("credits:\n");
		scanf("%f",&b[i]);
		if (a[i]>=90)
			a[i]=10;
		elseif (a[i]>=80)
			a[i]=9;
		elseif (a[i]>=70)
			a[i]=8;
		elseif (a[i]>=60)
			a[i]=7;
		elseif (a[i]>=45)
			a[i]=6;
		elseif (a[i]>=40)
			a[i]=4;
		else
			a[i]=0;
		sm=sm+(b[i]*a[i]);
		sc=sc+b[i];
	}
	sgp=(sm/sc);
	printf("SGPA=%f\n",sgp);
	return 0;
}
void cgpac()
{
	
}