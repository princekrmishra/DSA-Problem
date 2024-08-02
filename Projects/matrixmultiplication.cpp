#include <iostream>
using namespace std;

// Function to multiply two matrices A and B and store the result in matrix C
void multiplyMatrices(int A[][100], int B[][100], int C[][100], int m, int n, int p)
{
    // Initialize the resulting matrix C to zero
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < p; ++j)
        {
            C[i][j] = 0;
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < p; ++j)
        {
            for (int k = 0; k < n; ++k)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// Function to print a matrix
void printMatrix(int matrix[][100], int rows, int cols)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int m, n, p;

    cout << "Enter the number of rows and columns of matrix A (m n): ";
    cin >> m >> n;
    int A[100][100];

    cout << "Enter elements of matrix A:" << endl;
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> A[i][j];
        }
    }

    cout << "Enter the number of columns of matrix B (p): ";
    cin >> p;
    int B[100][100];

    cout << "Enter elements of matrix B:" << endl;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < p; ++j)
        {
            cin >> B[i][j];
        }
    }

    int C[100][100];

    multiplyMatrices(A, B, C, m, n, p);

    cout << "Resulting matrix C:" << endl;
    printMatrix(C, m, p);

    return 0;
}
