#include<iostream>
using namespace std;

int main(){
    int n = 7;
    if(n == 2) return true;
    for(int i = 0;i <= n;i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return 0;
}