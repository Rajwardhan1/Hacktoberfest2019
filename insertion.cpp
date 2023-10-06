https://github.com/search?q=hacktoberfest&type=repositorieshttps://github.com/search?q=hacktoberfest&type=repositories#include <iostream>
using namespace std;

//Function for displaying the elements
void display(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

// Function for sorting the elements
void insertionSort(int arr[], int size) {
  for (int i = 1; i < size; i++) {
    int tmp = arr[i];
    int j = i - 1;  
    while (tmp < arr[j] && j >= 0) {
      arr[j + 1] = arr[j];
      --j;
    }
    arr[j + 1] = tmp;
  }
}

// Main Function or Driver Function 
int main() {
  int data[] = {9, 5, 1, 4, 3};
  int size = sizeof(data) / sizeof(data[0]);
  cout << “Elements before sorting:\n";
  display(data, size);
  insertionSort(data, size);
  cout << "Elements after sorting:\n";
  display(data, size);
}


Output of the program:
Elements before sorting:
9 5 1 4 3
Elements after sorting:
1 3 4 5 9 
// C++ program for insertion sort 
#include <bits/stdc++.h>
using namespace std;

/* Function to sort an array using insertion sort*/
void insertionSort(int arr[], int n) 
{ 
	int i, key, j; 
	for (i = 1; i < n; i++)
	{ 
		key = arr[i]; 
		j = i - 1; 

		/* Move elements of arr[0..i-1], that are 
		greater than key, to one position ahead 
		of their current position */
		while (j >= 0 && arr[j] > key)
		{ 
			arr[j + 1] = arr[j]; 
			j = j - 1; 
		} 
		arr[j + 1] = key; 
	} 
} 

// A utility function to print an array of size n 
void printArray(int arr[], int n) 
{ 
	int i; 
	for (i = 0; i < n; i++) 
		cout << arr[i] << " "; 
	cout << endl;
} 

/* Driver code */
int main() 
{ 
	int arr[] = { 94,90,97,50,75 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 

	insertionSort(arr, n); 
	printArray(arr, n); 

	return 0; 
}
