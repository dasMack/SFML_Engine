#ifndef GAME_STATE_H
#define GAME_STATE_H

#include <SFML/Graphics.hpp>
#include "State.h"
#include "Game.h"

namespace Exla {
	class GameState : public State {
	public:
		GameState(GameDataRef data);

		void init();
		void handleInput();
		void update(float dt);
		void render(float dt);

	private:
		GameDataRef _data;

		sf::Sprite _sprite;
		sf::Text _text;
		sf::Sound _sound;
	};
}

#endif // GAME_STATE_HPP
