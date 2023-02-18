#include<iostream>
using namespace std;
#define N 10


void reverse2(const int input_array[N], int output_array[N]){
  for (int i=0; i<10; ++i){
    output_array[N-i-1] = input_array[i];
  }
}


int main(){
  int arr1[N];
  int arr2[N];
  int i;
  for (i=0; i<N; ++i){ // arr을 0부터 9까지  입력 받는부분
  //  cin >> arr1[i];
  }
  printf("%p\n", arr1);
  printf("%d\n", arr1[0]);
  printf("%p\n", arr1+9);
  

//  reverse2(arr1, arr2);
 
  return 0;
}

