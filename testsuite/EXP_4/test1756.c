#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x61 = UINT8_MAX;
static int16_t x62 = INT16_MAX;
volatile uint64_t t1 = 6083101064487LLU;
static int16_t x73 = INT16_MIN;
volatile uint8_t x74 = 51U;
int8_t x76 = INT8_MAX;
volatile int32_t t3 = -54550727;
int32_t x100 = 72;
static volatile uint16_t x128 = 55U;
uint32_t t6 = 366067U;
int16_t x171 = INT16_MAX;
int32_t x196 = INT32_MIN;
volatile int32_t x229 = 465862216;
static volatile uint32_t x231 = 112411910U;
uint8_t x332 = 1U;
uint64_t t13 = 24LLU;
volatile uint32_t t14 = 773U;
volatile uint32_t t16 = 5877858U;
int32_t t17 = -1;
int32_t x535 = -17386402;
uint32_t x582 = UINT32_MAX;
int16_t x584 = 1;
volatile int16_t x585 = INT16_MIN;
volatile int64_t x587 = INT64_MIN;
int16_t x591 = INT16_MAX;
static volatile int64_t x657 = INT64_MIN;
static uint64_t x659 = 0LLU;
int64_t t26 = 41097LL;
volatile int8_t x677 = -10;
int32_t t27 = -122406;
int64_t x787 = INT64_MIN;
volatile uint8_t x836 = 1U;
static volatile int32_t t31 = 3189277;
int32_t x892 = INT32_MAX;
int32_t t35 = -999500;
int16_t x963 = INT16_MIN;
static uint8_t x1054 = UINT8_MAX;
volatile int64_t x1056 = INT64_MIN;
int16_t x1069 = INT16_MIN;
static int64_t x1070 = 14467LL;
static int32_t x1072 = 354;
volatile int32_t t42 = 77922;
volatile int64_t t43 = -36828LL;
int8_t x1114 = 1;
int64_t x1192 = 0LL;
int32_t x1237 = INT32_MIN;
int64_t x1240 = 65LL;
volatile uint64_t t50 = 851556LLU;
static int64_t x1386 = 254LL;
int16_t x1388 = INT16_MIN;
int64_t t55 = -31702071765491LL;
int32_t x1393 = INT32_MIN;
uint8_t x1399 = 2U;
volatile uint8_t x1426 = 1U;
int8_t x1446 = 35;
int16_t x1490 = 103;
volatile int32_t t61 = 1;
uint64_t x1502 = 1909LLU;
static int64_t x1503 = INT64_MIN;
static uint64_t x1513 = 29898934542171LLU;
uint32_t x1515 = 0U;
int8_t x1535 = INT8_MIN;
uint64_t x1574 = UINT64_MAX;
int16_t x1575 = 0;
static uint32_t x1579 = UINT32_MAX;
int16_t x1580 = 18;
volatile int32_t t71 = INT32_MAX;
static uint64_t x1678 = UINT64_MAX;
uint32_t x1679 = 0U;
volatile uint64_t t77 = 15177141321LLU;
int32_t x1781 = INT32_MIN;
uint64_t x1782 = 303448647524828531LLU;
uint16_t x1783 = 126U;
static int32_t x1813 = 178;
volatile int16_t x1814 = INT16_MAX;
int64_t x1831 = INT64_MIN;
static int8_t x1835 = INT8_MAX;
int64_t x1846 = INT64_MAX;
uint64_t x1850 = 9653758969LLU;
static volatile uint64_t t84 = 93LLU;
uint32_t x1869 = 18U;
int8_t x1872 = INT8_MIN;
static volatile int32_t x1873 = INT32_MIN;
static volatile uint32_t t86 = 1782170088U;
int64_t t87 = 139868711LL;
volatile uint32_t x1891 = 12194U;
int64_t x1910 = INT64_MAX;
static int8_t x1911 = INT8_MIN;
int8_t x1912 = 0;
volatile int32_t x1913 = 977503064;
static uint16_t x1931 = 129U;
static int16_t x1999 = 0;
volatile uint64_t t93 = 530984560233167LLU;
volatile int16_t x2025 = -1342;
volatile uint32_t x2026 = 851434U;
uint32_t x2028 = 276983315U;
int32_t x2067 = 17;
volatile uint8_t x2101 = 18U;
static uint16_t x2111 = 111U;


void f0(void) {
	int32_t x63 = 4461732;
	static volatile int64_t x64 = INT64_MIN;
	volatile int32_t t0 = 59094815;

	t0 = (x61+(x62<<(x63&x64)));

	if (t0 != 33022) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x65 = 218U;
	uint64_t x66 = 2265229673261097616LLU;
	int64_t x67 = 490991LL;
	uint8_t x68 = 2U;

	t1 = (x65+(x66<<(x67&x68)));

	if (t1 != 9060918693044390682LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x75 = 2;
	volatile int32_t t2 = 1037147;

	t2 = (x73+(x74<<(x75&x76)));

	if (t2 != -32564) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x93 = INT16_MAX;
	volatile uint8_t x94 = 5U;
	static uint8_t x95 = 20U;
	static int64_t x96 = -1LL;

	t3 = (x93+(x94<<(x95&x96)));

	if (t3 != 5275647) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x97 = 3;
	int16_t x98 = 122;
	int8_t x99 = INT8_MIN;
	static volatile int32_t t4 = -6025118;

	t4 = (x97+(x98<<(x99&x100)));

	if (t4 != 125) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x117 = INT16_MIN;
	uint16_t x118 = 1U;
	int64_t x119 = INT64_MAX;
	int8_t x120 = 0;
	static int32_t t5 = 992558;

	t5 = (x117+(x118<<(x119&x120)));

	if (t5 != -32767) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x125 = 5734;
	volatile uint32_t x126 = 12U;
	int32_t x127 = INT32_MIN;

	t6 = (x125+(x126<<(x127&x128)));

	if (t6 != 5746U) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x169 = INT16_MIN;
	uint8_t x170 = 1U;
	static int64_t x172 = INT64_MIN;
	int32_t t7 = 766515;

	t7 = (x169+(x170<<(x171&x172)));

	if (t7 != -32767) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x193 = INT8_MAX;
	uint16_t x194 = UINT16_MAX;
	static volatile uint32_t x195 = 911U;
	static volatile int32_t t8 = 838239;

	t8 = (x193+(x194<<(x195&x196)));

	if (t8 != 65662) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x201 = -1;
	int64_t x202 = INT64_MAX;
	volatile int8_t x203 = INT8_MIN;
	int8_t x204 = INT8_MAX;
	volatile int64_t t9 = -207059332339660553LL;

	t9 = (x201+(x202<<(x203&x204)));

	if (t9 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x225 = UINT64_MAX;
	uint16_t x226 = 3793U;
	static uint16_t x227 = 128U;
	int32_t x228 = -4862;
	uint64_t t10 = 183LLU;

	t10 = (x225+(x226<<(x227&x228)));

	if (t10 != 3792LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x230 = UINT16_MAX;
	uint16_t x232 = 59U;
	int32_t t11 = -3477;

	t11 = (x229+(x230<<(x231&x232)));

	if (t11 != 466124356) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x301 = 89U;
	uint8_t x302 = 1U;
	static int8_t x303 = INT8_MAX;
	uint8_t x304 = 5U;
	volatile int32_t t12 = -11174;

	t12 = (x301+(x302<<(x303&x304)));

	if (t12 != 121) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x329 = 3777U;
	static uint64_t x330 = 1718784692185082LLU;
	static int8_t x331 = -1;

	t13 = (x329+(x330<<(x331&x332)));

	if (t13 != 3437569384373941LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x421 = 40102699U;
	int32_t x422 = 176;
	volatile uint16_t x423 = UINT16_MAX;
	int8_t x424 = 0;

	t14 = (x421+(x422<<(x423&x424)));

	if (t14 != 40102875U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x433 = INT64_MIN;
	volatile uint64_t x434 = 6LLU;
	volatile uint16_t x435 = UINT16_MAX;
	int32_t x436 = INT32_MIN;
	uint64_t t15 = 370296058314051LLU;

	t15 = (x433+(x434<<(x435&x436)));

	if (t15 != 9223372036854775814LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x509 = INT32_MAX;
	uint32_t x510 = UINT32_MAX;
	int64_t x511 = INT64_MIN;
	uint8_t x512 = 75U;

	t16 = (x509+(x510<<(x511&x512)));

	if (t16 != 2147483646U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x521 = 0;
	int16_t x522 = 2;
	uint8_t x523 = 0U;
	uint16_t x524 = UINT16_MAX;

	t17 = (x521+(x522<<(x523&x524)));

	if (t17 != 2) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int8_t x525 = INT8_MIN;
	uint32_t x526 = UINT32_MAX;
	volatile int8_t x527 = INT8_MIN;
	uint8_t x528 = 2U;
	static volatile uint32_t t18 = 478480U;

	t18 = (x525+(x526<<(x527&x528)));

	if (t18 != 4294967167U) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x533 = 12U;
	volatile uint8_t x534 = 1U;
	uint16_t x536 = 2U;
	volatile int32_t t19 = -50198360;

	t19 = (x533+(x534<<(x535&x536)));

	if (t19 != 16) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x557 = INT8_MIN;
	uint8_t x558 = UINT8_MAX;
	int8_t x559 = 1;
	static volatile uint8_t x560 = 1U;
	int32_t t20 = 248617;

	t20 = (x557+(x558<<(x559&x560)));

	if (t20 != 382) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x581 = 10U;
	int64_t x583 = INT64_MIN;
	uint32_t t21 = 13213923U;

	t21 = (x581+(x582<<(x583&x584)));

	if (t21 != 9U) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x586 = UINT64_MAX;
	int16_t x588 = 0;
	uint64_t t22 = 61241965384LLU;

	t22 = (x585+(x586<<(x587&x588)));

	if (t22 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x589 = INT16_MIN;
	int8_t x590 = 2;
	int8_t x592 = 3;
	volatile int32_t t23 = 59090209;

	t23 = (x589+(x590<<(x591&x592)));

	if (t23 != -32752) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x641 = 3U;
	static uint32_t x642 = 7U;
	int32_t x643 = INT32_MIN;
	static volatile uint64_t x644 = 2512LLU;
	static volatile uint32_t t24 = 5172632U;

	t24 = (x641+(x642<<(x643&x644)));

	if (t24 != 10U) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x649 = 234057U;
	uint64_t x650 = 902611532887LLU;
	static volatile int8_t x651 = 1;
	uint64_t x652 = 2144252817276772120LLU;
	uint64_t t25 = 84526688778LLU;

	t25 = (x649+(x650<<(x651&x652)));

	if (t25 != 902611766944LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x658 = INT32_MAX;
	int16_t x660 = INT16_MIN;

	t26 = (x657+(x658<<(x659&x660)));

	if (t26 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x678 = 0U;
	volatile int32_t x679 = 29336147;
	static int32_t x680 = INT32_MIN;

	t27 = (x677+(x678<<(x679&x680)));

	if (t27 != -10) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x701 = -3;
	uint16_t x702 = 1452U;
	static uint32_t x703 = 14760638U;
	uint32_t x704 = 1U;
	volatile int32_t t28 = -64186;

	t28 = (x701+(x702<<(x703&x704)));

	if (t28 != 1449) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x741 = INT16_MIN;
	uint8_t x742 = 2U;
	int8_t x743 = -1;
	static volatile int8_t x744 = 7;
	volatile int32_t t29 = 0;

	t29 = (x741+(x742<<(x743&x744)));

	if (t29 != -32512) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x785 = INT8_MAX;
	uint32_t x786 = 460842U;
	uint64_t x788 = 1205036338LLU;
	uint32_t t30 = 45U;

	t30 = (x785+(x786<<(x787&x788)));

	if (t30 != 460969U) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x833 = 1949163;
	static uint16_t x834 = UINT16_MAX;
	uint32_t x835 = 151021545U;

	t31 = (x833+(x834<<(x835&x836)));

	if (t31 != 2080233) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint32_t x861 = UINT32_MAX;
	volatile uint8_t x862 = 12U;
	int8_t x863 = 1;
	static uint64_t x864 = 820881LLU;
	uint32_t t32 = 70268U;

	t32 = (x861+(x862<<(x863&x864)));

	if (t32 != 23U) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x865 = 3164U;
	static uint8_t x866 = 109U;
	int16_t x867 = INT16_MIN;
	uint8_t x868 = 106U;
	int32_t t33 = -2643314;

	t33 = (x865+(x866<<(x867&x868)));

	if (t33 != 3273) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x889 = UINT32_MAX;
	uint64_t x890 = 84002902802546LLU;
	static uint8_t x891 = 3U;
	volatile uint64_t t34 = 16672308568096LLU;

	t34 = (x889+(x890<<(x891&x892)));

	if (t34 != 672027517387663LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x893 = -1;
	int8_t x894 = 1;
	uint32_t x895 = 25U;
	static int8_t x896 = INT8_MAX;

	t35 = (x893+(x894<<(x895&x896)));

	if (t35 != 33554431) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x929 = INT16_MAX;
	static uint16_t x930 = UINT16_MAX;
	uint32_t x931 = 141U;
	volatile int32_t x932 = INT32_MIN;
	volatile int32_t t36 = -1;

	t36 = (x929+(x930<<(x931&x932)));

	if (t36 != 98302) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x937 = -1;
	static uint64_t x938 = 423825302LLU;
	uint8_t x939 = 38U;
	uint64_t x940 = 4514LLU;
	uint64_t t37 = 478634955300847473LLU;

	t37 = (x937+(x938<<(x939&x940)));

	if (t37 != 7281263245229293567LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x961 = INT32_MIN;
	static uint16_t x962 = 2741U;
	uint8_t x964 = 2U;
	volatile int32_t t38 = 473112536;

	t38 = (x961+(x962<<(x963&x964)));

	if (t38 != -2147480907) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint32_t x993 = 109U;
	static uint8_t x994 = UINT8_MAX;
	uint16_t x995 = 28716U;
	uint8_t x996 = 1U;
	uint32_t t39 = 3300U;

	t39 = (x993+(x994<<(x995&x996)));

	if (t39 != 364U) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x1053 = INT32_MIN;
	uint64_t x1055 = 77838486507LLU;
	volatile int32_t t40 = -65755268;

	t40 = (x1053+(x1054<<(x1055&x1056)));

	if (t40 != -2147483393) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x1071 = INT64_MIN;
	static int64_t t41 = -12240353393589552LL;

	t41 = (x1069+(x1070<<(x1071&x1072)));

	if (t41 != -18301LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x1097 = INT8_MAX;
	int8_t x1098 = INT8_MAX;
	volatile int8_t x1099 = 10;
	uint32_t x1100 = 2848U;

	t42 = (x1097+(x1098<<(x1099&x1100)));

	if (t42 != 254) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x1109 = -25384751LL;
	uint16_t x1110 = 3828U;
	int16_t x1111 = 317;
	int64_t x1112 = INT64_MIN;

	t43 = (x1109+(x1110<<(x1111&x1112)));

	if (t43 != -25380923LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x1113 = INT8_MIN;
	uint8_t x1115 = UINT8_MAX;
	int32_t x1116 = -151084258;
	volatile int32_t t44 = 198678697;

	t44 = (x1113+(x1114<<(x1115&x1116)));

	if (t44 != 1073741696) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x1141 = INT64_MAX;
	uint64_t x1142 = 401LLU;
	int64_t x1143 = -17802189LL;
	static uint8_t x1144 = 14U;
	volatile uint64_t t45 = 12824597501911766LLU;

	t45 = (x1141+(x1142<<(x1143&x1144)));

	if (t45 != 9223372036854777411LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x1189 = -402;
	static int64_t x1190 = 4820LL;
	int32_t x1191 = INT32_MIN;
	int64_t t46 = -5LL;

	t46 = (x1189+(x1190<<(x1191&x1192)));

	if (t46 != 4418LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x1205 = -1;
	int8_t x1206 = 35;
	uint32_t x1207 = 1U;
	int16_t x1208 = -1;
	volatile int32_t t47 = 1105;

	t47 = (x1205+(x1206<<(x1207&x1208)));

	if (t47 != 69) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x1221 = 21;
	volatile uint32_t x1222 = UINT32_MAX;
	static volatile int8_t x1223 = 4;
	uint64_t x1224 = 475637868290LLU;
	uint32_t t48 = 132094066U;

	t48 = (x1221+(x1222<<(x1223&x1224)));

	if (t48 != 20U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x1238 = 1U;
	uint16_t x1239 = 6565U;
	volatile uint32_t t49 = 7U;

	t49 = (x1237+(x1238<<(x1239&x1240)));

	if (t49 != 2147483650U) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x1245 = -3LL;
	uint64_t x1246 = 191446213494325500LLU;
	int8_t x1247 = 18;
	static int32_t x1248 = INT32_MIN;

	t50 = (x1245+(x1246<<(x1247&x1248)));

	if (t50 != 191446213494325497LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x1249 = 1006769;
	uint8_t x1250 = 14U;
	uint8_t x1251 = 2U;
	uint8_t x1252 = 13U;
	static volatile int32_t t51 = -2193;

	t51 = (x1249+(x1250<<(x1251&x1252)));

	if (t51 != 1006783) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x1253 = INT32_MIN;
	volatile int8_t x1254 = INT8_MAX;
	volatile int64_t x1255 = INT64_MIN;
	int8_t x1256 = INT8_MAX;
	volatile int32_t t52 = -152;

	t52 = (x1253+(x1254<<(x1255&x1256)));

	if (t52 != -2147483521) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x1277 = -98;
	volatile int8_t x1278 = 34;
	volatile uint16_t x1279 = 220U;
	uint16_t x1280 = 7U;
	int32_t t53 = 2006;

	t53 = (x1277+(x1278<<(x1279&x1280)));

	if (t53 != 446) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x1329 = INT64_MIN;
	static uint8_t x1330 = 9U;
	int32_t x1331 = -3;
	int8_t x1332 = 0;
	volatile int64_t t54 = -3892234016467LL;

	t54 = (x1329+(x1330<<(x1331&x1332)));

	if (t54 != -9223372036854775799LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x1385 = INT16_MIN;
	int32_t x1387 = 331;

	t55 = (x1385+(x1386<<(x1387&x1388)));

	if (t55 != -32514LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x1394 = UINT32_MAX;
	uint8_t x1395 = 1U;
	int8_t x1396 = 0;
	uint32_t t56 = 979208U;

	t56 = (x1393+(x1394<<(x1395&x1396)));

	if (t56 != 2147483647U) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x1397 = 1834U;
	volatile int16_t x1398 = INT16_MAX;
	int8_t x1400 = -47;
	int32_t t57 = -306;

	t57 = (x1397+(x1398<<(x1399&x1400)));

	if (t57 != 34601) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x1425 = INT16_MIN;
	int8_t x1427 = 15;
	uint8_t x1428 = 63U;
	static int32_t t58 = 266878;

	t58 = (x1425+(x1426<<(x1427&x1428)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x1445 = INT64_MIN;
	volatile int16_t x1447 = INT16_MIN;
	uint16_t x1448 = 205U;
	volatile int64_t t59 = 147LL;

	t59 = (x1445+(x1446<<(x1447&x1448)));

	if (t59 != -9223372036854775773LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x1453 = -2;
	uint16_t x1454 = UINT16_MAX;
	int64_t x1455 = INT64_MIN;
	uint8_t x1456 = 0U;
	int32_t t60 = -186885899;

	t60 = (x1453+(x1454<<(x1455&x1456)));

	if (t60 != 65533) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x1489 = -1;
	uint8_t x1491 = UINT8_MAX;
	int32_t x1492 = INT32_MIN;

	t61 = (x1489+(x1490<<(x1491&x1492)));

	if (t61 != 102) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x1501 = INT64_MIN;
	uint8_t x1504 = 94U;
	static uint64_t t62 = 217598170921LLU;

	t62 = (x1501+(x1502<<(x1503&x1504)));

	if (t62 != 9223372036854777717LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x1514 = 8364;
	int32_t x1516 = INT32_MAX;
	volatile uint64_t t63 = 3939799215388548250LLU;

	t63 = (x1513+(x1514<<(x1515&x1516)));

	if (t63 != 29898934550535LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x1517 = -1;
	static int8_t x1518 = 0;
	uint8_t x1519 = 20U;
	int8_t x1520 = INT8_MAX;
	static volatile int32_t t64 = 504;

	t64 = (x1517+(x1518<<(x1519&x1520)));

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint8_t x1521 = 1U;
	uint32_t x1522 = 0U;
	uint8_t x1523 = 5U;
	uint16_t x1524 = UINT16_MAX;
	volatile uint32_t t65 = 88288602U;

	t65 = (x1521+(x1522<<(x1523&x1524)));

	if (t65 != 1U) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x1533 = 9302U;
	static uint32_t x1534 = 805506U;
	uint8_t x1536 = 53U;
	volatile uint32_t t66 = 41436584U;

	t66 = (x1533+(x1534<<(x1535&x1536)));

	if (t66 != 814808U) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x1545 = 1U;
	static uint64_t x1546 = 9LLU;
	int32_t x1547 = INT32_MAX;
	int64_t x1548 = INT64_MIN;
	uint64_t t67 = 65326LLU;

	t67 = (x1545+(x1546<<(x1547&x1548)));

	if (t67 != 10LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x1573 = INT16_MAX;
	static uint64_t x1576 = 10LLU;
	uint64_t t68 = 37793LLU;

	t68 = (x1573+(x1574<<(x1575&x1576)));

	if (t68 != 32766LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x1577 = -2047;
	int8_t x1578 = INT8_MAX;
	int32_t t69 = -3;

	t69 = (x1577+(x1578<<(x1579&x1580)));

	if (t69 != 33290241) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x1581 = 1432530;
	volatile uint32_t x1582 = 1069U;
	int16_t x1583 = INT16_MIN;
	static uint8_t x1584 = 14U;
	volatile uint32_t t70 = 117U;

	t70 = (x1581+(x1582<<(x1583&x1584)));

	if (t70 != 1433599U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x1637 = 0;
	volatile int32_t x1638 = INT32_MAX;
	int8_t x1639 = 0;
	int16_t x1640 = INT16_MIN;

	t71 = (x1637+(x1638<<(x1639&x1640)));

	if (t71 != INT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x1649 = INT16_MIN;
	static uint8_t x1650 = 50U;
	int32_t x1651 = INT32_MIN;
	volatile uint8_t x1652 = UINT8_MAX;
	int32_t t72 = -3643321;

	t72 = (x1649+(x1650<<(x1651&x1652)));

	if (t72 != -32718) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x1677 = INT8_MIN;
	int16_t x1680 = -1;
	static uint64_t t73 = 33406387LLU;

	t73 = (x1677+(x1678<<(x1679&x1680)));

	if (t73 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x1681 = 0;
	int8_t x1682 = INT8_MAX;
	int8_t x1683 = 48;
	int8_t x1684 = 16;
	int32_t t74 = 681941;

	t74 = (x1681+(x1682<<(x1683&x1684)));

	if (t74 != 8323072) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x1685 = 0U;
	volatile uint32_t x1686 = 181746U;
	int8_t x1687 = INT8_MIN;
	int8_t x1688 = INT8_MAX;
	uint32_t t75 = 574U;

	t75 = (x1685+(x1686<<(x1687&x1688)));

	if (t75 != 181746U) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x1745 = UINT16_MAX;
	int64_t x1746 = 16645249437LL;
	static uint8_t x1747 = 3U;
	uint32_t x1748 = UINT32_MAX;
	int64_t t76 = -2859784591LL;

	t76 = (x1745+(x1746<<(x1747&x1748)));

	if (t76 != 133162061031LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x1757 = 4391188668327184LLU;
	volatile int32_t x1758 = 121601;
	volatile int64_t x1759 = INT64_MIN;
	uint16_t x1760 = UINT16_MAX;

	t77 = (x1757+(x1758<<(x1759&x1760)));

	if (t77 != 4391188668448785LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x1784 = INT8_MIN;
	uint64_t t78 = 130933936719LLU;

	t78 = (x1781+(x1782<<(x1783&x1784)));

	if (t78 != 303448645377344883LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x1805 = UINT8_MAX;
	uint8_t x1806 = UINT8_MAX;
	uint8_t x1807 = UINT8_MAX;
	int16_t x1808 = INT16_MIN;
	volatile int32_t t79 = 98481;

	t79 = (x1805+(x1806<<(x1807&x1808)));

	if (t79 != 510) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x1815 = 0U;
	static int64_t x1816 = -30208LL;
	int32_t t80 = 60;

	t80 = (x1813+(x1814<<(x1815&x1816)));

	if (t80 != 32945) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x1829 = INT16_MAX;
	int16_t x1830 = 7;
	int64_t x1832 = 30112LL;
	int32_t t81 = -334957;

	t81 = (x1829+(x1830<<(x1831&x1832)));

	if (t81 != 32774) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x1833 = 1U;
	uint64_t x1834 = 1372789173483520950LLU;
	static volatile int64_t x1836 = INT64_MIN;
	uint64_t t82 = 149363747860207LLU;

	t82 = (x1833+(x1834<<(x1835&x1836)));

	if (t82 != 1372789173483520951LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x1845 = -403096;
	static volatile int64_t x1847 = -61LL;
	static volatile int8_t x1848 = 52;
	static int64_t t83 = 1358766423037197570LL;

	t83 = (x1845+(x1846<<(x1847&x1848)));

	if (t83 != 9223372036854372711LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x1849 = 11758U;
	volatile uint8_t x1851 = 19U;
	volatile uint16_t x1852 = 1310U;

	t84 = (x1849+(x1850<<(x1851&x1852)));

	if (t84 != 2530674991181294LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x1870 = UINT32_MAX;
	int8_t x1871 = 0;
	uint32_t t85 = 11859732U;

	t85 = (x1869+(x1870<<(x1871&x1872)));

	if (t85 != 17U) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x1874 = 0U;
	int64_t x1875 = 3LL;
	int8_t x1876 = INT8_MAX;

	t86 = (x1873+(x1874<<(x1875&x1876)));

	if (t86 != 2147483648U) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x1877 = INT64_MIN;
	int32_t x1878 = INT32_MAX;
	int16_t x1879 = INT16_MIN;
	volatile int16_t x1880 = INT16_MAX;

	t87 = (x1877+(x1878<<(x1879&x1880)));

	if (t87 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x1889 = INT16_MIN;
	uint64_t x1890 = 189450027190LLU;
	int32_t x1892 = INT32_MIN;
	uint64_t t88 = 3480950LLU;

	t88 = (x1889+(x1890<<(x1891&x1892)));

	if (t88 != 189449994422LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x1909 = 0U;
	static int64_t t89 = INT64_MAX;

	t89 = (x1909+(x1910<<(x1911&x1912)));

	if (t89 != INT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint16_t x1914 = 398U;
	int32_t x1915 = INT32_MIN;
	static volatile uint8_t x1916 = 2U;
	volatile int32_t t90 = 768094;

	t90 = (x1913+(x1914<<(x1915&x1916)));

	if (t90 != 977503462) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x1929 = INT16_MIN;
	uint8_t x1930 = 4U;
	int32_t x1932 = INT32_MIN;
	int32_t t91 = -6;

	t91 = (x1929+(x1930<<(x1931&x1932)));

	if (t91 != -32764) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x1973 = 234U;
	uint32_t x1974 = 362775520U;
	volatile int32_t x1975 = 752689773;
	uint16_t x1976 = 27U;
	static volatile uint32_t t92 = 14830U;

	t92 = (x1973+(x1974<<(x1975&x1976)));

	if (t92 != 1057472746U) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x1997 = INT16_MIN;
	uint64_t x1998 = 2387369LLU;
	uint8_t x2000 = 11U;

	t93 = (x1997+(x1998<<(x1999&x2000)));

	if (t93 != 2354601LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x2027 = INT32_MIN;
	volatile uint32_t t94 = 80272723U;

	t94 = (x2025+(x2026<<(x2027&x2028)));

	if (t94 != 850092U) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int8_t x2041 = INT8_MIN;
	int16_t x2042 = INT16_MAX;
	int32_t x2043 = INT32_MIN;
	uint8_t x2044 = 13U;
	volatile int32_t t95 = 218;

	t95 = (x2041+(x2042<<(x2043&x2044)));

	if (t95 != 32639) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x2065 = 0U;
	int16_t x2066 = 211;
	int8_t x2068 = INT8_MIN;
	volatile int32_t t96 = -11340770;

	t96 = (x2065+(x2066<<(x2067&x2068)));

	if (t96 != 211) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x2102 = 1;
	uint64_t x2103 = 801LLU;
	volatile uint64_t x2104 = 465009636641077441LLU;
	volatile int32_t t97 = -4;

	t97 = (x2101+(x2102<<(x2103&x2104)));

	if (t97 != 20) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x2109 = 5836511742LLU;
	volatile uint32_t x2110 = 28U;
	static uint16_t x2112 = 0U;
	uint64_t t98 = 455210LLU;

	t98 = (x2109+(x2110<<(x2111&x2112)));

	if (t98 != 5836511770LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x2197 = 893562775756854138LLU;
	uint64_t x2198 = 198115331381952394LLU;
	uint32_t x2199 = 190290673U;
	uint16_t x2200 = 15U;
	uint64_t t99 = 28493768447834LLU;

	t99 = (x2197+(x2198<<(x2199&x2200)));

	if (t99 != 1289793438520758926LLU) { NG(); } else { ; }
	
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

