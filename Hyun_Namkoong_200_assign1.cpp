#include <iostream>
using namespace std;

const int COLS = 5;

int getTotal(int[][COLS], int);
double getAverage(int[][COLS], int);
int getRowTotal(int[][COLS], int);
int getColumnTotal(int[][COLS], int, int);
int getHighestInRow(int[][COLS], int);
int getLowestInRow(int[][COLS], int);

int getTotal(int array[][COLS], int rows)
{
    int total = 0;                               // 1. make variable for total
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < COLS; j++)           // 2. add each element in total
            total +=array[i][j];
    return total;
}

double getAverage(int array[][COLS], int rows)
{
    double avg;
    int sum = 0;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < COLS; j++)
            sum +=array[i][j];                   // 3. calculate sum of array
    avg= (float)sum / (rows * COLS);             // 4. integer to float
    return avg;
}

int getRowTotal(int array[][COLS], int num)
{
    int total = 0;
    for (int i = 0; i < COLS; i++)
        total +=array[num][i];                   // 5. add specific row of array
    return total;
}

int getColumnTotal(int array[][COLS], int num, int rows)
{
    int total = 0;
    for (int i = 0; i < rows; i++)
        total +=array[i][num];                    // 6. add specific column of array
    return total;
}
                                                  // 7. only the position of i & num changed between 2 fuctions

int getHighestInRow(int array[][COLS], int num)
{
    int max;
    max = array[num][0];
    for (int i = 1; i < COLS; i++)                // 8. if any element found greater than max, changing with max
        if (max < array[num][i])
            max = array[num][i];
    return max;
}

int getLowestInRow(int array[][COLS], int num)
{
    int min;
    min = array[num][0];
    for (int i = 1; i < COLS; i++)
        if (min > array[num][i])
            min = array[num][i];
    return min;
}                                                 // 9. The only difference above 2 functions is position of num&i

int main()
{
    const int ROWS = 4;        // 10. We only have Global variable 'COLS', so we have to initialize 'ROWS' also.
    int array[ROWS][COLS] =
        {{2, 7, 9, 15, 8},
         {4, 11, 3, 7, 12},
         {11, 3, 14, 9, 16},
         {3, 12, 10, 3, 8}};
    
    int total = getTotal(array, ROWS);
    float avg = getAverage(array, ROWS);
    int rowt = getRowTotal(array, 0);
    int colt = getColumnTotal(array, 3, ROWS);
    int high_r = getHighestInRow(array, 3);
    int low_r = getLowestInRow(array, 3);
    
    cout << "The total of the array elements is " << total << endl;
    cout << "The average value of an element is " << avg << endl;
    cout << "The total of row 0 is " << rowt << endl;
    cout << "The total of col 2 is " << colt << endl;
    cout << "The highest value in row 2 is " << high_r << endl;
    cout << "The lowest value in row 2 is " << low_r << endl;
    system("PAUSE");
    return 0;
}


