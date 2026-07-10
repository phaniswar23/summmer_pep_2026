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
        
    }
    return true;
}
int main(){
   cout << primeNumber(2);
    return 0;
}