#include
int main(void)
{
int sum,i,term;
sum=0;
term=1;
for(i=1;i<=10;i++)
{
term=term*i;
sum=sum+term;
printf("%d的阶乘 %d\n",i,term);
}
printf("1到10各数阶乘的和 %d\n",sum);
return 0;
}
