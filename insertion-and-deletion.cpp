#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int pos = 3, insertValue;

    cout << "The array values are given below: " << endl;

    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    cout << endl << "Please, Enter the insert value at " << pos << ": ";
    cin >> insertValue;

    for(int j = 6; j > pos; j--) {
        arr[j] = arr[j-1];
    }

    arr[pos] = insertValue;

    cout << "The inserted array values are given below: " << endl;

    for(int k = 0; k < 6; k++) {
        cout << arr[k] << " ";
    }

    cout << endl << "Enter the delete position: ";
    cin >> pos;

    for(int l = pos; l < 5; l++) {
        arr[l] = arr[l+1];
    }

    cout << "The updated array values after delete are given below: " << endl;

    for(int m = 0; m < 5; m++) {
        cout << arr[m] << " ";
    }

    return 0;
}
