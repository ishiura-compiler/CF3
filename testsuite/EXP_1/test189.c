#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x21 = 90164U;
static int8_t x22 = -1;
uint8_t x23 = 56U;
int16_t x61 = -107;
uint8_t x64 = 3U;
int8_t x119 = INT8_MAX;
int8_t x120 = 13;
int8_t x165 = INT8_MIN;
volatile int16_t x361 = -72;
static volatile uint32_t t5 = 0U;
static int8_t x376 = 11;
static volatile uint32_t t6 = 176874705U;
volatile int8_t x462 = INT8_MAX;
int64_t t7 = -6646268542312LL;
static int32_t t8 = 6733805;
volatile uint64_t x721 = 19395690814025LLU;
static uint64_t t12 = 0LLU;
int32_t x774 = -60260149;
int8_t x796 = 0;
static uint64_t t14 = 1888839LLU;
int16_t x809 = INT16_MIN;
int64_t x819 = INT64_MIN;
volatile int64_t t16 = 3855LL;
int16_t x835 = -1;
uint8_t x836 = 6U;
volatile uint8_t x856 = 13U;
int64_t t19 = -2242392680157176LL;
uint64_t x965 = 52419257807727461LLU;
uint16_t x1160 = 4U;
static volatile uint64_t t22 = 4560LLU;
int64_t x1186 = -1LL;
static uint8_t x1188 = 22U;
static int32_t x1251 = INT32_MAX;
volatile uint64_t x1274 = UINT64_MAX;
static uint64_t t26 = 1559315852966283LLU;
volatile uint16_t x1288 = 26U;
volatile int16_t x1417 = 0;
int16_t x1419 = -1;
int32_t t29 = 1;
static uint64_t x1578 = UINT64_MAX;
volatile int64_t x1579 = INT64_MIN;
volatile uint8_t x1580 = 28U;
static int16_t x1648 = 21;
volatile int32_t x1682 = -1;
uint64_t x1683 = 158439986080469133LLU;
uint16_t x1684 = 0U;
int16_t x1689 = INT16_MIN;
int8_t x1761 = INT8_MIN;
volatile int8_t x1764 = 0;
int32_t x1881 = INT32_MIN;
uint16_t x1921 = 29590U;
uint32_t x1941 = 52712U;
volatile uint8_t x2195 = UINT8_MAX;
uint64_t x2235 = UINT64_MAX;
uint64_t x2309 = 760896658196708547LLU;
volatile int8_t x2312 = 1;
int64_t x2390 = -6049693770LL;
int64_t x2398 = INT64_MIN;
volatile uint64_t t47 = 3618LLU;
int64_t t49 = -44861734934974991LL;
int16_t x2434 = INT16_MIN;
static int32_t x2435 = -1;
volatile uint16_t x2807 = 12U;
int32_t t53 = -1428227;
int8_t x2998 = -1;
int32_t x3154 = -5921631;
uint8_t x3181 = UINT8_MAX;
int64_t t59 = -24025049LL;
volatile uint64_t t60 = 29057611250059388LLU;
static int64_t x3302 = 514455778299335LL;
int32_t x3304 = 7;
static int16_t x3335 = INT16_MIN;
uint32_t x3339 = UINT32_MAX;
int32_t x3454 = -1;
static int16_t x3488 = 13;
int32_t t69 = 3894027;
uint64_t x3529 = UINT64_MAX;
static uint16_t x3743 = UINT16_MAX;
static uint64_t x3809 = 285310072051LLU;
uint8_t x4041 = 94U;
int64_t x4043 = -1LL;
static int64_t t78 = -14568337983935LL;
static int32_t x4050 = -223792676;
volatile int16_t x4051 = INT16_MIN;
int32_t t79 = -65;
volatile int8_t x4066 = INT8_MAX;
uint8_t x4068 = 2U;
static int32_t x4069 = INT32_MIN;
uint32_t t82 = 408882U;
volatile int32_t x4137 = INT32_MIN;
uint16_t x4140 = 9U;
static uint64_t t84 = 688110LLU;
static uint32_t x4255 = 3466U;
volatile uint32_t x4274 = 15927U;
volatile int32_t t88 = -413;
int16_t x4357 = INT16_MAX;
int8_t x4360 = 17;
static uint8_t x4695 = 16U;
static volatile int64_t t94 = -16633463LL;
uint64_t x4789 = UINT64_MAX;
uint16_t x4790 = UINT16_MAX;
volatile int8_t x4792 = 0;


void f0(void) {
	int8_t x24 = 18;
	static volatile uint32_t t0 = 387U;

	t0 = (((x21-x22)-x23)>>x24);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x62 = 233261976U;
	int16_t x63 = 438;
	volatile uint32_t t1 = 7905057U;

	t1 = (((x61-x62)-x63)>>x64);

	if (t1 != 507713096U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x117 = INT32_MIN;
	int64_t x118 = INT64_MIN;
	int64_t t2 = -7LL;

	t2 = (((x117-x118)-x119)>>x120);

	if (t2 != 1125899906580479LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x166 = -173132;
	int8_t x167 = INT8_MIN;
	int64_t x168 = 0LL;
	static volatile int32_t t3 = -22258;

	t3 = (((x165-x166)-x167)>>x168);

	if (t3 != 173132) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x197 = INT64_MIN;
	int64_t x198 = INT64_MIN;
	static int16_t x199 = INT16_MIN;
	int16_t x200 = 33;
	volatile int64_t t4 = -2088563678737729LL;

	t4 = (((x197-x198)-x199)>>x200);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x362 = UINT32_MAX;
	int16_t x363 = INT16_MAX;
	uint8_t x364 = 8U;

	t5 = (((x361-x362)-x363)>>x364);

	if (t5 != 16777087U) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x373 = 22;
	int32_t x374 = 3;
	static uint32_t x375 = 1618761U;

	t6 = (((x373-x374)-x375)>>x376);

	if (t6 != 2096361U) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x461 = INT8_MIN;
	int64_t x463 = INT64_MIN;
	uint8_t x464 = 56U;

	t7 = (((x461-x462)-x463)>>x464);

	if (t7 != 127LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x469 = UINT8_MAX;
	static int32_t x470 = -995;
	int8_t x471 = 2;
	static int8_t x472 = 3;

	t8 = (((x469-x470)-x471)>>x472);

	if (t8 != 156) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x489 = INT8_MAX;
	uint64_t x490 = 428661000LLU;
	uint32_t x491 = 1U;
	uint8_t x492 = 1U;
	uint64_t t9 = 4404810957259409LLU;

	t9 = (((x489-x490)-x491)>>x492);

	if (t9 != 9223372036640445371LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x653 = INT8_MAX;
	uint64_t x654 = 12LLU;
	static int16_t x655 = INT16_MIN;
	int8_t x656 = 0;
	volatile uint64_t t10 = 467184040402820LLU;

	t10 = (((x653-x654)-x655)>>x656);

	if (t10 != 32883LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x681 = INT32_MIN;
	volatile uint32_t x682 = 42859U;
	int8_t x683 = -1;
	uint8_t x684 = 11U;
	static volatile uint32_t t11 = 26873337U;

	t11 = (((x681-x682)-x683)>>x684);

	if (t11 != 1048555U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x722 = INT16_MIN;
	int32_t x723 = -1;
	int8_t x724 = 0;

	t12 = (((x721-x722)-x723)>>x724);

	if (t12 != 19395690846794LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x773 = -1LL;
	static uint64_t x775 = 3144LLU;
	uint8_t x776 = 5U;
	uint64_t t13 = 15864LLU;

	t13 = (((x773-x774)-x775)>>x776);

	if (t13 != 1883031LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x793 = 2429520181683545218LLU;
	volatile int8_t x794 = INT8_MAX;
	volatile int8_t x795 = -1;

	t14 = (((x793-x794)-x795)>>x796);

	if (t14 != 2429520181683545092LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x810 = UINT8_MAX;
	int64_t x811 = INT64_MIN;
	volatile uint8_t x812 = 6U;
	static int64_t t15 = 625934259155654LL;

	t15 = (((x809-x810)-x811)>>x812);

	if (t15 != 144115188075855356LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x817 = -1;
	int8_t x818 = INT8_MAX;
	uint8_t x820 = 29U;

	t16 = (((x817-x818)-x819)>>x820);

	if (t16 != 17179869183LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x833 = 312018953162586541LLU;
	int64_t x834 = INT64_MAX;
	volatile uint64_t t17 = 10LLU;

	t17 = (((x833-x834)-x835)>>x836);

	if (t17 != 148990484219021286LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x853 = INT32_MIN;
	uint64_t x854 = UINT64_MAX;
	uint32_t x855 = 1U;
	uint64_t t18 = 34350256910LLU;

	t18 = (((x853-x854)-x855)>>x856);

	if (t18 != 2251799813423104LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x941 = 3688126599765LL;
	volatile uint32_t x942 = 3349665U;
	int64_t x943 = 497289102165LL;
	int8_t x944 = 9;

	t19 = (((x941-x942)-x943)>>x944);

	if (t19 != 6232097945LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x966 = 27LLU;
	int8_t x967 = -6;
	volatile int32_t x968 = 18;
	volatile uint64_t t20 = 198383017LLU;

	t20 = (((x965-x966)-x967)>>x968);

	if (t20 != 199963599425LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x1093 = 2LLU;
	uint32_t x1094 = 43215U;
	int16_t x1095 = INT16_MAX;
	uint8_t x1096 = 0U;
	static uint64_t t21 = 642LLU;

	t21 = (((x1093-x1094)-x1095)>>x1096);

	if (t21 != 18446744073709475636LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x1157 = UINT64_MAX;
	int32_t x1158 = INT32_MAX;
	uint64_t x1159 = UINT64_MAX;

	t22 = (((x1157-x1158)-x1159)>>x1160);

	if (t22 != 1152921504472629248LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x1181 = UINT16_MAX;
	uint8_t x1182 = 68U;
	volatile int8_t x1183 = INT8_MIN;
	volatile uint64_t x1184 = 1LLU;
	int32_t t23 = -15;

	t23 = (((x1181-x1182)-x1183)>>x1184);

	if (t23 != 32797) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x1185 = -1LL;
	int32_t x1187 = INT32_MIN;
	int64_t t24 = -7015764443258LL;

	t24 = (((x1185-x1186)-x1187)>>x1188);

	if (t24 != 512LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x1249 = INT16_MAX;
	static uint32_t x1250 = UINT32_MAX;
	int16_t x1252 = 24;
	volatile uint32_t t25 = 18U;

	t25 = (((x1249-x1250)-x1251)>>x1252);

	if (t25 != 128U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x1273 = 8646U;
	volatile int16_t x1275 = 1695;
	int8_t x1276 = 1;

	t26 = (((x1273-x1274)-x1275)>>x1276);

	if (t26 != 3476LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x1285 = 101U;
	int32_t x1286 = -1;
	uint8_t x1287 = 98U;
	int32_t t27 = 2070266;

	t27 = (((x1285-x1286)-x1287)>>x1288);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x1313 = 6;
	volatile int8_t x1314 = INT8_MIN;
	int64_t x1315 = -34603304820246LL;
	volatile int8_t x1316 = 0;
	volatile int64_t t28 = 72LL;

	t28 = (((x1313-x1314)-x1315)>>x1316);

	if (t28 != 34603304820380LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x1418 = INT8_MIN;
	uint8_t x1420 = 2U;

	t29 = (((x1417-x1418)-x1419)>>x1420);

	if (t29 != 32) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1577 = -816;
	volatile uint64_t t30 = 4563745LLU;

	t30 = (((x1577-x1578)-x1579)>>x1580);

	if (t30 != 34359738367LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x1637 = 81U;
	uint64_t x1638 = 126600841970LLU;
	int8_t x1639 = INT8_MIN;
	static uint16_t x1640 = 1U;
	uint64_t t31 = 587494066LLU;

	t31 = (((x1637-x1638)-x1639)>>x1640);

	if (t31 != 9223371973554354927LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x1645 = INT16_MAX;
	static volatile int16_t x1646 = -25;
	int64_t x1647 = -75915075576396411LL;
	volatile int64_t t32 = 139LL;

	t32 = (((x1645-x1646)-x1647)>>x1648);

	if (t32 != 36199128902LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x1681 = 1775433923U;
	static uint64_t t33 = 212LLU;

	t33 = (((x1681-x1682)-x1683)>>x1684);

	if (t33 != 18288304089404516407LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x1690 = INT32_MIN;
	int64_t x1691 = -1LL;
	int8_t x1692 = 1;
	volatile int64_t t34 = 118723891751LL;

	t34 = (((x1689-x1690)-x1691)>>x1692);

	if (t34 != 1073725440LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x1762 = INT8_MAX;
	int32_t x1763 = INT32_MIN;
	volatile int32_t t35 = -5806;

	t35 = (((x1761-x1762)-x1763)>>x1764);

	if (t35 != 2147483393) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x1781 = -35;
	static uint64_t x1782 = 16515392634358LLU;
	uint8_t x1783 = 41U;
	static int8_t x1784 = 1;
	volatile uint64_t t36 = 13LLU;

	t36 = (((x1781-x1782)-x1783)>>x1784);

	if (t36 != 9223363779158458591LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x1882 = UINT32_MAX;
	uint64_t x1883 = 2747173LLU;
	uint8_t x1884 = 27U;
	volatile uint64_t t37 = 12476703795LLU;

	t37 = (((x1881-x1882)-x1883)>>x1884);

	if (t37 != 15LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x1922 = -7872;
	static volatile uint16_t x1923 = 6U;
	static int64_t x1924 = 10LL;
	volatile int32_t t38 = -565;

	t38 = (((x1921-x1922)-x1923)>>x1924);

	if (t38 != 36) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x1933 = -1;
	static uint16_t x1934 = UINT16_MAX;
	int32_t x1935 = INT32_MIN;
	static uint8_t x1936 = 1U;
	int32_t t39 = 25516;

	t39 = (((x1933-x1934)-x1935)>>x1936);

	if (t39 != 1073709056) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x1942 = 50LLU;
	volatile int32_t x1943 = INT32_MIN;
	int8_t x1944 = 7;
	static uint64_t t40 = 1340280272722867352LLU;

	t40 = (((x1941-x1942)-x1943)>>x1944);

	if (t40 != 16777627LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x2029 = 57U;
	volatile int16_t x2030 = -196;
	int64_t x2031 = -50LL;
	volatile uint64_t x2032 = 6LLU;
	int64_t t41 = -33403898438445233LL;

	t41 = (((x2029-x2030)-x2031)>>x2032);

	if (t41 != 4LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x2037 = UINT32_MAX;
	uint16_t x2038 = 265U;
	static int32_t x2039 = INT32_MIN;
	int16_t x2040 = 0;
	uint32_t t42 = 3557U;

	t42 = (((x2037-x2038)-x2039)>>x2040);

	if (t42 != 2147483382U) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x2193 = UINT32_MAX;
	volatile int8_t x2194 = INT8_MIN;
	volatile int8_t x2196 = 3;
	static volatile uint32_t t43 = 959U;

	t43 = (((x2193-x2194)-x2195)>>x2196);

	if (t43 != 536870896U) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint16_t x2233 = 758U;
	static volatile int16_t x2234 = INT16_MAX;
	static uint16_t x2236 = 1U;
	volatile uint64_t t44 = 100952LLU;

	t44 = (((x2233-x2234)-x2235)>>x2236);

	if (t44 != 9223372036854759804LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x2310 = INT64_MIN;
	uint8_t x2311 = 15U;
	volatile uint64_t t45 = 26525412806602405LLU;

	t45 = (((x2309-x2310)-x2311)>>x2312);

	if (t45 != 4992134347525742170LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x2389 = 1012010LLU;
	static int32_t x2391 = INT32_MIN;
	int8_t x2392 = 0;
	volatile uint64_t t46 = 435154600894LLU;

	t46 = (((x2389-x2390)-x2391)>>x2392);

	if (t46 != 8198189428LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint64_t x2397 = 35094030330204868LLU;
	volatile uint64_t x2399 = 1293044955874448LLU;
	int32_t x2400 = 0;

	t47 = (((x2397-x2398)-x2399)>>x2400);

	if (t47 != 9257173022229106228LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x2409 = 0U;
	static int16_t x2410 = -1;
	static volatile int8_t x2411 = INT8_MIN;
	static int8_t x2412 = 7;
	int32_t t48 = 31;

	t48 = (((x2409-x2410)-x2411)>>x2412);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x2417 = INT64_MIN;
	static int8_t x2418 = -1;
	int64_t x2419 = INT64_MIN;
	uint16_t x2420 = 3U;

	t49 = (((x2417-x2418)-x2419)>>x2420);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x2433 = INT8_MAX;
	uint16_t x2436 = 16U;
	volatile int32_t t50 = 216220;

	t50 = (((x2433-x2434)-x2435)>>x2436);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x2697 = 2614564573980203581LL;
	uint32_t x2698 = 51U;
	uint16_t x2699 = UINT16_MAX;
	uint8_t x2700 = 1U;
	int64_t t51 = 61732539LL;

	t51 = (((x2697-x2698)-x2699)>>x2700);

	if (t51 != 1307282286990068997LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x2705 = UINT64_MAX;
	int64_t x2706 = INT64_MIN;
	int16_t x2707 = INT16_MIN;
	uint8_t x2708 = 29U;
	uint64_t t52 = 68551238528LLU;

	t52 = (((x2705-x2706)-x2707)>>x2708);

	if (t52 != 17179869184LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x2805 = 0U;
	int32_t x2806 = -248979;
	uint8_t x2808 = 21U;

	t53 = (((x2805-x2806)-x2807)>>x2808);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x2969 = 62;
	uint16_t x2970 = UINT16_MAX;
	int32_t x2971 = INT32_MIN;
	uint8_t x2972 = 4U;
	int32_t t54 = -11087900;

	t54 = (((x2969-x2970)-x2971)>>x2972);

	if (t54 != 134213635) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x2997 = -1;
	static uint32_t x2999 = 2816784U;
	uint8_t x3000 = 1U;
	uint32_t t55 = 895812U;

	t55 = (((x2997-x2998)-x2999)>>x3000);

	if (t55 != 2146075256U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x3005 = INT8_MIN;
	static uint64_t x3006 = UINT64_MAX;
	int32_t x3007 = -5050330;
	int16_t x3008 = 1;
	uint64_t t56 = 729642LLU;

	t56 = (((x3005-x3006)-x3007)>>x3008);

	if (t56 != 2525101LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x3153 = 577U;
	uint8_t x3155 = UINT8_MAX;
	uint8_t x3156 = 1U;
	int32_t t57 = -104939;

	t57 = (((x3153-x3154)-x3155)>>x3156);

	if (t57 != 2960976) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x3182 = INT8_MIN;
	int8_t x3183 = -1;
	static int64_t x3184 = 4LL;
	static int32_t t58 = -39713;

	t58 = (((x3181-x3182)-x3183)>>x3184);

	if (t58 != 24) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x3185 = 5046U;
	static int64_t x3186 = -127272580636037LL;
	int8_t x3187 = INT8_MIN;
	volatile uint8_t x3188 = 3U;

	t59 = (((x3185-x3186)-x3187)>>x3188);

	if (t59 != 15909072580151LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x3281 = INT64_MAX;
	uint64_t x3282 = 46592LLU;
	int8_t x3283 = INT8_MIN;
	uint8_t x3284 = 1U;

	t60 = (((x3281-x3282)-x3283)>>x3284);

	if (t60 != 4611686018427364671LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x3301 = -1;
	uint64_t x3303 = 5213695031001LLU;
	uint64_t t61 = 4401267682555577LLU;

	t61 = (((x3301-x3302)-x3303)>>x3304);

	if (t61 != 144111128158095478LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x3309 = 25523431;
	uint64_t x3310 = UINT64_MAX;
	uint8_t x3311 = UINT8_MAX;
	int16_t x3312 = 15;
	uint64_t t62 = 57244968973380228LLU;

	t62 = (((x3309-x3310)-x3311)>>x3312);

	if (t62 != 778LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x3333 = INT16_MIN;
	int16_t x3334 = -1;
	int64_t x3336 = 0LL;
	static int32_t t63 = 12128152;

	t63 = (((x3333-x3334)-x3335)>>x3336);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x3337 = -2;
	volatile int64_t x3338 = INT64_MIN;
	int8_t x3340 = 32;
	volatile int64_t t64 = 1147LL;

	t64 = (((x3337-x3338)-x3339)>>x3340);

	if (t64 != 2147483646LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x3349 = -237;
	uint64_t x3350 = 14239993061LLU;
	volatile uint32_t x3351 = UINT32_MAX;
	int8_t x3352 = 0;
	static volatile uint64_t t65 = 1460650LLU;

	t65 = (((x3349-x3350)-x3351)>>x3352);

	if (t65 != 18446744055174591023LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x3373 = 774;
	static uint64_t x3374 = 151155786331LLU;
	uint8_t x3375 = UINT8_MAX;
	int8_t x3376 = 2;
	uint64_t t66 = 3735855LLU;

	t66 = (((x3373-x3374)-x3375)>>x3376);

	if (t66 != 4611685980638441451LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x3453 = -1LL;
	volatile int32_t x3455 = -1;
	uint8_t x3456 = 11U;
	volatile int64_t t67 = -1311287350800LL;

	t67 = (((x3453-x3454)-x3455)>>x3456);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x3461 = INT16_MAX;
	static int64_t x3462 = -39LL;
	static uint8_t x3463 = UINT8_MAX;
	static uint8_t x3464 = 3U;
	volatile int64_t t68 = 3642LL;

	t68 = (((x3461-x3462)-x3463)>>x3464);

	if (t68 != 4068LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x3485 = -1197460;
	volatile uint16_t x3486 = 63U;
	static volatile int32_t x3487 = INT32_MIN;

	t69 = (((x3485-x3486)-x3487)>>x3488);

	if (t69 != 261997) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int8_t x3530 = INT8_MIN;
	int32_t x3531 = INT32_MIN;
	uint8_t x3532 = 1U;
	uint64_t t70 = 48196346482362405LLU;

	t70 = (((x3529-x3530)-x3531)>>x3532);

	if (t70 != 1073741887LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x3601 = 262U;
	volatile uint8_t x3602 = 51U;
	uint32_t x3603 = 1335U;
	int8_t x3604 = 1;
	volatile uint32_t t71 = 137U;

	t71 = (((x3601-x3602)-x3603)>>x3604);

	if (t71 != 2147483086U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x3609 = INT64_MAX;
	uint32_t x3610 = 2011U;
	volatile uint64_t x3611 = UINT64_MAX;
	volatile uint8_t x3612 = 1U;
	uint64_t t72 = 3779282254030LLU;

	t72 = (((x3609-x3610)-x3611)>>x3612);

	if (t72 != 4611686018427386898LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x3621 = 69U;
	uint16_t x3622 = UINT16_MAX;
	volatile int64_t x3623 = INT64_MIN;
	int8_t x3624 = 0;
	volatile int64_t t73 = 622686630341147LL;

	t73 = (((x3621-x3622)-x3623)>>x3624);

	if (t73 != 9223372036854710342LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x3741 = UINT32_MAX;
	volatile int32_t x3742 = INT32_MIN;
	uint16_t x3744 = 24U;
	uint32_t t74 = 169004832U;

	t74 = (((x3741-x3742)-x3743)>>x3744);

	if (t74 != 127U) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x3785 = UINT32_MAX;
	uint32_t x3786 = 78094783U;
	int32_t x3787 = 0;
	int32_t x3788 = 0;
	uint32_t t75 = 2033968U;

	t75 = (((x3785-x3786)-x3787)>>x3788);

	if (t75 != 4216872512U) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x3810 = 556;
	static volatile uint16_t x3811 = UINT16_MAX;
	int16_t x3812 = 0;
	static volatile uint64_t t76 = 131104866430196699LLU;

	t76 = (((x3809-x3810)-x3811)>>x3812);

	if (t76 != 285310005960LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x4001 = -1899646693964103LL;
	uint64_t x4002 = 1193LLU;
	int64_t x4003 = INT64_MAX;
	volatile uint8_t x4004 = 0U;
	static volatile uint64_t t77 = 4757609084LLU;

	t77 = (((x4001-x4002)-x4003)>>x4004);

	if (t77 != 9221472390160810513LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x4042 = INT8_MIN;
	uint16_t x4044 = 0U;

	t78 = (((x4041-x4042)-x4043)>>x4044);

	if (t78 != 223LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x4049 = INT16_MAX;
	volatile uint8_t x4052 = 1U;

	t79 = (((x4049-x4050)-x4051)>>x4052);

	if (t79 != 111929105) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x4065 = 20U;
	uint64_t x4067 = 12197LLU;
	volatile uint64_t t80 = 2625530607495851LLU;

	t80 = (((x4065-x4066)-x4067)>>x4068);

	if (t80 != 1073738748LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x4070 = INT32_MIN;
	int8_t x4071 = -1;
	uint8_t x4072 = 9U;
	volatile int32_t t81 = 556988511;

	t81 = (((x4069-x4070)-x4071)>>x4072);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x4073 = UINT8_MAX;
	int8_t x4074 = INT8_MIN;
	volatile uint32_t x4075 = 520U;
	uint16_t x4076 = 11U;

	t82 = (((x4073-x4074)-x4075)>>x4076);

	if (t82 != 2097151U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x4121 = INT8_MAX;
	uint32_t x4122 = 936454231U;
	volatile int32_t x4123 = -10;
	volatile uint16_t x4124 = 11U;
	uint32_t t83 = 3321786U;

	t83 = (((x4121-x4122)-x4123)>>x4124);

	if (t83 != 1639899U) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x4138 = 39LLU;
	uint32_t x4139 = 21754368U;

	t84 = (((x4137-x4138)-x4139)>>x4140);

	if (t84 != 36028797014727174LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x4213 = -1;
	static uint64_t x4214 = 27413249296LLU;
	volatile int32_t x4215 = -1;
	volatile int8_t x4216 = 0;
	volatile uint64_t t85 = 1606440179706705LLU;

	t85 = (((x4213-x4214)-x4215)>>x4216);

	if (t85 != 18446744046296302320LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x4253 = -1;
	int32_t x4254 = -237996869;
	int32_t x4256 = 0;
	volatile uint32_t t86 = 331589094U;

	t86 = (((x4253-x4254)-x4255)>>x4256);

	if (t86 != 237993402U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x4273 = INT16_MIN;
	int8_t x4275 = -9;
	static uint16_t x4276 = 8U;
	volatile uint32_t t87 = 4U;

	t87 = (((x4273-x4274)-x4275)>>x4276);

	if (t87 != 16777025U) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x4325 = UINT8_MAX;
	int8_t x4326 = INT8_MAX;
	volatile int16_t x4327 = INT16_MIN;
	int8_t x4328 = 5;

	t88 = (((x4325-x4326)-x4327)>>x4328);

	if (t88 != 1028) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x4358 = UINT8_MAX;
	uint32_t x4359 = UINT32_MAX;
	volatile uint32_t t89 = 98621059U;

	t89 = (((x4357-x4358)-x4359)>>x4360);

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x4401 = 56142944946974240LL;
	int16_t x4402 = 6608;
	volatile int8_t x4403 = INT8_MIN;
	static uint8_t x4404 = 63U;
	volatile int64_t t90 = 52LL;

	t90 = (((x4401-x4402)-x4403)>>x4404);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x4413 = 47;
	int16_t x4414 = INT16_MIN;
	int16_t x4415 = -1;
	int8_t x4416 = 12;
	int32_t t91 = 1657;

	t91 = (((x4413-x4414)-x4415)>>x4416);

	if (t91 != 8) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x4693 = INT64_MAX;
	int16_t x4694 = 1;
	int32_t x4696 = 10;
	volatile int64_t t92 = 3667409166LL;

	t92 = (((x4693-x4694)-x4695)>>x4696);

	if (t92 != 9007199254740991LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x4705 = -1;
	int32_t x4706 = INT32_MIN;
	static int8_t x4707 = 0;
	int8_t x4708 = 3;
	static volatile int32_t t93 = 95;

	t93 = (((x4705-x4706)-x4707)>>x4708);

	if (t93 != 268435455) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x4729 = INT8_MAX;
	int64_t x4730 = -1682LL;
	int32_t x4731 = -1;
	uint8_t x4732 = 28U;

	t94 = (((x4729-x4730)-x4731)>>x4732);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x4791 = INT16_MIN;
	uint64_t t95 = 1408LLU;

	t95 = (((x4789-x4790)-x4791)>>x4792);

	if (t95 != 18446744073709518848LLU) { NG(); } else { ; }
	
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


    return 0;
}

