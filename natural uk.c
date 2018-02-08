#include <stdio.h>
int main()
{
    int n, c, sum = 0;
    
    printf("Enter a positive integer ");
    scanf("%d",&n);

    for(c=1; c <= n; ++c)
    {
        sum += c;   
    }

    printf("Sum = %d",sum);

    return 0;
}
