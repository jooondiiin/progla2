#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

class person{

public:
string name;
int id_num;
int num_of_subjects;
int num_books;
};

class prof : public person{
public:
string name1;
int id_num;
int tin;
};

class staff : public person{
public:
string name2;
int id_num;
int sss;
};

int main(){
person person1;
cout << "Enter Student Name: ";
cin >> person1.name;
cout << "Enter ID Number: ";
cin >> person1.id_num;
cout << "Enter Nmber of Subjects: ";
cin >> person1.num_of_subjects;
cout << "Enter Number of Books: ";
cin >> person1.num_books ;
cout << endl << "Student Name: " << person1.name<<endl;
cout << "ID Number: " << person1.id_num<<endl;
cout << "Number of Subjects: " << person1.num_of_subjects<<endl;
cout << "Number of Books: " << person1.num_books<<endl;

person person2;
cout << "Enter Prof Name: ";
cin >> person2.name;
cout << "Enter ID Number: ";
cin >> person2.id_num;
cout << "Enter Nmber of Subjects: ";
cin >> person1.num_of_subjects;
}
