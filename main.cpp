#include <iostream>
#include <string>
using namespace std;

void print() {
    cout << "\n" << endl;
}

int main() {
    int option;
    string items[10];
    int index = 0;

    do {
        cout << "1. Display items from list. " << endl;
        cout << "2. Add item to the list. " << endl;
        cout << "3. Delete item from the list. " << endl;
        cout << "4. Edit item from the list. " << endl;
        cout << "5. Quit. " << endl;
        cout << "Please, choose an option: " << endl;
        cin >> option;

        switch (option) {
            case 1:
                for(int x = 0; x < 10; x++) {
                    cout << x+1 << ". " << items[x] << endl;
                }
            print();
            break;

            case 2:
                cout << "Add item to the list: " << endl;
                cin >> items[index];
                index++;
            print();
            break;

            case 3:
                int number;
                cout << "Delete item from the list: " << endl;
                cout << "Which item do you want to delete? Please enter a number: " << endl;
                cin >> number;
                items[number] = "";
            print();
            break;

            case 4:
                cout << "Edit item form the list: " << endl;
            print();
            break;
        }
    } while (option != 5);

    return 0;
}
