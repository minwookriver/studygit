#include<iostream>
using namespace std;
#define N 10


void reverse(int arr[N])
{
  int i;
  for (i=9; i>=0; --i){ // 9부터 0까지 증감 하면서 arr을 출력하는 부분
    cout << arr[i];
  }
}
int main()
{
  int arr[N];
  int i;
  for (i=0; i<N; ++i){ // arr을 0부터 9까지  입력 받는부분
    cin >> arr[i];
  }
  reverse(arr);
  cout << endl;
  return 0;
}
/* reverse 9째줄 반복문 조건에 i=10을하면 garbage value뱉음
   arr[0]~arr[9]까지  arr[10]은 없음

*/
