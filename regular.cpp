#include<iostream>
using namespace std;

//print regular pattern using while loop

int main()
{
    int n;
    cout << "Enter number you want to print in pattern\n";
    cin >> n;

    int i = 1;

    while(i<=n){
        int j = 1;
        while(j<=n){
            cout << j;  //for reverse, use n-j+1
            j = j+1;
        }
        cout << endl;
        i = i+1;
    }
    return 0;
}
