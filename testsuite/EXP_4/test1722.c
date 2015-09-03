#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x20 = -1LL;
int32_t x132 = INT32_MIN;
volatile uint32_t t4 = 4864356U;
uint32_t x165 = UINT32_MAX;
int16_t x184 = INT16_MAX;
uint32_t x237 = 93U;
int16_t x240 = INT16_MIN;
int32_t x306 = INT32_MIN;
volatile int32_t t10 = -1;
static volatile uint32_t x309 = 1564U;
volatile uint32_t t11 = 50812U;
static int16_t x374 = -5379;
int8_t x375 = 0;
int64_t x400 = INT64_MIN;
int16_t x404 = INT16_MAX;
uint16_t x425 = 350U;
int8_t x426 = 4;
int64_t x457 = 216039746LL;
static volatile int32_t x469 = INT32_MAX;
volatile int16_t x470 = -1;
volatile int16_t x481 = 678;
static volatile int32_t t22 = -205;
int64_t x488 = INT64_MIN;
static int32_t x501 = INT32_MAX;
int32_t x503 = INT32_MIN;
static volatile int32_t t26 = INT32_MAX;
int32_t x532 = -1;
uint16_t x642 = UINT16_MAX;
uint8_t x665 = 1U;
volatile int32_t t30 = 50294;
uint32_t x777 = UINT32_MAX;
volatile uint32_t t32 = UINT32_MAX;
int16_t x807 = INT16_MIN;
int32_t x874 = INT32_MIN;
static int64_t x875 = INT64_MIN;
volatile uint32_t t36 = UINT32_MAX;
int8_t x901 = 7;
int32_t x903 = INT32_MIN;
int32_t t37 = 1;
int16_t x918 = -113;
int64_t x919 = -1073630892770678LL;
uint32_t t42 = 53U;
uint8_t x1064 = 7U;
volatile int8_t x1074 = -13;
uint32_t x1076 = 4U;
uint64_t x1098 = 1789858922LLU;
uint32_t x1109 = 394036359U;
uint32_t x1118 = UINT32_MAX;
int16_t x1193 = INT16_MAX;
uint64_t x1265 = UINT64_MAX;
int32_t x1266 = INT32_MIN;
uint16_t x1279 = 0U;
uint32_t x1280 = 366U;
uint64_t x1285 = 751835LLU;
uint64_t t56 = 58601351808651LLU;
uint16_t x1309 = UINT16_MAX;
static uint16_t x1353 = 2942U;
static uint16_t x1379 = 17U;
int8_t x1480 = 50;
uint64_t x1521 = UINT64_MAX;
volatile uint16_t x1522 = 0U;
volatile uint64_t x1524 = 189133LLU;
volatile int32_t x1576 = INT32_MIN;
int64_t x1583 = -4507599663375269529LL;
uint64_t x1602 = 65096767LLU;
int64_t x1617 = INT64_MAX;
int8_t x1618 = 2;
static volatile int64_t t73 = INT64_MAX;
volatile int32_t t74 = -1427;
int16_t x1725 = 32;
int64_t x1751 = INT64_MIN;
volatile uint16_t x1799 = 0U;
uint32_t x1807 = 867556251U;
int32_t t79 = -1152;
uint8_t x1838 = UINT8_MAX;
static uint64_t x1846 = 3615LLU;
int64_t x1866 = INT64_MAX;
uint16_t x1877 = UINT16_MAX;
static int16_t x1878 = -305;
static uint8_t x1886 = 0U;
int32_t t88 = -40169;
volatile uint64_t x1917 = UINT64_MAX;
static int32_t x1950 = INT32_MIN;
int32_t x1952 = INT32_MIN;
int16_t x1959 = 15864;
uint32_t x1980 = 1U;
uint64_t x1994 = 39682419LLU;
volatile uint8_t x1995 = UINT8_MAX;
static uint32_t x2052 = 356U;
uint16_t x2073 = UINT16_MAX;
int32_t x2079 = INT32_MIN;
uint16_t x2083 = 395U;
volatile int32_t t99 = -3;


void f0(void) {
	int16_t x17 = 0;
	volatile int16_t x18 = -11;
	volatile int64_t x19 = -1LL;
	volatile int32_t t0 = 0;

	t0 = (x17<<(x18*(x19&x20)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x33 = UINT16_MAX;
	uint8_t x34 = 0U;
	static volatile int16_t x35 = INT16_MAX;
	int16_t x36 = -28;
	volatile int32_t t1 = 13;

	t1 = (x33<<(x34*(x35&x36)));

	if (t1 != 65535) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x77 = UINT8_MAX;
	volatile int64_t x78 = -173739766426453LL;
	int32_t x79 = 468066941;
	int32_t x80 = INT32_MIN;
	int32_t t2 = 192408475;

	t2 = (x77<<(x78*(x79&x80)));

	if (t2 != 255) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x101 = 3584U;
	int16_t x102 = -12;
	volatile int64_t x103 = INT64_MIN;
	uint8_t x104 = 2U;
	volatile int32_t t3 = 265;

	t3 = (x101<<(x102*(x103&x104)));

	if (t3 != 3584) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x129 = 10993U;
	int32_t x130 = INT32_MAX;
	uint8_t x131 = 11U;

	t4 = (x129<<(x130*(x131&x132)));

	if (t4 != 10993U) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x166 = 113U;
	int8_t x167 = 4;
	int16_t x168 = INT16_MIN;
	uint32_t t5 = UINT32_MAX;

	t5 = (x165<<(x166*(x167&x168)));

	if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x181 = 6;
	int32_t x182 = INT32_MAX;
	static int64_t x183 = INT64_MIN;
	int32_t t6 = -14;

	t6 = (x181<<(x182*(x183&x184)));

	if (t6 != 6) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x205 = 319179973533124LLU;
	int16_t x206 = -2;
	static uint8_t x207 = UINT8_MAX;
	int8_t x208 = 0;
	volatile uint64_t t7 = 271602809LLU;

	t7 = (x205<<(x206*(x207&x208)));

	if (t7 != 319179973533124LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x238 = -1;
	uint16_t x239 = 1225U;
	uint32_t t8 = 123840863U;

	t8 = (x237<<(x238*(x239&x240)));

	if (t8 != 93U) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x273 = UINT32_MAX;
	uint16_t x274 = 138U;
	uint16_t x275 = 4U;
	uint64_t x276 = 8016628707771841LLU;
	static volatile uint32_t t9 = UINT32_MAX;

	t9 = (x273<<(x274*(x275&x276)));

	if (t9 != UINT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x305 = INT16_MAX;
	int64_t x307 = INT64_MIN;
	static int16_t x308 = INT16_MAX;

	t10 = (x305<<(x306*(x307&x308)));

	if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x310 = INT64_MIN;
	uint8_t x311 = 0U;
	int8_t x312 = -23;

	t11 = (x309<<(x310*(x311&x312)));

	if (t11 != 1564U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x325 = 7890;
	int32_t x326 = -1;
	static uint32_t x327 = 19001102U;
	int8_t x328 = 0;
	int32_t t12 = 21024200;

	t12 = (x325<<(x326*(x327&x328)));

	if (t12 != 7890) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x337 = 179898751792023LLU;
	int16_t x338 = INT16_MIN;
	int32_t x339 = INT32_MIN;
	uint16_t x340 = UINT16_MAX;
	uint64_t t13 = 488907LLU;

	t13 = (x337<<(x338*(x339&x340)));

	if (t13 != 179898751792023LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x353 = 1;
	int64_t x354 = INT64_MIN;
	uint64_t x355 = 834LLU;
	static int8_t x356 = INT8_MIN;
	volatile int32_t t14 = -718286699;

	t14 = (x353<<(x354*(x355&x356)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x373 = UINT64_MAX;
	uint32_t x376 = UINT32_MAX;
	uint64_t t15 = UINT64_MAX;

	t15 = (x373<<(x374*(x375&x376)));

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x393 = UINT8_MAX;
	uint32_t x394 = 102347721U;
	int16_t x395 = INT16_MIN;
	static int16_t x396 = INT16_MAX;
	int32_t t16 = 146896;

	t16 = (x393<<(x394*(x395&x396)));

	if (t16 != 255) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x397 = 31993U;
	int8_t x398 = -1;
	uint32_t x399 = 5U;
	static uint32_t t17 = 4U;

	t17 = (x397<<(x398*(x399&x400)));

	if (t17 != 31993U) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x401 = UINT16_MAX;
	uint64_t x402 = 276476781901121215LLU;
	int32_t x403 = INT32_MIN;
	volatile int32_t t18 = 25099;

	t18 = (x401<<(x402*(x403&x404)));

	if (t18 != 65535) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x427 = INT8_MIN;
	uint16_t x428 = 11U;
	int32_t t19 = 505156139;

	t19 = (x425<<(x426*(x427&x428)));

	if (t19 != 350) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x458 = INT64_MIN;
	int8_t x459 = 31;
	int32_t x460 = INT32_MIN;
	static int64_t t20 = -13LL;

	t20 = (x457<<(x458*(x459&x460)));

	if (t20 != 216039746LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x471 = 7;
	int8_t x472 = 0;
	volatile int32_t t21 = INT32_MAX;

	t21 = (x469<<(x470*(x471&x472)));

	if (t21 != INT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x482 = -1;
	volatile int16_t x483 = 1756;
	int16_t x484 = INT16_MIN;

	t22 = (x481<<(x482*(x483&x484)));

	if (t22 != 678) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x485 = 14U;
	int16_t x486 = -320;
	static int32_t x487 = INT32_MAX;
	static int32_t t23 = -14;

	t23 = (x485<<(x486*(x487&x488)));

	if (t23 != 14) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x502 = 12;
	int32_t x504 = INT32_MAX;
	volatile int32_t t24 = INT32_MAX;

	t24 = (x501<<(x502*(x503&x504)));

	if (t24 != INT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x509 = 20U;
	int32_t x510 = -1;
	int32_t x511 = -36;
	int8_t x512 = 2;
	static volatile int32_t t25 = 920484;

	t25 = (x509<<(x510*(x511&x512)));

	if (t25 != 20) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x513 = INT32_MAX;
	int8_t x514 = -1;
	int16_t x515 = INT16_MIN;
	static uint32_t x516 = 1122U;

	t26 = (x513<<(x514*(x515&x516)));

	if (t26 != INT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x529 = 30U;
	int8_t x530 = 1;
	int8_t x531 = 1;
	volatile int32_t t27 = 146;

	t27 = (x529<<(x530*(x531&x532)));

	if (t27 != 60) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x585 = INT8_MAX;
	static int64_t x586 = -1LL;
	int32_t x587 = 0;
	uint32_t x588 = 2864444U;
	int32_t t28 = 319;

	t28 = (x585<<(x586*(x587&x588)));

	if (t28 != 127) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x641 = UINT16_MAX;
	int16_t x643 = 223;
	int64_t x644 = INT64_MIN;
	static int32_t t29 = 18801;

	t29 = (x641<<(x642*(x643&x644)));

	if (t29 != 65535) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x666 = INT8_MIN;
	uint8_t x667 = 1U;
	int8_t x668 = INT8_MIN;

	t30 = (x665<<(x666*(x667&x668)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x737 = 0U;
	uint32_t x738 = UINT32_MAX;
	int16_t x739 = INT16_MIN;
	volatile uint32_t x740 = 7179U;
	uint32_t t31 = 1638U;

	t31 = (x737<<(x738*(x739&x740)));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x778 = -27101590;
	static uint8_t x779 = 2U;
	int16_t x780 = -8;

	t32 = (x777<<(x778*(x779&x780)));

	if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x781 = 8627131LLU;
	uint8_t x782 = 0U;
	int16_t x783 = INT16_MAX;
	uint32_t x784 = 484881U;
	volatile uint64_t t33 = 123362485647465LLU;

	t33 = (x781<<(x782*(x783&x784)));

	if (t33 != 8627131LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x789 = INT16_MAX;
	int64_t x790 = -1297875990720804473LL;
	int32_t x791 = INT32_MAX;
	static int32_t x792 = INT32_MIN;
	volatile int32_t t34 = 118;

	t34 = (x789<<(x790*(x791&x792)));

	if (t34 != 32767) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x805 = 32U;
	int64_t x806 = INT64_MAX;
	static int16_t x808 = INT16_MAX;
	volatile int32_t t35 = -1763478;

	t35 = (x805<<(x806*(x807&x808)));

	if (t35 != 32) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x873 = UINT32_MAX;
	static uint64_t x876 = UINT64_MAX;

	t36 = (x873<<(x874*(x875&x876)));

	if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x902 = 60U;
	uint32_t x904 = 346U;

	t37 = (x901<<(x902*(x903&x904)));

	if (t37 != 7) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x917 = UINT64_MAX;
	uint8_t x920 = 0U;
	static uint64_t t38 = UINT64_MAX;

	t38 = (x917<<(x918*(x919&x920)));

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x925 = 10U;
	uint16_t x926 = 94U;
	int32_t x927 = INT32_MIN;
	volatile uint32_t x928 = 14U;
	static int32_t t39 = -25382382;

	t39 = (x925<<(x926*(x927&x928)));

	if (t39 != 10) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x941 = 2U;
	volatile int16_t x942 = 1;
	static volatile uint64_t x943 = 92077921954644018LLU;
	volatile uint8_t x944 = 91U;
	volatile int32_t t40 = 13;

	t40 = (x941<<(x942*(x943&x944)));

	if (t40 != 524288) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x1017 = 5U;
	int8_t x1018 = 6;
	static uint32_t x1019 = 848613855U;
	int8_t x1020 = 3;
	volatile int32_t t41 = 69;

	t41 = (x1017<<(x1018*(x1019&x1020)));

	if (t41 != 1310720) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x1033 = 277U;
	int16_t x1034 = INT16_MAX;
	static int32_t x1035 = INT32_MIN;
	int32_t x1036 = INT32_MAX;

	t42 = (x1033<<(x1034*(x1035&x1036)));

	if (t42 != 277U) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int8_t x1041 = 33;
	static int64_t x1042 = INT64_MAX;
	uint16_t x1043 = 1U;
	int8_t x1044 = 22;
	volatile int32_t t43 = 22854050;

	t43 = (x1041<<(x1042*(x1043&x1044)));

	if (t43 != 33) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x1061 = UINT8_MAX;
	static uint8_t x1062 = 0U;
	uint32_t x1063 = 211338814U;
	volatile int32_t t44 = -3533;

	t44 = (x1061<<(x1062*(x1063&x1064)));

	if (t44 != 255) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x1073 = 60U;
	int16_t x1075 = INT16_MIN;
	int32_t t45 = 21;

	t45 = (x1073<<(x1074*(x1075&x1076)));

	if (t45 != 60) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x1097 = 9907331LL;
	static int64_t x1099 = INT64_MIN;
	int8_t x1100 = INT8_MIN;
	int64_t t46 = 620LL;

	t46 = (x1097<<(x1098*(x1099&x1100)));

	if (t46 != 9907331LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x1110 = INT8_MIN;
	uint16_t x1111 = UINT16_MAX;
	int32_t x1112 = INT32_MIN;
	static volatile uint32_t t47 = 6420297U;

	t47 = (x1109<<(x1110*(x1111&x1112)));

	if (t47 != 394036359U) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x1117 = 210826756527028181LLU;
	int16_t x1119 = INT16_MIN;
	uint16_t x1120 = 68U;
	uint64_t t48 = 60LLU;

	t48 = (x1117<<(x1118*(x1119&x1120)));

	if (t48 != 210826756527028181LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x1141 = 42U;
	int64_t x1142 = INT64_MIN;
	int16_t x1143 = INT16_MIN;
	static uint64_t x1144 = UINT64_MAX;
	volatile int32_t t49 = -8;

	t49 = (x1141<<(x1142*(x1143&x1144)));

	if (t49 != 42) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x1194 = INT64_MIN;
	int16_t x1195 = -3340;
	int8_t x1196 = 0;
	volatile int32_t t50 = 4059969;

	t50 = (x1193<<(x1194*(x1195&x1196)));

	if (t50 != 32767) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x1197 = 6231U;
	static int8_t x1198 = 35;
	uint16_t x1199 = 1264U;
	static uint32_t x1200 = 0U;
	volatile int32_t t51 = 679;

	t51 = (x1197<<(x1198*(x1199&x1200)));

	if (t51 != 6231) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x1201 = 1261566000U;
	int32_t x1202 = -273;
	uint8_t x1203 = 2U;
	int64_t x1204 = -216909479LL;
	uint32_t t52 = 425373292U;

	t52 = (x1201<<(x1202*(x1203&x1204)));

	if (t52 != 1261566000U) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x1229 = UINT16_MAX;
	volatile int8_t x1230 = INT8_MIN;
	int8_t x1231 = INT8_MIN;
	uint8_t x1232 = 1U;
	volatile int32_t t53 = 25872;

	t53 = (x1229<<(x1230*(x1231&x1232)));

	if (t53 != 65535) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x1267 = 2;
	uint32_t x1268 = UINT32_MAX;
	volatile uint64_t t54 = UINT64_MAX;

	t54 = (x1265<<(x1266*(x1267&x1268)));

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x1277 = UINT16_MAX;
	static uint64_t x1278 = 9103LLU;
	volatile int32_t t55 = -57;

	t55 = (x1277<<(x1278*(x1279&x1280)));

	if (t55 != 65535) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x1286 = INT8_MIN;
	int64_t x1287 = INT64_MIN;
	volatile uint32_t x1288 = 111U;

	t56 = (x1285<<(x1286*(x1287&x1288)));

	if (t56 != 751835LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x1310 = INT8_MIN;
	uint16_t x1311 = 15666U;
	uint8_t x1312 = 0U;
	int32_t t57 = 18022325;

	t57 = (x1309<<(x1310*(x1311&x1312)));

	if (t57 != 65535) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x1321 = UINT16_MAX;
	int32_t x1322 = -1;
	int32_t x1323 = INT32_MIN;
	static uint8_t x1324 = UINT8_MAX;
	static volatile int32_t t58 = 16;

	t58 = (x1321<<(x1322*(x1323&x1324)));

	if (t58 != 65535) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x1337 = INT32_MAX;
	uint32_t x1338 = 274U;
	uint8_t x1339 = UINT8_MAX;
	int16_t x1340 = INT16_MIN;
	volatile int32_t t59 = INT32_MAX;

	t59 = (x1337<<(x1338*(x1339&x1340)));

	if (t59 != INT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x1354 = 233U;
	static volatile int32_t x1355 = INT32_MAX;
	int32_t x1356 = INT32_MIN;
	volatile int32_t t60 = -3407;

	t60 = (x1353<<(x1354*(x1355&x1356)));

	if (t60 != 2942) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x1377 = 1006U;
	static uint16_t x1378 = 14765U;
	int8_t x1380 = INT8_MIN;
	volatile int32_t t61 = -1;

	t61 = (x1377<<(x1378*(x1379&x1380)));

	if (t61 != 1006) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x1417 = 42U;
	static volatile uint16_t x1418 = UINT16_MAX;
	uint8_t x1419 = 0U;
	static int8_t x1420 = INT8_MAX;
	static volatile uint32_t t62 = 0U;

	t62 = (x1417<<(x1418*(x1419&x1420)));

	if (t62 != 42U) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x1421 = UINT32_MAX;
	int32_t x1422 = INT32_MAX;
	int32_t x1423 = INT32_MIN;
	uint8_t x1424 = UINT8_MAX;
	volatile uint32_t t63 = UINT32_MAX;

	t63 = (x1421<<(x1422*(x1423&x1424)));

	if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint64_t x1449 = 34956376994554929LLU;
	uint16_t x1450 = UINT16_MAX;
	static uint16_t x1451 = UINT16_MAX;
	volatile int32_t x1452 = INT32_MIN;
	volatile uint64_t t64 = 261814231873604LLU;

	t64 = (x1449<<(x1450*(x1451&x1452)));

	if (t64 != 34956376994554929LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x1469 = 237332LLU;
	int64_t x1470 = INT64_MIN;
	volatile int32_t x1471 = INT32_MIN;
	static uint32_t x1472 = 782U;
	volatile uint64_t t65 = 83563334LLU;

	t65 = (x1469<<(x1470*(x1471&x1472)));

	if (t65 != 237332LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x1477 = UINT32_MAX;
	int16_t x1478 = -1;
	int16_t x1479 = INT16_MIN;
	volatile uint32_t t66 = UINT32_MAX;

	t66 = (x1477<<(x1478*(x1479&x1480)));

	if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x1485 = UINT64_MAX;
	uint8_t x1486 = 5U;
	uint32_t x1487 = 475652455U;
	int64_t x1488 = 5LL;
	volatile uint64_t t67 = 1769LLU;

	t67 = (x1485<<(x1486*(x1487&x1488)));

	if (t67 != 18446744073675997184LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x1523 = 96U;
	uint64_t t68 = UINT64_MAX;

	t68 = (x1521<<(x1522*(x1523&x1524)));

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x1553 = UINT16_MAX;
	int8_t x1554 = INT8_MIN;
	uint8_t x1555 = UINT8_MAX;
	uint8_t x1556 = 0U;
	int32_t t69 = 602170;

	t69 = (x1553<<(x1554*(x1555&x1556)));

	if (t69 != 65535) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x1573 = UINT64_MAX;
	uint64_t x1574 = UINT64_MAX;
	static uint8_t x1575 = 1U;
	volatile uint64_t t70 = UINT64_MAX;

	t70 = (x1573<<(x1574*(x1575&x1576)));

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x1581 = INT8_MAX;
	int32_t x1582 = INT32_MIN;
	uint16_t x1584 = 0U;
	int32_t t71 = 60265900;

	t71 = (x1581<<(x1582*(x1583&x1584)));

	if (t71 != 127) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x1601 = UINT64_MAX;
	int8_t x1603 = 2;
	volatile int32_t x1604 = INT32_MIN;
	volatile uint64_t t72 = UINT64_MAX;

	t72 = (x1601<<(x1602*(x1603&x1604)));

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x1619 = INT64_MIN;
	volatile int32_t x1620 = 1688291;

	t73 = (x1617<<(x1618*(x1619&x1620)));

	if (t73 != INT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x1665 = UINT8_MAX;
	int8_t x1666 = INT8_MIN;
	volatile uint32_t x1667 = 7U;
	static int32_t x1668 = INT32_MIN;

	t74 = (x1665<<(x1666*(x1667&x1668)));

	if (t74 != 255) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x1677 = 3U;
	uint8_t x1678 = 0U;
	int16_t x1679 = -1;
	int8_t x1680 = -1;
	volatile int32_t t75 = 619663055;

	t75 = (x1677<<(x1678*(x1679&x1680)));

	if (t75 != 3) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x1726 = 0;
	int32_t x1727 = -1;
	int64_t x1728 = -1LL;
	int32_t t76 = -191;

	t76 = (x1725<<(x1726*(x1727&x1728)));

	if (t76 != 32) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x1749 = 9U;
	uint16_t x1750 = UINT16_MAX;
	int16_t x1752 = INT16_MAX;
	int32_t t77 = -5;

	t77 = (x1749<<(x1750*(x1751&x1752)));

	if (t77 != 9) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x1797 = UINT32_MAX;
	uint32_t x1798 = 130U;
	static int64_t x1800 = INT64_MAX;
	uint32_t t78 = UINT32_MAX;

	t78 = (x1797<<(x1798*(x1799&x1800)));

	if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x1805 = INT8_MAX;
	int64_t x1806 = INT64_MAX;
	int32_t x1808 = INT32_MIN;

	t79 = (x1805<<(x1806*(x1807&x1808)));

	if (t79 != 127) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x1837 = 7U;
	static uint32_t x1839 = 1947984U;
	uint8_t x1840 = 4U;
	static int32_t t80 = -1;

	t80 = (x1837<<(x1838*(x1839&x1840)));

	if (t80 != 7) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x1845 = 0LLU;
	volatile int64_t x1847 = INT64_MIN;
	uint8_t x1848 = 0U;
	uint64_t t81 = 1727064745490LLU;

	t81 = (x1845<<(x1846*(x1847&x1848)));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x1865 = 3533LLU;
	static uint16_t x1867 = 3908U;
	static volatile int64_t x1868 = INT64_MIN;
	volatile uint64_t t82 = 74LLU;

	t82 = (x1865<<(x1866*(x1867&x1868)));

	if (t82 != 3533LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x1879 = 8U;
	int8_t x1880 = -43;
	int32_t t83 = -7;

	t83 = (x1877<<(x1878*(x1879&x1880)));

	if (t83 != 65535) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x1881 = 117U;
	static uint16_t x1882 = UINT16_MAX;
	static uint32_t x1883 = 63U;
	volatile int16_t x1884 = INT16_MIN;
	int32_t t84 = 660265;

	t84 = (x1881<<(x1882*(x1883&x1884)));

	if (t84 != 117) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x1885 = INT16_MAX;
	static int32_t x1887 = -8029576;
	static int16_t x1888 = INT16_MIN;
	static int32_t t85 = 0;

	t85 = (x1885<<(x1886*(x1887&x1888)));

	if (t85 != 32767) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x1893 = 387;
	volatile uint64_t x1894 = 49306585364511088LLU;
	uint8_t x1895 = UINT8_MAX;
	int32_t x1896 = INT32_MIN;
	static volatile int32_t t86 = -2879;

	t86 = (x1893<<(x1894*(x1895&x1896)));

	if (t86 != 387) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x1897 = 590;
	int32_t x1898 = -67837;
	int64_t x1899 = INT64_MIN;
	uint64_t x1900 = 23261272LLU;
	int32_t t87 = -220255829;

	t87 = (x1897<<(x1898*(x1899&x1900)));

	if (t87 != 590) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x1905 = 1U;
	uint32_t x1906 = 6U;
	int8_t x1907 = INT8_MAX;
	static int32_t x1908 = INT32_MIN;

	t88 = (x1905<<(x1906*(x1907&x1908)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x1918 = INT8_MAX;
	int8_t x1919 = INT8_MIN;
	uint16_t x1920 = 2U;
	volatile uint64_t t89 = UINT64_MAX;

	t89 = (x1917<<(x1918*(x1919&x1920)));

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x1949 = 39;
	static uint8_t x1951 = UINT8_MAX;
	volatile int32_t t90 = -61;

	t90 = (x1949<<(x1950*(x1951&x1952)));

	if (t90 != 39) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x1957 = 2034700452LLU;
	uint8_t x1958 = 9U;
	int16_t x1960 = INT16_MIN;
	uint64_t t91 = 1626635564152LLU;

	t91 = (x1957<<(x1958*(x1959&x1960)));

	if (t91 != 2034700452LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x1977 = 723218547U;
	int32_t x1978 = INT32_MAX;
	int8_t x1979 = 0;
	volatile uint32_t t92 = 24706U;

	t92 = (x1977<<(x1978*(x1979&x1980)));

	if (t92 != 723218547U) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x1993 = UINT16_MAX;
	volatile int64_t x1996 = INT64_MIN;
	int32_t t93 = 3;

	t93 = (x1993<<(x1994*(x1995&x1996)));

	if (t93 != 65535) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x2021 = 14;
	int32_t x2022 = -1;
	uint8_t x2023 = 0U;
	static int64_t x2024 = INT64_MAX;
	int32_t t94 = -5;

	t94 = (x2021<<(x2022*(x2023&x2024)));

	if (t94 != 14) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x2049 = 0;
	static int16_t x2050 = 10834;
	static int16_t x2051 = INT16_MIN;
	volatile int32_t t95 = 346443;

	t95 = (x2049<<(x2050*(x2051&x2052)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x2053 = INT16_MAX;
	int8_t x2054 = 0;
	int8_t x2055 = -1;
	uint8_t x2056 = 14U;
	volatile int32_t t96 = 70685263;

	t96 = (x2053<<(x2054*(x2055&x2056)));

	if (t96 != 32767) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x2074 = -6099129847706LL;
	int64_t x2075 = INT64_MAX;
	uint16_t x2076 = 0U;
	volatile int32_t t97 = 19;

	t97 = (x2073<<(x2074*(x2075&x2076)));

	if (t97 != 65535) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint8_t x2077 = 9U;
	int64_t x2078 = INT64_MIN;
	static uint32_t x2080 = 26109U;
	int32_t t98 = 2;

	t98 = (x2077<<(x2078*(x2079&x2080)));

	if (t98 != 9) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x2081 = INT8_MAX;
	static int8_t x2082 = 0;
	volatile uint64_t x2084 = 1216481647218510070LLU;

	t99 = (x2081<<(x2082*(x2083&x2084)));

	if (t99 != 127) { NG(); } else { ; }
	
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

