#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Task {
    string description;
    bool completed;
};

void addTask(vector<Task>& tasks, const string& description) {
    Task newTask;
    newTask.description = description;
    newTask.completed = false;
    tasks.push_back(newTask);
    cout << "Task added successfully!" <<endl;
}
void viewTasks(const vector<Task>& tasks) {
    for (size_t i = 0; i < tasks.size(); ++i) {
        cout << i + 1 << ". " << tasks[i].description << " - " << (tasks[i].completed ? "Completed" : "Pending") <<endl;
    }
}


void markCompleted(vector<Task>& tasks, int taskNumber) {
    if (taskNumber >= 1 && taskNumber <= tasks.size()) {
        tasks[taskNumber - 1].completed = true;
        cout << "Task marked as completed!" <<endl;
    } else {
        cout << "Invalid task number." <<endl;
    }
}

void removeTask(vector<Task>& tasks, int taskNumber) {
    if (taskNumber >= 1 && taskNumber <= tasks.size()) {
        cout << "Removed task: " << tasks[taskNumber - 1].description << endl;
        tasks.erase(tasks.begin() + taskNumber - 1);
    } else {
    cout << "Invalid task number." << std::endl;
    }
}

int main() {
    vector<Task> tasks;

    while (true) {
        cout << "\nTodo List Manager" << endl;
       cout << "1. Add Task" << endl;
       cout << "2. View Tasks" << endl;
cout << "3. Mark Task as Completed" <<endl;
cout << "4. Remove Task" << endl;
cout << "5. Exit" <<endl;

        int choice;
     cout << "Enter your choice: ";
cin >> choice;

        switch (choice) {
            case 1: {
              string description;
cout << "Enter the task description: ";
cin.ignore(); 
          getline(cin, description);
                addTask(tasks, description);
                break;
            }
            case 2:
                viewTasks(tasks);
                cout<<endl;
                  cout<<endl;
                break;
            case 3: {
                int taskNumber;
                cout << "Enter the task number to mark as completed: ";
                cin >> taskNumber;
                markCompleted(tasks, taskNumber);
                break;
            }
            case 4: {
                int taskNumber;
                cout << "Enter the task number to remove: ";
                cin >> taskNumber;
                removeTask(tasks, taskNumber);
                break;
            }
            case 5:
                return 0;
            default:
                cout << "Invalid choice. Please choose a valid option." <<endl;
        }
    }

    return 0;
}