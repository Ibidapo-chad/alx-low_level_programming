#include "holberton.h"

int _sqrt_recursion(int low, int high)
{
  int mid;
    
  mid = (high + low) / 2;
  /* x(n+1) = 1/2( x(n) + a / x(n) ) */

  /* Base Case */
  if((mid*mid) == high)
    return mid;

  /* Stops when the high and low numbers are within 0.001 of one another. */
  if((high - low) < 0.001)
    return mid;
    
  if((mid*mid) > high)
    /* return square_root(low, mid) */
        
    return square_root(mid, high);
}
