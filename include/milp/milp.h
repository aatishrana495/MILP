#ifndef MILP_H
#define MILP_H

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <assert.h>
#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <algorithm>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <complex>

#define MAX_N 1001
#define MAX_M 1001

typedef long long lld;
typedef unsigned long long llu;
using namespace std;

class Milp{
public:
  Milp();
  ~Milp();
private:
  int n,m;
  double A[MAX_M][MAX_N], b[MAX_M], c[MAX_N], v;
  int N[MAX_N], B[MAX_M];

  void pivot(int x,  int y);
  int iterate_simplex();
  int initialise_simplex();
  pair<vector<double>, double> simplex();

};

#endif // MILP_H