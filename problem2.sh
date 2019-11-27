#!/bin/bash
echo "Simple Calculator"

echo "Enter Integer 1st number: "
read a
echo "Enter Integer 2nd number: "
read b

valid=true

while [ $valid ]
do
printf "\n"
echo "1st number = $a AND 2nd number = $b"
printf "\n"
echo "1) add || 2) sub || 3) mult || 4) div || 5) Exit 0) new input"
echo "Enter operator number : "
read n
case $n in

0)
echo "Enter 1st number: "
unset a
read a
echo "Enter 2nd number: "
unset b
read b;;

1)
((sum = $a+$b))
echo "Sum Result : $sum";;

2)
((sub = $a-$b))
echo "Sub Result : $sub";;

3)
((mult = $a*$b))
echo "Mult Result : $mult";;

4)
((div = $a/$b))
((rem = $a%$b))
echo "Div Result : $div and Reminder : $rem";;

5)
echo "........program shutdown........"
exit 0;;

*)
echo "Wrong operator number. try again...";;
esac
done