#!/usr/bin/env python3

import argparse
from pathlib import Path
import subprocess

parser = argparse.ArgumentParser(prog="Create File")
parser.add_argument("difficulty")
parser.add_argument("name")
parser.add_argument("extension")

args = parser.parse_args()

Path(args.difficulty.title(), args.name.title()).mkdir(parents=True, exist_ok=True)
file_path = Path(
    args.difficulty.title(),
    args.name.title(),
    f"{args.name.title().replace(' ', '')}.{args.extension.lower()}",
)

file_path.touch()

subprocess.call(["code", file_path])
subprocess.call(["git", "add", "."])
