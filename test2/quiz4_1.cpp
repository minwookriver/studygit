#include<iostream>
using namespace std;


int sum(int x, int y){
  return x + y;
}

int sum(int num1 , int num2, int num3){
return num1 + num2 + num3; 
}

int sum1(int num1 = 4, int num2 = 3, int num3 = 5){
return num1 + num2 + num3; 
}

int main(){
  cout << sum1(3,5,7) << endl;
  return 0;
}
