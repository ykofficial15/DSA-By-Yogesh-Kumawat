#include<iostream>
using namespace std;
struct node{
  int size;
  int *arr;
  int top;
};
void isEmpty(struct node *ptr)
{
  if(ptr->top==-1)
  {
    cout<<"stack is empty"<<endl;
  }
}
void isFull(struct node *ptr)
{
  if(ptr->top==ptr->size-1)
  {
    cout<<"stack is full"<<endl;
  }
}

int main(){
  struct node *s=(struct node*)malloc(sizeof(struct node));
  s->size=4;
  s->top=-1;
  s->arr=(int *)malloc(s->size*sizeof(int));
  isEmpty(s);
  isFull(s);
  return 0;
}