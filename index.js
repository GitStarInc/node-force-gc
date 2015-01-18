'use strict';
const fgc = require('bindings')('forcegc');
module.exports = {
  full: fgc.full,
  minor: fgc.minor
};
