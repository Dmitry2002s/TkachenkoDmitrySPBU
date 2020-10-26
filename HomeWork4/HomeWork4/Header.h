#pragma once
#include<iostream>

using namespace std;

struct ArrayList
{

	int count = 0;
	int capacity = 10;
	int* data;

	
	ArrayList(int capacity);

	~ArrayList();





void deleteArray(int* arr);



    int* initArray(int capacity = 10);

	bool add(int element, int* data, int count);

	bool expand(int* arr, int count);

	/// <summary>
	/// ��������� ������� � ������� index, ��� ����������� �������� ���������� �� 1 ������
	/// </summary>
	/// <param name="index">������ ������������ ��������</param>
	/// <param name="element">����������� �������</param>
	/// <returns>true, ���� ��� ������ ������, false - ���� �������� ��������</returns>
	
	/// <summary>
	/// ��������� ��� �������� �� ������ list � �����
	/// </summary>
	/// <param name="list">����������� ������</param>
	/// <returns>true, ���� ���������� ��������, false - ���� �� ����������</returns>
	bool addAll(ArrayList& list);

	/// <summary>
	/// ��������� ��� �������� �� ������ list, ������� � ������� index.
	/// ��� ����������� �������� ���������� ������
	/// </summary>
	/// <param name="list">����������� ������</param>
	/// <returns>true, ���� ���������� ��������, false - ���� �� ����������</returns>
	
	/// <summary>
	/// ������� ��� �������� �� ������
	/// </summary>
	void clear();

	/// <summary>
	/// ���������� �� ������� � ������
	/// </summary>
	/// <param name="element">������� �������</param>
	/// <returns>true - ����������, false - �� ����������</returns>
	bool contains(int element);

	/// <summary>
	/// �������� ������� �� �������
	/// </summary>
	/// <param name="index">������ �������������� ��������</param>
	/// <returns>data[index], ���� ������ ���������, -1 - ���� ������ �����������</returns>
	int get(int index);

	/// <summary>
	/// ����� �������� � ������
	/// </summary>
	/// <param name="element">������� �������</param>
	/// <returns>������ ��������, ���� �� ������, -1 - ���� �� ������</returns>
	int indexOf(int element);

	/// <summary>
	/// �������� ������ �� �������
	/// </summary>
	/// <returns>true - ���� ������ ����, false - ���� ���� ���� �� 1 �������</returns>
	bool isEmpty();

	/// <summary>
	/// ����� ������ � ������� [count/capacity] {el1, el2, el3, ...}
	/// </summary>
	void print(int *arr);

	/// <summary>
	/// �������� �������� �� ������
	/// </summary>
	/// <param name="index">������ ���������� ��������</param>
	/// <returns>true - ��� ������ ������, false - �������� ��������</returns>
	bool remove(int index);

	/// <summary>
	/// �������� ������� ��������
	/// </summary>
	/// <param name="index1">������ ������� ��������</param>
	/// <param name="index2">������ ������� ��������</param>
	/// <returns>true - ��� ������ ������, false - �������� ��������</returns>
	int swap(int index1, int index2);

	bool addtoindex(int element, int index, int* data, int count);

	void processChoice(int choice); 
};