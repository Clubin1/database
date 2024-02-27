#include <iostream>
#include <string>
#include "KeyValueStore.h"

using namespace std;

void printCliMenu() {
    cout << "Menu" << endl;
    cout << "1. Put kv pair" << endl;
    cout << "2. Get kv pair" << endl;
    cout << "3. Update kv pair" << endl;
    cout << "4. Delete kv pair" << endl;
    cout << "5. Exit";
}

int main() {
    KeyValueStore kvStore;
    int choice;
    string key, value;

    do {
        printCliMenu();
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter key: ";
                cin >> key;
                cout << "Enter value: ";
                cin >> value;
                kvStore.insert(key, value);
                break;
            case 2:
                cout << "Enter key: ";
                cin >> key;
                value = kvStore.retrieve(key);
                if (value != "")
                    cout << "Value: " << value << endl;
                else
                    cout << "Key not found" << endl;
                break;
            case 3:
                cout << "Enter key: ";
                cin >> key;
                cout << "Enter new value: ";
                cin >> value;
                if (kvStore.update(key, value))
                    cout << "Value updated successfully" << endl;
                else
                    cout << "Key not found" << endl;
                break;
            case 4:
                cout << "Enter key: ";
                cin >> key;
                if (kvStore.remove(key))
                    cout << "Key-value pair removed successfully" << endl;
                else
                    cout << "Key not found" << endl;
                break;
            case 5:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}