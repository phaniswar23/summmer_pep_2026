#include<iostream>
using namespace std;
bool primeNumber(int n)
{
if(n == 2) return true;
    for(int i = 0;i <= n;i++)
    {
        if(n % i == 0)
        {
            return false;
        }
        return true;
    }
}
int main(){
    int n = 7;
    primeNumber(8);
    return 0;
}