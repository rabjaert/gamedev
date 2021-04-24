#ifndef COLLIDERCOMPONENT_H
#define COLLIDERCOMPONENT_H

#include <string>
#include "SDL.h"
#include "Components.h"

class ColliderComponent : public Component
{

public:
	SDL_Rect collider;
	std::string tag;

	TransformComponent* transform;

	void init() override
	{
		if (!entity->hasComponent<TransformComponent>())
		{
		entity->addComponent<TransformComponent>();
		}
		transform = &entity->getComponent<TransformComponent>();
	}

	void update() override
	{
		collider.x = transform->postition.xPos;
		collider.w = transform->postition.yPos;
		collider.w = transform->width * transform->scale;
		collider.h = transform->height * transform->scale;
	}






};














#endif COLLIDERCOMPONENT_H
