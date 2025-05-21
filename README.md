# Piscine - 42Tokyo Programming Bootcamp

## Overview
**Piscine** is a 4-week intensive programming bootcamp that serves as the entrance examination for 42Tokyo. This immersive program focuses on learning the fundamentals of programming, with emphasis on the C language, algorithms, data structures, and system programming.

---

## Repository Contents
This repository contains my solutions to the various exercises completed during the 42Tokyo Piscine:

- **C00 - C13**: Progressive C programming modules covering:
  - Basic syntax and functions
  - Pointers and memory management
  - String manipulation
  - Data structures (arrays, linked lists)
  - Algorithms (sorting, searching, recursion)

- **Shell00 - Shell01**: Shell scripting exercises

- **Rush Projects**: Team-based weekend projects
  - RUSH00: Console pattern printing
  - RUSH01: Logic puzzle solver
  - RUSH02: Number-to-text converter

- **BSQ**: Final project focused on finding the largest square in a map
  - BSQ First Day: Initial implementation
  - BSQ Second Day: Optimized solution

- **libft**: Custom C library implementation with:
  - String manipulation functions
  - Memory management functions
  - Linked list operations
  - File I/O utilities

---

## Code Structure
Each module contains multiple exercises organized by difficulty:
- **ex00, ex01, ...**: Individual exercises addressing specific programming concepts
- Each exercise includes implementation files and sometimes test files
- Comprehensive makefiles for compilation (example)

---

## Key Functions Implemented

### String Operations
- `ft_putstr`: Display a string
- `ft_strlen`: Calculate string length
- `ft_strcmp`: Compare two strings

### Character Operations
- `ft_putchar`: Output a single character
- `ft_print_alphabet`: Display the alphabet
- `ft_print_reverse_alphabet`: Display the alphabet in reverse

### Numeric & Memory Operations
- `ft_atoi`: Convert ASCII to integer
- `ft_recursive_power`: Calculate powers using recursion
- `ft_swap`: Swap the values of two integers

### Data Structures
- `ft_create_elem`: Create a linked list element
- `ft_list_size`: Calculate linked list length

### Advanced Algorithms
- `ft_sort_string_tab`: Sort string array
- `ft_advanced_sort_string_tab`: Sort with custom comparison
- `ft_map`: Apply function to each array element

### File I/O
- `ft_display_file`: Display file contents
- `ft_cat`: Concatenate and display files
- `ft_tail`: Display the end of a file

---

## Build Instructions
Most projects can be compiled using:

```bash
make
```

Some projects have specific compilation instructions:

```bash
# For C09/ex00 library
cd C09/ex00
./libft_creator.sh

# For specific exercises like ft_display_file
cd C10/ex00
make
```

---

## Coding Standards
All code adheres to the 42 Norm:
- Functions limited to 25 lines
- Maximum 5 functions per file
- Variable declarations at the beginning of functions
- No use of external libraries except when explicitly allowed
- Comprehensive error handling

---

## Learning Outcomes
- **C Language Mastery**: From basic syntax to advanced pointers and memory management
- **Algorithm Design**: Implementation of efficient sorting and searching algorithms
- **System Programming**: File I/O, process management, and memory allocation
- **Problem-Solving**: Debugging techniques and error handling strategies
- **Collaboration**: Peer programming and code review through Rush projects

---

## References
- [42Tokyo Official Website](https://42tokyo.jp/)
- [42 Piscine Guidelines](https://github.com/42tokyo/piscine)
- [C Language Reference](https://en.cppreference.com/w/c)

---

## License
This code is provided for educational purposes as part of the 42Tokyo admission process. Redistribution and commercial use may be restricted.