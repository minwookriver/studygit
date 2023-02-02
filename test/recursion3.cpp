#include<iostream>
using namespace std;
int up = 0;

void upcounter(int n)
{
if (n<1)
  return; // reduction
  up++;
  cout << up << endl;
  upcounter(n-1); // n이 끝나는 조건에 만족할 때까지 recursion하는 부분
}
int main()	
{
  int n;
	cin >> n;
  upcounter(n);
	return 0;
}
