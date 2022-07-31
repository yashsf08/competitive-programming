#include <bits/stdc++.h>
#include <stack>

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	stack<string> languages;

	languages.push("C++");
	languages.push("python");
	languages.push("Java");
	languages.push("Haskell");
	languages.push("JavaScript");



	while(!languages.empty()){
		cout<<languages.top();
		cout<<endl;
		languages.pop();

	}
/*
	As you can see the stack would print the list in LIFO
order
	JavaScript
	Haskell
	Java
	python
	C++*/
}