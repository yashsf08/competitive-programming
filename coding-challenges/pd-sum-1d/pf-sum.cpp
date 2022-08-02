#include <bits/stdc++.h>

#define int long long
#define F first
#define S second
#define pb push_back


// using namespace std;

void printArray(std::vector<int> v) {

    std::cout << "in the function ----" << std::endl;

    for (int i = 0; i < v.size(); i++) {
        std::cout<<"Printing... "<<i<<std::endl;
        std::cout<<v[i]<<std::endl;
    }

}

int32_t main() {

    std::vector<int> x(10, 20);
    // x.reserve(10, 10);

    std::cout<<"Size of the vector is:"<<x.size()<<std::endl;
    

    x.pb(10);

    std::cout<<"Before any change: "<< x.size();
    std::cout<<std::endl;

    printArray(x);

    // std::cout<<"After change: "<<std::endl;

    return 0;

}
