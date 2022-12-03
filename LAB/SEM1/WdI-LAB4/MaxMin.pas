(***************************************** 
 Program name: MaxMin.pas 
 Author: Michal Mielewczyk, Drammen 2022
 Task 13: Napisz program, ktory w jednym obiegu petli
          znajduje najwiekszy i najmniejszy element tablicy.
 Created: 2022-12-03
 Ver. 1.00 
 *****************************************)

program MaxMin;
uses crt;
var tab : array[0..9] of integer;
  i : integer;
  max, min : integer;
begin  
  randomize;
  for i := 0 to 9 do
  begin
    tab[i] := random(100);
    writeln(tab[i]);
  end;
  max := tab[0];
  min := tab[0];
  for i := 1 to 9 do
  begin
    if tab[i] > max then
    begin
      max := tab[i];
    end;
    if tab[i] < min then
    begin
        min := tab[i];
    end;
  end;
  Writeln('max=', max,', min =', min);
end.