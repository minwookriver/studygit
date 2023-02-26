#include<iostream>
using namespace std;

#define W 2
#define H 4

void transpose(int input[W][H], int output[H][W]){
int i,j;  // TODO : 행과 열을 바꾸는 부분
  for (i=0; i < W; ++i){
    for (j=0; j < H; ++j){
      output[j][i] = input[i][j];
    }
  }
}
int main(){
 int arr1[W][H];
 int arr2[H][W];
 int i,j;
  // TODO : 입력받는부분
  // 0->1
  for (int j=0; j<W; ++j){
    // 0->H
      for (int i=0; i<H; ++i){
      cin >> arr1[j][i];
    }
  }
  
  for (int i=0; i<W; ++i){
    if (i>0)
      cout << endl;
    for (int j=0; j<H; ++j){
      cout << arr1[i][j];
    }
  }
  cout << endl;
  transpose(arr1,arr2);
  for (i = 0; i < H; ++i){
    if (i>0)
      cout << endl;
    for (j = 0; j < W; ++j){
      cout << arr2[i][j];
    }
  }
  cout << endl;
  return 0;
}
