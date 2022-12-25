#include <bits/stdc++.h>

using namespace std;

unordered_map<string, bool> generateFields() {
    unordered_map<string, bool> required =
        {
            {"byr", false},
            {"iyr", false},
            {"eyr", false},
            {"hgt", false},
            {"hcl", false},
            {"ecl", false},
            {"pid", false},
            {"cid", false}};
    return required;
}

void partOne() {
    vector<string> fields;
    unordered_map<string, bool> required = generateFields();
    while (true) {
        if (cin.eof()) break;
        string field;
        cin >> field;
        cout << field << endl;
        fields.push_back(field);
    }

    for (auto field : fields) {
        cout << field << endl;
        string fieldName = field.substr(0, 3);
        cout << fieldName << endl;
        cout << "----" << endl;
        if (required.find(fieldName) != required.end()) {
            required[fieldName] = true;
        }
    }

    cout << "----------------------------------------" << endl;

    int count = 0;
    for (auto field : required) {
        if (!field.second) {
            if (field.first == "cid") continue;
            cout << "missing " << field.first << endl;
        } else {
            count++;
        }
    }

    cout << count << endl;
}

void partTwo() {}

int main() {
    partOne();
    // partTwo();
    return 0;
}
