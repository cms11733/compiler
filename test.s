	shift_sp 1
	push_const EXIT
	push_reg fp
	push_reg sp
	pop_reg fp
	jump main
EXIT:
	exit
foo:
foo_start:
	push_reg fp
	push_const 2
	add
	fetch
foo_exit:
	push_reg sp
	pop_reg sp
	pop_reg fp
	pop_reg pc
foo_end:
main:
	shift_sp 1
main_start:
	push_reg fp
	push_const 1
	add
	push_reg sp
	fetch
	push_const 0
	assign
	fetch
	shift_sp -1
	shift_sp 1
	push_const label_0
	push_reg fp
	push_reg fp
	push_const 1
	add
	fetch
	push_reg sp
	push_const -1
	add
	pop_reg fp
	jump foo
label_0:
	fetch
	shift_sp -1
foo_exit:
	push_reg sp
	pop_reg sp
	pop_reg fp
	pop_reg pc
foo_end:
