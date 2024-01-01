#include <iostream>
#include <cstring>
using namespace std;
bool palindrome(char w[])
{
    int n = strlen(w);
    int i=0;
    int j = n-1;
    while(i<=j)
    {
        if(w[i]!=w[j])
        {return false;}
        else
        {i++;
        j++;
        }
    }
    return true;
}
int main()
{
    char w[100] = "madam";
  
    cout<<palindrome(w);
}