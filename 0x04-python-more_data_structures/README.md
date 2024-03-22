Python C Extension: print_python_bytes and print_python_list
Overview
This Python C extension provides two functions, print_python_bytes and print_python_list, designed to print basic information about Python bytes objects and lists, respectively. These functions can be useful for debugging and analyzing Python objects within C code.

Functionality
print_python_bytes
This function prints information about Python bytes objects, including their size and the first few bytes.
It checks if the provided object is a valid Python bytes object and prints an error message if not.
print_python_list
This function prints information about Python lists, including their size and the types of elements they contain.
If a bytes object is found within the list, it calls print_python_bytes to print additional information about it.
It also checks if the provided object is a valid Python list object and prints an error message if not.
Usage
To use these functions, include the provided header file (print_python.h) and link against the shared library containing the implementation. Then, call the functions with the appropriate Python objects to print their information.

Example usage:

c
Copy code
#include <Python.h>
#include "print_python.h"

int main() {
    // Create a Python bytes object
    PyObject *bytes_obj = PyBytes_FromStringAndSize("Hello, world!", 13);

    // Print information about the bytes object
    print_python_bytes(bytes_obj);

    // Create a Python list containing various objects
    PyObject *list_obj = PyList_New(3);
    PyList_SetItem(list_obj, 0, PyLong_FromLong(42));
    PyList_SetItem(list_obj, 1, PyUnicode_FromString("Python"));
    PyList_SetItem(list_obj, 2, bytes_obj);

    // Print information about the list
    print_python_list(list_obj);

    // Clean up
    Py_DECREF(bytes_obj);
    Py_DECREF(list_obj);

    return 0;
}
Requirements
Python version: 3.4
Compilation: Use the provided compilation command to compile the shared library containing the C extension.
Limitations
These functions are specifically designed for Python version 3.4.
They provide basic information and may not cover all possible scenarios or edge cases.
Conclusion
The print_python_bytes and print_python_list functions offer a convenient way to inspect Python bytes objects and lists within C code. They provide essential information for debugging and analysis purposes, enhancing the interoperability between Python and C.
