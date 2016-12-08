#include "resources.hpp"

sysd::resources::resources(const std::string &root)
	: root_dir(root) { }

bool sysd::resources::is_root_valid() const {
	return fs::is_directory(root_dir);
}

const sysd::fs::path sysd::resources::get(const std::string &path) const {
	return root_dir/fs::path(path);
}

