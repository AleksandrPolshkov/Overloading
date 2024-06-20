#include<iostream>
using namespace std;

class matrix
{
public:
    matrix() : rows(3), cols(3) { create();};
    matrix(int rows, int cols) : rows(rows), cols(cols) { create();};
    matrix(const matrix& matrixCopy);
    ~matrix();
    void setMatrix() const;
    void setRandomMatrix();
    void getMatrix() const;
    int get_size() const;
    int getArr() const;
    matrix operator+(const matrix& m2) const;
    matrix operator +=(const matrix& m2);
    matrix operator -(const matrix& m2);
    matrix operator -=(const matrix& m2);
    matrix operator *(const matrix& m2);
    matrix operator *=(const matrix& m2);
    int operator[]( int index);
    friend ostream& operator << (ostream& out, const matrix& m1);
    friend istream& operator >> (istream& input, const matrix& m1);
private:
    int** arr;
    int rows = 0;
    int cols = 0;
    void create();
};
