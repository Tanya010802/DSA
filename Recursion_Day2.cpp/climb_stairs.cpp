//You are climbing a staircase. It takes n steps to reach the top.

//Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

#include<iostream>
using namespace std;
int Climb_stairs(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    return Climb_stairs(n-1) + Climb_stairs(n-2); 
}
int main()
{
    int n;
    cout<<"enter the value of n";
    cin>>n;
    int ans = Climb_stairs(n);
    cout<<ans;
}

 