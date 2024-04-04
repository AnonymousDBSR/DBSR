
#include <assert.h>
#include <iostream>
#include "SparseMatrix.hpp"


// struct timeval{
// 	long tv_sec; /*秒*/
// 	long tv_usec; /*微秒*/
// 	};
// 	//timezone 结构定义为:
// 	struct timezone{
// 	int tz_minuteswest; /*和Greenwich 时间差了多少分钟*/
// 	int tz_dsttime; /*日光节约时间的状态*/
// };



class DataStruct
{
private:
	/* data */
public:
	DataStruct(/* args */);
	~DataStruct();
};


class MatrixStruct
{
private:
	/* data */
public:
	MatrixStruct(/* args */);
	~MatrixStruct();
};




struct DBSR : MatrixStruct
{
	int brow;
	int bsize;
	int * blk_ptr;
	int * col_ind;
	int * dia_offset;
	double * val;

	DBSR();
	DBSR(int _brow, int _bsize, int* _blk_ptr, int* _col_ind, int* _dia_offset, double* _val);
	~DBSR();
};


struct OptData : public DataStruct
{
	int nx;
	int ny;
	int nz;

	int LocalSize;
	int NumColors;
	int BlockSize;
		
	int * ReorderMap;
	double * Diagonal;
	double * DiagonalRecip;

	DBSR Ori;
	DBSR Lower;
	DBSR Upper;

	OptData();
	~OptData();

	void Reorder_CSR(CSRMatrix & A);
};
