#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int i1,i2,s,d;
    float f1,f2,sum,diff;
    scanf("%d %d",&i1,&i2);
    scanf("%f %f",&f1,&f2);
    s=i1+i2; d=i1-i2;
    sum=f1+f2; diff=f1-f2;
    printf("%d %d\n",s,d);
    printf("%0.1f %0.1f\n",sum,diff);
    return 0;
}

