//BY Saksham Khandelwal and Pranjal Gupta
//Binary Search Modification
#include<iostream>
using namespace std;
//---------------------------------Main---------------------------------------
int binary_search_main(int array[], int left, int right, int x) {
	int count = 0;
    while (left <= right) { 
        int mid = left + (right - left) / 2; 
        count++;
        if (array[mid] == x) {
        	cout << count << endl;
            return mid;
        }
        else if (array[mid] < x) 
            left = mid + 1; 
        else
            right = mid - 1; 
    } 
    return -1; 
}

//-------------------------------Modified-------------------------------------
int binary_search_modified(int array[], int left, int right, int x) {
	int count = 0;
    while (left <= right) { 
        int mid = left + (right - left) / 2; 
        count++;
        if (array[mid] == x) {
        	cout << count << endl;
            return mid;
        }
		else if (array[mid-1] == x) {
			cout << count << endl;
			return mid-1;
		}
		else if (array[mid+1] == x) {
			cout << count << endl;
			return mid+1;
		}
        else if (array[mid] < x) 
            left = mid + 1; 
        else
            right = mid - 1; 
    } 
    return -1; 
}

int main() {
	cout << "Enter the size of the array : " << endl;
	int size;
	cin >> size;
	int array[size];
	cout << "Enter the elements of the array : " << endl;
	for(int i=0;i<size;i++) {
		cin >> array[i];
	}
	cout << "Enter the element to be searched : " << endl;
	int x;
	cin >> x;
	cout << "Count is : ";
	cout << "(MAIN)Element found at index position " << binary_search_main(array, 0, size-1, x) << endl;
	cout << "Count is : ";
	cout << "(MODIFIED)Element found at index position " << binary_search_modified(array, 0, size-1, x);
	return 0;
}
