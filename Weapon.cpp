#include "Weapon.h"

Weapon::Weapon()
{
}

double Weapon::get_speed()
{
	return 0.0;
}

void Weapon::Shot()
{

}



Pistol::Pistol()
{
	damage = 5;						// �ǽ���
	speed = 0.3;						// �ǽ���
	bt.emplace_back(0, 0, 1, 0, speed);	// �ǽ���
}

double Pistol::get_speed()
{
	return this->speed;
}

void Pistol::Shot()
{
	bt.emplace_back(0, 0, 1, 0, 0.3);	// �ǽ���
}

Shotgun::Shotgun()
{
	damage = 4;							   //���� 
	speed = 0.4;						   //���� 
	bt.emplace_back(0, 0, 1, 0, speed);	   //���� 
	bt.emplace_back(0, 0, 1, 1, speed);	   //���� 
	bt.emplace_back(0, 0, 1, -1, speed);   //���� 
}

double Shotgun::get_speed()
{
	return this->speed;
}

void Shotgun::Shot()
{
	bt.emplace_back(0, 0, 1, 0, speed);	   //���� 
	bt.emplace_back(0, 0, 1, 1, speed);	   //���� 
	bt.emplace_back(0, 0, 1, -1, speed);   //���� 
}
