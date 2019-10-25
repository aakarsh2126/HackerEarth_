#include <stdio.h>
#include <stdlib.h>
void sc(unsigned long long int *a){
int c;
c=getchar_unlocked();
*a=0;
for(;(c>=48 && c<=57);c=getchar_unlocked()){
*a=(*a)*10+c-48;
}
}

int main()
{
unsigned long long n,q,l,r,i,sum=0,x,temp;
sc(&n);
sc(&q);
unsigned long long *a=malloc(sizeof(unsigned long long)* (n+1));
for(i=1;i<=n;i++){
sc(&x);
sum=sum+x;
a[i]=sum;
}
for(i=0;i<q;i++){
sc(&l);
sc(&r);
temp=(a[r]-a[l-1])/(r-l+1);
printf("%llu\n",temp);
}
return 0;
}
