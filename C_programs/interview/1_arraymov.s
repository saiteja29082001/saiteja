	.file	"1_arraymov.c"
	.text
	.section	.rodata
.LC0:
	.string	"%d "
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$80, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$5, -68(%rbp)
	movl	$0, -72(%rbp)
	movl	$1, -64(%rbp)
	movl	$0, -60(%rbp)
	movl	$0, -56(%rbp)
	movl	$4, -52(%rbp)
	movl	$5, -48(%rbp)
	movq	$0, -32(%rbp)
	movq	$0, -24(%rbp)
	movl	$0, -16(%rbp)
	movl	$0, -76(%rbp)
	movl	$0, -72(%rbp)
	jmp	.L2
.L4:
	movl	-76(%rbp), %eax
	cltq
	movl	-64(%rbp,%rax,4), %eax
	testl	%eax, %eax
	je	.L3
	movl	-76(%rbp), %eax
	cltq
	movl	-64(%rbp,%rax,4), %edx
	movl	-72(%rbp), %eax
	cltq
	movl	%edx, -32(%rbp,%rax,4)
	addl	$1, -72(%rbp)
.L3:
	addl	$1, -76(%rbp)
.L2:
	movl	-76(%rbp), %eax
	cmpl	-68(%rbp), %eax
	jl	.L4
	movl	$0, -76(%rbp)
	jmp	.L5
.L6:
	movl	-76(%rbp), %eax
	cltq
	movl	-32(%rbp,%rax,4), %eax
	movl	%eax, %esi
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	addl	$1, -76(%rbp)
.L5:
	movl	-76(%rbp), %eax
	cmpl	-68(%rbp), %eax
	jl	.L6
	movl	$0, %eax
	movq	-8(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L8
	call	__stack_chk_fail@PLT
.L8:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0"
	.section	.note.GNU-stack,"",@progbits
