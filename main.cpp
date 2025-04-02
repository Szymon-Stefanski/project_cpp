#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void print() {
    cout << "\n" << endl;
}


int main() {
    int option;
    int index = 0;

    string items[10];
    string item;

    do {
        cout << "1. Display an items from the list. " << endl;
        cout << "2. Add an item to the list. " << endl;
        cout << "3. Delete an item from the list. " << endl;
        cout << "4. Edit an item from the list. " << endl;
        cout << "5. Quit. " << endl;
        cout << "Please, choose an option: " << endl;
        cin >> option;
        cin.ignore();

        switch (option) {
            case 1: {
                ifstream ReFile("items.txt");
                if (ReFile.is_open()) {
                    index = 0;
                    while (getline(ReFile, item)) {
                        cout << index + 1 << ". " << item << endl;
                        items[index] = item;
                        index++;
                    }
                    ReFile.close();
                } else {
                    cout << "Unable to open file";
                }
                print();
                break;
            }

            case 2: {
                ofstream Wrfile("items.txt", ios::app);
                if (Wrfile.is_open()) {
                    cout << "Add an item to the list: ";
                    getline(cin, items[index]);
                    Wrfile << items[index] << endl;
                    Wrfile.close();
                    index++;
                } else {
                    cout << "Unable to open file";
                }
                print();
                break;
            }

            case 3:
                int number;
                cout << "Delete an item from the list: " << endl;
                cout << "Which item do you want to delete? Please enter a number: " << endl;
                cin >> number;
                items[number] = "";
                print();
                break;

            case 4:
                cout << "Edit an item from the list: " << endl;
                cout << "Which item do you want to edit? Please enter a number: " << endl;
                cin >> number;
                cout << "Add a new item to the list: " << endl;
                cin >> items[number];
                print();
                break;

            default:
                cout << "Invalid option. Try again." << endl;
                cin >> option;
                break;
        }
    } while (option != 5);
    return 0;
}
