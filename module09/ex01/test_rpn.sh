declare -a expressions=(
    "3 4 5 + -"
    "6 2 /"
    "5 3 - 2 *"
    "2 3 + 5 *"
    "9 3 / 2 -"
    "9 2 3 + 9 3 - 2 - 2 / - -"
    "0 5 /"
    "3 5 + 7 2 3 - + - 4 3 + + 6 3 * - 0 -"
    "6 8 3 2 + - 1 + *"
    "2 2 + 2 +"
)

RPN_EXECUTABLE="./RPN"

if [ ! -f "$RPN_EXECUTABLE" ]; then
    echo "RPN executable does not exist."
    exit 1
fi

for expr in "${expressions[@]}"; do
    echo "Testing expression: $expr"
    $RPN_EXECUTABLE "$expr"
done
