#include <iostream>
#include <string>

// Р—Р°РїСЂР°С€РёРІР°РµРј РёРјСЏ РїРѕР»СЊР·РѕРІР°С‚РµР»СЏ.
int main() {
  std::cout << "Р’РІРµРґРёС‚Рµ РІР°С€Рµ РёРјСЏ: ";
  std::string name;
  std::getline(std::cin, name);
  // РџРµС‡Р°С‚Р°РµРј РїСЂРёРІРµС‚СЃС‚РІРёРµ: Hello world from @name.
  std::cout << "Hello world from @" << name << std::endl;
  return 0;
}
