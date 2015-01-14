
#include "Avion.h"

std::vector<Avion*> Avion::avions; 

Avion::Avion(int id, char symbole, int x, int y, int z, int dx, int dy, int dz)
{
	this->id=id;
	this->symbole=symbole;	
	this->x=x;
	this->y=y;
	this->z=z;
	this->dx=dx;
	this->dy=dy;
	this->dz=dz;
	
	pretATirer = true;
	detruit = false;
	
	avions.push_back(this);
}

int Avion::getX()
{
	return x;
}

int Avion::getY()
{
	return y;
}

int Avion::getZ()
{
	return z;
}

int Avion::getId()
{
	return id;
}

int Avion::getDx()
{
	return dx;
}

int Avion::getDy()
{
	return dz;
}

int Avion::getDz()
{
	return dz;
}

char Avion::getSymbole()
{
	return symbole;
}

bool Avion::getPretATirer()
{
	return pretATirer;
}

bool Avion::getDetruit()
{
	return detruit;
}

void Avion::setX(int x)
{
	this->x=x;
}

void Avion::setY(int y)
{
	this->y=y;
}

void Avion::setZ(int z)
{
	this->z=z;
}

void Avion::setDx(int dx)
{
	this->dx=dx;
}

void Avion::setDy(int dy)
{
	this->y=y;
}

void Avion::setId(int id)
{
	this->id=id;
}

void Avion::setPretATirer(bool a)
{
	pretATirer=a;
}

void Avion::setDetruit(bool a)
{
	detruit=a;
}


