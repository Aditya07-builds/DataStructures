#include <iostream>
using namespace std;
bool ispresent(int arr[][3],int target,int i,int j )
{
   for(int i=0 ;i<3;i++)
  {
  	for(int j=0;j<3;j++)
    {
    	if(arr[i][j]==target)
    	return 1;
    }
  }
  return 0;
}

int main() {
  
  int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
  
 for(int i=0 ;i<3;i++)
  {
  	for(int j=0;j<3;j++)
    {
    	cin>>a[i][j] ;
    }
  }
  
  for(int i=0 ;i<3;i++)
  {
  	for(int j=0;j<3;j++)
    {
    	cout << a[i][j]<<" " ;
    }
    cout<<endl;
  }
  
  int target;
  cin>>target;
  
  if(ispresent(a,target,3,3))
  {
    cout<<"Present";
  }
  else
  {
    cout<<"Absent";
  }
  return 0;
}
