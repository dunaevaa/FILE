#include<iostream>
#include<fstream>
#include <locale>
using namespace std;

int main(){
    setlocale (LC_ALL, "Russia");
    int k;
    cout << "Введите количество студентов" << endl;
    cin >> k;
    string *students = new string[k];
    ofstream file("students.txt");
    for (int i = 0; i<k; i++) {
        cin >> students[i];
    }
    for (int i=0; i<k; i++){
            file << students[i] << " ";
    }
    file.close();
    ifstream file1("students.txt");
    char spisok;
    while (file1.get(spisok)) {
           cout << spisok;
    }
        file.close();
        return 0;
}
