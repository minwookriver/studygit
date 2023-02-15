#include <iostream>
using namespace std;
#define N 10

void printArray(int arr[N]){
  // TODO
  int i;
  for (i=0; i<N; ++i){
    cout << arr[i];
    if (i<N-1)
      cout << ',';
  } 
}

void printArray2(int arr[N]){
// TODO
  int i;
  for (i=0;i<N-1;i++){
    cout << arr[i] << ',';
  } 
  cout << arr[N-1];
}




int main(){
  int arr[N];
  int i;
  // TODO : input을 cin으로 받기
  for (i=0;i<=9;i++){
    cin >> arr[i];
  }
  printArray2(arr);
  cout << endl;
  return 0;
}
