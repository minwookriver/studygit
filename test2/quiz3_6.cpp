#include<iostream>
const int ARRAY_LEN = 10;

int main(){
  int arr[ARRAY_LEN] = {10}; // Note implicit initialization of
                             // other elements
  int *xPtr = arr;
  int *yPtr = arr + ARRAY_LEN - 1;
  std::cout << *xPtr << ' ' << *yPtr; // should output 10 0
  return 0;
}
