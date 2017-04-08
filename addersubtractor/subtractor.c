//4 bit subtractor using 2 complement method
#include<stdio.h>
int output[4];
int cout[4];
void twos_complement(int b[]);
void adder(int x[],int y[]);



int main()
{
int cin=0;

int i;

int a[4],b[4],s[4];
printf("Enter the 1st Binary No");
for(i=0;i<4;i++)
{
	scanf("%d",&a[i]);
}
printf("\n");
printf("The 1st binary No is");
for(i=0;i<4;i++)
{
	printf("%d",a[i]);
}
printf("\n");

printf("Enter 2nd binary No");
for(i=0;i<4;i++)
{	
scanf("%d",&b[i]);
}
printf("The 2nd Binary No is");

for(i=0;i<4;i++)
{
	printf("%d",b[i]);
}
printf("\n");

twos_complement(b);
printf("The 2's complement of 2nd Binary No is");

printf("Output=");
for(i=0;i<4;i++)
{
printf("%d",output[i]);	
}
printf("\nCarry=%d\n",cout[0]);
adder(a,output);

if(cout[0]==1)
{
printf("The difference is Positive");
printf("The Output is ");
for(i=0;i<4;i++)
{
printf("%d",output[i]);
}

}

if(cout[0]==0){
printf("The Difference is Negative\n");
twos_complement(output);
printf("The output is -");
for(i=0;i<4;i++)
{
printf("%d",output[i]);
}

}
}
void twos_complement(int b[])
{
	int i;
	int c1[4]={0,0,0,1};
	for(i=0;i<4;i++)
	{
		b[i]=!b[i];
	}
	
	adder(b,c1);
	
}

void adder(int x[],int y[])
{
int cin=0;
int i;
int s;

for(i=3;i>=0;i--){
	
    s=x[i]+y[i]+cin;
	
	if(s==0)
	{
	 output[i]=0;
		cout[i]=0;	
	}
	if(s==1)
	{
       output[i]=1;
		cout[i]=0;
	}
	if(s==2)
	{
       output[i]=0;
		cout[i]=1;
	}
	if(s==3)
	{
        output[i]=1;
		cout[i]=1;
	}
	cin=cout[i];
	
}

}