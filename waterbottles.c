
// 5.	You are given numBottles full water bottles. You can exchange numExchange empty water bottles from the market for one full water bottle. The operation of drinking a full water bottle turns it into an empty bottle.
// Write a Java program to determine the maximum number of water bottles you can drink given the initial number of full bottles and the exchange rate.
// Input:
// numBottles: The initial number of full water bottles.
// numExchange: The number of empty water bottles required to exchange for one full water bottle.
// Output:
// The maximum number of water bottles you can drink.
// 		Examples:
// 1.	Input: numBottles = 9, numExchange = 3
// Output: 13
// Explanation: You can exchange 3 empty bottles to get 1 full water bottle.
// Number of water bottles you can drink: 9 + 3 + 1 = 13.

// 2.	Input: numBottles = 15, numExchange = 4
// Output: 19
// Explanation: You can exchange 4 empty bottles to get 1 full water bottle.
// Number of water bottles you can drink: 15 + 3 + 1 = 19. (15/4 = 3 plus 3 = 6 / 4 = 1 + 2 = 3  = 15+3+1= 19)

#include<stdio.h>
int main()
{
   int n=9,max=9,g=3,d=0,r=0;

    while(n >= g) 
    {
        d = n/g;
        max= max+d; 
        r=n%g; 
        n=d+r; 
    }
    printf("%d",max);
    return 0;
}
