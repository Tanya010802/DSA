#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node()
    {
        this->data =0;
        this->next =0;
    }
};
void print(Node* &head)
{
    Node* temp = head;   
    while(temp != NULL)
    {
        cout<<temp->data;
        temp = temp->next;
    }

}
int main()
{
    Node* first = new Node();
    Node* second=new Node();
    Node* third = new Node();
    first->next = second;
    second->next =third ;
    cout<<"print the ll";
    print(first);
}



