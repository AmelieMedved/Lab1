#include "_antelope.h"

Dorcas_gazelle::Dorcas_gazelle()
{
  size = "A small gazelle, 109 cm long, 60 cm high, weighing 21 kg";
  std::string colour_1 = "Very pale, fawn-colored coats.";
  std::string colour_2 = "The white underside is bordered with a brown stripe, above which is a sandy stripe.";
  std::string colour_3 = "Dark flanks and facial stripes";
  colour = colour_1 + " " + colour_2 + " " + colour_3;
  diet = "Herbivore";
  conservation_status = "VU";
 
}

void Dorcas_gazelle::LookAtMe()
{
  std::cout << "Muu..Meeee..Mee.." << std::endl;
}
