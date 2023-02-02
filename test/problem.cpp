#include<iostream>
using namespace std;
int main()
{
	int n,m, i, j; //입력받을 값 n과 반복문에 사용할 m, 수열안에 들어갈  i와j를 선언
	j=1;
	i=1;
	cin >> n;	
	m=n; // n과m을 같게 해서 입력받은 n만큼 반복문을 만들기 위해 n값을m에 입력
	for (;m>=0;m--) // i와j가 서로 계속 더하게 만드는 반복문
		{
		if(i<=n)
			cout << i;
		if(j<=n)
			cout << j;
		i=i+j;
		j=i+j;
		}
	cout << endl;
	return 0;
}
