# Calc8055 – Intentionally Vulnerable C/C++ Calculator

**Calc8055** is a deliberately insecure C/C++ calculator application designed to support security testing and demonstration of AppSec tools such as SAST, SCA, IaC, Secrets, and COntainers. It includes both a desktop GUI and an OpenAPI-based REST API, making it ideal for proof-of-value (PoV) exercises, developer training, and secure coding workshops.

## Key Features

- **Desktop User Interface**
  - Built with GTK+ 3 to simulate a native Linux calculator application.

- **REST API (OpenAPI 3.0)**
  - Implemented using the C++ REST SDK (cpprestsdk).
  - Full OpenAPI documentation included for compatibility with tools like Postman, Swagger, and DAST engines.

- **Vulnerability Coverage**
  - Contains a wide range of common C/C++ vulnerabilities, including:
    - Buffer overflows
    - Off-by-one errors
    - Format string injection
    - Command and code injection
    - Insecure memory allocation and deallocation
    - Improper input validation

- **Embedded Secrets**
  - Application includes hardcoded secrets:
    - Simulated API keys
    - RSA private keys
    - PGP private keys

- **Simulated Data Exfiltration**
  - Uses `libcurl` to simulate malicious outbound network activity.

- **Container Support**
  - Includes a Dockerfile for containerized execution and testing.

- **Infrastructure-as-Code**
  - Terraform configuration files are provided to help model real-world cloud deployments and demonstrate IaC scanning capabilities.

- **Third-Party Libraries**
  - More than 25 C/C++ open source libraries are used to create realistic dependency graphs for Software Composition Analysis (SCA) testing.

## Dependencies (Partial List)

The following are core dependencies used in this application:

- `gtk+-3.0`
- `cpprestsdk`
- `libcurl`
- `jansson`
- `libarchive`
- `spdlog`
- `ncurses`
- `boost`
- `openssl`
- `pkg-config`

A complete list of dependencies is declared in the `CMakeLists.txt`.

## Build Instructions (Linux)

```bash
mkdir build && cd build
cmake ..
make -j$(nproc)
./vulncalc
