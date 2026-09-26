# e-paper-firmware

This firmware is supposed to run on an ESP32-C3, gather display and board runtime context, and provide the foundation for driving an e-paper display pipeline with reusable custom components.

## Project setup (ESP-IDF + ESP32-C3)

This repository is structured as a standard ESP-IDF project targeting **ESP32-C3**.

### Prerequisites

- ESP-IDF installed and exported in your shell
- Python environment set up per ESP-IDF instructions
- A connected ESP32-C3 board

### Build, flash, and monitor

From the repository root:

```bash
idf.py set-target esp32c3
idf.py build
idf.py -p <PORT> flash monitor
```

On boot, the firmware prints basic hardware information (target, cores, revision, features, flash size), which serves as a minimal skeleton application.

## Custom components from another GitHub repository

Use the `components/` directory for custom ESP-IDF components.

Example with a git submodule:

```bash
git submodule add https://github.com/<org>/<custom-components-repo>.git components/<custom-components-repo>
```

Alternatively, vendor/copy the component folders directly under `components/`.
ESP-IDF will automatically discover valid components during `idf.py build`.
