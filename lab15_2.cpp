#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);
void findLocalMax(const double [][N], bool [][N]);
void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}
void inputMatrix(double c[N][N]){
	for(int i = 0; i < N; i++){
		cout << "Row "<<i+1<<": ";
		for(int j = 0; j < N; j++)
			cin >> c[i][j]; 
	}
}
void findLocalMax(const double a[N][N], bool b[N][N]){
	for(int i=0 ;i < N; i++){
		for(int j=0 ;j < N; j++){
			b[i][j] = 0;
			if(i == 0 || j == 0 || j == 4 || i == 4) {
				continue;
			}
			if(a[i][j] >= a[i-1][j] && a[i][j] >= a[i+1][j] && a[i][j] >= a[i][j-1] && a[i][j] >= a[i][j+1] ){
				b[i][j] = 1;
			}
			}
	}	
}
void showMatrix(const bool l[N][N]){
	for(int i=0 ;i < N; i++){
		for(int j=0 ;j < N; j++){
			cout << l[i][j]<<" ";
		}
		cout << endl;
	}
}
