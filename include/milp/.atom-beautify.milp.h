#ifndef MILP_H
#define MILP_H

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
