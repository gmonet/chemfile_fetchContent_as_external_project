# add_subdirectory(chemfiles)
# https://stackoverflow.com/questions/37838786/how-to-not-make-install-step-when-building-external-project-with-cmake
# https://gist.github.com/samee/a5f8f1f5f133192dc8ef3f933f3f35da
# include(ExternalProject)
# ExternalProject_Add(chemfiles
#     URL                 https://github.com/chemfiles/chemfiles/archive/refs/tags/0.10.3.tar.gz
#     # STEP_TARGETS build
#     # EXCLUDE_FROM_ALL TRUE #
#     INSTALL_COMMAND cmake -E echo "Skipping install step." 
# #   GIT_REPOSITORY    git@github.com:chemfiles/chemfiles.git
# #   GIT_TAG           origin/release/0.10.3
# )
# set(chemfiles_BINARY_DIR "${CMAKE_BINARY_DIR}/extern/chemfiles-prefix/src/chemfiles-build")
# set(chemfiles_SOURCE_DIR "${CMAKE_BINARY_DIR}/extern/chemfiles-prefix/src/chemfiles/include")

# target_link_libraries(chemfiles ${chemfiles_BINARY_DIR}/libfmt.a)
# target_include_directories(chemfiles PUBLIC ${chemfiles_SOURCE_DIR})
# https://github.com/chemfiles/chemfiles/archive/refs/tags/0.10.3.tar.gz

# https://coderefinery.github.io/cmake-workshop/fetch-content/
# https://stackoverflow.com/a/23573145

include(FetchContent)
FetchContent_Declare(
    chemfiles
  URL      https://github.com/chemfiles/chemfiles/archive/refs/tags/0.10.3.tar.gz
)
FetchContent_MakeAvailable(chemfiles)
