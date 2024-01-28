#include<iostream>
using namespace std;
struct node{
    int size;
    int *arr;
    int f;
    int r;
};
bool isEmpty(struct node *ptr)
{
    return ptr->f==ptr->r;
}
bool isFull(struct node *ptr)
{
    return ptr->f==ptr->r;
}
int main(){
    struct node *s=new struct node;
    s->size=5;
    s->f=-1;
    s->r=-1;
    s->arr=new int[s->size];
    isEmpty(s);
    isFull(s);
    return 0;
}