#include<iostream>
using namespace std;

int sum(int SUM, int n, int Value){
  if (n<1){ // base case
    return Value;
  }
  return sum(SUM,n-1,Value + SUM);
}

int main(){
  const int x = 10;
  const int y = 5;
  const int n = 6; // recursion
  int Value = 0;
  int SUM = x+y; 
  cout << sum(SUM,n,Value) << endl;
  return 0;
}
