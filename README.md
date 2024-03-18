# Band-S
Band-S introduces a hidden transmit queue for Ethernet-based automotive networks to protect safety-critical data flows from cram attacks by unauthorized applications. By leveraging a trusted execution environment, Band-S ensures that only authorized applications can utilize this secure pathway, preventing the disruption of critical communications within vehicles. The implementation of Band-S maintains the integrity and security of essential vehicular functions, offering a resilient response to emerging cybersecurity threats in automotive Ethernet networks.

**None**
![image - 2024-03-18T143418 495](https://github.com/AveesLab/sea-me-hackathon-2023/assets/96398568/ecf120d5-66ba-4a16-8fd1-1d07e38f6690)

**Band-S**
![image - 2024-03-18T144521 426](https://github.com/AveesLab/sea-me-hackathon-2023/assets/96398568/909cf771-f3a1-40eb-9133-d07a1774a11f)

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
cd ~
git clone https://github.com/AveesLab/kernel_5.10S.git
cd ~
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
