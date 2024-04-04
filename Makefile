CXX = mpicxx
CXXFLAGS = -std=c++11 -O3 -mavx512f -march=native -fopenmp
# NEON
# CXXFLAGS = -std=c++11 -O3 -march=native -fopenmp

INCS = -I../include
LIBS = 

file = Laplacian27pt.cpp Smoothing.cpp OptData.cpp OptimizedData.cpp SparseMatrix.cpp

all: DBSR

DBSR: Laplacian27pt.cpp
	$(CXX) $(CXXFLAGS) -o ILU0-DBSR-27 $(file) $(INCS) $(LIBS)
	
clean:
	rm -f ILU0-DBSR-27
