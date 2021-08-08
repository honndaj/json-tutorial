project (leptjson_test C)

# add_library(leptjson leptjson.c)
add_executable(leptjson_test test.c leptjson.c)
# target_link_libraries(leptjson_test leptjson)
