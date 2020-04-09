#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *a,int *b, int *c, int *d); //Modify input arguments to pointer 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); //Modify input arguments to pointer 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}
void shuffle(int *a,int *b,int *c,int *d)
{
	 int x[]= {*a,*b,*c,*d};
	 int n=0;
	 for(;n<10;n++)
	 {
		int i = rand()%4;
		int j = rand()%4;
		int A = x[i];
		x[i] = x[j];
		x[j] = A;
 	 }
	 	*a = x[0];
		*b = x[1];
		*c = x[2];
		*d = x[3];
}
//Write definition of shuffle() using pointer here 
