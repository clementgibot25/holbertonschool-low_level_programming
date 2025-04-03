# Bit Manipulation in C

Bit manipulation is the act of algorithmically manipulating bits within an integer. In C, bitwise operations allow efficient processing of data at the bit level, which is useful in performance-critical applications like cryptography, networking, and embedded systems.

## Bitwise Operators in C
C provides several operators to manipulate individual bits:

| Operator | Symbol | Description |
|----------|--------|-------------|
| AND      | `&`    | Performs a bitwise AND operation |
| OR       | `|`    | Performs a bitwise OR operation |
| XOR      | `^`    | Performs a bitwise XOR operation |
| NOT      | `~`    | Performs a bitwise NOT (complement) operation |
| Left Shift  | `<<`  | Shifts bits to the left, filling with zeros |
| Right Shift | `>>`  | Shifts bits to the right, filling with sign bit (for signed) or zero (for unsigned) |

## Common Bit Manipulation Techniques

### 1. Checking if a Bit is Set
```c
int isBitSet(int num, int pos) {
    return (num & (1 << pos)) != 0;
}
```

### 2. Setting a Bit
```c
int setBit(int num, int pos) {
    return num | (1 << pos);
}
```

### 3. Clearing a Bit
```c
int clearBit(int num, int pos) {
    return num & ~(1 << pos);
}
```

### 4. Toggling a Bit
```c
int toggleBit(int num, int pos) {
    return num ^ (1 << pos);
}
```

### 5. Counting the Number of Set Bits (Hamming Weight)
```c
int countSetBits(int num) {
    int count = 0;
    while (num) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}
```

### 6. Checking if a Number is a Power of Two
```c
int isPowerOfTwo(int num) {
    return num > 0 && (num & (num - 1)) == 0;
}
```

## Applications of Bit Manipulation
- **Optimized memory usage**: Used in data compression techniques.
- **Fast mathematical computations**: Multiplication and division by powers of 2.
- **Cryptography**: Used in encryption and hashing algorithms.
- **Low-level hardware control**: Used in embedded systems, device drivers.

## Conclusion
Bit manipulation in C is a powerful technique that enables efficient computation at the binary level. Mastering these operations is crucial for writing high-performance and optimized code.

Happy coding! 🚀
