#pragma once
#include "_carivora.h"

#ifndef _BEAR_H_
#define _BEAR_H_

class White_Bear : public Carivora//Белый Медведь
{
public:
  White_Bear();

  void LookAtMe() override;

};

#endif // !_BEAR_H_

