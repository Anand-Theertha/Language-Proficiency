#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
 char c,s[100],sen[1000];
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    scanf("%c",&c);
    scanf("%s",&s);
    scanf("\n");
    scanf("%[^\n]%*c",&sen);
    printf("%c\n%s\n%s",c,s,sen);
    return 0;
}
