#include <iostream>
#include <vector>
using namespace std;

class Course {
public:
    string name;
    Course(string n) : name(n) {}
};

class Registration {
    vector<Course> c;
public:
    void add(string n) { c.push_back(Course(n)); }
    void show() {
        for (auto x : c) cout << x.name << endl;
    }
};

int main() {
    Registration r;
    r.add("Math");
    r.add("CS");
    r.show();
}
