#pragma once
#include "_artiodactyla.h"

#ifndef _ANTELOPE_H_
#define _ANTELOPE_H_

class Dorcas_gazelle : public Artiodactyla//Антилопа
{
public:
  Dorcas_gazelle();
  
  void LookAtMe() override;

};

#endif // !_ANTELOPE_H_
