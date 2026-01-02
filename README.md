# stin.h 🚀

**stin** (String Input) is a lightweight, single-header C library designed to solve the two biggest headaches in C string input: buffer overflows and trailing newlines.

In standard C, `scanf()` is dangerous and breaks on spaces, while `fgets()` is clunky because it leaves a `\n` at the end of your strings. **stin.h** provides a clean, professional alternative.

### ✨ Key Features
- **Zero Configuration**: Just drop the `.h` file into your project and go.
- **Safety First**: Uses a smart macro to automatically calculate buffer sizes using `sizeof`, preventing memory corruption.
- **Space-Friendly**: Reads full sentences and names (e.g., "John Doe") perfectly.
- **Clean Results**: Automatically strips the trailing newline character so your output looks perfect immediately.
- **Modern C Standard**: Built for 2026 C standards and compatible with all major compilers (GCC, Clang, MSVC).

### 🛠 How It Works
Instead of writing 3-4 lines of code every time you want to read a string, you use one:

char name[50];
str_in(name); // That's it!
