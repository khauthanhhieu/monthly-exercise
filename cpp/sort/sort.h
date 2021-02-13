#pragma once

class Sort {
private:
	int* array;
	int length;

	const static int ASC = 1;
	const static int DEC = -1;
	const static int NONE = 0;

	Sort(int* array, int length);
	~Sort();

	int* bubbleSort();
	int* mergeSort();
	int* quickSort();

	int isSorted();

public:
	void static runTest();
};