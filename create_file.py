#!/usr/bin/env python3

import argparse
from pathlib import Path

parser = argparse.ArgumentParser(prog="Create File")
parser.add_argument("difficulty")
parser.add_argument("name")
parser.add_argument("extension")

args = parser.parse_args()

Path(args.difficulty.title(), args.name.title()).mkdir(parents=True, exist_ok=True)
Path(
    args.difficulty.title(),
    args.name.title(),
    f"{args.name.title().replace(' ', '')}.{args.extension.lower()}",
).touch()
