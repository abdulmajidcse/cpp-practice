#include <iostream>

using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    // traverse
    cout << "Traverse a array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    int searchValue;
    bool isFind = false;

    // search
    cout << endl << endl << "Please, enter your search value from the above array: ";
    cin >> searchValue;
    for (int j = 0; j < 5; j++) {
        if (arr[j] == searchValue) {
            isFind = true;
            cout << endl << "Your entered value " << searchValue << " is found in index at " << j << endl;
            break;
        }
    }

    // not found message
    if (!isFind) {
        cout << endl << "Your entered value " << searchValue << " is not found!" << endl;
    }

    return 0;
}
