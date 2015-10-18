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

#include <memory>

#include <azriel/sl_core_application/ActivityRegistration.h>

#include "Activator.h"

namespace sl {
namespace ax {
namespace game {

void Activator::Load(ModuleContext* context) {
	this->gameActivityRegistration.reset(new GameActivityRegistration());
	context->RegisterService<sl::core::application::ActivityRegistration>(this->gameActivityRegistration.get());
}

void Activator::Unload(ModuleContext* context) {
	// services are automatically unregistered
}

} /* namespace game */
} /* namespace ax */
} /* namespace sl */
