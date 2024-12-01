section .data
var dq 255.0

section .text
bits 64
default rel
global imgCvtGrayIntToDouble

imgCvtGrayIntToDouble:
	movsd xmm2, [var]
L1:	movsd xmm4, [rdx]
	divsd xmm4, xmm2
	movsd [rdx], xmm4
	add rdx, 8
	LOOP L1
ret