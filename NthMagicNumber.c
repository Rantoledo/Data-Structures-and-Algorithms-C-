/*
 * NthMagicNumber.c
 *
 *  Created on: Jan 16, 2018
 *      Author: toled
 */

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

// Function to find nth magic numebr
int nthMagicNo(int n)
{
    int pow = 1, answer = 0;

    // Go through every bit of n
    while (n)
    {
       pow = pow*5;

       // If last bit of n is set
       if (n & 1)
         answer += pow;

       // proceed to next bit
       n >>= 1;  // or n = n/2
    }
    return answer;
}

// Driver program to test above function
int main(){
    int n = 5;
    int answer = nthMagicNo(n);
    printf("nth magic number is: %d", answer);
    return 0;

}
