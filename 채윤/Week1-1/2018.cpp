#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int num;
	cin >> num;
	int cnt = 1, sum = 1;
	int start = 0, end = 0;

	while (end != (num - 1)) {
		if (sum == num) {
			cnt++;
			end++;
			sum = sum + (end + 1);	//end�� 1�� �ؾ��߳�...
		}
		else if (sum > num) {
			sum = sum - (start + 1);	//start�� 1�� ����...
			start++;
		}
		else {
			end++;
			sum = sum + end;
		}
	}

	cout << cnt;
}