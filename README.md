# Hexadecimal to Decimal Conversion in C++

This project is a simple C++ program to convert hexadecimal numbers to decimal. The program consists of a class `HexToDec` that handles the conversion and a main file that demonstrates its usage.

## Files

- `HexToDec.h`: Contains the declaration and definition of the `HexToDec` class.
- `main.cpp`: Contains the main function that uses the `HexToDec` class to convert a hexadecimal string to a decimal number.

## How to Use

1. **Clone the Repository**

    ```sh
    git clone https://github.com/possiblyHugo/hex-to-decimal.git
    cd hex-to-decimal
    ```

2. **Compile the Program**

    Use a C++ compiler to compile the code. For example, using `g++`:

    ```sh
    g++ -o hex_to_dec main.cpp
    ```

3. **Modify the Hex String**

    Open `main.cpp` and change the `hex` string value to the desired hexadecimal number you want to convert.

    ```cpp
    int main() {
        std::string hex{ "YOUR_HEX_STRING" };  // Change this value
        HexToDec newConvert(hex);
        int decValue = newConvert.Convert();

        std::cout << decValue << std::endl;

        return 0;
    }
    ```

4. **Run the Program**

    ```sh
    ./hex_to_dec
    ```

    The program will output the decimal value of the hexadecimal string specified in the `main.cpp` file.

## Example

For the hexadecimal string `"5C6"`, the program will output:

```sh
1478
```

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Contributing

Contributions are welcome! Please open an issue or submit a pull request for any changes or improvements.
