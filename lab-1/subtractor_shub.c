#include<stdio.h>
int c[4];
void adder(int a[], int b[], int flag);
void main()
{
int i, a[4],b[4], one[4];

for(i=0;i<3;i++)
 one[i]=0;
one[3]=1;

printf("\n enter first number : ");
for(i=0;i<4;i++)
   scanf("%d", &a[i]);

printf("\n enter second number :");
for(i=0;i<4;i++)
   scanf("%d", &b[i]);

//two's complement
for(i=0;i<4;i++)
{
 if(b[i]==0) b[i]=1;
 else b[i]=0;}
 adder(b,one,0);


//add complement
 adder(a,c,1);
}

void adder(int a[], int b[], int flag)
{ int i,s, cin=0,cout;
  for(i = 3; i>=0;i--)
{ s = a[i]+ b[i]+ cin;
  if(s==3)
    {c[i]=1; cout=1;}
  if(s==2)
    {c[i]=0; cout=1;}
  if(s==1)
    {c[i]=1; cout=0;}
  if(s==0)
     {c[i]=0;cout=0;}
  cin = cout;
}
if(flag==0)
{ printf("\n the two's complement is: ");
  for(i=0;i<4;i++)
    printf("%d", c[i]);
}
if(flag==1)
{ if(cout==1)
   { printf("\n the difference is positive. the number is: ");
    for(i=0;i<4;i++)
     printf("%d", c[i]);
    }
   else
    {
     printf("\n the difference is negative. the number is in two's complement: ");
     for(i=0;i<4;i++)
     printf("%d", c[i]);
     }
}

}