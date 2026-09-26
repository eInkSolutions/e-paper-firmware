# Custom components (ESP-IDF way)

Use the ESP-IDF Component Manager for external components first, instead of copying component source code into this repository.

## Repository workflow

In this repository, custom components hosted in different GitHub repositories should be added using **2) Dependency from a Git repository** in `idf_component.yml`.
This is the default team workflow for external custom components.

## Preferred approach: `idf_component.yml`

Define dependencies in a component manifest file (`idf_component.yml`) so ESP-IDF can fetch and manage them.

### 1) Dependency from ESP Component Registry

```yaml
dependencies:
  example/cmp: ">=1.0.0"
```

### 2) Dependency from a Git repository

```yaml
dependencies:
  test_component:
    path: test_component
    git: ssh://git@gitlab.com/user/components.git
```

### 3) Dependency from a local path (development)

```yaml
dependencies:
  some_local_component:
    path: ../../projects/component
```

## CLI option

You can also add dependencies with ESP-IDF CLI commands, for example:

```bash
idf.py add-dependency "example/cmp^1.0.0"
```

## When to use `components/` directly

Use the local `components/` directory for project-owned components that belong in this repository, or for temporary local development.

If you place a component locally, ensure it contains a valid `CMakeLists.txt` and source files so ESP-IDF can discover it.
