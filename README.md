# 🧱 CMake Learning Roadmap

Lộ trình cá nhân học **CMake** để quản lý và build dự án C/C++ một cách chuyên nghiệp.  
Mục tiêu: Tự tin tạo, quản lý, và build các project C++ đa nền tảng bằng CMake.

---

## 🎯 Mục tiêu học tập

- Hiểu **cách hoạt động** của CMake và các file `CMakeLists.txt`
- Biết cách **tổ chức dự án** C++ hiện đại (đa file, đa module)
- Biết cách **liên kết thư viện** ngoài (GLFW, GLAD, GLM, fmt, spdlog, v.v.)
- Sử dụng **CMake trên cả Ubuntu và Windows**
- Biết cách **xuất project sang IDE** (VS Code, CLion, Visual Studio)
- Chuẩn bị cho các project **OpenGL / Game / Engine / Toolchain**

---

## 📂 Cấu trúc thư mục dự kiến


| Bài học | Chủ đề | Trạng thái |
|----------|---------|------------|
| **Lesson 1** | Hello CMake, build 1 file | ✅ Hoàn thành |
| **Lesson 2** | Tách source, tạo static library | 🔜 Đang học |
| **Lesson 3** | Setup OpenGL (GLFW + GLAD + GLM) | ⏳ Chưa bắt đầu |
| **Lesson 4** | FetchContent & External Libraries | ⏳ Chưa bắt đầu |
| **Lesson 5** | Install & Export Targets | ⏳ Chưa bắt đầu |
| **Lesson 6** | Cross-platform (Windows + Linux) | ⏳ Chưa bắt đầu |

---

## 🪜 Roadmap chi tiết

### 🧩 **Lesson 1 – Basic CMake**
- Viết `CMakeLists.txt` cơ bản
- Build chương trình `main.cpp`
- Dùng `cmake` + `make` để biên dịch
- ✅ Output: file thực thi `main`

---

### 🧱 **Lesson 2 – Project structure**
- Tách code thành nhiều file `.cpp` và `.h`
- Dùng `add_library()` và `target_link_libraries()`
- Hiểu `target_include_directories()`
- ✅ Output: chạy project từ nhiều source file

---

### 🌄 **Lesson 3 – OpenGL setup**
- Cài và liên kết **GLFW**, **GLAD**, **GLM**
- Thiết lập CMake để tự động tìm hoặc fetch các thư viện
- ✅ Output: hiển thị cửa sổ OpenGL trống

---

### 📦 **Lesson 4 – External dependencies**
- Học `FetchContent` và `find_package()`
- Tích hợp thư viện ngoài như `spdlog`, `fmt`
- ✅ Output: log và format đẹp bằng spdlog + fmt

---

### ⚙️ **Lesson 5 – Installation & Packaging**
- Tìm hiểu `install()`, `export()`, và `CMakePackageConfigHelpers`
- ✅ Output: build ra thư viện có thể cài (`.so` / `.a` / `.dll`)

---

### 💻 **Lesson 6 – Cross-platform build**
- Thử build trên Windows (MSVC) và Linux (gcc/clang)
- Dùng `if(WIN32)` / `if(UNIX)` trong CMakeLists.txt
- ✅ Output: project chạy được cả 2 hệ điều hành

---

## 🧰 Công cụ sử dụng

| Công cụ | Mục đích |
|----------|-----------|
| **CMake ≥ 3.20** | Hệ thống build chính |
| **g++ / clang++** | Trình biên dịch C++ |
| **VS Code / CLion** | IDE |
| **GLFW, GLAD, GLM** | OpenGL libraries |
| **spdlog, fmt** | Logging & formatting |

---

## 💡 Tips

- Luôn tạo **thư mục `build/` riêng** khi build:
  ```bash
  mkdir build && cd build
  cmake ..
  make
  ./lesson1/main
