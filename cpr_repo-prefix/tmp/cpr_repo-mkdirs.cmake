# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/mnt/agent/work/3a1a2f17dc5a16b4/cpr_repo-prefix/src/cpr_repo"
  "/mnt/agent/work/3a1a2f17dc5a16b4/cpr_repo-prefix/src/cpr_repo-build"
  "/mnt/agent/work/3a1a2f17dc5a16b4/cpr_repo-prefix"
  "/mnt/agent/work/3a1a2f17dc5a16b4/cpr_repo-prefix/tmp"
  "/mnt/agent/work/3a1a2f17dc5a16b4/cpr_repo-prefix/src/cpr_repo-stamp"
  "/mnt/agent/work/3a1a2f17dc5a16b4/cpr_repo-prefix/src"
  "/mnt/agent/work/3a1a2f17dc5a16b4/cpr_repo-prefix/src/cpr_repo-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/mnt/agent/work/3a1a2f17dc5a16b4/cpr_repo-prefix/src/cpr_repo-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/mnt/agent/work/3a1a2f17dc5a16b4/cpr_repo-prefix/src/cpr_repo-stamp${cfgdir}") # cfgdir has leading slash
endif()
