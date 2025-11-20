# cli_calc.py
# Simple command-line calculator supporting + - * / and integer power (**)

def calculate(expr: str):
    # WARNING: using eval on untrusted input is dangerous.
    # For learning/demo only; never eval user input in production.
    try:
        return eval(expr, {"__builtins__": {}}, {})
    except Exception as e:
        return f"Error: {e}"

def main():
    print("Simple CLI Calculator. Examples: 2+3, 4*5, 2**10")
    while True:
        expr = input("expr (or 'quit'): ").strip()
        if expr.lower() in ("q", "quit", "exit"):
            break
        print("=>", calculate(expr))

if __name__ == '__main__':
    main()
