#include "Game.h"
#include "Game_State.h"
namespace Exla
{
	Game::Game(int width, int height, std::string title) {
		_data->window.create(sf::VideoMode(width, height), title, 
			sf::Style::Close | sf::Style::Titlebar | sf::Style::Resize);
		_data->machine.addState(StateRef(new GameState(_data)));

		run( );
	}

	void Game::run() {
		float newTime, frameTime, interpolation;

		float currentTime = _clock.getElapsedTime().asSeconds();
		float accumulator = 0.0f;
		
		while (_data->window.isOpen()) {
			_data->machine.processStateChanges();

			newTime = _clock.getElapsedTime().asSeconds();
			frameTime = newTime - currentTime;

			if (frameTime > 0.25f) {
				frameTime = 0.25f;
			}

			currentTime = newTime;
			accumulator += frameTime;

			while (accumulator >= dt) {
				_data->machine.getActiveState()->handleInput();
				_data->machine.getActiveState()->update(dt);

				accumulator -= dt;
			}

			interpolation = accumulator / dt;
			_data->machine.getActiveState()->render(interpolation);
		}
	}
}
