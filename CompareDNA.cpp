#include <iostream>
#include <string>
using namespace std;

//TODO: implement compareDNA
int compareDNA(string dna1, string dna2, int results[]) {
    int num_diff = 0;
    for (int i = 0; i < dna1.length(); i++) {
        if (dna1[i] != dna2[i]) {
            results[num_diff] = i;
            num_diff++;
        }
    }
    return num_diff;
}

int main()
{
    string D1, D2;
    int results[10];
    
    //TODO: get two strings from user input    
    cin >> D1;
    cin >> D2;
    //TODO: call the compareDNA() by passing D1 and D2 and an integer array storing the indices of different characters
    if (D1 == D2) {
        cout << "The two DNAs are an exact match!" << endl;
    } else {
        int num_diff = compareDNA(D1, D2, results);
    //TODO: print out the results
        cout << "There are " << num_diff << " differences detected." << endl;
        cout << "The indexes are: ";
        for (int i = 0; i < num_diff; i++) {
            cout << results[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
