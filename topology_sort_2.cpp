#include <iostream>
#include <vector>
#include <queue>
#define MAX 501

using namespace std;

int n, inDegree[MAX], time[MAX], result[MAX];
vector<int> a[MAX];

void topologySort() {
	queue<int> q;
	// 진입 차수가 0인 노드를 큐에 삽입합니다.
	for(int i = 1; i <= n; i++) {
		if(inDegree[i] == 0) {
			result[i] = time[i];
			q.push(i);
		}
	} 
	// 정렬이 완전히 수행되려면 정확히 n개의 노드를 방문합니다.
	for(int i = 1; i <= n; i++) {
		int x = q.front();
		q.pop();
		for(int j = 0;  j < a[x].size(); j++) {
			int y = a[x][j];
			result[y] = max(result[y], result[x] + time[y]);
			if(--inDegree[y] == 0) {
				q.push(y);
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		printf("%d\n", result[i]);
	} 
}

int main(void) {
	scanf("%d", &n);
	for(int i = 1; i <=n ; i++) {
		scanf("%d", &time[i]);
		while(1) {
			int x;
			scanf("%d", &x);
			if(x == -1) break;
			inDegree[i]++;
			a[x].push_back(i);
		}
	}
	topologySort();
}

