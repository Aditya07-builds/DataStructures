#include <iostream>
using namespace std;

void printsum(int a[][3],int i, int j)
{
  for(int i=0 ;i<3;i++)
  {
    cout<<"Sum of "<<i+1<<" row is : "; 
    int sum=0;
  	for(int j=0;j<3;j++)
    {
    	sum+=a[i][j] ;
    }
    cout<<sum<<endl;
  }
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
  
  cout<< "Your Array looks like:-"<<endl;
  
  for(int i=0 ;i<3;i++)
  {
  	for(int j=0;j<3;j++)
    {
    	cout << a[i][j]<<" " ;
    }
    cout<<endl;
  }
  
  printsum(a,3,3);
}
