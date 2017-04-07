#include<stdio.h>

int main()
{

int i;

int a[4],b[4],s[4];
int cin;


printf("Enter 1st 4 bit binary No");
for(i=0;i<4;i++)
{
	scanf("%d",&a[i]);

}
cin=0;

printf("Enter 2nd 4 bit binary no");
for(i=0;i<4;i++)
{
	scanf("%d",&b[i]);

}

for(i=4;i>=0;i--)
{
	if(a[i]+b[i]+cin==0)
	{
		s[i]=0;

		cin=0;

	}
	if(a[i]+b[i]+cin==1)
	{
s[i]=1;
		cin=0;

	}

	if(a[i]+b[i]+cin==2)
	{
s[i]=0;
		cin=1;

	}
	if(a[i]+b[i]+cin==3)
	{
s[i]=1;

		cin=1;

	}

}

if(cin==1)
{
	printf("Carry=");
	printf("%d\n",cin );
}
else {
printf("Carry=0\n");

}

for(i=0;i<4;i++)
{
printf("%d\n",s[i] );
}
return 0;

}