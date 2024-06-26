#ifndef KNIFE_H
#define KNIFE_H

#include "entity.h"

class Knife: public Entity
{
public:
	Knife();
	virtual ~Knife();
	virtual void Update(float deltaTime);

	void Draw();
	void HandleInput();

private:
	float velocity; 
	float acceleration; 

	bool isSpacebarPressed; 

	Texture2D imageKnife;
};

#endif 
