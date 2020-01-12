# gtest-example

## step 1

使用命令：

```bash
git submodule add -m master https://github.com/google/googletest.git
```

将 `googletest` 添加作为项目的一个子模块。

## step2

在项目的 `CMakeLists` 添加一个 `add_subdirectory` 指令来编译 `googletest`：

```cmake
# 注意：在使用 VC++ 时，系统默认链接 `/MDd`，而 `gtest` 默认链接的是 `/MTd`，为了能正常编译，强制 `gtest` 链接 `MDd`。
if (MSVC)
    set(gtest_force_shared_crt ON CACHE BOOL "Build As shared lirary" FORCE)
endif()
add_subdirectory(googletest)
```

## step3

创建一个测试用例程序，并在其中使用 `gtest`：

```cpp
#include <gtest/gtest.h>

TEST(example, equal) {
    ASSERT_EQ(1, 0);
    ASSERT_EQ(1, 1);
}

int main(int argc, const char* argv[]) {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}
```
