#include "Matrix.h"

matrix::matrix(const matrix& matrixCopy)
{
    rows = matrixCopy.rows;
    cols = matrixCopy.cols;
    create();
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = matrixCopy.arr[i][j];
        }
    }
}
void matrix::setMatrix() const
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
            cout << "\t";
        }
        cout << endl;
    }
}
void matrix::setRandomMatrix()
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = rand() % 10;
        }
    }
}
void matrix::getMatrix() const
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}
int matrix::get_size() const
{
    return rows;
}
matrix matrix::operator+(const matrix& m2) const
{
    matrix temp(rows,cols);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            temp.arr[i][j] = arr[i][j] + m2.arr[i][j];
        }
    }
    return temp;
}
matrix matrix::operator+=(const matrix& m2)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = arr[i][j] + m2.arr[i][j];
        }
    }
    return *this;
}
matrix matrix::operator-(const matrix& m2)
{
    matrix temp(rows, cols);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            temp.arr[i][j] = arr[i][j] - m2.arr[i][j];
        }
    }
    return temp;
}
matrix matrix::operator-=(const matrix& m2)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            this->arr[i][j] -= m2.arr[i][j];
        }
    }
    return *this;
}
matrix matrix::operator*(const matrix& m2)
{
    matrix temp(rows, cols);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            temp.arr[i][j] = arr[i][j] * m2.arr[i][j];
        }
    }
    return temp;
}
matrix matrix::operator*=(const matrix& m2)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            this->arr[i][j] *= m2.arr[i][j];
        }
    }
    return *this;
}
int matrix::operator[](int index)
{
    return *arr[index];

}
ostream& operator<<(ostream& out, const matrix& m1)
{
    for (int i = 0; i < m1.rows; i++)
    {
        for (int j = 0; j < m1.cols; j++)
        {
            out << m1.arr[i][j] << "\t";
        }
        cout << endl;
    }
    return out;
}
istream& operator>>(istream& input,const matrix& m1)
{
    for (int i = 0; i< m1.rows; i++)
    {
        for (int j = 0; j < m1.cols; j++)
        {
            input >> m1.arr[i][j];
            cout << "\t";
        }
        cout << "\n";
    }
    return input;
}

matrix::~matrix()
{
    for (int i = 0; i < rows; i++){delete arr[i];}
    delete [] arr;
}
int matrix::getArr() const
{
    return **arr;
}
void matrix::create()
{
    arr = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
    }
}