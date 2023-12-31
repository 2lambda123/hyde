/*
Copyright 2018 Adobe
All Rights Reserved.

NOTICE: Adobe permits you to use, modify, and distribute this file in
accordance with the terms of the Adobe license agreement accompanying
it. If you have received this file from a source other than Adobe,
then your use, modification, or distribution of it requires the prior
written permission of Adobe. 
*/

#pragma once

// stdc++
#include <filesystem>
#include <string>
#include <vector>

// application
#include "config.hpp"

/**************************************************************************************************/

namespace hyde {

/**************************************************************************************************/

std::vector<std::filesystem::path> autodetect_toolchain_paths();

std::filesystem::path autodetect_resource_directory();

#if HYDE_PLATFORM(APPLE)
std::filesystem::path autodetect_sysroot_directory();
#endif // HYDE_PLATFORM(APPLE)

/**************************************************************************************************/

} // namespace hyde

/**************************************************************************************************/
