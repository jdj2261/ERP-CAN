# generator
def simple_gen():
    yield "Hello"
    yield "World"


# 코루틴
def coro():
    hello = yield "Hello"
    yield hello


gen = simple_gen()
print(next(gen))
print(next(gen))

c = coro()
print(next(c))
print(c.send("World"))



