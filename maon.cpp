#include<iostream>
using namespace std;

void insertAfter(vector<int>&values,int firstValue, int secondValue){
	for(int i=0; i<values.size()l i++){
		if(values[i]==firstValue){
			values.insert(values.begin()+i+1,secondValue);
			i++;
		}
	}
}

int main(){
	int n; 
	cout << "Enter the number of integers: " << endl;
	cin >> n;
	vector<int>vec(n); 
	cout << "Enter the numbers: " << endl;
	for(int i=0; i <n;i++){
		cin >> vec[i];
	}
	int firstValue;
	int secondValue;
	cout << "Enter the first Value: " << endl;
	cin >> firstValue;
	cout <<"Enter the second value: " << endl;
	cin >> secondValue;
	insertAfter(vec,firstValue,secondValue);
	cout << "The modified vector" << endl;
	printVector(vec);
	LinkedList List;
	list.createFromVector(vec);
	cout << "Linked list: " << endl;
	list.printList();
	int sum=list.sumNode();
	cout << "Sum of Nodes: " << sum << endl;
	int valueToRemove;
	cout << "Enter a Value to remove: ";
	cin >> valueToRemove;
	list.Delete(valueToRemove); 
	cout << "The linked list after removal" << endl;\
	list.printList();
	
}


