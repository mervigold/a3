{- Exercise 3.3 -}
-- 3.3.1
data Color = Green | Yellow | Orange | Red deriving Show

severity :: Color -> Integer
severity Green = 0
severity Yellow = 1
severity Orange = 2
severity Red = 3

-- 3.3.2
data District = Kufstein | Schwaz | InnsbruckStadt | InnsbruckLand | Imst | Landeck | Reutte | Kitzbühel | Lienz deriving Show

colorOf :: District -> Color
colorOf Kufstein = Orange
colorof Schwaz = Red
colorof InnsbruckStadt = Red
colorof InnsbruckLand = Red
colorof Imst = Red
colorof Landeck = Red
colorof Reutte = Yellow
colorof Kitzbühel = Yellow
colorof Lienz = Yellow



-- 3.3.3
moreSevere :: District -> District -> Bool
moreSevere x y = if severity (colorof x) == 2 || severity (colorof x) ==  3 then True 
  else (if severity (colorof y) ==  1 || severity (colorof y) ==  0 then True else False)