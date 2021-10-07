/*
*@author = "Kashif Raza"
*@description = "C++ custom library tester"
*
*/

#include <iostream>
#include "linkedListInt.h"
using namespace std;

int main()
{
    Node* head = new Node(1);
    insert(head, 2);
    insert(head, 34);
    insert(head, 6);
    display(head);
    int n = pop(head);
    cout<<"Deleted Node Value\n"<<n<<endl;
    display(head);
    cout<<"Reversed Linked List\n";
    Node* newHead = reverse(head);
    display(head);
    cout<<"Sorted Linked List\n";
    Node* newH2 = sort(head);
    display(newH2);
    cout<<"Seach in Linked List\n";
    Node* searched = search(head, 34);
    cout<<searched->val<<endl;
    return 0;
}
