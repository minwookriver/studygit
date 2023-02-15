#include<iostream>
using namespace std;

void DtoB(int n)
{
  if (n<1) // base case
    return; 
  DtoB(n/2); // recursion
  cout << n%2;
}
int main()
{
  int n;
	cin >> n;
  DtoB(n);
  cout << endl;
	return 0;
}
