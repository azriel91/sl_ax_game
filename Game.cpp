/*=============================================================================

	Library: Silver

	Copyright (c) Azriel Hoh

	Licensed under the Apache License, Version 2.0 (the "License");
	you may not use this file except in compliance with the License.
	You may obtain a copy of the License at

		http://www.apache.org/licenses/LICENSE-2.0

	Unless required by applicable law or agreed to in writing, software
	distributed under the License is distributed on an "AS IS" BASIS,
	WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
	See the License for the specific language governing permissions and
	limitations under the License.

=============================================================================*/

#include <azriel/sl_math/Point3D.hpp>

#include "Game.h"

namespace sl {
namespace ax {
namespace game {

bool ObjectZComparator::operator() (std::shared_ptr<object::Object> o1, std::shared_ptr<object::Object> o2) const {
	return object::Object::isBehind(o1.get(), o2.get());
}

Game::Game() : objects(std::set<std::shared_ptr<object::Object>, ObjectZComparator>()) {
}

Game::Game(const Game& other) : objects(other.objects) {
}

Game::Game(Game&& other) : objects(other.objects) {
	other.objects.clear();
}

Game& Game::operator=(const Game& other) {
	// protect against invalid self-assignment
	if (this != &other) {
		// allocate new resources
		std::set<std::shared_ptr<object::Object>, ObjectZComparator> nextObjects(other.objects);

		// clear old resources
		this->objects.clear();

		// assign new resources to this
		this->objects = nextObjects;
	}
	return *this;
}

Game& Game::operator=(Game&& other) {
	// protect against invalid self-assignment
	if (this != &other) {
		// clear old resources
		this->objects.clear();

		// steal resources from other
		this->objects.swap(other.objects);
	}
	return *this;
}

Game::~Game() {
}

std::set<std::shared_ptr<object::Object>, ObjectZComparator> Game::getObjects() const {
	return this->objects;
}

} /* namespace game */
} /* namespace ax */
} /* namespace sl */
