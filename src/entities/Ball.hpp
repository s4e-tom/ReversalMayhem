/*
 * Ball.hpp
 *
 *  Created on: 17 sept. 2013
 *      Author: Tom
 */

#ifndef BALL_HPP_
#define BALL_HPP_

#include <SFML/Graphics.hpp>

class Ball{
private:
	sf::CircleShape *myShape;
	int mySize;
	float myDx;
	float myDy;
	float mySpeed;

public:
	Ball(sf::Vector2f position, int size, int dx, int dy, float speed);
	~Ball();
	void moveX();
	void moveY();
	void reverseDx();
	void reverseDy();

	sf::CircleShape* getShape();
	sf::IntRect getHitbox();
};

#endif /* BALL_HPP_ */