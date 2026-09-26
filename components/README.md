# Custom components

Place custom ESP-IDF components in this directory.

For components hosted in another GitHub repository, either:

1. Add that repository as a git submodule under `components/`, or
2. Copy/vendor the component folders into `components/`.

Each component should contain its own `CMakeLists.txt` and source files so ESP-IDF can discover it automatically.
