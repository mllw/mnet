cmake_minimum_required(VERSION 3.18)
project(mnet)

find_package(unofficial-libuv CONFIG REQUIRED)
find_package(OpenSSL REQUIRED)

include(FetchContent)

FetchContent_Declare(llhttp
  URL "https://github.com/nodejs/llhttp/archive/refs/tags/release/v6.0.6.tar.gz")  # Using version 6.0.6

FetchContent_MakeAvailable(llhttp)



add_library(${PROJECT_NAME} 
    STATIC
    m_string.c
    m_ssl.c

    m_ssl_openssl.c

    m_conn.c
    m_http.c
)

target_link_libraries(
    ${PROJECT_NAME} 
    PRIVATE
    PRIVATE unofficial::libuv::libuv
    llhttp
    OpenSSL::SSL OpenSSL::Crypto
)


add_executable(
  http_test
  test/test.c
)

target_link_libraries(
  http_test
  PRIVATE
  mnet
)
