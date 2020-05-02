#include <iostream>
#include "_all_animals.h"

int main()
{
  setlocale(LC_ALL, "ru");

  White_Stork Palich;

  Palich.SetAge(18);
  Palich.SetName("Палыч");

  std::cout << Palich.GetBeak() << std::endl;
  Palich.LookAtMe();

  std::cout << Palich.GetAge() << std::endl;

  std::cout << "----------------------------------" << std::endl;

  E_P_chicks Skiper;

  Skiper.SetName("Шкипер");
  std::cout << Skiper.GetColour() << std::endl;
  std::cout << Skiper.GetBeak() << std::endl;
  Skiper.LookAtMe();

  std::cout << "----------------------------------" << std::endl;

  Siberian_Tiger Vostok;

  Vostok.SetAge(25);
  Vostok.SetName("Древний восток");

  std::cout << "----------------------------------" << std::endl;

  Indian_Pavo Chick;
  std::cout << Chick.GetColour() << std::endl;
  std::cout << Chick.GetBeak() << std::endl;
  std::cout<< Chick.GetCONS_Status() << std::endl;
  std::cout<< Chick.GetPlumage() << std::endl;
  std::cout<< Chick.GetName() << std::endl;
  std::cout<< Chick.GetAge() << std::endl;
  std::cout << Chick.GetSize() << std::endl;

  Chick.LookAtMe();

  return 0;
}