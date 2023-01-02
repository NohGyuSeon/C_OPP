#include <iostream>
#include <vector>
#define MAX 1001

using namespace std;

vector<int> a[MAX];
int d[MAX];
bool c[MAX];
int n, m, k, s;

// ��Ī�� ������ ��� True, ������ ��� Fasle
bool dfs(int x) {
	// ������ ��� ��忡 ���ؼ� �� �� �ִ��� �õ�
	for (int i = 0; i < a[x].size(); i++) {
		int t = a[x][i];
		// �̹� ó���� ���� �� �̻� �� �ʿ䰡 ����
		if(c[t]) continue;
		c[t] = true;
		// ����ְų� ���� ��忡 �� �� ������ �ִ� ���
		if(d[t] == 0 || dfs(d[t])) {
			d[t] = x;
			return true;
		}
	}
	return false;
}

int main(void) {
	scanf("%d %d %d", &n, &m, &k);
	for(int i = 1; i <= n; i++) {
		scanf("%d", &s);
		for(int j = 1; j <= s; j++) {
			int t;
			scanf("%d", &t);
			a[i].push_back(t);
		}
	}
	int count = 0;
	for(int i = 1; i <= n; i++) {
		fill(c, c + MAX, false);
		if(dfs(i)) count++;
	}
	// 2���� �۾��� �� �ִ� ����� �߰������� ����մϴ�.
	int extra = 0;
	for(int i = 1; i <= n && extra < k; i++) {
		fill(c, c + MAX, false);
		if (dfs(i)) extra++;
	}

	cout << count + extra << '\n';
	
	return 0;	
}

