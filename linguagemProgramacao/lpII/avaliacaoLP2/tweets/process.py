from contextlib import redirect_stdout

with open("tweets.in", encoding="utf-8") as f:
    tweets = [line.strip() for line in f.readlines()]
    tweets.sort()

with open("tweets.out", "w", encoding="utf-8") as f:
    with redirect_stdout(f):
        print("\n".join(tweets))
