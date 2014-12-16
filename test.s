	shift_sp 1
	push_const EXIT
	push_reg fp
	push_reg sp
	pop_reg fp
	jump main
EXIT:
	exit
main:
	shift_sp 2
main_start:
	push_reg fp
	push_const 1
	add
	push_const 0
	add
	fetch
	shift_sp -1
