#include<iostream>
using namespace std;

void transpose(const int input)
{
int i,j;  // TODO : 행과 열을 바꾸는 부분
  for (j=0; j<4; ++j){
    for (i=0; i<2; ++i){
      cout << input[i][j];
    }
  }
}
int main()
{
 const int input[2][4];
 int i,j;
  // TODO : 입력받는부분
   for (i=0; i<2; ++i){
     for (j=0; j<4; ++j){
       cin >> input[i][j];
     }
   }
  transpose(input);
  cout << endl;
  return 0;
}
