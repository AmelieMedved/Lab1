#include "_tiger.h"

Siberian_Tiger::Siberian_Tiger()
{
  size = "The largest and heaviest of wild cats";
  colour = "fur is orange, belly is white. Black stripes";
  diet = "Predator";//������
  family = "Felidae, Pantherinae";//��������� �������, ������������ ������� �����
  conservation_status = "EN";

}

void Siberian_Tiger::LookAtMe()
{
  std::cout << "�����!" << std::endl;
}
