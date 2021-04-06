#include<iostream>
using namespace std;

struct node {
  int info;
  struct node* next;
};

void insBeg(struct node ** head, int item) {
  struct node * p;
  p = (node *)malloc(sizeof(struct node));
  p->info = item;
  p->next=*head;
  *head=p;
}

void insEnd(struct node ** head,int item) {
  struct node * p;
  p = (node *)malloc(sizeof(struct node));
  p->info = item;
  p->next=NULL;
  struct node * temp = *head;
  while(temp->next!=NULL){
    temp=temp->next;
  }
  temp->next=p;
  // display();

}

void display(struct node * head){
  struct node * temp = head;
  while(temp!=NULL){
    cout<<"data is \t"<<temp->info<<"\n";
    temp=temp->next;
  }

}

int main (){
  int n;
  struct node * start = NULL;
  cout<<"enter no. of elements\n";
  cin>>n;
  int item;
  while(n--){
    cout<<"enter data\n";
    cin>>item;
    insBeg(&start,item);
  }
  insEnd(&start,4);
  display(start);
  return 0;
}
