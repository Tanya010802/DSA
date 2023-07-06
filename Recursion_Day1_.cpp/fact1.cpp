#include<iostream>
using namespace std;

int factorial(int n)
{
    //Base case 
    if(n==1)
    {
        return 1;
    }
    int smaller_prob = factorial(n-1);
    int bigger_prob = n*smaller_prob;
    return bigger_prob;
}
int main()
{
    int n;
    cout<<"Enter the value of n for which u need to calculate factorial";
    cin>>n;
    int ans = factorial(n);
    return ans;
}