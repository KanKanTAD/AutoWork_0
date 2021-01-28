//
// Created by v_fantnzeng on 2021/1/28.
//

#include "comm_util.hpp"
#include <cassert>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
/*
 *
 * auto_work bad_lib genreport -o xl_db.xlsx -d xl_db.xlsx
 */

/***
 *
 *
 * @param argc
 * @param args
 * @return
 */
struct Argument {
  std::string tool;
  std::string command;
  std::vector<std::string> input_file;
  std::string out_file;
  std::string db_file;

  std::string str_;
  std::string &str() {
    std::stringstream ss;
    ss << "tool:" << tool << std::endl;
    ss << "command:" << command << std::endl;
    ss << "out_file:" << out_file << std::endl;
    ss << "db_file:" << db_file << std::endl;
    ss << "input_files:" << comm_util::join(input_file) << std::endl;
    str_ = ss.str();
    return str_;
  }
};

void parse_args(int argc, char *argv[], Argument &arg) {
  assert(argc >= 2);
  arg.tool = argv[1];
  assert(argc >= 3);
  arg.command = argv[2];
  for (int ix = 3; ix < argc;) {
    if (comm_util::semantic_equals("-o", argv[ix])) {
      ix++;
      assert(ix < argc);
      arg.out_file = argv[ix];
      ix++;
      continue;
    }
    if (comm_util::semantic_equals("-d", argv[ix])) {
      ix++;
      assert(ix < argc);
      arg.db_file = argv[ix];
      ix++;
      continue;
    }
    arg.input_file.push_back(argv[ix]);
    ix++;
  }
}
int main(int argc, char *argv[]) {
  Argument arg;
  parse_args(argc, argv, arg);
  std::cout << arg.str() << std::endl;
  return 0;
}