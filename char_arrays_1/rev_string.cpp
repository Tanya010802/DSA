//2 pointer approch 
#include<bits/stdc++.h>
using namespace std;

void rev_arr(char name[100])
{
    int i = 0;
    int n = strlen(name);
    int j = n-1;
    while(i<=j)
    {
        swap(name[i],name[j]);
        i++;
        j--;

    }

    //using for loop 

  /* for(;i<=j;)
    {
         swap(name[i],name[j]);
        i++;
        j--;
        } */
}
int main()
{
    char name[100];
   cout<<"Before reversal"<<name;
    cin>>name;
 //   cout<<"Before reversal"<<name;
    rev_arr(name);
    cout<<"After reversal"<<name;
    return 0;
}