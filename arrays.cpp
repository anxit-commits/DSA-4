#include<iostream>
using namespace std;
int main(){
    int marks[5];
    
    int size = 5;
    for (int i = 0; i < size; i++)
    {
        cin>>marks[i];
    }
    
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    // cout<<marks[4]<<endl;
    // cout<<sizeof(marks)<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<marks[i]<<endl;
    }
    
    return 0;
}