#include<stdio.h>
int main()
{    //              n1 n2 n3 n4 . . . n
    //Fibonacci array 1 1 2 3 5 8 13 21 34
int n1=1,n2=1,nextn,n;
printf("Kacinci terime kadar fibonacci yazdirilsin >");
scanf("%d",&n);
for(int i;i<=n;i++){
printf("%d ",n1);
nextn=n1+n2;
n1=n2;
n2=nextn;
}

}