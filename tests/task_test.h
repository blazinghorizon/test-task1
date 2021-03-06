#ifndef TASKTEST_H
#define TASKTEST_H

#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

extern "C" {
#include "task.h"
}

TEST(task, no_roots)
{
    double x1;
    double x2;
    ASSERT_EQ(task(2, 3, 4, &x1, &x2), 0);
}

TEST(task, one_root)
{
    double x1;
    double x2;
    ASSERT_EQ(task(1, 2, 1, &x1, &x2), 1);
    ASSERT_EQ(x1, -1);
}

TEST(task, two_roots)
{
    double x1;
    double x2;
    ASSERT_EQ(task(1, -3, -4, &x1, &x2), 2);
    ASSERT_EQ(x1, 4);
    ASSERT_EQ(x2, -1);
}

TEST(task, zero_a)
{
    double x1;
    double x2;
    ASSERT_EQ(task(0, 1, 3, &x1, &x2), 1);
    ASSERT_EQ(x1, -3);

}

TEST(task, zero_all)
{
    double x1;
    double x2;
    ASSERT_EQ(task(0, 0, 0, &x1, &x2), -1);
}

TEST(task, b_zero)
{
    double x1;
    double x2;
    ASSERT_EQ(task(1, 0, -1, &x1, &x2), 2);
    ASSERT_EQ(x1, 1);
    ASSERT_EQ(x2, -1);
}

TEST(task, c_zero)
{
    double x1;
    double x2;
    ASSERT_EQ(task(1, 2, 0, &x1, &x2), 2);
    ASSERT_EQ(x1, 0);
    ASSERT_EQ(x2, -2);
}

TEST(task, b_c_zero)
{
    double x1;
    double x2;
    ASSERT_EQ(task(6, 0, 0, &x1, &x2), 1);
    ASSERT_EQ(x1, 0);
}

#endif
