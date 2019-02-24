----------------------------------------------------------------------------------
-- Company: 
-- Engineer: Guillermo Garrido
-- 
-- Create Date:    11:53:51 02/17/2019 
-- Design Name: 
-- Module Name:    Part2 - Behavioral 
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

entity Part2 is
    Port ( clk : in  STD_LOGIC;
           d : in  STD_LOGIC_VECTOR (7 downto 0);
           q : out  STD_LOGIC_VECTOR (7 downto 0));
end Part2;

architecture Behavioral of Part2 is

begin
	process(clk) begin
		if rising_edge(clk) then
			q <= d;
		end if;
	end process;

end Behavioral;

