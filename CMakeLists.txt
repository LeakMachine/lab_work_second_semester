cmake_minimum_required(VERSION 3.6 FATAL_ERROR)


project(LabWorkSecondSemester_Coop_2023)


include(cmake/function.cmake)    
                                 
								 

add_subdirectory(lib_datastructure)
add_subdirectory(lib_stack)
add_subdirectory(lib_queue)
add_subdirectory(lib_list)
add_subdirectory(lib_lsq)
add_subdirectory(lib_polynomial)
add_subdirectory(main)
add_subdirectory(CppCLR_WinFormsProject1)           

option(BTEST "build test?" ON)   

if(BTEST)                        
    add_subdirectory(gtest)      
    add_subdirectory(tests)      
endif()
