#include<stdio.h>
//First half adder implementation
//Full adder program
int aexorb(int a,int b)
{
    int bit3_sum;

int bit1,bit2;
bit1=a%10;
bit2=b%10;

bit3_sum=((bit1 & !bit2) |  (!bit1 & bit2));
return bit3_sum;

}
int aandb(int a,int b)
{int bit3_carry;

    int bit1=a%10;
    int bit2=b%10;

    bit3_carry=bit1 & bit2;
return bit3_carry;


}
int power(int a,int n)
{
int value=a;
if(n==0) return 1;
int i;

for(i=1;i<n;i++)
{
 value=value*10;
}
return value;

}

int main(void)
{
int no=0;

int a;
int b;
int bit3_sum;
int bit3_sum1;
int i;

int bit3_carry;
int prev_bit3_carry=0;
//carry ko AND karna hain
//a aur b ko EXOR karna hain
int cin;
//Enter a four bit binary no
printf("Enter 1st 4 bit binary No");
scanf("%d",&a);
printf("Enter 2nd 4 bit binary no");
scanf("%d",&b);


for(i=0;i<4;i++){

	a=a/power(10,i);
	b=b/power(10,i);
bit3_sum=aexorb(a,b);

bit3_carry=aandb(a,b);

if(prev_bit3_carry==1)
{
    bit3_sum1=bit3_sum;

    bit3_sum=aexorb(bit3_sum,prev_bit3_carry);

    bit3_carry=aandb(bit3_sum1,bit3_carry);
}

prev_bit3_carry=bit3_carry;

no=bit3_sum*power(10,i)+no;

}

printf("%d",no);
return 0;

}

