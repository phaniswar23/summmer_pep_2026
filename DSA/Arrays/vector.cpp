#include<iostream>
using namespace std;

int main(){
    vector<int> vec1 = {1,2,3,4,5};
    vec1.push_back(9);
    cout << vec1.at(3) << endl;
    cout << vec1.at(5) << endl;
    cout << vec1.size();
    v.pop_back();
    cout << vec1.size();
    return 0;
}