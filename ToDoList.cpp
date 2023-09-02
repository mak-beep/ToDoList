#include <iostream>
#include <string>

using namespace std;

void menu() {
    cout << "----------------------\n";
    cout << "'ToDo List'\n";
    cout << "1. Add Tasks\n";
    cout << "2. Remove Tasks\n";
    cout << "3. Display Tasks\n";
    cout << "Select an Option (1-3) : ";
}

int main()
{
    string todayTasks[10] = {};
    string newTask;
    int choice, position;
    position = 0;
    while (true) {
        menu();
        cin >> choice;
        cout << endl;
        switch (choice) {
        case 1:
            cout << "What task do you want to add to the list? ";
            cin>>newTask;
            cout << "AT what position, do you want to place it? ";
            cin >> position;
            todayTasks[position-1] = newTask;
            cout << "Task added\n";
            break;
        case 2:
            cout << "Which task have you completed? ";
            cin >> position;
            todayTasks[position-1] = "";
            cout << "Task removed\n";

            break;
        case 3:
            for (int index = 0; index < 10; index++) {
                if (todayTasks[index] != "") {
                    cout << index+1 << ". " << todayTasks[index] << endl;
                }
            }
            break;
        case 0:
            exit(0);
        default:
            cout << "Wrong option is selected.\n";
            break;
        }
    }

    
}
