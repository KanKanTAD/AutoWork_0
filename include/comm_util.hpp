//
// Created by v_fantnzeng on 2021/1/28.
//

#ifndef AUTOWORK0_COMM_UTIL_HPP
#define AUTOWORK0_COMM_UTIL_HPP
#include <string>
namespace  comm_util {

#ifdef WIN32
const char kSep = '\\';
#else
const char kSep = '/';
#endif


bool semantic_equals(const std::string& a,const std::string& b){

}


}
#endif // AUTOWORK0_COMM_UTIL_HPP
