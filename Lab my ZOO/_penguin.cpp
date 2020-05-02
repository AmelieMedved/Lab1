#include "_penguin.h"

Emperor_penguin::Emperor_penguin()
{
  size = "The tallest and heaviest of all living penguin species";
  colour = " Feathers of the head and back are black and sharply delineated from the white belly, pale-yellow breast and bright-yellow ear patches.";
  plumage = "The black plumage is sharply delineated from the light - coloured plumage elsewhere.The underparts of the wings and belly are white, becoming pale yellow in the upper breast, while the ear patches are bright yellow.";
  beak = "long beak is black, and the lower mandible can be pink, orange or lilac.";
  diet = "Its diet consists primarily of fish, but also includes crustaceans, such as krill, and cephalopods, such as squid.";
  conservation_status = "NT";

}

void Emperor_penguin::LookAtMe()
{
  std::cout << "Стоит, покачивается.. 'Хруст снега'" << std::endl;
}
