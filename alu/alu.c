#include<stdio.h>
//Logical and Arithmetic

void add(int i1[],int i2[],int n);
void multiply(int i1[],int i2[],int n);

int main(void)
{int i;
int a1[4];
int a2[4];


//Addition And Subtraction
int i1[4],i2[4];
printf("Enter the first no in 4 bit binary ");
for(i=0;i<4;i++){
scanf("%d",&i1[i]);
}

printf("Enter the second no 4 bit binary");
for(i=0;i<4;i++){
scanf("%d",&i2[i]);
}
add(i1,i2,4);

printf("Enter the 4-bit multiplicand");
for(i=0;i<4;i++)
{
scanf("%d",&a1[i]);
}
printf("Enter the 4-bit multiplier");
for(i=0;i<4;i++)
{
    scanf("%d",&a2[i]);
}
multiply(a1,a2,4);
return 0;
}
 void add(int i1[],int i2[],int n)
{
int i3[4];
int lim;
int i;
int carry;

for(lim=n-1;lim>=0;lim--){
if((i1[lim]+i2[lim])==0)
{
i3[lim]=0+carry;
carry=0;
}
if(i1[lim]+i2[lim]==1)
{
i3[lim]=1+carry;
carry=0;
}

if((i1[lim]+i2[lim])==2)
{
i3[lim]=0+carry;
carry=1;
}
if((i1[lim]+i2[lim])==3)
{
i3[lim]=1+carry;
carry=1;
}
}
if(carry==1)
{
    printf("carry=%d\t",carry);
}
for(i=0;i<4;i++)
{
    printf("%d",i3[i]);
}

}
void multiply(int ac[],int q[],int n)
{
    //Initial Values
    int ac[4]={0,0,0,0};
int qminusone=0;
//A<---A-M
if(qminusone==0 && q[3]==1){
        twocomp(q);

}
//Shift
//A<---A+M
}

void twocomp(int q[])
{
    for(i=0;i<4;i++)
    {
        q[i]= !q[i];

    }
    add(q)
}
