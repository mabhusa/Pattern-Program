#include<stdio.h>
#include<conio.h>
void main()
{
		int n,i,j,k,l;
		clrscr();
		printf("\n Enter value of n: ");
		scanf("%d",&n);
		for(i=1;i<=n/2+1; i++)
		{

			if(i%2!=0)
			{
				for(k=1;k<=i;k++)
					printf(" *");
				for(l=i+1;l<=n;l++)
					printf(" #");
			}
			else
			{
				for(k=1;k<=n-i;k++)
					printf(" #");
				for(l=k;l<=n;l++)
					printf(" *");
			}
			printf("\n");
		}
		for(i=n/2;i>=1; i--)
		{

			if(i%2!=0)
			{
				for(k=1;k<=i;k++)
					printf(" *");
				for(l=i+1;l<=n;l++)
					printf(" #");
			}
			else
			{
				for(k=1;k<=n-i;k++)
					printf(" #");
				for(l=k;l<=n;l++)
					printf(" *");
			}
			printf("\n");
		}

	getch();
}
