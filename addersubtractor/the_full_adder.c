#include<stdio.h>

int main()
{

int i;

int a[4],b[4],s[4];
int cin;

int s1;

printf("Enter 1st 4 bit binary No");
for(i=0;i<4;i++)
{
	scanf("%d",&a[i]);
}

printf("Enter 2nd 4 bit binary no");
for(i=0;i<4;i++)
{
	scanf("%d",&b[i]);
}

printf("enter Carry In (CIN)");
scanf("%d",&cin);

for(i=3;i>=0;i--)
{
s1=a[i]+b[i]+cin;
	
	if(s1==0)
	{
		s[i]=0;
		cin=0;	
	}
	if(s1==1)
	{
        s[i]=1;
		cin=0;
	}
	if(s1==2)
	{
        s[i]=0;
		cin=1;
	}
	if(s1==3)
	{
        s[i]=1;
		cin=1;
	}
	
}
printf("Carry Out=%d\n",cin);
printf("Output=");
for(i=0;i<4;i++)
{
printf("%d",s[i]);
}
return 0;
}