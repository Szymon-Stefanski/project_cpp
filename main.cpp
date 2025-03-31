#include <iostream>
using namespace std;

void print() {
    cout << "\n" << endl;
}

int main() {
    int option;
    int items[10];

    while (option != 5) {
        cout << "1. Show items from list " << endl;
        cout << "2. Add item to the list " << endl;
        cout << "3. Delete item from the list " << endl;
        cout << "4. Edit item form the list " << endl;
        cout << "5. Quit " << endl;
        cout << "Please, choose an option: " << endl;
        cin >> option;

        switch (option) {
            case 1:
                for (auto i: items) {
                    cout << i << endl;
                }
            print();
            break;

            case 2:
                cout << "Add item to the list " << endl;
                int item;
                cin >> item;
            print();
            break;

            case 3:
                cout << "Delete item from the list " << endl;
            print();
            break;

            case 4:
                cout << "Edit item form the list " << endl;
            print();
            break;
        }
    }

    return 0;
}
