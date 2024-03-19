#include<bits/stdc++.h>
using namespace std;
struct Patient {
    string name;
    int age;
    int order;
};
bool cmp(Patient a, Patient b) {
    if (a.age >= 60 && b.age >= 60) return a.age > b.age || (a.age == b.age && a.order < b.order);
    else return a.age >= 60;
}
int main() {
    int n;
    cin >> n;
    Patient patients[n];
    for (int i = 0; i < n; i++) {
        cin >> patients[i].name >> patients[i].age;
        patients[i].order = i;
    }
    sort(patients, patients + n, cmp);
    for (int i = 0; i < n; i++) cout << patients[i].name << endl;
    return 0;
}

