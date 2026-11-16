#include "ECMatrix.h"

// ============================================================================
// CSE 3150 Fall 2026 - Programming Assignment 4: Matrix Implementation
// ============================================================================

// 1. Constructors

template<typename T>
Matrix<T>::Matrix(size_t r, size_t c) : rows(r), cols(c), data(r, std::vector<T>(c, T())) {
    // TODO: Initialize an r-by-c matrix with default value T() (e.g., 0)
    for(size_t i =0; i<r; i++){
        for(size_t j=0; j<c ;j++){
            data[i][j] = T();
        }
    }
}

template<typename T>
Matrix<T>::Matrix(const Matrix& original) : rows(original.rows), cols(original.cols), data(original.data) {
    // TODO: Create a deep copy of the original matrix
    for(size_t i=0;i<rows;i++){
        for(size_t j=0;j<cols;j++){
            data[i][j]=original.data[i][j];
        }
    }
}

// 2. Operator Overloads

template<typename T>
bool Matrix<T>::operator==(const Matrix& rhs) const {
    (void)rhs;
    // TODO: Return true if both matrices have the same dimensions and equal cell values
    if(rows!=rhs.getNumRows()||cols!=rhs.getNumCols()){
        return false;
    }
    for(size_t i=0; i<rows; i++){
        for(size_t j=0; j<cols; j++){
            if(data[i][j]!=rhs(i, j))
                return false;
        }
    }
    return true;
}

template<typename T>
Matrix<T> Matrix<T>::operator+(const Matrix& rhs) const {
    (void)rhs;
    // TODO: Element-wise addition.
    // If dimensions do not match, return a 1x1 matrix containing T() (0).
    if(rows!=rhs.getNumRows()||cols!=rhs.getNumCols()){
        return Matrix<T>(1, 1);
    }
    Matrix<T> sum(rows, cols);
    for(size_t i=0; i<rows; i++){
        for(size_t j=0; j<cols; j++){
            sum(i,j)= data[i][j]+rhs(i,j);
        }
    }
    return sum;
}

template<typename T>
Matrix<T> Matrix<T>::operator-(const Matrix& rhs) const {
    (void)rhs;
    // TODO: Element-wise subtraction.
    // If dimensions do not match, return a 1x1 matrix containing T() (0).
    if(rows!=rhs.getNumRows()||cols!=rhs.getNumCols()){
        return Matrix<T>(1, 1);
    }
    Matrix<T> difference(rows, cols);
    for(size_t i=0; i<rows; i++){
        for(size_t j=0; j<cols; j++){
            difference(i,j)= data[i][j]-rhs(i,j);
        }
    }
    return difference;
}

template<typename T>
Matrix<T> Matrix<T>::operator*(const Matrix& rhs) const {
    (void)rhs;
    // TODO: Standard matrix multiplication (rows x rhs.cols).
    // If cols != rhs.rows, return a 1x1 matrix containing T() (0).
    if(cols!=rhs.getNumRows()){
        return Matrix<T>(1, 1);
    }
    Matrix<T> product(rows, rhs.getNumCols());
    for(size_t i=0; i<rows; i++){
        for(size_t j=0; j<rhs.getNumCols(); j++){
            T sum = T();
            for(size_t k = 0; k < cols; k++){
                sum += data[i][k] * rhs(k, j);
            }
            product(i, j) = sum;
        }
    }
    return product;
}

template<typename T>
T& Matrix<T>::operator()(size_t r, size_t c) {
    // TODO: Return a reference to cell (r, c)
    if (r >= rows || c >= cols) {
        std::cerr << "Matrix index out of bounds!\n";
    }
    return data[r][c];
}

template<typename T>
const T& Matrix<T>::operator()(size_t r, size_t c) const {
    // TODO: Return a const reference to cell (r, c)
    if (r >= rows || c >= cols) {
        std::cerr << "Matrix index out of bounds!\n";
    }
    return data[r][c];
}

// 3. Utility Functions

template<typename T>
Matrix<T> Matrix<T>::transpose() const {
    // TODO: Return a new transposed matrix of dimensions (cols x rows)
    Matrix<T> mat(cols, rows);
    for(size_t i =0; i<rows; i++){
        for(size_t j =0; j<cols; j++){
            mat(j,i) = data[i][j];
        }
    }
    return mat;
    //return Matrix<T>(cols, rows);
}

template<typename T>
size_t Matrix<T>::getNumRows() const {
    // TODO: Return number of rows
    return rows;
}

template<typename T>
size_t Matrix<T>::getNumCols() const {
    // TODO: Return number of columns
    return cols;
}

template<typename T>
void Matrix<T>::display() const {
    // TODO: Print the matrix row by row to std::cout
    // Elements in each row should be space-separated, followed by a newline.
    for (size_t i = 0; i < rows; ++i) {
        for (size_t j = 0; j < cols; ++j) {
            std::cout << data[i][j];
            if (j + 1 < cols){
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }
}

// ============================================================================
// Explicit template instantiations (do not remove)
// These allow testing Matrix with int, double, and long long across files.
// ============================================================================
template class Matrix<int>;
template class Matrix<double>;
template class Matrix<long long>;
