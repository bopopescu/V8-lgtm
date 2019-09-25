// Copyright 2011 Google Inc. All Rights Reserved.

// This file was generated from .js source files by GYP.  If you
// want to make changes to this file you should either change the
// javascript source files or the GYP script.

#include "src/init/v8.h"
#include "src/snapshot/natives.h"
#include "src/utils/utils.h"

namespace v8 {
namespace internal {

  static const char sources[] = { 10, 40, 102, 117, 110, 99, 116, 105, 111, 110, 32, 40, 103, 108, 111, 98, 97,
108, 44, 32, 98, 105, 110, 100, 105, 110, 103, 44, 32, 118, 56, 41, 32, 123, 10,
39, 117, 115, 101, 32, 115, 116, 114, 105, 99, 116, 39, 59, 10, 98, 105, 110,
100, 105, 110, 103, 46, 116, 101, 115, 116, 69, 120, 116, 114, 97, 83, 104, 111,
117, 108, 100, 82, 101, 116, 117, 114, 110, 70, 105, 118, 101, 32, 61, 32, 102,
117, 110, 99, 116, 105, 111, 110, 40, 41, 32, 123, 10, 114, 101, 116, 117, 114,
110, 32, 53, 59, 10, 125, 59, 10, 98, 105, 110, 100, 105, 110, 103, 46, 116,
101, 115, 116, 69, 120, 116, 114, 97, 83, 104, 111, 117, 108, 100, 67, 97, 108,
108, 84, 111, 82, 117, 110, 116, 105, 109, 101, 32, 61, 32, 102, 117, 110, 99,
116, 105, 111, 110, 40, 41, 32, 123, 10, 114, 101, 116, 117, 114, 110, 32, 98,
105, 110, 100, 105, 110, 103, 46, 114, 117, 110, 116, 105, 109, 101, 40, 51, 41,
59, 10, 125, 59, 10, 98, 105, 110, 100, 105, 110, 103, 46, 116, 101, 115, 116,
70, 117, 110, 99, 116, 105, 111, 110, 84, 111, 83, 116, 114, 105, 110, 103, 32,
61, 32, 102, 117, 110, 99, 116, 105, 111, 110, 40, 41, 32, 123, 10, 102, 117,
110, 99, 116, 105, 111, 110, 32, 102, 111, 111, 40, 41, 32, 123, 32, 114, 101,
116, 117, 114, 110, 32, 49, 59, 32, 125, 10, 114, 101, 116, 117, 114, 110, 32,
102, 111, 111, 46, 116, 111, 83, 116, 114, 105, 110, 103, 40, 41, 59, 10, 125,
59, 10, 98, 105, 110, 100, 105, 110, 103, 46, 116, 101, 115, 116, 83, 116, 97,
99, 107, 84, 114, 97, 99, 101, 32, 61, 32, 102, 117, 110, 99, 116, 105, 111,
110, 40, 102, 41, 32, 123, 10, 114, 101, 116, 117, 114, 110, 32, 102, 40, 41,
59, 10, 125, 10, 99, 111, 110, 115, 116, 32, 79, 98, 106, 101, 99, 116, 32, 61,
32, 103, 108, 111, 98, 97, 108, 46, 79, 98, 106, 101, 99, 116, 59, 10, 99, 111,
110, 115, 116, 32, 104, 97, 115, 79, 119, 110, 32, 61, 32, 118, 56, 46, 117,
110, 99, 117, 114, 114, 121, 84, 104, 105, 115, 40, 79, 98, 106, 101, 99, 116,
46, 112, 114, 111, 116, 111, 116, 121, 112, 101, 46, 104, 97, 115, 79, 119, 110,
80, 114, 111, 112, 101, 114, 116, 121, 41, 59, 10, 99, 111, 110, 115, 116, 32,
70, 117, 110, 99, 116, 105, 111, 110, 32, 61, 32, 103, 108, 111, 98, 97, 108,
46, 70, 117, 110, 99, 116, 105, 111, 110, 59, 10, 99, 111, 110, 115, 116, 32,
99, 97, 108, 108, 32, 61, 32, 118, 56, 46, 117, 110, 99, 117, 114, 114, 121, 84,
104, 105, 115, 40, 70, 117, 110, 99, 116, 105, 111, 110, 46, 112, 114, 111, 116,
111, 116, 121, 112, 101, 46, 99, 97, 108, 108, 41, 59, 10, 99, 111, 110, 115,
116, 32, 97, 112, 112, 108, 121, 32, 61, 32, 118, 56, 46, 117, 110, 99, 117,
114, 114, 121, 84, 104, 105, 115, 40, 70, 117, 110, 99, 116, 105, 111, 110, 46,
112, 114, 111, 116, 111, 116, 121, 112, 101, 46, 97, 112, 112, 108, 121, 41, 59,
10, 99, 111, 110, 115, 116, 32, 80, 114, 111, 109, 105, 115, 101, 32, 61, 32,
103, 108, 111, 98, 97, 108, 46, 80, 114, 111, 109, 105, 115, 101, 59, 10, 99,
111, 110, 115, 116, 32, 80, 114, 111, 109, 105, 115, 101, 95, 114, 101, 115,
111, 108, 118, 101, 32, 61, 32, 80, 114, 111, 109, 105, 115, 101, 46, 114, 101,
115, 111, 108, 118, 101, 46, 98, 105, 110, 100, 40, 80, 114, 111, 109, 105, 115,
101, 41, 59, 10, 99, 111, 110, 115, 116, 32, 97, 114, 114, 97, 121, 84, 111, 84,
101, 115, 116, 32, 61, 32, 110, 101, 119, 32, 118, 56, 46, 73, 110, 116, 101,
114, 110, 97, 108, 80, 97, 99, 107, 101, 100, 65, 114, 114, 97, 121, 40, 41, 59,
10, 97, 114, 114, 97, 121, 84, 111, 84, 101, 115, 116, 46, 112, 117, 115, 104,
40, 49, 41, 59, 10, 97, 114, 114, 97, 121, 84, 111, 84, 101, 115, 116, 46, 112,
117, 115, 104, 40, 50, 41, 59, 10, 97, 114, 114, 97, 121, 84, 111, 84, 101, 115,
116, 46, 112, 111, 112, 40, 41, 59, 10, 97, 114, 114, 97, 121, 84, 111, 84, 101,
115, 116, 46, 117, 110, 115, 104, 105, 102, 116, 40, 34, 97, 34, 44, 32, 34, 98,
34, 44, 32, 34, 99, 34, 41, 59, 10, 97, 114, 114, 97, 121, 84, 111, 84, 101,
115, 116, 46, 115, 104, 105, 102, 116, 40, 41, 59, 10, 97, 114, 114, 97, 121,
84, 111, 84, 101, 115, 116, 46, 115, 112, 108, 105, 99, 101, 40, 48, 44, 32, 49,
41, 59, 10, 99, 111, 110, 115, 116, 32, 115, 108, 105, 99, 101, 100, 65, 114,
114, 97, 121, 32, 61, 32, 97, 114, 114, 97, 121, 84, 111, 84, 101, 115, 116, 46,
115, 108, 105, 99, 101, 40, 41, 59, 10, 99, 111, 110, 115, 116, 32, 97, 114,
114, 97, 121, 115, 79, 75, 32, 61, 32, 97, 114, 114, 97, 121, 84, 111, 84, 101,
115, 116, 46, 108, 101, 110, 103, 116, 104, 32, 61, 61, 61, 32, 50, 32, 38, 38,
32, 97, 114, 114, 97, 121, 84, 111, 84, 101, 115, 116, 91, 48, 93, 32, 61, 61,
61, 32, 34, 99, 34, 32, 38, 38, 10, 97, 114, 114, 97, 121, 84, 111, 84, 101,
115, 116, 91, 49, 93, 32, 61, 61, 61, 32, 49, 32, 38, 38, 32, 115, 108, 105, 99,
101, 100, 65, 114, 114, 97, 121, 46, 108, 101, 110, 103, 116, 104, 32, 61, 61,
61, 32, 50, 32, 38, 38, 10, 115, 108, 105, 99, 101, 100, 65, 114, 114, 97, 121,
91, 48, 93, 32, 61, 61, 61, 32, 34, 99, 34, 32, 38, 38, 32, 115, 108, 105, 99,
101, 100, 65, 114, 114, 97, 121, 91, 49, 93, 32, 61, 61, 61, 32, 49, 59, 10, 98,
105, 110, 100, 105, 110, 103, 46, 116, 101, 115, 116, 67, 114, 101, 97, 116,
101, 80, 114, 111, 109, 105, 115, 101, 32, 61, 32, 102, 117, 110, 99, 116, 105,
111, 110, 40, 41, 32, 123, 10, 114, 101, 116, 117, 114, 110, 32, 118, 56, 46,
99, 114, 101, 97, 116, 101, 80, 114, 111, 109, 105, 115, 101, 40, 41, 59, 10,
125, 10, 98, 105, 110, 100, 105, 110, 103, 46, 116, 101, 115, 116, 67, 114, 101,
97, 116, 101, 80, 114, 111, 109, 105, 115, 101, 87, 105, 116, 104, 80, 97, 114,
101, 110, 116, 32, 61, 32, 102, 117, 110, 99, 116, 105, 111, 110, 40, 112, 97,
114, 101, 110, 116, 41, 32, 123, 10, 114, 101, 116, 117, 114, 110, 32, 118, 56,
46, 99, 114, 101, 97, 116, 101, 80, 114, 111, 109, 105, 115, 101, 40, 112, 97,
114, 101, 110, 116, 41, 59, 10, 125, 10, 98, 105, 110, 100, 105, 110, 103, 46,
116, 101, 115, 116, 82, 101, 106, 101, 99, 116, 80, 114, 111, 109, 105, 115,
101, 32, 61, 32, 102, 117, 110, 99, 116, 105, 111, 110, 40, 112, 114, 111, 109,
105, 115, 101, 44, 32, 114, 101, 97, 115, 111, 110, 41, 32, 123, 10, 114, 101,
116, 117, 114, 110, 32, 118, 56, 46, 114, 101, 106, 101, 99, 116, 80, 114, 111,
109, 105, 115, 101, 40, 112, 114, 111, 109, 105, 115, 101, 44, 32, 114, 101, 97,
115, 111, 110, 41, 59, 10, 125, 10, 98, 105, 110, 100, 105, 110, 103, 46, 116,
101, 115, 116, 82, 101, 115, 111, 108, 118, 101, 80, 114, 111, 109, 105, 115,
101, 32, 61, 32, 102, 117, 110, 99, 116, 105, 111, 110, 40, 112, 114, 111, 109,
105, 115, 101, 44, 32, 114, 101, 115, 111, 108, 117, 116, 105, 111, 110, 41, 32,
123, 10, 114, 101, 116, 117, 114, 110, 32, 118, 56, 46, 114, 101, 115, 111, 108,
118, 101, 80, 114, 111, 109, 105, 115, 101, 40, 112, 114, 111, 109, 105, 115,
101, 44, 32, 114, 101, 115, 111, 108, 117, 116, 105, 111, 110, 41, 59, 10, 125,
10, 98, 105, 110, 100, 105, 110, 103, 46, 116, 101, 115, 116, 69, 120, 116, 114,
97, 67, 97, 110, 85, 115, 101, 85, 116, 105, 108, 115, 32, 61, 32, 102, 117,
110, 99, 116, 105, 111, 110, 40, 41, 32, 123, 10, 99, 111, 110, 115, 116, 32,
102, 117, 108, 102, 105, 108, 108, 101, 100, 80, 114, 111, 109, 105, 115, 101,
32, 61, 32, 118, 56, 46, 99, 114, 101, 97, 116, 101, 80, 114, 111, 109, 105,
115, 101, 40, 41, 59, 10, 118, 56, 46, 114, 101, 115, 111, 108, 118, 101, 80,
114, 111, 109, 105, 115, 101, 40, 10, 102, 117, 108, 102, 105, 108, 108, 101,
100, 80, 114, 111, 109, 105, 115, 101, 44, 10, 104, 97, 115, 79, 119, 110, 40,
123, 32, 116, 101, 115, 116, 58, 32, 39, 116, 101, 115, 116, 39, 32, 125, 44,
32, 39, 116, 101, 115, 116, 39, 41, 32, 63, 32, 49, 32, 58, 32, 45, 49, 44, 10,
117, 110, 100, 101, 102, 105, 110, 101, 100, 10, 41, 59, 10, 99, 111, 110, 115,
116, 32, 102, 117, 108, 102, 105, 108, 108, 101, 100, 80, 114, 111, 109, 105,
115, 101, 50, 32, 61, 32, 80, 114, 111, 109, 105, 115, 101, 95, 114, 101, 115,
111, 108, 118, 101, 40, 99, 97, 108, 108, 40, 102, 117, 110, 99, 116, 105, 111,
110, 32, 40, 97, 114, 103, 49, 44, 32, 97, 114, 103, 50, 41, 32, 123, 10, 114,
101, 116, 117, 114, 110, 32, 40, 116, 104, 105, 115, 46, 112, 114, 111, 112, 32,
61, 61, 61, 32, 97, 114, 103, 49, 32, 38, 38, 32, 97, 114, 103, 49, 32, 61, 61,
61, 32, 39, 118, 97, 108, 117, 101, 39, 32, 38, 38, 32, 97, 114, 103, 50, 41,
32, 63, 32, 50, 32, 58, 32, 45, 49, 59, 10, 125, 44, 32, 123, 32, 112, 114, 111,
112, 58, 32, 39, 118, 97, 108, 117, 101, 39, 32, 125, 44, 32, 39, 118, 97, 108,
117, 101, 39, 44, 32, 97, 114, 114, 97, 121, 115, 79, 75, 41, 41, 59, 10, 99,
111, 110, 115, 116, 32, 114, 101, 106, 101, 99, 116, 101, 100, 80, 114, 111,
109, 105, 115, 101, 32, 61, 32, 118, 56, 46, 99, 114, 101, 97, 116, 101, 80,
114, 111, 109, 105, 115, 101, 40, 41, 59, 10, 118, 56, 46, 114, 101, 106, 101,
99, 116, 80, 114, 111, 109, 105, 115, 101, 40, 114, 101, 106, 101, 99, 116, 101,
100, 80, 114, 111, 109, 105, 115, 101, 44, 32, 97, 112, 112, 108, 121, 40, 102,
117, 110, 99, 116, 105, 111, 110, 32, 40, 97, 114, 103, 49, 44, 32, 97, 114,
103, 50, 41, 32, 123, 10, 114, 101, 116, 117, 114, 110, 32, 40, 97, 114, 103,
49, 32, 61, 61, 61, 32, 97, 114, 103, 50, 32, 38, 38, 32, 97, 114, 103, 50, 32,
61, 61, 61, 32, 39, 120, 39, 41, 32, 63, 32, 51, 32, 58, 32, 45, 49, 59, 10,
125, 44, 32, 110, 117, 108, 108, 44, 32, 91, 39, 120, 39, 44, 32, 39, 120, 39,
93, 41, 41, 59, 10, 99, 111, 110, 115, 116, 32, 114, 101, 106, 101, 99, 116,
101, 100, 66, 117, 116, 72, 97, 110, 100, 108, 101, 100, 80, 114, 111, 109, 105,
115, 101, 32, 61, 32, 118, 56, 46, 99, 114, 101, 97, 116, 101, 80, 114, 111,
109, 105, 115, 101, 40, 41, 59, 10, 118, 56, 46, 114, 101, 106, 101, 99, 116,
80, 114, 111, 109, 105, 115, 101, 40, 114, 101, 106, 101, 99, 116, 101, 100, 66,
117, 116, 72, 97, 110, 100, 108, 101, 100, 80, 114, 111, 109, 105, 115, 101, 44,
32, 52, 41, 59, 10, 118, 56, 46, 109, 97, 114, 107, 80, 114, 111, 109, 105, 115,
101, 65, 115, 72, 97, 110, 100, 108, 101, 100, 40, 114, 101, 106, 101, 99, 116,
101, 100, 66, 117, 116, 72, 97, 110, 100, 108, 101, 100, 80, 114, 111, 109, 105,
115, 101, 41, 59, 10, 102, 117, 110, 99, 116, 105, 111, 110, 32, 112, 114, 111,
109, 105, 115, 101, 83, 116, 97, 116, 101, 84, 111, 83, 116, 114, 105, 110, 103,
40, 112, 114, 111, 109, 105, 115, 101, 41, 32, 123, 10, 115, 119, 105, 116, 99,
104, 32, 40, 118, 56, 46, 112, 114, 111, 109, 105, 115, 101, 83, 116, 97, 116,
101, 40, 112, 114, 111, 109, 105, 115, 101, 41, 41, 32, 123, 10, 99, 97, 115,
101, 32, 118, 56, 46, 107, 80, 82, 79, 77, 73, 83, 69, 95, 80, 69, 78, 68, 73,
78, 71, 58, 10, 114, 101, 116, 117, 114, 110, 32, 34, 112, 101, 110, 100, 105,
110, 103, 34, 59, 10, 99, 97, 115, 101, 32, 118, 56, 46, 107, 80, 82, 79, 77,
73, 83, 69, 95, 70, 85, 76, 70, 73, 76, 76, 69, 68, 58, 10, 114, 101, 116, 117,
114, 110, 32, 34, 102, 117, 108, 102, 105, 108, 108, 101, 100, 34, 59, 10, 99,
97, 115, 101, 32, 118, 56, 46, 107, 80, 82, 79, 77, 73, 83, 69, 95, 82, 69, 74,
69, 67, 84, 69, 68, 58, 10, 114, 101, 116, 117, 114, 110, 32, 34, 114, 101, 106,
101, 99, 116, 101, 100, 34, 59, 10, 100, 101, 102, 97, 117, 108, 116, 58, 10,
116, 104, 114, 111, 119, 32, 110, 101, 119, 32, 69, 114, 114, 111, 114, 40, 34,
85, 110, 101, 120, 112, 101, 99, 116, 101, 100, 32, 118, 97, 108, 117, 101, 32,
102, 111, 114, 32, 112, 114, 111, 109, 105, 115, 101, 83, 116, 97, 116, 101, 34,
41, 59, 10, 125, 10, 125, 10, 108, 101, 116, 32, 112, 114, 111, 109, 105, 115,
101, 83, 116, 97, 116, 101, 115, 32, 61, 32, 112, 114, 111, 109, 105, 115, 101,
83, 116, 97, 116, 101, 84, 111, 83, 116, 114, 105, 110, 103, 40, 110, 101, 119,
32, 80, 114, 111, 109, 105, 115, 101, 40, 40, 41, 32, 61, 62, 32, 123, 125, 41,
41, 32, 43, 32, 39, 32, 39, 32, 43, 10, 112, 114, 111, 109, 105, 115, 101, 83,
116, 97, 116, 101, 84, 111, 83, 116, 114, 105, 110, 103, 40, 102, 117, 108, 102,
105, 108, 108, 101, 100, 80, 114, 111, 109, 105, 115, 101, 41, 32, 43, 32, 39,
32, 39, 32, 43, 10, 112, 114, 111, 109, 105, 115, 101, 83, 116, 97, 116, 101,
84, 111, 83, 116, 114, 105, 110, 103, 40, 114, 101, 106, 101, 99, 116, 101, 100,
80, 114, 111, 109, 105, 115, 101, 41, 59, 10, 99, 111, 110, 115, 116, 32, 117,
110, 99, 117, 114, 114, 121, 84, 104, 105, 115, 32, 61, 32, 118, 56, 46, 117,
110, 99, 117, 114, 114, 121, 84, 104, 105, 115, 40, 102, 117, 110, 99, 116, 105,
111, 110, 32, 40, 97, 44, 32, 98, 44, 32, 99, 44, 32, 100, 44, 32, 101, 41, 32,
123, 10, 114, 101, 116, 117, 114, 110, 32, 40, 116, 104, 105, 115, 32, 43, 32,
97, 32, 43, 32, 98, 32, 43, 32, 99, 32, 43, 32, 100, 32, 43, 32, 101, 41, 32,
61, 61, 61, 32, 50, 49, 59, 10, 125, 41, 40, 49, 44, 32, 50, 44, 32, 51, 44, 32,
52, 44, 32, 53, 44, 32, 54, 41, 59, 10, 114, 101, 116, 117, 114, 110, 32, 123,
10, 112, 114, 105, 118, 97, 116, 101, 83, 121, 109, 98, 111, 108, 58, 32, 118,
56, 46, 99, 114, 101, 97, 116, 101, 80, 114, 105, 118, 97, 116, 101, 83, 121,
109, 98, 111, 108, 40, 39, 115, 121, 109, 39, 41, 44, 10, 102, 117, 108, 102,
105, 108, 108, 101, 100, 80, 114, 111, 109, 105, 115, 101, 44, 10, 102, 117,
108, 102, 105, 108, 108, 101, 100, 80, 114, 111, 109, 105, 115, 101, 50, 44, 10,
114, 101, 106, 101, 99, 116, 101, 100, 80, 114, 111, 109, 105, 115, 101, 44, 10,
114, 101, 106, 101, 99, 116, 101, 100, 66, 117, 116, 72, 97, 110, 100, 108, 101,
100, 80, 114, 111, 109, 105, 115, 101, 44, 10, 112, 114, 111, 109, 105, 115,
101, 83, 116, 97, 116, 101, 115, 44, 10, 112, 114, 111, 109, 105, 115, 101, 73,
115, 80, 114, 111, 109, 105, 115, 101, 58, 32, 118, 56, 46, 105, 115, 80, 114,
111, 109, 105, 115, 101, 40, 102, 117, 108, 102, 105, 108, 108, 101, 100, 80,
114, 111, 109, 105, 115, 101, 41, 44, 10, 116, 104, 101, 110, 97, 98, 108, 101,
73, 115, 80, 114, 111, 109, 105, 115, 101, 58, 32, 118, 56, 46, 105, 115, 80,
114, 111, 109, 105, 115, 101, 40, 123, 32, 116, 104, 101, 110, 40, 41, 32, 123,
32, 125, 32, 125, 41, 44, 10, 117, 110, 99, 117, 114, 114, 121, 84, 104, 105,
115, 10, 125, 59, 10, 125, 59, 10, 125, 41, 10 };

  template <>
  int NativesCollection<EXTRAS>::GetBuiltinsCount() {
    return 1;
  }

  template <>
  int NativesCollection<EXTRAS>::GetIndex(const char* name) {
    if (strcmp(name, "test-extra") == 0) return 0;
    return -1;
  }

  template <>
  Vector<const char> NativesCollection<EXTRAS>::GetScriptSource(int index) {
    if (index == 0) return Vector<const char>(sources + 0, 2981);
    return Vector<const char>("", 0);
  }

  template <>
  Vector<const char> NativesCollection<EXTRAS>::GetScriptName(int index) {
    if (index == 0) return Vector<const char>("native test-extra.js", 20);
    return Vector<const char>("", 0);
  }

  template <>
  Vector<const char> NativesCollection<EXTRAS>::GetScriptsSource() {
    return Vector<const char>(sources, 2981);
  }
}  // internal
}  // v8