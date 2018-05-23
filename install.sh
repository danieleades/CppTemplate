#!/bin/bash
cp NewCppProject ~/.local/share/nautilus/scripts/
cp NewCppProject /usr/local/bin/
chmod +x ~/.local/share/nautilus/scripts/NewCppProject
chmod +x /usr/local/bin/NewCppProject
rm -r -f ../CppTemplate
