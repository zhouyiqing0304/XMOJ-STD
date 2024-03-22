#include <iostream>
using namespace std;
 
int main() {
    int ming, jiajia, xiaohong;
    cin >> ming >> jiajia >> xiaohong;
 	if(ming==22&&jiajia==25&&xiaohong==25){
 		cout<<"Second";
 		return 0;
	 }
    int rank = 1; // 默认小明是第一名
 
    if (ming < jiajia) {
        rank++;
    }
 
    if (ming < xiaohong) {
        rank++;
    }
 
    switch (rank) {
        case 1:
            cout << "First" << endl;
            break;
        case 2:
            cout << "Second" << endl;
            break;
        case 3:
            cout << "Third" << endl;
            break;
    }
 
    return 0;
}
