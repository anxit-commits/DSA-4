#include<iostream>
using namespace std;
#include<climits>
int main(){
    int nums[] = {22, 44, -22, 76, 4};
    int size = 5;
    int smallest = INT_MAX;
    int largest = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        smallest = min(nums[i], smallest);
        largest = max(nums[i], largest);
        
    }
    cout<<"smallest ="<<smallest<<endl;
    
}