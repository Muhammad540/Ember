![Ember](assets/ember.png)
# Ember

Ember is a programming language with two execution backends: a tree-walk interpreter and a bytecode virtual machine.

## Project Structure

```
Ember/
├── ember-tree/          # Tree-walk interpreter
│   ├── include/
│   ├── src/
│   └── Makefile
├── ember-vm/            # Bytecode virtual machine
│   ├── include/
│   ├── src/
│   └── Makefile
└── README.md
```

## Building

Navigate to the desired implementation directory and run `make`:

```bash
cd ember-tree
make

cd ember-vm
make
```

The build system supports incremental compilation, rebuilding only modified files.

## Usage

Ember supports both interactive and file-based execution:

```bash
# Interactive REPL
./ember

# Execute from file
./ember script.em
```