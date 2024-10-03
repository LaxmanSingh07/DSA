#### INTRODUCTION

🔍 **DECIMAL TO BINARY CONVERSION**

[Decimal to Binary Conversion](./_1_DecToBinary.cpp) 📜

🔄 **BINARY TO DECIMAL CONVERSION**

[Binary to Decimal Conversion](./_2_BinaryToDec.cpp) 📜

- Everything in a computer is stored in binary format.
- The binary number system is a base-2 number system, using only two symbols: `0` and `1`.

###### 1's Complement

- The 1's complement of a binary number is obtained by flipping (toggling) all the bits in it. This means converting all `0`s to `1`s and all `1`s to `0`s.

**Example:**

- Binary Number: `1010`
- 1's Complement: `0101`

###### 2's Complement

- The 2's complement of a binary number is found by adding `1` to the 1's complement of the number.
- Alternatively, you can find the 2's complement by locating the first `1` from the right and toggling all bits after that.

**Example:**

1. **Find the 1's Complement:**

   - Binary Number: `1010`
   - 1's Complement: `0101`

2. **Add `1` to the 1's Complement:**

   - `0101` + `1` = `0110`

   - 2's Complement: `0110`

   **Alternative Method:**

   - Binary Number: `1010`
   - First `1` from the right is in position 3 (0-indexed). Toggle all bits after this position.

   - Toggle bits: `1010` -> `1100` (Bits after the first `1` are toggled)

   - Add `1`: `1100` + `1` = `1101`

   - 2's Complement: `1101`

### BITWISE OPERATORS

- Bitwise operators are used to perform bitwise operations on integers.

- The bitwise operators are used to perform bit-level operations on integers.

#### BITWISE AND

- The bitwise AND operator is a single ampersand: &.

- The bitwise AND operator compares each bit of the first operand to the corresponding bit of the second operand.

- If both bits are 1, the corresponding result bit is set to 1. Otherwise, the corresponding result bit is set to 0.

- The bitwise AND operator is often used to clear or mask bits.

- The bitwise AND operator can be used to check if a particular bit is set or not.

**Example:**

- `5 & 3` = `1`

  - `5` in binary: `101`
  - `3` in binary: `011`

  - `101 & 011` = `001`

#### BITWISE OR

- The bitwise OR operator is a single vertical bar: |.

- The bitwise OR operator compares each bit of the first operand to the corresponding bit of the second operand.

- If either bit is 1, the corresponding result bit is set to 1. Otherwise, the corresponding result bit is set to 0.

**Example:**

- `5 | 3` = `7`

  - `5` in binary: `101`
  - `3` in binary: `011`

  - `101 | 011` = `111`

#### BITWISE XOR

- The bitwise XOR operator is a caret: ^.

- The bitwise XOR operator compares each bit of the first operand to the corresponding bit of the second operand.

- If the bits are different, the corresponding result bit is set to 1. Otherwise, the corresponding result bit is set to 0.

- The bitwise XOR operator is often used to toggle bits.

**Example:**

- `5 ^ 3` = `6`

  - `5` in binary: `101`
  - `3` in binary: `011`

  - `101 ^ 011` = `110`

#### BITWISE NOT

- The bitwise NOT operator is a tilde: ~.

- The bitwise NOT operator inverts each bit of the operand.

- The bitwise NOT operator is often used to toggle all bits.

- flip all bits

- check negative

  if yes: 2's complement of the number

  if no: 1's complement of the number

**Example:**

- `~5` = `-6`

  - `5` in binary: `0...0101`
  - `~5` = `1...1010`

    - 2's complement of `1...1010` = `-6`

- if number is -6

  binary of -6 is 2's complement of 6

  binary of 6 is 110
  2's complement of 6 is 11...001 + 1 = 11...010

  - ~(-6)=

    00...101 fist bit is 0 so it is positive number just store the binary of 6

#### LEFT SHIFT

- The left shift operator shifts the bits of the first operand to the left by the number of positions specified by the second operand.

- The left shift operator is a double less-than sign: <<.

- The left shift operator is often used to multiply a number by a power of 2.

**Example:**

- `5 << 1` = `10` (5 \* 2 = 10)

  - `5` in binary: `101`

  - `101 << 1` = `1010`

  - Decimal equivalent: `1010` = `10`

#### RIGHT SHIFT

- The right shift operator shifts the bits of the first operand to the right by the number of positions specified by the second operand.

- The right shift operator is a double greater-than sign: >>.

- The right shift operator is often used to divide a number by a power of 2.

**Example:**

- `32>> 4` = `2` (32 / 2 ^ 4 = 2)

  - `32` in binary: `100000`

  - `100000 >> 4` = `000010`

  - Decimal equivalent: `000010` = `2`

- every bit is shifting right means every bit will be divided by 2.

#### How negative numbers are stored in memory?

- In C++, negative numbers are stored in memory using the 2's complement representation.

- In the 2's complement representation, the most significant bit (MSB) is used as the sign bit.

- If the sign bit is `0`, the number is positive. If the sign bit is `1`, the number is negative.

- To find the 2's complement of a negative number, you first find the 1's complement (complement of the number) and then add `1` to it.

- largest integer that can be stored in 32 bit signed integer is 2^31 - 1 = 2147483647 and smallest integer that can be stored in 32 bit signed integer is -2^31 = -2147483648.
