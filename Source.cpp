#include <iostream>
#include "LinkedList.h"
#include "LinkedList.cpp"
#include "Node.h"
#include "Node.cpp"

using namespace std;



int main() {
	//commented code tests parts of the code as I go
	/**/
	/**/
	/*   CODE MOSTLY WORKS BUT FAILS WHEN YAH START MANIPULATING THINGS AT THE START OR END OF THE LIST */
	/**/
	//
	//TODO:
	//1.i dont think swap removes work on head and tail
	// unless head and tail are explicitly fed into the argument
	// but even if they are, they are acting like the head and tail
	// are nodes, which is incompatible
	//2. All cases where head->prev isn't treated as a nullptr
	//   need to be corrected
	//

	LinkedList<int>* list = new LinkedList<int>();
	list->AddItem(new int(7));
	list->AddItem(new int(2));
	list->AddItem(new int(3));
	for (size_t i = 100; i > 80; i--)
	{
		list->AddItem(new int(i * 6));
	}
	list->Display();
	bool yes;
	yes = list->Transverse(new int(594), list->head);
	cout << yes << endl;
	list->NotYetMergeSort();
	list->Display();
	Node<int>* temp;
	//int* temp2;
	temp = list->GetItem(new int(486), list->head);
	cout << " Temp = " << *temp->data << endl;
	delete temp;
	temp = nullptr;
	list->Display();
	bool BUGSFIXED = false;
	//**************************************************
	// BIG PROBLEM.  CODE ISN't DESIGNED TO REMOVE HEAD OR TAIL POINTERS 
	// cause they are treated as nodes, not pointers in cases where they shouldnt be 
	// They are assumed to have ->prev and ->next when they dont necessarily do
	// fix!!!!!!!!!!!!!  bug is embedded everywhere unfortunately
	if (BUGSFIXED) {
	temp = list->GetItem(new int(2), list->head);
	cout << " Temp = " << *temp->data << endl;
	delete temp;
	temp = nullptr;
	list->Display();
}
	if (BUGSFIXED) {
		temp = list->GetItem(new int(600), list->head);
		cout << " Temp = " << *temp->data << endl;
		delete temp;
		temp = nullptr;
		list->Display();
	}
	//temp2 = list->SeeNext(new int(504), list->head);
	//cout << " Temp = " << *temp2->data << endl;
	list->Display();
	temp = list -> SeeAt(new int(504), list->head);
	cout << " Temp = " << *temp->data << endl;
	list->Display();
	list->Display();

	return 0;
}