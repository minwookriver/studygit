#include<iostream>
using namespace std;


double sum(int x, double y){
  return (double)x+y;
}

int sum(int x, int y){
  return x + y;
}

double sum(double x, double y){
  return x + y;
}

int main(){
  const int x = 0;
  const int y = 10;
  cout << sum(1,10.0) << endl;
  cout << sum(x,y) << endl;
  return 0;
}
