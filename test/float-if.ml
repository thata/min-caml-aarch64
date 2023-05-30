let a = 1.0 in
let b = 2.0 in
let rec eq a b = a = b in
let rec le a b = a < b in
(* NonTail IfFEq *)
if a = a then
  print_int 1
else
  print_int 0;
if a = b then
  print_int 0
else
  print_int 1;
(* NonTail IfFLe *)
if a < b then
  print_int 1
else
  print_int 0;
if b < a then
  print_int 0
else
  print_int 1;
(* Tail IfFEq  *)
if eq a a then
  print_int 1
else
  print_int 0;
if eq a b then
  print_int 0
else
  print_int 1;
(* Tail IfFLe *)
if le a b then
  print_int 1
else
  print_int 0;
if le b a then
  print_int 0
else
  print_int 1
