cmake_minimum_required(VERSION 3.26)
project(CPP_Programs)

set(CMAKE_CXX_STANDARD 17)

add_executable(IO 01_Input_Output/input_ouput.cpp)
add_executable(DATATYPES 02_DataTypes/datatypes.cpp)
add_executable(IFELSE 03_If_Else/ifelse_app.cpp)
add_executable(RETURNABLE 04_Functions/returnable.cpp)
add_executable(NON_RETURNABLE 04_Functions/non_returnable.cpp)
add_executable(PATTERNS 05_Patterns/pattern_1.cpp
        05_Patterns/pattern_2.cpp
        05_Patterns/pattern_3.cpp
        05_Patterns/pattern_4.cpp
        05_Patterns/pattern_5.cpp
        05_Patterns/pattern_6.cpp
        05_Patterns/pattern_7.cpp
        05_Patterns/pattern_8.cpp
        05_Patterns/pattern_9.cpp
        05_Patterns/pattern_10.cpp
        05_Patterns/pattern_11.cpp
        05_Patterns/pattern_12.cpp
        05_Patterns/pattern_13.cpp
        05_Patterns/pattern_14.cpp
        05_Patterns/pattern_15.cpp
        05_Patterns/pattern_16.cpp
        05_Patterns/pattern_17.cpp
        05_Patterns/pattern_18.cpp
        05_Patterns/pattern_19.cpp
        05_Patterns/pattern_20.cpp
        05_Patterns/pattern_21.cpp
        05_Patterns/pattern_22.cpp
)
add_executable(STL 06_CPP-STL/pairs.cpp
        06_CPP-STL/vectors.cpp
        06_CPP-STL/lists.cpp
        06_CPP-STL/dques.cpp
        06_CPP-STL/stacks.cpp
        06_CPP-STL/queues.cpp
        06_CPP-STL/priority_queues.cpp
        06_CPP-STL/set.cpp
        06_CPP-STL/multi_set.cpp
        06_CPP-STL/unordered_set.cpp
        06_CPP-STL/map.cpp)
