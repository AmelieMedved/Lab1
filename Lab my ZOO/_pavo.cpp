#include "_pavo.h"

Indian_Pavo::Indian_Pavo()
{
  size = "length 113 cm, tail length 49 cm, weight 4,35 kg, 'train' length 150 cm";
  colour = "Head, neckand part of the chest are blue, back is green,"
    "bottom of the body is black.The female is smaller,"
    "more modestly coloredand does not have elongated feathers of the 'train'.";
  plumage = "Metallic blue on the crown, the feathers of the head being shortand curled.The fan - shaped crest on the head is made of feathers with bare black shafts and tipped with bluish - green webbing."
    "A white stripe above the eye and a crescent shaped white patch below the eye are formed by bare white skin."
    "The sides of the head have iridescent greenish blue feathers.The back has scaly bronze - green feathers with black and copper markings."
    "The scapular and the wings are buff and barred in black, the primaries are chestnutand the secondaries are black."
    "The underside is dark glossy green shading into blackish under the tail.The thighs are buff colored.Spur on the leg above the hind toe.";
  beak = "ordinary beak";
  diet = "Grains, plant shoots, fruits, berries, insects, small snakes and rodents.";
  feature = "The tail is dark brown and the 'train' is made up of elongated upper"
    "tail coverts (more than 200 feathers, the actual tail has only 20 feathers)"
    "and nearly all of these feathers end with an elaborate eye-spot.";
  conservation_status = "LC";

}

void Indian_Pavo::LookAtMe()
{
  std::cout << "ќчень громкие и €ркие крики павлина" << std::endl;
}
