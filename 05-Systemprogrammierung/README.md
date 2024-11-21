## C-Code Kompilieren und Ausführen
Damit C-Code ausgeführt werden kann, musst du entweder einen [Compiler lokal installieren](#compiler-installieren) oder einen [Online-Compiler](#online-compilereditoren) verwenden

### Compiler installieren
Flexibel, ermöglicht Nutzung von Libraries und Verarbeitung von lokalen Datein mit den eigenen Programmen etc.
- Windows (beliebige Option wählen)
    - MSYS (lightweight): https://www.freecodecamp.org/news/how-to-install-c-and-cpp-compiler-on-windows/
    - Visual Studio (offizielle Microsoft-IDE, sehr große Installation): https://visualstudio.microsoft.com/downloads/
- Linux
    - `gcc` oder `clang` aus dem Package manager installieren
- MacOS
    1. https://brew.sh/ installieren
    2. Danach im Terminal: `brew install llvm` (installiert clang, clang++, lldb etc.)

#### Mit installiertem Compiler (z.B. clang) Programm ausführen
```
clang -o ausgabeprogramm quelldatei.c
./ausgabeprogramm
```

### Online-Compiler/Editoren
Kein Setup, gut geeignet, um Dinge Auszuprobieren.
- Online GDB (Ausführen und Debuggen): https://www.onlinegdb.com/
- Compiler explorer (Assembly analysieren und Ausführen): https://godbolt.org/