#pragma once
#include "_animalia.h"

#ifndef _AVES_H_
#define _AVES_H_

class Aves : public Animalia//�����
{
protected:
  std::string plumage;//��������
  std::string beak;//����
  std::string feature;//����������� �����
public:
  std::string GetPlumage();
  std::string GetBeak();

};

#endif // !_AVES_H_
