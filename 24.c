#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, j, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }
        
    }
    
    return 0;
}
