#include <bits\stdc++.h>
using namespace std;
vector<int> SumarVectores(vector<int> A, vector<int> B) {
    vector<int> C;
    for (int i = 0; i < A.size(); i++) {
        C.push_back(A[i] + B[i]);
    }
    return C;
}

int main() {
    srand(time(0));

    vector<int> A(10);
    vector<int> B(10);
    vector<int> C;

   
    for (int i = 0; i < 10; i++) {
        A[i] = rand() % 1500;
        B[i] = rand() % 1500;
    }

    
    C = SumarVectores(A, B);

    
    cout << "Vector A: ";
    for (int i = 0; i < 10; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    cout << "Vector B: ";
    for (int i = 0; i < 10; i++) {
        cout << B[i] << " ";
    }
    cout << std::endl;

    cout << "Vector C: ";
    for (int i = 0; i < 10; i++) {
        cout << C[i] << " ";
    }
    cout <<endl;

    return 0;
}


