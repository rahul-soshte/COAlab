//4 bit subtractor using 2 complement method
#include<stdio.h>

int main()
{
int cin=0;

int i;
int complement_carry=0;

int a[5],b[5],s[5];
printf("---------------BITS DESCRIPTION------------- ");
printf(" For a 4 bit+sign bit---------ABCDE--------------\n");
printf("A-------------SIGN BIT(1 for negative)\n");
printf("B--------------MSB\n");
printf("E--------------LSB\n");
printf("Enter signbit+1st 4 bit binary No\n");

for(i=0;i<5;i++)
{

	scanf("%d",&a[i]);
}

printf("Enter sign bit+2nd 4 bit binary no\n");
for(i=0;i<5;i++)
{	scanf("%d",&b[i]);

}
if(a[0]==1)
{
	for(i=1;i<5;i++)
	{
a[i]=!a[i];

	}
	for(i=4;i>=1;i--)
	{
if(a[i]+1+complement_carry==1)
{
a[i]=1;

	}
	if(a[i]+1+complement_carry==2)
{
a[i]=0;
complement_carry=1;
	}


}

}

complement_carry=0;

if(b[0]==1)
{

	for(i=1;i<5;i++)
	{
b[i]=!b[i];
	}
for(i=4;i>=1;i--)
	{
if(b[i]+1+complement_carry==1)
{
b[i]=1;

	}

if(b[i]+1+complement_carry==2)
{
b[i]=0;
complement_carry=1;
	}
}
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
	printf("0");

for(i=1;i<5;i++)
{
printf("%d",s[i]);
}

}
else{
	printf("1");
	for (i = 1; i<5;i++)
	{
		s[i]= !s[i];
	}

complement_carry=0;

	for(i=4;i>=1;i--)
	{
if(s[i]+1+complement_carry==1)
{
s[i]=1;

}
if(s[i]+1+complement_carry==2)
{
s[i]=0;
complement_carry=1;
}
}
for (i = 1; i<5;i++)
	{
		printf("%d",s[i]);
	}

}

}
	
//-8----------11000
//+5----------00101

