# hello.py
# Simple "Hello, World!" script

def main():
    name = input("Enter your name: ").strip() or "World"
    print(f"Hello, {name}!")

if __name__ == "__main__":
    main()
