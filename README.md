# 🖥️ Compiler Construction Projects

This repository contains multiple projects and practice programs developed as part of **Compiler Construction (CC)** coursework.  
The goal is to understand the fundamentals of lexical analysis, parsing, and compiler design by implementing small compilers/interpreters for different languages.

---

## 📂 Repository Structure

### 🔹 Sample Programs (`/sample-programs/`)
Basic practice programs to test compiler phases and syntax:
- Variables
- Conditional Statements (if-else, elseif)
- Loops (while, for)
- Logical Operations
- Prime Numbers
- Random Grades
- Math Functions (Logarithm, Trigonometry)

### 🔹 Chicken Project (`/Chicken Project/`)
Implementation of a **Chicken language parser**:
- `chicken.l.txt` → Lexical rules (Lex)
- `chicken.y.txt` → Grammar rules (Yacc/Bison)
- Generated files: `y.tab.c`, `y.tab.h`

### 🔹 Chicken Language Main (`/chicken-language-main/`)
Complete **Chicken Language Compiler**:
- Source: `chicken.l`, `chicken.y`, `chicken.h`
- Generated files: `lex.yy.c`, `chicken.tab.c`, `chicken.tab.h`
- Executable: `chick.exe`
- Documentation: `report.pdf`, `README.md`

### 🔹 C++ Mini Compiler (`/CPP Project/`)
- `cpp.l.txt` → Lexical rules  
- `cpp.y.txt` → Grammar rules  

### 🔹 Pascal Mini Compiler (`/Pascal Project/`)
- `Pascal.l.txt` → Lexical rules  
- `Pascal.y.txt` → Grammar rules  

---

## 📌 Key Concepts Covered
- Lexical Analysis using **Lex/Flex**
- Syntax Analysis using **Yacc/Bison**
- Parsing techniques
- Code generation for small custom languages
- Building mini-compilers for **Chicken, C++, and Pascal**

---

## 📖 Notes
These projects are **academic practice tasks** for Compiler Construction.  
They are not production-level compilers but serve as an excellent foundation for understanding how compilers work internally.
