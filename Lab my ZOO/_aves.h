#pragma once
#include "_animalia.h"

#ifndef _AVES_H_
#define _AVES_H_

class Aves : public Animalia//ѕтицы
{
protected:
  std::string plumage;//оперение
  std::string beak;//клюв
  std::string feature;//особенность птицы
public:
  std::string GetPlumage();
  std::string GetBeak();

};

#endif // !_AVES_H_
