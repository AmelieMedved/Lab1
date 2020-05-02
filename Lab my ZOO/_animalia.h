#pragma once
#include <string>
#include <iostream>

#ifndef _ANIMALIA_H_
#define _ANIMALIA_H_

class Animalia//÷арство ∆ивотных
{
protected:
  int age;
  std::string colour;
  std::string name;
  std::string size;
  std::string conservation_status; 
  std::string diet;

public:
  Animalia();
  int GetAge();
  std::string GetName();
  std::string GetColour();
  std::string GetSize();
  std::string GetCONS_Status();

  void SetAge(int age);
  void SetName(std::string name);

  virtual void LookAtMe();

};

#endif // !_ANIMALIA_H_
