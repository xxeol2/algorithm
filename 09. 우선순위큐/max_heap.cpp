/*
2021.01.06 정설희
최대heap 구현
*/

#include <bits/stdc++.h>
#define MAX 10'001
using namespace std;

void swap(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

typedef struct pq{
	int heap[MAX];
	int idx = 1; //heap내 node의 개수
} pq;

void push(pq* root, int data)
{
	// 범위 초과하면 return
	if (root -> idx >= MAX) return;
	
	// 1. 제일 끝에 붙이기
	root->heap[root->idx] = data;
	
	// 2. 부모와 자신을 비교
	int now = root->idx;
	int parent = now/2;
	// 부모 < 자신 : 자리변경 & 계속 / 부모 >= 자신 : 자리변경X & 종료
	while (now!=1 && root->heap[now] > root->heap[parent] ) {
		swap(&root->heap[now], &root->heap[parent]);
		now = parent;
		parent = parent / 2;
	}
	root->idx++;
}

int pop(pq* root) {
	// 추출 대상 더이상 없을 경우 오류 출력
	if (root->idx <= 1) return -9999;
	
	// 1. 루트노드 삭제
	int res = root->heap[1];
	root->idx--;

	// 2. 마지막 노드 루트노드로 이동
	root->heap[1] = root->heap[root->idx];
	int now = 1;
	int left = 2;
	int right = 3;
	while (left < root->idx) {
		int child = left;
		if (right < root->idx)
			child = root->heap[left] > root->heap[right] ? left : right;

		// 2. 자식 중 큰 데이터와 비교 (자식<=자신 : 자리변경X & 종료)
		if (root->heap[child] <= root->heap[now])
			break;
		// (자식>자신 : 자리변경 & 계속)
		swap(&root->heap[child], &root->heap[now]);
		now = child;
		left = now * 2;
		right = now * 2 + 1;
	}
	return res;
}

int main(void)
{
	pq root;

	// 5 1 4 2 3 순서로 push
	push(&root, 5);
	push(&root, 1);
	push(&root, 4);
	push(&root, 2);
	push(&root, 3);
	
	// 우선순위 높은 것 부터 차례로 pop
	for (int i = 0; i < 5; i++)
		cout << pop(&root) << "\n";

}