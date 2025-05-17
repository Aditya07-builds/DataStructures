// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;

vector <int> reverse (vector<int> arr)
{
    int s=0;
    int e=arr.size()-1;
    while(s<=e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    return arr;
}

void print(vector<int> d)
{
    int end=d.size();
    for(int i =0 ; i < end;i++)
    {
        cout<<d[i]<<" ";
    }
}

int main() {
    vector<int> v;
    vector<int> rev;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    
    cout<<"Before reversing the array : "<<endl;
    print(v);
    
    rev=reverse(v);
   
    cout<<"After reversing the array : "<<endl;
    print(rev);
    
    return 0;
}