#pragma once
class PlayerClass
{
	public:
		PlayerClass();
		~PlayerClass();

		int Hp;
		int Mp;
		int Gold;

		void Move();
		void Attack();
		void Pickup();

	};

