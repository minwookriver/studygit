#include<iostream>
using namespace std;

void swap(int *i, int *j){
  int change = *i;
  *i = *j;
  *j = change;
}

int main(){
  int i = 3;
  int j = 5;
  cout << i << ',' << j << endl;
  swap(&i,&j);
  cout << i << ',' << j << endl;
  return 0;
}
