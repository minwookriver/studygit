#include<iostream>
using namespace std;

int strings(char *str){
  int length = 0;
  // TODO : convert string to length 
  //return sizeof(*str)-1;  
  for(int n=0; ; ++n){
    length += 1;
    if(str[n]=='\0')
      break;
  }
  return length;
}

int main(){
  //char *str1 = "minwook ip ni da";
  char str2[] = "minwook ip ni da";
  char *str1 = &str2[0];

  cout << strings(str1) << endl;
  return 0;
}
