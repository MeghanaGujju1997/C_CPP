#include<stdio.h>
#include<stdlib.h>

int main()
{
int a,b,r,i,count;
char .;
puts("enter the values of a,b,r");
scanf("%d%d%d", &a, &b, &r);
for(i=a; i<=b; i++)
count=0
if(i%r==0)
{
if(count==0)
{
printf("%d",r);
}
count=count+1
printf(",%d",r);
}
printf("%c",'.');
return 0;
}