#include<stdio.h>
int main()
{
   int n,d=0,a,b,c;
   printf("Numero de problemas: ");
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {
   	  printf("Decisions\n");
      scanf("%d%d%d",&a,&b,&c);
      d+=(a+b+c)>=2;
   }
   printf("La cantidad de problemas que se resuelven: %d\n",d);
}