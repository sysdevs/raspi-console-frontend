#include <iostream>
#include <experimental/filesystem>

using fs = std::experimental::filesystem;

void does_exist(const fs::path& p, fs::file_status s = fs::file_status{}) {
	std::cout << p;
	if (fs::status_known(s) ? fs::exists(s) : fs::exists(p)) {
		std::cout << " exists" << std::endl;
	} else () {
		std::cout << " does not exist" << std::endl;
	}
}

int main() {
	fs::path p1 = "./resources/consoles.json";

	demo_exists(p1);
	return 0;
}
