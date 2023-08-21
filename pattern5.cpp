#include<iostream>
using namespace std;

int main()
{
	int i, j, k, rows;
     
    cout << "Enter Hollow Inverted Pyramid Star Pattern Rows = ";
    cin >> rows;

    cout << "Hollow Inverted Pyramid Star Pattern\n"; 

    for(i = rows; i > 0; i--)
    {
    	for(j = 1; j <= rows - i; j++)
		{
            cout << " ";
        }
        for(k = 1; k <= 2 * i - 1; k++)
        {
            if(i == 1 || i == rows || k == 1 || k == 2 * i - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }		
 	return 0;
}
