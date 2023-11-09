# The Polybius Square Cipher

## Description

Welcome to the Polybius Square Cipher assignment! In this project, you will implement a classical substitution cipher known as the Polybius square. The cipher takes a message (the "plaintext") and transforms it into an encoded output (the "ciphertext") using a special 5x5 key square. While basic substitution ciphers are no longer used for real-world cryptography, working on this project will help you practice using arrays, strings, and matrices in C.

## Reading

In addition to working on this project, please complete the participation questions for Chapter 6 of the ZyBook by the project deadline. If you're up for an extra challenge, you can also attempt the challenge questions.

## Files, Grading, and Submission

**File Submission:**

- Submit your code to your own `project-2-f17` GitHub repository.
- For each problem, submit one .c source file named `polybiusEncrypt.c` and `polybiusDecrypt.c`.
- Include a Makefile that builds your executables from source when `make` is run at the command prompt.

**Grading:**

Your code will be graded using the included Python script, `test.py`. To run it, execute the following command:

```
prompt$ python test.py
```

The test script will:

- Build your code using `make`.
- Run your programs to ensure they produce the expected output.
- Do not edit the `.cmp` files in the test directory.

Your grade will be based on the percentage of tests you pass. Remember, a working build counts as one of the tests. Your code will also be manually examined for style and problem-solving strategies. Avoid simply printing expected answers, as points may be deducted for poor programming style.

**Submission Commands:**

Use the following commands to submit your project files:

```
prompt$ git add .
prompt$ git commit -m "message describing this commit"
prompt$ git push origin master
```

## The Polybius Square Cipher

The Polybius Square Cipher, named after the ancient Greek scholar Polybius, uses a 5x5 key square to substitute letters from the plaintext with numeric codes. The key square consists of 25 letters of the alphabet arranged in a specific permutation. For example:

```
0 1 2 3 4
---------0 | z e b r a
1 | c d f g h
2 | i k l m n
3 | o p q s t
4 | u v w x y
```

The omitted letter might be an infrequently used letter like 'z' or 'q,' or the letter 'j' may be omitted and replaced by 'i' wherever it occurs in the plaintext. In the example above, the square has been generated using the keyword 'zebra.'

To encrypt a message, locate each letter's entry in the matrix, and replace it with the two-digit combination formed from the row index and the column index. For example, the letter 'm' would be encoded as '23' because it is in row 2 and column 3.

Here is an example:

```
a t t a c k a t d a w n
-----------------------043434041021043411044224
```

To decrypt the message, simply use each pair of consecutive digits as a row and column lookup into the square.

## Project Requirements

Write two programs, `polybiusEncrypt.c` and `polybiusDecrypt.c`, that implement the Polybius Square Cipher.

**General Requirements:**

- Use the example square given in the description in both programs. You don't need to write code to generate other squares.

**For `polybiusEncrypt.c`:**

- The program should read a string from the command line using `fgets`.
- The input string will be composed of lowercase letters 'a' to 'z' with no spaces or punctuation.
- The program should print the encrypted string.
- The input may contain the letter 'j'.

**For `polybiusDecrypt.c`:**

- The program should read a string from the command line using `fgets`.
- The input will consist of digits '0' to '4'.
- The program should print the decrypted message.

**Hints:**

- Review the notes on strings and multidimensional arrays included with this project.
- Refer to the documentation for `fgets` if you need more examples.
- To convert a numeric character `c` to its corresponding integer, use `int digit = c - '0'`.

Good luck with your Polybius Square Cipher implementation!
