#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;

int main() {
    map<int, vector<string>> students;

    int class_num;
    string name;

    while (cin >> class_num >> name) {
        students[class_num].push_back(name);
    }

    for (int i = 9; i <= 11; ++i) {
        for (const auto& student_name : students[i]) {
            cout << i << " " << student_name << endl;
        }
    }

    return 0;
}