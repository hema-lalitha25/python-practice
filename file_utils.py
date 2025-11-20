# file_utils.py
# Small utilities to read and write text files and CSV-like rows.

import csv
from pathlib import Path

def write_text(path: str, content: str):
    Path(path).write_text(content, encoding="utf-8")
    print(f"Wrote to {path}")

def read_text(path: str) -> str:
    return Path(path).read_text(encoding="utf-8")

def write_rows_csv(path: str, rows):
    with open(path, "w", newline='', encoding="utf-8") as f:
        writer = csv.writer(f)
        writer.writerows(rows)
    print(f"Wrote CSV to {path}")

def read_rows_csv(path: str):
    with open(path, newline='', encoding="utf-8") as f:
        reader = csv.reader(f)
        return list(reader)

if __name__ == "__main__":
    sample = "This is a sample file.\nLine 2."
    write_text("sample.txt", sample)
    write_rows_csv("sample.csv", [["name","age"],["Alice","21"],["Bob","22"]])
    print(read_text("sample.txt"))
    print(read_rows_csv("sample.csv"))
