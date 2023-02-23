#include <iostream>
#include <string>
using namespace std;

bool isSorted(int array[], int size, string& message);

int main() {
    int n;
    cin >> n;
    int arr[10];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    string message ;
    bool sorted = isSorted(arr, n, message);
    if (sorted) {
        cout << "Sorted - " << message << endl;    
    }
    else {
        cout << "Unsorted" << endl; 
    }

    return 0;

}

bool isSorted(int array[], int size, string& message) {
    bool ascending = true;
    bool descending = true;
    for (int i = 1; i < size; i++) {
        if (array[i] > array[i-1]) {
            descending = false;
        } else if (array[i] < array[i-1]) {
            ascending = false;
        }
    }

    if (ascending) {
        message = "Ascending";
        return true;
    } else if (descending) {
        message = "Descending";
        return true;
    } else {
        return false;
    }
}
