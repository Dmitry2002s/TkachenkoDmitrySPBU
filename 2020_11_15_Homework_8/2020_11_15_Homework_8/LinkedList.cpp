#include "LinkedList.h"

int LinkedList::length()
{
	int p = 0;
	Node* temp = head; 
	while (temp != nullptr)
	{
		temp=temp->next;
		p++;
	}
	return p;
}

bool LinkedList::addToHead(int element )
{
	if (head == nullptr)
	{
		head = tail = new Node(element);
	}
	else
	{
		head = new Node(element, head);
	}
	count++;
	return true;
}

bool LinkedList::addToTail(int element)
{
if (tail == nullptr)
{
	head = tail = new Node(element);
	
}
else
{
	tail->next = new Node(element);
	tail = tail->next; 

}
count++;
return true;
}

int LinkedList::get(int index)
{
	if (!indexValid(index))
	{
		return -1; 
	}
	if (index == 0)
	{
		return head->data; 
	}
	if (index == count -1 )
	{
		return tail->data; 
	}
	Node* temp = head; 
	for (int i = 0; i < index - 1; i++)
	{
		temp = temp->next; 
	}
	return temp->data;
}

bool LinkedList::set(int index, int element)
{
	if (indexValid(index))
	{
		return false;
	}
	if (index == 0)
	{
		head->data = element;
		return true;
	}
	else if (index == count - 1)
	{
		tail->data = element;
		return true;
	}
	else
	{
		Node* temp = head;
		for (int i = 0; i < index - 1; i++)
		{
			temp = temp->next;
		}
		temp->data = element;
	}
	return true; 

}

int& LinkedList::operator+=(int element)
{
	addToTail(element);
	return element;
	// TODO: вставьте здесь оператор return
}

LinkedList::LinkedList(const LinkedList& list)
{
	tail = head = nullptr;
	count = 0;
	Node* temp = list.head;
	while (temp != nullptr)
	{
		addToTail(temp->data);
		temp = temp->next; 
	}
}

LinkedList::~LinkedList()
{
	Node* temp = head; 
	while(temp != nullptr)
	{
		Node* node = temp; 
		temp = temp->next; 
		delete node; 
	}
}

bool LinkedList::indexValid(int index )
{

	return (index >= 0 && index < length());
}

bool LinkedList::add(int index, int element)
{
	if (!indexValid(index))
	{
		return false; 
	}
	if (index == 0)
	{
		return addToHead(element); 
	 }
	if (index == count)
	{
		return addToTail(element); 
	}

	Node* temp = head; 
	while (index > 1)
	{
		temp = temp->next;
		--index; 
	}
	temp->next = new Node(element, temp->next); 
	++ count; 
	return true;
}

std::ostream& operator<<(std::ostream& stream, const LinkedList list)
{
	stream << "[" << list.count << "] {";
	if (list.head == nullptr)
	{
		stream << "EMPTY";
	}
	else
	{
		Node* temp = list.head;
		while (temp != nullptr)
		{
			stream << temp->data; 
			if (temp->next != nullptr)
			{
				stream << ", "; 
			}

			temp = temp->next; 
		}
	}
	stream << "}";
	return stream; 
	// TODO: вставьте здесь оператор return
}


int& LinkedList::operator[](int index)
{
	if (head == nullptr)
	{
		addToHead(0);
			return head->data; 
	}
	if (index <= 0)
	{
		return head->data; 
	}
	if (index >= count)
	{
		addToTail(0);
		return tail->data;
	}
	if (index == count - 1)
	{
		return tail->data; 
	}
	Node* temp = head;
	for (int i = 0; i < index - 1; i++)
	{
		temp = temp->next;
	}
	return temp->data;


}

int LinkedList::extractHead()
{
	
	Node* temp = head;
	head = temp->next;
	delete temp;

	return 0;
}

int LinkedList::extractTail()
{
	Node* temp = head;
	for (int i = 0; i < length() - 2; i++)
	{
		temp = temp->next;
	}
	Node* node = temp;
	tail = node; 
	delete temp->next;
	temp->next = nullptr;
	return false; 
}

int LinkedList::extract(int index)
{
	if (!indexValid(index))
	{
		return false ;
	}
	
	if (index == 0)
	{
		extractHead();
		return false; 
	}
	if (index == length() - 1)
	{
		extractTail();
		return false; 
	}
	else
	{
		Node* temp = head;
		for (int i = 0; i < index - 1; i++)
		{
			temp = temp->next;
		}
		Node* node = temp->next; 
		temp->next = temp->next->next; 
		delete node; 
	}
	return 0;
}

void LinkedList::operator-=(int index)
{
	extract(index);
}

LinkedList& LinkedList::operator=(LinkedList list1 )
{
	Node* temp = head; 
	for (int i = 0; i < list1.length(); i++)
	{
		
		int p = temp->data;
		addToTail(i);
		temp = temp->next; 
	}
	// TODO: вставьте здесь оператор return
	return list1; 
}



int LinkedList::indexOf(int e )
{
	int i = 0; 
	Node* temp = head;
	if (head->data == e)
	{
		return i; 
	}
	for (int i =1; i <length()-1;i++)
	{
		temp=temp->next; 
		if (temp->data == e)
		{
			return i;
		}
	}
	
	return -1;
}

bool LinkedList::contains(int e )
{
	if (indexOf(e) == -1)return false;
	return true; 
}

bool LinkedList::swap( int index1, int index2 )
{
	indexValid(index1);
	indexValid(index2);
	Node* temp = head; 
	Node* swap = head; 
	for (int i = 0; i < index1-1; i++)
	{
		temp = temp->next; 
	}
	for (int i = 0; i < index2-2; i++)
	{
		swap = swap->next; 
	}

 //Здесь было пара десятков попыток сделать swap 
	return true;
}

