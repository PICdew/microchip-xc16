
	.title cert 0218a -- .double on data
	.sbttl subtitle1 test

	
	.data

maxnm:	.double	1.7976931348623157e309
minpos:	.double	2.2250738585072014e-309
maxsub:	.double	2.2250738585072009e-309
minsub:	.double	4.9406564584124654e-325


	.text
	.global main
	
	goto externdefine
	goto main2
	goto 1f
	goto 2f
	goto 3f
	goto 4f
	goto 5f
	

	
	goto 6f
	goto 7f
	goto 8f
	goto 9f
	goto 0f
	nopr
	.global foo
foo:	nopr
	.eject
	.ascii "Test of listing continuation lines.\n"

	.if 0
	.ascii "This ascii string is within a false conditional"
	.endif
	.sbttl subtitle2 test
	.ascii "Resume listing in list file."
	
	.eject
	.sbttl subtitle3 test main routine

	
main:	MOV #5, w5
	MOV #1, w6
1:	addc w5, w6, w7
	MUL.US	w5, w6, w8
	MOV #1, w6
2:	addc w5, w6, w7
	MUL.US	w5, w6, w8
	MOV #1, w6
	addc w5, w6, w7
3:	MUL.US	w5, w6, w8
	MOV #1, w6
4:	addc w5, w6, w7
	MUL.US	w5, w6, w8	
5:	MOV #1, w6
	addc w5, w6, w7
	MUL.US	w5, w6, w8	
6:	MOV #1, w6
	addc w5, w6, w7
	MUL.US	w5, w6, w8	
7:	MOV #1, w6
	addc w5, w6, w7
	MUL.US	w5, w6, w8	
	MOV #1, w6
8:	addc w5, w6, w7
	MUL.US	w5, w6, w8
	MOV #1, w6
9:	addc w5, w6, w7
	MUL.US	w5, w6, w8
	
0:	goto	main	


	
