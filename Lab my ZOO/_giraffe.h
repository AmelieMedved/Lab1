#pragma once
#include "_artiodactyla.h"

#ifndef _GIRAFFE_H_
#define _GIRAFFE_H_

class Giraffe : public Artiodactyla//�����
{
public:
  Giraffe();

  void LookAtMe() override;

};

#endif // !_GIRAFFE_H_
