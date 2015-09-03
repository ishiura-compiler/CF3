#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t t0 = 10907U;
static int32_t x29 = INT32_MIN;
uint16_t x34 = 0U;
int16_t x35 = 5;
int64_t t4 = 32118252274736LL;
uint64_t t5 = 818463666674891LLU;
volatile uint16_t x102 = 36U;
uint8_t x104 = 1U;
static volatile uint64_t t7 = 12789667LLU;
int8_t x105 = -1;
volatile uint64_t t8 = 4LLU;
volatile int8_t x159 = INT8_MAX;
volatile uint64_t t10 = 482686837739LLU;
static volatile int8_t x230 = INT8_MAX;
int32_t x232 = INT32_MIN;
int8_t x235 = 6;
static volatile uint64_t t16 = 402229021LLU;
int8_t x449 = INT8_MAX;
uint64_t x451 = 755568LLU;
int32_t x468 = INT32_MIN;
volatile int64_t x474 = -1231LL;
uint8_t x492 = 26U;
static uint64_t t20 = 4996227775727LLU;
int8_t x545 = INT8_MAX;
static int32_t x560 = INT32_MAX;
uint16_t x581 = 251U;
uint16_t x597 = 196U;
uint64_t x601 = 827392365744065069LLU;
static uint64_t x625 = UINT64_MAX;
volatile int16_t x670 = INT16_MAX;
int8_t x683 = 4;
int8_t x698 = INT8_MAX;
int32_t x712 = 31;
uint64_t x749 = 26031LLU;
volatile uint16_t x750 = 48U;
static volatile uint64_t t36 = 1693955619782338154LLU;
static int8_t x830 = 0;
int64_t x831 = INT64_MAX;
int16_t x832 = 1;
uint32_t x845 = UINT32_MAX;
volatile int8_t x862 = -8;
int64_t x898 = -1LL;
int8_t x919 = -13;
int64_t x922 = 1LL;
int16_t x924 = INT16_MIN;
static volatile uint32_t t47 = 172684U;
volatile int16_t x989 = 14;
uint64_t t49 = 4925851LLU;
int8_t x1035 = -1;
uint32_t x1036 = 1U;
volatile int32_t x1041 = 134102;
int32_t x1066 = INT32_MIN;
uint32_t x1068 = 2U;
volatile int8_t x1081 = -1;
volatile int64_t t55 = -55136805471LL;
volatile int8_t x1167 = 6;
int16_t x1183 = INT16_MAX;
uint16_t x1217 = 370U;
uint8_t x1265 = 8U;
static int16_t x1321 = INT16_MAX;
static int16_t x1338 = 25;
int8_t x1340 = 1;
volatile uint32_t t66 = 120714534U;
uint64_t x1393 = UINT64_MAX;
static uint8_t x1395 = 1U;
volatile int64_t t69 = -8119865242633346LL;
volatile int32_t t70 = 411380;
int16_t x1448 = -1;
int32_t x1489 = INT32_MIN;
int64_t x1490 = 490961183094LL;
uint16_t x1492 = 50U;
uint8_t x1558 = 5U;
volatile uint16_t x1607 = 71U;
uint64_t t76 = 7381LLU;
static uint16_t x1613 = UINT16_MAX;
volatile uint64_t t78 = 338668778625654LLU;
static int32_t x1644 = INT32_MAX;
int8_t x1652 = 1;
volatile uint64_t x1654 = 49LLU;
int8_t x1655 = -1;
int16_t x1657 = 0;
volatile int8_t x1669 = -10;
volatile int8_t x1685 = -1;
static int64_t x1700 = -1LL;
volatile uint64_t t85 = 482464356622LLU;
uint64_t x1705 = UINT64_MAX;
static int16_t x1708 = -1;
volatile int8_t x1713 = INT8_MAX;
int32_t x1715 = INT32_MIN;
int8_t x1746 = 11;
static uint64_t x1806 = 31812654LLU;
static int16_t x1818 = INT16_MIN;
int32_t x1851 = 720;
int32_t x1852 = -2;
int8_t x1858 = 55;
int32_t t94 = -15670;
int16_t x1910 = -12;
int16_t x1916 = -245;
static volatile uint32_t x1918 = 94U;
int8_t x1919 = INT8_MIN;
uint64_t t99 = 3275658372LLU;


void f0(void) {
	uint32_t x5 = 25060676U;
	volatile uint8_t x6 = 20U;
	uint16_t x7 = 0U;
	int8_t x8 = -15;

	t0 = ((x5+x6)<<(x7%x8));

	if (t0 != 25060696U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x30 = INT64_MAX;
	int8_t x31 = INT8_MIN;
	volatile int32_t x32 = -1;
	int64_t t1 = -1415LL;

	t1 = ((x29+x30)<<(x31%x32));

	if (t1 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x33 = INT16_MAX;
	uint8_t x36 = UINT8_MAX;
	static int32_t t2 = 999;

	t2 = ((x33+x34)<<(x35%x36));

	if (t2 != 1048544) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x37 = 568559U;
	int16_t x38 = INT16_MIN;
	volatile int64_t x39 = INT64_MIN;
	volatile uint8_t x40 = 1U;
	volatile uint32_t t3 = 2321400U;

	t3 = ((x37+x38)<<(x39%x40));

	if (t3 != 535791U) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x61 = 1138842LL;
	int8_t x62 = INT8_MAX;
	uint64_t x63 = UINT64_MAX;
	volatile uint16_t x64 = 28U;

	t4 = ((x61+x62)<<(x63%x64));

	if (t4 != 37321736192LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x69 = UINT64_MAX;
	int32_t x70 = INT32_MAX;
	static int64_t x71 = INT64_MAX;
	uint8_t x72 = 5U;

	t5 = ((x69+x70)<<(x71%x72));

	if (t5 != 8589934584LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x81 = INT16_MAX;
	int64_t x82 = -1LL;
	int32_t x83 = 261081881;
	int8_t x84 = -1;
	int64_t t6 = -104599827447658LL;

	t6 = ((x81+x82)<<(x83%x84));

	if (t6 != 32766LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x101 = UINT64_MAX;
	int32_t x103 = 4769092;

	t7 = ((x101+x102)<<(x103%x104));

	if (t7 != 35LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x106 = 10922LLU;
	int32_t x107 = INT32_MAX;
	uint16_t x108 = 10U;

	t8 = ((x105+x106)<<(x107%x108));

	if (t8 != 1397888LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x149 = 1U;
	int8_t x150 = -1;
	int32_t x151 = -7474689;
	int32_t x152 = -1;
	static uint32_t t9 = 32U;

	t9 = ((x149+x150)<<(x151%x152));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x157 = 94;
	static uint64_t x158 = UINT64_MAX;
	static int8_t x160 = INT8_MAX;

	t10 = ((x157+x158)<<(x159%x160));

	if (t10 != 93LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x229 = 27U;
	int64_t x231 = INT64_MIN;
	static int32_t t11 = -497269889;

	t11 = ((x229+x230)<<(x231%x232));

	if (t11 != 154) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x233 = 1U;
	uint32_t x234 = 10U;
	int16_t x236 = INT16_MIN;
	uint32_t t12 = 4022U;

	t12 = ((x233+x234)<<(x235%x236));

	if (t12 != 704U) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x309 = -1;
	uint64_t x310 = 7LLU;
	static int8_t x311 = INT8_MIN;
	int16_t x312 = -1;
	uint64_t t13 = 759728056LLU;

	t13 = ((x309+x310)<<(x311%x312));

	if (t13 != 6LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x313 = 27U;
	int8_t x314 = -1;
	int8_t x315 = -1;
	int8_t x316 = -1;
	int32_t t14 = -1;

	t14 = ((x313+x314)<<(x315%x316));

	if (t14 != 26) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x377 = 5784426760LLU;
	int64_t x378 = INT64_MIN;
	uint32_t x379 = UINT32_MAX;
	volatile uint8_t x380 = 17U;
	uint64_t t15 = 59222345913402166LLU;

	t15 = ((x377+x378)<<(x379%x380));

	if (t15 != 9223372042639202568LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x401 = 0;
	uint64_t x402 = 49275324LLU;
	uint32_t x403 = UINT32_MAX;
	uint32_t x404 = 2U;

	t16 = ((x401+x402)<<(x403%x404));

	if (t16 != 98550648LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x450 = -43LL;
	int8_t x452 = INT8_MAX;
	static volatile int64_t t17 = -101LL;

	t17 = ((x449+x450)<<(x451%x452));

	if (t17 != 2955487255461888LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x465 = 468LLU;
	int8_t x466 = INT8_MIN;
	static int8_t x467 = 0;
	volatile uint64_t t18 = 36361707016039768LLU;

	t18 = ((x465+x466)<<(x467%x468));

	if (t18 != 340LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x473 = 24488755U;
	int32_t x475 = 136;
	static int8_t x476 = INT8_MIN;
	int64_t t19 = -19459974223290LL;

	t19 = ((x473+x474)<<(x475%x476));

	if (t19 != 6268806144LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x489 = 11U;
	uint64_t x490 = UINT64_MAX;
	uint64_t x491 = UINT64_MAX;

	t20 = ((x489+x490)<<(x491%x492));

	if (t20 != 327680LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x501 = INT16_MIN;
	uint32_t x502 = 4170497U;
	int16_t x503 = INT16_MIN;
	static int8_t x504 = INT8_MIN;
	volatile uint32_t t21 = 129988U;

	t21 = ((x501+x502)<<(x503%x504));

	if (t21 != 4137729U) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x517 = UINT16_MAX;
	int8_t x518 = 0;
	static int16_t x519 = 2158;
	int16_t x520 = -1;
	int32_t t22 = -37731;

	t22 = ((x517+x518)<<(x519%x520));

	if (t22 != 65535) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x546 = -1;
	static uint8_t x547 = 14U;
	static uint8_t x548 = 102U;
	volatile int32_t t23 = 3;

	t23 = ((x545+x546)<<(x547%x548));

	if (t23 != 2064384) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x557 = -1;
	uint64_t x558 = UINT64_MAX;
	int64_t x559 = INT64_MAX;
	static volatile uint64_t t24 = 5LLU;

	t24 = ((x557+x558)<<(x559%x560));

	if (t24 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x569 = INT8_MIN;
	volatile uint32_t x570 = 84U;
	int64_t x571 = -2163970515LL;
	volatile int8_t x572 = -1;
	static uint32_t t25 = 109280856U;

	t25 = ((x569+x570)<<(x571%x572));

	if (t25 != 4294967252U) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x582 = 1U;
	uint32_t x583 = 0U;
	int16_t x584 = -1;
	volatile int32_t t26 = -770276;

	t26 = ((x581+x582)<<(x583%x584));

	if (t26 != 252) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x598 = INT8_MIN;
	uint32_t x599 = 15U;
	volatile int64_t x600 = INT64_MIN;
	static int32_t t27 = 1;

	t27 = ((x597+x598)<<(x599%x600));

	if (t27 != 2228224) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x602 = INT64_MIN;
	volatile uint16_t x603 = UINT16_MAX;
	static int16_t x604 = -1;
	uint64_t t28 = 165847353LLU;

	t28 = ((x601+x602)<<(x603%x604));

	if (t28 != 10050764402598840877LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x609 = 759173352651240497LLU;
	int8_t x610 = -11;
	uint32_t x611 = UINT32_MAX;
	static uint64_t x612 = 2LLU;
	volatile uint64_t t29 = 66205510614043219LLU;

	t29 = ((x609+x610)<<(x611%x612));

	if (t29 != 1518346705302480972LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x626 = INT64_MIN;
	int16_t x627 = INT16_MAX;
	int8_t x628 = INT8_MAX;
	uint64_t t30 = 8381665308659489582LLU;

	t30 = ((x625+x626)<<(x627%x628));

	if (t30 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x657 = 256532451LLU;
	volatile int16_t x658 = INT16_MAX;
	static int32_t x659 = INT32_MIN;
	int16_t x660 = -1;
	volatile uint64_t t31 = 295777103655618LLU;

	t31 = ((x657+x658)<<(x659%x660));

	if (t31 != 256565218LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x669 = 74571717505472LLU;
	volatile uint32_t x671 = 2U;
	int32_t x672 = 367964;
	uint64_t t32 = 826709979LLU;

	t32 = ((x669+x670)<<(x671%x672));

	if (t32 != 298286870152956LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x681 = UINT8_MAX;
	static int8_t x682 = INT8_MIN;
	static int8_t x684 = -15;
	int32_t t33 = 0;

	t33 = ((x681+x682)<<(x683%x684));

	if (t33 != 2032) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x697 = 3;
	int16_t x699 = INT16_MAX;
	int8_t x700 = -4;
	volatile int32_t t34 = -123;

	t34 = ((x697+x698)<<(x699%x700));

	if (t34 != 1040) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x709 = 1799165826LLU;
	int8_t x710 = -7;
	uint32_t x711 = UINT32_MAX;
	uint64_t t35 = 181767547LLU;

	t35 = ((x709+x710)<<(x711%x712));

	if (t35 != 14393326552LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x751 = 5LLU;
	uint64_t x752 = 4397167595525311661LLU;

	t36 = ((x749+x750)<<(x751%x752));

	if (t36 != 834528LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x753 = INT16_MAX;
	int64_t x754 = -1LL;
	static int64_t x755 = 148553069634637551LL;
	int8_t x756 = 1;
	static volatile int64_t t37 = -88649527404230LL;

	t37 = ((x753+x754)<<(x755%x756));

	if (t37 != 32766LL) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int8_t x781 = 1;
	uint16_t x782 = UINT16_MAX;
	uint8_t x783 = 13U;
	uint8_t x784 = 25U;
	static volatile int32_t t38 = -75;

	t38 = ((x781+x782)<<(x783%x784));

	if (t38 != 536870912) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x829 = INT8_MAX;
	int32_t t39 = -1472;

	t39 = ((x829+x830)<<(x831%x832));

	if (t39 != 127) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x846 = INT16_MIN;
	int16_t x847 = INT16_MIN;
	int8_t x848 = -1;
	uint32_t t40 = 19385U;

	t40 = ((x845+x846)<<(x847%x848));

	if (t40 != 4294934527U) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x849 = 1U;
	uint8_t x850 = 8U;
	static uint64_t x851 = UINT64_MAX;
	int32_t x852 = INT32_MAX;
	uint32_t t41 = 369398357U;

	t41 = ((x849+x850)<<(x851%x852));

	if (t41 != 72U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x861 = 62U;
	static int8_t x863 = INT8_MIN;
	volatile int16_t x864 = -1;
	volatile int32_t t42 = 940085877;

	t42 = ((x861+x862)<<(x863%x864));

	if (t42 != 54) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x877 = 12;
	uint64_t x878 = UINT64_MAX;
	volatile int8_t x879 = -1;
	uint32_t x880 = 1U;
	static volatile uint64_t t43 = 1566241011LLU;

	t43 = ((x877+x878)<<(x879%x880));

	if (t43 != 11LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x897 = 894U;
	int16_t x899 = 1;
	int16_t x900 = INT16_MIN;
	int64_t t44 = -2728875261LL;

	t44 = ((x897+x898)<<(x899%x900));

	if (t44 != 1786LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x917 = INT32_MAX;
	int32_t x918 = -1;
	int32_t x920 = -1;
	volatile int32_t t45 = 16767453;

	t45 = ((x917+x918)<<(x919%x920));

	if (t45 != 2147483646) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x921 = 5LLU;
	int16_t x923 = INT16_MIN;
	uint64_t t46 = 8445625LLU;

	t46 = ((x921+x922)<<(x923%x924));

	if (t46 != 6LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x937 = 1U;
	int16_t x938 = -2036;
	uint32_t x939 = 11984U;
	uint16_t x940 = 4U;

	t47 = ((x937+x938)<<(x939%x940));

	if (t47 != 4294965261U) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x957 = 11807932893LLU;
	int32_t x958 = 181951;
	static int32_t x959 = -1;
	volatile int16_t x960 = 1;
	uint64_t t48 = 257979276967589729LLU;

	t48 = ((x957+x958)<<(x959%x960));

	if (t48 != 11808114844LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x990 = 122439712LLU;
	static int32_t x991 = INT32_MAX;
	int8_t x992 = -1;

	t49 = ((x989+x990)<<(x991%x992));

	if (t49 != 122439726LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x1033 = 23463787;
	static uint16_t x1034 = 3771U;
	int32_t t50 = 6263152;

	t50 = ((x1033+x1034)<<(x1035%x1036));

	if (t50 != 23467558) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint64_t x1042 = 642920321914997LLU;
	int8_t x1043 = -1;
	uint16_t x1044 = 1U;
	volatile uint64_t t51 = 16375690001275307LLU;

	t51 = ((x1041+x1042)<<(x1043%x1044));

	if (t51 != 642920322049099LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x1065 = UINT64_MAX;
	static uint32_t x1067 = UINT32_MAX;
	volatile uint64_t t52 = 0LLU;

	t52 = ((x1065+x1066)<<(x1067%x1068));

	if (t52 != 18446744069414584318LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x1082 = 35U;
	int64_t x1083 = -1LL;
	uint32_t x1084 = 1U;
	volatile uint32_t t53 = 351830U;

	t53 = ((x1081+x1082)<<(x1083%x1084));

	if (t53 != 34U) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x1085 = INT32_MIN;
	uint64_t x1086 = 59904497LLU;
	static uint8_t x1087 = 74U;
	static int32_t x1088 = 7;
	static uint64_t t54 = 386894641729459LLU;

	t54 = ((x1085+x1086)<<(x1087%x1088));

	if (t54 != 18446744040308285200LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x1109 = INT32_MAX;
	int64_t x1110 = 106819693024121355LL;
	static uint32_t x1111 = 1U;
	int8_t x1112 = INT8_MIN;

	t55 = ((x1109+x1110)<<(x1111%x1112));

	if (t55 != 213639390343210004LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x1165 = INT8_MIN;
	static uint32_t x1166 = UINT32_MAX;
	int64_t x1168 = 3120308LL;
	volatile uint32_t t56 = 1226U;

	t56 = ((x1165+x1166)<<(x1167%x1168));

	if (t56 != 4294959040U) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x1181 = 13920586207382240LLU;
	static int64_t x1182 = INT64_MIN;
	volatile int8_t x1184 = -42;
	static uint64_t t57 = 53LLU;

	t57 = ((x1181+x1182)<<(x1183%x1184));

	if (t57 != 1781835034544926720LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x1185 = UINT16_MAX;
	int16_t x1186 = -1;
	uint8_t x1187 = 7U;
	volatile int8_t x1188 = INT8_MIN;
	static int32_t t58 = 53282;

	t58 = ((x1185+x1186)<<(x1187%x1188));

	if (t58 != 8388352) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x1209 = INT8_MIN;
	uint64_t x1210 = 1118899255LLU;
	volatile int64_t x1211 = INT64_MAX;
	int16_t x1212 = INT16_MAX;
	uint64_t t59 = 4459LLU;

	t59 = ((x1209+x1210)<<(x1211%x1212));

	if (t59 != 143219088256LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x1213 = 3U;
	int8_t x1214 = INT8_MAX;
	int8_t x1215 = -15;
	static int64_t x1216 = -1LL;
	volatile int32_t t60 = 78514384;

	t60 = ((x1213+x1214)<<(x1215%x1216));

	if (t60 != 130) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x1218 = INT8_MAX;
	int64_t x1219 = INT64_MIN;
	int64_t x1220 = -1LL;
	int32_t t61 = -8799107;

	t61 = ((x1217+x1218)<<(x1219%x1220));

	if (t61 != 497) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x1266 = UINT32_MAX;
	int64_t x1267 = -26849730LL;
	int16_t x1268 = -3;
	uint32_t t62 = 7U;

	t62 = ((x1265+x1266)<<(x1267%x1268));

	if (t62 != 7U) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x1273 = 13U;
	volatile int8_t x1274 = 0;
	int64_t x1275 = 38307272874LL;
	volatile int8_t x1276 = -2;
	static volatile int32_t t63 = 126439;

	t63 = ((x1273+x1274)<<(x1275%x1276));

	if (t63 != 13) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x1322 = 6U;
	int8_t x1323 = INT8_MAX;
	static int8_t x1324 = -1;
	volatile int32_t t64 = -1;

	t64 = ((x1321+x1322)<<(x1323%x1324));

	if (t64 != 32773) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x1337 = 0U;
	volatile uint16_t x1339 = 904U;
	volatile uint32_t t65 = 1801019U;

	t65 = ((x1337+x1338)<<(x1339%x1340));

	if (t65 != 25U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x1345 = -1;
	uint32_t x1346 = 40014U;
	static uint8_t x1347 = 0U;
	int8_t x1348 = 1;

	t66 = ((x1345+x1346)<<(x1347%x1348));

	if (t66 != 40013U) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x1369 = INT16_MAX;
	uint32_t x1370 = 3419805U;
	int64_t x1371 = 943608593LL;
	uint64_t x1372 = 19LLU;
	volatile uint32_t t67 = 306032668U;

	t67 = ((x1369+x1370)<<(x1371%x1372));

	if (t67 != 27620576U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x1394 = INT8_MIN;
	int64_t x1396 = 1838025771LL;
	uint64_t t68 = 33467161681210LLU;

	t68 = ((x1393+x1394)<<(x1395%x1396));

	if (t68 != 18446744073709551358LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x1425 = 1U;
	int64_t x1426 = 1983873720LL;
	volatile uint8_t x1427 = 25U;
	static int32_t x1428 = 55069;

	t69 = ((x1425+x1426)<<(x1427%x1428));

	if (t69 != 66567755867881472LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x1437 = 0;
	static uint16_t x1438 = UINT16_MAX;
	volatile uint16_t x1439 = UINT16_MAX;
	int8_t x1440 = -1;

	t70 = ((x1437+x1438)<<(x1439%x1440));

	if (t70 != 65535) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x1445 = 7U;
	int32_t x1446 = -1;
	static int64_t x1447 = INT64_MAX;
	int32_t t71 = 3573812;

	t71 = ((x1445+x1446)<<(x1447%x1448));

	if (t71 != 6) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x1491 = UINT8_MAX;
	int64_t t72 = -42920317499LL;

	t72 = ((x1489+x1490)<<(x1491%x1492));

	if (t72 != 15642038382272LL) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint32_t x1557 = UINT32_MAX;
	int16_t x1559 = INT16_MAX;
	static uint8_t x1560 = 27U;
	static uint32_t t73 = 3287U;

	t73 = ((x1557+x1558)<<(x1559%x1560));

	if (t73 != 262144U) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int8_t x1569 = INT8_MIN;
	static int16_t x1570 = 572;
	uint16_t x1571 = 171U;
	uint8_t x1572 = 2U;
	volatile int32_t t74 = 1;

	t74 = ((x1569+x1570)<<(x1571%x1572));

	if (t74 != 888) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x1605 = 95U;
	uint8_t x1606 = UINT8_MAX;
	uint8_t x1608 = 7U;
	volatile int32_t t75 = 168833;

	t75 = ((x1605+x1606)<<(x1607%x1608));

	if (t75 != 700) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x1609 = -1;
	volatile uint64_t x1610 = UINT64_MAX;
	static volatile int32_t x1611 = INT32_MIN;
	int16_t x1612 = -1;

	t76 = ((x1609+x1610)<<(x1611%x1612));

	if (t76 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x1614 = 0U;
	static int32_t x1615 = -1;
	static uint64_t x1616 = UINT64_MAX;
	volatile int32_t t77 = 80649376;

	t77 = ((x1613+x1614)<<(x1615%x1616));

	if (t77 != 65535) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x1629 = 1U;
	uint64_t x1630 = 1016302LLU;
	static int8_t x1631 = 1;
	uint32_t x1632 = 41480876U;

	t78 = ((x1629+x1630)<<(x1631%x1632));

	if (t78 != 2032606LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x1641 = UINT64_MAX;
	uint8_t x1642 = 0U;
	static volatile uint16_t x1643 = 0U;
	static uint64_t t79 = UINT64_MAX;

	t79 = ((x1641+x1642)<<(x1643%x1644));

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x1649 = -2;
	uint8_t x1650 = 4U;
	volatile uint64_t x1651 = 0LLU;
	int32_t t80 = 102;

	t80 = ((x1649+x1650)<<(x1651%x1652));

	if (t80 != 2) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x1653 = INT64_MAX;
	volatile int64_t x1656 = -1LL;
	uint64_t t81 = 47075758LLU;

	t81 = ((x1653+x1654)<<(x1655%x1656));

	if (t81 != 9223372036854775856LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint8_t x1658 = 1U;
	int32_t x1659 = INT32_MIN;
	int8_t x1660 = 2;
	static volatile int32_t t82 = 31;

	t82 = ((x1657+x1658)<<(x1659%x1660));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x1670 = INT16_MAX;
	int32_t x1671 = 13;
	uint32_t x1672 = 1U;
	volatile int32_t t83 = -1761894;

	t83 = ((x1669+x1670)<<(x1671%x1672));

	if (t83 != 32757) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x1686 = 3U;
	int8_t x1687 = INT8_MAX;
	uint64_t x1688 = 3LLU;
	int32_t t84 = -39300;

	t84 = ((x1685+x1686)<<(x1687%x1688));

	if (t84 != 4) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x1697 = INT16_MIN;
	uint64_t x1698 = 83108174739439192LLU;
	volatile int64_t x1699 = -1LL;

	t85 = ((x1697+x1698)<<(x1699%x1700));

	if (t85 != 83108174739406424LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x1706 = -4;
	int8_t x1707 = -1;
	volatile uint64_t t86 = 11656788607363711LLU;

	t86 = ((x1705+x1706)<<(x1707%x1708));

	if (t86 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x1714 = 10;
	int32_t x1716 = INT32_MIN;
	int32_t t87 = 26234;

	t87 = ((x1713+x1714)<<(x1715%x1716));

	if (t87 != 137) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x1745 = 1;
	int32_t x1747 = INT32_MIN;
	int32_t x1748 = INT32_MIN;
	int32_t t88 = -61;

	t88 = ((x1745+x1746)<<(x1747%x1748));

	if (t88 != 12) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x1801 = INT16_MAX;
	uint32_t x1802 = UINT32_MAX;
	int16_t x1803 = 12423;
	int16_t x1804 = -1;
	volatile uint32_t t89 = 13296951U;

	t89 = ((x1801+x1802)<<(x1803%x1804));

	if (t89 != 32766U) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x1805 = -7287537850LL;
	uint32_t x1807 = UINT32_MAX;
	int32_t x1808 = -1;
	static volatile uint64_t t90 = 31922162303LLU;

	t90 = ((x1805+x1806)<<(x1807%x1808));

	if (t90 != 18446744066453826420LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x1817 = UINT32_MAX;
	volatile uint8_t x1819 = 20U;
	int8_t x1820 = -1;
	static volatile uint32_t t91 = 3536402U;

	t91 = ((x1817+x1818)<<(x1819%x1820));

	if (t91 != 4294934527U) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x1829 = INT32_MAX;
	int8_t x1830 = -1;
	int64_t x1831 = -2351997LL;
	volatile int8_t x1832 = 3;
	int32_t t92 = -13050541;

	t92 = ((x1829+x1830)<<(x1831%x1832));

	if (t92 != 2147483646) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x1849 = INT64_MIN;
	static uint64_t x1850 = 585344LLU;
	uint64_t t93 = 2929152454423882681LLU;

	t93 = ((x1849+x1850)<<(x1851%x1852));

	if (t93 != 9223372036855361152LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x1857 = -1;
	volatile uint32_t x1859 = UINT32_MAX;
	uint8_t x1860 = UINT8_MAX;

	t94 = ((x1857+x1858)<<(x1859%x1860));

	if (t94 != 54) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x1881 = 26280745U;
	uint64_t x1882 = 1795452422719970447LLU;
	int8_t x1883 = 1;
	static int32_t x1884 = INT32_MIN;
	uint64_t t95 = 50600LLU;

	t95 = ((x1881+x1882)<<(x1883%x1884));

	if (t95 != 3590904845492502384LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x1909 = 46U;
	uint32_t x1911 = 1274119U;
	static volatile int64_t x1912 = -1LL;
	int32_t t96 = 0;

	t96 = ((x1909+x1910)<<(x1911%x1912));

	if (t96 != 34) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x1913 = 65953044LL;
	static uint16_t x1914 = UINT16_MAX;
	int32_t x1915 = 0;
	int64_t t97 = -17745362027051609LL;

	t97 = ((x1913+x1914)<<(x1915%x1916));

	if (t97 != 66018579LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x1917 = -4;
	int64_t x1920 = -1LL;
	static uint32_t t98 = 591622U;

	t98 = ((x1917+x1918)<<(x1919%x1920));

	if (t98 != 90U) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x1937 = 186052885380613241LLU;
	volatile int64_t x1938 = INT64_MIN;
	static uint32_t x1939 = UINT32_MAX;
	int32_t x1940 = -1;

	t99 = ((x1937+x1938)<<(x1939%x1940));

	if (t99 != 9409424922235389049LLU) { NG(); } else { ; }
	
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


    return 0;
}

