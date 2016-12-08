#include <iostream>
#include "resources.hpp"

int main() {
	const sysd::resources resources("./resources/");

	if (!resources.is_root_valid()) {
		std::cout << "could not locate resource directory" << std::endl;
		return 1;
	}

	auto &consoles_path = resources.get("consoles.json");
	std::cout << consoles_path.filename() << std::endl;
	return 0;
}

