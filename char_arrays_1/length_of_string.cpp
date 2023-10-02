//we go to each character until we null character.
//as soon as null found stop . Method used linear search
#include<bits/stdc++.h>
using namespace std;
int get_length(char name[])
{
    int l =0;
    int i=0;
    while(name[i]!='\0')
    {
        l++;
        i++;
    }
    return l;
}
int main()
{ 
    char name[100];
    cin>>name;
    cout<<"length is :"<<get_length(name)<<endl;
    return 0;
}

