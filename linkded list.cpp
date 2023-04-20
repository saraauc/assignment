#include<iostream>
using namespace std; 

class Node{
	public:
	int data; 
	Node *next;
};
class Linkedlist{
	public: 
	Node *head; 
	Linkedlist(){
		head=NULL;
	}
	bool isempty(){
		if(head==NULL){
			return true;
		}
		else{
			return false;
		}}
		void InsertFirst(int newvalue){
			if(isempty()){
				Node *newnode;
				newnode->data=newvalue;
				newnode->next=NULL; 
				head=newnode;
			}
			else{ 
				Node *newnode;
				newnode->data=newvalue;
				newnode->next=head;
				head=newnode;
			}
		}
		void display(){
			Node *temp=head;
			while(temp!=NULL){
				cout << temp->data<<"";
				temp=temp->next;
			}
		}
		int count(){
			int counter;
			Node *temp=head;
			while(temp!=NULL){
				counter++;
				temp=temp->next;
			}
			return counter;
		}
		bool isfound(int key){
			bool found=false;
			Node *temp=head;
			while (temp!=NULL){
				if(temp->data==key){
					found=true;
				}
				return found;
			}
			
		}
		
};
int main(){
	Linkedlist lst; 
	if(lst.isempty()){
		cout << "The list is Empty \n";
	}
	else{
		cout << "The list contains" <<lst.count() <<endl;
	}
	int item;
	cout << "Enter Item to insert in the list" << endl;
	cin >>item;
	lst.InsertFirst(item); 
}
