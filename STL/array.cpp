#include <bits/stdc++.h>
#include <algorithm>
#include <array>

#define int long long int
#define F first
#define S second
#define pb push_back

using namespace std;
/*	We have added const in the print functions as the job of print function \
	is only to read data and const doet not allow to modify var including 	\
	the reference.	*/
void printArray(const array<int, 6> arr) {
	for (int i = 0; i < arr.size(); ++i)
	{
		cout<<arr[i]<<", ";
	}
}


void printArrayWithRef(const array<int, 6> &arr, int n) {
	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<"--> ";
	}
	cout<<endl;
}

void updateArray(array<int, 6> arra, int i, int value) {
	arra[i] = value;
	cout<<"Print the copied array"<<endl;
	printArrayWithRef(arra, 6);
}

void updateArrayWithRef(array<int, 6> &arra, int i, int value) {
	arra[i] = value;
	cout<<"Print the reference array"<<endl;
	printArrayWithRef(arra, 6);
}

int32_t main() {

array<int,6> arra = {6,5,4,3,2,1};


#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

printArray(arra);
printArrayWithRef(arra, 6);
cout<<"Print first and last values: " << endl;
cout<<"First Value: "<<arra.front()<<" Last Valeu: "<<arra.back();

// Updating the Value inside the array
updateArray(arra, 2, 4);
printArrayWithRef(arra, 6);
updateArrayWithRef(arra, 1,2);
printArrayWithRef(arra, 6);

cout<<"-------------------------------------------"<<endl;
cout<<"Addr of first element: "<<arra.begin();
cout<<endl;
cout<<"Addr of first element: "<<arra.end();
cout<<endl;

cout<<"-------------------------------------------"<<endl;
cout<<"Sorting the array using inbuild sort function from array "<<endl;
sort(arra.begin(), arra.end());
printArrayWithRef(arra, 6);


cout<<"-------------------------------------------"<<endl;
cout<<"Sorting with the classical array"<<endl;

// Making a classical array
int arr[] = {5,6,7,8,0};
int n = sizeof(arr)/sizeof(int);

cout<<endl;
cout<<"Size of array is : "<<sizeof(arr)<<endl;
// sorting the array
sort(arr, arr+n);
// printing the classifical array
for (int i = 0; i < n; ++i)
{
	cout<<"Element "<<i<<": "<<arr[i];
	cout<<endl;

}

}