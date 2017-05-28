#pragma once
#include <list>
#include "Mapa.h"
#include "Input.inl.hh"

class Player
{
public:
	struct entio
	{
		int colum;
		int row;
		int life=10;
		int arrows = 10;
		int fatiga=0;
		char letra;
		int last_col;
		int last_row;
		char last_char='.';
	};

	std::list <entio> entios;
	int movements=10;
	Mapa &mymapa;
	void reorder();
	void changeentio();
	void ataque();
	void controlZX();
	bool moveback;
	bool moveforward;
	void Move(enti::InputKey a);
	void Input(enti::InputKey a);
	std::list<entio>::iterator it;
	Player(bool letras, Mapa &a);
	~Player();
};

