#include <iostream>
using namespace std;

int check = 0;	//������ ������ ����
int password[4];	//��й�ȣ ���� �迭
int current[4];	//������Ʈ �� ���� ���� �迭
void add(char c);
void remove(char c);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int S, P;
	cin >> S >> P;
	string DNA;
	cin >> DNA;

	for (int i = 0; i < 4; i++) {
		cin >> password[i];
		if (password[i] == 0) {	//Ȯ���� �ʿ� �����Ƿ� ����
			check++;
		}
	}
	
	int cnt = 0;

	for (int i = 0; i < P; i++) {	//0~P-1
		add(DNA[i]);
	}	
	
	if (check == 4) {
		cnt++;
	}

	for (int i = P; i < S; i++) {
		int j = i - P;
		add(DNA[i]);
		remove(DNA[j]);

		if (check == 4) {
			cnt++;
		}
	}

	cout << cnt << endl;
}

void add(char c)
{
	switch (c) {
	case 'A':
		current[0]++;
		if (current[0] == password[0])
			check++;
		break;
	case 'C':
		current[1]++;
		if (current[1] == password[1])
			check++;
		break;
	case 'G':
		current[2]++;
		if (current[2] == password[2])
			check++;
		break;
	case 'T':
		current[3]++;
		if (current[3] == password[3])
			check++;
		break;
	}
}

void remove(char c)	//delete�� �̸� ������ ��..
{
	switch (c) {
	case 'A':
		if (current[0] == password[0])
			check--;
		current[0]--;
		break;
	case 'C':
		if (current[1] == password[1])
			check--;
		current[1]--;
		break;
	case 'G':
		if (current[2] == password[2])
			check--;
		current[2]--;
		break;
	case 'T':
		if (current[3] == password[3])
			check--;
		current[3]--;
		break;
	}
}