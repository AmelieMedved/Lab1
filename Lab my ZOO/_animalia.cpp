#include <iostream>
#include "_animalia.h"

Animalia::Animalia()
{
  int age = 0;
  std::string name = "no_name";
}

int Animalia::GetAge()
{
  std::cout << this->age << std::endl;
  return 0;
}

std::string Animalia::GetName()
{
  std::cout << this->name << std::endl;
  return "";
}

std::string Animalia::GetColour()
{
  return colour;
}

std::string Animalia::GetSize()
{
  std::cout << this->size << std::endl;
  return "";
}

std::string Animalia::GetCONS_Status()
{
  return conservation_status;
}

void Animalia::SetAge(int age)
{
  this->age = age;
}

void Animalia::SetName(std::string name)
{
  this->name = name;
}

void Animalia::LookAtMe()
{
  std::cout << "Bubble Sound" << std::endl;
}
