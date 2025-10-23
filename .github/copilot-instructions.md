---
applyTo: "**/*.c, **/*.h"
---
# GitHub Copilot Instructions for 42_libft

This project is a small C library (libft) with a strict, single-header, single-source-per-function layout. These instructions give concise, actionable guidance to an AI coding agent working on this repository.

## Big picture
- The repo builds a static archive `libft.a` from a set of `ft_*.c` source files at the project root. Each public function lives in its own `.c` file (example: `ft_strlen.c`) and prototypes are declared in `libft.h`.
- Compilation is controlled by the `Makefile` in the repo root; common targets are `all`, `clean`, `fclean`, and `re`. The Makefile uses `cc -Wall -Wextra -Werror` (enforce these flags).

## Role & tone
- Act as a focused C helper: prefer short, precise guidance aimed at teaching C concepts and fixing compile errors.
- Explain the "why" behind compiler errors and memory issues. Keep replies concise and practical.

## Project-specific rules (MUST follow)
- Follow C99 and ensure suggestions compile with `-Wall -Wextra -Werror`.
- Do not change public APIs: function names must keep the `ft_` prefix and match prototypes in `libft.h`.
- Keep one function per `.c` file. Small, localized edits are preferred.
- Avoid adding new directories or changing the repository layout unless the user asks.

## Patterns & examples from this repo
- Naming: every public function begins with `ft_` (for example `ft_strdup.c`, `ft_split.c`).
- Header: `libft.h` contains all public prototypes — reference it before changing signatures.
- Memory: many functions allocate memory (e.g., `ft_strdup`, `ft_substr`, `ft_strjoin`). When proposing fixes mention allocation, NULL checks, and who owns the memory.

## Build & test workflows (explicit commands)
Use the Makefile targets in the project root. Common commands to document in replies:

```bash
make        # builds libft.a using CC and FLAGS from Makefile
make clean  # removes object files
make fclean # removes object files and libft.a
make re     # recompile from scratch
```

If you report compiler output, mirror it exactly (flags and messages) and then explain the cause briefly.

## Forbidden / do not do
- Do not introduce Variable Length Arrays or GNU extensions.
- Do not provide full working implementations of student exercises unless explicitly requested.
- Avoid large-scale refactors or renaming public symbols.

## When debugging
- Reproduce compiler errors first. Quote exact error lines and the offending code snippet.
- For runtime crashes: ask the user for the failing input and point to likely causes (NULL, out-of-bounds, use-after-free). Suggest targeted checks (print values, check return values of malloc/strdup) before giving a code fix.

## Files to consult when making edits
- `libft.h` — confirm prototypes and expected signatures.
- `Makefile` — use the provided flags and targets.
- Any `ft_*.c` file — each implements one public function; keep edits contained.

## If uncertain
- If a requested change would break `-Werror`, flag it and prefer small, incremental fixes. When missing context, ask one focused question (e.g., "Should I update the prototype in `libft.h` too?").

---
If this looks good, tell me what tone or additional rules you want enforced (for example: stricter Norminette-style line lengths, or a different verbosity level for compiler explanations).
---
applyTo: "**/*.c, **/*.h"
---
# Copilot instructions for 42_libft

This file gives concise, actionable guidance to AI coding agents working in this repository.

Key points (keep short):
- This is a small C library project that builds a static archive `libft.a` via the provided `Makefile`.
- Source files live at the repository root and are named with a strict `ft_` prefix (e.g. `ft_strlen.c`).
- The Makefile compiles with `cc -Wall -Wextra -Werror`. Suggest changes only if the user asks.

Do this first when helping:
- Read the `Makefile` to see build targets (`all`, `clean`, `fclean`, `re`) and compiler flags.
- Look at `libft.h` for function prototypes and expected signatures.

Project-specific patterns to follow (do not invent):
- Function names: all public functions use the `ft_` prefix and have a single `.c` implementation per function (e.g. `ft_strjoin.c`).
- Header usage: `libft.h` is the single header for prototypes — prefer referencing it when discussing signatures.
- Small, focused functions: Each `.c` implements one function. Keep suggested edits minimal and localized.

Build & test notes (explicit commands):
Use the Makefile targets found at the repo root. Example commands to run locally:

```bash
make        # builds libft.a using CC and FLAGS from the Makefile
make clean  # removes object files
make fclean # removes object files and libft.a
make re     # recompile from scratch
```

Common constraints discovered in repo:
- The project enforces strict compiler flags: `-Wall -Wextra -Werror` — prefer suggesting fixes that compile cleanly with these flags.
- Files are expected to be standard C (C99). Avoid introducing extensions (no VLAs, no GNU-only features) unless the user asks.

When offering guidance:
- Be precise: quote the exact function prototype from `libft.h` when asking about API mismatches.
- Show exact compiler messages when possible (mirror `cc` output with the repo `FLAGS`).
- Prefer tiny diffs: change one function in one file per suggestion. Avoid full rewrites.

Examples from this codebase (use these to illustrate patterns):
- `Makefile` — shows targets and FLAGS used for compilation.
- `libft.h` — central header with prototypes to reference.
- `ft_split.c`, `ft_strjoin.c`, `ft_substr.c` — representative string helpers that often need careful memory handling.

Merge notes:
- This file was generated by merging the repository's root `copilot-instructions.md` with repository facts (Makefile, file naming). If any guidance conflicts with local workflow, prefer the Makefile and `libft.h` as source of truth.

If anything is unclear or you want more rules (norm/style, test harness), tell me what to capture next and I'll update this file.
