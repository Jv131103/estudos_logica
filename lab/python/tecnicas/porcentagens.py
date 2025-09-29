def percent(value, percent):
    return value * percent / 100


def percent2(value, percent=0.5):  # 0.5 = 50%
    return value * percent


def discount(value, discount):
    return value - (value * discount / 100)


def discount_decimal(value, discount=0.5):
    return value - (value * discount)


def discount_factor(value, discount):
    return value * (1 - discount / 100)


def discount_chain(value, *discounts):
    for d in discounts:
        value *= (1 - d/100)
    return value


def increase(value, percent):
    return value + (value * percent / 100)


def increase_decimal(value, discount=0.5):
    return value + (value * discount)


def increase_factor(value, percent):
    return value * (1 + percent / 100)


def increase_chain(value, *percents):
    for p in percents:
        value *= (1 + p/100)
    return value


if __name__ == "__main__":
    print(percent(200, 15))
    print(percent2(200, 0.15))
    print(discount(250, 20))
    print(discount_factor(250, 20))
    print(discount_decimal(250, 0.20))
    print(increase(200, 10))
    print(increase_factor(200, 10))
    print(increase_decimal(200, 0.10))

    print(discount_chain(100, 20, 10))
    print(increase_chain(100, 10, 20))
