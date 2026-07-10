#include<iostream>
using namespace std;
bool primeNumber(int n)
{
if(n == 2) return true;
    for(int i = 0;i * i <= n;i++)
    {
        if(n % 1 == 0 && n % n == 0)
        {
            return false;
        }
        
    }
    return true;
}
int main(){
   cout << primeNumber(3);
    return 0;
}