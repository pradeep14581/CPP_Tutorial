//============================================================================
// Name        : Tutorial1.cpp
// Author      : pradeep
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
using namespace std;

template <class X, class Y>  // function template

X getMax(X a, Y b){
	if(a>b) return a;
	return b;
}

template <class Z> 
class ArrayList{
private:
	int capacity;
	struct testArr{
		int ind;
		Z *data;
	};
	testArr *arr;
public:
	ArrayList(int cap)
	{
		arr = new testArr;
		arr->ind = 90;//cap;
		arr->data = new Z[cap];
		capacity = cap;
		cout<<"\n capacity "<< cap<<endl;
	}
	void printList(Z in){
		for(int i = 0;i<in;i++){
			arr->ind = i;
			arr->data[i] = i;
			cout<<"index "<<arr->ind<<" data "<<arr->data[i]<<endl;
		}
	}
	//testArr arr = None;

	//void printData
};

int main() {
	cout << "Max Value " <<getMax(12,3)<< endl; // prints !!!Hello World!!!
	cout << "Max Value " <<getMax(13.5,14.8)<< endl; // prints !!!Hello World!!!
	ArrayList <int>arrObj(4);
	
    arrObj.printList(4);

	return 0;
}


