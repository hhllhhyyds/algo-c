rm -r -Force build
mkdir build
cd build
cmake ..
cmake --build .
./Debug/algo_c.exe
cd ..