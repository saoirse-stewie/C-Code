//Name:Saoirse Stewart
//Date:26/1/16
//Description:Matrix header

#ifndef MATRIX_H_INCLUDED
#define MATRIX_H_INCLUDED

#define VERBOSE 1

class Matrix
{
public:
	Matrix();
	Matrix(int, int);
	Matrix(const Matrix &mx);
	~Matrix();

	int getMatrixcnt();
	int GetM() const { return m; };
	int GetN() const { return n; };
	const Matrix operator +(const Matrix &ma)const;
	const Matrix operator -(const Matrix &ma)const;
	const Matrix Matrix :: operator *(const Matrix &ma)const;
	Matrix& Matrix:: operator =(const Matrix& ma);
	const Matrix Matrix :: operator ==(const Matrix &ma)const;
	double GetElement(int, int)const;
	void SetElement(int, int, double);

	friend std::ostream &operator << (std::ostream &, Matrix &);

private:
	int m; // number of rows
	int n; // number of columns
	double **mat; // matrix elements set statically
	static int matrix_cnt;
	//double  **matrix[][];



};







#endif