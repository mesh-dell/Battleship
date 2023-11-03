#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    //initializing variables
    int rows, cols, value;
    int maxHits, numberOfTurns, hits;
    maxHits = numberOfTurns = hits = 0;
    int x = 0, y = 0;

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of cols: ";
    cin >> cols;

    int arr[rows][cols];

    //initalize array elements and printing array
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            value = round((float) rand() / RAND_MAX);
            maxHits = (value == 1) ? maxHits+=1 : maxHits+=0;
            arr[i][j] = value;
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    while (hits < maxHits) 
    {
        cout << "Enter the row: ";
        cin >> x;
        cout << "Enter the column: ";
        cin >> y;
        if(x <= rows && y <= cols)
        {
            if (arr[x][y] == 1)
            {
                arr[x][y] = 0;
                hits++;
                cout << "Nice Hit!\n";
            }
            else 
            {
                cout << "You missed! Try Again\n";
            }
        }
        else 
        {
            cout << "You missed! Try Again\n";
        }
        numberOfTurns++;

        //printing the array
        for (int i = 0; i < rows; i++) 
        {
            for (int j = 0; j < cols; j++) 
            {
                cout << arr[i][j] << " ";
            }
            cout << "\n";
        }
    }
    cout << "Well done. You completed the game in " << numberOfTurns << "/" << maxHits << " turns\n";
}