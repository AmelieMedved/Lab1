#include "_giraffe.h"

Giraffe::Giraffe()
{
  size = "5.7 m high (1/3 high - neck),weighing 1152 kg";
  colour = "Brown pathes separated by cream hair. Along the animal's neck is a mane made of short, erect hairs.The 1 m tail ends in a long, dark tuft of hair";
  diet = "Herbivore";
  conservation_status = "VU";

}

void Giraffe::LookAtMe()
{
  std::cout << "Жевание листьев" << std::endl;
}
