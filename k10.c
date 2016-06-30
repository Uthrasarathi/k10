#include<stdio.h>
#include<conio.h>
void main()
{
int i=0,len,n[100];
scanf("%d",&n);
len=strlen(n);
while(len)
{
 len=len/10;
 i++;
}
printf("%d",i);

getch();
}
