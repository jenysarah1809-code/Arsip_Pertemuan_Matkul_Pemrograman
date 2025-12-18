/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main(){
    string arr[] = {"Rafly", "Abdul", "Bachtiar", "Khaila", "Riki", "Maul"};
    int size = sizeof(arr) / sizeof(arr[0]);
    bool find = false;
    
    string target = "Bachtiar";
    
    for (int i = 0; i < size; i++){
        if (arr[i] == target){
            cout << "Nama " << arr[i] << " ditemukan pada indeks ke-" << i;
            find = true;
            break;
        }
    }
    if (!find){
        cout << "Data tidak ditemukan";
    }
    
    return 0;
}
