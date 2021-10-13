find . -type f -name '*.sh' | rev | cut -c 4- | cut -f 1 -d '/' | rev
