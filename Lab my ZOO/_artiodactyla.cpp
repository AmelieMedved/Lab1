#include "_artiodactyla.h"

Artiodactyla::Artiodactyla()
{
  int temp;
  std::cout << "How many horns?" << std::endl;
  std::cin >> temp;

  if (temp != 0)
  {
    this->BoolHorns = true;
    this->horns = "";
  }
  else
  {
    this->BoolHorns = false;
  }

}

std::string Artiodactyla::GetHorns()
{
  if (BoolHorns)
  {
    return horns;
  }
  else
  {
    std::cout << "No horns :(" << std::endl;
    return "";
  }

}

void Artiodactyla::SetHorns(std::string horns)
{
  this->horns = horns;
}
