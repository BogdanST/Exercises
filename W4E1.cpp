#include "stdafx.h"
#include <iostream>

using namespace std;


int SortArray[] = { 2,7,9,4,1,5,3,6,0,8 }; // a standard given array
int N = size(SortArray); //size of the array

class InsertSort {
	//Efficiency -> O(N*N) 
public:
	int Insert_Sort(int SortArray[]) {
		int key, j, count= 0;
		cout << "Steps: ";
		for (int i = 1; i <=N; ++i) {
			key = SortArray[i];
			j = i;
			while (j > 0 && SortArray[j - 1] > key) {
				SortArray[j] = SortArray[j - 1];
				count += 1; //inscreases based on the number of comparisons
				cout << SortArray[j] << " ";
				j = j - 1;
			}
			cout << endl;
			SortArray[j] = key;
		}
		cout <<"Number of Comparisons for InsertSort: " <<count << endl;
		return 0;
	}

	void PrintInsertSort() {
		Insert_Sort(SortArray);
		cout << "InsertionSort: ";
		for (int i = 1; i <= N; ++i) {
			cout<<SortArray[i] << " ";
		}
	}
};

class BubleSort {
public:
	//Efficiency -> O(N*N) 
	int Bubble_Sort(int SortArray[]) {
		int count = 0;
		bool ok = true;
		cout << "Steps: " << endl;
		while (ok == true) {
			ok = false;
			for (int i = 0; i < N-1 ; i++) {
				if (SortArray[i] > SortArray[i + 1])
				{
					ok = true;
					swap(SortArray[i], SortArray[i + 1]);
					cout << SortArray[i] << " swap with " << SortArray[i + 1] << endl;
					count += 1;
				}
			}
		}
		cout << "Number of Comparisosn for BubbleSort: " << count<<endl;
		return 0;
	}
	void PrintBubbleSort() {
		Bubble_Sort(SortArray);
		cout << "BubbleSort: ";
		for (int i = 0; i < N; ++i) {
			cout<< SortArray[i] << " ";
		}
	}


};

class SelectionSort {
public:
	//Efficiency -> O(N*N) 
	int Selection_Sort(int SortArray[]) {
		int i, j, min, temp,loc,count=0;
		for (i = 0; i < N - 1; ++i) {
			min = SortArray[i];
			loc = i;
			for (j = i + 1; j<N; j++)
			{
				if (min>SortArray[j])
				{
					min = SortArray[j];
					loc = j;
					count += 1;
					cout << "Previous min: " << min << endl;
				}
			}
			temp = SortArray[i];
			SortArray[i] = SortArray[loc];
			SortArray[loc] = temp;
		}
		cout << "Number of Comparisons for Selection Sort: " << count << endl;
		return 0;
	}

	void PrintSelectionSort() {
		Selection_Sort(SortArray);
		cout << "Selection Sort: ";
		for (int i = 0; i < N;++i) {
			cout <<SortArray[i] << " ";
		}
	}
};

int main() {
	int keypressed;
	cout << "Press (1 for InsertSort, 2 for BubbleSort, 3 for SelectSort): ";
	cin >> keypressed;
	switch (keypressed)
	{
	case 1:
		InsertSort ISortArray;
		ISortArray.PrintInsertSort();
		break;
	case 2:
		BubleSort BSort;
		BSort.PrintBubbleSort();
		break;
	case 3:
		SelectionSort SSort;
		SSort.PrintSelectionSort();
		break;
	default:
		break;
	}
	return 0;
}