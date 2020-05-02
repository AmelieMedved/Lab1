#pragma once
#include "_aves.h"

#ifndef _PENGUIN_H_
#define _PENGUIN_H_

class Emperor_penguin : public Aves
{
public:
  Emperor_penguin();
   
  void LookAtMe() override;

};

#endif // !_PENGUIN_H_




