# Write your MySQL query statement below
SELECT Person.firstName,Person.lastName,
Address.city,Address.state
from Person Person 
LEFT JOIN Address Address ON
 person.personId=Address.personId;
