#include<iostream>
using namespace std;
struct node{
  int size;
  int *arr;
  int top;
};
int isEmpty(struct node *ptr)
{
  if(ptr->top==-1)
  {
    cout<<"stack is empty"<<endl;
    return 1;
  }
  else{
    return 0;
  }
}
int isFull(struct node *ptr)
{
  if(ptr->top==ptr->size-1)
  {
    cout<<"stack is full"<<endl;
    return 1;
  }
  else{
    return 0;
  }
}

void traversal(struct node *ptr)
{
    while(ptr->top!=-1)
    {
        cout<<ptr->arr[ptr->top]<<" ";
        ptr->top--;
    }
}

int main(){
  struct node *s=(struct node*)malloc(sizeof(struct node));
  s->size=2;
  s->top=-1;
  s->arr=(int *)malloc(s->size*sizeof(int));
  s->top++;
  s->arr[s->top]=10;
    s->top++;
  s->arr[s->top]=20;
    s->top++;
  s->arr[s->top]=30;
  traversal(s);
  return 0;
}