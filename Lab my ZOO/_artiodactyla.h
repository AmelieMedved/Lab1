#pragma once
#include "_animalia.h"

#ifndef _ARTIODACTYLA_H_
#define _ARTIODACTYLA_H_

class Artiodactyla : public Animalia//����� �������������
{
protected:
  bool BoolHorns;//�������� ������� �����
  std::string horns;//����
public:
  Artiodactyla();
  std::string GetHorns();

  void SetHorns(std::string horns);

};

#endif // !_ARTIODACTYLA_H_

