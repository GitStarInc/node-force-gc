##force-gc

Force minor or full garbage collection. You must run your node codewith the `--expose_gc` flag.

```javascript
var gc = require('force-gc');

gc.minor();  // force minor GC
gc.full();   // force full GC
```

