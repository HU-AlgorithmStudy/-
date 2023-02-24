#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;
	vector<int>arr(N, 0);
	
	//�켱 ���迭 ���ı��� �Ϸ�
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());

	int cnt = 0;
	int s = 0, e = N-1;	//index(start~end)

	while (s < e) {
		if (arr[s] + arr[e] == M) {
			cnt++;
			s++;
			e--;
		}
		else if (arr[s] + arr[e] < M) {
			s++;
		}
		else {
			e--;
		}
	}

	cout << cnt;

}