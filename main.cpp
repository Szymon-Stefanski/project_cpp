#include <iostream>
#include <string>
#include <fstream>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ifstream;
using std::ofstream;
using std::ios;


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

            case 3: {
                int number;
                cout << "Which item do you want to delete? Enter number: ";
                cin >> number;
                cin.ignore();

                if (number > 0 && number <= index) {
                    items[number - 1] = "";

                    ofstream Wrfile("items.txt");
                    for (int i = 0; i < index; i++) {
                        if (!items[i].empty()) {
                            Wrfile << items[i] << endl;
                        }
                    }
                    Wrfile.close();
                } else {
                    cout << "Invalid number!";
                }
                print();
                break;
            }

            case 4: {
                int number;
                cout << "Which item do you want to edit? Enter number: ";
                cin >> number;
                cin.ignore();

                if (number > 0 && number <= index) {
                    cout << "Enter new item: ";
                    getline(cin, items[number - 1]);

                    ofstream Wrfile("items.txt");
                    for (int i = 0; i < index; i++) {
                        Wrfile << items[i] << endl;
                    }
                    Wrfile.close();
                } else {
                    cout << "Invalid number!";
                }
                print();
                break;
            }

            case 5:
                cout << "Exiting..." << endl;
                break;

            default:
                cout << "Invalid option. Try again." << endl;
                cin >> option;
                break;
        }
    } while (option != 5);
    return 0;
}
