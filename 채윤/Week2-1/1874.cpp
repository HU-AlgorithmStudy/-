#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin.tie(NULL);

	int n;
	cin >> n;	//������ ����
	vector<int> arr(n, 0);	//���� ���� �迭
	vector<char> result;	//��� ���� �迭, ����� ���� �ʱ�ȭx

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	stack<int> myStack;
	int num = 1;	//�������� �ڿ��� ����
	int stop = 1;

	for (int i = 0; i < arr.size(); i++) {
		int cur = arr[i];	//���� ���� ��

		if (cur >= num)
		{
			while (cur >= num) {	//���� ������ >= �������� �ڿ����� �� ���� push() ����
				myStack.push(num++);
				result.push_back('+');	//vector�� �����Լ�
			}
			myStack.pop();
			result.push_back('-');
		}
		else {	//���� ������ < �������� �ڿ���
			int top = myStack.top();
			myStack.pop();

			if (top > cur) {
				cout << "NO";
				stop = 0;
				break;
			}
			else {
				result.push_back('-');
			}
		}
	}

	if (stop == 1) {
		for (int i = 0; i < result.size(); i++) {
			cout << result[i] << '\n';
		}
	}

}