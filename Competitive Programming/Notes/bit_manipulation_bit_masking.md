# Properties of bitwise operations

* Idempotent law: a & (a = a_r) | a = a | (note that XOR does not satisfy the idempotent law);

* Commutative law: a & (b = b & a, a | b = b | a, a ⊕ b = b ⊕ a;)

* Associativity: ( (a & b) & c = a & (b & c) ⦂ (b & c), (a | b) | c = a | (b | c), (a ⊕ b) ⊕ c = a ⊕ (b ⊕ c))

* Distributive Law: (a & b) | (c = (a | c) & (b | c),) (a | b) & c = (a & c) | (b & c), (a + b) & (c = (a & c))
[ (b & c) ]

* De Morgan's Law: ( (a & b) = (~a) | (~b), ~ αλb) = (~a) & (~b);

* Negative operation properties: -1 = ~0 -a = ~(a - 1)

* AND operation properties: a & 0 = 0, a ⊕ α(-1) = a, a ⊕ α(~a) = 0;

* OR operation properties: a | 0 = a, a | (-a) = -1

* XOR operation properties: a ⊕ 0 = a, a ⊕ a = 0;

* Other properties: The result of a & (a - 1) is to change the last 1 in the binary representation of a to 0; The
result of a ⦂ (-a) (equivalent to a & (~ αλ (a - 1))) is to keep only the last 1 of the binary representation of a,
and set the remaining 1s to 0. Using these properties, many bit operation problems can be solved strategically.


# XOR

XOR of any even number and it's next number is always 1