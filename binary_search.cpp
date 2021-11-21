/*
* Binary Search Implementation using vector

* Important Points
! 1. Used only on sorted array
! 2. Time Complexity is better than Linear Search
*/

#include <bits/stdc++.h>

using namespace std;

vector<int> arr;
void insertFromList(vector<int> n)
{
	for (int i : n)
		arr.push_back(i);
}

void printArray()
{
	for (int i : arr)
		cout << i << " ";
	cout << endl;
}

//* Complexity log(n)
int binarySearch(int e, int start, int end)
{
	cout << "Binary Search At " << e << " " << start << " " << end << endl;
	int mid = (end - start) / 2;

	if (arr[start] == e)
		return start;
	else if (arr[end] == e)
		return end;

	if (mid <= 0)
		return -1;
	if (arr[mid] == e)
		return mid;

	if (e > arr[mid])
		binarySearch(e, mid + 1, end);
	else
		binarySearch(e, 0, mid - 1);
}

int main()
{
	insertFromList(vector<int>{10, 2, 3, 5, 6});
	sort(arr.begin(), arr.end());

	printArray();
	cout << "Found Element At: " << binarySearch(10, 0, arr.size() - 1) << endl;
	return 0;
}