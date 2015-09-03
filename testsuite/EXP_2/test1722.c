#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x6 = UINT64_MAX;
uint16_t x8 = 0U;
uint16_t x25 = 38U;
int64_t x26 = 1720427164061LL;
volatile int8_t x91 = 18;
volatile uint8_t x92 = 3U;
static uint32_t x224 = 2U;
uint8_t x276 = 33U;
int16_t x425 = INT16_MIN;
uint8_t x428 = 1U;
int64_t x450 = INT64_MIN;
static int8_t x452 = 2;
uint8_t x544 = 0U;
uint32_t x587 = UINT32_MAX;
uint64_t t13 = 63804LLU;
uint8_t x632 = 3U;
uint32_t x723 = 3672U;
uint8_t x970 = 120U;
int32_t x1006 = INT32_MIN;
volatile int64_t x1091 = -926LL;
static uint8_t x1092 = 49U;
volatile uint64_t t24 = 63216LLU;
volatile int8_t x1144 = 7;
int16_t x1171 = INT16_MAX;
volatile uint64_t t29 = 2234351982854010LLU;
static uint32_t x1318 = 14U;
volatile uint8_t x1320 = 3U;
int32_t x1354 = -1;
volatile int32_t t32 = -1;
volatile int64_t x1383 = -1LL;
int16_t x1423 = -1;
uint32_t x1440 = 8U;
volatile int16_t x1441 = INT16_MAX;
volatile int64_t t38 = -4152171961696887270LL;
int64_t x1699 = INT64_MIN;
uint8_t x1739 = UINT8_MAX;
uint8_t x1740 = 13U;
volatile uint64_t x1750 = 16578667LLU;
int8_t x1752 = 53;
uint8_t x1824 = 53U;
uint8_t x1890 = UINT8_MAX;
int8_t x1892 = 0;
uint8_t x1978 = 67U;
int16_t x1980 = 17;
int16_t x2109 = 148;
uint32_t t53 = 938448U;
uint32_t x2135 = 60U;
uint32_t x2137 = 27U;
int16_t x2138 = 809;
volatile int8_t x2150 = INT8_MIN;
uint64_t x2162 = 2634143LLU;
volatile int32_t x2164 = 3;
volatile uint64_t t57 = 1013LLU;
volatile int16_t x2407 = INT16_MAX;
int8_t x2443 = INT8_MIN;
int32_t x2591 = INT32_MIN;
static int64_t x2675 = -1LL;
static uint8_t x2716 = 7U;
int16_t x2787 = 468;
int32_t x3014 = 1143;
int32_t x3029 = INT32_MIN;
uint16_t x3040 = 0U;
static int32_t x3065 = INT32_MAX;
int64_t t76 = -251LL;
volatile uint64_t t77 = 6544027537604818633LLU;
uint8_t x3104 = 4U;
static volatile int64_t t78 = 62776809LL;
uint64_t x3206 = 1171862LLU;
uint32_t x3219 = 24U;
int16_t x3383 = INT16_MIN;
int16_t x3449 = INT16_MIN;
uint8_t x3450 = 0U;
uint64_t t83 = 48630539039932605LLU;
uint16_t x3733 = 0U;
uint32_t t84 = 8349799U;
uint8_t x3756 = 3U;
int16_t x3829 = INT16_MAX;
uint8_t x3830 = 6U;
volatile int64_t x3949 = -1LL;
uint64_t x3950 = UINT64_MAX;
volatile uint64_t t90 = 625324027423711683LLU;
uint8_t x4048 = 1U;
int16_t x4065 = INT16_MIN;
int8_t x4081 = -1;
static uint64_t x4086 = 8734133197970LLU;
volatile uint64_t x4087 = 455389LLU;
static uint64_t t94 = 5412282302262697413LLU;
volatile uint32_t t95 = 32057044U;
volatile int8_t x4160 = 0;
int16_t x4174 = -3;
volatile uint64_t t99 = 16819851382988LLU;


void f0(void) {
	volatile int32_t x5 = INT32_MAX;
	static int8_t x7 = INT8_MIN;
	static uint64_t t0 = 175592298785338738LLU;

	t0 = ((x5*(x6&x7))<<x8);

	if (t0 != 18446743798831644800LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x27 = 1;
	volatile int8_t x28 = 37;
	volatile int64_t t1 = -267625241LL;

	t1 = ((x25*(x26&x27))<<x28);

	if (t1 != 5222680231936LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x69 = UINT32_MAX;
	int32_t x70 = INT32_MIN;
	static int32_t x71 = INT32_MIN;
	int16_t x72 = 0;
	uint32_t t2 = 1U;

	t2 = ((x69*(x70&x71))<<x72);

	if (t2 != 2147483648U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x89 = 141043190505518761LLU;
	uint64_t x90 = 2694368281844LLU;
	static volatile uint64_t t3 = 399295327972823LLU;

	t3 = ((x89*(x90&x91))<<x92);

	if (t3 != 18053528384706401408LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x169 = INT64_MIN;
	static int32_t x170 = INT32_MIN;
	uint64_t x171 = 233LLU;
	volatile uint8_t x172 = 28U;
	uint64_t t4 = 812694382702LLU;

	t4 = ((x169*(x170&x171))<<x172);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x221 = 29U;
	int8_t x222 = -1;
	static int32_t x223 = INT32_MAX;
	volatile uint32_t t5 = 2U;

	t5 = ((x221*(x222&x223))<<x224);

	if (t5 != 4294967180U) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x225 = INT16_MAX;
	uint8_t x226 = 84U;
	static int16_t x227 = -891;
	uint16_t x228 = 12U;
	int32_t t6 = 1162;

	t6 = ((x225*(x226&x227))<<x228);

	if (t6 != 536854528) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x273 = INT32_MAX;
	int64_t x274 = INT64_MAX;
	int64_t x275 = INT64_MIN;
	volatile int64_t t7 = 961911LL;

	t7 = ((x273*(x274&x275))<<x276);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x313 = 126006311967347LL;
	int64_t x314 = INT64_MAX;
	int64_t x315 = INT64_MIN;
	uint16_t x316 = 8U;
	int64_t t8 = -21594020LL;

	t8 = ((x313*(x314&x315))<<x316);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x426 = -1;
	uint8_t x427 = 0U;
	static volatile int32_t t9 = 258868;

	t9 = ((x425*(x426&x427))<<x428);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x449 = INT32_MIN;
	static uint8_t x451 = 4U;
	static volatile int64_t t10 = 62LL;

	t10 = ((x449*(x450&x451))<<x452);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x541 = UINT8_MAX;
	static uint64_t x542 = 16380111LLU;
	static uint64_t x543 = 1LLU;
	volatile uint64_t t11 = 3123804556LLU;

	t11 = ((x541*(x542&x543))<<x544);

	if (t11 != 255LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x585 = UINT32_MAX;
	int8_t x586 = INT8_MIN;
	int64_t x588 = 14LL;
	uint32_t t12 = 1U;

	t12 = ((x585*(x586&x587))<<x588);

	if (t12 != 2097152U) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x589 = 4371U;
	uint64_t x590 = 5LLU;
	static int8_t x591 = -1;
	uint8_t x592 = 3U;

	t13 = ((x589*(x590&x591))<<x592);

	if (t13 != 174840LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x629 = 52202331LLU;
	int32_t x630 = 2529;
	uint16_t x631 = 8U;
	volatile uint64_t t14 = 34836148620805720LLU;

	t14 = ((x629*(x630&x631))<<x632);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x653 = 7578;
	static uint32_t x654 = UINT32_MAX;
	volatile int64_t x655 = INT64_MIN;
	uint8_t x656 = 6U;
	static volatile int64_t t15 = -11842903364LL;

	t15 = ((x653*(x654&x655))<<x656);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x689 = INT8_MIN;
	int8_t x690 = INT8_MIN;
	int16_t x691 = -21;
	int64_t x692 = 8LL;
	int32_t t16 = -33184954;

	t16 = ((x689*(x690&x691))<<x692);

	if (t16 != 4194304) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x721 = INT8_MAX;
	int16_t x722 = INT16_MAX;
	int16_t x724 = 0;
	uint32_t t17 = 186242U;

	t17 = ((x721*(x722&x723))<<x724);

	if (t17 != 466344U) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x733 = UINT64_MAX;
	int8_t x734 = INT8_MAX;
	uint64_t x735 = 62652606648808642LLU;
	uint8_t x736 = 1U;
	volatile uint64_t t18 = 987426038957607466LLU;

	t18 = ((x733*(x734&x735))<<x736);

	if (t18 != 18446744073709551484LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x745 = 318657455LLU;
	static uint32_t x746 = 291U;
	static int32_t x747 = 3478;
	static uint8_t x748 = 5U;
	uint64_t t19 = 25LLU;

	t19 = ((x745*(x746&x747))<<x748);

	if (t19 != 2630835948480LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x869 = INT64_MIN;
	int64_t x870 = INT64_MIN;
	int32_t x871 = INT32_MAX;
	int32_t x872 = 19;
	volatile int64_t t20 = 333957886478520496LL;

	t20 = ((x869*(x870&x871))<<x872);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x969 = -413877721696LL;
	static volatile int16_t x971 = 2;
	int64_t x972 = 1LL;
	int64_t t21 = 27070910LL;

	t21 = ((x969*(x970&x971))<<x972);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x1005 = 2U;
	uint32_t x1007 = 997497128U;
	static uint16_t x1008 = 1U;
	static volatile uint32_t t22 = 31062618U;

	t22 = ((x1005*(x1006&x1007))<<x1008);

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1057 = INT16_MAX;
	volatile uint8_t x1058 = 6U;
	static int64_t x1059 = INT64_MAX;
	uint16_t x1060 = 6U;
	volatile int64_t t23 = -196523079052LL;

	t23 = ((x1057*(x1058&x1059))<<x1060);

	if (t23 != 12582528LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x1089 = 1915275LLU;
	uint16_t x1090 = 3915U;

	t24 = ((x1089*(x1090&x1091))<<x1092);

	if (t24 != 12946723028783333376LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x1105 = -1LL;
	uint16_t x1106 = 123U;
	int8_t x1107 = INT8_MIN;
	uint8_t x1108 = 1U;
	volatile int64_t t25 = 77910LL;

	t25 = ((x1105*(x1106&x1107))<<x1108);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x1141 = UINT32_MAX;
	int64_t x1142 = INT64_MIN;
	int16_t x1143 = INT16_MAX;
	volatile int64_t t26 = 320949528LL;

	t26 = ((x1141*(x1142&x1143))<<x1144);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x1145 = 0LL;
	uint64_t x1146 = UINT64_MAX;
	int16_t x1147 = INT16_MIN;
	int16_t x1148 = 12;
	volatile uint64_t t27 = 377846LLU;

	t27 = ((x1145*(x1146&x1147))<<x1148);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1169 = INT16_MIN;
	static int64_t x1170 = INT64_MIN;
	uint16_t x1172 = 17U;
	volatile int64_t t28 = 56LL;

	t28 = ((x1169*(x1170&x1171))<<x1172);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x1249 = 56U;
	int32_t x1250 = -384316;
	uint64_t x1251 = 0LLU;
	static uint16_t x1252 = 4U;

	t29 = ((x1249*(x1250&x1251))<<x1252);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x1317 = UINT32_MAX;
	volatile int64_t x1319 = INT64_MIN;
	static int64_t t30 = 4058133LL;

	t30 = ((x1317*(x1318&x1319))<<x1320);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x1353 = 5583538321364134LLU;
	int8_t x1355 = 1;
	int8_t x1356 = 0;
	uint64_t t31 = 23LLU;

	t31 = ((x1353*(x1354&x1355))<<x1356);

	if (t31 != 5583538321364134LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x1357 = -4095;
	int16_t x1358 = INT16_MAX;
	static volatile int32_t x1359 = INT32_MIN;
	int8_t x1360 = 29;

	t32 = ((x1357*(x1358&x1359))<<x1360);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x1381 = 7U;
	int8_t x1382 = 0;
	int32_t x1384 = 0;
	int64_t t33 = -3236734LL;

	t33 = ((x1381*(x1382&x1383))<<x1384);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x1417 = -1;
	int32_t x1418 = INT32_MIN;
	uint32_t x1419 = 631017U;
	uint8_t x1420 = 2U;
	uint32_t t34 = 3282U;

	t34 = ((x1417*(x1418&x1419))<<x1420);

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x1421 = 1U;
	int8_t x1422 = INT8_MAX;
	uint16_t x1424 = 7U;
	int32_t t35 = -238204;

	t35 = ((x1421*(x1422&x1423))<<x1424);

	if (t35 != 16256) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x1437 = -1;
	uint64_t x1438 = UINT64_MAX;
	int16_t x1439 = INT16_MAX;
	uint64_t t36 = 11529517662210333LLU;

	t36 = ((x1437*(x1438&x1439))<<x1440);

	if (t36 != 18446744073701163264LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x1442 = UINT32_MAX;
	int8_t x1443 = INT8_MIN;
	int16_t x1444 = 1;
	volatile uint32_t t37 = 57U;

	t37 = ((x1441*(x1442&x1443))<<x1444);

	if (t37 != 4286578944U) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x1497 = -16;
	int64_t x1498 = -1LL;
	int16_t x1499 = INT16_MIN;
	volatile int16_t x1500 = 5;

	t38 = ((x1497*(x1498&x1499))<<x1500);

	if (t38 != 16777216LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x1609 = 10;
	static uint8_t x1610 = 56U;
	int32_t x1611 = -132563;
	uint8_t x1612 = 1U;
	volatile int32_t t39 = -300;

	t39 = ((x1609*(x1610&x1611))<<x1612);

	if (t39 != 800) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x1613 = 0;
	uint8_t x1614 = 1U;
	int16_t x1615 = INT16_MIN;
	volatile int8_t x1616 = 1;
	static int32_t t40 = 5297382;

	t40 = ((x1613*(x1614&x1615))<<x1616);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x1625 = 29;
	uint32_t x1626 = 820183U;
	volatile int8_t x1627 = -1;
	static int8_t x1628 = 0;
	volatile uint32_t t41 = 233U;

	t41 = ((x1625*(x1626&x1627))<<x1628);

	if (t41 != 23785307U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x1697 = -1;
	volatile int8_t x1698 = 1;
	int32_t x1700 = 0;
	int64_t t42 = -290856LL;

	t42 = ((x1697*(x1698&x1699))<<x1700);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x1737 = INT32_MAX;
	static uint32_t x1738 = 163U;
	static uint32_t t43 = 115399724U;

	t43 = ((x1737*(x1738&x1739))<<x1740);

	if (t43 != 4293632000U) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x1749 = INT8_MIN;
	uint32_t x1751 = UINT32_MAX;
	uint64_t t44 = 4228400898LLU;

	t44 = ((x1749*(x1750&x1751))<<x1752);

	if (t44 != 5764607523034234880LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x1765 = INT64_MIN;
	static uint64_t x1766 = UINT64_MAX;
	int32_t x1767 = -1;
	static uint8_t x1768 = 0U;
	uint64_t t45 = 252771771283LLU;

	t45 = ((x1765*(x1766&x1767))<<x1768);

	if (t45 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x1777 = 601U;
	static volatile int64_t x1778 = INT64_MIN;
	int16_t x1779 = 2;
	int8_t x1780 = 2;
	volatile int64_t t46 = -1701991288LL;

	t46 = ((x1777*(x1778&x1779))<<x1780);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x1821 = 122U;
	static uint64_t x1822 = 31LLU;
	int32_t x1823 = INT32_MIN;
	uint64_t t47 = 103LLU;

	t47 = ((x1821*(x1822&x1823))<<x1824);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int8_t x1889 = 22;
	uint16_t x1891 = 1332U;
	volatile int32_t t48 = -22590;

	t48 = ((x1889*(x1890&x1891))<<x1892);

	if (t48 != 1144) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x1977 = 9U;
	static int64_t x1979 = INT64_MAX;
	volatile int64_t t49 = 240990525996390LL;

	t49 = ((x1977*(x1978&x1979))<<x1980);

	if (t49 != 79036416LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x2005 = -1;
	int64_t x2006 = INT64_MIN;
	uint8_t x2007 = 1U;
	volatile uint8_t x2008 = 3U;
	volatile int64_t t50 = -70LL;

	t50 = ((x2005*(x2006&x2007))<<x2008);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x2057 = INT32_MIN;
	uint32_t x2058 = 105256U;
	static int16_t x2059 = -1;
	volatile uint16_t x2060 = 5U;
	uint32_t t51 = 1265946U;

	t51 = ((x2057*(x2058&x2059))<<x2060);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x2110 = UINT32_MAX;
	uint8_t x2111 = 63U;
	int8_t x2112 = 0;
	volatile uint32_t t52 = 988U;

	t52 = ((x2109*(x2110&x2111))<<x2112);

	if (t52 != 9324U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x2129 = -1;
	uint16_t x2130 = 7U;
	static volatile uint32_t x2131 = 895U;
	volatile uint8_t x2132 = 0U;

	t53 = ((x2129*(x2130&x2131))<<x2132);

	if (t53 != 4294967289U) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x2133 = 7U;
	static volatile uint32_t x2134 = 205969U;
	uint8_t x2136 = 13U;
	uint32_t t54 = 40U;

	t54 = ((x2133*(x2134&x2135))<<x2136);

	if (t54 != 917504U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x2139 = 0LL;
	uint8_t x2140 = 0U;
	volatile int64_t t55 = -1367LL;

	t55 = ((x2137*(x2138&x2139))<<x2140);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x2149 = 0U;
	uint64_t x2151 = 33545727LLU;
	volatile int8_t x2152 = 0;
	volatile uint64_t t56 = 21461LLU;

	t56 = ((x2149*(x2150&x2151))<<x2152);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x2161 = INT8_MAX;
	int32_t x2163 = INT32_MAX;

	t57 = ((x2161*(x2162&x2163))<<x2164);

	if (t57 != 2676289288LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x2281 = 3U;
	uint64_t x2282 = UINT64_MAX;
	static volatile int64_t x2283 = -1LL;
	volatile uint16_t x2284 = 58U;
	volatile uint64_t t58 = 254262LLU;

	t58 = ((x2281*(x2282&x2283))<<x2284);

	if (t58 != 17582052945254416384LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x2405 = UINT16_MAX;
	static int64_t x2406 = INT64_MAX;
	int8_t x2408 = 6;
	static int64_t t59 = -7888638251633LL;

	t59 = ((x2405*(x2406&x2407))<<x2408);

	if (t59 != 137432662080LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x2441 = 19U;
	uint32_t x2442 = 6802830U;
	static volatile uint32_t x2444 = 5U;
	uint32_t t60 = 44433892U;

	t60 = ((x2441*(x2442&x2443))<<x2444);

	if (t60 != 4136112128U) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x2541 = UINT64_MAX;
	int32_t x2542 = INT32_MIN;
	uint64_t x2543 = 1598LLU;
	volatile uint8_t x2544 = 1U;
	uint64_t t61 = 47LLU;

	t61 = ((x2541*(x2542&x2543))<<x2544);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x2573 = INT32_MIN;
	static uint32_t x2574 = 234451U;
	uint8_t x2575 = UINT8_MAX;
	volatile int16_t x2576 = 1;
	volatile uint32_t t62 = 348754416U;

	t62 = ((x2573*(x2574&x2575))<<x2576);

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x2581 = -1;
	int32_t x2582 = -1;
	int8_t x2583 = INT8_MIN;
	volatile uint8_t x2584 = 3U;
	volatile int32_t t63 = -180994;

	t63 = ((x2581*(x2582&x2583))<<x2584);

	if (t63 != 1024) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x2589 = -1LL;
	static int8_t x2590 = -1;
	volatile int8_t x2592 = 0;
	volatile int64_t t64 = -721246430979699610LL;

	t64 = ((x2589*(x2590&x2591))<<x2592);

	if (t64 != 2147483648LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x2593 = INT8_MIN;
	volatile int32_t x2594 = INT32_MIN;
	int64_t x2595 = 1LL;
	static volatile uint32_t x2596 = 11U;
	volatile int64_t t65 = 11397915868843LL;

	t65 = ((x2593*(x2594&x2595))<<x2596);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x2645 = -1;
	uint32_t x2646 = UINT32_MAX;
	int8_t x2647 = INT8_MIN;
	volatile uint8_t x2648 = 0U;
	static uint32_t t66 = 190460U;

	t66 = ((x2645*(x2646&x2647))<<x2648);

	if (t66 != 128U) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x2673 = 45315U;
	int32_t x2674 = 188346;
	static uint8_t x2676 = 11U;
	volatile int64_t t67 = -337388LL;

	t67 = ((x2673*(x2674&x2675))<<x2676);

	if (t67 != 17479473131520LL) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint64_t x2693 = 111582316LLU;
	int8_t x2694 = INT8_MIN;
	int8_t x2695 = -55;
	int8_t x2696 = 0;
	uint64_t t68 = 13512676LLU;

	t68 = ((x2693*(x2694&x2695))<<x2696);

	if (t68 != 18446744059427015168LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x2713 = INT8_MIN;
	uint64_t x2714 = 144338LLU;
	int32_t x2715 = INT32_MIN;
	volatile uint64_t t69 = 452902634LLU;

	t69 = ((x2713*(x2714&x2715))<<x2716);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x2717 = INT16_MIN;
	int64_t x2718 = INT64_MIN;
	uint8_t x2719 = 77U;
	int8_t x2720 = 52;
	int64_t t70 = -1LL;

	t70 = ((x2717*(x2718&x2719))<<x2720);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x2753 = INT32_MAX;
	volatile uint32_t x2754 = UINT32_MAX;
	uint8_t x2755 = 99U;
	uint8_t x2756 = 31U;
	volatile uint32_t t71 = 365096383U;

	t71 = ((x2753*(x2754&x2755))<<x2756);

	if (t71 != 2147483648U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x2785 = -490;
	int32_t x2786 = INT32_MIN;
	static uint32_t x2788 = 4U;
	int32_t t72 = 0;

	t72 = ((x2785*(x2786&x2787))<<x2788);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x3013 = INT16_MIN;
	static int32_t x3015 = INT32_MIN;
	uint8_t x3016 = 25U;
	int32_t t73 = 18;

	t73 = ((x3013*(x3014&x3015))<<x3016);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x3030 = -494;
	uint32_t x3031 = 3572884U;
	int8_t x3032 = 1;
	uint32_t t74 = 4U;

	t74 = ((x3029*(x3030&x3031))<<x3032);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x3037 = 3U;
	static int64_t x3038 = 15LL;
	uint16_t x3039 = 6518U;
	volatile int64_t t75 = -13967967962504230LL;

	t75 = ((x3037*(x3038&x3039))<<x3040);

	if (t75 != 18LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x3066 = INT64_MIN;
	uint8_t x3067 = UINT8_MAX;
	int8_t x3068 = 2;

	t76 = ((x3065*(x3066&x3067))<<x3068);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x3069 = 14171LLU;
	volatile uint32_t x3070 = 40U;
	int8_t x3071 = -1;
	uint8_t x3072 = 1U;

	t77 = ((x3069*(x3070&x3071))<<x3072);

	if (t77 != 1133680LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x3101 = INT16_MAX;
	volatile int64_t x3102 = INT64_MIN;
	int16_t x3103 = INT16_MAX;

	t78 = ((x3101*(x3102&x3103))<<x3104);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x3205 = -12;
	int16_t x3207 = INT16_MIN;
	uint16_t x3208 = 47U;
	volatile uint64_t t79 = 240535632870023854LLU;

	t79 = ((x3205*(x3206&x3207))<<x3208);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x3217 = INT32_MIN;
	int16_t x3218 = -1;
	uint32_t x3220 = 0U;
	volatile uint32_t t80 = 207U;

	t80 = ((x3217*(x3218&x3219))<<x3220);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x3221 = 25441452093652569LLU;
	int64_t x3222 = 1LL;
	uint64_t x3223 = 3655456989547762159LLU;
	int8_t x3224 = 23;
	volatile uint64_t t81 = 10397127351LLU;

	t81 = ((x3221*(x3222&x3223))<<x3224);

	if (t81 != 7986375684886888448LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x3381 = INT16_MIN;
	uint64_t x3382 = UINT64_MAX;
	volatile uint32_t x3384 = 2U;
	uint64_t t82 = 2475555993194LLU;

	t82 = ((x3381*(x3382&x3383))<<x3384);

	if (t82 != 4294967296LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x3451 = 12204LLU;
	uint64_t x3452 = 26LLU;

	t83 = ((x3449*(x3450&x3451))<<x3452);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x3734 = 366U;
	uint32_t x3735 = 0U;
	uint16_t x3736 = 0U;

	t84 = ((x3733*(x3734&x3735))<<x3736);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x3753 = 385779735U;
	int32_t x3754 = -1;
	int32_t x3755 = INT32_MAX;
	uint32_t t85 = 2479U;

	t85 = ((x3753*(x3754&x3755))<<x3756);

	if (t85 != 1208729416U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x3813 = INT8_MAX;
	static int64_t x3814 = 544123736781LL;
	int64_t x3815 = 4991698LL;
	volatile int8_t x3816 = 0;
	int64_t t86 = 0LL;

	t86 = ((x3813*(x3814&x3815))<<x3816);

	if (t86 != 632642880LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x3831 = INT64_MAX;
	uint16_t x3832 = 1U;
	static int64_t t87 = -460405917212LL;

	t87 = ((x3829*(x3830&x3831))<<x3832);

	if (t87 != 393204LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x3841 = 0U;
	int32_t x3842 = INT32_MIN;
	static uint64_t x3843 = 23998967207112690LLU;
	static uint8_t x3844 = 1U;
	volatile uint64_t t88 = 3852281351528LLU;

	t88 = ((x3841*(x3842&x3843))<<x3844);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x3889 = INT64_MIN;
	int64_t x3890 = INT64_MIN;
	uint8_t x3891 = UINT8_MAX;
	volatile int8_t x3892 = 7;
	static int64_t t89 = 38468408LL;

	t89 = ((x3889*(x3890&x3891))<<x3892);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x3951 = 2530;
	volatile uint32_t x3952 = 2U;

	t90 = ((x3949*(x3950&x3951))<<x3952);

	if (t90 != 18446744073709541496LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint16_t x4045 = 10U;
	uint64_t x4046 = UINT64_MAX;
	uint64_t x4047 = UINT64_MAX;
	uint64_t t91 = 811487022874681097LLU;

	t91 = ((x4045*(x4046&x4047))<<x4048);

	if (t91 != 18446744073709551596LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x4066 = 6U;
	volatile uint8_t x4067 = 25U;
	uint8_t x4068 = 1U;
	volatile int32_t t92 = 0;

	t92 = ((x4065*(x4066&x4067))<<x4068);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x4082 = UINT32_MAX;
	int8_t x4083 = INT8_MIN;
	volatile uint32_t x4084 = 28U;
	volatile uint32_t t93 = 2069U;

	t93 = ((x4081*(x4082&x4083))<<x4084);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x4085 = INT64_MIN;
	int8_t x4088 = 4;

	t94 = ((x4085*(x4086&x4087))<<x4088);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x4113 = 5U;
	volatile int16_t x4114 = -1;
	uint32_t x4115 = UINT32_MAX;
	static int32_t x4116 = 3;

	t95 = ((x4113*(x4114&x4115))<<x4116);

	if (t95 != 4294967256U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x4157 = -1;
	int64_t x4158 = -1LL;
	int32_t x4159 = -1;
	int64_t t96 = -1218607397471642893LL;

	t96 = ((x4157*(x4158&x4159))<<x4160);

	if (t96 != 1LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x4173 = 12183U;
	int16_t x4175 = 19;
	volatile int64_t x4176 = 2LL;
	static int32_t t97 = -234578176;

	t97 = ((x4173*(x4174&x4175))<<x4176);

	if (t97 != 828444) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x4241 = 846927U;
	uint64_t x4242 = UINT64_MAX;
	int32_t x4243 = 245;
	volatile uint8_t x4244 = 9U;
	static volatile uint64_t t98 = 339453857LLU;

	t98 = ((x4241*(x4242&x4243))<<x4244);

	if (t98 != 106238522880LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x4373 = 2;
	int64_t x4374 = 51289337LL;
	static uint64_t x4375 = 29141859LLU;
	uint16_t x4376 = 1U;

	t99 = ((x4373*(x4374&x4375))<<x4376);

	if (t99 != 70394244LLU) { NG(); } else { ; }
	
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

