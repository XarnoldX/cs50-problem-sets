#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float change;
    int cents;
    int quarters;
    int dimes;
    int nickels;
    int remain;
    int count;
    
    do
        {
        printf("How much change is owed? \n");
        change = get_float();
        }
    while (change <= 0);

    cents = (int)round(change*100);

    printf("Cents: %i\n", cents);

    quarters = cents / 25;
    remain = cents % 25;
    
    dimes = remain / 10;
    remain = remain % 10;
    
    nickels = remain / 5;
    remain = remain % 5;
    
    count = quarters + dimes + nickels + remain;
    
    printf("Coins: %i\n", count);
}