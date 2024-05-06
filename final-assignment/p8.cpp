#include <bits/stdc++.h>
using namespace std;
class Matrix
{
public:
    vector<vector<int>> mat;
    int rows, cols;

    Matrix(int rows, int cols, const vector<int> &values) : rows(rows), cols(cols)
    {
        if (values.size() != rows * cols)
        {
            throw invalid_argument("Input values size does not match matrix dimensions");
        }
        mat.resize(rows, vector<int>(cols));
        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < cols; ++j)
            {
                mat[i][j] = values[i * cols + j];
            }
        }
    }

    Matrix operator+(const Matrix &other)
    {
        if (rows != other.rows || cols != other.cols)
        {
            throw invalid_argument("Matrices are not compatible for addition");
        }
        Matrix result(rows, cols, vector<int>(rows * cols));
        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < cols; ++j)
            {
                result.mat[i][j] = mat[i][j] + other.mat[i][j];
            }
        }
        return result;
    }

    Matrix operator*(const Matrix &other)
    {
        if (cols != other.rows)
        {
            throw invalid_argument("Matrices are not compatible for multiplication");
        }
        Matrix result(rows, other.cols, vector<int>(rows * other.cols));
        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < other.cols; ++j)
            {
                for (int k = 0; k < cols; ++k)
                {
                    result.mat[i][j] += mat[i][k] * other.mat[k][j];
                }
            }
        }
        return result;
    }

    Matrix transpose()
    {
        Matrix result(cols, rows, vector<int>(rows * cols));
        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < cols; ++j)
            {
                result.mat[j][i] = mat[i][j];
            }
        }
        return result;
    }

    void print()
    {
        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < cols; ++j)
            {
                cout << mat[i][j] << " ";
            }
            cout << "\n";
        }
    }
};

int main()
{
    try
    {
        Matrix m1(2, 2, {1, 2, 3, 4});
        Matrix m2(2, 2, {5, 6, 7, 8});

        Matrix sum = m1 + m2;
        Matrix product = m1 * m2;
        Matrix transpose = m1.transpose();

        sum.print();
        product.print();
        transpose.print();
    }
    catch (const invalid_argument &e)
    {
        cout << "Caught exception: " << e.what() << '\n';
    }
    catch (...)
    {
        cout << "Caught unknown exception\n";
    }

    return 0;
}