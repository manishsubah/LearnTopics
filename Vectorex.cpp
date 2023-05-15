#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector <int> a;

    a.push_back(20);
    a.push_back(40);
    a.push_back(60);
    a.push_back(70);
    a.push_back(80);
    cout<<"elements in vector: ";
    for(int i=0; i<a.size(); i++) {
        cout<<a[i]<<" ";
    }
    return 0;
}

