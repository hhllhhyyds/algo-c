rm -r -Force build
mkdir build
cd build
cmake ..
cmake --build .
ctest -C Debug --output-on-failure
cd ..