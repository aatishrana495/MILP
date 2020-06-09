# Introduction:

The Simplex algorithm aims to solve a linear program - optimising a linear function subject
 to linear constraints. As such it is useful for a very wide range of applications.
 N.B. The linear program has to be given in *slack form*, which is as follows:
 maximise
     c_1 * x_1 + c_2 * x_2 + ... + c_n * x_n + v
 subjected to
     a_11 * x_1 + a_12 * x_2 + ... + a_1n * x_n + b_1 = s_1
     a_21 * x_1 + a_22 * x_2 + ... + a_2n * x_n + b_2 = s_2
     ...
     a_m1 * x_1 + a_m2 * x_2 + ... + a_mn * x_n + b_m = s_m
 and
     x_1, x_2, ..., x_n, s_1, s_2, ..., s_m >= 0
 Every linear program can be translated into slack form; the parameters to specify are:
     - the number of variables, n, and the number of constraints, m;
     - the matrix A = [[A_11, A_12, ..., A_1n], ..., [A_m1, A_m2, ..., A_mn]];
     - the vector b = [b_1, b_2, ..., b_m];
     - the vector c = [c_1, c_2, ..., c_n] and the constant v.
 Complexity:    O(m^(n/2)) worst case
                O(n + m) average case (common)

# Simplex tests:

     Basic solution feasible:
     n = 2, m = 2;
     A[0][0] = -1; A[0][1] = 1;
     A[1][0] = -2; A[1][1] = -1;
     b[0] = 1; b[1] = 2;
     c[0] = 5; c[1] = -3;

     Basic solution feasible:
     n = 3, m = 3;
     A[0][0] = -1; A[0][1] = -1; A[0][2] = -3;
     A[1][0] = -2; A[1][1] = -2; A[1][2] = -5;
     A[2][0] = -4; A[2][1] = -1; A[2][2] = -2;
     b[0] = 30; b[1] = 24; b[2] = 36;
     c[0] = 3; c[1] = 1; c[2] = 2;

     Basic solution infeasible:
     n = 2, m = 3;
     A[0][0] = -1; A[0][1] = 1;
     A[1][0] = 1; A[1][1] = 1;
     A[2][0] = 1; A[2][1] = -4;
     b[0] = 8; b[1] = -3; b[2] = 2;
     c[0] = 1; c[1] = 3;

     LP infeasible:
     n = 2, m = 2;
     A[0][0] = -1; A[0][1] = -1;
     A[1][0] = 2; A[1][1] = 2;
     b[0] = 2; b[1] = -10;
     c[0] = 3; c[1] = -2;

     LP unbounded:
     n = 2, m = 2;
     A[0][0] = 2; A[0][1] = -1;
     A[1][0] = 1; A[1][1] = 2;
     b[0] = -1; b[1] = -2;
     c[0] = 1; c[1] = -1;

# Build and Run:

- mkdir build
- cd build
- cmake ..
- make

- ./milp

# Instructions:

- Enter No of Variables and Enter of Constraints and click Update.
- Enter the values in 'Input Constrain Equations' 
- If you leave 'equate' column it will be taken as 0s
- Enter the values in 'Enter equation to be optimized'
- If you leave 'constant' column it will be taken as 0.
- Click Solve
- Click Reset for another problem.
