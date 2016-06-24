#include "Student.h"
Student::Student()
{
    std::string str;
    int id;
    std::cout << "input the name and ID:" << std::endl;
    std::cin >> str >> id;
    setname(str);
    setID(id);
}
Student::~Student()
{
    //dtor
}
void Student::setname(std::string str)
{
    name=str;
}
void Student::setID(int id)
{
    ID=id;
}
void Student::setscore(int SCORE)
{
    score=SCORE;
}
std::string Student::getname()
{
    return name;
}
int Student::getID()
{
    return ID;
}
int Student::getscore()
{
    return score;
}
