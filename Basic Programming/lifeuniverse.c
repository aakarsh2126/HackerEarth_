#include <stdio.h>
int main()
{
int n,i;
for(;;)
{
    scanf("%d",&n);
    if(n!=42)
    printf("%d\n",n);
    else
    break;
}
return 0;
}
