#include <iostream> //sometimes i will replace it with C headers i swear it
#include <string> 
int main(){
	std::string str1 = "Hello\n"; //do i really need to std:: every time?
	/* if i'm in need to get line in cin, i should use getline func*/
	std::string str2;
	std::getline(std::cin, str2);
	std::cout << str1 << str2 << "\n";
	//no bitches? no return 0;
}
