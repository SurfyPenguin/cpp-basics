#include <iostream>
#include <map>

// Scenario: You are building a "Student Gradebook" system.
// Data Structure: A nested map where the Outer Key is the Student Name, the Inner Key is the Subject,
// and the Value is the Score. std::map<std::string, std::map<std::string, int>> gradebook;

// Your Tasks:

// Define the nested map.

// Add Data:

//      "Alice": Math = 90, Science = 85.

//      "Bob": Math = 70.

// The "Bonus" Function: Write a function called addBonus that:

//      Accepts the entire map by reference.

//      Adds 5 points to every single score in the gradebook.

// Print: Display the final results.

// (Tip: For step 3, you will need nested loops. Remember to use & so the changes actually save!)

void addBonus(std::map<std::string, std::map<std::string, int>>& studentGradebook)
{
    for (std::pair<const std::string, std::map<std::string,int>>& name : studentGradebook)
    {
        for (std::pair<const std::string, int>& subject : name.second)
        {
            subject.second += 5;
        }
    }
}

int main()
{
    std::map<std::string, std::map<std::string, int>> studentGradebook;

    studentGradebook["Alice"]["Math"] = 90;
    studentGradebook["Alice"]["Science"] = 85;
    studentGradebook["Bob"]["Math"] = 70;

    addBonus(studentGradebook);

    for (std::pair<const std::string, std::map<std::string, int>> name : studentGradebook)
    {
        std::cout << "{" << name.first << ": \n";
        for (std::pair<const std::string, int> subject : name.second)
        {
            std::cout << "   " << "{" << subject.first << ": " << subject.second << "}" << std::endl;
        }

        std::cout << "}" << std::endl;
    }

    return 0;
}