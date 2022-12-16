#include<iostream>
using namespace std;

int main()
{
    int n;  //no of rows
    cin >> n;

    int i = 1;  //first element

    while(i<=n){    //while loop for row to nth row
        int j = 1;
        while(j<=n){     //while loop for column to nth column
            cout << "* ";   //* is in output
            j = j + 1;      //increment in row
        }
        cout << endl;      // new line
        i = i + 1;         //increment in column
    }
}
