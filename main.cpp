#include <iostream>

void generate(std::string brackets, int left, int right, int length){
	if(left + right == length*2){
        if(left == right) {
            std::cout << brackets << std::endl;
        }
    return;
    }
	if(left >= right){
		generate(brackets + "(", left + 1, right, length);
    }
	if(left > right){
		generate(brackets + ")", left, right + 1, length);
    }
}

int main(){
	int length;
	std::cin >> length;
	generate("", 0, 0, length);
	return 0;
}
