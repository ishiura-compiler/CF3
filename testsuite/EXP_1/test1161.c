#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x3 = INT8_MIN;
static int16_t x75 = INT16_MIN;
static int8_t x90 = 0;
static int8_t x133 = INT8_MAX;
static int64_t t6 = 148724452LL;
static volatile int32_t x240 = 9923;
uint8_t x277 = 21U;
uint8_t x345 = 5U;
volatile uint32_t x347 = 12106983U;
int8_t x396 = -1;
static uint16_t x558 = 22U;
uint16_t x581 = 1477U;
int32_t x646 = 1;
int32_t x647 = -1;
volatile int16_t x648 = -1;
int8_t x818 = 1;
uint64_t x858 = 20LLU;
uint8_t x869 = 0U;
int64_t x935 = -1LL;
uint8_t x1109 = 11U;
volatile uint32_t x1110 = 25U;
static int32_t x1112 = -58662;
uint16_t x1179 = UINT16_MAX;
static int32_t x1273 = 170021;
int8_t x1640 = INT8_MIN;
int8_t x1705 = 12;
static uint32_t x1724 = 1238424U;
int64_t x1800 = INT64_MIN;
uint8_t x1890 = 19U;
static volatile int16_t x1892 = INT16_MIN;
int32_t x1964 = INT32_MAX;
static int16_t x2084 = INT16_MIN;
int64_t x2090 = 0LL;
uint8_t x2229 = 1U;
volatile int8_t x2233 = 1;
uint8_t x2242 = 2U;
int64_t x2243 = INT64_MIN;
int32_t x2244 = INT32_MIN;
int32_t t42 = -9851490;
int16_t x2301 = INT16_MAX;
uint64_t t43 = 1594218801996708LLU;
uint64_t x2387 = UINT64_MAX;
int8_t x2522 = 1;
static int16_t x2523 = -1;
int64_t x2701 = INT64_MAX;
volatile int64_t t52 = 962840129LL;
int64_t x2967 = INT64_MIN;
volatile uint64_t t53 = 4313403634664742LLU;
uint16_t x2996 = 193U;
uint32_t x3013 = 85186606U;
uint32_t x3030 = 6U;
int64_t x3031 = INT64_MIN;
static int16_t x3032 = INT16_MIN;
int8_t x3058 = 31;
volatile int32_t x3060 = 11949351;
static int32_t t57 = 869860;
volatile int8_t x3154 = 4;
uint8_t x3156 = 1U;
int32_t x3168 = -1;
int32_t t63 = 798942;
volatile uint64_t t65 = 38946580301339LLU;
volatile uint64_t x3375 = 39779943606LLU;
uint32_t x3437 = 216U;
volatile uint64_t t68 = 21199070913LLU;
volatile uint32_t x3473 = 1358052431U;
static int64_t t69 = 243213998505598590LL;
volatile uint32_t x3534 = 0U;
int64_t x3535 = INT64_MIN;
uint32_t t72 = 27936U;
int32_t x3716 = -45211;
uint64_t x3901 = 3256596583929LLU;
int16_t x4147 = INT16_MIN;
uint64_t x4181 = 2245367639LLU;
uint16_t x4337 = 3500U;
uint8_t x4338 = 1U;
int32_t x4339 = INT32_MAX;
volatile int8_t x4665 = 2;
uint8_t x4666 = 3U;
int16_t x4987 = -674;
static int16_t x4992 = -1;
uint32_t x5041 = UINT32_MAX;
static volatile uint32_t x5043 = UINT32_MAX;
int16_t x5044 = INT16_MAX;
volatile uint32_t t85 = 318647258U;
uint8_t x5310 = 12U;
static int8_t x5312 = -44;
uint16_t x5369 = UINT16_MAX;
int64_t x5372 = INT64_MIN;
uint16_t x5441 = 4517U;
uint16_t x5443 = 3U;
int8_t x5444 = INT8_MAX;
int32_t t90 = -130438012;
uint8_t x5574 = 0U;
uint64_t x5575 = UINT64_MAX;
uint64_t x5730 = 34LLU;
int16_t x5732 = INT16_MAX;
volatile uint8_t x5810 = 42U;
uint8_t x5850 = 4U;
int32_t x5856 = INT32_MAX;
static uint16_t x5990 = 0U;
int8_t x5991 = INT8_MAX;


void f0(void) {
	volatile uint64_t x1 = 2720LLU;
	volatile uint16_t x2 = 20U;
	static int8_t x4 = INT8_MIN;
	uint64_t t0 = 2750839982658456LLU;

	t0 = (((x1>>x2)|x3)/x4);

	if (t0 != 1LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x73 = 1U;
	volatile uint32_t x74 = 4U;
	static int32_t x76 = -1;
	static int32_t t1 = -2560329;

	t1 = (((x73>>x74)|x75)/x76);

	if (t1 != 32768) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint32_t x85 = 10405U;
	volatile uint8_t x86 = 5U;
	int8_t x87 = -13;
	volatile int32_t x88 = -1;
	static uint32_t t2 = 3353U;

	t2 = (((x85>>x86)|x87)/x88);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x89 = 27U;
	int64_t x91 = -1LL;
	uint32_t x92 = 93972312U;
	volatile int64_t t3 = 1LL;

	t3 = (((x89>>x90)|x91)/x92);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x134 = 0U;
	int8_t x135 = INT8_MAX;
	int32_t x136 = INT32_MIN;
	static volatile int32_t t4 = 27432872;

	t4 = (((x133>>x134)|x135)/x136);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x137 = 565579U;
	static int32_t x138 = 0;
	int8_t x139 = INT8_MAX;
	int8_t x140 = INT8_MIN;
	static uint32_t t5 = 2709879U;

	t5 = (((x137>>x138)|x139)/x140);

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x205 = 961U;
	int32_t x206 = 13;
	int16_t x207 = INT16_MAX;
	int64_t x208 = -1LL;

	t6 = (((x205>>x206)|x207)/x208);

	if (t6 != -32767LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x237 = INT16_MAX;
	int8_t x238 = 0;
	int64_t x239 = 48758076256115737LL;
	static int64_t t7 = 37LL;

	t7 = (((x237>>x238)|x239)/x240);

	if (t7 != 4913642674203LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x278 = 21;
	int8_t x279 = INT8_MIN;
	volatile int32_t x280 = -2923;
	int32_t t8 = 240651880;

	t8 = (((x277>>x278)|x279)/x280);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x346 = 1U;
	static uint8_t x348 = UINT8_MAX;
	uint32_t t9 = 47570358U;

	t9 = (((x345>>x346)|x347)/x348);

	if (t9 != 47478U) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x393 = 213072015;
	int16_t x394 = 0;
	uint64_t x395 = UINT64_MAX;
	static uint64_t t10 = 188LLU;

	t10 = (((x393>>x394)|x395)/x396);

	if (t10 != 1LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x509 = 235LLU;
	static uint8_t x510 = 0U;
	static uint16_t x511 = 781U;
	static int64_t x512 = INT64_MIN;
	uint64_t t11 = 62876459913LLU;

	t11 = (((x509>>x510)|x511)/x512);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x557 = UINT16_MAX;
	uint32_t x559 = 112221U;
	uint16_t x560 = UINT16_MAX;
	volatile uint32_t t12 = 1U;

	t12 = (((x557>>x558)|x559)/x560);

	if (t12 != 1U) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x582 = 12U;
	uint8_t x583 = 61U;
	static int16_t x584 = INT16_MIN;
	static int32_t t13 = 9260697;

	t13 = (((x581>>x582)|x583)/x584);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x645 = 1;
	int32_t t14 = -197;

	t14 = (((x645>>x646)|x647)/x648);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x817 = UINT8_MAX;
	static volatile int8_t x819 = INT8_MIN;
	uint64_t x820 = 1797LLU;
	volatile uint64_t t15 = 822LLU;

	t15 = (((x817>>x818)|x819)/x820);

	if (t15 != 10265299985369811LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x857 = 247782962737866LLU;
	static uint64_t x859 = 74474LLU;
	static int64_t x860 = 369356689192848679LL;
	volatile uint64_t t16 = 30728503363LLU;

	t16 = (((x857>>x858)|x859)/x860);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x870 = 2U;
	static uint32_t x871 = UINT32_MAX;
	static int16_t x872 = INT16_MIN;
	volatile uint32_t t17 = 6549U;

	t17 = (((x869>>x870)|x871)/x872);

	if (t17 != 1U) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x885 = 20316U;
	uint8_t x886 = 19U;
	volatile uint32_t x887 = 1527U;
	int16_t x888 = INT16_MIN;
	uint32_t t18 = 614720U;

	t18 = (((x885>>x886)|x887)/x888);

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x933 = 31811U;
	uint16_t x934 = 18U;
	int64_t x936 = 548602072106714468LL;
	static volatile int64_t t19 = 2LL;

	t19 = (((x933>>x934)|x935)/x936);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x1045 = UINT32_MAX;
	uint32_t x1046 = 9U;
	static volatile uint32_t x1047 = 999U;
	uint16_t x1048 = UINT16_MAX;
	volatile uint32_t t20 = 576668412U;

	t20 = (((x1045>>x1046)|x1047)/x1048);

	if (t20 != 128U) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x1111 = INT64_MAX;
	int64_t t21 = -322416816LL;

	t21 = (((x1109>>x1110)|x1111)/x1112);

	if (t21 != -157229075668316LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x1165 = 296LLU;
	static int8_t x1166 = 6;
	int64_t x1167 = INT64_MIN;
	static uint8_t x1168 = 1U;
	volatile uint64_t t22 = 6753LLU;

	t22 = (((x1165>>x1166)|x1167)/x1168);

	if (t22 != 9223372036854775812LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x1177 = INT8_MAX;
	int32_t x1178 = 1;
	uint16_t x1180 = UINT16_MAX;
	int32_t t23 = 98584;

	t23 = (((x1177>>x1178)|x1179)/x1180);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1274 = 20;
	int64_t x1275 = -7186537LL;
	int32_t x1276 = INT32_MAX;
	int64_t t24 = -31670226782686LL;

	t24 = (((x1273>>x1274)|x1275)/x1276);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x1405 = INT16_MAX;
	static int64_t x1406 = 0LL;
	int16_t x1407 = 118;
	uint32_t x1408 = UINT32_MAX;
	uint32_t t25 = 88536703U;

	t25 = (((x1405>>x1406)|x1407)/x1408);

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x1449 = 432U;
	int8_t x1450 = 1;
	volatile int64_t x1451 = INT64_MIN;
	int32_t x1452 = INT32_MAX;
	volatile int64_t t26 = -7020561476048156LL;

	t26 = (((x1449>>x1450)|x1451)/x1452);

	if (t26 != -4294967297LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1501 = 873;
	static uint8_t x1502 = 5U;
	static uint64_t x1503 = 8153549531LLU;
	int32_t x1504 = -1;
	static uint64_t t27 = 4335584LLU;

	t27 = (((x1501>>x1502)|x1503)/x1504);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x1637 = UINT32_MAX;
	uint8_t x1638 = 9U;
	volatile int64_t x1639 = INT64_MIN;
	volatile int64_t t28 = -21032700097LL;

	t28 = (((x1637>>x1638)|x1639)/x1640);

	if (t28 != 72057594037862400LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x1669 = 12878LLU;
	static int8_t x1670 = 21;
	volatile int16_t x1671 = INT16_MIN;
	volatile uint16_t x1672 = UINT16_MAX;
	volatile uint64_t t29 = 7004954LLU;

	t29 = (((x1669>>x1670)|x1671)/x1672);

	if (t29 != 281479271743488LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x1706 = 30LLU;
	static int64_t x1707 = 27LL;
	int32_t x1708 = INT32_MAX;
	int64_t t30 = -95101104682630LL;

	t30 = (((x1705>>x1706)|x1707)/x1708);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x1713 = 2U;
	int32_t x1714 = 16;
	static int8_t x1715 = INT8_MIN;
	int32_t x1716 = INT32_MIN;
	int32_t t31 = 1;

	t31 = (((x1713>>x1714)|x1715)/x1716);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1721 = 14;
	uint8_t x1722 = 23U;
	int32_t x1723 = -1;
	static uint32_t t32 = 2201269U;

	t32 = (((x1721>>x1722)|x1723)/x1724);

	if (t32 != 3468U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1797 = 7LL;
	uint32_t x1798 = 3U;
	static uint64_t x1799 = 1455334728261LLU;
	uint64_t t33 = 280846461662116923LLU;

	t33 = (((x1797>>x1798)|x1799)/x1800);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x1889 = 1U;
	uint16_t x1891 = UINT16_MAX;
	static volatile int32_t t34 = -830550;

	t34 = (((x1889>>x1890)|x1891)/x1892);

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x1961 = 1316967345416LLU;
	uint16_t x1962 = 27U;
	uint64_t x1963 = 1671672323LLU;
	volatile uint64_t t35 = 2809269765016LLU;

	t35 = (((x1961>>x1962)|x1963)/x1964);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x2081 = 8750;
	uint16_t x2082 = 0U;
	static int16_t x2083 = -1;
	volatile int32_t t36 = -215;

	t36 = (((x2081>>x2082)|x2083)/x2084);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x2089 = 25504U;
	int32_t x2091 = -1;
	int16_t x2092 = -1;
	volatile uint32_t t37 = 1359446018U;

	t37 = (((x2089>>x2090)|x2091)/x2092);

	if (t37 != 1U) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x2157 = 8U;
	uint8_t x2158 = 1U;
	volatile int64_t x2159 = INT64_MIN;
	static uint16_t x2160 = UINT16_MAX;
	static volatile int64_t t38 = -3LL;

	t38 = (((x2157>>x2158)|x2159)/x2160);

	if (t38 != -140739635871744LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x2230 = 5U;
	uint8_t x2231 = 122U;
	static int64_t x2232 = INT64_MAX;
	volatile int64_t t39 = 1773584876LL;

	t39 = (((x2229>>x2230)|x2231)/x2232);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x2234 = 11U;
	int64_t x2235 = 12864275LL;
	int32_t x2236 = INT32_MIN;
	int64_t t40 = 334976663LL;

	t40 = (((x2233>>x2234)|x2235)/x2236);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x2241 = 3;
	int64_t t41 = 37924289LL;

	t41 = (((x2241>>x2242)|x2243)/x2244);

	if (t41 != 4294967296LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x2285 = 1U;
	static uint8_t x2286 = 3U;
	int16_t x2287 = INT16_MAX;
	static uint16_t x2288 = 463U;

	t42 = (((x2285>>x2286)|x2287)/x2288);

	if (t42 != 70) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x2302 = 0U;
	uint64_t x2303 = 52923LLU;
	int32_t x2304 = -22;

	t43 = (((x2301>>x2302)|x2303)/x2304);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x2329 = 4662;
	int16_t x2330 = 23;
	int32_t x2331 = INT32_MIN;
	uint32_t x2332 = 1234474959U;
	volatile uint32_t t44 = 14290U;

	t44 = (((x2329>>x2330)|x2331)/x2332);

	if (t44 != 1U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x2357 = INT8_MAX;
	int16_t x2358 = 0;
	volatile int32_t x2359 = INT32_MAX;
	volatile uint16_t x2360 = UINT16_MAX;
	volatile int32_t t45 = -896;

	t45 = (((x2357>>x2358)|x2359)/x2360);

	if (t45 != 32768) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x2385 = 1;
	uint32_t x2386 = 5U;
	int8_t x2388 = 12;
	static volatile uint64_t t46 = 110067482LLU;

	t46 = (((x2385>>x2386)|x2387)/x2388);

	if (t46 != 1537228672809129301LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x2521 = INT16_MAX;
	static uint64_t x2524 = 149790632478LLU;
	static uint64_t t47 = 4LLU;

	t47 = (((x2521>>x2522)|x2523)/x2524);

	if (t47 != 123150184LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x2537 = 12U;
	static uint8_t x2538 = 1U;
	uint8_t x2539 = UINT8_MAX;
	int16_t x2540 = 50;
	int32_t t48 = -624250;

	t48 = (((x2537>>x2538)|x2539)/x2540);

	if (t48 != 5) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x2677 = 0U;
	static int8_t x2678 = 23;
	int64_t x2679 = INT64_MIN;
	static uint8_t x2680 = 2U;
	int64_t t49 = 15763319473LL;

	t49 = (((x2677>>x2678)|x2679)/x2680);

	if (t49 != -4611686018427387904LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x2702 = 6;
	int64_t x2703 = -1148960995397547LL;
	static volatile int16_t x2704 = -1;
	int64_t t50 = 2146873767LL;

	t50 = (((x2701>>x2702)|x2703)/x2704);

	if (t50 != 1LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x2817 = 60682U;
	uint8_t x2818 = 1U;
	int8_t x2819 = 2;
	volatile int16_t x2820 = 596;
	static volatile uint32_t t51 = 4U;

	t51 = (((x2817>>x2818)|x2819)/x2820);

	if (t51 != 50U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x2933 = 1;
	uint8_t x2934 = 1U;
	uint8_t x2935 = 63U;
	static int64_t x2936 = INT64_MIN;

	t52 = (((x2933>>x2934)|x2935)/x2936);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x2965 = 64840539354LLU;
	static uint32_t x2966 = 44U;
	int32_t x2968 = INT32_MIN;

	t53 = (((x2965>>x2966)|x2967)/x2968);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x2993 = INT16_MAX;
	uint8_t x2994 = 1U;
	int32_t x2995 = INT32_MAX;
	int32_t t54 = -20462;

	t54 = (((x2993>>x2994)|x2995)/x2996);

	if (t54 != 11126858) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x3014 = 0U;
	static uint32_t x3015 = 22U;
	volatile uint16_t x3016 = 41U;
	static volatile uint32_t t55 = 16U;

	t55 = (((x3013>>x3014)|x3015)/x3016);

	if (t55 != 2077722U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x3029 = INT8_MAX;
	volatile int64_t t56 = 63092742LL;

	t56 = (((x3029>>x3030)|x3031)/x3032);

	if (t56 != 281474976710655LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x3057 = 334;
	int16_t x3059 = INT16_MIN;

	t57 = (((x3057>>x3058)|x3059)/x3060);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x3113 = 117910U;
	volatile uint8_t x3114 = 1U;
	volatile int32_t x3115 = INT32_MAX;
	uint64_t x3116 = UINT64_MAX;
	static uint64_t t58 = 26050210155526469LLU;

	t58 = (((x3113>>x3114)|x3115)/x3116);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x3153 = 363987793LLU;
	uint32_t x3155 = UINT32_MAX;
	uint64_t t59 = 6165881637098284LLU;

	t59 = (((x3153>>x3154)|x3155)/x3156);

	if (t59 != 4294967295LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x3165 = UINT32_MAX;
	volatile int8_t x3166 = 0;
	uint64_t x3167 = UINT64_MAX;
	static uint64_t t60 = 637292575LLU;

	t60 = (((x3165>>x3166)|x3167)/x3168);

	if (t60 != 1LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x3169 = 77U;
	static uint8_t x3170 = 2U;
	int32_t x3171 = -10489;
	int16_t x3172 = -112;
	int32_t t61 = 1835;

	t61 = (((x3169>>x3170)|x3171)/x3172);

	if (t61 != 93) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x3193 = 80U;
	uint8_t x3194 = 15U;
	uint32_t x3195 = UINT32_MAX;
	uint8_t x3196 = 34U;
	static uint32_t t62 = 2U;

	t62 = (((x3193>>x3194)|x3195)/x3196);

	if (t62 != 126322567U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x3201 = INT16_MAX;
	uint8_t x3202 = 17U;
	volatile int16_t x3203 = -1;
	volatile int32_t x3204 = -1;

	t63 = (((x3201>>x3202)|x3203)/x3204);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int32_t x3233 = INT32_MAX;
	uint64_t x3234 = 3LLU;
	static int64_t x3235 = 54LL;
	static uint32_t x3236 = 63659U;
	static volatile int64_t t64 = 0LL;

	t64 = (((x3233>>x3234)|x3235)/x3236);

	if (t64 != 4216LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x3293 = 884LL;
	uint8_t x3294 = 16U;
	int32_t x3295 = -548;
	static uint64_t x3296 = 11985508159LLU;

	t65 = (((x3293>>x3294)|x3295)/x3296);

	if (t65 != 1539087356LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x3373 = UINT32_MAX;
	int8_t x3374 = 10;
	int8_t x3376 = INT8_MIN;
	uint64_t t66 = 28LLU;

	t66 = (((x3373>>x3374)|x3375)/x3376);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x3438 = 6U;
	volatile int64_t x3439 = -1LL;
	static int16_t x3440 = INT16_MAX;
	static int64_t t67 = 206643LL;

	t67 = (((x3437>>x3438)|x3439)/x3440);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x3457 = 3337355236599474107LL;
	volatile uint64_t x3458 = 13LLU;
	uint64_t x3459 = UINT64_MAX;
	volatile int8_t x3460 = INT8_MIN;

	t68 = (((x3457>>x3458)|x3459)/x3460);

	if (t68 != 1LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x3474 = 0;
	int64_t x3475 = -781LL;
	int16_t x3476 = INT16_MIN;

	t69 = (((x3473>>x3474)|x3475)/x3476);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x3533 = UINT8_MAX;
	uint8_t x3536 = UINT8_MAX;
	volatile int64_t t70 = 49260223875397067LL;

	t70 = (((x3533>>x3534)|x3535)/x3536);

	if (t70 != -36170086419038335LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x3545 = 26U;
	int8_t x3546 = 17;
	volatile int64_t x3547 = -511402LL;
	static uint32_t x3548 = UINT32_MAX;
	volatile int64_t t71 = 1857456442LL;

	t71 = (((x3545>>x3546)|x3547)/x3548);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x3609 = 226U;
	static uint8_t x3610 = 30U;
	uint16_t x3611 = 24U;
	int8_t x3612 = -15;

	t72 = (((x3609>>x3610)|x3611)/x3612);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x3713 = INT64_MAX;
	int64_t x3714 = 1LL;
	int8_t x3715 = INT8_MIN;
	int64_t t73 = 336773LL;

	t73 = (((x3713>>x3714)|x3715)/x3716);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x3809 = UINT8_MAX;
	volatile uint32_t x3810 = 10U;
	volatile int16_t x3811 = -7;
	int64_t x3812 = INT64_MAX;
	int64_t t74 = -13997948481704LL;

	t74 = (((x3809>>x3810)|x3811)/x3812);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x3902 = 0U;
	int8_t x3903 = INT8_MAX;
	int32_t x3904 = -1031256;
	volatile uint64_t t75 = 16471896274104441LLU;

	t75 = (((x3901>>x3902)|x3903)/x3904);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x4049 = 3U;
	uint32_t x4050 = 1U;
	static int64_t x4051 = -1LL;
	int16_t x4052 = INT16_MIN;
	int64_t t76 = 1212824968228LL;

	t76 = (((x4049>>x4050)|x4051)/x4052);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x4145 = UINT64_MAX;
	int8_t x4146 = 0;
	uint16_t x4148 = UINT16_MAX;
	static volatile uint64_t t77 = 1232LLU;

	t77 = (((x4145>>x4146)|x4147)/x4148);

	if (t77 != 281479271743489LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x4182 = 7U;
	uint32_t x4183 = UINT32_MAX;
	static int16_t x4184 = -650;
	volatile uint64_t t78 = 1031844LLU;

	t78 = (((x4181>>x4182)|x4183)/x4184);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x4340 = UINT64_MAX;
	static uint64_t t79 = 3021992566440042901LLU;

	t79 = (((x4337>>x4338)|x4339)/x4340);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint64_t x4667 = 22281031LLU;
	int16_t x4668 = 3;
	uint64_t t80 = 7306085643671247848LLU;

	t80 = (((x4665>>x4666)|x4667)/x4668);

	if (t80 != 7427010LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x4717 = UINT32_MAX;
	uint16_t x4718 = 1U;
	uint16_t x4719 = 2U;
	volatile uint32_t x4720 = 10052U;
	volatile uint32_t t81 = 59U;

	t81 = (((x4717>>x4718)|x4719)/x4720);

	if (t81 != 213637U) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x4985 = 955107218U;
	int8_t x4986 = 0;
	int32_t x4988 = INT32_MAX;
	uint32_t t82 = 115513015U;

	t82 = (((x4985>>x4986)|x4987)/x4988);

	if (t82 != 1U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x4989 = 0;
	int32_t x4990 = 1;
	uint64_t x4991 = 1264362920219LLU;
	uint64_t t83 = 178234LLU;

	t83 = (((x4989>>x4990)|x4991)/x4992);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x4993 = 96U;
	volatile int8_t x4994 = 1;
	int16_t x4995 = INT16_MAX;
	int8_t x4996 = -26;
	int32_t t84 = 3;

	t84 = (((x4993>>x4994)|x4995)/x4996);

	if (t84 != -1260) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x5042 = 2U;

	t85 = (((x5041>>x5042)|x5043)/x5044);

	if (t85 != 131076U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x5145 = 89U;
	uint8_t x5146 = 14U;
	int64_t x5147 = -1LL;
	int8_t x5148 = INT8_MIN;
	volatile int64_t t86 = -1563670976227431810LL;

	t86 = (((x5145>>x5146)|x5147)/x5148);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x5257 = 15U;
	static int8_t x5258 = 0;
	static int8_t x5259 = 1;
	int64_t x5260 = INT64_MIN;
	volatile int64_t t87 = -1LL;

	t87 = (((x5257>>x5258)|x5259)/x5260);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x5309 = 174U;
	int8_t x5311 = INT8_MIN;
	int32_t t88 = -119449292;

	t88 = (((x5309>>x5310)|x5311)/x5312);

	if (t88 != 2) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x5370 = 19;
	uint8_t x5371 = 87U;
	int64_t t89 = -524937505387LL;

	t89 = (((x5369>>x5370)|x5371)/x5372);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x5442 = 1LLU;

	t90 = (((x5441>>x5442)|x5443)/x5444);

	if (t90 != 17) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x5457 = 1;
	uint8_t x5458 = 22U;
	int8_t x5459 = -1;
	static int8_t x5460 = 11;
	int32_t t91 = 12571994;

	t91 = (((x5457>>x5458)|x5459)/x5460);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x5573 = 259561702370LL;
	static uint32_t x5576 = 24U;
	uint64_t t92 = 13302986LLU;

	t92 = (((x5573>>x5574)|x5575)/x5576);

	if (t92 != 768614336404564650LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x5729 = 2316420860951747171LL;
	int32_t x5731 = -1763;
	volatile int64_t t93 = -15LL;

	t93 = (((x5729>>x5730)|x5731)/x5732);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x5745 = 3U;
	int8_t x5746 = 1;
	uint16_t x5747 = 35U;
	static int8_t x5748 = 3;
	int32_t t94 = 6;

	t94 = (((x5745>>x5746)|x5747)/x5748);

	if (t94 != 11) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x5797 = 0;
	uint32_t x5798 = 0U;
	uint32_t x5799 = UINT32_MAX;
	static uint16_t x5800 = 5584U;
	uint32_t t95 = 170567U;

	t95 = (((x5797>>x5798)|x5799)/x5800);

	if (t95 != 769156U) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x5809 = 5423304633066LL;
	int8_t x5811 = -27;
	volatile int64_t x5812 = INT64_MIN;
	volatile int64_t t96 = 489LL;

	t96 = (((x5809>>x5810)|x5811)/x5812);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x5849 = 46208LL;
	int8_t x5851 = -1;
	volatile int64_t x5852 = INT64_MAX;
	volatile int64_t t97 = 1260154367904326LL;

	t97 = (((x5849>>x5850)|x5851)/x5852);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x5853 = UINT8_MAX;
	static volatile int8_t x5854 = 12;
	int8_t x5855 = INT8_MIN;
	int32_t t98 = -489;

	t98 = (((x5853>>x5854)|x5855)/x5856);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x5989 = 3249LL;
	int32_t x5992 = -653;
	volatile int64_t t99 = 2300538028LL;

	t99 = (((x5989>>x5990)|x5991)/x5992);

	if (t99 != -5LL) { NG(); } else { ; }
	
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

