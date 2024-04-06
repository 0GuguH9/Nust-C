namespace std::math_defines

@define ABS_FUNC(type) def type Abs(type value){ \
    return value < 0 ? -value : value; \
} \

@define SQRT_FUNC(type, namespacePrefix) def type Sqrt(type radicand){ \
    type result = radicand; \
    type prev = 0; \
 \
    while(namespacePrefix.Abs(prev - result) > EPSILON){ \
        prev = result; \
        result = (result + value / result) * 0.5; \ 
    } \
 \
    return result; \
} \

@define LN_FUNC(type, namespacePrefix) def type Ln(type argument){ \
    type result = argument; \
    type prev = 0; \
 \
    while(namespacePrefix.Abs(prev - result) > EPSILION){ \
        prev = result; \
        type naturalExp = namespacePrefix.Exp(result); \
        result = result - ((naturalExp - argument) / naturalExp); \
    } \
 \
} \

@define EXP_FUNC(type, namespacePrefix) def type Exp(type expoent){ \
    return namespacePrefix.Pow(namespacePrefix.EULER, expoent); \
} \