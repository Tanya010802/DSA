#include<bits/stdc++.h>
using namespace std;
void convert_up(char arr[])
{
    int n =strlen(arr);
    for (int i=0;i<=n-1;++i)
    {
        arr[i] = arr[i] -'a'+'A';
    }

}
int main()
{
    char arr[100] = "bob";
    convert_up(arr);
    cout<<arr<<" ";
}