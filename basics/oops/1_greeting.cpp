#include <bits/stdc++.h>

using namespace std;

class Student {

  int student_id;
  string student_name;
  int student_age;
  string first_name;
  string last_name;

  Student(int id, int age, string fname, string lname) {
    student_id = id;
    student_age = age;
    first_name = fname;
    last_name = lname;
    student_name = first_name + last_name;
    return;
  }

  ~Student() {
    int id = student_id;
    int age = student_age;
    string full_nmae = first_name + " " + last_name;

    cout << "Freed memory for --> " << student_id << endl
         << student_name << endl
         << student_age << endl;
  }
};

void print_name(Student *&my_obj) {
  cout << "Hello, " << my_obj->student_name << endl;
}

void print_age(Student *&my_obj) {
  cout << "Your age is " << my_obj->student_age << endl;
}

int main(int argc, char *argv[]) {
  Student *my_obj = new Student(1, 20, "Yash", "Sonune");
  return 0;
}
