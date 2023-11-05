#include <bits/stdc++.h>
using namespace std;

vector<int> GenerarVector(vector<int> A);
vector<int> GenerarVectorB(vector<int> B);
void MostrarVectorA(vector<int> A);
void MostrarVectorB(vector<int> B);
int UnosVectorA(vector<int> A);


int main()
{
   vector<int> A , B;
   cout<<"Vector A: ";
   A=GenerarVector(A);
    MostrarVectorA(A);
   cout<<endl;
   
  cout << "Vector B: ";
    B = GenerarVectorB(A);
    MostrarVectorB(B);
   cout<<"en el vector A hay "<<UnosVectorA(A)<<" unos"<<endl;
   
   return 0;
}
vector<int> GenerarVector(vector<int> A){
    srand(time(NULL));
    int e;
    for(int i=0;i<100;i++){
        e=rand()%100;
        A.push_back(e);
    }
    return A;
}
void MostrarVectorA(vector<int> A){
    for(int i=0;i<A.size();i++){
        cout<<A[i]<<"/";
    }
    cout<<endl;
}
vector<int> GenerarVectorB(vector<int> A){
    vector<int> B;
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] % 2 == 0 && A[i] > 20)
        {
            B.push_back(A[i] * 10);
        }
        else if (A[i] % 2 != 0 && A[i] < 60)
        {
            B.push_back(A[i] - 30);
        }
    }
    return B;
}
void MostrarVectorB(vector<int> B){
    for(int i=0;i<B.size();i++){
        cout<<B[i]<<"/";
    }
    cout<<endl;
}
int UnosVectorA(vector<int> A){
    int uno=0;
    for(int i=0;i<A.size();i++){
        if(A[i]== 1){
            uno++;
        }
    }
    return uno;
}
