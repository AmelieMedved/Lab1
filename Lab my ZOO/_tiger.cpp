#include "_tiger.h"

Siberian_Tiger::Siberian_Tiger()
{
  size = "The largest and heaviest of wild cats";
  colour = "fur is orange, belly is white. Black stripes";
  diet = "Predator";//хищник
  family = "Felidae, Pantherinae";//Семейство кошачьи, подсемейство большие кошки
  conservation_status = "EN";

}

void Siberian_Tiger::LookAtMe()
{
  std::cout << "Рычит!" << std::endl;
}
