#include "sort.h"
#include <iostream>

using namespace std;

Sort::Sort(int* array, int length)
{
	this->array = array;
	this->length = length;
}

Sort::~Sort()
{
	if (array) {
		delete[] array;
		array = nullptr;
	}
}

int* Sort::bubbleSort()
{
	return nullptr;
}

int* Sort::mergeSort()
{
	return nullptr;
}

int* Sort::quickSort()
{
	return nullptr;
}

int Sort::isSorted()
{
	return 0;
}

void Sort::runTest()
{
	cout << "Test is running...";
}
