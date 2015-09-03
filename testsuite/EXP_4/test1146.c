#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x75 = UINT32_MAX;
volatile uint64_t x79 = 61817LLU;
int64_t x253 = INT64_MIN;
int64_t x254 = -12125004936LL;
volatile uint64_t t2 = 715LLU;
int16_t x309 = 0;
static int32_t x317 = -1;
uint32_t t8 = 129193U;
static int16_t x476 = 9;
uint16_t x541 = 28U;
uint32_t x543 = UINT32_MAX;
int8_t x544 = 3;
static uint32_t x553 = UINT32_MAX;
uint64_t t12 = 494173292270LLU;
volatile int32_t t13 = -19;
int64_t x882 = INT64_MIN;
uint32_t x883 = UINT32_MAX;
static uint16_t x937 = 260U;
int64_t x939 = 4185896123LL;
volatile int32_t t19 = -1064659;
uint8_t x1084 = 31U;
uint16_t x1157 = 1U;
volatile uint32_t x1158 = UINT32_MAX;
static int64_t x1159 = INT64_MAX;
int64_t x1173 = INT64_MIN;
static volatile int64_t x1174 = INT64_MIN;
int64_t t22 = INT64_MIN;
int8_t x1224 = 0;
volatile uint64_t t24 = 122823LLU;
volatile uint8_t x1356 = 0U;
int64_t x1399 = INT64_MAX;
uint32_t x1411 = UINT32_MAX;
int16_t x1412 = 0;
int64_t x1442 = INT64_MIN;
static uint64_t x1515 = UINT64_MAX;
uint64_t t29 = 29626698LLU;
int16_t x1590 = INT16_MAX;
uint8_t x1592 = 14U;
static int64_t x1601 = INT64_MIN;
uint8_t x1613 = UINT8_MAX;
volatile int32_t t32 = 0;
volatile int16_t x1638 = INT16_MIN;
uint32_t x1639 = 4U;
int16_t x1751 = INT16_MAX;
volatile int32_t x1813 = -660477;
static volatile int32_t t35 = -5130645;
int32_t x1849 = -3196;
int8_t x1851 = 8;
volatile int16_t x1925 = INT16_MIN;
volatile int32_t t40 = 572120;
static int16_t x2273 = -165;
uint64_t x2275 = 134LLU;
int64_t t45 = -525215079LL;
static uint64_t x2427 = UINT64_MAX;
int32_t x2597 = INT32_MAX;
static int64_t x2598 = INT64_MAX;
int8_t x2599 = INT8_MAX;
int16_t x2606 = INT16_MAX;
uint32_t t49 = UINT32_MAX;
int16_t x2758 = INT16_MIN;
volatile int64_t t50 = -222443LL;
static int32_t x2795 = 111;
int16_t x2817 = INT16_MAX;
uint32_t t52 = 234796275U;
int32_t x2839 = INT32_MAX;
int8_t x2840 = 0;
uint16_t x3183 = UINT16_MAX;
volatile uint64_t t57 = 60560919236LLU;
int64_t t58 = 30156LL;
int16_t x3362 = -1;
uint64_t x3363 = 0LLU;
uint16_t x3364 = 4U;
uint64_t t60 = 466666638LLU;
static uint32_t x3457 = UINT32_MAX;
uint16_t x3459 = 3546U;
static volatile uint32_t t61 = UINT32_MAX;
int32_t x3538 = 31025;
uint32_t t63 = 59668573U;
int16_t x3609 = -1;
volatile uint64_t x3610 = 89916143459LLU;
int8_t x3611 = INT8_MAX;
volatile int64_t t65 = 394LL;
int8_t x3632 = 18;
volatile int64_t t66 = 394855LL;
int64_t x3645 = -23520858281LL;
uint64_t t67 = 27793LLU;
uint32_t x3701 = 355267U;
uint16_t x3909 = UINT16_MAX;
int8_t x4045 = INT8_MAX;
static int16_t x4046 = INT16_MIN;
int8_t x4048 = 17;
int16_t x4112 = 4;
uint16_t x4130 = 73U;
static uint64_t t73 = 9601856162286LLU;
int8_t x4286 = INT8_MAX;
volatile uint32_t t75 = 42U;
volatile int64_t x4299 = 374618958169892585LL;
volatile uint16_t x4300 = 8U;
uint8_t x4363 = 2U;
uint8_t x4439 = 1U;
uint8_t x4546 = UINT8_MAX;
uint8_t x4575 = UINT8_MAX;
volatile int64_t t83 = 5824LL;
int64_t x4693 = INT64_MIN;
static volatile int64_t t84 = INT64_MIN;
uint64_t x4798 = 2141703374LLU;
int8_t x4909 = INT8_MAX;
static volatile int32_t t92 = 7341;
volatile int16_t x5157 = 46;
uint8_t x5158 = 0U;
static volatile int64_t x5568 = 24LL;
int8_t x5684 = 1;
int8_t x5747 = INT8_MAX;
int64_t x5805 = INT64_MIN;


void f0(void) {
	static uint64_t x73 = UINT64_MAX;
	uint64_t x74 = 15480779139264LLU;
	uint8_t x76 = 5U;
	static uint64_t t0 = 54835501754LLU;

	t0 = (x73-(x74&(x75>>x76)));

	if (t0 != 18446744073603159871LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x77 = INT64_MAX;
	int32_t x78 = INT32_MIN;
	static uint16_t x80 = 4U;
	volatile uint64_t t1 = 227464666719884888LLU;

	t1 = (x77-(x78&(x79>>x80)));

	if (t1 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint64_t x255 = UINT64_MAX;
	volatile int32_t x256 = 3;

	t2 = (x253-(x254&(x255>>x256)));

	if (t2 != 6917529039766086792LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x277 = INT8_MAX;
	uint32_t x278 = UINT32_MAX;
	static volatile uint64_t x279 = UINT64_MAX;
	int8_t x280 = 0;
	uint64_t t3 = 110984LLU;

	t3 = (x277-(x278&(x279>>x280)));

	if (t3 != 18446744069414584448LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x301 = UINT64_MAX;
	int32_t x302 = INT32_MIN;
	volatile uint16_t x303 = UINT16_MAX;
	uint8_t x304 = 1U;
	uint64_t t4 = UINT64_MAX;

	t4 = (x301-(x302&(x303>>x304)));

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x310 = INT32_MAX;
	volatile int16_t x311 = INT16_MAX;
	volatile int8_t x312 = 12;
	volatile int32_t t5 = -1;

	t5 = (x309-(x310&(x311>>x312)));

	if (t5 != -7) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x313 = 183662845266327LLU;
	uint8_t x314 = 0U;
	uint16_t x315 = UINT16_MAX;
	uint32_t x316 = 2U;
	uint64_t t6 = 23366286LLU;

	t6 = (x313-(x314&(x315>>x316)));

	if (t6 != 183662845266327LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x318 = INT16_MIN;
	uint16_t x319 = 5U;
	uint32_t x320 = 8U;
	int32_t t7 = -914;

	t7 = (x317-(x318&(x319>>x320)));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x365 = INT8_MAX;
	uint32_t x366 = 210838779U;
	int16_t x367 = INT16_MAX;
	uint32_t x368 = 1U;

	t8 = (x365-(x366&(x367>>x368)));

	if (t8 != 4294957956U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x473 = 70346557U;
	static int32_t x474 = INT32_MAX;
	static int64_t x475 = INT64_MAX;
	volatile int64_t t9 = -1242980922491247152LL;

	t9 = (x473-(x474&(x475>>x476)));

	if (t9 != -2077137090LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x542 = -1LL;
	static int64_t t10 = -2128454648518772LL;

	t10 = (x541-(x542&(x543>>x544)));

	if (t10 != -536870883LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x554 = 51U;
	volatile int8_t x555 = INT8_MAX;
	volatile int8_t x556 = 20;
	volatile uint32_t t11 = UINT32_MAX;

	t11 = (x553-(x554&(x555>>x556)));

	if (t11 != UINT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x581 = 20LL;
	static volatile int64_t x582 = 1212234072LL;
	static uint64_t x583 = 876061LLU;
	int8_t x584 = 0;

	t12 = (x581-(x582&(x583>>x584)));

	if (t12 != 18446744073709479932LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x677 = -1;
	static uint16_t x678 = 1709U;
	static uint8_t x679 = UINT8_MAX;
	uint16_t x680 = 5U;

	t13 = (x677-(x678&(x679>>x680)));

	if (t13 != -6) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x697 = 1937U;
	int32_t x698 = INT32_MIN;
	int64_t x699 = INT64_MAX;
	volatile uint32_t x700 = 6U;
	volatile int64_t t14 = -22944808607513791LL;

	t14 = (x697-(x698&(x699>>x700)));

	if (t14 != -144115185928370287LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x701 = INT64_MAX;
	int64_t x702 = INT64_MIN;
	volatile int32_t x703 = INT32_MAX;
	static int8_t x704 = 8;
	int64_t t15 = INT64_MAX;

	t15 = (x701-(x702&(x703>>x704)));

	if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x825 = INT8_MAX;
	int8_t x826 = INT8_MIN;
	volatile uint64_t x827 = 1353112178LLU;
	uint32_t x828 = 3U;
	uint64_t t16 = 217816578LLU;

	t16 = (x825-(x826&(x827>>x828)));

	if (t16 != 18446744073540412799LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x881 = INT16_MIN;
	static uint8_t x884 = 6U;
	static volatile int64_t t17 = 2472LL;

	t17 = (x881-(x882&(x883>>x884)));

	if (t17 != -32768LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x938 = INT8_MIN;
	uint8_t x940 = 58U;
	volatile int64_t t18 = 71447027252432473LL;

	t18 = (x937-(x938&(x939>>x940)));

	if (t18 != 260LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x1073 = INT16_MIN;
	int16_t x1074 = -1;
	static volatile int16_t x1075 = INT16_MAX;
	uint8_t x1076 = 1U;

	t19 = (x1073-(x1074&(x1075>>x1076)));

	if (t19 != -49151) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x1081 = UINT32_MAX;
	uint8_t x1082 = UINT8_MAX;
	uint32_t x1083 = 203485959U;
	volatile uint32_t t20 = UINT32_MAX;

	t20 = (x1081-(x1082&(x1083>>x1084)));

	if (t20 != UINT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x1160 = 31U;
	static int64_t t21 = -3LL;

	t21 = (x1157-(x1158&(x1159>>x1160)));

	if (t21 != -4294967294LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x1175 = 0;
	volatile int8_t x1176 = 11;

	t22 = (x1173-(x1174&(x1175>>x1176)));

	if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1205 = INT8_MIN;
	uint8_t x1206 = 17U;
	static int32_t x1207 = 7478222;
	volatile uint16_t x1208 = 0U;
	int32_t t23 = 7958;

	t23 = (x1205-(x1206&(x1207>>x1208)));

	if (t23 != -128) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1221 = INT16_MAX;
	uint32_t x1222 = 154536U;
	uint64_t x1223 = 333318618131LLU;

	t24 = (x1221-(x1222&(x1223>>x1224)));

	if (t24 != 18446744073709430783LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x1353 = INT32_MAX;
	volatile int8_t x1354 = INT8_MIN;
	uint8_t x1355 = UINT8_MAX;
	int32_t t25 = -103025;

	t25 = (x1353-(x1354&(x1355>>x1356)));

	if (t25 != 2147483519) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x1397 = 635U;
	int32_t x1398 = -1;
	int64_t x1400 = 63LL;
	static int64_t t26 = -945137468103844783LL;

	t26 = (x1397-(x1398&(x1399>>x1400)));

	if (t26 != 635LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x1409 = 1U;
	uint64_t x1410 = 13791LLU;
	uint64_t t27 = 9313486200875LLU;

	t27 = (x1409-(x1410&(x1411>>x1412)));

	if (t27 != 18446744073709537826LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x1441 = INT8_MIN;
	volatile int64_t x1443 = 1227400740818378LL;
	volatile int16_t x1444 = 2;
	static volatile int64_t t28 = -4004998LL;

	t28 = (x1441-(x1442&(x1443>>x1444)));

	if (t28 != -128LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x1513 = INT32_MAX;
	int64_t x1514 = INT64_MIN;
	int8_t x1516 = 4;

	t29 = (x1513-(x1514&(x1515>>x1516)));

	if (t29 != 2147483647LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x1589 = 2842U;
	static uint64_t x1591 = 673705252LLU;
	static volatile uint64_t t30 = 398417207LLU;

	t30 = (x1589-(x1590&(x1591>>x1592)));

	if (t30 != 18446744073709546107LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x1602 = -1LL;
	volatile uint64_t x1603 = UINT64_MAX;
	volatile int8_t x1604 = 1;
	volatile uint64_t t31 = 373LLU;

	t31 = (x1601-(x1602&(x1603>>x1604)));

	if (t31 != 1LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x1614 = UINT8_MAX;
	uint16_t x1615 = 2U;
	uint32_t x1616 = 1U;

	t32 = (x1613-(x1614&(x1615>>x1616)));

	if (t32 != 254) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x1637 = 16943U;
	uint32_t x1640 = 1U;
	volatile uint32_t t33 = 28732U;

	t33 = (x1637-(x1638&(x1639>>x1640)));

	if (t33 != 16943U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x1749 = INT64_MIN;
	static int32_t x1750 = INT32_MIN;
	uint32_t x1752 = 1U;
	volatile int64_t t34 = INT64_MIN;

	t34 = (x1749-(x1750&(x1751>>x1752)));

	if (t34 != INT64_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x1814 = 12U;
	uint8_t x1815 = 6U;
	static uint32_t x1816 = 1U;

	t35 = (x1813-(x1814&(x1815>>x1816)));

	if (t35 != -660477) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x1837 = 208U;
	int16_t x1838 = -1;
	int32_t x1839 = 253756;
	static int16_t x1840 = 10;
	int32_t t36 = 2;

	t36 = (x1837-(x1838&(x1839>>x1840)));

	if (t36 != -39) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x1850 = -1;
	uint8_t x1852 = 11U;
	volatile int32_t t37 = 109693;

	t37 = (x1849-(x1850&(x1851>>x1852)));

	if (t37 != -3196) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x1926 = 26U;
	volatile uint16_t x1927 = UINT16_MAX;
	uint8_t x1928 = 7U;
	volatile int32_t t38 = 15;

	t38 = (x1925-(x1926&(x1927>>x1928)));

	if (t38 != -32794) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x1953 = INT8_MIN;
	volatile int8_t x1954 = INT8_MIN;
	int32_t x1955 = INT32_MAX;
	int8_t x1956 = 12;
	int32_t t39 = 2;

	t39 = (x1953-(x1954&(x1955>>x1956)));

	if (t39 != -524288) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x2157 = INT16_MIN;
	volatile int32_t x2158 = -1;
	static uint16_t x2159 = 103U;
	uint16_t x2160 = 9U;

	t40 = (x2157-(x2158&(x2159>>x2160)));

	if (t40 != -32768) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x2165 = INT16_MAX;
	volatile int32_t x2166 = INT32_MIN;
	int8_t x2167 = INT8_MAX;
	static volatile uint32_t x2168 = 2U;
	static volatile int32_t t41 = 61084;

	t41 = (x2165-(x2166&(x2167>>x2168)));

	if (t41 != 32767) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x2169 = INT64_MAX;
	uint64_t x2170 = UINT64_MAX;
	int32_t x2171 = INT32_MAX;
	int16_t x2172 = 0;
	uint64_t t42 = 956874029082604LLU;

	t42 = (x2169-(x2170&(x2171>>x2172)));

	if (t42 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x2225 = INT32_MIN;
	int8_t x2226 = INT8_MIN;
	uint32_t x2227 = 242930426U;
	uint16_t x2228 = 9U;
	volatile uint32_t t43 = 2060U;

	t43 = (x2225-(x2226&(x2227>>x2228)));

	if (t43 != 2147009280U) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int16_t x2274 = INT16_MIN;
	static uint16_t x2276 = 2U;
	uint64_t t44 = 6078LLU;

	t44 = (x2273-(x2274&(x2275>>x2276)));

	if (t44 != 18446744073709551451LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x2289 = -1LL;
	int64_t x2290 = INT64_MIN;
	volatile uint32_t x2291 = UINT32_MAX;
	static int8_t x2292 = 11;

	t45 = (x2289-(x2290&(x2291>>x2292)));

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint8_t x2425 = 1U;
	uint16_t x2426 = UINT16_MAX;
	uint16_t x2428 = 56U;
	volatile uint64_t t46 = 721730436LLU;

	t46 = (x2425-(x2426&(x2427>>x2428)));

	if (t46 != 18446744073709551362LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x2600 = 21U;
	volatile int64_t t47 = 170387LL;

	t47 = (x2597-(x2598&(x2599>>x2600)));

	if (t47 != 2147483647LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x2605 = 15U;
	volatile uint64_t x2607 = 5LLU;
	int8_t x2608 = 18;
	static uint64_t t48 = 136776209LLU;

	t48 = (x2605-(x2606&(x2607>>x2608)));

	if (t48 != 15LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x2737 = UINT32_MAX;
	volatile int32_t x2738 = 1259;
	static int8_t x2739 = INT8_MAX;
	uint64_t x2740 = 31LLU;

	t49 = (x2737-(x2738&(x2739>>x2740)));

	if (t49 != UINT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x2757 = -1;
	static int64_t x2759 = 487393089082LL;
	uint8_t x2760 = 14U;

	t50 = (x2757-(x2758&(x2759>>x2760)));

	if (t50 != -29720577LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x2793 = 1U;
	int8_t x2794 = INT8_MIN;
	int8_t x2796 = 13;
	volatile int32_t t51 = 15448;

	t51 = (x2793-(x2794&(x2795>>x2796)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x2818 = INT16_MIN;
	uint32_t x2819 = 53005U;
	int8_t x2820 = 1;

	t52 = (x2817-(x2818&(x2819>>x2820)));

	if (t52 != 32767U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x2837 = INT32_MAX;
	uint64_t x2838 = UINT64_MAX;
	uint64_t t53 = 85146984240LLU;

	t53 = (x2837-(x2838&(x2839>>x2840)));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x2841 = -1LL;
	int32_t x2842 = -1;
	int32_t x2843 = INT32_MAX;
	static uint8_t x2844 = 1U;
	volatile int64_t t54 = 507262LL;

	t54 = (x2841-(x2842&(x2843>>x2844)));

	if (t54 != -1073741824LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x3065 = UINT16_MAX;
	uint16_t x3066 = 20692U;
	static volatile uint16_t x3067 = UINT16_MAX;
	uint64_t x3068 = 22LLU;
	int32_t t55 = 23811402;

	t55 = (x3065-(x3066&(x3067>>x3068)));

	if (t55 != 65535) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x3181 = 1;
	uint64_t x3182 = 12LLU;
	uint8_t x3184 = 1U;
	volatile uint64_t t56 = 26823664231637LLU;

	t56 = (x3181-(x3182&(x3183>>x3184)));

	if (t56 != 18446744073709551605LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x3185 = -2412;
	uint64_t x3186 = UINT64_MAX;
	uint16_t x3187 = 1U;
	int8_t x3188 = 0;

	t57 = (x3185-(x3186&(x3187>>x3188)));

	if (t57 != 18446744073709549203LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x3273 = 0U;
	int64_t x3274 = 508595858657493LL;
	volatile uint8_t x3275 = UINT8_MAX;
	uint32_t x3276 = 1U;

	t58 = (x3273-(x3274&(x3275>>x3276)));

	if (t58 != -85LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x3361 = 1U;
	uint64_t t59 = 11513LLU;

	t59 = (x3361-(x3362&(x3363>>x3364)));

	if (t59 != 1LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x3429 = 12U;
	int8_t x3430 = -1;
	uint64_t x3431 = UINT64_MAX;
	uint32_t x3432 = 1U;

	t60 = (x3429-(x3430&(x3431>>x3432)));

	if (t60 != 9223372036854775821LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int32_t x3458 = INT32_MAX;
	uint64_t x3460 = 15LLU;

	t61 = (x3457-(x3458&(x3459>>x3460)));

	if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x3537 = 107U;
	uint64_t x3539 = 1143919LLU;
	static volatile int8_t x3540 = 8;
	static uint64_t t62 = 2050237025501420LLU;

	t62 = (x3537-(x3538&(x3539>>x3540)));

	if (t62 != 18446744073709547323LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x3585 = -380;
	int16_t x3586 = INT16_MAX;
	static uint32_t x3587 = 466691U;
	static uint64_t x3588 = 1LLU;

	t63 = (x3585-(x3586&(x3587>>x3588)));

	if (t63 != 4294962947U) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x3612 = 4U;
	static volatile uint64_t t64 = 36LLU;

	t64 = (x3609-(x3610&(x3611>>x3612)));

	if (t64 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x3621 = -456363442LL;
	uint32_t x3622 = 1216U;
	uint8_t x3623 = UINT8_MAX;
	int16_t x3624 = 8;

	t65 = (x3621-(x3622&(x3623>>x3624)));

	if (t65 != -456363442LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x3629 = 377423027245LL;
	uint16_t x3630 = UINT16_MAX;
	volatile uint16_t x3631 = 2U;

	t66 = (x3629-(x3630&(x3631>>x3632)));

	if (t66 != 377423027245LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x3646 = INT64_MIN;
	static volatile uint64_t x3647 = UINT64_MAX;
	int8_t x3648 = 6;

	t67 = (x3645-(x3646&(x3647>>x3648)));

	if (t67 != 18446744050188693335LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x3702 = INT16_MIN;
	int32_t x3703 = INT32_MAX;
	uint16_t x3704 = 5U;
	uint32_t t68 = 229239831U;

	t68 = (x3701-(x3702&(x3703>>x3704)));

	if (t68 != 4228246467U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x3825 = INT16_MIN;
	int8_t x3826 = -1;
	uint32_t x3827 = 1U;
	int8_t x3828 = 1;
	uint32_t t69 = 12U;

	t69 = (x3825-(x3826&(x3827>>x3828)));

	if (t69 != 4294934528U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x3910 = 93U;
	uint32_t x3911 = 62296240U;
	static volatile uint64_t x3912 = 14LLU;
	uint32_t t70 = 114U;

	t70 = (x3909-(x3910&(x3911>>x3912)));

	if (t70 != 65447U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x4047 = 14450527;
	volatile int32_t t71 = -925;

	t71 = (x4045-(x4046&(x4047>>x4048)));

	if (t71 != 127) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x4109 = 3U;
	static int16_t x4110 = INT16_MAX;
	volatile uint32_t x4111 = UINT32_MAX;
	volatile uint32_t t72 = 415381U;

	t72 = (x4109-(x4110&(x4111>>x4112)));

	if (t72 != 4294934532U) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x4129 = -1;
	static uint64_t x4131 = UINT64_MAX;
	uint32_t x4132 = 17U;

	t73 = (x4129-(x4130&(x4131>>x4132)));

	if (t73 != 18446744073709551542LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x4225 = INT8_MAX;
	int8_t x4226 = -1;
	static int64_t x4227 = INT64_MAX;
	static volatile uint16_t x4228 = 24U;
	volatile int64_t t74 = 86927LL;

	t74 = (x4225-(x4226&(x4227>>x4228)));

	if (t74 != -549755813760LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x4285 = 3019877U;
	static uint8_t x4287 = UINT8_MAX;
	int8_t x4288 = 18;

	t75 = (x4285-(x4286&(x4287>>x4288)));

	if (t75 != 3019877U) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x4297 = INT16_MIN;
	volatile int64_t x4298 = -1LL;
	volatile int64_t t76 = 5334722661386LL;

	t76 = (x4297-(x4298&(x4299>>x4300)));

	if (t76 != -1463355305383910LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x4361 = 54U;
	int64_t x4362 = 1662456194LL;
	uint16_t x4364 = 7U;
	int64_t t77 = 365380670846550886LL;

	t77 = (x4361-(x4362&(x4363>>x4364)));

	if (t77 != 54LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x4365 = UINT8_MAX;
	int16_t x4366 = 2278;
	uint8_t x4367 = UINT8_MAX;
	uint16_t x4368 = 25U;
	int32_t t78 = 1;

	t78 = (x4365-(x4366&(x4367>>x4368)));

	if (t78 != 255) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x4437 = INT32_MAX;
	int16_t x4438 = INT16_MIN;
	uint16_t x4440 = 21U;
	static int32_t t79 = INT32_MAX;

	t79 = (x4437-(x4438&(x4439>>x4440)));

	if (t79 != INT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x4453 = -2596;
	int64_t x4454 = 30LL;
	uint8_t x4455 = UINT8_MAX;
	volatile uint8_t x4456 = 3U;
	int64_t t80 = 628505498364115LL;

	t80 = (x4453-(x4454&(x4455>>x4456)));

	if (t80 != -2626LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x4545 = INT8_MIN;
	int8_t x4547 = 60;
	uint8_t x4548 = 17U;
	volatile int32_t t81 = 65788;

	t81 = (x4545-(x4546&(x4547>>x4548)));

	if (t81 != -128) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x4573 = -1;
	static uint64_t x4574 = 107733326435LLU;
	uint64_t x4576 = 20LLU;
	volatile uint64_t t82 = UINT64_MAX;

	t82 = (x4573-(x4574&(x4575>>x4576)));

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x4689 = -661475273LL;
	int32_t x4690 = -1639;
	int32_t x4691 = INT32_MAX;
	uint8_t x4692 = 5U;

	t83 = (x4689-(x4690&(x4691>>x4692)));

	if (t83 != -728582498LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x4694 = INT16_MIN;
	static int8_t x4695 = 0;
	uint8_t x4696 = 1U;

	t84 = (x4693-(x4694&(x4695>>x4696)));

	if (t84 != INT64_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x4797 = UINT8_MAX;
	int16_t x4799 = 1;
	uint8_t x4800 = 10U;
	static uint64_t t85 = 0LLU;

	t85 = (x4797-(x4798&(x4799>>x4800)));

	if (t85 != 255LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint64_t x4805 = 49LLU;
	int32_t x4806 = INT32_MIN;
	static uint8_t x4807 = UINT8_MAX;
	uint8_t x4808 = 5U;
	uint64_t t86 = 2997148219038126769LLU;

	t86 = (x4805-(x4806&(x4807>>x4808)));

	if (t86 != 49LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x4837 = 14U;
	int32_t x4838 = INT32_MIN;
	uint16_t x4839 = UINT16_MAX;
	int8_t x4840 = 18;
	volatile int32_t t87 = -1;

	t87 = (x4837-(x4838&(x4839>>x4840)));

	if (t87 != 14) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x4910 = UINT32_MAX;
	int64_t x4911 = INT64_MAX;
	uint8_t x4912 = 1U;
	volatile int64_t t88 = -5655673918LL;

	t88 = (x4909-(x4910&(x4911>>x4912)));

	if (t88 != -4294967168LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x4969 = INT64_MIN;
	static uint32_t x4970 = 4U;
	int64_t x4971 = 317LL;
	uint8_t x4972 = 52U;
	int64_t t89 = INT64_MIN;

	t89 = (x4969-(x4970&(x4971>>x4972)));

	if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x5017 = INT16_MIN;
	uint64_t x5018 = 3LLU;
	int64_t x5019 = INT64_MAX;
	uint16_t x5020 = 1U;
	uint64_t t90 = 12661761LLU;

	t90 = (x5017-(x5018&(x5019>>x5020)));

	if (t90 != 18446744073709518845LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x5029 = 1712167604612497LLU;
	static int8_t x5030 = INT8_MIN;
	uint64_t x5031 = 53266072134203LLU;
	static int8_t x5032 = 0;
	volatile uint64_t t91 = 16259891LLU;

	t91 = (x5029-(x5030&(x5031>>x5032)));

	if (t91 != 1658901532478353LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x5141 = 199U;
	int8_t x5142 = INT8_MIN;
	volatile int16_t x5143 = INT16_MAX;
	static volatile int8_t x5144 = 2;

	t92 = (x5141-(x5142&(x5143>>x5144)));

	if (t92 != -7865) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x5159 = 5974844750483LLU;
	uint8_t x5160 = 9U;
	uint64_t t93 = 0LLU;

	t93 = (x5157-(x5158&(x5159>>x5160)));

	if (t93 != 46LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x5489 = 2U;
	int64_t x5490 = -49674LL;
	volatile uint32_t x5491 = UINT32_MAX;
	int8_t x5492 = 5;
	int64_t t94 = 32468547224666LL;

	t94 = (x5489-(x5490&(x5491>>x5492)));

	if (t94 != -134168052LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x5565 = INT8_MIN;
	int64_t x5566 = INT64_MIN;
	static uint32_t x5567 = 2039U;
	int64_t t95 = -1916229930664000LL;

	t95 = (x5565-(x5566&(x5567>>x5568)));

	if (t95 != -128LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x5649 = INT32_MAX;
	int32_t x5650 = -3884459;
	static int64_t x5651 = INT64_MAX;
	int8_t x5652 = 0;
	volatile int64_t t96 = -59213658LL;

	t96 = (x5649-(x5650&(x5651>>x5652)));

	if (t96 != -9223372034703407702LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x5681 = INT16_MIN;
	int16_t x5682 = INT16_MIN;
	int8_t x5683 = INT8_MAX;
	int32_t t97 = 77;

	t97 = (x5681-(x5682&(x5683>>x5684)));

	if (t97 != -32768) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x5745 = -1;
	static int8_t x5746 = INT8_MIN;
	uint32_t x5748 = 0U;
	volatile int32_t t98 = -220343015;

	t98 = (x5745-(x5746&(x5747>>x5748)));

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x5806 = 826U;
	uint8_t x5807 = 0U;
	uint8_t x5808 = 1U;
	static int64_t t99 = INT64_MIN;

	t99 = (x5805-(x5806&(x5807>>x5808)));

	if (t99 != INT64_MIN) { NG(); } else { ; }
	
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

