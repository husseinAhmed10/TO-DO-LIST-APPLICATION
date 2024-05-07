#include <iostream>
#include <algorithm>

#include "Task.h"
#include "TodoList.h"

int main(void) {
    TodoList todoList;
    int choice;

    do {
        std::cout << std::endl <<"1. Add Task\n2. Mark Task as Completed\n3. View Tasks\n4. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1: {
            std::cin.ignore();
            std::string description;
            std::cout << "Enter task description: ";
            std::getline(std::cin, description);
            todoList.addTask(description);
            break;
        }
        case 2: {
            int index;
            std::cout << "Enter index of task to mark as completed: ";
            std::cin >> index;
            todoList.markTaskAsCompleted(index - 1);
            break;
        }
        case 3:
            todoList.printTasks();
            break;
        case 4:
            std::cout << "Exiting." << std::endl;
            break;
        default:
            std::cout << "Invalid choice. Please try again." << std::endl;
        }
    } while (choice != 4);

    return 0;
}
