mkdir bin

# Build each file in the src directory
for file in src/*.c
do
    # Get the filename without the extension
    filename=$(basename "$file")
    filename="${filename%.*}"

    # Build the file
    gcc -o bin/$filename $file
done 