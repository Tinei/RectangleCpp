#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
  int longueur;
  int largeur;

public:
  Rectangle(int longueur, int largeur);
  int getLongueur() const;
  int getLargeur() const;
  void aire() const;
};

#endif
