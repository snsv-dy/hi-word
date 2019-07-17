#include <iostream>

int x(int i){
	if(i > 0){
		return i - x(i / 2);
	}
	
	return 1;
}

int main(){
	
	std::cout<<"finally some code: "<<x(12)<<"\n";
	
	return 0;
}
