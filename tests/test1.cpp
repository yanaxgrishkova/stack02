#include <catch.hpp>

#include "stack.hpp"

TEST_CASE("push", "") {
    stack<int> s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    REQUIRE(s1.count() == 5);
}

TEST_CASE("pop", "") {
    stack<int> s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    s1.pop();
    REQUIRE(s1.count() == 4);
}

TEST_CASE("op = ", "") {
    stack<int> s1(1);
    stack<int> v2 = v1;
	REQUIRE(v2.count() == v1.count());
	REQUIRE(v2.array_size() == v1.array_size());
	REQUIRE(v2[0] == v1[0]);
}
