#include <Python.h>
#include <stdio.h>

void print_python_bytes(PyObject *p) {
    printf("[.] bytes object info\n");

    if (!PyBytes_Check(p)) {
        printf("  [ERROR] Invalid Bytes Object\n");
        return;
    }

    Py_ssize_t size = PyBytes_Size(p);
    unsigned char *bytes_data = (unsigned char *)PyBytes_AsString(p);

    printf("  size: %ld\n", size);
    printf("  first %ld bytes: ", size > 10 ? 10 : size);

    for (Py_ssize_t i = 0; i < (size > 10 ? 10 : size); ++i) {
        printf("%02x ", bytes_data[i]);
    }

    printf("\n");
}

void print_python_list(PyObject *p) {
    printf("[*] Python list info\n");

    if (!PyList_Check(p)) {
        printf("[ERROR] Invalid Python list object\n");
        return;
    }

    Py_ssize_t size = PyList_Size(p);
    printf("[*] Size of the Python List = %ld\n", size);

    PyObject *item;
    for (Py_ssize_t i = 0; i < size; ++i) {
        item = PyList_GetItem(p, i);
        printf("Element %ld: %s\n", i, Py_TYPE(item)->tp_name);

        if (PyBytes_Check(item)) {
            print_python_bytes(item);
        }
    }
}
