#include<iostream>
using namespace std;
void print_rev(int n)
{
    //base case 
    if(n==0)
    {
        return;
    }

    //processing 
    cout<<n<<endl;

    //recursive call
    print_rev(n-1);

}
int main()
{
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    print_rev(n);
}