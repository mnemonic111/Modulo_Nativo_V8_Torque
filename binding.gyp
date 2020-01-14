{
    "targets": [
        {
            "target_name":"mymodule",
            "sources": ["mymodule.cc"],
            "include_dirs": [
                "<!(node -e \"require('nan')\")"
            ]
        }
    ]
}