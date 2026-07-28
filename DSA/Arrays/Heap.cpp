#include<iostream>
using namespace std;
class MaxHeap
{
    public:
    vector<int> heap;

    void bubbleup(int index)
    {
        while(index > 0)
        {
            int parent = (index - 1) / 2;

            if(heap[index] > heap[parent])
            {
                swap(heap[index],heapp)
            }
        }
    }
}
int main(){
    
    return 0;
}