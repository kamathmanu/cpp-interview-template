# A General C++ Build Template for Screensharing Interviews

Lately I have had virtual interviews where I screen share the code I write. For simple interviews, I resorted to something like Compiler Explorer, but if your interview requires you to use a more complex build setup this isn't possible (AFAIK) and it's best to have a dedicated workspace ready so that you don't have to worry about the build when you're under pressure in the interview.

## Build & Run

```[bash]
mkdir build
cd build
conan install ../ --build=missing
cmake ../
cmake --build .
./solution
```
