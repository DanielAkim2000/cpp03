*This project has been created as part of the 42 curriculum by demane.*

# CPP Module 03

## Description

**CPP Module 03** introduces inheritance in C++. The goal is to build a hierarchy of robot classes starting from `ClapTrap`, then specialize it with `ScavTrap` and `FragTrap`, and finally resolve multiple inheritance with `DiamondTrap` using virtual bases.

This module contains four exercises:

| Exercise | Focus |
|----------|--------|
| **ex00 — ClapTrap** | Base class with hit points, energy, attack damage; `attack`, `takeDamage`, `beRepaired` |
| **ex01 — ScavTrap** | Public inheritance; own stats; overridden `attack`; `guardGate()` |
| **ex02 — FragTrap** | Another derived class with its own stats and `highFivesGuys()` |
| **ex03 — DiamondTrap** | Multiple inheritance + virtual inheritance; `whoAmI()` |

### Overview

- **ex00** defines `ClapTrap` in Orthodox Canonical Form. Actions consume energy when relevant and are refused when HP or energy is depleted.
- **ex01** derives `ScavTrap` from `ClapTrap` (HP 100, energy 50, damage 20) and adds gate-keeper mode.
- **ex02** derives `FragTrap` (HP 100, energy 100, damage 30) with a high-five request.
- **ex03** makes `ScavTrap` and `FragTrap` inherit **virtually** from `ClapTrap`, then builds `DiamondTrap` which keeps its own `name`, reuses `ScavTrap::attack`, and mixes Frag/Scav attributes (HP 100, energy 50, damage 30).

Construction and destruction messages show the call chain (base first on construction, reverse order on destruction).

## Instructions

### Requirements

- A C++ compiler (`c++` / `g++`) supporting **C++98**
- `make`

### Compilation

Each exercise has its own Makefile:

```bash
cd ex00   # or ex01 / ex02 / ex03
make
make clean
make fclean
make re
```

Flags used: `-Wall -Wextra -Werror -std=c++98`.

### Execution

All exercises produce a binary named `exec`:

```bash
cd ex00 && make && ./exec
cd ex01 && make && ./exec
cd ex02 && make && ./exec
cd ex03 && make && ./exec
```

## Classes & components

### Default attributes

| Class | Hit points | Energy | Attack damage |
|-------|------------|--------|---------------|
| `ClapTrap` | 10 | 10 | 0 |
| `ScavTrap` | 100 | 50 | 20 |
| `FragTrap` | 100 | 100 | 30 |
| `DiamondTrap` | 100 (Frag) | 50 (Scav) | 30 (Frag) |

### ClapTrap

| Member / method | Role |
|-----------------|------|
| `name`, `health`, `energy`, `damage` | State (`private` in ex00, `protected` from ex01 onward) |
| `attack` / `takeDamage` / `beRepaired` | Core combat API with energy / HP checks |
| Canonical form | Default, named, copy, assign, destructor |

### ScavTrap

| Feature | Description |
|---------|-------------|
| Inheritance | `public ClapTrap` (ex01–ex02) / `virtual public ClapTrap` (ex03) |
| `attack` | Overridden message and behavior |
| `guardGate` | Enters Gate keeper mode |

### FragTrap

| Feature | Description |
|---------|-------------|
| Inheritance | `public ClapTrap` (ex02) / `virtual public ClapTrap` (ex03) |
| `highFivesGuys` | Positive high-fives request |

### DiamondTrap (ex03)

| Feature | Description |
|---------|-------------|
| Inheritance | `public ScavTrap, public FragTrap` |
| Own `name` | Distinct from `ClapTrap::name` (`<name>_clap_name`) |
| `attack` | Delegates to `ScavTrap::attack` |
| `whoAmI` | Prints both DiamondTrap and ClapTrap names |

## Resources

### Documentation & references

- [Inheritance](https://en.cppreference.com/w/cpp/language/derived_class)
- [Member initializer lists](https://en.cppreference.com/w/cpp/language/constructor)
- [Virtual base classes / diamond problem](https://en.cppreference.com/w/cpp/language/derived_class#Virtual_base_classes)
- [LearnCpp — Inheritance](https://www.learncpp.com/cpp-tutorial/basic-inheritance-in-c/)
- 42 subject: *CPP Module 03*

### Use of AI

AI assistance was used for:

- Drafting and formatting this `README.md` according to the 42 curriculum requirements
- Clarifying wording and structuring documentation sections

No AI-generated code was submitted as a substitute for personal implementation. The C++ sources were written and validated by the student.

---

*42 Paris — Common Core*
