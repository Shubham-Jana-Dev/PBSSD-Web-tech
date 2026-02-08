<p align="center">
  <img src="assets/PBSSD.png" alt="PBSSD Logo" width="200">
</p>

# 🐍 PBSSD Web Devolopment Journey

---

## 📅 CSS
PBSSD-PYTHON-LEARNING/
├── assets/                    # Global images/logos
├── Day_01/
│   ├── assets_day01/ 

| Day | Topic | Highlights | Links |
|:---:|:---|:---|:---:|
| **01-11** | Core Foundations | Variables, Memory, Data Types | [View Folders](./) |
| **12** | Armstrong & Loops | `for` loops, `range()`, logic building | [Notes](#-day-12-armstrong-numbers--for-loop-iterators) |
| **13** | Nested Loop Geometry | Pattern printing, Range Algorithms | [Notes](#-day-13-nested-loops--pattern-geometry) |
| **14** | Matrix Operations | 2D Searching, Coordinate Mapping | [Notes](#-day-14-matrix-operations--coordinate-mapping) |
| **15** | Advanced Pattern Design | Geometric logic, Region filling | [Notes](#-day-15-geometric-logic--advanced-pattern-design) |
| **16** | Functional Programming | `def`, `return`, Lambda functions | [Code](./Day_16/) |
| **17** | **Advanced Iterators** | `map`, `filter`, `*args`, `**kwargs` | [Notebook](./Day_17/day17_pbssd.ipynb) |

---

## 🛠️ Current Tech Stack
* **Language:** Python 3.x
* **Environment:** Anaconda / Jupyter Notebooks / VS Code
* **Focus:** Logic Building, Data Structures, and Modular Programming

---

## 🗓️ Day 01 - Day 11: Foundations
*Summary of core concepts covered in the initial weeks:*
* **Memory Management:** Object IDs, Stack (LIFO), and PVM logic.
* **Data Types:** Dynamic typing, ASCII conversions (`ord`/`chr`), and Number Systems (Hex, Binary, Octal).
* **Control Flow:** `if-elif-else` ladders and basic `while` loops for automation.
* **Math Assignments:** 100+ problems solved across basic, intermediate, and advanced levels.

---

## 🗓️ Day 12: Armstrong Numbers & For-Loop Iterators
**Focus:** Digit logic and Range-based iteration.

### 1. Armstrong Number Logic
A number is an **Armstrong number** if the sum of its own digits each raised to the power of the number of digits equals the number itself.
*Example:* $153$ ($3$ digits): $1^3 + 5^3 + 3^3 = 153$.

### 2. The `for` Loop & `range()`
* **Stream Processing:** Python treats sequences as data streams starting at **index 0**.
* **`range(start, stop, step)`**: Mastered forward and reverse iteration.

---

## 🗓️ Day 13: Nested Loops & Pattern Geometry
**Focus:** Coordinate-based iteration and the "Clock Hand" model.

* **Clock Hand Model:** Outer loop (Hour) and Inner loop (Minute).
* **Pattern Logic:**
  * Left Triangle: `if i >= j`
  * Right Triangle: `if i + j >= r + 1`
  * Diagonal (X-Shape): `if i == j or i + j == r + 1`

---

## 🗓️ Day 14: Matrix Operations & Coordinate Mapping
**Focus:** Numerical matrices and 2D searching.

* **Numerical Filling:** Implemented row-major and column-major matrix population.
* **2D Search:** Built a search algorithm that returns the exact **Coordinate Pair** $(x, y)$ of a target value.

---

## 🗓️ Day 15: Geometric Logic & Advanced Pattern Design
**Focus:** Multi-conditional logic and region filling.

* **Advanced Shapes:** Implemented "N" and "Z" shapes using diagonal boundary conditions.
* **Symmetry:** Mastered the center point calculation `(f + 1) // 2` for odd-numbered grids.
* **Region Filling:** Used inequalities to create solid geometric shapes within matrices.

---

## 🗓️ Day 16: Functions & Functional Programming
**Focus:** Reusability and Lambda Expressions.

* **Types:** Built-in vs. User-defined (`def`).
* **Lambda Functions:** Single-line, anonymous functions for quick operations.
* **Higher-Order Functions:** Passing functions as arguments to other functions to create modular "tools."

---

## 🗓️ Day 17: Advanced Iterators & Arguments
**Focus:** Scalable functions and Jupyter integration.

* **Tools:** `map()` for transformations and `filter()` for conditional data extraction.
* **Scalability:** * `*args`: Tuple-based positional arguments.
  * `**kwargs`: Dictionary-based keyword arguments.
* **Environment:** Successfully migrated to **Jupyter Notebooks** for interactive debugging.

---

## 📂 Repository Structure

PBSSD-PYTHON-LEARNING/
├── Day_01_to_11/      # Foundation logic and 100-problem assignment
├── Day_12/            # Armstrong numbers & For loops
├── Day_13/            # Pattern printing part 1
├── Day_14/            # Matrix & 2D Search
├── Day_15/            # Advanced Geometry Patterns
├── Day_16/            # Functions & Lambda
├── Day_17/            # Jupyter Notebooks (*args/**kwargs)
└── assets/            # Project images and logos

---

> "Reputation is built one commit at a time." 🚀


## 📂 File Structure

Below is the detailed organization of the repository. Each day folder contains the source code, relevant assets, and a dedicated `.md` summary of that day's concepts.

```text
PBSSD-PYTHON-LEARNING/
├── assets/                    # Global images/logos
├── Day_01/
│   ├── assets_day01/          # Concept screenshots
│   ├── day01_pbssd.py         # Foundations
│   └── Day_01.md              # Documentation
├── Day_02/
│   ├── assets_day02/          # Memory & ASCII diagrams
│   ├── day02_pbssd.py         # Identifiers
│   └── Day_02.md
├── Day_03/
│   ├── assets_day03/          # Scope & Stack diagrams
│   ├── Assignment_day03.py    # 12 Logic scripts
│   ├── day03_pbssd.py         # Variable Scope
│   └── Day_03.md
├── Day_04/ to Day_11/         # Foundational Phase (Standardized Structure)
│   ├── dayXX_pbssd.py
│   └── Day_XX.md
├── Day_12/
│   ├── day12_pbssd.py         # Armstrong Logic
│   └── Day_12.md
├── Day_13/
│   ├── day13_pbssd_pattern_printing.py
│   ├── day13_pbssd.py
│   └── Day_13.md
├── Day_14/
│   ├── day14_pbssd_pattern_printing.py
│   └── Day_14.md
├── Day_15/
│   ├── day15_pbssd_pattern_printing.py
│   └── Day_15.md
├── Day_16/
│   ├── day16_pbssd_functions.py
│   └── Day_16.md
├── Day_17/                    # Advanced Modular Phase
│   ├── Day_17.md              # Detailed concept notes
│   ├── day17_pbssd_function.py
│   └── day17_pbssd.ipynb      # Interactive Notebook
├── Day_18/
│   ├── Assignment_day18_pattern_printing.py
│   └── Day_18.md
├── .gitignore                 # Version control exclusions
├── LICENSE                    # Repository license
└── README.md                  # Main Documentation (This file)
