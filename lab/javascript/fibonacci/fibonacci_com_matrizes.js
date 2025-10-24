function multiply(A, B) {
  return [
    [
      A[0][0] * B[0][0] + A[0][1] * B[1][0],
      A[0][0] * B[0][1] + A[0][1] * B[1][1]
    ],
    [
      A[1][0] * B[0][0] + A[1][1] * B[1][0],
      A[1][0] * B[0][1] + A[1][1] * B[1][1]
    ]
  ];
}

function matrixPow(M, n) {
  let result = [[1, 0], [0, 1]]; // identidade
  let base = [[M[0][0], M[0][1]], [M[1][0], M[1][1]]];

  while (n > 0) {
    if (n % 2 === 1) result = multiply(result, base);
    base = multiply(base, base);
    n = Math.floor(n / 2);
  }
  return result;
}

function fib(n) {
  if (n === 0) return 0;
  const F = [[1, 1], [1, 0]];
  const Fn = matrixPow(F, n);
  return Fn[0][1];
}

console.log(fib(10)); // 55
