#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x11 = INT64_MIN;
static uint8_t x12 = 4U;
volatile uint64_t t1 = 10180332176593LLU;
int64_t x73 = 32LL;
int64_t x105 = INT64_MAX;
uint8_t x142 = 86U;
static volatile int64_t x151 = -3LL;
int64_t t6 = 33607373401LL;
uint32_t x201 = 84U;
uint16_t x292 = 2U;
int32_t x320 = 2;
uint16_t x410 = 1005U;
uint32_t t15 = 3U;
volatile uint32_t t16 = 87879U;
int8_t x430 = 6;
volatile int32_t t17 = -1835;
uint64_t x536 = UINT64_MAX;
volatile int32_t t20 = 151;
int32_t x610 = 119026069;
int64_t x611 = INT64_MIN;
int16_t x622 = 0;
volatile int16_t x634 = INT16_MIN;
volatile int64_t x636 = INT64_MAX;
uint32_t x710 = 933672U;
int8_t x716 = INT8_MAX;
uint16_t x718 = 279U;
uint32_t x737 = 327664U;
volatile int32_t x739 = INT32_MIN;
uint32_t t28 = 1906643U;
int8_t x795 = 18;
static int32_t x796 = INT32_MIN;
uint8_t x815 = 61U;
static volatile uint32_t t32 = 18U;
volatile uint32_t t33 = 60644503U;
static uint64_t x921 = 210925503LLU;
static volatile uint32_t t35 = 535156U;
uint16_t x953 = 5U;
int32_t x956 = INT32_MAX;
uint64_t t38 = 180881LLU;
int8_t x1105 = 2;
uint64_t x1106 = 12992432489859209LLU;
int64_t x1130 = INT64_MIN;
uint16_t x1132 = UINT16_MAX;
uint8_t x1167 = 3U;
volatile int32_t x1186 = 1;
static uint16_t x1217 = 31U;
int64_t x1251 = -470454785071LL;
static volatile int64_t t51 = -66177130206LL;
volatile int8_t x1274 = 1;
int8_t x1275 = INT8_MIN;
static volatile int16_t x1276 = 11091;
int32_t t52 = -3;
static int64_t t54 = -2695901018045576LL;
uint8_t x1346 = 18U;
static volatile int8_t x1347 = 0;
int64_t t55 = -653141741875LL;
volatile int32_t x1352 = 11223;
int32_t t56 = -5;
uint64_t x1353 = UINT64_MAX;
uint64_t t57 = 236479749184LLU;
uint16_t x1377 = 1092U;
uint32_t x1379 = 443388U;
static volatile uint64_t x1397 = 841014173293911LLU;
int16_t x1398 = 22;
volatile int64_t t61 = -3006458358840319266LL;
int16_t x1452 = INT16_MIN;
int32_t x1614 = INT32_MIN;
int32_t x1618 = 0;
int8_t x1675 = -3;
static int64_t x1725 = 1069151701773LL;
volatile int32_t t70 = 4128748;
int64_t x1750 = -19315444753LL;
volatile int32_t t72 = 47727;
volatile int64_t t73 = -3861099LL;
static int8_t x1767 = INT8_MIN;
int32_t x1768 = INT32_MIN;
int16_t x1771 = INT16_MIN;
static uint16_t x1775 = 243U;
int32_t x1794 = 7;
volatile int8_t x1797 = INT8_MAX;
static volatile uint16_t x1798 = 3U;
uint32_t t78 = 10U;
static volatile int64_t t79 = 7410LL;
int32_t t81 = 5;
volatile int8_t x1842 = INT8_MIN;
volatile int32_t t82 = 27517319;
int32_t t84 = 5;
volatile int8_t x1993 = INT8_MAX;
volatile uint64_t t87 = 693380251938LLU;
volatile int64_t x2165 = 7442611LL;
int16_t x2170 = 862;
uint32_t x2252 = 23907276U;
int32_t t92 = -3577;
int16_t x2261 = 15;
static int8_t x2263 = 51;
volatile int32_t x2278 = 0;
int16_t x2319 = 3258;
static int8_t x2351 = 1;


void f0(void) {
	uint8_t x9 = UINT8_MAX;
	int8_t x10 = INT8_MAX;
	int32_t t0 = -1426987;

	t0 = ((x9<<(x10&x11))%x12);

	if (t0 != 3) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x29 = 10316LL;
	volatile int8_t x30 = 2;
	uint16_t x31 = UINT16_MAX;
	uint64_t x32 = 58238LLU;

	t1 = ((x29<<(x30&x31))%x32);

	if (t1 != 41264LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x74 = 56;
	int64_t x75 = INT64_MAX;
	int8_t x76 = INT8_MIN;
	int64_t t2 = 134888611516LL;

	t2 = ((x73<<(x74&x75))%x76);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x106 = 22U;
	int8_t x107 = INT8_MIN;
	int64_t x108 = -751769185LL;
	int64_t t3 = -377226814167LL;

	t3 = ((x105<<(x106&x107))%x108);

	if (t3 != 494348277LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x141 = 1;
	int16_t x143 = INT16_MIN;
	uint32_t x144 = 28343079U;
	uint32_t t4 = 1498512U;

	t4 = ((x141<<(x142&x143))%x144);

	if (t4 != 1U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x149 = 7656U;
	int8_t x150 = 19;
	int32_t x152 = INT32_MIN;
	volatile int32_t t5 = -6;

	t5 = ((x149<<(x150&x151))%x152);

	if (t5 != 1003487232) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int8_t x161 = 44;
	int32_t x162 = INT32_MIN;
	static int8_t x163 = INT8_MAX;
	int64_t x164 = 3467376790490LL;

	t6 = ((x161<<(x162&x163))%x164);

	if (t6 != 44LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x202 = -298832396784758LL;
	uint8_t x203 = 10U;
	volatile int32_t x204 = INT32_MAX;
	uint32_t t7 = 31815999U;

	t7 = ((x201<<(x202&x203))%x204);

	if (t7 != 86016U) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x249 = 2025606LL;
	static int64_t x250 = -2710267981177496LL;
	int8_t x251 = 1;
	uint64_t x252 = 9605294868158LLU;
	volatile uint64_t t8 = 36LLU;

	t8 = ((x249<<(x250&x251))%x252);

	if (t8 != 2025606LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int64_t x257 = INT64_MAX;
	static int16_t x258 = INT16_MIN;
	uint8_t x259 = 7U;
	volatile uint32_t x260 = UINT32_MAX;
	int64_t t9 = -96510477439614650LL;

	t9 = ((x257<<(x258&x259))%x260);

	if (t9 != 2147483647LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x289 = 644152405U;
	static int64_t x290 = INT64_MIN;
	volatile int64_t x291 = 327103727294LL;
	static volatile uint32_t t10 = 82U;

	t10 = ((x289<<(x290&x291))%x292);

	if (t10 != 1U) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint64_t x309 = UINT64_MAX;
	static int64_t x310 = INT64_MIN;
	uint8_t x311 = 7U;
	int8_t x312 = -1;
	volatile uint64_t t11 = 330189022620148LLU;

	t11 = ((x309<<(x310&x311))%x312);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x317 = INT64_MAX;
	int16_t x318 = INT16_MIN;
	static uint8_t x319 = 115U;
	volatile int64_t t12 = 18144LL;

	t12 = ((x317<<(x318&x319))%x320);

	if (t12 != 1LL) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint64_t x353 = UINT64_MAX;
	int64_t x354 = INT64_MIN;
	int64_t x355 = INT64_MAX;
	static int64_t x356 = INT64_MAX;
	volatile uint64_t t13 = 130LLU;

	t13 = ((x353<<(x354&x355))%x356);

	if (t13 != 1LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x409 = 84096LLU;
	uint8_t x411 = 2U;
	int16_t x412 = INT16_MIN;
	static uint64_t t14 = 96605LLU;

	t14 = ((x409<<(x410&x411))%x412);

	if (t14 != 84096LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x417 = 254194;
	int16_t x418 = INT16_MIN;
	volatile uint32_t x419 = 6493U;
	volatile uint32_t x420 = 56939652U;

	t15 = ((x417<<(x418&x419))%x420);

	if (t15 != 254194U) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x425 = UINT8_MAX;
	uint32_t x426 = 15U;
	int32_t x427 = INT32_MAX;
	uint32_t x428 = 4U;

	t16 = ((x425<<(x426&x427))%x428);

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x429 = 0U;
	volatile uint64_t x431 = UINT64_MAX;
	uint16_t x432 = 4U;

	t17 = ((x429<<(x430&x431))%x432);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x529 = 2245;
	int16_t x530 = INT16_MIN;
	int16_t x531 = INT16_MAX;
	int32_t x532 = 4895442;
	int32_t t18 = 287207;

	t18 = ((x529<<(x530&x531))%x532);

	if (t18 != 2245) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x533 = 933U;
	int32_t x534 = 1;
	int64_t x535 = -1LL;
	static volatile uint64_t t19 = 5374LLU;

	t19 = ((x533<<(x534&x535))%x536);

	if (t19 != 1866LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x597 = UINT16_MAX;
	volatile int8_t x598 = INT8_MIN;
	uint8_t x599 = 62U;
	int8_t x600 = INT8_MIN;

	t20 = ((x597<<(x598&x599))%x600);

	if (t20 != 127) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x609 = 456;
	volatile int8_t x612 = -5;
	volatile int32_t t21 = 14951707;

	t21 = ((x609<<(x610&x611))%x612);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x621 = 2;
	int32_t x623 = INT32_MIN;
	int64_t x624 = -390566154LL;
	volatile int64_t t22 = -236152492278LL;

	t22 = ((x621<<(x622&x623))%x624);

	if (t22 != 2LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x633 = 2528U;
	int8_t x635 = 12;
	int64_t t23 = -39522560870LL;

	t23 = ((x633<<(x634&x635))%x636);

	if (t23 != 2528LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x697 = 1667308818348373LLU;
	static int32_t x698 = INT32_MAX;
	int64_t x699 = INT64_MIN;
	int32_t x700 = -49405035;
	uint64_t t24 = 16436692329673LLU;

	t24 = ((x697<<(x698&x699))%x700);

	if (t24 != 1667308818348373LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x709 = INT16_MAX;
	int8_t x711 = 1;
	volatile int16_t x712 = -1;
	volatile int32_t t25 = 6610;

	t25 = ((x709<<(x710&x711))%x712);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x713 = UINT8_MAX;
	int32_t x714 = 758870963;
	uint32_t x715 = 1U;
	static volatile int32_t t26 = 22353990;

	t26 = ((x713<<(x714&x715))%x716);

	if (t26 != 2) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x717 = 331U;
	int64_t x719 = 440868LL;
	int32_t x720 = INT32_MAX;
	volatile int32_t t27 = -5599;

	t27 = ((x717<<(x718&x719))%x720);

	if (t27 != 5296) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x738 = 1;
	int16_t x740 = INT16_MAX;

	t28 = ((x737<<(x738&x739))%x740);

	if (t28 != 32761U) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x741 = UINT64_MAX;
	static uint32_t x742 = 3407U;
	int32_t x743 = INT32_MIN;
	int16_t x744 = -1;
	uint64_t t29 = 1LLU;

	t29 = ((x741<<(x742&x743))%x744);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x793 = UINT32_MAX;
	int8_t x794 = INT8_MAX;
	volatile uint32_t t30 = 5838U;

	t30 = ((x793<<(x794&x795))%x796);

	if (t30 != 2147221504U) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x813 = UINT32_MAX;
	int16_t x814 = -8872;
	int8_t x816 = INT8_MAX;
	volatile uint32_t t31 = 3037831U;

	t31 = ((x813<<(x814&x815))%x816);

	if (t31 != 8U) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x817 = UINT32_MAX;
	int16_t x818 = INT16_MIN;
	static uint16_t x819 = 13U;
	uint8_t x820 = UINT8_MAX;

	t32 = ((x817<<(x818&x819))%x820);

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x885 = 1077U;
	uint32_t x886 = 473653779U;
	uint8_t x887 = UINT8_MAX;
	int16_t x888 = INT16_MIN;

	t33 = ((x885<<(x886&x887))%x888);

	if (t33 != 564658176U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x922 = UINT64_MAX;
	int32_t x923 = 10;
	int16_t x924 = INT16_MIN;
	static uint64_t t34 = 214LLU;

	t34 = ((x921<<(x922&x923))%x924);

	if (t34 != 215987715072LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x929 = 162874U;
	int8_t x930 = INT8_MIN;
	volatile uint32_t x931 = 3U;
	volatile uint16_t x932 = UINT16_MAX;

	t35 = ((x929<<(x930&x931))%x932);

	if (t35 != 31804U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x933 = INT16_MAX;
	volatile int16_t x934 = INT16_MIN;
	int32_t x935 = 87;
	volatile int32_t x936 = 472092;
	static int32_t t36 = 28178614;

	t36 = ((x933<<(x934&x935))%x936);

	if (t36 != 32767) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint64_t x954 = 226160676453216244LLU;
	uint8_t x955 = 6U;
	volatile int32_t t37 = 1842483;

	t37 = ((x953<<(x954&x955))%x956);

	if (t37 != 80) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x989 = 51585LLU;
	int8_t x990 = 1;
	int32_t x991 = INT32_MIN;
	static int16_t x992 = INT16_MIN;

	t38 = ((x989<<(x990&x991))%x992);

	if (t38 != 51585LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x1001 = 1U;
	uint8_t x1002 = 0U;
	uint32_t x1003 = UINT32_MAX;
	uint32_t x1004 = 612991199U;
	volatile uint32_t t39 = 17979U;

	t39 = ((x1001<<(x1002&x1003))%x1004);

	if (t39 != 1U) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x1005 = UINT64_MAX;
	uint64_t x1006 = 1168405797854LLU;
	uint64_t x1007 = 1LLU;
	int32_t x1008 = INT32_MAX;
	uint64_t t40 = 127823072147LLU;

	t40 = ((x1005<<(x1006&x1007))%x1008);

	if (t40 != 3LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x1061 = UINT32_MAX;
	int32_t x1062 = -1;
	volatile int32_t x1063 = 0;
	int64_t x1064 = INT64_MIN;
	volatile int64_t t41 = -29LL;

	t41 = ((x1061<<(x1062&x1063))%x1064);

	if (t41 != 4294967295LL) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x1081 = 61U;
	volatile uint16_t x1082 = 19U;
	int32_t x1083 = INT32_MIN;
	int16_t x1084 = -1;
	volatile int32_t t42 = 0;

	t42 = ((x1081<<(x1082&x1083))%x1084);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x1107 = 29U;
	static int64_t x1108 = -1086885733714331798LL;
	static int64_t t43 = -475215281463251044LL;

	t43 = ((x1105<<(x1106&x1107))%x1108);

	if (t43 != 1024LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x1129 = 74U;
	int64_t x1131 = 531181398698LL;
	volatile int32_t t44 = -2044;

	t44 = ((x1129<<(x1130&x1131))%x1132);

	if (t44 != 74) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x1157 = 1U;
	static int32_t x1158 = 3;
	static int16_t x1159 = INT16_MAX;
	uint8_t x1160 = 1U;
	static int32_t t45 = 11742;

	t45 = ((x1157<<(x1158&x1159))%x1160);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x1165 = UINT8_MAX;
	static uint16_t x1166 = 1U;
	static volatile uint8_t x1168 = UINT8_MAX;
	static volatile int32_t t46 = 0;

	t46 = ((x1165<<(x1166&x1167))%x1168);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x1185 = 1U;
	static volatile int16_t x1187 = INT16_MIN;
	int32_t x1188 = INT32_MAX;
	uint32_t t47 = 1535U;

	t47 = ((x1185<<(x1186&x1187))%x1188);

	if (t47 != 1U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x1209 = 0U;
	static int16_t x1210 = 1;
	static int8_t x1211 = -45;
	static int32_t x1212 = -3139;
	volatile int32_t t48 = 40438;

	t48 = ((x1209<<(x1210&x1211))%x1212);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x1218 = INT16_MAX;
	int32_t x1219 = INT32_MIN;
	int16_t x1220 = -1;
	volatile int32_t t49 = 367482237;

	t49 = ((x1217<<(x1218&x1219))%x1220);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x1225 = 41;
	uint32_t x1226 = 1U;
	int8_t x1227 = -3;
	int32_t x1228 = INT32_MIN;
	static int32_t t50 = 1;

	t50 = ((x1225<<(x1226&x1227))%x1228);

	if (t50 != 82) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x1249 = UINT16_MAX;
	uint8_t x1250 = 14U;
	volatile int64_t x1252 = -1LL;

	t51 = ((x1249<<(x1250&x1251))%x1252);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x1273 = 204U;

	t52 = ((x1273<<(x1274&x1275))%x1276);

	if (t52 != 204) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x1317 = 9414LLU;
	volatile int32_t x1318 = INT32_MIN;
	uint8_t x1319 = 4U;
	static int16_t x1320 = 3064;
	uint64_t t53 = 231564726LLU;

	t53 = ((x1317<<(x1318&x1319))%x1320);

	if (t53 != 222LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x1333 = 112734856LL;
	int32_t x1334 = -10748;
	uint8_t x1335 = 3U;
	uint8_t x1336 = 2U;

	t54 = ((x1333<<(x1334&x1335))%x1336);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x1345 = INT64_MAX;
	int32_t x1348 = -1;

	t55 = ((x1345<<(x1346&x1347))%x1348);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x1349 = 1;
	uint16_t x1350 = 1717U;
	volatile uint8_t x1351 = 0U;

	t56 = ((x1349<<(x1350&x1351))%x1352);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int8_t x1354 = INT8_MIN;
	static uint64_t x1355 = 7LLU;
	volatile int64_t x1356 = 7LL;

	t57 = ((x1353<<(x1354&x1355))%x1356);

	if (t57 != 1LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x1365 = 145327;
	int32_t x1366 = -1;
	int8_t x1367 = 3;
	int16_t x1368 = 30;
	static int32_t t58 = 53303;

	t58 = ((x1365<<(x1366&x1367))%x1368);

	if (t58 != 26) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x1378 = 0;
	volatile int32_t x1380 = INT32_MAX;
	int32_t t59 = 60177420;

	t59 = ((x1377<<(x1378&x1379))%x1380);

	if (t59 != 1092) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x1399 = INT64_MIN;
	uint8_t x1400 = UINT8_MAX;
	static uint64_t t60 = 2391772LLU;

	t60 = ((x1397<<(x1398&x1399))%x1400);

	if (t60 != 6LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x1433 = UINT8_MAX;
	int16_t x1434 = 2225;
	uint16_t x1435 = 2U;
	int64_t x1436 = -1LL;

	t61 = ((x1433<<(x1434&x1435))%x1436);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x1449 = 13LL;
	int8_t x1450 = 2;
	int64_t x1451 = INT64_MIN;
	static volatile int64_t t62 = 11299086225546406LL;

	t62 = ((x1449<<(x1450&x1451))%x1452);

	if (t62 != 13LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x1461 = UINT32_MAX;
	uint8_t x1462 = 29U;
	int32_t x1463 = INT32_MIN;
	int16_t x1464 = INT16_MIN;
	volatile uint32_t t63 = 2268U;

	t63 = ((x1461<<(x1462&x1463))%x1464);

	if (t63 != 32767U) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x1469 = 15LLU;
	static uint16_t x1470 = 2U;
	uint32_t x1471 = 2860U;
	uint32_t x1472 = 2U;
	volatile uint64_t t64 = 218603575LLU;

	t64 = ((x1469<<(x1470&x1471))%x1472);

	if (t64 != 1LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x1613 = 8U;
	uint16_t x1615 = 387U;
	uint16_t x1616 = 91U;
	static volatile int32_t t65 = -17;

	t65 = ((x1613<<(x1614&x1615))%x1616);

	if (t65 != 8) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x1617 = 1960U;
	uint8_t x1619 = UINT8_MAX;
	static int32_t x1620 = INT32_MAX;
	int32_t t66 = -62227022;

	t66 = ((x1617<<(x1618&x1619))%x1620);

	if (t66 != 1960) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x1641 = 6U;
	uint8_t x1642 = 10U;
	int16_t x1643 = 4;
	int8_t x1644 = -1;
	int32_t t67 = -894306212;

	t67 = ((x1641<<(x1642&x1643))%x1644);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x1673 = 378457022LLU;
	int32_t x1674 = 1;
	uint32_t x1676 = 230U;
	volatile uint64_t t68 = 3LLU;

	t68 = ((x1673<<(x1674&x1675))%x1676);

	if (t68 != 144LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x1726 = -1;
	int8_t x1727 = 1;
	int16_t x1728 = INT16_MIN;
	int64_t t69 = 153236308687226LL;

	t69 = ((x1725<<(x1726&x1727))%x1728);

	if (t69 != 5658LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x1729 = INT16_MAX;
	static uint16_t x1730 = 1U;
	volatile int64_t x1731 = -248LL;
	int16_t x1732 = -1;

	t70 = ((x1729<<(x1730&x1731))%x1732);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint16_t x1741 = 47U;
	int32_t x1742 = INT32_MAX;
	uint16_t x1743 = 1U;
	int32_t x1744 = INT32_MAX;
	static volatile int32_t t71 = 4;

	t71 = ((x1741<<(x1742&x1743))%x1744);

	if (t71 != 94) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x1749 = INT16_MAX;
	static uint32_t x1751 = 0U;
	int32_t x1752 = -1172319;

	t72 = ((x1749<<(x1750&x1751))%x1752);

	if (t72 != 32767) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x1753 = 2395574U;
	uint32_t x1754 = 3U;
	int32_t x1755 = -1;
	volatile int64_t x1756 = -907046LL;

	t73 = ((x1753<<(x1754&x1755))%x1756);

	if (t73 != 116626LL) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint16_t x1765 = UINT16_MAX;
	uint16_t x1766 = 0U;
	static int32_t t74 = -33256684;

	t74 = ((x1765<<(x1766&x1767))%x1768);

	if (t74 != 65535) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x1769 = 201U;
	static uint8_t x1770 = UINT8_MAX;
	static int16_t x1772 = -1;
	volatile int32_t t75 = -1820;

	t75 = ((x1769<<(x1770&x1771))%x1772);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x1773 = UINT64_MAX;
	static volatile int8_t x1774 = 0;
	uint64_t x1776 = 48695424448444LLU;
	uint64_t t76 = 29LLU;

	t76 = ((x1773<<(x1774&x1775))%x1776);

	if (t76 != 40774998892423LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x1793 = INT16_MAX;
	volatile int8_t x1795 = INT8_MIN;
	uint64_t x1796 = 3218220856736LLU;
	uint64_t t77 = 634342166868377LLU;

	t77 = ((x1793<<(x1794&x1795))%x1796);

	if (t77 != 32767LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x1799 = INT8_MIN;
	static volatile uint32_t x1800 = UINT32_MAX;

	t78 = ((x1797<<(x1798&x1799))%x1800);

	if (t78 != 127U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x1809 = INT32_MAX;
	int16_t x1810 = INT16_MIN;
	volatile uint16_t x1811 = 128U;
	static int64_t x1812 = -1LL;

	t79 = ((x1809<<(x1810&x1811))%x1812);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint32_t x1817 = UINT32_MAX;
	int64_t x1818 = 14436980LL;
	volatile int32_t x1819 = INT32_MIN;
	static volatile int32_t x1820 = INT32_MIN;
	uint32_t t80 = 6502U;

	t80 = ((x1817<<(x1818&x1819))%x1820);

	if (t80 != 2147483647U) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x1825 = 7U;
	volatile int8_t x1826 = 2;
	int32_t x1827 = INT32_MIN;
	int8_t x1828 = 25;

	t81 = ((x1825<<(x1826&x1827))%x1828);

	if (t81 != 7) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x1841 = 4U;
	int8_t x1843 = 1;
	static volatile int16_t x1844 = 4;

	t82 = ((x1841<<(x1842&x1843))%x1844);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x1869 = 145845039873LL;
	uint8_t x1870 = 7U;
	volatile int64_t x1871 = -1968LL;
	int8_t x1872 = 47;
	volatile int64_t t83 = 4311LL;

	t83 = ((x1869<<(x1870&x1871))%x1872);

	if (t83 != 35LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x1945 = 5;
	volatile int16_t x1946 = INT16_MIN;
	uint8_t x1947 = UINT8_MAX;
	int8_t x1948 = INT8_MIN;

	t84 = ((x1945<<(x1946&x1947))%x1948);

	if (t84 != 5) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x1957 = UINT8_MAX;
	int64_t x1958 = -1LL;
	static uint8_t x1959 = 1U;
	uint64_t x1960 = 517654602LLU;
	volatile uint64_t t85 = 127831LLU;

	t85 = ((x1957<<(x1958&x1959))%x1960);

	if (t85 != 510LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x1994 = 1U;
	int32_t x1995 = INT32_MAX;
	uint16_t x1996 = UINT16_MAX;
	int32_t t86 = 1;

	t86 = ((x1993<<(x1994&x1995))%x1996);

	if (t86 != 254) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x2009 = UINT64_MAX;
	int64_t x2010 = INT64_MIN;
	static uint32_t x2011 = 5U;
	int32_t x2012 = INT32_MIN;

	t87 = ((x2009<<(x2010&x2011))%x2012);

	if (t87 != 2147483647LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x2166 = 2437210489037648246LL;
	volatile int8_t x2167 = 0;
	volatile int16_t x2168 = -79;
	int64_t t88 = -469563867LL;

	t88 = ((x2165<<(x2166&x2167))%x2168);

	if (t88 != 21LL) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x2169 = UINT32_MAX;
	static int16_t x2171 = 0;
	int8_t x2172 = INT8_MAX;
	volatile uint32_t t89 = 138U;

	t89 = ((x2169<<(x2170&x2171))%x2172);

	if (t89 != 15U) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x2197 = 0U;
	int16_t x2198 = INT16_MIN;
	uint64_t x2199 = 31LLU;
	volatile int32_t x2200 = 1572;
	static int32_t t90 = 192197;

	t90 = ((x2197<<(x2198&x2199))%x2200);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x2249 = 7536193417451175LL;
	uint8_t x2250 = 22U;
	static volatile int64_t x2251 = 12LL;
	int64_t t91 = 134230110178243LL;

	t91 = ((x2249<<(x2250&x2251))%x2252);

	if (t91 != 7935324LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x2253 = 3444U;
	int64_t x2254 = INT64_MIN;
	int8_t x2255 = 41;
	static int8_t x2256 = 17;

	t92 = ((x2253<<(x2254&x2255))%x2256);

	if (t92 != 10) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x2262 = -185;
	volatile int64_t x2264 = INT64_MAX;
	int64_t t93 = 33434251556LL;

	t93 = ((x2261<<(x2262&x2263))%x2264);

	if (t93 != 120LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x2277 = 5U;
	static uint32_t x2279 = UINT32_MAX;
	int64_t x2280 = INT64_MAX;
	int64_t t94 = 32425250287696LL;

	t94 = ((x2277<<(x2278&x2279))%x2280);

	if (t94 != 5LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x2297 = 23993554462511LLU;
	static uint32_t x2298 = UINT32_MAX;
	int16_t x2299 = 1;
	static volatile int8_t x2300 = INT8_MAX;
	volatile uint64_t t95 = 1803825393LLU;

	t95 = ((x2297<<(x2298&x2299))%x2300);

	if (t95 != 16LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x2305 = INT8_MAX;
	int64_t x2306 = INT64_MIN;
	uint64_t x2307 = 0LLU;
	static volatile uint32_t x2308 = 121806U;
	static uint32_t t96 = 19U;

	t96 = ((x2305<<(x2306&x2307))%x2308);

	if (t96 != 127U) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x2313 = UINT32_MAX;
	uint16_t x2314 = 2U;
	int8_t x2315 = -7;
	volatile uint32_t x2316 = 730468U;
	uint32_t t97 = 2059912U;

	t97 = ((x2313<<(x2314&x2315))%x2316);

	if (t97 != 545923U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x2317 = UINT32_MAX;
	uint16_t x2318 = 12U;
	int8_t x2320 = INT8_MIN;
	static uint32_t t98 = 91812U;

	t98 = ((x2317<<(x2318&x2319))%x2320);

	if (t98 != 4294967040U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x2349 = 11561U;
	static uint32_t x2350 = 11U;
	static volatile int32_t x2352 = INT32_MIN;
	uint32_t t99 = 720959U;

	t99 = ((x2349<<(x2350&x2351))%x2352);

	if (t99 != 23122U) { NG(); } else { ; }
	
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

