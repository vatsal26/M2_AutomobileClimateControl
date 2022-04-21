## Test Plan
| Test ID | Description | Input|Output|Result|
| ----- | ----- |----- |----- |----- |
| T01 | Person seating | button =1|button=1|PASS|
| T02 | No person |button=0|button=0|PASS| 
| T03 | Tempreature request=0 | Temp=0|heater=OFF|PASS|
| T04 | Tempreature request   |Temp=10|heater=10 degree|PASS|
| T05 | Tempreature request   |Temp=15|heater=15 degree|PASS|
| T06 | Led ON|Button=1|Led=ON|Pass|
| T06 | Led OFF|Button=o|Led=OFF|Pass|
| T07 | LCD ON|Button=1|LCD ON|PASS|