#include<iostream>
#include<string>
using namespace std;
int main() {
    char ch[100];
    //cin>>ch;
    //cout<<ch;
    cin.getline(ch,50);
    cout<<ch;
}
//the above code prints only the first name coz cin function doesnt accepts tab space or enter 
//To enter the full name we have to use getline function . 