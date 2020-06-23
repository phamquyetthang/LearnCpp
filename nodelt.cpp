#include <iostream>
using namespace std;
struct Node
{
    int value;
    Node* next;
};
typedef Node *List;
void create(List &l, int x){
    l->value = x;
    l->next = NULL;
}
bool find(Node* head, int x){
    while (head != NULL)
    {
        if(head->value == x){
            return true;
        }else
        {
            head = head->next;
        }
    }

}
Node* insertAfter(List head, int x, int y){
    Node* n = new Node;
    n->value = y;
    List p = head;
    while (p!= NULL){
        if (p->value == x)
        {
            n->next = p->next;
            p->next = n;
        }
        p = p->next;
    }
    return head;
}
Node* insertBefore(Node* head, int x, int y){
    List n = new Node;
    n->value = y;
    List p = head;
    List q = new Node;
    while (p != NULL)
    {
        q = p->next;
        while (q != NULL)
        {
            if (q->value == y)
            {
                n->next = q;
                p->next = n;
            }
            q = q->next;
        }
        p = p->next;
    }
    return head;
}
Node* deleteNode(Node* head, int x){
    
}
void show(List l){
    while (l != NULL)
    {
        cout<<l->value<<" ";
        l= l->next;
    }
}
int main(){
    List l;
    create(l, 2);
    insertAfter(l, 2, 4);
    insertAfter(l, 2, 3);
    insertBefore(l, 3, 6);
    show(l);
    if (find(l, 3) == false)
    {
        cout<<"F";
    }else
    {
        cout<<"T";
    }


    return 0;
}
