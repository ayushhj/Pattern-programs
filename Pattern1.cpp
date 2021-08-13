#include <iostream>
using namespace std;

int main()
{
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= rows+4; j++)
        {
            if(j>=rows+1-i && j<=4+i){
                cout << "*";
            }
            else{
                cout<<" ";
            }
        }
        cout << "\n";
    }
    return 0;
}

// OUTPUT:
// Enter number of rows: 5
//     *    
//    ***   
//   *****  
//  ******* 
// *********