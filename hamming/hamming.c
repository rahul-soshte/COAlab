#include<stdio.h>
#include<conio.h>

void main()
{
    int input[4];
    int output[7];
    int i;

    printf("The inputs are:");

    for(i=0;i<4;i++)
    {
    scanf("%d",&input[i]);

    }

    output[0]=input[0];
    output[1]=input[1];
    output[2]=input[2];
    output[4]=input[3];

output[6]=(input[3]+input[2]+input[0])%2;
output[5]=(input[3]+input[1]+input[0])%2;
output[3]=(input[2]+input[1]+input[0])%2;
printf("The parity bit of p1 is %d\n",output[6]);
printf("The parity bit of p2 is %d\n",output[5]);
printf("The parity bit of p4 is %d\n",output[3]);


printf("The Hamming code is:");

for(i=0;i<7;i++)
{
    printf("%d",output[i]);
}


getch();


}
