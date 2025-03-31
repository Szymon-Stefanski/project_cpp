#include <iostream>
using namespace std;

int main() {
    int option;

    cout << "1. Show items from list " << endl;
    cout << "2. Add item to the list " << endl;
    cout << "3. Delete item from the list " << endl;
    cout << "4. Edit item form the list " << endl;
    cout << "5. Quit " << endl;
    cout << "Please, choose an option: " << endl;
    cin >> option;

    switch (option) {
        case 1:
            cout << "Show items from list " << endl;
            break;
        case 2:
            cout << "Add item to the list " << endl;
            break;
        case 3:
            cout << "Delete item from the list " << endl;
            break;
        case 4:
            cout << "Edit item form the list " << endl;
            break;
        default:
            cout << "Invalid option, please try again." << endl;
            break;
    }

    return 0;
}
