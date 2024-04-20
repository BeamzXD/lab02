// hello_world.cpp
// Простая программа для приветсвия пользователя

#inculde < iostream>

<<<<<<< HEAD
int main(){
	std::string name;
	std::cout << "Enter your name: "; // Запрос имени пользователя
	std::cin >> name; // Запись имени пользователя
	std::cout << "Hello world from " << name << "!" << std::endl; // Вывод на печать приветственного сообщения
	return 0;
=======
int
main()
{
  std::string name;
  std::cout << "Enter your name: "; // Prompting user for name
  std::cin >> name;                 // Taking input from user
  std::cout << "Hello world from " << name << "!"
            << std::endl; // Printing greeting message
  return 0;
>>>>>>> 9d5bd1c (Apply clang-format with Mozilla style)
}
