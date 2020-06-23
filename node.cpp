#include <iostream>
using namespace std;
struct Node{
    int value;
    Node* next;
};
typedef Node *List;
void create(List &l){
    l = NULL;
}
void add_last(List &l, int x){
    Node *q = new Node;
    q->value = x;
    q->next = NULL;
    if (l == NULL)
    {
        l = q;
    }else
    {
        Node *p = new Node;
        p = l;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = q;
    }
}
void add_frist(List &l, int x){
    Node *q = new Node;
    q->value = x;
    q->next = l;
    l= q;
}
void add_bk(List &l, int x, int k){ // chen vao sau vi tri thu k
    Node *q = new Node;
    q->value = x;
    Node *p = l;
    int i = 0;
    while (p != NULL)
    {
        if(i == k){
            break;
        }else{
            i++;
        }
        p = p->next;
    }
    q->next = p->next;
    p->next = q;
}
void sapxep(List &l){
    List p = l; // i= 0
    List q = p->next; // j = i+1
    while (p->next != NULL)
    {
        q = p->next;
        while(q != NULL){
            if (p->value > q->value)
            {
                swap(p->value, q->value);
            }
            q = q->next;
        }
        p = p->next;
    }

}
bool timkiem(List l, int x){
    while (l->next != NULL)
    {
        if(l->value == x){
            return true;
        }else
        {
            l = l->next;
        }

    }

}
void duyetNode(List l){
    while (l != NULL)
    {
        cout<<l->value<<" ";
        l = l->next;
    }
}
int main(){
    List l;
    create(l);
    add_last(l,1);
    add_last(l, 3);
    add_last(l, 2);
    add_frist(l, 9);
    add_bk(l, 8, 1);
    sapxep(l);
    duyetNode(l);
    cout<<timkiem(l, 6);
    return 0;
}
