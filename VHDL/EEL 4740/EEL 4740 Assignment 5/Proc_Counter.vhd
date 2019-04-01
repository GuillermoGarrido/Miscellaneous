----------------------------------------------------------------------------------
-- Company: Florida International University
-- Engineer: Guillermo Garrido
-- 
-- Create Date:    
-- Design Name: 
-- Module Name:    Proc_Counter - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
--use IEEE.NUMERIC_STD.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity Proc_Counter is
    Port ( clk : in  STD_LOGIC;
           reset : in  STD_LOGIC;
           B : in  STD_LOGIC;
			  D : in STD_LOGIC;
           C : out  STD_LOGIC_VECTOR (7 downto 0));
end Proc_Counter;

architecture Behavioral of Proc_Counter is
type statetype is (start, Swait, count, Bwait, countdown, Dwait);
signal state, nextstate: statetype;

signal counter, counternext: STD_LOGIC_VECTOR (7 downto 0);

begin
--state register
process(clk, reset) 
begin
if(reset ='0') then
state <= start;
counter <= "00000000";
elsif (clk' event and clk='1') then
state <= nextstate;
counter <=counternext;
end if;
end process;

--combinational logic
process(state, B)
begin 
case (state) is
when start =>
counternext <="00000000";
nextstate <= Swait;

when Swait =>
counternext <=counter;
if (B='0') then
nextstate <= count;
elsif (D='0') then
nextstate <= countdown;
else
nextstate<= Swait;
end if;

when count =>
counternext <= counter + 1;
if (B='0') then
nextstate <= Bwait;
else
nextstate<= Swait;
end if;

when countdown =>
counternext <= counter - 1;
if(D='0') then
nextstate <= Dwait;
else
nextstate<= Swait;
end if;

when Bwait =>
counternext <=counter;
if (B='0') then
--c <= counter;
nextstate <= Bwait;
else
nextstate<=Swait;
end if;

when Dwait =>
counternext <=counter;
if (D='0') then
--c <= counter;
nextstate <= Dwait;
else
--c <= counter;
nextstate<= Swait;
end if;

end case;
end process;
--assign counter to c
c <= counter;

end Behavioral;

