//
// Created by v_fantnzeng on 2021/1/28.
//

#ifndef AUTOWORK0_COMM_UTIL_HPP
#define AUTOWORK0_COMM_UTIL_HPP
#include <list>
#include <set>
#include <string>
#include <vector>

#include <boost/algorithm/string.hpp>

namespace comm_util {

#ifdef WIN32
const char kSep = '\\';
#else
const char kSep = '/';
#endif

std::string strip(const std::string &s) {
  std::string res = s;
  boost::trim(res);
  return res;
}

void split() { ; }

template <typename Seq>
std::string join(const Seq &seq, const std::string &s = "; ") {
  auto &&res = boost::join(seq, s);
  return res;
}

bool semantic_equals(const std::string &a, const std::string &b) {
  return strip(a) == strip(b);
}

} // namespace comm_util
#endif // AUTOWORK0_COMM_UTIL_HPP
