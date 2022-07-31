#include <bits/stdc++.h>
#include <queue>

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	queue<int> q;

	q.push(10);
	q.push(7);
	q.push(3);
	q.push(1);
	q.push(15);


	while(!q.empty()){
		cout<<q.front()<<", ";
		q.pop();
	}

	return 0;
}