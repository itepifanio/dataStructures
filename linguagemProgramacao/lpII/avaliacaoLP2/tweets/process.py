from contextlib import redirect_stdout
import re

regexMail = r'@w+'

with open("tweets.in", encoding="utf-8") as f:
    tweets = [line.strip() for line in f.readlines()]
    tweets.sort()
#(@\w+)|(http[s]?\S+)

with open("tweets.out", "w", encoding="utf-8") as f:
    #with redirect_stdout(f):
    for t in tweets:
        regex = list(re.finditer("(RT @\w+)|(http[s]?\S+)", t))
        if len(regex) > 1 and "RT" in regex[0].group():
            print("{} {}".format(regex[0].group().split()[1], regex[1].group()))
