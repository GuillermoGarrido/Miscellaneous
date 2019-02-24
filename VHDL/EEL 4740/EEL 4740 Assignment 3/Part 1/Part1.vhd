----------------------------------------------------------------------------------
-- Company: Florida International University
-- Engineer: Guillermo Garrido
-- 
-- Create Date:    18:59:18 02/16/2019 
-- Design Name: 
-- Module Name:    Part1 - Behavioral 
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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Part1 is
    Port ( DIPSW : in  STD_LOGIC_VECTOR (3 DOWNTO 0);
           Enable : out  STD_LOGIC;
           SevenSD : out  STD_LOGIC_VECTOR (7 DOWNTO 0));
end Part1;

architecture Behavioral of Part1 is

begin
Enable <= '0';
process(DIPSW)
begin
case (DIPSW) is
	when "1111" => SevenSD <= "11000000";
	when "1110" => SevenSD <= "11111001";
	when "1101" => SevenSD <= "10100100";
	when "1100" => SevenSD <= "10110000";
	when "1011" => SevenSD <= "10011001";
	when "1010" => SevenSD <= "10010010";
	when "1001" => SevenSD <= "10000010";
	when "1000" => SevenSD <= "11111000";
	when "0111" => SevenSD <= "10000000";
	when "0110" => SevenSD <= "10010000";
	when others => SevenSD <= "10111111";
end case;
end process;
end Behavioral;

