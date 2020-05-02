#include "_toco.h"

Channel_Billed_Toucan::Channel_Billed_Toucan()
{
  size = "48 cm long with a 12 cm bill. Weighs 350 g.";
  colour = "The main color is lacquer black, the lower region of the head, throatand upper region of the chest are characterized by bright yellow spot."
    "The base of a completely black beak has the same coloration.The borders of yellowand black shades are indicated by bright orange - red color marks."
    "Dark spots around the eyes.";
  plumage = "the base of its bill is yellow, the skin around the pale blue eye is red and the entire throat and chest are orange."
    "It occurs in the south-east Amazon. The unnamed population from the coastal regions of eastern Brazil is virtually identical.";
  beak = "The colorful and large bill, which in some large species measures more than half the length of the body, is the hallmark of toucans."
    "Despite its size, the toucan's bill is very light, being composed of bone struts filled with spongy tissue of keratin between them.";
  diet = "fruits, insects, small reptiles, eggs and frogs.";
  conservation_status = "VU";
  feature = "brightly coloured bird with a big beak";

}

void Channel_Billed_Toucan::LookAtMe()
{
  std::cout << "Вы улышите громкий, резкий и пронзительный голос Тукана" << std::endl;
}
