set(core_SRCS ComplexNumber.c)
add_library(core STATIC ${core_SRCS})
add_executable(exe main.c)
target_link_libraries(exe core)