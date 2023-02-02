#include<iostream>
using namespace std;

void downcounter(int n)
{
 if(n<1)
   return; // reduction
   cout << n << endl;
   downcounter (n-1); // n이 끝나는 조건에 만족할 때까지 recursion 하는 부분
}
int main()
{
	int n;
	cin >> n;
  downcounter(n) ;
	return 0;
}
