#ifndef TEMPLATE_JSON_HPP
#define TEMPLATE_JSON_HPP

#include <vector>
#include <string>
#include "Students.hpp"

using namespace std;

class JSON {
 public:
  JSON(string &str)
  ~JSON();


};

#endif  // TEMPLATE_JSON_HPP

class JsonTable {
 public:
  explicit JsonTable(const std::string& s);
  explicit JsonTable(const json& j);
  ~JsonTable();

  void print(std::ostream& out) const;

  static JsonTable parse(const std::string& s);
  static JsonTable parseFile(const std::string& s);

 private:
  std::vector<Student> m_data;
  std::vector<uint32_t> m_maxWidths;
};

std::ostream& operator<<(std::ostream& out, JsonTable table);