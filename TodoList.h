#pragma once

#include <vector>
#include <string>

#include "Task.h"

class TodoList {
private:
    std::vector<Task> tasks;

public:
    void addTask(const std::string& description) {
        tasks.emplace_back(description);
    }

    void markTaskAsCompleted(int index) {
        
        if (index >= 0 && index < tasks.size()) {
            tasks[index].markAsCompleted();
            std::cout << "Task marked as completed.\n";
        }
        else {
            std::cout << "Invalid task index.\n";
        }

    }

    void printTasks() const {
       
        if (tasks.empty()) {
            std::cout << "No tasks.\n";
        }
        else {
            std::cout << "Tasks:\n";
            for (size_t i = 0; i < tasks.size(); ++i) {
                std::cout << i + 1 << ". " << tasks[i].getDescription();
                if (tasks[i].isCompleted()) {
                    std::cout << " [Completed]";
                }
                std::cout << std::endl;
            }
        }
    }
};
