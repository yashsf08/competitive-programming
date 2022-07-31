#include <bits/stdc++.h>
#include <vector>
#include <algorithm>

using namespace std;


 void printVector(vector<int> &vec, int n) {
 	for (int i = 0; i < n; ++i)
 	{
 		cout<<"Element "<<i<<": "<<vec[i];
 		cout<<endl;
 	}
 }

int main() {

	// Simpel way
	vector<int> first;

	// Fill constructor (4 values with Integer 20) 
	vector<int>	second(4,20);
 
	// Range Constructor - Using normal array range to build
	int numbers[] = {1,2,3,4,5,6};
	vector<int> third(numbers, numbers+6);

	// Copy Constructor  - Copy the vector pass by value
	vector<int> forth(third);




#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	// printVector(second, 4);
	
	// cout<<endl;

	// printVector(third, 6);

	// cout<<endl;

	// printVector(forth, 6);

	// cout<<endl;

/*
	vector<int> v;
	int n;

	cin>>n;

	for (int i = 0; i < n; ++i)
	{
		int no;
		cin>>no;
		v.push_back(no);
		cout<<"Capacity: "<<v.capacity()<<" size: "<<v.size()<<endl;

	}
	

*/
	// Lets try with reserved capacity
	vector<int> v;
	int n;
	v.reserve(100);
	cin>>n;

	for (int i = 0; i < n; ++i)
	{
		int no;
		cin>>no;
		v.push_back(no);
		cout<<"Capacity: "<<v.capacity()<<" Size: "<<v.size()<<endl;
	}

	// Vector before sorting
	cout<<"------------------------------------------"<<endl;
	printVector(v, 10);

	// Vector after sorting
	cout<<"--------------------------------------------"<<endl;


	// Sorting on the vector
	sort(v.begin(), v.end());
	printVector(v, 10);

}