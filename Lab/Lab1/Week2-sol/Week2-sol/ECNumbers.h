#ifndef EC_NUMBERS_H
#define EC_NUMBERS_H

/*typedef enum
{
  EC_INT_SIZE = 4,
  EC_LONG_SIZE = 8
} EC_INT_SZ;
*/

// Basic functions for numbers
namespace ECNumbers
{
  // calculate the square
  int ECSquareN(int n);
  int ECDoubleN(int n);
  // inline functions would cause re-definition if header file included more than once
//  int ECAdd(int a, int b) { return a+b; }
};


#endif
