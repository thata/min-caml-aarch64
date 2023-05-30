let a = Array.make 3 3.141 in
let b = Array.make 100 2.236 in
print_int (truncate a.(0)); print_newline ();
print_int (truncate a.(1)); print_newline ();
print_int (truncate a.(2)); print_newline ();
print_int (truncate b.(0)); print_newline ();
print_int (truncate b.(1)); print_newline ();
print_int (truncate b.(99)); print_newline ();
a.(0) <- a.(0) +. 10.0;
a.(1) <- a.(1) +. 20.0;
a.(2) <- a.(2) +. 30.0;
print_int (truncate a.(0)); print_newline ();
print_int (truncate a.(1)); print_newline ();
print_int (truncate a.(2)); print_newline ();
print_int (truncate b.(0)); print_newline ();
print_int (truncate b.(1)); print_newline ();
print_int (truncate b.(99)); print_newline ()
