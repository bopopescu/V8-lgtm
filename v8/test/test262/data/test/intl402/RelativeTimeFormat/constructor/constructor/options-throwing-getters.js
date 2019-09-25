// Copyright 2018 Igalia, S.L. All rights reserved.
// This code is governed by the BSD license found in the LICENSE file.

/*---
esid: sec-InitializeRelativeTimeFormat
description: Checks the propagation of exceptions from the options for the RelativeTimeFormat constructor.
info: |
  InitializeRelativeTimeFormat

  5. Let matcher be ? GetOption(options, "localeMatcher", "string", «"lookup", "best fit"», "best fit").
  ...
  12. Let s be ? GetOption(options, "style", "string", «"long", "short", "narrow"», "long").
  ...
  14. Let numeric be ? GetOption(options, "numeric", "string", «"always", "auto"», "always").

  GetOption ( options, property, type, values, fallback )

  1. Let value be ? Get(options, property).
  2. If value is not undefined, then
    a. Assert: type is "boolean" or "string".
    b. If type is "boolean", then
      i. Let value be ToBoolean(value).
    c. If type is "string", then
      i. Let value be ? ToString(value).
    d. If values is not undefined, then
      i. If values does not contain an element equal to value, throw a RangeError exception.
    e. Return value.
  3. Else, return fallback.
features: [Intl.RelativeTimeFormat]
includes: [compareArray.js]
---*/

function CustomError() {}

const o1 = {
  get localeMatcher() {
    throw new CustomError();
  },
  get style() {
    throw "should not get the style option before localeMatcher";
  },
  get numeric() {
    throw "should not get the numeric option before localeMatcher";
  }
};

const o2captures = [];
const o2 = {
  get localeMatcher() {
    o2captures.push('localeMatcher');
  },
  get style() {
    throw new CustomError();
  },
  get numeric() {
    throw "should not get the numeric option before style";
  }
};

const o3captures = [];
const o3 = {
  get localeMatcher() {
    o3captures.push('localeMatcher');
  },
  get style() {
    o3captures.push('style');
  },
  get numeric() {
    throw new CustomError();
  }
};

assert.throws(CustomError, () => {
  new Intl.RelativeTimeFormat("en", o1);
}, `Exception from localeMatcher getter should be propagated`);

assert.throws(CustomError, () => {
  new Intl.RelativeTimeFormat("en", o2);
}, `Exception from style getter should be propagated`);
assert.compareArray(o2captures, ['localeMatcher']);

assert.throws(CustomError, () => {
  new Intl.RelativeTimeFormat("en", o3);
}, `Exception from numeric getter should be propagated`);
assert.compareArray(o3captures, ['localeMatcher', 'style']);
