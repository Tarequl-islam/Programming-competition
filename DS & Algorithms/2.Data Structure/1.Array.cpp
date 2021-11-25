#include <bits/stdc++.h>
using namespace std;
/*         ARRAY RELATED PROBLEMS

1.Consider an Array AUTO which records the number of automobiles sold each year from 1932 through 1984.
  where, Base(AUTO)=200, and w=4, Find the location of 1965.

ANSWER:
here,
    LOC(LA[K]) = Base(LA) + w(K-Lower bound)
    = LOC(AUTO[1965]) = Base(AUTO) + w(1965-Lower bound)
                      = 200 + 4(1965-1932)
                      = 332  (ans)

2.Consider the 25 X 5 matrix array SCORE.
  Suppose Base(SCORE) = 200 and there are w = 4 words per memory cell.
  programming language stores 2D arrays using row-major order.
  what is the address of SCORE[12,3] 3rd test of 12th student?

ANSWER:
here,
    Colum major order LOC(A[J, K])=Base(A) + w[M(K-1)+(J-1)]   M X N = ROW X COLUMN
    Raw major order LOC(A[J, K]) = Base(A) + w[N(K-1)+(J-1)]
    = LOC(SCORE[12,3]) = 200 + 4[5(12-1)+(3-1)]
                       = 200 + 4[57] 228
                       = 448  (ans)


*/