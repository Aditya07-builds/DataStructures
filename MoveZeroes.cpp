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
}
vector <int> movezeros (vector <int> d)
{
    int nonzero=0;
    for (int i =0 ; i< d.size();i++)
    {
        if (d[i]!=0)
        {
            swap(d[nonzero],d[i]);
            nonzero++;
        }
    }
    return d;
}

int main()
{
    vector <int> arr={1,3,0,5,0};
    vector <int> transformed;
    
    cout<< "Before Moving Zeros : "<< endl;
    print(arr);
    cout<<endl;
    
    transformed=movezeros(arr);
    cout<< "After Moving Zeros : "<< endl;
    print(transformed);
    return 0;
}
