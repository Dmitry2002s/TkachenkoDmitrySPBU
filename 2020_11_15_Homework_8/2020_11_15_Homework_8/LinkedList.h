#pragma once
#include<iostream>
struct Node
{
	int data;
	Node* next;
	Node(int data, Node* next =nullptr) : data(data), next(next) {}
};
class LinkedList
{
private:
	int count;
	Node* head;
	Node* tail;
	//��������� �� ������ � ����� ������, ����� ������

public:
	LinkedList() : count(0), head(nullptr), tail(nullptr) {}
	LinkedList(const LinkedList& list);
		~LinkedList();
	//����������� �� ��������� � ����������� �����������
	 
private:
	bool indexValid(int index); 

public:
	bool add(int index, int element);
	int length();
	bool addToHead(int element);
	bool addToTail(int element);
	friend std::ostream& operator<<(std::ostream& stream, const LinkedList list);
	int get(int index); 
     bool set(int index, int element);
	int& operator+= (int element);
	// int& operator= (const LinkedList& list1, const LinkedList& list2);
	 int& operator[] (int index);
	/// <summary>
	/// ������� ������ ������
	/// </summary>
	/// <returns>�������� ��������, ��������� � ������</returns>
	int extractHead();

	/// <summary>
	/// ������� ����� ������
	/// </summary>
	/// <returns>�������� ��������, ��������� � �����</returns>
	int extractTail();

	/// <summary>
	/// ������� �������, ������� �� ����� index
	/// </summary>
	/// <returns>�������� ��������, ��������� �� ����� index</returns>
	int extract(int index);

	/// <summary>
	/// ������� �������
	/// </summary>
	/// <param name="">������ ���������� ��������</param>
	void operator-=(int);

	LinkedList& operator=(LinkedList);

	/// <summary>
	/// ����� ��������
	/// </summary>
	/// <param name="">�������� ��������</param>
	/// <returns>-1, ���� �������� � ������ ���</returns>
	int indexOf(int e);

	/// <summary>
	/// ���������� �� ������� � ������. � ������� ����� �������� ����� �������
	/// </summary>
	/// <param name="">�������� ��������</param>
	bool contains(int e);

	/// <summary>
	/// �������� ��� �������� �������.
	/// ������������ �������� ��������� ������.
	/// ����� ������ ������ �������� ����� next.
	/// </summary>
	/// <param name="">������ ������� ��������</param>
	/// <param name="">������ ������� ��������</param>
	/// <returns>false - ���� ������� ���� �����������</returns>
	bool swap(int, int);
};
