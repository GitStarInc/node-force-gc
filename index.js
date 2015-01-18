'use strict';
const fgc = require('bindings')('forcegc');
exports = {
  full: fgc.full,
  minor: fgc.minor
};
