echo "Using astyle to make code style formatting. If you have not installed astyle yet, please use brew install astyle"
astyle --indent-namespaces -A2 -U -H -s4 -f -xe --pad-oper --pad-comma --pad-header --indent-switches *.hpp
astyle --indent-namespaces -A2 -U -H -s4 -f -xe --pad-oper --pad-comma --pad-header --indent-switches *.cpp
astyle --indent-namespaces -A2 -U -H -s4 -f -xe --pad-oper --pad-comma --pad-header --indent-switches *.h
astyle --indent-namespaces -A2 -U -H -s4 -f -xe --pad-oper --pad-comma --pad-header --indent-switches *.c
astyle --indent-namespaces -A2 -U -H -s4 -f -xe --pad-oper --pad-comma --pad-header --indent-switches *.cc
echo "All files formatted."

