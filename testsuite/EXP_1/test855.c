
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x16 = INT32_MIN;
int8_t x219 = 0;
uint32_t x220 = UINT32_MAX;
static volatile int8_t x297 = -30;
uint32_t x298 = 17786042U;
int8_t x299 = 6;
int64_t x345 = INT64_MIN;
volatile uint8_t x392 = 5U;
uint8_t x447 = 31U;
uint8_t x474 = UINT8_MAX;
volatile uint8_t x476 = UINT8_MAX;
static int32_t t8 = -3;
static int64_t x493 = INT64_MAX;
volatile int64_t x642 = 796453710LL;
uint8_t x698 = 3U;
uint8_t x700 = 1U;
int8_t x771 = 11;
int16_t x808 = INT16_MIN;
volatile int32_t t16 = 2809;
int8_t x889 = INT8_MAX;
int64_t x890 = 1151LL;
uint64_t x891 = 0LLU;
volatile int64_t t17 = -6368115355747LL;
volatile uint16_t x901 = UINT16_MAX;
int64_t t20 = -24080LL;
int8_t x1150 = 53;
volatile int8_t x1151 = 1;
uint32_t x1241 = UINT32_MAX;
volatile uint32_t x1390 = 13687U;
uint32_t x1391 = 41U;
volatile uint16_t x1491 = 24U;
int64_t x1549 = INT64_MIN;
int16_t x1550 = INT16_MIN;
volatile int64_t t30 = -1LL;
int64_t x1554 = -1LL;
int16_t x1566 = 1;
int8_t x1598 = 1;
int64_t x1600 = INT64_MIN;
volatile int32_t x1749 = INT32_MIN;
uint32_t t36 = 0U;
volatile int32_t x1888 = INT32_MIN;
volatile int32_t x1982 = INT32_MIN;
uint8_t x2107 = 7U;
static volatile uint8_t x2108 = UINT8_MAX;
uint16_t x2127 = 1U;
volatile uint8_t x2207 = 15U;
volatile uint64_t x2243 = 15LLU;
static volatile int16_t x2244 = -81;
int32_t x2292 = INT32_MIN;
volatile int32_t t50 = -3;
static int8_t x2305 = -1;
int16_t x2345 = 26;
uint64_t x2357 = UINT64_MAX;
int32_t x2360 = INT32_MIN;
uint16_t x2370 = 1U;
uint32_t x2586 = 26923U;
int32_t x2688 = -1;
volatile int8_t x2837 = 2;
int8_t x3051 = 1;
static uint16_t x3052 = 11U;
volatile int64_t t68 = 3LL;
int8_t x3191 = 2;
int8_t x3242 = INT8_MAX;
static volatile uint8_t x3244 = UINT8_MAX;
volatile int16_t x3267 = 1;
volatile int32_t t74 = 15350202;
static uint32_t x3413 = 739053837U;
int8_t x3414 = -1;
static int16_t x3416 = INT16_MIN;
uint8_t x3462 = 91U;
int64_t t77 = 117019898250320LL;
int16_t x3492 = INT16_MAX;
static volatile uint64_t t80 = 4527291485027044638LLU;
uint8_t x3604 = UINT8_MAX;
uint16_t x3791 = 28U;
static int32_t x3792 = -1;
volatile uint64_t t83 = 14057866952855250LLU;
volatile uint64_t t85 = 95675757LLU;
uint32_t x4077 = UINT32_MAX;
uint32_t t87 = 45108U;
int64_t t89 = 48LL;
int32_t x4185 = -1;
uint64_t t90 = 3510021686784325837LLU;
uint32_t x4327 = 26U;
volatile int32_t t94 = 8;
volatile int64_t x4492 = -816742870484704156LL;
int64_t t96 = 723336951096LL;
int16_t x4604 = INT16_MIN;
uint32_t x4684 = 100119U;
static int32_t t103 = -23892;
volatile int16_t x4813 = INT16_MIN;
uint16_t x4839 = 18U;
int8_t x4890 = 3;
uint64_t x5110 = 68988725562848LLU;
int64_t x5340 = INT64_MIN;
volatile uint64_t t118 = 11910162LLU;
static volatile int32_t x5378 = INT32_MIN;
int8_t x5379 = 0;
int64_t x5638 = INT64_MIN;
int32_t x5660 = -39436568;
volatile int64_t x5717 = INT64_MAX;
uint32_t x5720 = UINT32_MAX;
volatile int16_t x5749 = INT16_MAX;
static volatile uint64_t x5751 = 1LLU;
uint64_t t126 = 22LLU;
static volatile int32_t t127 = 27056271;
int8_t x5841 = INT8_MIN;
static uint32_t x5859 = 3U;
uint16_t x5970 = 1U;
volatile int32_t x5972 = INT32_MIN;
static uint32_t x5986 = UINT32_MAX;
volatile uint32_t t132 = 9U;
int32_t x6046 = INT32_MIN;
volatile uint8_t x6065 = UINT8_MAX;
volatile int16_t x6066 = 1;
uint32_t x6067 = 0U;
int16_t x6138 = -846;
int16_t x6140 = -5;
static uint16_t x6167 = 5U;
int64_t x6206 = INT64_MIN;
uint64_t x6215 = 1LLU;
static uint64_t x6216 = 112396437LLU;
uint16_t x6222 = UINT16_MAX;
int8_t x6223 = 0;
volatile int8_t x6224 = 1;
volatile int32_t t139 = 3520637;
static int16_t x6314 = 1216;
int32_t t140 = 1051898246;
int16_t x6317 = INT16_MIN;
volatile int8_t x6318 = INT8_MIN;
uint8_t x6323 = 62U;
uint64_t t142 = 143411304110520LLU;
int64_t x6341 = -150678791865588LL;
int8_t x6343 = 0;
static volatile int16_t x6344 = INT16_MIN;
uint8_t x6415 = 1U;
int8_t x6416 = 1;
static int64_t x6564 = 0LL;
uint64_t x6773 = 186767357942LLU;
static volatile int64_t x6776 = INT64_MIN;
volatile uint64_t t150 = 1223319366LLU;
int32_t x6802 = -1;
uint64_t x6806 = UINT64_MAX;
volatile int32_t x6838 = INT32_MAX;
uint16_t x6849 = 609U;
uint64_t x6925 = UINT64_MAX;
int32_t x6975 = 15;
static volatile uint64_t t157 = 0LLU;
volatile int32_t t158 = -4469636;
static int64_t x7301 = INT64_MIN;
volatile int64_t x7302 = INT64_MIN;
static uint16_t x7314 = UINT16_MAX;
static uint8_t x7315 = 3U;
int64_t x7330 = -2072520923LL;
int16_t x7438 = -16;
volatile int32_t x7602 = INT32_MIN;
uint16_t x7603 = 6U;
uint8_t x7633 = UINT8_MAX;
uint16_t x7642 = UINT16_MAX;
uint32_t x7936 = 714468U;
volatile int64_t x7942 = INT64_MIN;
uint8_t x7943 = 1U;
volatile uint32_t x8023 = 18U;
uint8_t x8024 = UINT8_MAX;
int64_t x8154 = -1LL;
static uint32_t x8179 = 15U;
static volatile uint32_t x8180 = 75832U;
volatile int8_t x8208 = INT8_MIN;
static volatile int32_t x8265 = INT32_MIN;
static int16_t x8266 = INT16_MIN;
uint32_t x8356 = UINT32_MAX;
static volatile int64_t t184 = -789685LL;
uint8_t x8431 = 54U;
uint16_t x8432 = UINT16_MAX;
volatile int64_t t187 = -1420275292LL;
volatile uint8_t x8630 = 2U;
int16_t x8692 = INT16_MIN;
volatile uint8_t x8735 = 0U;
int32_t x8762 = INT32_MIN;
static volatile int64_t x8764 = -24733LL;
uint32_t x8805 = 210U;
volatile int8_t x8808 = INT8_MIN;
int16_t x8810 = INT16_MIN;
uint16_t x8811 = 4U;
uint16_t x8839 = 59U;
static int32_t x8848 = -1596;
uint64_t x8853 = 680266363843789597LLU;
uint16_t x8854 = 117U;
uint64_t x8894 = UINT64_MAX;
uint8_t x8895 = 24U;


void f0(void) {
    	uint64_t x13 = 13901839892338575LLU;
	static int8_t x14 = INT8_MIN;
	uint16_t x15 = 1U;
	uint64_t t0 = 323446460876166LLU;

    t0 = (((x13%x14)<<x15)+x16);

    if (t0 != 27803677637193502LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x217 = 3LLU;
	int8_t x218 = INT8_MIN;
	static volatile uint64_t t1 = 12782243876276101LLU;

    t1 = (((x217%x218)<<x219)+x220);

    if (t1 != 4294967298LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x300 = 61;
	uint32_t t2 = 1074034U;

    t2 = (((x297%x298)<<x299)+x300);

    if (t2 != 545993277U) { NG(); } else { ; }
	
}

void f3(void) {
    	static int64_t x325 = INT64_MAX;
	volatile int8_t x326 = -1;
	static uint16_t x327 = 14U;
	uint32_t x328 = 1U;
	volatile int64_t t3 = 3390526745024LL;

    t3 = (((x325%x326)<<x327)+x328);

    if (t3 != 1LL) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x346 = INT64_MIN;
	volatile uint8_t x347 = 1U;
	int16_t x348 = INT16_MAX;
	static int64_t t4 = -3179779936348734LL;

    t4 = (((x345%x346)<<x347)+x348);

    if (t4 != 32767LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x361 = 9898979U;
	static volatile int64_t x362 = -1LL;
	int8_t x363 = 12;
	int16_t x364 = INT16_MIN;
	volatile int64_t t5 = -6051224302861624LL;

    t5 = (((x361%x362)<<x363)+x364);

    if (t5 != -32768LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x389 = UINT32_MAX;
	int32_t x390 = 58;
	uint16_t x391 = 24U;
	uint32_t t6 = 13873U;

    t6 = (((x389%x390)<<x391)+x392);

    if (t6 != 251658245U) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x445 = 2;
	static int64_t x446 = INT64_MAX;
	static volatile int16_t x448 = -1;
	int64_t t7 = -3038433353684331LL;

    t7 = (((x445%x446)<<x447)+x448);

    if (t7 != 4294967295LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x473 = 253;
	uint32_t x475 = 1U;

    t8 = (((x473%x474)<<x475)+x476);

    if (t8 != 761) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x485 = -168974506956LL;
	int8_t x486 = -4;
	volatile int8_t x487 = 1;
	static uint32_t x488 = 215327603U;
	int64_t t9 = 1LL;

    t9 = (((x485%x486)<<x487)+x488);

    if (t9 != 215327603LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x494 = UINT32_MAX;
	static uint32_t x495 = 3U;
	int64_t x496 = INT64_MIN;
	int64_t t10 = 87172764248LL;

    t10 = (((x493%x494)<<x495)+x496);

    if (t10 != -9223372019674906632LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint8_t x605 = 107U;
	uint8_t x606 = 117U;
	static uint16_t x607 = 1U;
	int8_t x608 = 0;
	int32_t t11 = 1;

    t11 = (((x605%x606)<<x607)+x608);

    if (t11 != 214) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint16_t x641 = 10U;
	uint32_t x643 = 19U;
	int32_t x644 = -198164312;
	int64_t t12 = 23LL;

    t12 = (((x641%x642)<<x643)+x644);

    if (t12 != -192921432LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x697 = 1840;
	int8_t x699 = 1;
	static int32_t t13 = 151226;

    t13 = (((x697%x698)<<x699)+x700);

    if (t13 != 3) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int8_t x769 = 0;
	volatile uint8_t x770 = 121U;
	static uint64_t x772 = 4611128480159070256LLU;
	uint64_t t14 = 1354464163917332845LLU;

    t14 = (((x769%x770)<<x771)+x772);

    if (t14 != 4611128480159070256LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x805 = INT64_MIN;
	int8_t x806 = INT8_MIN;
	uint16_t x807 = 0U;
	static int64_t t15 = -120791LL;

    t15 = (((x805%x806)<<x807)+x808);

    if (t15 != -32768LL) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint16_t x853 = UINT16_MAX;
	int8_t x854 = 15;
	uint8_t x855 = 18U;
	int16_t x856 = INT16_MIN;

    t16 = (((x853%x854)<<x855)+x856);

    if (t16 != -32768) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile uint8_t x892 = 2U;

    t17 = (((x889%x890)<<x891)+x892);

    if (t17 != 129LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x902 = UINT32_MAX;
	int16_t x903 = 1;
	int64_t x904 = 0LL;
	volatile int64_t t18 = -216459556978LL;

    t18 = (((x901%x902)<<x903)+x904);

    if (t18 != 131070LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x1029 = UINT16_MAX;
	uint32_t x1030 = UINT32_MAX;
	static uint8_t x1031 = 0U;
	static volatile uint16_t x1032 = 5119U;
	uint32_t t19 = 260442914U;

    t19 = (((x1029%x1030)<<x1031)+x1032);

    if (t19 != 70654U) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x1049 = 41851U;
	volatile int64_t x1050 = INT64_MIN;
	int8_t x1051 = 1;
	int32_t x1052 = 47180;

    t20 = (((x1049%x1050)<<x1051)+x1052);

    if (t20 != 130882LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static int32_t x1149 = INT32_MAX;
	int64_t x1152 = 17LL;
	static volatile int64_t t21 = -441332205187523LL;

    t21 = (((x1149%x1150)<<x1151)+x1152);

    if (t21 != 57LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x1242 = INT64_MIN;
	int8_t x1243 = 1;
	int16_t x1244 = INT16_MIN;
	volatile int64_t t22 = 0LL;

    t22 = (((x1241%x1242)<<x1243)+x1244);

    if (t22 != 8589901822LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint64_t x1273 = UINT64_MAX;
	int8_t x1274 = INT8_MIN;
	uint8_t x1275 = 5U;
	volatile uint16_t x1276 = 544U;
	volatile uint64_t t23 = 347LLU;

    t23 = (((x1273%x1274)<<x1275)+x1276);

    if (t23 != 4608LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x1277 = UINT16_MAX;
	volatile uint32_t x1278 = UINT32_MAX;
	int8_t x1279 = 2;
	uint32_t x1280 = UINT32_MAX;
	uint32_t t24 = 918676U;

    t24 = (((x1277%x1278)<<x1279)+x1280);

    if (t24 != 262139U) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x1389 = 55623353LLU;
	uint32_t x1392 = 12583U;
	uint64_t t25 = 107LLU;

    t25 = (((x1389%x1390)<<x1391)+x1392);

    if (t25 != 28745631996588327LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x1409 = 9724U;
	uint16_t x1410 = 13936U;
	uint8_t x1411 = 3U;
	int16_t x1412 = 55;
	static volatile int32_t t26 = 1027510;

    t26 = (((x1409%x1410)<<x1411)+x1412);

    if (t26 != 77847) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x1425 = -1LL;
	volatile int32_t x1426 = -1;
	uint64_t x1427 = 11LLU;
	int16_t x1428 = INT16_MIN;
	int64_t t27 = 199583589083551LL;

    t27 = (((x1425%x1426)<<x1427)+x1428);

    if (t27 != -32768LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x1489 = 18662U;
	uint32_t x1490 = 23471U;
	volatile uint8_t x1492 = 3U;
	static uint32_t t28 = 6231U;

    t28 = (((x1489%x1490)<<x1491)+x1492);

    if (t28 != 3858759683U) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint8_t x1509 = 0U;
	int8_t x1510 = 6;
	static uint16_t x1511 = 3U;
	uint64_t x1512 = 148085793081LLU;
	static volatile uint64_t t29 = 27032092575220LLU;

    t29 = (((x1509%x1510)<<x1511)+x1512);

    if (t29 != 148085793081LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x1551 = 3U;
	static volatile int64_t x1552 = -1LL;

    t30 = (((x1549%x1550)<<x1551)+x1552);

    if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x1553 = INT16_MIN;
	int32_t x1555 = 3;
	int16_t x1556 = 48;
	int64_t t31 = 7435934208LL;

    t31 = (((x1553%x1554)<<x1555)+x1556);

    if (t31 != 48LL) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint64_t x1565 = 6564135273496345LLU;
	uint8_t x1567 = 47U;
	static volatile int16_t x1568 = INT16_MIN;
	static uint64_t t32 = 3592587LLU;

    t32 = (((x1565%x1566)<<x1567)+x1568);

    if (t32 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x1597 = INT8_MIN;
	static uint8_t x1599 = 31U;
	int64_t t33 = INT64_MIN;

    t33 = (((x1597%x1598)<<x1599)+x1600);

    if (t33 != INT64_MIN) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int16_t x1605 = -1;
	uint64_t x1606 = 13424989LLU;
	uint16_t x1607 = 6U;
	int64_t x1608 = -271887439645983061LL;
	uint64_t t34 = 18005063971614297LLU;

    t34 = (((x1605%x1606)<<x1607)+x1608);

    if (t34 != 18174856634159488171LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x1750 = 1736492146U;
	uint8_t x1751 = 0U;
	static int16_t x1752 = 11559;
	volatile uint32_t t35 = 17U;

    t35 = (((x1749%x1750)<<x1751)+x1752);

    if (t35 != 411003061U) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int32_t x1877 = INT32_MIN;
	uint32_t x1878 = 1U;
	uint64_t x1879 = 3LLU;
	uint16_t x1880 = 32U;

    t36 = (((x1877%x1878)<<x1879)+x1880);

    if (t36 != 32U) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x1885 = INT64_MAX;
	int32_t x1886 = INT32_MIN;
	uint8_t x1887 = 5U;
	volatile int64_t t37 = 573441419000LL;

    t37 = (((x1885%x1886)<<x1887)+x1888);

    if (t37 != 66571993056LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x1949 = 8911;
	static volatile int64_t x1950 = -1540422689LL;
	static int64_t x1951 = 0LL;
	int8_t x1952 = -1;
	int64_t t38 = 7602910LL;

    t38 = (((x1949%x1950)<<x1951)+x1952);

    if (t38 != 8910LL) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint16_t x1981 = 9U;
	int8_t x1983 = 3;
	uint32_t x1984 = 4002U;
	volatile uint32_t t39 = 3973319U;

    t39 = (((x1981%x1982)<<x1983)+x1984);

    if (t39 != 4074U) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x2033 = 79;
	int32_t x2034 = 66041301;
	uint16_t x2035 = 0U;
	volatile uint16_t x2036 = 15006U;
	volatile int32_t t40 = -5494;

    t40 = (((x2033%x2034)<<x2035)+x2036);

    if (t40 != 15085) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x2037 = 1;
	int64_t x2038 = INT64_MIN;
	uint8_t x2039 = 2U;
	static volatile uint8_t x2040 = UINT8_MAX;
	int64_t t41 = 227392963LL;

    t41 = (((x2037%x2038)<<x2039)+x2040);

    if (t41 != 259LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int16_t x2105 = 448;
	uint8_t x2106 = 3U;
	volatile int32_t t42 = 42;

    t42 = (((x2105%x2106)<<x2107)+x2108);

    if (t42 != 383) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x2117 = INT8_MIN;
	volatile int32_t x2118 = -1;
	int32_t x2119 = 14;
	uint32_t x2120 = 7992U;
	uint32_t t43 = 1540U;

    t43 = (((x2117%x2118)<<x2119)+x2120);

    if (t43 != 7992U) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x2125 = 0;
	uint16_t x2126 = 1U;
	volatile int64_t x2128 = -127430LL;
	int64_t t44 = -4151048037581LL;

    t44 = (((x2125%x2126)<<x2127)+x2128);

    if (t44 != -127430LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x2165 = INT16_MAX;
	int16_t x2166 = INT16_MAX;
	static volatile uint8_t x2167 = 3U;
	int8_t x2168 = INT8_MIN;
	volatile int32_t t45 = 250;

    t45 = (((x2165%x2166)<<x2167)+x2168);

    if (t45 != -128) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x2197 = INT32_MIN;
	int64_t x2198 = -1LL;
	uint8_t x2199 = 21U;
	static int64_t x2200 = INT64_MIN;
	volatile int64_t t46 = INT64_MIN;

    t46 = (((x2197%x2198)<<x2199)+x2200);

    if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x2205 = INT32_MIN;
	int16_t x2206 = -1;
	uint16_t x2208 = 7031U;
	int32_t t47 = -1558;

    t47 = (((x2205%x2206)<<x2207)+x2208);

    if (t47 != 7031) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x2241 = 1LLU;
	uint32_t x2242 = UINT32_MAX;
	uint64_t t48 = 832LLU;

    t48 = (((x2241%x2242)<<x2243)+x2244);

    if (t48 != 32687LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x2245 = -1;
	int32_t x2246 = -1;
	static uint16_t x2247 = 5U;
	volatile int8_t x2248 = -1;
	volatile int32_t t49 = -1883;

    t49 = (((x2245%x2246)<<x2247)+x2248);

    if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x2289 = 23U;
	volatile int16_t x2290 = INT16_MAX;
	uint8_t x2291 = 7U;

    t50 = (((x2289%x2290)<<x2291)+x2292);

    if (t50 != -2147480704) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x2306 = -1LL;
	int8_t x2307 = 2;
	int64_t x2308 = INT64_MAX;
	int64_t t51 = INT64_MAX;

    t51 = (((x2305%x2306)<<x2307)+x2308);

    if (t51 != INT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x2317 = INT16_MIN;
	uint64_t x2318 = UINT64_MAX;
	int8_t x2319 = 1;
	uint32_t x2320 = UINT32_MAX;
	uint64_t t52 = 4LLU;

    t52 = (((x2317%x2318)<<x2319)+x2320);

    if (t52 != 4294901759LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x2341 = 483;
	int16_t x2342 = 1;
	uint16_t x2343 = 7U;
	int8_t x2344 = INT8_MAX;
	int32_t t53 = 23702166;

    t53 = (((x2341%x2342)<<x2343)+x2344);

    if (t53 != 127) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x2346 = INT64_MAX;
	int8_t x2347 = 58;
	int32_t x2348 = 962;
	volatile int64_t t54 = -30774146179456LL;

    t54 = (((x2345%x2346)<<x2347)+x2348);

    if (t54 != 7493989779944506306LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x2358 = INT8_MIN;
	static volatile uint16_t x2359 = 1U;
	uint64_t t55 = 20276436877LLU;

    t55 = (((x2357%x2358)<<x2359)+x2360);

    if (t55 != 18446744071562068222LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x2369 = 2;
	int8_t x2371 = 1;
	static uint32_t x2372 = 23986U;
	uint32_t t56 = 211288U;

    t56 = (((x2369%x2370)<<x2371)+x2372);

    if (t56 != 23986U) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x2469 = 2990LL;
	uint16_t x2470 = 15167U;
	uint8_t x2471 = 23U;
	uint32_t x2472 = UINT32_MAX;
	volatile int64_t t57 = -55661709331198465LL;

    t57 = (((x2469%x2470)<<x2471)+x2472);

    if (t57 != 29376905215LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x2501 = UINT32_MAX;
	int32_t x2502 = INT32_MIN;
	static uint16_t x2503 = 0U;
	volatile int64_t x2504 = 307555663497186LL;
	int64_t t58 = 495242520LL;

    t58 = (((x2501%x2502)<<x2503)+x2504);

    if (t58 != 307557810980833LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x2585 = -1;
	uint8_t x2587 = 3U;
	int8_t x2588 = INT8_MIN;
	uint32_t t59 = 0U;

    t59 = (((x2585%x2586)<<x2587)+x2588);

    if (t59 != 174864U) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x2685 = 776015978704945LLU;
	static int32_t x2686 = -179976;
	uint8_t x2687 = 6U;
	static uint64_t t60 = 810867604LLU;

    t60 = (((x2685%x2686)<<x2687)+x2688);

    if (t60 != 49665022637116479LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x2765 = -1;
	int64_t x2766 = -1LL;
	uint16_t x2767 = 5U;
	volatile int32_t x2768 = INT32_MIN;
	int64_t t61 = -2663LL;

    t61 = (((x2765%x2766)<<x2767)+x2768);

    if (t61 != -2147483648LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x2838 = INT32_MAX;
	uint8_t x2839 = 0U;
	int32_t x2840 = -6;
	int32_t t62 = -4756;

    t62 = (((x2837%x2838)<<x2839)+x2840);

    if (t62 != -4) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint64_t x2841 = 362519115887160LLU;
	int8_t x2842 = INT8_MAX;
	uint16_t x2843 = 29U;
	int16_t x2844 = INT16_MIN;
	static volatile uint64_t t63 = 7723585430LLU;

    t63 = (((x2841%x2842)<<x2843)+x2844);

    if (t63 != 64961347584LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x2897 = INT64_MIN;
	volatile int8_t x2898 = -1;
	static uint8_t x2899 = 47U;
	int64_t x2900 = INT64_MIN;
	int64_t t64 = INT64_MIN;

    t64 = (((x2897%x2898)<<x2899)+x2900);

    if (t64 != INT64_MIN) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x2929 = 314U;
	uint32_t x2930 = 161016U;
	volatile int8_t x2931 = 1;
	int8_t x2932 = -1;
	uint32_t t65 = 48U;

    t65 = (((x2929%x2930)<<x2931)+x2932);

    if (t65 != 627U) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x2997 = 2281U;
	int32_t x2998 = -1;
	volatile int8_t x2999 = 3;
	int8_t x3000 = -24;
	volatile uint32_t t66 = 8972047U;

    t66 = (((x2997%x2998)<<x2999)+x3000);

    if (t66 != 18224U) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x3005 = UINT32_MAX;
	int16_t x3006 = INT16_MIN;
	static volatile int8_t x3007 = 4;
	volatile int8_t x3008 = 3;
	uint32_t t67 = 82505U;

    t67 = (((x3005%x3006)<<x3007)+x3008);

    if (t67 != 524275U) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint16_t x3049 = 1434U;
	volatile int64_t x3050 = INT64_MIN;

    t68 = (((x3049%x3050)<<x3051)+x3052);

    if (t68 != 2879LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x3053 = 5U;
	volatile int32_t x3054 = -1;
	uint64_t x3055 = 1LLU;
	int16_t x3056 = INT16_MIN;
	volatile int32_t t69 = -114075081;

    t69 = (((x3053%x3054)<<x3055)+x3056);

    if (t69 != -32768) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x3121 = 21660882LLU;
	uint32_t x3122 = 996U;
	uint64_t x3123 = 12LLU;
	int16_t x3124 = 12603;
	uint64_t t70 = 14293179359357376LLU;

    t70 = (((x3121%x3122)<<x3123)+x3124);

    if (t70 != 3576123LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint32_t x3189 = UINT32_MAX;
	static volatile int32_t x3190 = INT32_MIN;
	int16_t x3192 = 1036;
	uint32_t t71 = 822898754U;

    t71 = (((x3189%x3190)<<x3191)+x3192);

    if (t71 != 1032U) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x3241 = UINT64_MAX;
	volatile int16_t x3243 = 4;
	uint64_t t72 = 20207649388902LLU;

    t72 = (((x3241%x3242)<<x3243)+x3244);

    if (t72 != 271LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint8_t x3265 = UINT8_MAX;
	uint8_t x3266 = 48U;
	uint64_t x3268 = UINT64_MAX;
	uint64_t t73 = 12143516422717114LLU;

    t73 = (((x3265%x3266)<<x3267)+x3268);

    if (t73 != 29LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x3381 = INT8_MAX;
	uint8_t x3382 = 60U;
	uint16_t x3383 = 6U;
	uint16_t x3384 = 20585U;

    t74 = (((x3381%x3382)<<x3383)+x3384);

    if (t74 != 21033) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint8_t x3415 = 28U;
	volatile uint32_t t75 = 4U;

    t75 = (((x3413%x3414)<<x3415)+x3416);

    if (t75 != 3489628160U) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x3461 = UINT64_MAX;
	uint8_t x3463 = 6U;
	int32_t x3464 = 2651;
	volatile uint64_t t76 = 72595LLU;

    t76 = (((x3461%x3462)<<x3463)+x3464);

    if (t76 != 3611LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x3469 = UINT16_MAX;
	static uint16_t x3470 = 519U;
	uint8_t x3471 = 3U;
	int64_t x3472 = -1LL;

    t77 = (((x3469%x3470)<<x3471)+x3472);

    if (t77 != 1127LL) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint8_t x3489 = 44U;
	int64_t x3490 = INT64_MAX;
	volatile int64_t x3491 = 33LL;
	volatile int64_t t78 = -3197046561648808725LL;

    t78 = (((x3489%x3490)<<x3491)+x3492);

    if (t78 != 377957154815LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x3545 = INT64_MIN;
	int64_t x3546 = INT64_MIN;
	uint32_t x3547 = 0U;
	int8_t x3548 = 3;
	volatile int64_t t79 = -2665007LL;

    t79 = (((x3545%x3546)<<x3547)+x3548);

    if (t79 != 3LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint32_t x3549 = 311492992U;
	static volatile uint16_t x3550 = UINT16_MAX;
	int16_t x3551 = 0;
	uint64_t x3552 = UINT64_MAX;

    t80 = (((x3549%x3550)<<x3551)+x3552);

    if (t80 != 5136LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x3601 = 0;
	volatile int64_t x3602 = 17997LL;
	uint8_t x3603 = 2U;
	static int64_t t81 = 83709LL;

    t81 = (((x3601%x3602)<<x3603)+x3604);

    if (t81 != 255LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x3789 = 15637507573127LLU;
	uint8_t x3790 = 15U;
	static uint64_t t82 = 110485LLU;

    t82 = (((x3789%x3790)<<x3791)+x3792);

    if (t82 != 536870911LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x3813 = -1;
	uint64_t x3814 = 74LLU;
	volatile int64_t x3815 = 24LL;
	int8_t x3816 = -1;

    t83 = (((x3813%x3814)<<x3815)+x3816);

    if (t83 != 184549375LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x3837 = 159379LLU;
	static volatile int8_t x3838 = INT8_MAX;
	uint8_t x3839 = 63U;
	static int32_t x3840 = -7370175;
	volatile uint64_t t84 = 28697119448210615LLU;

    t84 = (((x3837%x3838)<<x3839)+x3840);

    if (t84 != 9223372036847405633LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x3933 = 27027U;
	uint64_t x3934 = 11567398LLU;
	int8_t x3935 = 1;
	int8_t x3936 = INT8_MIN;

    t85 = (((x3933%x3934)<<x3935)+x3936);

    if (t85 != 53926LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint64_t x3997 = 3831346900LLU;
	int64_t x3998 = 516848870LL;
	volatile uint32_t x3999 = 18U;
	volatile int16_t x4000 = -5;
	volatile uint64_t t86 = 4733138619192033LLU;

    t86 = (((x3997%x3998)<<x3999)+x4000);

    if (t86 != 55942790512635LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x4078 = INT32_MIN;
	volatile uint8_t x4079 = 0U;
	int32_t x4080 = -1;

    t87 = (((x4077%x4078)<<x4079)+x4080);

    if (t87 != 2147483646U) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x4093 = 182944036;
	volatile int8_t x4094 = 1;
	int8_t x4095 = 21;
	int32_t x4096 = INT32_MIN;
	volatile int32_t t88 = INT32_MIN;

    t88 = (((x4093%x4094)<<x4095)+x4096);

    if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x4141 = INT8_MAX;
	int64_t x4142 = INT64_MIN;
	volatile uint32_t x4143 = 4U;
	int16_t x4144 = INT16_MAX;

    t89 = (((x4141%x4142)<<x4143)+x4144);

    if (t89 != 34799LL) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint64_t x4186 = 1LLU;
	static volatile uint16_t x4187 = 0U;
	uint64_t x4188 = 16153328644071LLU;

    t90 = (((x4185%x4186)<<x4187)+x4188);

    if (t90 != 16153328644071LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x4201 = INT32_MAX;
	int8_t x4202 = -1;
	uint16_t x4203 = 27U;
	static volatile int64_t x4204 = 440LL;
	volatile int64_t t91 = 2177972720901LL;

    t91 = (((x4201%x4202)<<x4203)+x4204);

    if (t91 != 440LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x4229 = INT8_MIN;
	int64_t x4230 = -1LL;
	uint16_t x4231 = 0U;
	int32_t x4232 = -1;
	volatile int64_t t92 = 166650333189911LL;

    t92 = (((x4229%x4230)<<x4231)+x4232);

    if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x4325 = 14;
	volatile int8_t x4326 = INT8_MIN;
	int8_t x4328 = INT8_MIN;
	volatile int32_t t93 = -168531;

    t93 = (((x4325%x4326)<<x4327)+x4328);

    if (t93 != 939523968) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x4365 = UINT8_MAX;
	volatile int16_t x4366 = 1709;
	static uint8_t x4367 = 6U;
	int32_t x4368 = INT32_MIN;

    t94 = (((x4365%x4366)<<x4367)+x4368);

    if (t94 != -2147467328) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x4413 = 0;
	int8_t x4414 = -1;
	uint16_t x4415 = 0U;
	uint16_t x4416 = 1U;
	int32_t t95 = -414;

    t95 = (((x4413%x4414)<<x4415)+x4416);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x4489 = 48U;
	uint8_t x4490 = UINT8_MAX;
	int32_t x4491 = 3;

    t96 = (((x4489%x4490)<<x4491)+x4492);

    if (t96 != -816742870484703772LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x4525 = -1;
	uint32_t x4526 = 438848802U;
	uint16_t x4527 = 7U;
	volatile uint8_t x4528 = 6U;
	volatile uint32_t t97 = 154U;

    t97 = (((x4525%x4526)<<x4527)+x4528);

    if (t97 != 1252320902U) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x4601 = UINT32_MAX;
	uint32_t x4602 = 38U;
	int32_t x4603 = 15;
	uint32_t t98 = 1375487127U;

    t98 = (((x4601%x4602)<<x4603)+x4604);

    if (t98 != 131072U) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint64_t x4637 = 24408834474582865LLU;
	volatile uint16_t x4638 = UINT16_MAX;
	uint16_t x4639 = 3U;
	volatile uint8_t x4640 = 59U;
	uint64_t t99 = 26240622656558024LLU;

    t99 = (((x4637%x4638)<<x4639)+x4640);

    if (t99 != 261379LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x4657 = 138;
	int16_t x4658 = INT16_MIN;
	uint8_t x4659 = 14U;
	int32_t x4660 = INT32_MIN;
	int32_t t100 = 453;

    t100 = (((x4657%x4658)<<x4659)+x4660);

    if (t100 != -2145222656) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x4661 = INT64_MAX;
	volatile uint8_t x4662 = UINT8_MAX;
	static volatile int16_t x4663 = 1;
	uint8_t x4664 = 31U;
	int64_t t101 = 3041175225918899986LL;

    t101 = (((x4661%x4662)<<x4663)+x4664);

    if (t101 != 285LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x4681 = INT32_MIN;
	uint16_t x4682 = 2U;
	int8_t x4683 = 1;
	static volatile uint32_t t102 = 757U;

    t102 = (((x4681%x4682)<<x4683)+x4684);

    if (t102 != 100119U) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile int32_t x4717 = INT32_MIN;
	int32_t x4718 = INT32_MIN;
	uint16_t x4719 = 3U;
	static int16_t x4720 = 30;

    t103 = (((x4717%x4718)<<x4719)+x4720);

    if (t103 != 30) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x4725 = 31590533723991LLU;
	volatile uint64_t x4726 = UINT64_MAX;
	int8_t x4727 = 3;
	uint16_t x4728 = 390U;
	uint64_t t104 = 7074017954209LLU;

    t104 = (((x4725%x4726)<<x4727)+x4728);

    if (t104 != 252724269792318LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x4761 = 5180175869LLU;
	int64_t x4762 = -5728784400LL;
	uint16_t x4763 = 23U;
	int8_t x4764 = INT8_MIN;
	volatile uint64_t t105 = 558539707LLU;

    t105 = (((x4761%x4762)<<x4763)+x4764);

    if (t105 != 43454464736100224LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x4814 = 14111008LLU;
	int16_t x4815 = 25;
	static int16_t x4816 = 1;
	uint64_t t106 = 37341LLU;

    t106 = (((x4813%x4814)<<x4815)+x4816);

    if (t106 != 173093624479745LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int32_t x4837 = INT32_MAX;
	static int32_t x4838 = INT32_MAX;
	uint32_t x4840 = 464U;
	volatile uint32_t t107 = 26097061U;

    t107 = (((x4837%x4838)<<x4839)+x4840);

    if (t107 != 464U) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint32_t x4889 = 19473U;
	uint8_t x4891 = 15U;
	int64_t x4892 = INT64_MIN;
	volatile int64_t t108 = INT64_MIN;

    t108 = (((x4889%x4890)<<x4891)+x4892);

    if (t108 != INT64_MIN) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x4897 = INT16_MAX;
	static volatile int16_t x4898 = -70;
	int16_t x4899 = 14;
	int8_t x4900 = INT8_MAX;
	volatile int32_t t109 = 181521;

    t109 = (((x4897%x4898)<<x4899)+x4900);

    if (t109 != 114815) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x4941 = INT8_MIN;
	static uint32_t x4942 = 17U;
	uint8_t x4943 = 15U;
	volatile uint8_t x4944 = 0U;
	uint32_t t110 = 423334U;

    t110 = (((x4941%x4942)<<x4943)+x4944);

    if (t110 != 294912U) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x4945 = 0U;
	int32_t x4946 = INT32_MIN;
	int64_t x4947 = 0LL;
	static int16_t x4948 = INT16_MAX;
	volatile int32_t t111 = 29;

    t111 = (((x4945%x4946)<<x4947)+x4948);

    if (t111 != 32767) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x4953 = INT64_MIN;
	int16_t x4954 = -1;
	volatile uint64_t x4955 = 31LLU;
	int64_t x4956 = -1LL;
	int64_t t112 = 13LL;

    t112 = (((x4953%x4954)<<x4955)+x4956);

    if (t112 != -1LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x4969 = 2115667320LLU;
	volatile int8_t x4970 = INT8_MIN;
	int16_t x4971 = 5;
	int32_t x4972 = INT32_MIN;
	volatile uint64_t t113 = 165450776374126LLU;

    t113 = (((x4969%x4970)<<x4971)+x4972);

    if (t113 != 65553870592LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile int16_t x5109 = INT16_MIN;
	static int16_t x5111 = 0;
	static int16_t x5112 = INT16_MAX;
	uint64_t t114 = 36453LLU;

    t114 = (((x5109%x5110)<<x5111)+x5112);

    if (t114 != 55711636313439LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	static int64_t x5177 = -1LL;
	volatile uint64_t x5178 = 2758308261593LLU;
	uint16_t x5179 = 39U;
	volatile int64_t x5180 = INT64_MAX;
	uint64_t t115 = 288530708327662LLU;

    t115 = (((x5177%x5178)<<x5179)+x5180);

    if (t115 != 6233488209385357311LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x5221 = UINT64_MAX;
	static int32_t x5222 = INT32_MIN;
	volatile uint8_t x5223 = 51U;
	static uint8_t x5224 = 1U;
	volatile uint64_t t116 = 61LLU;

    t116 = (((x5221%x5222)<<x5223)+x5224);

    if (t116 != 18444492273895866369LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x5261 = 35885U;
	uint64_t x5262 = 38LLU;
	int16_t x5263 = 51;
	int32_t x5264 = 84603;
	uint64_t t117 = 2105856662246716LLU;

    t117 = (((x5261%x5262)<<x5263)+x5264);

    if (t117 != 29273397577992827LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x5337 = 177215491LLU;
	int64_t x5338 = 9615159768854135LL;
	int8_t x5339 = 1;

    t118 = (((x5337%x5338)<<x5339)+x5340);

    if (t118 != 9223372037209206790LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile uint32_t x5353 = 339U;
	int32_t x5354 = INT32_MIN;
	uint16_t x5355 = 12U;
	volatile int16_t x5356 = -1;
	uint32_t t119 = 23757185U;

    t119 = (((x5353%x5354)<<x5355)+x5356);

    if (t119 != 1388543U) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x5377 = 13LLU;
	int16_t x5380 = -8;
	uint64_t t120 = 3795732LLU;

    t120 = (((x5377%x5378)<<x5379)+x5380);

    if (t120 != 5LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x5465 = -607;
	uint8_t x5466 = 1U;
	uint16_t x5467 = 6U;
	volatile int32_t x5468 = INT32_MIN;
	int32_t t121 = INT32_MIN;

    t121 = (((x5465%x5466)<<x5467)+x5468);

    if (t121 != INT32_MIN) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x5637 = UINT8_MAX;
	uint8_t x5639 = 3U;
	int64_t x5640 = -3326440591451136LL;
	int64_t t122 = -151004417045353LL;

    t122 = (((x5637%x5638)<<x5639)+x5640);

    if (t122 != -3326440591449096LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x5657 = UINT16_MAX;
	int32_t x5658 = INT32_MAX;
	int16_t x5659 = 7;
	volatile int32_t t123 = -6;

    t123 = (((x5657%x5658)<<x5659)+x5660);

    if (t123 != -31048088) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x5718 = INT8_MAX;
	static int8_t x5719 = 11;
	volatile int64_t t124 = 21862340LL;

    t124 = (((x5717%x5718)<<x5719)+x5720);

    if (t124 != 4294967295LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x5750 = INT16_MAX;
	static int64_t x5752 = -171693236809LL;
	static int64_t t125 = 207159926068LL;

    t125 = (((x5749%x5750)<<x5751)+x5752);

    if (t125 != -171693236809LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint16_t x5793 = 4U;
	uint64_t x5794 = UINT64_MAX;
	int16_t x5795 = 3;
	uint32_t x5796 = 2124393943U;

    t126 = (((x5793%x5794)<<x5795)+x5796);

    if (t126 != 2124393975LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x5817 = INT16_MAX;
	volatile int8_t x5818 = INT8_MIN;
	int8_t x5819 = 4;
	int32_t x5820 = INT32_MIN;

    t127 = (((x5817%x5818)<<x5819)+x5820);

    if (t127 != -2147481616) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint8_t x5837 = 108U;
	static int16_t x5838 = INT16_MAX;
	static volatile int8_t x5839 = 12;
	uint16_t x5840 = 30143U;
	volatile int32_t t128 = 241;

    t128 = (((x5837%x5838)<<x5839)+x5840);

    if (t128 != 472511) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x5842 = -1;
	static int8_t x5843 = 0;
	int32_t x5844 = -1;
	volatile int32_t t129 = 1061185678;

    t129 = (((x5841%x5842)<<x5843)+x5844);

    if (t129 != -1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x5857 = 37U;
	static volatile uint16_t x5858 = 6383U;
	uint8_t x5860 = UINT8_MAX;
	uint32_t t130 = 37058166U;

    t130 = (((x5857%x5858)<<x5859)+x5860);

    if (t130 != 551U) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x5969 = INT32_MAX;
	uint8_t x5971 = 25U;
	int32_t t131 = INT32_MIN;

    t131 = (((x5969%x5970)<<x5971)+x5972);

    if (t131 != INT32_MIN) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x5985 = INT32_MAX;
	int8_t x5987 = 7;
	uint16_t x5988 = 43U;

    t132 = (((x5985%x5986)<<x5987)+x5988);

    if (t132 != 4294967211U) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x6045 = INT64_MIN;
	static uint8_t x6047 = 62U;
	int16_t x6048 = INT16_MAX;
	volatile int64_t t133 = -257680836120443999LL;

    t133 = (((x6045%x6046)<<x6047)+x6048);

    if (t133 != 32767LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x6068 = -1;
	volatile int32_t t134 = 21;

    t134 = (((x6065%x6066)<<x6067)+x6068);

    if (t134 != -1) { NG(); } else { ; }
	
}

void f135(void) {
    	static int32_t x6137 = 7;
	static uint32_t x6139 = 8U;
	int32_t t135 = 116564729;

    t135 = (((x6137%x6138)<<x6139)+x6140);

    if (t135 != 1787) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x6165 = INT16_MAX;
	static int16_t x6166 = 169;
	static int16_t x6168 = INT16_MAX;
	int32_t t136 = -321738293;

    t136 = (((x6165%x6166)<<x6167)+x6168);

    if (t136 != 37567) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint8_t x6205 = 1U;
	uint16_t x6207 = 27U;
	uint16_t x6208 = UINT16_MAX;
	volatile int64_t t137 = -80392LL;

    t137 = (((x6205%x6206)<<x6207)+x6208);

    if (t137 != 134283263LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x6213 = INT8_MIN;
	int8_t x6214 = -1;
	uint64_t t138 = 32836336357LLU;

    t138 = (((x6213%x6214)<<x6215)+x6216);

    if (t138 != 112396437LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x6221 = 1;

    t139 = (((x6221%x6222)<<x6223)+x6224);

    if (t139 != 2) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint16_t x6313 = 4U;
	volatile int32_t x6315 = 4;
	static int8_t x6316 = 1;

    t140 = (((x6313%x6314)<<x6315)+x6316);

    if (t140 != 65) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint16_t x6319 = 12U;
	static int32_t x6320 = 0;
	int32_t t141 = -11273;

    t141 = (((x6317%x6318)<<x6319)+x6320);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x6321 = 40802624830702LLU;
	int16_t x6322 = INT16_MIN;
	int8_t x6324 = INT8_MAX;

    t142 = (((x6321%x6322)<<x6323)+x6324);

    if (t142 != 9223372036854775935LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x6342 = -1;
	volatile int64_t t143 = 72882962184325LL;

    t143 = (((x6341%x6342)<<x6343)+x6344);

    if (t143 != -32768LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x6361 = UINT16_MAX;
	uint64_t x6362 = 36486LLU;
	uint8_t x6363 = 1U;
	static int64_t x6364 = INT64_MAX;
	volatile uint64_t t144 = 0LLU;

    t144 = (((x6361%x6362)<<x6363)+x6364);

    if (t144 != 9223372036854833905LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x6413 = -3905;
	uint64_t x6414 = UINT64_MAX;
	volatile uint64_t t145 = 375336841LLU;

    t145 = (((x6413%x6414)<<x6415)+x6416);

    if (t145 != 18446744073709543807LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x6425 = -340455;
	int8_t x6426 = -1;
	uint16_t x6427 = 0U;
	volatile int8_t x6428 = 0;
	int32_t t146 = -2233;

    t146 = (((x6425%x6426)<<x6427)+x6428);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile uint64_t x6561 = UINT64_MAX;
	volatile int64_t x6562 = 1133388LL;
	static int16_t x6563 = 0;
	uint64_t t147 = 30434612033583LLU;

    t147 = (((x6561%x6562)<<x6563)+x6564);

    if (t147 != 705543LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint8_t x6601 = 8U;
	int32_t x6602 = INT32_MIN;
	int8_t x6603 = 0;
	static volatile int64_t x6604 = INT64_MIN;
	volatile int64_t t148 = 121541815301LL;

    t148 = (((x6601%x6602)<<x6603)+x6604);

    if (t148 != -9223372036854775800LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint64_t x6637 = 949617977496272LLU;
	uint16_t x6638 = 12603U;
	static uint64_t x6639 = 24LLU;
	volatile uint64_t x6640 = UINT64_MAX;
	volatile uint64_t t149 = 433570617749LLU;

    t149 = (((x6637%x6638)<<x6639)+x6640);

    if (t149 != 154803372031LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x6774 = 46740163U;
	int16_t x6775 = 3;

    t150 = (((x6773%x6774)<<x6775)+x6776);

    if (t150 != 9223372037178029864LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	static int8_t x6801 = 0;
	int8_t x6803 = 9;
	int8_t x6804 = -59;
	volatile int32_t t151 = 7234;

    t151 = (((x6801%x6802)<<x6803)+x6804);

    if (t151 != -59) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x6805 = 122U;
	int8_t x6807 = 1;
	uint64_t x6808 = 920979145LLU;
	static uint64_t t152 = 34356LLU;

    t152 = (((x6805%x6806)<<x6807)+x6808);

    if (t152 != 920979389LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x6837 = 2;
	int16_t x6839 = 1;
	int8_t x6840 = 1;
	int32_t t153 = -1055174;

    t153 = (((x6837%x6838)<<x6839)+x6840);

    if (t153 != 5) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x6850 = 1387986545430LL;
	static uint8_t x6851 = 1U;
	int64_t x6852 = 6625562LL;
	int64_t t154 = -29058LL;

    t154 = (((x6849%x6850)<<x6851)+x6852);

    if (t154 != 6626780LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x6926 = INT64_MIN;
	int8_t x6927 = 12;
	volatile int16_t x6928 = -1;
	volatile uint64_t t155 = 2045916589LLU;

    t155 = (((x6925%x6926)<<x6927)+x6928);

    if (t155 != 18446744073709547519LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x6973 = 8340;
	int32_t x6974 = INT32_MIN;
	int32_t x6976 = -2366;
	int32_t t156 = -19;

    t156 = (((x6973%x6974)<<x6975)+x6976);

    if (t156 != 273282754) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x7105 = UINT32_MAX;
	uint64_t x7106 = 7440034LLU;
	volatile int8_t x7107 = 18;
	int16_t x7108 = INT16_MIN;

    t157 = (((x7105%x7106)<<x7107)+x7108);

    if (t157 != 542029086720LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x7221 = INT8_MAX;
	int8_t x7222 = INT8_MAX;
	uint8_t x7223 = 3U;
	uint8_t x7224 = UINT8_MAX;

    t158 = (((x7221%x7222)<<x7223)+x7224);

    if (t158 != 255) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x7303 = 19;
	int32_t x7304 = 27641396;
	int64_t t159 = 106052555438561LL;

    t159 = (((x7301%x7302)<<x7303)+x7304);

    if (t159 != 27641396LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x7313 = 1778819817617175107LLU;
	uint8_t x7316 = 119U;
	uint64_t t160 = 1314189560899539425LLU;

    t160 = (((x7313%x7314)<<x7315)+x7316);

    if (t160 != 5535LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x7329 = 35947051342655100LL;
	uint16_t x7331 = 1U;
	uint16_t x7332 = 255U;
	static volatile int64_t t161 = 3LL;

    t161 = (((x7329%x7330)<<x7331)+x7332);

    if (t161 != 1593095163LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x7437 = INT16_MIN;
	int32_t x7439 = 1;
	volatile int8_t x7440 = 1;
	volatile int32_t t162 = -9098;

    t162 = (((x7437%x7438)<<x7439)+x7440);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x7521 = -1;
	volatile uint64_t x7522 = 256256670947351LLU;
	uint8_t x7523 = 23U;
	int8_t x7524 = -1;
	volatile uint64_t t163 = 21536LLU;

    t163 = (((x7521%x7522)<<x7523)+x7524);

    if (t163 != 17301069666264809471LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x7557 = INT16_MIN;
	static int8_t x7558 = INT8_MIN;
	uint16_t x7559 = 29U;
	uint16_t x7560 = 4U;
	volatile int32_t t164 = 65407824;

    t164 = (((x7557%x7558)<<x7559)+x7560);

    if (t164 != 4) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x7573 = INT16_MIN;
	static volatile int8_t x7574 = INT8_MIN;
	uint16_t x7575 = 0U;
	static int64_t x7576 = INT64_MIN;
	volatile int64_t t165 = INT64_MIN;

    t165 = (((x7573%x7574)<<x7575)+x7576);

    if (t165 != INT64_MIN) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x7601 = 5664U;
	volatile int32_t x7604 = INT32_MIN;
	static int32_t t166 = 148400;

    t166 = (((x7601%x7602)<<x7603)+x7604);

    if (t166 != -2147121152) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint32_t x7634 = 183120232U;
	uint16_t x7635 = 1U;
	uint64_t x7636 = 772087LLU;
	uint64_t t167 = 544898174288289855LLU;

    t167 = (((x7633%x7634)<<x7635)+x7636);

    if (t167 != 772597LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x7641 = INT8_MAX;
	int64_t x7643 = 1LL;
	int64_t x7644 = INT64_MIN;
	int64_t t168 = -1036110328224LL;

    t168 = (((x7641%x7642)<<x7643)+x7644);

    if (t168 != -9223372036854775554LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x7673 = 1;
	int16_t x7674 = 7648;
	uint8_t x7675 = 15U;
	uint64_t x7676 = 71065122855244911LLU;
	uint64_t t169 = 245607630482LLU;

    t169 = (((x7673%x7674)<<x7675)+x7676);

    if (t169 != 71065122855277679LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x7773 = 5465704031329LLU;
	int8_t x7774 = -1;
	static uint8_t x7775 = 8U;
	static uint32_t x7776 = UINT32_MAX;
	uint64_t t170 = 8393056541LLU;

    t170 = (((x7773%x7774)<<x7775)+x7776);

    if (t170 != 1399224526987519LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x7901 = UINT64_MAX;
	volatile int32_t x7902 = -1;
	uint16_t x7903 = 22U;
	int8_t x7904 = 40;
	uint64_t t171 = 1888602929015951LLU;

    t171 = (((x7901%x7902)<<x7903)+x7904);

    if (t171 != 40LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x7933 = INT8_MIN;
	volatile int64_t x7934 = -1LL;
	volatile int8_t x7935 = 15;
	int64_t t172 = 108LL;

    t172 = (((x7933%x7934)<<x7935)+x7936);

    if (t172 != 714468LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x7941 = INT8_MAX;
	int8_t x7944 = 1;
	volatile int64_t t173 = 20270501LL;

    t173 = (((x7941%x7942)<<x7943)+x7944);

    if (t173 != 255LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x7993 = 918U;
	volatile uint64_t x7994 = 10770647LLU;
	volatile uint8_t x7995 = 1U;
	uint64_t x7996 = 414484828667LLU;
	uint64_t t174 = 70956LLU;

    t174 = (((x7993%x7994)<<x7995)+x7996);

    if (t174 != 414484830503LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x8021 = INT32_MAX;
	volatile uint32_t x8022 = UINT32_MAX;
	volatile uint32_t t175 = 64045U;

    t175 = (((x8021%x8022)<<x8023)+x8024);

    if (t175 != 4294705407U) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x8025 = INT16_MAX;
	int8_t x8026 = 50;
	uint16_t x8027 = 0U;
	volatile int8_t x8028 = 0;
	volatile int32_t t176 = -6560497;

    t176 = (((x8025%x8026)<<x8027)+x8028);

    if (t176 != 17) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint16_t x8101 = UINT16_MAX;
	int8_t x8102 = INT8_MIN;
	uint8_t x8103 = 13U;
	static uint32_t x8104 = 726U;
	uint32_t t177 = 860U;

    t177 = (((x8101%x8102)<<x8103)+x8104);

    if (t177 != 1041110U) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint64_t x8153 = UINT64_MAX;
	int8_t x8155 = 62;
	static int32_t x8156 = INT32_MIN;
	uint64_t t178 = 230504LLU;

    t178 = (((x8153%x8154)<<x8155)+x8156);

    if (t178 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x8177 = UINT64_MAX;
	int64_t x8178 = INT64_MIN;
	volatile uint64_t t179 = 834671010486840LLU;

    t179 = (((x8177%x8178)<<x8179)+x8180);

    if (t179 != 43064LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x8185 = 3775513U;
	int16_t x8186 = -1;
	static int8_t x8187 = 16;
	int16_t x8188 = INT16_MIN;
	volatile uint32_t t180 = 1U;

    t180 = (((x8185%x8186)<<x8187)+x8188);

    if (t180 != 2618851328U) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x8205 = INT32_MIN;
	static int32_t x8206 = -1;
	int8_t x8207 = 0;
	static volatile int32_t t181 = 144260;

    t181 = (((x8205%x8206)<<x8207)+x8208);

    if (t181 != -128) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x8257 = INT16_MIN;
	uint64_t x8258 = UINT64_MAX;
	volatile uint32_t x8259 = 2U;
	static int32_t x8260 = INT32_MIN;
	static volatile uint64_t t182 = 123LLU;

    t182 = (((x8257%x8258)<<x8259)+x8260);

    if (t182 != 18446744071561936896LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x8267 = 27U;
	int8_t x8268 = INT8_MIN;
	static volatile int32_t t183 = 14725;

    t183 = (((x8265%x8266)<<x8267)+x8268);

    if (t183 != -128) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x8353 = -1LL;
	static int64_t x8354 = -1LL;
	int16_t x8355 = 63;

    t184 = (((x8353%x8354)<<x8355)+x8356);

    if (t184 != 4294967295LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x8429 = 43097636419LLU;
	int8_t x8430 = 1;
	static volatile uint64_t t185 = 148854609711129010LLU;

    t185 = (((x8429%x8430)<<x8431)+x8432);

    if (t185 != 65535LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x8501 = 763054;
	static uint8_t x8502 = 2U;
	int8_t x8503 = 31;
	int32_t x8504 = INT32_MIN;
	int32_t t186 = INT32_MIN;

    t186 = (((x8501%x8502)<<x8503)+x8504);

    if (t186 != INT32_MIN) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x8545 = 118119455450445586LL;
	int16_t x8546 = INT16_MIN;
	static volatile uint16_t x8547 = 0U;
	uint16_t x8548 = UINT16_MAX;

    t187 = (((x8545%x8546)<<x8547)+x8548);

    if (t187 != 79633LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x8629 = 236U;
	int32_t x8631 = 0;
	static int32_t x8632 = INT32_MIN;
	volatile int32_t t188 = INT32_MIN;

    t188 = (((x8629%x8630)<<x8631)+x8632);

    if (t188 != INT32_MIN) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x8689 = UINT8_MAX;
	volatile uint16_t x8690 = 15U;
	static uint16_t x8691 = 23U;
	int32_t t189 = 1286;

    t189 = (((x8689%x8690)<<x8691)+x8692);

    if (t189 != -32768) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile uint16_t x8733 = 5144U;
	int16_t x8734 = INT16_MIN;
	static uint32_t x8736 = 175878127U;
	uint32_t t190 = 24989091U;

    t190 = (((x8733%x8734)<<x8735)+x8736);

    if (t190 != 175883271U) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint64_t x8761 = 63299LLU;
	int32_t x8763 = 3;
	static volatile uint64_t t191 = 9LLU;

    t191 = (((x8761%x8762)<<x8763)+x8764);

    if (t191 != 481659LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint16_t x8777 = UINT16_MAX;
	int32_t x8778 = INT32_MIN;
	int16_t x8779 = 0;
	int32_t x8780 = 541247112;
	int32_t t192 = -3270742;

    t192 = (((x8777%x8778)<<x8779)+x8780);

    if (t192 != 541312647) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x8806 = INT32_MIN;
	static uint16_t x8807 = 29U;
	uint32_t t193 = 57977U;

    t193 = (((x8805%x8806)<<x8807)+x8808);

    if (t193 != 1073741696U) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x8809 = INT64_MIN;
	int64_t x8812 = 1370458224674975068LL;
	int64_t t194 = 785629LL;

    t194 = (((x8809%x8810)<<x8811)+x8812);

    if (t194 != 1370458224674975068LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x8837 = INT8_MIN;
	volatile uint64_t x8838 = 6578098590771LLU;
	static volatile int16_t x8840 = INT16_MIN;
	volatile uint64_t t195 = 14379698274439LLU;

    t195 = (((x8837%x8838)<<x8839)+x8840);

    if (t195 != 1152921504606814208LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int16_t x8845 = -1;
	static uint32_t x8846 = 85U;
	int16_t x8847 = 2;
	uint32_t t196 = 87U;

    t196 = (((x8845%x8846)<<x8847)+x8848);

    if (t196 != 4294965700U) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x8855 = 5LLU;
	volatile uint32_t x8856 = 1831626322U;
	uint64_t t197 = 4741499756LLU;

    t197 = (((x8853%x8854)<<x8855)+x8856);

    if (t197 != 1831628946LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x8873 = 61LLU;
	int16_t x8874 = INT16_MAX;
	volatile uint64_t x8875 = 3LLU;
	uint16_t x8876 = 16875U;
	uint64_t t198 = 144359815269851LLU;

    t198 = (((x8873%x8874)<<x8875)+x8876);

    if (t198 != 17363LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x8893 = 109715768U;
	static int16_t x8896 = INT16_MAX;
	volatile uint64_t t199 = 38917394262001359LLU;

    t199 = (((x8893%x8894)<<x8895)+x8896);

    if (t199 != 1840725138374655LLU) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

