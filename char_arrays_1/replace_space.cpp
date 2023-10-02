#include <iostream>
#include <cstring>
using namespace std;
void replace(char sen[])
{
    int i=0;
    int n = strlen(sen);
    for(int i=0;i<n;i++)
    {
        if(sen[i]==' ')
        {sen[i]='@';}
    }
}
int main()
{
    char sen[100];
    cin.getline(sen,50);
    replace(sen);
    cout<<sen;
}