#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	string N;
	cin >> N;
	sort(N.begin(), N.end(), greater<char>());	//�⺻�� ���������̶� greater<char>() ����ؼ� ������������ ����
	cout << N;
}