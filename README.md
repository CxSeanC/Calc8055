# CalcSec8055 🔥📟 (Intentionally Vulnerable C/C++ Calculator)

CalcSec8055 is a deliberately insecure C/C++ calculator application with a GTK-based UI and OpenAPI-documented REST API. It's designed for security testing, SAST/DAST/IAST demos, and educational exploitation practice.

---

## 🧱 Features

- 💻 GTK+ 3 Desktop UI  
- 🌐 REST API (OpenAPI 3.0 / C++ REST SDK)  
- 🕳️ Common C/C++ vulnerabilities:
  - Buffer overflows
  - Off-by-one errors
  - Format string injection
  - Command and string injection
  - Unsafe memory handling  
- 💥 Hardcoded secrets:
  - Realistic-looking API keys, PGP, and RSA private keys  
- 🌍 Network exfiltration using `libcurl`  
- 📦 Dockerized build and run  
- ☁️ Infrastructure-as-Code (Terraform)  
- 🧩 25+ Open Source Libraries (C/C++ only)

---

## 🛠️ Dependencies (Partial List)

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
> Full list declared in `CMakeLists.txt`

---

## 🚀 Usage

### 🔧 Build Locally (Linux)

```bash
mkdir build && cd build
cmake ..
make -j$(nproc)
./vulncalc
