
# 🖨️ ft_printf | 42 School Project

### Because standard `printf` is too mainstream 😉

![42 School Badge](https://img.shields.io/badge/42-School-blue)
![Norminette](https://img.shields.io/badge/Norminette-passing-success)
![Score](https://img.shields.io/badge/Score-100%2F100-brightgreen)

> *"Why use standard printf when you can recreate the entire functionality from scratch?"* - Every 1337/42 Student Do 😄

## 🎯 Project Overview

Welcome to my implementation of `ft_printf` - a custom printf function that replicates the behavior of the standard C library's `printf()`. This project is all about diving deep into variadic functions, type handling, and the intricate world of formatted output.

### 🌟 Key Features

- **Full Printf Functionality**: Supports multiple format specifiers
- **Robust Error Handling**: Carefully managed edge cases
- **Recursive Implementation**: Elegant and memory-efficient approach
- **Extensible Design**: Easy to understand and modify
- **No Standard Library Shortcuts**: Pure C implementation

## 📋 Supported Format Specifiers

| Specifier | Description | Example |
|-----------|-------------|---------|
| `%c` | Single character | `ft_printf("%c", 'A')` |
| `%s` | String | `ft_printf("%s", "Hello")` |
| `%d` | Signed decimal integer | `ft_printf("%d", 1337)` |
| `%i` | Signed decimal integer | `ft_printf("%i", -17)` |
| `%u` | Unsigned decimal integer | `ft_printf("%u", 100)` |
| `%x` | Lowercase hexadecimal | `ft_printf("%x", 255)` |
| `%X` | Uppercase hexadecimal | `ft_printf("%X", 255)` |
| `%p` | Pointer address | `ft_printf("%p", &var)` |
| `%%` | Percent sign | `ft_printf("%%")` |

## 🚀 Getting Started

### Prerequisites
- Variadic Function
- GCC compiler
- Make

### Installation

1. Clone the repository:

```bash
git clone https://github.com/yomazini/42cursus-ft_printf.git
```

1. Navigate to the project directory:
```bash
cd 42cursus-ft_printf
```

1. Compile the library:
```bash
# Compile the library
make

# Clean object files
make clean

# Clean everything
make fclean

# Recompile
make re

# Test
make test

```

## 💡 Implementation Details

### 🔍 Core Components

- **Main Function**: [ft_printf](ft_printf.c) - The entry point that handles format string parsing
- **Format Handler**: [ft_format_pf](ft_printf.c) - Dispatches to specific type handlers
- **Type-Specific Handlers**:   
   - [ft_putchar_pf](ft_putchar_pf.c): Character output   
   - [ft_putstr_pf](ft_putstr_pf.c): String output   
   - [ft_putnbr_pf](ft_putnbr_pf.c): Integer output   
   - [ft_puthex_pf](ft_puthex_pf.c): Hexadecimal output   
   - [ft_putunbr_pf](ft_putunbr_pf.c): Unsigned integer output   
   - [ft_putadr_pf](ft_putadr_pf.c): Pointer address output

### 🧠 Key Concepts Demonstrated

- Variadic function handling with `<stdarg.h>`
- Recursive printing techniques
- Dynamic type conversion
- Error management
- Memory-efficient character-by-character output

## 🔬 Interesting Challenges

- Handling integer edge cases (e.g., INT_MIN)
- Implementing hexadecimal conversion
- Managing pointer address printing
- Efficient recursive algorithms
- Robust error handling

## 📝 Usage Example

```c
#include "ft_printf.h"

int main(void) {
    int num = 42;
    char *str = "Hello, 42!";
    
    ft_printf("Character: %c\n", 'A');
    ft_printf("String: %s\n", str);
    ft_printf("Decimal: %d\n", num);
    ft_printf("Hex (lowercase): %x\n", num);
    ft_printf("Hex (uppercase): %X\n", num);
    ft_printf("Pointer: %p\n", (void*)&num);
    
    return (0);
}
```

## 🧪 Testing

Recommended testing tools:
- Custom test cases (Go Crazy 😉)
- [printf-tester](https://github.com/Tripouille/printfTester)

## 💻 Compilation

To use in your project:

```bash
# with main.c File
make test
```

## 🌈 Best Practices Demonstrated

- Modular design
- Extensive error checking
- Memory safety
- Efficient algorithms
- Clear, readable code

## 🏆 Performance Considerations

- Minimal memory allocation
- Recursive algorithms with O(log n) complexity
- No unnecessary buffer usage

## 📚 What I Learned

- Advanced C programming techniques
- Variadic function implementation
- Deep understanding of type conversion
- System-level output handling

## 🤝 Contribution

Feel free to:
- Open issues
- Submit pull requests
- Provide feedback

## 🎭 Author

Made with ☕️ and ☕️☕️☕️ by Youssef Mazini (ymazini)
- 42 Intra: [ymazini](https://profile.intra.42.fr/users/ymazini)
- GitHub: [yomazini](https://github.com/yomazini)

---

> *"In printf we trust, one character at a time!"* 😄