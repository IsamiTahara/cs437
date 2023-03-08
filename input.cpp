#include <iostream>
#include <fstream>
using namespace std;

int ComputeAverage(int data[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += data[i];
    }
    return sum / size;
}

void FindLargeValues(int data[], int size, int largeValues[], int &nLargeValues) {
    nLargeValues = 0;
    int average = ComputeAverage(data, size);
    for (int i = 0; i < size; i++) {
        if (data[i] > average) {
            largeValues[nLargeValues] = data[i];
            nLargeValues++;
        }
    }
}

int main() {
    string filename;
    cin >> filename;

    ifstream inputFile(filename);
    
    if (!inputFile.is_open()) {
        return 1;
    }

    const int MAX_SIZE = 20;
    
    int data[MAX_SIZE];
    
    int size = 0;
    
    while (inputFile >> data[size]) {
        size++;
        
        if (size == MAX_SIZE) break;
        
     }

     inputFile.close();

     int largeValues[MAX_SIZE];
     int nLargeValues;

     FindLargeValues(data, size, largeValues, nLargeValues);

     for (int i = 0; i < nLargeValues; i++) {
         cout << largeValues[i] << " ";
     }
     
     return 0;
}
