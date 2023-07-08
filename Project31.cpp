#include <bits/stdc++.h>
#pragma warning(disable:4996)
using namespace std;
#define PI 3.1415926535897932
double val[100100];
int main()
{
	cout << "파일명을 입력하세요 : ";
	char arr[100];
	cin >> arr;
	cout << "길이를 입력하세요 ";
	int len;
	cin >> len;
	cout << "샘플링 주파수를 입력하세요 ";
	int freq;
	cin >> freq;
	cout << "최저 주파수 : " << freq / (double)len<<'\n';
	while (1)
	{
		cout << "사인함수의 주파수를 입력하세요 (최저 주파수를 곱해서 들어갑니다) :";
		int a;
		cin >> a;
		cout << "사인함수의 진폭을 입력하세요 : (0이면 종료)";
		double b;
		cin >> b;
		if (b == 0)
			break;
		cout << "사인함수의 시작 위상을 입력하세요 : (0~2pi)";
		double c;
		cin >> c;
		int i;
		for (i = 0; i < len; i++)
		{
			val[i] += b * sin(i * PI * 2 * a/len+c);
		}
	}
	freopen(arr, "w", stdout);
	cout << len << ' ' << freq << '\n';
	cout.precision(15);
	int i;
	for (i = 0; i < len; i++)
	{
		cout << val[i] << '\n';
	}
}