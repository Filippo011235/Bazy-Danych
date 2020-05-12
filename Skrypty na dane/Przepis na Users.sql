CREATE USER IF NOT EXISTS inz@localhost IDENTIFIED BY 'inz';

GRANT SELECT, UPDATE, INSERT
ON mydb.Material
TO inz@localhost;

GRANT SELECT, UPDATE, INSERT, DELETE
ON mydb.Odpad
TO inz@localhost;

-- ------------------------------------------
CREATE USER IF NOT EXISTS handel@localhost IDENTIFIED BY 'handel';

GRANT SELECT, UPDATE
ON mydb.Kontener
TO handel@localhost;

GRANT SELECT, INSERT
ON mydb.Sprzedaze
TO handel@localhost;

GRANT SELECT, UPDATE, INSERT, DELETE
ON mydb.Firma
TO handel@localhost;

-- ------------------------------------------
CREATE USER IF NOT EXISTS oper@localhost IDENTIFIED BY 'oper';

GRANT SELECT, UPDATE, INSERT
ON mydb.Smieciarka
TO oper@localhost;

GRANT SELECT, UPDATE, INSERT, DELETE
ON mydb.Odpad
TO oper@localhost;

GRANT SELECT, UPDATE, INSERT
ON mydb.Kontener
TO oper@localhost;
