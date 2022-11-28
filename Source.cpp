#include "Contacts.h"
#include "NodeOfContacts.h"
#include "ListOfContacts.h"

int main()
{

	ListOfContacts L;

	L.insertFront();
	L.displayList();
	L.deleteFront();
	//L.operator<<(ostream & str, const ListOfContacts &mList);

	L.~ListOfContacts();

	return 0;
}