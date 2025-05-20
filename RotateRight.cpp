#include<iostream>
#include<vector>

using namespace std;

void print(vector<int> d)
{
    int end=d.size();
    for(int i =0 ; i < end;i++)
    {
        cout<<d[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector <int> arr={1,2,3,4,5,6};
    int k=2; 
    int n= arr.size();
    vector <int> temp(n);                                //The index by which we want to rotate
    
    cout<<"Before Rotating the array : "<<endl;
    print(arr);
    
    for (int i=0;i<n;i++)
    {
        temp[(i+k)%n]=arr[i];
    }

    cout<< "After rotating the array :"<<endl;
    print(temp);
    
}
