#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    int x;
    int y;
    
    do
        {
        printf("Height: \n");
        n = get_int();
        }
    while (n <= 0 || n > 23);
    printf("Height is: %i\n", n);
    for (int i = 0; i < n; i++)
    {
        for(x = n - i; x >= 0; x--)
        {
            printf(" ");
        }
        for (y = 1; y <= i + 1; y++)
        {
            printf("#");
        }
        printf("#\n");
    }
}