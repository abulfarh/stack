#include "stack_array.h"
#include <assert.h>
template <class T >
bool stack_array <T> ::Empty()
{
	return (element == 0);
}
template <class T >
stack_array<T>::stack_array(int x)
{
	capacity = x;
	element = 0;
	arr = new T[x];
}
template <class  T >
int stack_array <T> ::Lenght()
{
	return element;
}
template <class  T >
T stack_array <T> ::Pop ()
{
	T tmp;
	assert(!Empty());
	tmp = arr[element - 1];
	element--;
	return tmp;
}
template <class T >
T stack_array <T> ::Top()
{
	return (arr[element]);
}
template <class T>
void stack_array <T> ::Push(T x)
{
	if (capacity == element)
		Expand();
	arr[element] = x;
	element++;
}
template <class T>
void stack_array <T> ::Expand()
{
	T *arr2 = new T[capacity + 10];
	for (int i = 0; i < capacity; i++)
		arr2[i] = arr[i];
	delete[] arr;
	arr = arr2;
	capacity += 10;
}