#include <SFML/Graphics.hpp>
#include "AssetManager.h"

namespace Exla {
	void AssetManager::loadTexture(std::string name, std::string fileName){
		sf::Texture tex;
		if (tex.loadFromFile(fileName)) {
			_textures[name] = tex;
		}
	}

	sf::Texture &AssetManager::getTexture(std::string name)  {
		return _textures.at(name);
	}

	void AssetManager::loadFont(std::string name, std::string fileName) {
		sf::Font font;
		if (font.loadFromFile(fileName)) {
			_fonts[name] = font;
		}
	}

	sf::Font &AssetManager::getFont(std::string name) {
		return _fonts.at(name);
	}

	void AssetManager::loadSound(std::string name, std::string fileName) {
		sf::SoundBuffer sound;
		if (sound.loadFromFile(fileName)) {
			_sounds[name] = sound;
		}
	}

	sf::Font &AssetManager::getSound(std::string name) {
		return _fonts.at(name);
	}
}