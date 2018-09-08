#include<iostream>
using namespace std;
void insertion(int a[],int n)
{int i,j,key;
for(j=1;j<n;j++)
  {
     i=j-1;
     key=a[j];
    while(i>-1 && a[i]>key)
    {
      a[i+1]=a[i];
      i=i-1;
    }
    a[i+1]=key;
  }
for(int x=0;x<n;x++)
{
  cout<<a[x];
}
}

int main()
{
  int n;
  cout<<"Enter the no. of elements"<<endl;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
insertion(a,n);
}
