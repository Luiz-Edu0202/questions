# Questions – Solved Programming Problems

This repository is a personal collection of solved programming problems from various online judges, primarily **LeetCode** and **beecrowd** (formerly URI Online Judge). All solutions are written in **C++** and are organized into individual directories for easy navigation and reference.

## Repository Structure

Each problem is stored in its own folder. The folder name follows a simple naming convention:

- `leet-XXXX` – LeetCode problems (e.g., `leet-0001` for problem #1).
- `bee-XXXX` – beecrowd problems (e.g., `bee-1001` for problem #1001).
- `beecrowd-XXXX` – Alternative prefix for beecrowd problems.

Inside every problem folder you will find:

- `main.cpp` – The C++ source code with the solution.
- `CMakeLists.txt` – CMake build configuration for compiling the solution.
- `.idea/` – IDE configuration files (if applicable).

## Technologies Used

- **Language:** C++
- **Build System:** CMake

## How to Build and Run a Solution

1. Navigate to the desired problem folder:
   ```bash
   cd leet-0001   # or bee-1001, etc.
   ```

2. Create a build directory and configure the project with CMake:
   ```bash
   mkdir build && cd build
   cmake ..
   ```

3. Compile the solution:
   ```bash
   make
   ```

4. Run the executable (the name may vary; typically it matches the folder name or is `main`):
   ```bash
   ./main   # or ./leet-0001
   ```

> **Note:** Some problems may require standard input (`stdin`) during execution, as is common in competitive programming.

## Purpose

This repository serves as a personal archive of solved problems, useful for:

- Reviewing algorithms and data structures.
- Tracking progress across different platforms.
- Sharing solutions with others who might find them helpful.

## Contributing

This is a personal repository, but suggestions and corrections are welcome. Feel free to open an issue or submit a pull request if you spot any mistakes.

## License

This project is open‑source and available under the [MIT License](LICENSE) (if a license file exists; otherwise, you may add one).

---

Feel free to adjust the license section or any other details to match your preferences.