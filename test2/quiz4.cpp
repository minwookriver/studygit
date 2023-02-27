#include<iostream>
using namespace std;


int sum(int x, int y){
  return x + y;
}

int sum2(double x, double y){
  return (x + y);
}

int main(){
  const int x = 0;
  const int y = 10.0;
  cout << sum(x,y) << endl;
  cout << sum2(x,y) << endl;
  return 0;
}
