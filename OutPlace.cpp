// C++ program for insertion sort using outplace 

#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << arr[i] << "  ";
	cout << endl;
}


int insertionSort(int arr[], int n)
{
	int temp[n];
	for (int k = 0; k < n; k++)
	{
		temp[k]= arr[k];
	}
	
	
	int i, key, j;
	for (i = 1; i < n; i++)
	{
		key = temp[i];
		j = i - 1;
        cout<<"\nfor i = "<<i<<" and key = "<<key<<"------------------------>>\n\n";
		while (j >= 0 && temp[j] > key)
		{
            cout<<"for i = "<<i<<" and j = "<<j<<endl;
			temp[j + 1] = temp[j];
			j = j - 1;
            printArray(temp, n);
            cout<<endl;
		}
		temp[j + 1] = key;
        cout<<"Sorting till key "<<key<<" is complete \n";
        printArray(temp, n);
	}
    cout<<endl;
	return temp, n;
}

// Driver code
int main()
{
	// int arr[] = { 12, 11, 13, 5, 6, 3, 10, 27, 8, 9, 1, 2, 0 };
	int arr[] = {5,10,15,20,3,25};
	int N = sizeof(arr) / sizeof(arr[0]);

	cout << "\nOrignal array: \n";
    printArray(arr, N);
    
	// insertionSort(arr, N);
	// int arr2, n2 = insertionSort(arr, N);
	insertionSort(arr, N);
	// cout << "Sorted array: \n";
	// printArray(&arr2, n2);


	return 0;
}