{
  "targets": [
    {
      "include_dirs": [
        "<!(node -e \"require('nan')\")"
      ],
      "target_name": "nativechain",
      "sources": [ "./facade.cpp" ]
    }
  ]
}