#include <iostream>
#include <string>

// РџСЂРѕСЃРёРј РІРІРµСЃС‚Рё РёРјСЏ РїРѕР»СЊР·РѕРІР°С‚РµР»СЏ
int main()
{
  std::cout << "Enter your name: ";
  std::string name;
  std::getline(std::cin, name);
  // РџРµС‡Р°С‚Р°РµРј РїСЂРёРІРµС‚СЃС‚РІРёРµ РІ С„РѕСЂРјР°С‚Рµ: Hello world from @name
  std::cout << "Hello world from @" << name << std::endl;
  return 0;
}
