#include<iostream>
using namespace std;

struct node {
  int info;
  struct node* next;
};

struct node * head = NULL;

void insBeg( int item) {
  struct node * p;
  p = (node *)malloc(sizeof(struct node));
  p->info = item;
  p->next=head;
  head=p;
}

void insEnd(int item) {
  struct node * p;
  p = (node *)malloc(sizeof(struct node));
  p->info = item;
  p->next=NULL;
  struct node * temp = head;
  while(temp->next!=NULL){
    temp=temp->next;
  }
  temp->next=p;
  // display();

}

void display(){
  struct node * temp = head;
  while(temp!=NULL){
    cout<<"data is \t"<<temp->info<<"\n";
    temp=temp->next;
  }
  
}

int main (){
  int n;
  cout<<"enter no. of elements\n";
  cin>>n;
  int item;
  while(n--){
    cout<<"enter data\n";
    cin>>item;
    insBeg(item);
  }
  insEnd(4);
  display();
  return 0;
}
