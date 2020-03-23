/**
 * writer: yasmin gedanken
 */

#include "doctest.h"
#include "PhoneticFinder.hpp"
using namespace phonetic;

#include <string>
using namespace std;



TEST_CASE("Test replacement of p and b and f") {
    string text = "fun happy";
    CHECK(find(text, "happy") == string("happy"));
    CHECK(find(text, "habby") == string("happy"));
    CHECK(find(text, "hapby") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
    CHECK(find(text, "habfy") == string("happy"));
    CHECK(find(text, "hafpy") == string("happy"));
    CHECK(find(text, "haFFy") == string("happy"));
    CHECK(find(text, "haFpy") == string("happy"));
    CHECK(find(text, "haFby") == string("happy"));
    CHECK(find(text, "habFy") == string("happy"));
    CHECK(find(text, "fun") == string("fun"));
    CHECK(find(text, "bun") == string("fun"));
    CHECK(find(text, "pun") == string("fun"));
    CHECK(find(text, "Pun") == string("fun"));
    CHECK(find(text, "Fun") == string("fun"));
    CHECK(find(text, "Bun") == string("fun"));
}

TEST_CASE("Test replacement of lower-case and upper-case") {
    string text = "Happi xxx yyy";
    CHECK(find(text, "happi") == string("Happi"));
    CHECK(find(text, "Happi") == string("Happi"));
    CHECK(find(text, "HAPPI") == string("Happi"));
    CHECK(find(text, "HaPpI") == string("Happi"));
    CHECK(find(text, "HAPpI") == string("Happi"));
    CHECK(find(text, "haPpi") == string("Happi"));
    CHECK(find(text, "xxX") == string("xxx"));
    CHECK(find(text, "xXX") == string("xxx"));
    CHECK(find(text, "XXX") == string("xxx"));
    CHECK(find(text, "yYy") == string("yyy"));
    CHECK(find(text, "YYy") == string("yyy"));
   
}

TEST_CASE("Test replacement of v and w") {
     string text = "love the world";
      CHECK(find(text, "lowe") == string("love"));
      CHECK(find(text, "love") == string("love"));
      CHECK(find(text, "vorld") == string("world"));
      CHECK(find(text, "loWe") == string("love"));
      CHECK(find(text, "loVe") == string("love"));
      CHECK(find(text, "Vorld") == string("world"));
      CHECK(find(text, "World") == string("world"));
      CHECK(find(text, "world") == string("world"));
}
TEST_CASE("Test replacement of c and k and q") {
     string text = "cat monkey quala";
     CHECK(find(text, "cat") == string("cat"));
    CHECK(find(text, "Cat") == string("cat"));
    CHECK(find(text, "kat") == string("cat"));
    CHECK(find(text, "Kat") == string("cat"));
    CHECK(find(text, "qat") == string("cat"));
    CHECK(find(text, "Qat") == string("cat"));
    CHECK(find(text, "cat") == string("cat"));
    CHECK(find(text, "monkey") == string("monkey"));
    CHECK(find(text, "monKey") == string("monkey"));
    CHECK(find(text, "moncey") == string("monkey"));
    CHECK(find(text, "monCey") == string("monkey"));
    CHECK(find(text, "monqey") == string("monkey"));
    CHECK(find(text, "monQey") == string("monkey"));
    CHECK(find(text, "quala") == string("quala"));
    CHECK(find(text, "Quala") == string("quala"));
    CHECK(find(text, "cuala") == string("quala"));
    CHECK(find(text, "Cuala") == string("quala"));
    CHECK(find(text, "Kuala") == string("quala"));
    CHECK(find(text, "kuala") == string("quala"));
}
TEST_CASE("Test replacement of d and t") {
     string text = "day date";
     CHECK(find(text, "day") == string("day"));
     CHECK(find(text, "Day") == string("day"));
     CHECK(find(text, "tay") == string("day"));
     CHECK(find(text, "Tay") == string("day"));
     CHECK(find(text, "date") == string("date"));
     CHECK(find(text, "dade") == string("date"));
     CHECK(find(text, "tate") == string("date"));
     CHECK(find(text, "Date") == string("date"));
     CHECK(find(text, "Tate") == string("date"));
     CHECK(find(text, "daDe") == string("date"));
     CHECK(find(text, "TaTe") == string("date"));
     CHECK(find(text, "DaDe") == string("date"));
     CHECK(find(text, "taDe") == string("date"));
}
TEST_CASE("Test replacement of o and u") {
     string text = "love you";
     CHECK(find(text, "love") == string("love"));
     CHECK(find(text, "lOve") == string("love"));
     CHECK(find(text, "luve") == string("love"));
     CHECK(find(text, "lUve") == string("love"));
     CHECK(find(text, "you") == string("you"));
     CHECK(find(text, "yOu") == string("you"));
     CHECK(find(text, "yuu") == string("you"));
     CHECK(find(text, "yUu") == string("you"));
     CHECK(find(text, "yoo") == string("you"));
     CHECK(find(text, "yoO") == string("you"));
     CHECK(find(text, "yUU") == string("you"));
     CHECK(find(text, "yOO") == string("you"));
     CHECK(find(text, "yuU") == string("you"));
     CHECK(find(text, "yOU") == string("you"));
}
TEST_CASE("Test replacement of i and y") {
     string text = "yasmin";
     CHECK(find(text, "yasmin") == string("yasmin"));
     CHECK(find(text, "Yasmin") == string("yasmin"));
     CHECK(find(text, "iasmin") == string("yasmin"));
     CHECK(find(text, "Iasmin") == string("yasmin"));
     CHECK(find(text, "yasmIn") == string("yasmin"));
     CHECK(find(text, "yasmyn") == string("yasmin"));
     CHECK(find(text, "yasmYn") == string("yasmin"));
     CHECK(find(text, "YasmYn") == string("yasmin"));
     CHECK(find(text, "YasmIn") == string("yasmin"));
    CHECK(find(text, "IasmYn") == string("yasmin"));
    CHECK(find(text, "iasmyn") == string("yasmin"));
}
TEST_CASE("Test replacement of z and s") {
     string text = "sss";
     CHECK(find(text, "sss") == string("sss"));
     CHECK(find(text, "sSs") == string("sss"));
     CHECK(find(text, "SsS") == string("sss"));
     CHECK(find(text, "zsz") == string("sss"));
CHECK(find(text, "zSZ") == string("sss"));
CHECK(find(text, "szz") == string("sss"));
CHECK(find(text, "zzz") == string("sss"));
CHECK(find(text, "SzS") == string("sss"));
CHECK(find(text, "ZsS") == string("sss"));
CHECK(find(text, "SZS") == string("sss"));
}


