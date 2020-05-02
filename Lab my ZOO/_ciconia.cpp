#include "_ciconia.h"

White_Stork::White_Stork()
{
  size = "The height is 115 cm, The wingspan is 155Ц215 cm,The weight is 4 kg.";
  colour = "White beak, black and white plumage,long red legs and long pointed red beak";
  plumage = "The plumage is mainly white with black flight feathers and wing coverts."
   "The black is caused by the pigment melanin. The breast feathers are long and shaggy forming a ruff which is used in some courtship displays.";
  beak = "long pointed red beak";
  diet = "Common food items include insects (primarily beetles, grasshoppers, locusts and crickets), earthworms, reptiles, amphibians, particularly frog species such as the edible frog (Pelophylax kl. esculentus) and common frog (Rana temporaria) and small mammals such as voles, moles and shrews";
  conservation_status = "LC";
  feature = "It is the national bird of Lithuania and Belarus";

}

void White_Stork::LookAtMe()
{
  std::cout << "ўелкает клювом" << std::endl;
}
