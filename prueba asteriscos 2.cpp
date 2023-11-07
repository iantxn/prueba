#include <iostream>

using namespace std;

void fill(int b, int h){
	int i,j;
	
	for(i=1;i<=h;i++){
		for(j=1;j<=b;j++){
			cout<<"x ";
		}
		
		cout<<"\n";
	}
}

void margin(int b, int h){
	int i, j;
	
	for(i=1;i<=h;i++){
		for(j=1;j<=b;j++){
			if(i == 1 || i == h || j == 1 || j == b){
				cout<<"x ";
			}else{
				cout<<"  ";
			}
		}
		cout<<"\n";
	}
}

int main(){
	fill(5,5);
	
	cout<<"\n";
	cout<<"\n"; 
	
	margin (9,5);
	return 0;
}
