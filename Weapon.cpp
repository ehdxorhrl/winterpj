#include "Weapon.h"

Weapon::Weapon()
{
	//bt.emplace_back(0, 0, 1, 0, 0.3);	// �ǽ���
	//damage = 5;						// �ǽ���
	//speed = 0.3;						// �ǽ���

	damage = 4;							   //���� 
	speed = 0.4;						   //���� 
	bt.emplace_back(0, 0, 1, 0, speed);	   //���� 
	bt.emplace_back(0, 0, 1, 1, speed);	   //���� 
	bt.emplace_back(0, 0, 1, -1, speed);   //���� 

	// ���� ���� ������ �÷����� ���� ������� �� ����
}

double Weapon::get_speed()
{
	return speed;
}

void Weapon::Reload()
{
	bullet_num = MAX_BULLET;
}

//Pistol::Pistol()
//{
//	  bt.emplace_back(0, 0, 1, 0);
//	  int damage = 5;
//}
//
//void Pistol::Reload()
//{
//	  bullet_num = MAX_BULLET;
//}
