#include "_bear.h"

White_Bear::White_Bear()
{
  size = "The Largest bear of the family";//�������
  colour = "White";
  diet = "Omnivorous";//��������
  family = "Bear";
  conservation_status = "VU";

}

void White_Bear::LookAtMe()
{
  std::cout << "�������." << std::endl;
}
