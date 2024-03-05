# kernel_5.10S
kernel_5.10 For Band-S made by @strongti

## Step 0: Make sure you have installed git and cmake
```bash
sudo apt update
sudo apt install git
sudo apt install cmake
```

## Step 1: Build kernel image ~~~
```bash
cd
git clone https://github.com/AveesLab/kernel_5.10S.git
cd
git clone https://github.com/jetsonhacks/jetson-linux-build.git
cd jetson-linux-build
./makeKernel.sh
./makeModules.sh
./copyImage.sh
```

---
Linux kernel
---

There are several guides for kernel developers and users. These guides can
be rendered in a number of formats, like HTML and PDF. Please read
Documentation/admin-guide/README.rst first.

In order to build the documentation, use ``make htmldocs`` or
``make pdfdocs``.  The formatted documentation can also be read online at:

    https://www.kernel.org/doc/html/latest/

There are various text files in the Documentation/ subdirectory,
several of them using the Restructured Text markup notation.

Please read the Documentation/process/changes.rst file, as it contains the
requirements for building and running the kernel, and information about
the problems which may result by upgrading your kernel.
