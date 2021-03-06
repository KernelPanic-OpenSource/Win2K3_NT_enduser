<%
	'
	' Copyright (c) Microsoft Corporation.  All rights reserved. 
	'
	DIM L_TASKTITLE_TEXT
	L_TASKTITLE_TEXT = GetLocString("datetimemsg.dll", "&H40010001", "")
	DIM L_INVALIDTIME_ERRORMESSAGE
	L_INVALIDTIME_ERRORMESSAGE = GetLocString("datetimemsg.dll", "&H40010004", "")
	DIM L_INVALIDDATE_ERRORMESSAGE
	L_INVALIDDATE_ERRORMESSAGE = GetLocString("datetimemsg.dll", "&H40010005", "")
	DIM L_INVALIDDATETIME_ERRORMESSAGE
	L_INVALIDDATETIME_ERRORMESSAGE = GetLocString("datetimemsg.dll", "&H40010006", "")
	DIM L_INVALIDTIMEZONE_ERRORMESSAGE
	L_INVALIDTIMEZONE_ERRORMESSAGE = GetLocString("datetimemsg.dll", "&H40010007", "")
	DIM L_AUTOMATICALLY_TEXT
	L_AUTOMATICALLY_TEXT = GetLocString("datetimemsg.dll", "&H40010009", "")
	DIM L_NOTE_LEFT_TEXT
	L_NOTE_LEFT_TEXT = GetLocString("datetimemsg.dll", "&H4001000A", "")
	DIM L_NOTE_DESCRIPTION_TEXT
	L_NOTE_DESCRIPTION_TEXT = GetLocString("datetimemsg.dll", "&H4001000B", "")
	DIM L_YEAR
	L_YEAR = GetLocString("datetimemsg.dll", "&H4001000C", "")
	DIM L_MONTH
	L_MONTH = GetLocString("datetimemsg.dll", "&H4001000D", "")
	DIM L_DATE
	L_DATE = GetLocString("datetimemsg.dll", "&H4001000E", "")
	DIM L_TIME
	L_TIME = GetLocString("datetimemsg.dll", "&H4001000F", "")
	DIM L_TIMEZONE
	L_TIMEZONE = GetLocString("datetimemsg.dll", "&H40010010", "")
	
	'Dates
	          
	Dim L_DATES_TEXT(31)
	
	L_DATES_TEXT(1)=GetLocString("datetimemsg.dll","&H40010011", "")
	L_DATES_TEXT(2)= GetLocString("datetimemsg.dll","&H40010012", "")
	L_DATES_TEXT(3)= GetLocString("datetimemsg.dll","&H40010013", "")
	L_DATES_TEXT(4)= GetLocString("datetimemsg.dll","&H40010014", "")
	L_DATES_TEXT(5)= GetLocString("datetimemsg.dll","&H40010015", "")
	L_DATES_TEXT(6)= GetLocString("datetimemsg.dll","&H40010016", "")
	L_DATES_TEXT(7)= GetLocString("datetimemsg.dll","&H40010017", "")
	L_DATES_TEXT(8)= GetLocString("datetimemsg.dll","&H40010018", "")
	L_DATES_TEXT(9)= GetLocString("datetimemsg.dll","&H40010019", "")
	L_DATES_TEXT(10)= GetLocString("datetimemsg.dll","&H4001001A", "")
	L_DATES_TEXT(11)= GetLocString("datetimemsg.dll","&H4001001B", "")
	L_DATES_TEXT(12)= GetLocString("datetimemsg.dll","&H4001001C", "")
	L_DATES_TEXT(13)= GetLocString("datetimemsg.dll","&H4001001D", "")
	L_DATES_TEXT(14)= GetLocString("datetimemsg.dll","&H4001001E", "")
	L_DATES_TEXT(15)= GetLocString("datetimemsg.dll","&H4001001F", "")
	L_DATES_TEXT(16)= GetLocString("datetimemsg.dll","&H40010020", "")
	L_DATES_TEXT(17)= GetLocString("datetimemsg.dll","&H40010021", "")
	L_DATES_TEXT(18)= GetLocString("datetimemsg.dll","&H40010022", "")
	L_DATES_TEXT(19)= GetLocString("datetimemsg.dll","&H40010023","")
	L_DATES_TEXT(20)= GetLocString("datetimemsg.dll","&H40010024", "")
	L_DATES_TEXT(21)= GetLocString("datetimemsg.dll","&H40010025", "")
	L_DATES_TEXT(22)= GetLocString("datetimemsg.dll","&H40010026", "")
	L_DATES_TEXT(23)= GetLocString("datetimemsg.dll","&H40010027", "")
	L_DATES_TEXT(24)= GetLocString("datetimemsg.dll","&H40010028", "")
	L_DATES_TEXT(25)= GetLocString("datetimemsg.dll","&H40010029", "")
	L_DATES_TEXT(26)= GetLocString("datetimemsg.dll","&H4001002A", "")
	L_DATES_TEXT(27)= GetLocString("datetimemsg.dll","&H4001002B", "")
	L_DATES_TEXT(28)= GetLocString("datetimemsg.dll","&H4001002C", "")
	L_DATES_TEXT(29)= GetLocString("datetimemsg.dll","&H4001002D", "")
	L_DATES_TEXT(30)= GetLocString("datetimemsg.dll","&H4001002E", "")
	L_DATES_TEXT(31)= GetLocString("datetimemsg.dll","&H4001002F", "")
	
	' Years
	
	Dim L_YEARS_TEXT(39)
	L_YEARS_TEXT(1)= GetLocString("datetimemsg.dll","&H40010030", "")
	L_YEARS_TEXT(2)= GetLocString("datetimemsg.dll","&H40010031", "")
	L_YEARS_TEXT(3)= GetLocString("datetimemsg.dll","&H40010032", "")
	L_YEARS_TEXT(4)= GetLocString("datetimemsg.dll","&H40010033", "")
	L_YEARS_TEXT(5)= GetLocString("datetimemsg.dll","&H40010034", "")
	L_YEARS_TEXT(6)= GetLocString("datetimemsg.dll","&H40010035", "")
	L_YEARS_TEXT(7)= GetLocString("datetimemsg.dll","&H40010036", "")
	L_YEARS_TEXT(8)= GetLocString("datetimemsg.dll","&H40010037", "")
	L_YEARS_TEXT(9)= GetLocString("datetimemsg.dll","&H40010038", "")
	L_YEARS_TEXT(10)= GetLocString("datetimemsg.dll","&H40010039", "")
	L_YEARS_TEXT(11)= GetLocString("datetimemsg.dll","&H4001003A", "")
	L_YEARS_TEXT(12)= GetLocString("datetimemsg.dll","&H4001003B", "")
	L_YEARS_TEXT(13)= GetLocString("datetimemsg.dll","&H4001003C", "")
	L_YEARS_TEXT(14)= GetLocString("datetimemsg.dll","&H4001003D", "")
	L_YEARS_TEXT(15)= GetLocString("datetimemsg.dll","&H4001003E", "")
	L_YEARS_TEXT(16)= GetLocString("datetimemsg.dll","&H4001003F", "")
	L_YEARS_TEXT(17)= GetLocString("datetimemsg.dll","&H40010040", "")
	L_YEARS_TEXT(18)= GetLocString("datetimemsg.dll","&H40010041", "")
	L_YEARS_TEXT(19)= GetLocString("datetimemsg.dll","&H40010042", "")
	L_YEARS_TEXT(20)= GetLocString("datetimemsg.dll","&H40010043", "")
	L_YEARS_TEXT(21)= GetLocString("datetimemsg.dll","&H40010044", "")
	L_YEARS_TEXT(22)= GetLocString("datetimemsg.dll","&H40010045", "")
	L_YEARS_TEXT(23)= GetLocString("datetimemsg.dll","&H40010046", "")
	L_YEARS_TEXT(24)= GetLocString("datetimemsg.dll","&H40010047", "")
	L_YEARS_TEXT(25)= GetLocString("datetimemsg.dll","&H40010048", "")
	L_YEARS_TEXT(26)= GetLocString("datetimemsg.dll","&H40010049", "")
	L_YEARS_TEXT(27)= GetLocString("datetimemsg.dll","&H4001004A", "")
	L_YEARS_TEXT(28)= GetLocString("datetimemsg.dll","&H4001004B", "")
	L_YEARS_TEXT(29)= GetLocString("datetimemsg.dll","&H4001004C", "")
	L_YEARS_TEXT(30)= GetLocString("datetimemsg.dll","&H4001004D", "")
	L_YEARS_TEXT(31)= GetLocString("datetimemsg.dll","&H4001004E", "")
	L_YEARS_TEXT(32)= GetLocString("datetimemsg.dll","&H4001004F", "")
	L_YEARS_TEXT(33)= GetLocString("datetimemsg.dll","&H40010050", "")
	L_YEARS_TEXT(34)= GetLocString("datetimemsg.dll","&H40010051", "")
	L_YEARS_TEXT(35)= GetLocString("datetimemsg.dll","&H40010052", "")
	L_YEARS_TEXT(36)= GetLocString("datetimemsg.dll","&H40010053", "")
	L_YEARS_TEXT(37)= GetLocString("datetimemsg.dll","&H40010054", "")
	L_YEARS_TEXT(38)= GetLocString("datetimemsg.dll","&H40010055", "")
	L_YEARS_TEXT(39)= GetLocString("datetimemsg.dll","&H40010056", "")

	'Months
	
	Dim L_MONTHS_TEXT(12)
	L_MONTHS_TEXT(1) = GetLocString("datetimemsg.dll","&H40010057", "")
	L_MONTHS_TEXT(2) = GetLocString("datetimemsg.dll","&H40010058", "")
	L_MONTHS_TEXT(3) = GetLocString("datetimemsg.dll","&H40010059", "")
	L_MONTHS_TEXT(4) = GetLocString("datetimemsg.dll","&H4001005A", "")
	L_MONTHS_TEXT(5) = GetLocString("datetimemsg.dll","&H4001005B", "")
	L_MONTHS_TEXT(6) = GetLocString("datetimemsg.dll","&H4001005C", "")
	L_MONTHS_TEXT(7) = GetLocString("datetimemsg.dll","&H4001005D", "")
	L_MONTHS_TEXT(8) = GetLocString("datetimemsg.dll","&H4001005E", "")
	L_MONTHS_TEXT(9) = GetLocString("datetimemsg.dll","&H4001005F", "")
	L_MONTHS_TEXT(10) = GetLocString("datetimemsg.dll","&H40010060", "")
	L_MONTHS_TEXT(11) = GetLocString("datetimemsg.dll","&H40010061", "")
	L_MONTHS_TEXT(12) = GetLocString("datetimemsg.dll","&H40010062", "")

	'For AM , PM and 24 hrs 
	Dim L_TIME_AM
	L_TIME_AM = GetLocString("datetimemsg.dll","&H40010063", "")
	Dim L_TIME_PM
	L_TIME_PM = GetLocString("datetimemsg.dll","&H40010064", "")
	Dim L_TIME_24HR 
	L_TIME_24HR = GetLocString("datetimemsg.dll","&H40010065", "")
	
	'For Time zones 	
	Dim L_TIMEZONES_TEXT(74)
	
	L_TIMEZONES_TEXT(1) = GetLocString("datetimemsg.dll","&H40010066", "")
	L_TIMEZONES_TEXT(2) = GetLocString("datetimemsg.dll","&H40010067", "")
	L_TIMEZONES_TEXT(3) = GetLocString("datetimemsg.dll","&H40010068", "")
	L_TIMEZONES_TEXT(4) = GetLocString("datetimemsg.dll","&H40010069", "")
	L_TIMEZONES_TEXT(5) = GetLocString("datetimemsg.dll","&H4001006A", "")
	L_TIMEZONES_TEXT(6) = GetLocString("datetimemsg.dll","&H4001006B", "")
	L_TIMEZONES_TEXT(7) = GetLocString("datetimemsg.dll","&H4001006C", "")
	L_TIMEZONES_TEXT(8) = GetLocString("datetimemsg.dll","&H4001006D", "")
	L_TIMEZONES_TEXT(9) = GetLocString("datetimemsg.dll","&H4001006E", "")
	L_TIMEZONES_TEXT(10) = GetLocString("datetimemsg.dll","&H4001006F", "")
	L_TIMEZONES_TEXT(11) = GetLocString("datetimemsg.dll","&H40010070", "")
	L_TIMEZONES_TEXT(12) = GetLocString("datetimemsg.dll","&H40010071", "")
	L_TIMEZONES_TEXT(13) = GetLocString("datetimemsg.dll","&H40010072", "")
	L_TIMEZONES_TEXT(14) = GetLocString("datetimemsg.dll","&H40010073", "")
	L_TIMEZONES_TEXT(15) = GetLocString("datetimemsg.dll","&H40010074", "")
	L_TIMEZONES_TEXT(16) = GetLocString("datetimemsg.dll","&H40010075", "")
	L_TIMEZONES_TEXT(17) = GetLocString("datetimemsg.dll","&H40010076", "")
	L_TIMEZONES_TEXT(18) = GetLocString("datetimemsg.dll","&H40010077", "")
	L_TIMEZONES_TEXT(19) = GetLocString("datetimemsg.dll","&H40010078", "")
	L_TIMEZONES_TEXT(20) = GetLocString("datetimemsg.dll","&H40010079", "")
	L_TIMEZONES_TEXT(21) = GetLocString("datetimemsg.dll","&H4001007A", "")
	L_TIMEZONES_TEXT(22) = GetLocString("datetimemsg.dll","&H4001007B", "")
	L_TIMEZONES_TEXT(23) = GetLocString("datetimemsg.dll","&H4001007C", "")
	L_TIMEZONES_TEXT(24) = GetLocString("datetimemsg.dll","&H4001007D", "")
	L_TIMEZONES_TEXT(25) = GetLocString("datetimemsg.dll","&H4001007E", "")
	L_TIMEZONES_TEXT(26) = GetLocString("datetimemsg.dll","&H4001007F", "")
	L_TIMEZONES_TEXT(27) = GetLocString("datetimemsg.dll","&H40010080", "")
	L_TIMEZONES_TEXT(28) = GetLocString("datetimemsg.dll","&H40010081", "")
	L_TIMEZONES_TEXT(29) = GetLocString("datetimemsg.dll","&H40010082", "")
	L_TIMEZONES_TEXT(30) = GetLocString("datetimemsg.dll","&H40010083", "")
	L_TIMEZONES_TEXT(31) = GetLocString("datetimemsg.dll","&H40010084", "")
	L_TIMEZONES_TEXT(32) = GetLocString("datetimemsg.dll","&H40010085", "")
	L_TIMEZONES_TEXT(33) = GetLocString("datetimemsg.dll","&H40010086", "")
	L_TIMEZONES_TEXT(34) = GetLocString("datetimemsg.dll","&H40010087", "")
	L_TIMEZONES_TEXT(35) = GetLocString("datetimemsg.dll","&H40010088", "")
	L_TIMEZONES_TEXT(36) = GetLocString("datetimemsg.dll","&H40010089", "")
	L_TIMEZONES_TEXT(37) = GetLocString("datetimemsg.dll","&H4001008A", "")
	L_TIMEZONES_TEXT(38) = GetLocString("datetimemsg.dll","&H4001008B", "")
	L_TIMEZONES_TEXT(39) = GetLocString("datetimemsg.dll","&H4001008C", "")
	L_TIMEZONES_TEXT(40) = GetLocString("datetimemsg.dll","&H4001008D", "")
	L_TIMEZONES_TEXT(41) = GetLocString("datetimemsg.dll","&H4001008E", "")
	L_TIMEZONES_TEXT(42) = GetLocString("datetimemsg.dll","&H4001008F", "")
	L_TIMEZONES_TEXT(43) = GetLocString("datetimemsg.dll","&H40010090", "")
	L_TIMEZONES_TEXT(44) = GetLocString("datetimemsg.dll","&H40010091", "")
	L_TIMEZONES_TEXT(45) = GetLocString("datetimemsg.dll","&H40010092", "")
	L_TIMEZONES_TEXT(46) = GetLocString("datetimemsg.dll","&H40010093", "")
	L_TIMEZONES_TEXT(47) = GetLocString("datetimemsg.dll","&H40010094", "")
	L_TIMEZONES_TEXT(48) = GetLocString("datetimemsg.dll","&H40010095", "")
	L_TIMEZONES_TEXT(49) = GetLocString("datetimemsg.dll","&H40010096", "")
	L_TIMEZONES_TEXT(50) = GetLocString("datetimemsg.dll","&H40010097", "")
	L_TIMEZONES_TEXT(51) = GetLocString("datetimemsg.dll","&H40010098", "")
	L_TIMEZONES_TEXT(52) = GetLocString("datetimemsg.dll","&H40010099", "")
	L_TIMEZONES_TEXT(53) = GetLocString("datetimemsg.dll","&H4001009A", "")
	L_TIMEZONES_TEXT(54) = GetLocString("datetimemsg.dll","&H4001009B", "")
	L_TIMEZONES_TEXT(55) = GetLocString("datetimemsg.dll","&H4001009C", "")
	L_TIMEZONES_TEXT(56) = GetLocString("datetimemsg.dll","&H4001009D", "")
	L_TIMEZONES_TEXT(57) = GetLocString("datetimemsg.dll","&H4001009E", "")
	L_TIMEZONES_TEXT(58) = GetLocString("datetimemsg.dll","&H4001009F", "")
	L_TIMEZONES_TEXT(59) = GetLocString("datetimemsg.dll","&H400100A0", "")
	L_TIMEZONES_TEXT(60) = GetLocString("datetimemsg.dll","&H400100A1", "")
	L_TIMEZONES_TEXT(61) = GetLocString("datetimemsg.dll","&H400100A2", "")
	L_TIMEZONES_TEXT(62) = GetLocString("datetimemsg.dll","&H400100A3", "")
	L_TIMEZONES_TEXT(63) = GetLocString("datetimemsg.dll","&H400100A4", "")
	L_TIMEZONES_TEXT(64) = GetLocString("datetimemsg.dll","&H400100A5", "")
	L_TIMEZONES_TEXT(65) = GetLocString("datetimemsg.dll","&H400100A6", "")
	L_TIMEZONES_TEXT(66) = GetLocString("datetimemsg.dll","&H400100A7", "")
	L_TIMEZONES_TEXT(67) = GetLocString("datetimemsg.dll","&H400100A8", "")
	L_TIMEZONES_TEXT(68) = GetLocString("datetimemsg.dll","&H400100A9", "")
	L_TIMEZONES_TEXT(69) = GetLocString("datetimemsg.dll","&H400100AA", "")
	L_TIMEZONES_TEXT(70) = GetLocString("datetimemsg.dll","&H400100AB", "")
	L_TIMEZONES_TEXT(71) = GetLocString("datetimemsg.dll","&H400100AC", "")
	L_TIMEZONES_TEXT(72) = GetLocString("datetimemsg.dll","&H400100AD", "")
	L_TIMEZONES_TEXT(73) = GetLocString("datetimemsg.dll","&H400100AE", "")
	L_TIMEZONES_TEXT(74) = GetLocString("datetimemsg.dll","&H400100AF", "")
	
	DIM L_TASKCTX_OBJECT_CREATION_FAIL_ERRORMESSAGE
	L_TASKCTX_OBJECT_CREATION_FAIL_ERRORMESSAGE=GetLocString("datetimemsg.dll","&HC0010011", "")
	
	%>
	
	