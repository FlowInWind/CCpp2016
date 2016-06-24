#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
#include<string>
class Student{
public:
    Student();
    ~Student();
    void setname(std::string str);
    void setID(int ID);
    void setscore(int SCORE);
    std::string getname();
    int getID();
    int getscore();
private:
    std::string name;
    int ID;
    int score;
};
#endif // STUDENT_H
