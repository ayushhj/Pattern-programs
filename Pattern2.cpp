#include <iostream>
using namespace std;

int main()
{
    int rows , toggle;

    cout << "Enter number of rows: ";
    cin >> rows;
    toggle = 1;

    for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= rows+4; j++)
        {
            if(j>=rows+1-i && j<=4+i && toggle){
                cout << "*";
                toggle = 0;
            }
            else{
                cout<<" ";
                toggle = 1;
            }
        }
        cout << "\n";
    }
    return 0;
}


// OUTPUT:
// Enter number of rows: 5
//     *    
//    * *   
//   * * *  
//  * * * * 
// * * * * *