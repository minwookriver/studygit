#include<iostream>
using namespace std;

int sum(int x, int y){
  int n = 5;
  int SUM = 0;
  for(; n>0; --n){
    SUM += x+y;
  }
  return SUM;
}

int main(){
  const int x = 10;
  const int y = 5;
  cout << sum(x,y) << endl;
  return 0;
}
