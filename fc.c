#include<stdio.h>
int main()
{
int f=0,s=1,t,i,n;
printf("enter the no of terms");
scanf("%d",&n);
printf("%d%d",f,s);
for(i=2;i<n;i++)
{
t=f+s;
printf("%d",t);
f=s;
s=t;
}return 0;
}
