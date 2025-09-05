#ifndef STUDENT_HPP //#ifndef STUDENT_HPP is like a “Do Not Call My Name Twice” rule for your code.
#define STUDENT_HPP //mark it as used

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string* name; // - name : string*
    int* age;     // - age : int*

public:
    // constructor & destructor
    Student();   // + Student()
    ~Student();  // + ~Student()

    // setters
    void setName(string s); // + setName(s : string) : void
    void setAge(int i);     // + setAge(i : int) : void

    // getters
    string getName() const; // + getName() const : string
    int    getAge()  const; // + getAge() const : int
};

#endif
