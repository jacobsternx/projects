#include <cstdio>
#include <iostream>

int main (int num) { 

// return factorial
int pow = num;
while (num > 0) {
	num *= pow;
  num--;
}
  printf( num );
  wait;
  return num; 
}