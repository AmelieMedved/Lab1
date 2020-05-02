#include "_bear.h"

White_Bear::White_Bear()
{
  size = "The Largest bear of the family";//крупный
  colour = "White";
  diet = "Omnivorous";//всеядный
  family = "Bear";
  conservation_status = "VU";

}

void White_Bear::LookAtMe()
{
  std::cout << "Говорит." << std::endl;
}
