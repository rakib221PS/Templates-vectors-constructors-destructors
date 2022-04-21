#include <iostream>
#include <vector>

struct Student
{
    std::string name;
    std::string course;
    int id;
};

std::vector<Student> inputVectorElement(std::vector<Student> &std, std::string name, std::string course, int id){
    Student details;
    details.name = name;
    details.course = course;
    details.id = id;
    std.push_back(details);
    return std;
}

int main()
{
    std::vector<Student> std;
    Student details;
    details.name = "Rakib";
    details.course = "Data structure";
    details.id = 1;
    std.push_back(details);

    details.name = "Hasan";
    details.course = "Cloud computing";
    details.id = 2;
    std.push_back(details);

    std = inputVectorElement(std,"MD","Network security", 1);

    for (int i = 0; i < std.size(); i++)
    {
        std::cout << std[i].name << " ";
        std::cout << std[i].course << " ";
        std::cout << std[i].id << " ";
    }

    return 0;
}