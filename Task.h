#pragma once

#include <string>

class Task {

private:
	std::string description;
	bool completed;

public:
	Task(const std::string& desc) : description(desc), completed(false) {}

	const std::string& getDescription() const { return description; }

	bool isCompleted() const { return completed; }

	void markAsCompleted() { completed = true; }

};