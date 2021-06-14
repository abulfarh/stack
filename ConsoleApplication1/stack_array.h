#pragma once
template <class T >
class stack_array
{
private :
	int element;
	int capacity;
	T* arr;
	void Expand();
public :
	stack_array(int);
	int Lenght();
	void Push(T);
	T Pop();
	T Top();
	bool Empty();
	
};

