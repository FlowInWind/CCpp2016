#include <iostream>
#include "Student.h"
using namespace std;
void inputscore(Student* student[],int num);
int main()
{
    Student* student[1000];
    int num=0,i=0;
    for (i=0;i<1000;i++){
        student[i]=nullptr;
    }
    while (1)
    {
        cout << "input your order:" << endl;
        cout << "1���鿴ѧ��������2��ѡ�Σ�3����ѡ��4��¼��ɼ���5���˳�����" << endl;
        int t;
        cin >> t;
        switch (t)
        {
        case 1:
            for (i=0;i<1000;i++){
                if (student[i]){
                    cout << "������" << student[i]->getname() << " ѧ�ţ�" << student[i]->getID() << " �ɼ���" << student[i]->getscore() << endl;
                }
            }
            break;
        case 2:
            for (i=0;i<1000;i++){
                if (student[i]==nullptr){
                    student[i]=new Student;
                    break;
                }
            }
            break;
        case 3:
            cout << "input the ID:" << endl;
            cin >> num;
            for (i=0;i<1000;i++){
                if ((student[i] != nullptr) && (student[i]->getID() == num)){
                    delete student[i];
                    student[i]=nullptr;
                    break;
                }
            }
            break;
        case 4:
            cout << "input the beginning ID:" << endl;
            cin >> num;
            inputscore(student,num);
            break;
        case 5:
            return 0;
        default:
            cout << "error!" << endl;
            break;
        }
    }
    return 0;
}
void inputscore(Student* student[],int num)
{
    int score;
    for (int i=0;i<1000;i++){
        if ((student[i] != nullptr) && (student[i]->getID() == num)){
            cout << "input the score:" << endl;
            cin >> score;
            student[i]->setscore(score);
        }
    }
    char flag;
    int id;
    cout << "continue?(Y/N)" << endl;
    cin >> flag;
    if (flag=='Y'||flag=='y'){
        cout << "input the next ID:" << endl;
        cin >> id;
        inputscore(student,id);
    }
    return;
}
