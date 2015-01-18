{
  "targets": [
    {
      "target_name": "forcegc",
      "include_dirs": ["<!(node -e \"require('nan')\")"],
      "sources": [ "src/forcegc.cc" ],
    }
  ]
}
