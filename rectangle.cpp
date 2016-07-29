#include "rectangle.h"

Rectangle::Rectangle(int longueur, int largeur) : longueur(longueur), largeur(largeur)
{}

int getLongueur() const
{
  return longueur; 
}

int getLargeur() const
{
  return largeur;
}

void Rectangle::aire() const
{
  return longueur*largeur;
}
