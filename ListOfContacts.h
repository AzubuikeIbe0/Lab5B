#pragma once
#include "Contacts.h"
#include "NodeOfContacts.h"

class ListOfContacts
{
	//friend class NodeOfContacts;
private:
	NodeOfContacts* head;
public:
	ListOfContacts();

	bool insertFront(Contacts);
	void displayList();
	/*ostream& operator<<(ostream& str, const Contacts& myContact);*/
	Contacts deleteFront();
	

	~ListOfContacts();
};