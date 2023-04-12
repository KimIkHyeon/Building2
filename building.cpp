#include <iostream>
#include <stack>

using namespace std;

#define MAXN ((int)1e5)

int N;//������
int H[MAXN+10];//��������
int sol[MAXN+10];//�� �������� ���̴� ���� ��ȣ

void InputData() {
	cin >> N;
	for (int i=1; i<=N; i++){
		cin >> H[i];
	}
}

void OutputData() {
	for (int i=1; i<=N; i++){
		cout << sol[i] << "\n";
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	InputData();//�Է¹޴� �κ�

	//���⼭���� �ۼ�
	
	stack<int> stk;
	
	for (int i = 1; i <= N; i++) {
		while (!stk.empty() && H[stk.top()] < H[i]) {
			sol[stk.top()] = i;
			stk.pop();
		}
		stk.push(i);
	}

	OutputData();//����ϴ� �κ�
	return 0;
}
