#include<iostream>
using namespace std;

int strings(const char *str){
  // TODO : convert string to length 
  return sizeof(str);
}

int main(){
  const char *str = "minwook";
  cout << strings(str) << endl;
  return 0;
}
