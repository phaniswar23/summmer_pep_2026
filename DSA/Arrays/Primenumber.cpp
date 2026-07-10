#include<iostream>
using namespace std;
bool primeNumber(int n)
{
if(n <= 1) return true;
    for(int i = 0;i * i <= n;i++)
    {
        if(n % i == 0)
        {
            return false;
            break;
        }
        
    }
    return true;
}
int main(){
   cout << primeNumber(3);
    return 0;
}