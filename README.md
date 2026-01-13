# Name-Surname Sorter and Manipulator

This project implements advanced string manipulation algorithms in C to process a list of names without using standard functions like `strcmp`, `strcpy`, or `strlen`.

## ⚙️ Features & Logic

1.  **Sort by Name:** Uses Bubble Sort comparing characters from index 0.
2.  **Sort by Surname:** Finds the space character (`' '`) and compares substrings starting immediately after it.
3.  **Longest Name Analysis:** Iterates and counts characters to find the longest first and last names.
4.  **Format Swap:** Converts "First Last" $\to$ "Last First" using a temporary buffer.

## 🚀 Example Output

**Initial List:**
* `Mehmet Yildiz`
* `Ahmet Demir`

**Step 1: Sort by Name:**
1. `Ahmet Demir`
2. `Mehmet Yildiz`

**Step 2: Swap Format (Last First):**
* `Demir Ahmet`
* `Yildiz Mehmet`

---
*This repository demonstrates pointer arithmetic and manual string parsing in C.*
