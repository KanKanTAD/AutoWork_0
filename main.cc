//
// Created by v_fantnzeng on 2021/1/28.
//

#include "comm_util.hpp"
#include <cassert>
#include <hash_set>
#include <set>
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

std::string tool;
std::string command;
std::string input_file;
std::string out_file;
std::string db_file;

int main(int argc, char *argv[]) {
  assert(argc >= 2);
  tool = argv[1];
  assert(argc >= 3);
  command = argv[2];
  int idx = 3;
  while (true){

  }
  return 0;
}