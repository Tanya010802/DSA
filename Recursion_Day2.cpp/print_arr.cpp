// PRINT ARRAY USING RECUSRION 
#include<iostream>
using namespace std;
void print_arr(int n, int arr[], int i)
{
  //base case 
  if(i>=n)
  {
    return;
  }
  cout<<arr[i]<<" ";
  print_arr(n,arr,i+1);
}
int main()
  {
    int n=5;
    int i=0;
    int arr[5]={1,2,3,4,5};
    print_arr(n,arr,i);
    
  }