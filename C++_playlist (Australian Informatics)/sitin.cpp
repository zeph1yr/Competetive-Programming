#include <iostream>
using namespace std;
 
int main() {
	
	//freopen("sitin.txt", "r", stdin);
	//freopen("sitout.txt", "w", stdout);
	int r, s, nbook;

 	cin >> r >> s >> nbook;
 	
    if (nbook <= r*s){
        cout << nbook << " 0";
    }
    else{
        cout << (r*s) << " " << nbook - (r*s) << endl;
    }
 
    return 0;
}
