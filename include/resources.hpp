#ifndef SYSD_RESOURCES_HPP
#define SYSD_RESOURCES_HPP

#pragma once

#include <string>
#include <boost/filesystem.hpp>

namespace sysd {
	namespace fs = boost::filesystem;

	class resources {
	public:
		resources(const std::string &root);

		bool is_root_valid() const;
		const fs::path get(const std::string &path) const;
	private:
		const fs::path root_dir;
	};
}

#endif // SYSD_RESOURCES_HPP
