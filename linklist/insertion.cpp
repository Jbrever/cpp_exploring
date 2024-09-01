// #include<bits/stdc++.h>
// using namespace std;

// class node{
//   public:
//   int data ;
//   node* next ;
//   node(int data){
//     this-> data = data;
//     this -> next = NULL;
//   }
// };
// void  athead(int data ,node* &head){
//   node* newhead = new node(data);
//   newhead->next =  head;
//   head = newhead;
// }void display(node* head){
//   node* temp = head;
//   while(temp){
//     cout<<temp->data<<" -> ";
//     temp = temp->next;
//   }cout<<"NULL";
// }

// int main(){
//   node* a = new node(2);
//   vector<int>arr={1,2,3,4,5};
//   for(int i =0 ; i<arr.size(); i++){
//   athead(arr[i],a);
//   }
//   display(a);
// }


#include<bits/stdc++.h>
using namespace std;

class node{
  public:
  int data ;
  node* next;

  node(int data , node* next){
      this -> data = data;
      this -> next = next; 
  }
};

void display(node* a){
  node* temp = a;
  while(temp){
      cout<<"|"<<temp->data<<"|"<<" "<<"-->"<<" ";
      temp = temp->next;
  }
  cout<<"NULL";
}

void insert_at_head(node* &head , int data){
   node* temp = new node(data , nullptr);
   temp->next = head;
   head = temp;
}

void insert_at_tail(node* &head , int data){
    node* temp = new node(data , nullptr);
    head->next = temp;
    head = temp;
}

void insert_at_between(node* &head , int position){
    node* newNode = new node(45 , nullptr);
    node* temp = head;
    
    for(int i = 1 ; position!=i ; i++){
      temp = temp->next; 
    } 
    node* move  = temp->next;
    temp -> next = newNode;
    newNode -> next = move; 
    
}

node* reverse(node* head){
   node* t1 = head , *t2 = head->next , *t3 = head -> next;

   t1->next = NULL;

   while(t2){
    t3 = t2 -> next;
    t2 -> next = t1;
    t1 = t2;
    t2 = t3;

   }
   return t1;
}

int main(){
  vector<int>arr={10,20,30,40,50,60};
  vector<int>arr2 = {9,8,7,6,5,4,3,2,1};
  node* a = new node(arr[0] , nullptr);
  node* b = a;
  int i =1;
  while(i<arr.size()){
  insert_at_head(a , arr[i]);
  i++;
  }

  int j=0;
  while(j<arr2.size()){
    insert_at_tail(b , arr2[j]);
    j++;
  }

  //display(a);
  
  int position = 3;
  insert_at_between(a , position); 

  a = reverse(a);  
  display(a);
}

