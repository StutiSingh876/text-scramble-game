
# 🔤 Text Scramble Game

A fun command-line game that scrambles words in a sentence using basic **string manipulation** in C++. Great for improving logical thinking and mastering fundamental DSA concepts like string processing.

---

## 🎯 Features

- Scrambles each word in a sentence while keeping the first and last characters intact.
- Uses C++ STL (`<string>`, `<algorithm>`, `<sstream>`, `<random>`) for efficient manipulation.
- Handles multiple words and preserves sentence structure.

---

## 🧠 How It Works

The algorithm:
1. Takes a sentence input from the user.
2. For each word:
   - Leaves words with ≤3 characters unchanged.
   - Keeps the first and last characters fixed.
   - Shuffles the **middle characters**.
3. Outputs the scrambled sentence.

### Example
This is a word scramble game
Tihs is a wrod srbmalce gaem


