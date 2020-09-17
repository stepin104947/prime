#include<stdio.h>
int add(int a,int b);
int sub(int a,int b);
int (*fptr[1])(int a,int b);
int main()
{

fptr[0]=add;
fptr[1]=sub;
printf("sum:%d\n",fptr[0](2,3));
printf("diff:%d",fptr[1](5,3));
 return 0;
}

int add(int a,int b)
{
return a+b;
}

int sub(int a,int b)
{
return a-b;
}
