#pragma once
#include "_animalia.h"

#ifndef _ARTIODACTYLA_H_
#define _ARTIODACTYLA_H_

class Artiodactyla : public Animalia//Отряд парнокопытные
{
protected:
  bool BoolHorns;//Проверка наличия рогов
  std::string horns;//Рога
public:
  Artiodactyla();
  std::string GetHorns();

  void SetHorns(std::string horns);

};

#endif // !_ARTIODACTYLA_H_

