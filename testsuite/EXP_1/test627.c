
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

uint16_t x10 = 703U;
int8_t x11 = 10;
int16_t x84 = 1;
static uint32_t x141 = UINT32_MAX;
int32_t x142 = INT32_MIN;
int8_t x143 = INT8_MIN;
static uint8_t x144 = 5U;
volatile int8_t x163 = -25;
int64_t t4 = -34165215LL;
static int64_t x181 = -1LL;
static volatile int8_t x220 = 5;
int64_t x262 = INT64_MAX;
uint64_t x267 = 57764716LLU;
int8_t x324 = 1;
volatile uint16_t x414 = 436U;
int16_t x416 = 13;
int32_t t12 = 120627;
int8_t x431 = -28;
static volatile uint16_t x442 = 34U;
int16_t x473 = -1;
volatile int16_t x509 = INT16_MIN;
int16_t x510 = INT16_MAX;
static volatile uint64_t x512 = 0LLU;
int32_t t17 = 99997;
int64_t x923 = 443708958839117LL;
volatile int32_t x955 = -4170;
uint8_t x1000 = 1U;
int16_t x1001 = INT16_MAX;
static volatile int64_t x1002 = INT64_MAX;
int16_t x1017 = -1;
volatile int8_t x1020 = 0;
int64_t t27 = -134207048567057LL;
int16_t x1023 = 0;
uint16_t x1036 = 1U;
int32_t t29 = 11608313;
static int32_t x1115 = INT32_MIN;
static int16_t x1146 = INT16_MAX;
uint16_t x1148 = 0U;
static int32_t x1237 = -16298;
static int8_t x1241 = INT8_MIN;
uint16_t x1258 = UINT16_MAX;
uint32_t x1259 = UINT32_MAX;
static volatile uint32_t t39 = 211253558U;
static uint8_t x1265 = 8U;
uint16_t x1268 = 45U;
uint16_t x1378 = 206U;
int16_t x1414 = -1;
volatile int32_t t43 = -889674;
uint32_t x1462 = UINT32_MAX;
int16_t x1463 = -11981;
volatile uint32_t x1656 = 39U;
volatile int64_t t48 = 2120195550489LL;
int32_t x1673 = INT32_MAX;
uint16_t x1675 = 1U;
static uint32_t x1729 = 4180U;
uint16_t x1732 = 19U;
static uint16_t x1746 = UINT16_MAX;
int16_t x1771 = INT16_MIN;
volatile int64_t t53 = -1008253183621385723LL;
static volatile int64_t t59 = 304577LL;
int8_t x2084 = 0;
volatile int32_t t61 = -2480;
static uint16_t x2120 = 28U;
static uint8_t x2134 = UINT8_MAX;
int64_t x2135 = INT64_MIN;
static int8_t x2150 = -58;
uint64_t x2194 = 28517511LLU;
volatile int32_t x2389 = 102627;
static uint32_t x2434 = 450168391U;
int32_t x2435 = INT32_MIN;
static uint64_t x2557 = 1224273300538891LLU;
uint64_t x2633 = 24LLU;
static volatile int64_t x2635 = INT64_MIN;
int32_t x2703 = 127034773;
int32_t x2743 = -1;
static int16_t x2750 = INT16_MAX;
uint64_t x2858 = UINT64_MAX;
int8_t x2859 = INT8_MIN;
volatile uint64_t t79 = 437066664069413659LLU;
int16_t x2950 = -1;
static volatile uint64_t x2951 = 10LLU;
int32_t x2966 = INT32_MIN;
int32_t t85 = 502;
int64_t x3047 = 65470857514LL;
uint8_t x3048 = 14U;
int32_t x3093 = INT32_MIN;
uint8_t x3247 = 2U;
static volatile uint64_t t91 = 25604LLU;
uint32_t x3410 = 7078252U;
static int32_t x3429 = INT32_MIN;
static int64_t x3510 = -397LL;
uint32_t x3547 = 454588786U;
uint8_t x3564 = 5U;
uint8_t x3686 = UINT8_MAX;
volatile int64_t x3731 = INT64_MIN;
volatile uint16_t x3732 = 19U;
int8_t x3763 = INT8_MIN;
int8_t x3764 = 1;
int64_t t106 = -13494889LL;
int32_t x3818 = -10691;
uint64_t t107 = 36LLU;
uint8_t x3829 = 22U;
volatile uint64_t x3869 = 1225157LLU;
static int16_t x3961 = -1;
volatile int64_t x3963 = -1LL;
volatile uint8_t x3964 = 41U;
volatile int64_t t113 = 396789020LL;
uint8_t x3980 = 2U;
volatile int32_t t115 = -463;
volatile int8_t x4105 = INT8_MAX;
volatile int64_t x4106 = INT64_MIN;
volatile int64_t t119 = -4300904711570268LL;
volatile uint32_t x4221 = 125782U;
volatile int8_t x4223 = 3;
int8_t x4267 = INT8_MIN;
int32_t x4289 = -1798;
uint16_t x4351 = 8921U;
uint32_t x4352 = 1U;
int32_t t127 = -1;
volatile uint64_t x4441 = UINT64_MAX;
static int16_t x4442 = INT16_MAX;
static uint16_t x4512 = 15U;
volatile uint64_t t131 = 7LLU;
static volatile int64_t x4542 = -300738442LL;
uint32_t x4548 = 4U;
int16_t x4553 = -13;
int8_t x4708 = 6;
static uint16_t x4827 = UINT16_MAX;
static int8_t x4855 = INT8_MIN;
volatile int32_t x4942 = INT32_MIN;
uint64_t t145 = 14678LLU;
volatile int16_t x5002 = INT16_MIN;
int64_t x5092 = 24LL;
uint32_t x5106 = UINT32_MAX;
volatile uint64_t x5107 = 11987LLU;
volatile uint64_t x5171 = 72310969692692LLU;
uint64_t t151 = 206878665LLU;
uint8_t x5182 = UINT8_MAX;
volatile uint64_t x5216 = 0LLU;
volatile int64_t x5221 = -1LL;
int16_t x5239 = -3;
static int64_t t160 = 19193333594LL;
static uint32_t t161 = 5U;
int16_t x5337 = 245;
int16_t x5339 = INT16_MIN;
uint8_t x5444 = 8U;
uint8_t x5504 = 7U;
int64_t t164 = 279LL;
int64_t x5545 = -308903931631308LL;
int8_t x5547 = -1;
volatile int64_t t166 = 92910LL;
static int32_t x5578 = -562;
static uint32_t t169 = 30580U;
volatile int64_t x5625 = -1LL;
static uint64_t x5626 = 13278152LLU;
static int32_t x5642 = 1;
volatile uint8_t x5672 = 12U;
int32_t x5929 = -1;
static int8_t x5931 = INT8_MIN;
volatile uint64_t x6039 = UINT64_MAX;
int32_t x6053 = 86;
uint64_t t179 = 182124834418416032LLU;
volatile uint32_t t181 = 18215U;
int8_t x6349 = 45;
uint8_t x6405 = 3U;
volatile uint64_t t186 = 52711926931848LLU;
volatile uint8_t x6448 = 0U;
int64_t t187 = 812LL;
static int64_t t188 = -115822LL;
uint64_t x6515 = 129851394102585233LLU;
static uint32_t x6526 = 47428245U;
int32_t x6620 = 1;
volatile int8_t x6633 = INT8_MIN;
volatile int16_t x6644 = 0;
volatile int32_t x6690 = INT32_MAX;
uint64_t x6694 = UINT64_MAX;
uint32_t x6697 = UINT32_MAX;
static volatile uint64_t t198 = 6317LLU;
static int8_t x6798 = 40;


void f0(void) {
    	int32_t x9 = INT32_MAX;
	static volatile int32_t x12 = 5;
	volatile int32_t t0 = -2200;

    t0 = (((x9/x10)*x11)>>x12);

    if (t0 != 954606) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint16_t x61 = 10472U;
	int8_t x62 = INT8_MIN;
	volatile uint32_t x63 = 9U;
	uint16_t x64 = 5U;
	static uint32_t t1 = 166U;

    t1 = (((x61/x62)*x63)>>x64);

    if (t1 != 134217705U) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x81 = -1;
	uint16_t x82 = 27062U;
	int64_t x83 = INT64_MIN;
	int64_t t2 = -98LL;

    t2 = (((x81/x82)*x83)>>x84);

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t t3 = 1813U;

    t3 = (((x141/x142)*x143)>>x144);

    if (t3 != 134217724U) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int64_t x161 = INT64_MIN;
	int32_t x162 = INT32_MAX;
	uint16_t x164 = 2U;

    t4 = (((x161/x162)*x163)>>x164);

    if (t4 != 26843545612LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint64_t x182 = 6383717778638357LLU;
	static volatile int8_t x183 = INT8_MIN;
	volatile int8_t x184 = 1;
	static volatile uint64_t t5 = 296LLU;

    t5 = (((x181/x182)*x183)>>x184);

    if (t5 != 9223372036854590912LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x217 = 33;
	int64_t x218 = INT64_MIN;
	uint16_t x219 = 2060U;
	static volatile int64_t t6 = -242LL;

    t6 = (((x217/x218)*x219)>>x220);

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x233 = UINT16_MAX;
	int8_t x234 = -7;
	static int16_t x235 = INT16_MIN;
	volatile uint8_t x236 = 3U;
	volatile int32_t t7 = 7;

    t7 = (((x233/x234)*x235)>>x236);

    if (t7 != 38346752) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x261 = INT32_MAX;
	int64_t x263 = INT64_MIN;
	volatile uint8_t x264 = 53U;
	volatile int64_t t8 = -2175740413086574108LL;

    t8 = (((x261/x262)*x263)>>x264);

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x265 = 38LL;
	int64_t x266 = -1LL;
	uint8_t x268 = 0U;
	uint64_t t9 = 774143003018LLU;

    t9 = (((x265/x266)*x267)>>x268);

    if (t9 != 18446744071514492408LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint32_t x277 = UINT32_MAX;
	int32_t x278 = INT32_MAX;
	volatile int32_t x279 = 1421887;
	volatile uint8_t x280 = 10U;
	static uint32_t t10 = 3U;

    t10 = (((x277/x278)*x279)>>x280);

    if (t10 != 2777U) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x321 = INT8_MIN;
	volatile uint32_t x322 = 352004698U;
	volatile int8_t x323 = INT8_MIN;
	volatile uint32_t t11 = 369763U;

    t11 = (((x321/x322)*x323)>>x324);

    if (t11 != 2147482880U) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x413 = INT8_MAX;
	int16_t x415 = -11;

    t12 = (((x413/x414)*x415)>>x416);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x429 = 1145U;
	int16_t x430 = INT16_MAX;
	int16_t x432 = 1;
	static volatile uint32_t t13 = 184760U;

    t13 = (((x429/x430)*x431)>>x432);

    if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x441 = 19U;
	int16_t x443 = INT16_MIN;
	int32_t x444 = 7;
	volatile uint32_t t14 = 8521181U;

    t14 = (((x441/x442)*x443)>>x444);

    if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x474 = -1;
	volatile int16_t x475 = 1;
	int8_t x476 = 2;
	int32_t t15 = 24693285;

    t15 = (((x473/x474)*x475)>>x476);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x511 = -514530432405917769LL;
	int64_t t16 = 114163080481LL;

    t16 = (((x509/x510)*x511)>>x512);

    if (t16 != 514530432405917769LL) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x565 = 6;
	volatile int32_t x566 = -6054964;
	int32_t x567 = INT32_MIN;
	int16_t x568 = 10;

    t17 = (((x565/x566)*x567)>>x568);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x605 = INT32_MAX;
	int64_t x606 = INT64_MAX;
	volatile int64_t x607 = -1LL;
	int8_t x608 = 0;
	volatile int64_t t18 = 1LL;

    t18 = (((x605/x606)*x607)>>x608);

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x869 = INT16_MIN;
	uint8_t x870 = 9U;
	static volatile uint64_t x871 = UINT64_MAX;
	int8_t x872 = 3;
	volatile uint64_t t19 = 5982LLU;

    t19 = (((x869/x870)*x871)>>x872);

    if (t19 != 455LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x881 = -23428427;
	int64_t x882 = 3640430856198556LL;
	int32_t x883 = INT32_MIN;
	uint8_t x884 = 0U;
	static int64_t t20 = -3768LL;

    t20 = (((x881/x882)*x883)>>x884);

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x885 = -1301840161860LL;
	static uint8_t x886 = UINT8_MAX;
	int32_t x887 = -1;
	int32_t x888 = 22;
	int64_t t21 = 183691224847LL;

    t21 = (((x885/x886)*x887)>>x888);

    if (t21 != 1217LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x921 = INT16_MAX;
	int16_t x922 = INT16_MIN;
	int8_t x924 = 25;
	int64_t t22 = -4269LL;

    t22 = (((x921/x922)*x923)>>x924);

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x953 = 2320U;
	uint64_t x954 = 469024313787735469LLU;
	uint8_t x956 = 2U;
	uint64_t t23 = 738465033895896685LLU;

    t23 = (((x953/x954)*x955)>>x956);

    if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint32_t x993 = 1U;
	int32_t x994 = 2463;
	int64_t x995 = -52631280405266LL;
	static int8_t x996 = 25;
	int64_t t24 = 3709075322311154LL;

    t24 = (((x993/x994)*x995)>>x996);

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile uint64_t x997 = 1862332821LLU;
	static int8_t x998 = INT8_MIN;
	int16_t x999 = 4;
	static volatile uint64_t t25 = 909598LLU;

    t25 = (((x997/x998)*x999)>>x1000);

    if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x1003 = -9;
	static uint8_t x1004 = 34U;
	volatile int64_t t26 = 1050056830666077LL;

    t26 = (((x1001/x1002)*x1003)>>x1004);

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x1018 = INT32_MIN;
	int64_t x1019 = 81836LL;

    t27 = (((x1017/x1018)*x1019)>>x1020);

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x1021 = 87U;
	uint64_t x1022 = 33680896LLU;
	uint8_t x1024 = 3U;
	static volatile uint64_t t28 = 14LLU;

    t28 = (((x1021/x1022)*x1023)>>x1024);

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int32_t x1033 = -1;
	volatile int16_t x1034 = INT16_MIN;
	static volatile int16_t x1035 = -1;

    t29 = (((x1033/x1034)*x1035)>>x1036);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x1101 = -59;
	volatile uint8_t x1102 = 2U;
	static int32_t x1103 = -1;
	uint32_t x1104 = 20U;
	static volatile int32_t t30 = -7386653;

    t30 = (((x1101/x1102)*x1103)>>x1104);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x1113 = 1640130776442241LLU;
	static int8_t x1114 = INT8_MIN;
	volatile uint16_t x1116 = 0U;
	static uint64_t t31 = 292647839469251660LLU;

    t31 = (((x1113/x1114)*x1115)>>x1116);

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x1137 = 145;
	volatile int16_t x1138 = INT16_MIN;
	uint16_t x1139 = 15948U;
	int8_t x1140 = 20;
	int32_t t32 = -10701720;

    t32 = (((x1137/x1138)*x1139)>>x1140);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint16_t x1145 = UINT16_MAX;
	volatile uint32_t x1147 = UINT32_MAX;
	volatile uint32_t t33 = 1761689700U;

    t33 = (((x1145/x1146)*x1147)>>x1148);

    if (t33 != 4294967294U) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x1169 = INT8_MIN;
	uint8_t x1170 = 12U;
	int32_t x1171 = -1;
	static int32_t x1172 = 1;
	int32_t t34 = 805737;

    t34 = (((x1169/x1170)*x1171)>>x1172);

    if (t34 != 5) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x1213 = INT64_MIN;
	int64_t x1214 = INT64_MIN;
	int16_t x1215 = 2;
	static uint8_t x1216 = 6U;
	static volatile int64_t t35 = 25214068LL;

    t35 = (((x1213/x1214)*x1215)>>x1216);

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint8_t x1238 = 56U;
	uint8_t x1239 = 0U;
	int16_t x1240 = 2;
	int32_t t36 = 13;

    t36 = (((x1237/x1238)*x1239)>>x1240);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x1242 = INT32_MIN;
	uint8_t x1243 = 54U;
	volatile uint64_t x1244 = 1LLU;
	static int32_t t37 = -1231647;

    t37 = (((x1241/x1242)*x1243)>>x1244);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x1249 = 163371U;
	static int64_t x1250 = INT64_MIN;
	uint8_t x1251 = 29U;
	int8_t x1252 = 5;
	volatile int64_t t38 = 1497088227967751748LL;

    t38 = (((x1249/x1250)*x1251)>>x1252);

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x1257 = INT16_MIN;
	volatile uint8_t x1260 = 0U;

    t39 = (((x1257/x1258)*x1259)>>x1260);

    if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint8_t x1266 = 10U;
	static int64_t x1267 = INT64_MIN;
	int64_t t40 = 3537LL;

    t40 = (((x1265/x1266)*x1267)>>x1268);

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x1337 = -94;
	static uint32_t x1338 = 47607404U;
	int16_t x1339 = INT16_MIN;
	int32_t x1340 = 0;
	uint32_t t41 = 528363U;

    t41 = (((x1337/x1338)*x1339)>>x1340);

    if (t41 != 4292018176U) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint64_t x1377 = 25LLU;
	int16_t x1379 = -1;
	static uint16_t x1380 = 3U;
	volatile uint64_t t42 = 91LLU;

    t42 = (((x1377/x1378)*x1379)>>x1380);

    if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x1413 = INT8_MIN;
	static int8_t x1415 = INT8_MAX;
	uint8_t x1416 = 24U;

    t43 = (((x1413/x1414)*x1415)>>x1416);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x1461 = -1LL;
	int16_t x1464 = 27;
	int64_t t44 = 1330996837LL;

    t44 = (((x1461/x1462)*x1463)>>x1464);

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x1469 = INT64_MAX;
	uint8_t x1470 = UINT8_MAX;
	volatile int8_t x1471 = INT8_MAX;
	uint8_t x1472 = 10U;
	static volatile int64_t t45 = 377777566356216LL;

    t45 = (((x1469/x1470)*x1471)>>x1472);

    if (t45 != 4485938452361199LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x1497 = 0U;
	int32_t x1498 = 2960;
	volatile int8_t x1499 = -1;
	int8_t x1500 = 0;
	volatile uint32_t t46 = 451418380U;

    t46 = (((x1497/x1498)*x1499)>>x1500);

    if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x1553 = 122089523179LL;
	uint16_t x1554 = 500U;
	int32_t x1555 = INT32_MAX;
	uint8_t x1556 = 3U;
	volatile int64_t t47 = -7189659298068LL;

    t47 = (((x1553/x1554)*x1555)>>x1556);

    if (t47 != 65546313528132595LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x1653 = -48;
	int8_t x1654 = -1;
	int64_t x1655 = 0LL;

    t48 = (((x1653/x1654)*x1655)>>x1656);

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x1674 = 1;
	volatile int16_t x1676 = 2;
	volatile int32_t t49 = 2;

    t49 = (((x1673/x1674)*x1675)>>x1676);

    if (t49 != 536870911) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x1730 = -3;
	int16_t x1731 = INT16_MIN;
	static volatile uint32_t t50 = 128992U;

    t50 = (((x1729/x1730)*x1731)>>x1732);

    if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x1741 = UINT32_MAX;
	uint64_t x1742 = UINT64_MAX;
	uint64_t x1743 = 3210309460514LLU;
	static uint32_t x1744 = 50U;
	static uint64_t t51 = 644017846704LLU;

    t51 = (((x1741/x1742)*x1743)>>x1744);

    if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x1745 = -1;
	uint32_t x1747 = 13148132U;
	int16_t x1748 = 8;
	uint32_t t52 = 503892129U;

    t52 = (((x1745/x1746)*x1747)>>x1748);

    if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x1769 = INT16_MIN;
	int64_t x1770 = 1407136854858202LL;
	static int64_t x1772 = 0LL;

    t53 = (((x1769/x1770)*x1771)>>x1772);

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x1773 = UINT32_MAX;
	static volatile uint16_t x1774 = 1U;
	int64_t x1775 = 1424LL;
	static int16_t x1776 = 61;
	volatile int64_t t54 = 224LL;

    t54 = (((x1773/x1774)*x1775)>>x1776);

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x1817 = INT32_MIN;
	uint64_t x1818 = 6LLU;
	static volatile int64_t x1819 = INT64_MIN;
	int16_t x1820 = 8;
	volatile uint64_t t55 = 11318808960LLU;

    t55 = (((x1817/x1818)*x1819)>>x1820);

    if (t55 != 36028797018963968LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x1941 = -33;
	volatile int16_t x1942 = 3333;
	int8_t x1943 = INT8_MIN;
	volatile int16_t x1944 = 24;
	volatile int32_t t56 = -12236770;

    t56 = (((x1941/x1942)*x1943)>>x1944);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x1965 = INT8_MIN;
	volatile int64_t x1966 = -15748LL;
	volatile int64_t x1967 = 850652850940LL;
	int16_t x1968 = 3;
	static int64_t t57 = 120LL;

    t57 = (((x1965/x1966)*x1967)>>x1968);

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint8_t x2021 = 3U;
	uint16_t x2022 = 3717U;
	uint64_t x2023 = UINT64_MAX;
	static int8_t x2024 = 25;
	volatile uint64_t t58 = 492941666206LLU;

    t58 = (((x2021/x2022)*x2023)>>x2024);

    if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	static int64_t x2033 = 8549720768511LL;
	int64_t x2034 = 269182317209312633LL;
	volatile uint8_t x2035 = 49U;
	uint8_t x2036 = 1U;

    t59 = (((x2033/x2034)*x2035)>>x2036);

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint16_t x2081 = 0U;
	uint16_t x2082 = UINT16_MAX;
	int8_t x2083 = -1;
	volatile int32_t t60 = 3;

    t60 = (((x2081/x2082)*x2083)>>x2084);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x2113 = 16;
	int32_t x2114 = -43254605;
	static int8_t x2115 = INT8_MAX;
	int8_t x2116 = 3;

    t61 = (((x2113/x2114)*x2115)>>x2116);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x2117 = 46U;
	static int8_t x2118 = INT8_MAX;
	int16_t x2119 = INT16_MIN;
	static int32_t t62 = -3131643;

    t62 = (((x2117/x2118)*x2119)>>x2120);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x2133 = 0;
	uint8_t x2136 = 0U;
	static int64_t t63 = -286413443477LL;

    t63 = (((x2133/x2134)*x2135)>>x2136);

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x2149 = 168107U;
	int64_t x2151 = 15514917LL;
	uint16_t x2152 = 18U;
	volatile int64_t t64 = -683LL;

    t64 = (((x2149/x2150)*x2151)>>x2152);

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x2193 = INT32_MIN;
	int8_t x2195 = -1;
	int16_t x2196 = 14;
	volatile uint64_t t65 = 7558901931472LLU;

    t65 = (((x2193/x2194)*x2195)>>x2196);

    if (t65 != 1125899867361622LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x2209 = 91562797LLU;
	int16_t x2210 = -1;
	int64_t x2211 = INT64_MAX;
	uint16_t x2212 = 0U;
	volatile uint64_t t66 = 2293330161LLU;

    t66 = (((x2209/x2210)*x2211)>>x2212);

    if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int32_t x2365 = INT32_MIN;
	uint64_t x2366 = 8035LLU;
	int16_t x2367 = 188;
	int8_t x2368 = 17;
	uint64_t t67 = 31686LLU;

    t67 = (((x2365/x2366)*x2367)>>x2368);

    if (t67 != 3292924431577LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint16_t x2390 = 14U;
	uint8_t x2391 = 50U;
	static volatile int16_t x2392 = 2;
	volatile int32_t t68 = 34357403;

    t68 = (((x2389/x2390)*x2391)>>x2392);

    if (t68 != 91625) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x2433 = 1;
	uint8_t x2436 = 0U;
	static volatile uint32_t t69 = 33451U;

    t69 = (((x2433/x2434)*x2435)>>x2436);

    if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x2457 = INT16_MAX;
	uint32_t x2458 = 220299U;
	uint8_t x2459 = 0U;
	int16_t x2460 = 1;
	uint32_t t70 = 162720661U;

    t70 = (((x2457/x2458)*x2459)>>x2460);

    if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x2505 = 6;
	uint8_t x2506 = 107U;
	uint32_t x2507 = 4069666U;
	uint64_t x2508 = 13LLU;
	volatile uint32_t t71 = 0U;

    t71 = (((x2505/x2506)*x2507)>>x2508);

    if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
    	static int32_t x2533 = 0;
	volatile int8_t x2534 = 8;
	volatile int64_t x2535 = INT64_MIN;
	uint8_t x2536 = 7U;
	volatile int64_t t72 = 39LL;

    t72 = (((x2533/x2534)*x2535)>>x2536);

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x2558 = 12U;
	int32_t x2559 = INT32_MIN;
	int8_t x2560 = 0;
	volatile uint64_t t73 = 0LLU;

    t73 = (((x2557/x2558)*x2559)>>x2560);

    if (t73 != 18184975001805914112LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int64_t x2634 = INT64_MIN;
	uint8_t x2636 = 5U;
	static volatile uint64_t t74 = 1225225681628038LLU;

    t74 = (((x2633/x2634)*x2635)>>x2636);

    if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x2645 = 1039LLU;
	static uint8_t x2646 = UINT8_MAX;
	volatile uint64_t x2647 = 29LLU;
	uint8_t x2648 = 1U;
	uint64_t t75 = 944340616LLU;

    t75 = (((x2645/x2646)*x2647)>>x2648);

    if (t75 != 58LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile int8_t x2701 = -1;
	static volatile int64_t x2702 = INT64_MIN;
	volatile uint8_t x2704 = 1U;
	static int64_t t76 = 0LL;

    t76 = (((x2701/x2702)*x2703)>>x2704);

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x2741 = INT16_MIN;
	uint16_t x2742 = 1711U;
	static int16_t x2744 = 1;
	static volatile int32_t t77 = 253;

    t77 = (((x2741/x2742)*x2743)>>x2744);

    if (t77 != 9) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x2749 = 61623683104LL;
	static volatile int32_t x2751 = 168;
	static int16_t x2752 = 0;
	static int64_t t78 = -8805291570989LL;

    t78 = (((x2749/x2750)*x2751)>>x2752);

    if (t78 != 315951216LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint16_t x2857 = UINT16_MAX;
	static uint8_t x2860 = 3U;

    t79 = (((x2857/x2858)*x2859)>>x2860);

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x2885 = -3103845065LL;
	int16_t x2886 = INT16_MAX;
	uint64_t x2887 = 26491279785196183LLU;
	int32_t x2888 = 12;
	volatile uint64_t t80 = 14744804737700LLU;

    t80 = (((x2885/x2886)*x2887)>>x2888);

    if (t80 != 4356433526680989LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x2889 = -278898381435358LL;
	uint8_t x2890 = UINT8_MAX;
	static int64_t x2891 = -1LL;
	volatile int8_t x2892 = 16;
	static int64_t t81 = -153311900456891LL;

    t81 = (((x2889/x2890)*x2891)>>x2892);

    if (t81 != 16688829LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x2941 = -1;
	int16_t x2942 = INT16_MIN;
	int32_t x2943 = INT32_MAX;
	volatile uint32_t x2944 = 12U;
	int32_t t82 = 29700150;

    t82 = (((x2941/x2942)*x2943)>>x2944);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x2949 = INT8_MIN;
	volatile uint32_t x2952 = 46U;
	volatile uint64_t t83 = 124939028443952546LLU;

    t83 = (((x2949/x2950)*x2951)>>x2952);

    if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint64_t x2965 = 7342688064LLU;
	int64_t x2967 = INT64_MIN;
	uint32_t x2968 = 3U;
	volatile uint64_t t84 = 51207728176LLU;

    t84 = (((x2965/x2966)*x2967)>>x2968);

    if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint16_t x3033 = UINT16_MAX;
	uint8_t x3034 = 1U;
	uint16_t x3035 = 558U;
	int8_t x3036 = 2;

    t85 = (((x3033/x3034)*x3035)>>x3036);

    if (t85 != 9142132) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x3045 = UINT32_MAX;
	uint32_t x3046 = 1928U;
	static volatile int64_t t86 = 735574600583676739LL;

    t86 = (((x3045/x3046)*x3047)>>x3048);

    if (t86 != 8901862784838LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x3094 = UINT8_MAX;
	int16_t x3095 = -1;
	int8_t x3096 = 16;
	int32_t t87 = 255073668;

    t87 = (((x3093/x3094)*x3095)>>x3096);

    if (t87 != 128) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile int32_t x3193 = INT32_MAX;
	int32_t x3194 = INT32_MIN;
	int8_t x3195 = 2;
	int8_t x3196 = 12;
	volatile int32_t t88 = -10571;

    t88 = (((x3193/x3194)*x3195)>>x3196);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x3197 = 7517227LLU;
	uint64_t x3198 = UINT64_MAX;
	int8_t x3199 = INT8_MAX;
	uint32_t x3200 = 7U;
	uint64_t t89 = 56490659725216770LLU;

    t89 = (((x3197/x3198)*x3199)>>x3200);

    if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x3245 = 60LL;
	volatile int8_t x3246 = INT8_MIN;
	int8_t x3248 = 0;
	volatile int64_t t90 = -703921745201877LL;

    t90 = (((x3245/x3246)*x3247)>>x3248);

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x3277 = -1;
	static int16_t x3278 = -1;
	uint64_t x3279 = 351631171897LLU;
	static uint64_t x3280 = 1LLU;

    t91 = (((x3277/x3278)*x3279)>>x3280);

    if (t91 != 175815585948LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x3357 = -1;
	static volatile int64_t x3358 = INT64_MIN;
	int8_t x3359 = 1;
	volatile int8_t x3360 = 13;
	int64_t t92 = 3804198242112544LL;

    t92 = (((x3357/x3358)*x3359)>>x3360);

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x3409 = 0;
	volatile int8_t x3411 = 6;
	uint16_t x3412 = 4U;
	uint32_t t93 = 1394925U;

    t93 = (((x3409/x3410)*x3411)>>x3412);

    if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int32_t x3413 = 3333;
	int64_t x3414 = -868426286LL;
	static uint32_t x3415 = 6349U;
	int16_t x3416 = 21;
	volatile int64_t t94 = -6713626LL;

    t94 = (((x3413/x3414)*x3415)>>x3416);

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x3421 = INT64_MIN;
	uint64_t x3422 = UINT64_MAX;
	uint64_t x3423 = 79LLU;
	int8_t x3424 = 3;
	static volatile uint64_t t95 = 427431846LLU;

    t95 = (((x3421/x3422)*x3423)>>x3424);

    if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x3430 = 3745U;
	uint32_t x3431 = 236075U;
	volatile uint8_t x3432 = 30U;
	static volatile uint32_t t96 = 380U;

    t96 = (((x3429/x3430)*x3431)>>x3432);

    if (t96 != 1U) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x3433 = 0;
	int8_t x3434 = INT8_MIN;
	int16_t x3435 = -1;
	int32_t x3436 = 0;
	volatile int32_t t97 = -6219468;

    t97 = (((x3433/x3434)*x3435)>>x3436);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x3501 = INT16_MIN;
	static int32_t x3502 = INT32_MAX;
	static int16_t x3503 = -1;
	int8_t x3504 = 8;
	volatile int32_t t98 = 15499073;

    t98 = (((x3501/x3502)*x3503)>>x3504);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint16_t x3509 = 835U;
	uint64_t x3511 = 94481711406902441LLU;
	static int16_t x3512 = 1;
	uint64_t t99 = 3648926LLU;

    t99 = (((x3509/x3510)*x3511)>>x3512);

    if (t99 != 9128890325447873367LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x3545 = INT8_MIN;
	uint32_t x3546 = UINT32_MAX;
	volatile uint8_t x3548 = 3U;
	volatile uint32_t t100 = 2422606U;

    t100 = (((x3545/x3546)*x3547)>>x3548);

    if (t100 != 0U) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint64_t x3561 = UINT64_MAX;
	uint32_t x3562 = 17766714U;
	volatile uint64_t x3563 = 1305LLU;
	uint64_t t101 = 1194841LLU;

    t101 = (((x3561/x3562)*x3563)>>x3564);

    if (t101 != 42342173220976LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x3685 = -1LL;
	static volatile int32_t x3687 = INT32_MAX;
	uint16_t x3688 = 9U;
	static volatile int64_t t102 = 2079733626849602424LL;

    t102 = (((x3685/x3686)*x3687)>>x3688);

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x3725 = 2939U;
	static int32_t x3726 = 6732;
	static int16_t x3727 = 31;
	uint8_t x3728 = 11U;
	volatile int32_t t103 = -3;

    t103 = (((x3725/x3726)*x3727)>>x3728);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x3729 = 88U;
	volatile uint16_t x3730 = UINT16_MAX;
	volatile int64_t t104 = -3LL;

    t104 = (((x3729/x3730)*x3731)>>x3732);

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x3761 = 1U;
	static uint8_t x3762 = 125U;
	volatile int32_t t105 = 230708;

    t105 = (((x3761/x3762)*x3763)>>x3764);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x3785 = INT32_MIN;
	volatile int64_t x3786 = INT64_MAX;
	static volatile uint8_t x3787 = 5U;
	uint32_t x3788 = 45U;

    t106 = (((x3785/x3786)*x3787)>>x3788);

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint8_t x3817 = 68U;
	uint64_t x3819 = 17334356515LLU;
	static int8_t x3820 = 39;

    t107 = (((x3817/x3818)*x3819)>>x3820);

    if (t107 != 0LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint64_t x3830 = 1LLU;
	int16_t x3831 = -1;
	static int8_t x3832 = 26;
	volatile uint64_t t108 = 3967LLU;

    t108 = (((x3829/x3830)*x3831)>>x3832);

    if (t108 != 274877906943LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x3837 = 32535945460672809LLU;
	uint32_t x3838 = 285273604U;
	volatile int32_t x3839 = INT32_MAX;
	volatile int8_t x3840 = 0;
	volatile uint64_t t109 = 824075181078509LLU;

    t109 = (((x3837/x3838)*x3839)>>x3840);

    if (t109 != 244924203612222840LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x3845 = 143U;
	static volatile int8_t x3846 = INT8_MAX;
	static uint8_t x3847 = UINT8_MAX;
	uint16_t x3848 = 15U;
	static int32_t t110 = 1;

    t110 = (((x3845/x3846)*x3847)>>x3848);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x3870 = INT8_MAX;
	int64_t x3871 = 64636804228LL;
	static uint8_t x3872 = 4U;
	static uint64_t t111 = 1941LLU;

    t111 = (((x3869/x3870)*x3871)>>x3872);

    if (t111 != 38967913348955LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x3877 = INT64_MAX;
	static int16_t x3878 = 6;
	uint32_t x3879 = 1U;
	volatile uint8_t x3880 = 31U;
	int64_t t112 = -23538LL;

    t112 = (((x3877/x3878)*x3879)>>x3880);

    if (t112 != 715827882LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x3962 = 84940;

    t113 = (((x3961/x3962)*x3963)>>x3964);

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x3977 = UINT8_MAX;
	int8_t x3978 = -1;
	static int64_t x3979 = -709201LL;
	int64_t t114 = 236274LL;

    t114 = (((x3977/x3978)*x3979)>>x3980);

    if (t114 != 45211563LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x3981 = -1;
	int16_t x3982 = INT16_MAX;
	uint16_t x3983 = UINT16_MAX;
	uint8_t x3984 = 4U;

    t115 = (((x3981/x3982)*x3983)>>x3984);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x4053 = -1;
	uint16_t x4054 = 111U;
	volatile int32_t x4055 = 14901;
	uint8_t x4056 = 0U;
	volatile int32_t t116 = 26080;

    t116 = (((x4053/x4054)*x4055)>>x4056);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x4057 = 14932610LLU;
	volatile int32_t x4058 = INT32_MIN;
	volatile uint32_t x4059 = UINT32_MAX;
	int64_t x4060 = 2LL;
	uint64_t t117 = 88254930752LLU;

    t117 = (((x4057/x4058)*x4059)>>x4060);

    if (t117 != 0LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile uint64_t x4073 = UINT64_MAX;
	uint32_t x4074 = 500800692U;
	static int32_t x4075 = INT32_MIN;
	uint8_t x4076 = 51U;
	volatile uint64_t t118 = 640598173742500LLU;

    t118 = (((x4073/x4074)*x4075)>>x4076);

    if (t118 != 5831LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x4107 = INT16_MAX;
	uint8_t x4108 = 8U;

    t119 = (((x4105/x4106)*x4107)>>x4108);

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x4201 = 303047LL;
	int8_t x4202 = INT8_MIN;
	int64_t x4203 = -1LL;
	int32_t x4204 = 5;
	volatile int64_t t120 = 1030LL;

    t120 = (((x4201/x4202)*x4203)>>x4204);

    if (t120 != 73LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x4222 = -3734968;
	uint32_t x4224 = 7U;
	volatile uint32_t t121 = 2033886495U;

    t121 = (((x4221/x4222)*x4223)>>x4224);

    if (t121 != 0U) { NG(); } else { ; }
	
}

void f122(void) {
    	static int32_t x4257 = -1;
	volatile uint64_t x4258 = 5270054422LLU;
	uint16_t x4259 = UINT16_MAX;
	int8_t x4260 = 0;
	volatile uint64_t t122 = 7831067LLU;

    t122 = (((x4257/x4258)*x4259)>>x4260);

    if (t122 != 229391819521395LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint8_t x4265 = 13U;
	static int64_t x4266 = -1LL;
	uint64_t x4268 = 26LLU;
	int64_t t123 = 110106749183LL;

    t123 = (((x4265/x4266)*x4267)>>x4268);

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x4277 = 3541796U;
	int16_t x4278 = INT16_MIN;
	volatile int32_t x4279 = 4503194;
	uint8_t x4280 = 22U;
	uint32_t t124 = 7U;

    t124 = (((x4277/x4278)*x4279)>>x4280);

    if (t124 != 0U) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x4290 = UINT32_MAX;
	int64_t x4291 = INT64_MIN;
	int16_t x4292 = 1;
	int64_t t125 = 28438063558867LL;

    t125 = (((x4289/x4290)*x4291)>>x4292);

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint8_t x4313 = 4U;
	int32_t x4314 = -1;
	static int16_t x4315 = INT16_MIN;
	static uint32_t x4316 = 3U;
	volatile int32_t t126 = 1877838;

    t126 = (((x4313/x4314)*x4315)>>x4316);

    if (t126 != 16384) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x4349 = -1;
	static uint16_t x4350 = 439U;

    t127 = (((x4349/x4350)*x4351)>>x4352);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x4443 = INT32_MIN;
	int8_t x4444 = 13;
	static volatile uint64_t t128 = 742818LLU;

    t128 = (((x4441/x4442)*x4443)>>x4444);

    if (t128 != 2251662370537472LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x4449 = 128U;
	uint64_t x4450 = 9481521LLU;
	int64_t x4451 = INT64_MAX;
	uint8_t x4452 = 1U;
	volatile uint64_t t129 = 2257099731243230929LLU;

    t129 = (((x4449/x4450)*x4451)>>x4452);

    if (t129 != 0LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x4501 = -39;
	int64_t x4502 = INT64_MIN;
	volatile int32_t x4503 = INT32_MAX;
	int32_t x4504 = 2;
	static volatile int64_t t130 = 517704436384409LL;

    t130 = (((x4501/x4502)*x4503)>>x4504);

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x4509 = 82U;
	uint64_t x4510 = 1015584989638393692LLU;
	volatile int8_t x4511 = INT8_MIN;

    t131 = (((x4509/x4510)*x4511)>>x4512);

    if (t131 != 0LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint8_t x4517 = 108U;
	static int8_t x4518 = INT8_MAX;
	volatile int8_t x4519 = 3;
	volatile uint32_t x4520 = 1U;
	volatile int32_t t132 = 31604262;

    t132 = (((x4517/x4518)*x4519)>>x4520);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x4541 = 13716;
	int64_t x4543 = INT64_MAX;
	uint8_t x4544 = 0U;
	int64_t t133 = 38LL;

    t133 = (((x4541/x4542)*x4543)>>x4544);

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x4545 = 1962404LLU;
	uint32_t x4546 = 19U;
	volatile uint32_t x4547 = 1596U;
	volatile uint64_t t134 = 21LLU;

    t134 = (((x4545/x4546)*x4547)>>x4548);

    if (t134 != 10302579LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x4554 = UINT64_MAX;
	volatile uint16_t x4555 = 468U;
	volatile int16_t x4556 = 3;
	uint64_t t135 = 124126612LLU;

    t135 = (((x4553/x4554)*x4555)>>x4556);

    if (t135 != 0LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x4589 = 379952528399438LLU;
	int64_t x4590 = INT64_MIN;
	uint32_t x4591 = UINT32_MAX;
	static volatile uint8_t x4592 = 1U;
	volatile uint64_t t136 = 14913072941869468LLU;

    t136 = (((x4589/x4590)*x4591)>>x4592);

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static int16_t x4705 = 4;
	static uint64_t x4706 = 1480118501155189632LLU;
	static int8_t x4707 = INT8_MAX;
	uint64_t t137 = 5319989692LLU;

    t137 = (((x4705/x4706)*x4707)>>x4708);

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x4825 = -14;
	volatile int16_t x4826 = INT16_MIN;
	uint32_t x4828 = 8U;
	int32_t t138 = -151814934;

    t138 = (((x4825/x4826)*x4827)>>x4828);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x4853 = INT8_MAX;
	volatile int32_t x4854 = 833;
	uint8_t x4856 = 0U;
	int32_t t139 = -122928;

    t139 = (((x4853/x4854)*x4855)>>x4856);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x4861 = UINT64_MAX;
	static uint64_t x4862 = 9679499960LLU;
	int64_t x4863 = INT64_MIN;
	static uint32_t x4864 = 5U;
	uint64_t t140 = 23832118LLU;

    t140 = (((x4861/x4862)*x4863)>>x4864);

    if (t140 != 288230376151711744LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x4865 = INT8_MAX;
	static volatile int64_t x4866 = INT64_MIN;
	uint16_t x4867 = UINT16_MAX;
	uint16_t x4868 = 1U;
	int64_t t141 = -470256551997971LL;

    t141 = (((x4865/x4866)*x4867)>>x4868);

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x4917 = 0;
	volatile uint8_t x4918 = UINT8_MAX;
	static volatile int32_t x4919 = 835;
	volatile int32_t x4920 = 1;
	volatile int32_t t142 = -5265;

    t142 = (((x4917/x4918)*x4919)>>x4920);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x4941 = -199;
	int8_t x4943 = -1;
	static uint8_t x4944 = 1U;
	volatile int32_t t143 = 2;

    t143 = (((x4941/x4942)*x4943)>>x4944);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile int32_t x4957 = INT32_MIN;
	uint32_t x4958 = 28042U;
	int16_t x4959 = INT16_MIN;
	static int8_t x4960 = 25;
	uint32_t t144 = 122779033U;

    t144 = (((x4957/x4958)*x4959)>>x4960);

    if (t144 != 53U) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int32_t x4969 = -746832;
	int8_t x4970 = 45;
	static uint64_t x4971 = UINT64_MAX;
	uint16_t x4972 = 0U;

    t145 = (((x4969/x4970)*x4971)>>x4972);

    if (t145 != 16596LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x5001 = 1;
	int8_t x5003 = -37;
	uint8_t x5004 = 0U;
	volatile int32_t t146 = -31;

    t146 = (((x5001/x5002)*x5003)>>x5004);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x5053 = INT32_MIN;
	uint16_t x5054 = 7347U;
	uint32_t x5055 = UINT32_MAX;
	static uint8_t x5056 = 4U;
	uint32_t t147 = 5275994U;

    t147 = (((x5053/x5054)*x5055)>>x5056);

    if (t147 != 18268U) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x5089 = 44U;
	int16_t x5090 = INT16_MAX;
	volatile int16_t x5091 = INT16_MIN;
	int32_t t148 = 62474006;

    t148 = (((x5089/x5090)*x5091)>>x5092);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x5105 = INT16_MAX;
	volatile int16_t x5108 = 6;
	volatile uint64_t t149 = 271103183LLU;

    t149 = (((x5105/x5106)*x5107)>>x5108);

    if (t149 != 0LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int64_t x5129 = 8353547428608LL;
	int32_t x5130 = INT32_MAX;
	int8_t x5131 = 11;
	volatile uint32_t x5132 = 11U;
	volatile int64_t t150 = 170186326LL;

    t150 = (((x5129/x5130)*x5131)>>x5132);

    if (t150 != 20LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x5169 = -256LL;
	uint16_t x5170 = UINT16_MAX;
	uint32_t x5172 = 5U;

    t151 = (((x5169/x5170)*x5171)>>x5172);

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x5181 = INT64_MIN;
	static int16_t x5183 = -1;
	uint32_t x5184 = 2U;
	volatile int64_t t152 = -101514LL;

    t152 = (((x5181/x5182)*x5183)>>x5184);

    if (t152 != 9042521604759584LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x5189 = -1LL;
	static volatile int32_t x5190 = 3479;
	int32_t x5191 = 2859;
	volatile uint8_t x5192 = 42U;
	static volatile int64_t t153 = -101823222252LL;

    t153 = (((x5189/x5190)*x5191)>>x5192);

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x5213 = -781148304;
	static uint64_t x5214 = 12474812193562LLU;
	uint8_t x5215 = 6U;
	volatile uint64_t t154 = 47656588957LLU;

    t154 = (((x5213/x5214)*x5215)>>x5216);

    if (t154 != 8872314LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint16_t x5217 = 3U;
	volatile uint32_t x5218 = UINT32_MAX;
	uint16_t x5219 = 33U;
	static uint16_t x5220 = 7U;
	volatile uint32_t t155 = 21670U;

    t155 = (((x5217/x5218)*x5219)>>x5220);

    if (t155 != 0U) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x5222 = INT32_MAX;
	int32_t x5223 = -1;
	uint8_t x5224 = 3U;
	int64_t t156 = -51427755421614263LL;

    t156 = (((x5221/x5222)*x5223)>>x5224);

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static int64_t x5233 = INT64_MIN;
	uint64_t x5234 = UINT64_MAX;
	uint16_t x5235 = 0U;
	uint32_t x5236 = 8U;
	volatile uint64_t t157 = 8245788368286572LLU;

    t157 = (((x5233/x5234)*x5235)>>x5236);

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x5237 = INT8_MIN;
	int64_t x5238 = INT64_MAX;
	static volatile int8_t x5240 = 9;
	int64_t t158 = -1056796935676675007LL;

    t158 = (((x5237/x5238)*x5239)>>x5240);

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x5289 = UINT16_MAX;
	int8_t x5290 = INT8_MIN;
	volatile int32_t x5291 = -1;
	volatile int8_t x5292 = 0;
	int32_t t159 = -267063224;

    t159 = (((x5289/x5290)*x5291)>>x5292);

    if (t159 != 511) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x5305 = 1368092U;
	int64_t x5306 = INT64_MIN;
	uint8_t x5307 = UINT8_MAX;
	static volatile uint8_t x5308 = 22U;

    t160 = (((x5305/x5306)*x5307)>>x5308);

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x5313 = INT32_MIN;
	uint8_t x5314 = 1U;
	uint32_t x5315 = 237755368U;
	uint16_t x5316 = 1U;

    t161 = (((x5313/x5314)*x5315)>>x5316);

    if (t161 != 0U) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x5338 = -53;
	uint16_t x5340 = 0U;
	volatile int32_t t162 = -50322;

    t162 = (((x5337/x5338)*x5339)>>x5340);

    if (t162 != 131072) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x5441 = INT64_MAX;
	int32_t x5442 = INT32_MAX;
	static volatile uint64_t x5443 = 6575645674854LLU;
	static volatile uint64_t t163 = 22053277955407LLU;

    t163 = (((x5441/x5442)*x5443)>>x5444);

    if (t163 != 851405795888282LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint16_t x5501 = 0U;
	static int64_t x5502 = 85027463447LL;
	int32_t x5503 = 1818207;

    t164 = (((x5501/x5502)*x5503)>>x5504);

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile uint16_t x5546 = 25U;
	int16_t x5548 = 2;
	static volatile int64_t t165 = 232LL;

    t165 = (((x5545/x5546)*x5547)>>x5548);

    if (t165 != 3089039316313LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x5565 = 121U;
	volatile int64_t x5566 = INT64_MAX;
	int8_t x5567 = -1;
	uint16_t x5568 = 1U;

    t166 = (((x5565/x5566)*x5567)>>x5568);

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x5573 = UINT8_MAX;
	uint32_t x5574 = UINT32_MAX;
	uint8_t x5575 = 1U;
	uint8_t x5576 = 1U;
	volatile uint32_t t167 = 76851898U;

    t167 = (((x5573/x5574)*x5575)>>x5576);

    if (t167 != 0U) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x5577 = INT64_MAX;
	uint64_t x5579 = 58081908516111LLU;
	static int64_t x5580 = 1LL;
	volatile uint64_t t168 = 439024218908582587LLU;

    t168 = (((x5577/x5578)*x5579)>>x5580);

    if (t168 != 1485282698693535610LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x5581 = -1;
	int32_t x5582 = INT32_MIN;
	uint32_t x5583 = UINT32_MAX;
	int8_t x5584 = 11;

    t169 = (((x5581/x5582)*x5583)>>x5584);

    if (t169 != 0U) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x5627 = 44597LLU;
	volatile uint8_t x5628 = 11U;
	static uint64_t t170 = 18516385363949LLU;

    t170 = (((x5625/x5626)*x5627)>>x5628);

    if (t170 != 30252256877569LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x5641 = -1;
	int8_t x5643 = -1;
	static int8_t x5644 = 3;
	int32_t t171 = -1;

    t171 = (((x5641/x5642)*x5643)>>x5644);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x5669 = 17586LLU;
	uint32_t x5670 = 299U;
	int16_t x5671 = INT16_MIN;
	uint64_t t172 = 0LLU;

    t172 = (((x5669/x5670)*x5671)>>x5672);

    if (t172 != 4503599627370032LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x5861 = INT8_MIN;
	volatile int8_t x5862 = INT8_MAX;
	int32_t x5863 = -1;
	uint8_t x5864 = 6U;
	int32_t t173 = -817078;

    t173 = (((x5861/x5862)*x5863)>>x5864);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int8_t x5889 = 1;
	static int32_t x5890 = INT32_MIN;
	int64_t x5891 = INT64_MIN;
	int8_t x5892 = 1;
	int64_t t174 = -924680041LL;

    t174 = (((x5889/x5890)*x5891)>>x5892);

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x5893 = INT32_MIN;
	int32_t x5894 = -279;
	static volatile uint8_t x5895 = 5U;
	static volatile uint32_t x5896 = 1U;
	volatile int32_t t175 = 0;

    t175 = (((x5893/x5894)*x5895)>>x5896);

    if (t175 != 19242685) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint8_t x5925 = UINT8_MAX;
	uint32_t x5926 = 56U;
	int8_t x5927 = -1;
	uint32_t x5928 = 1U;
	volatile uint32_t t176 = 4899656U;

    t176 = (((x5925/x5926)*x5927)>>x5928);

    if (t176 != 2147483646U) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint16_t x5930 = 15U;
	uint16_t x5932 = 0U;
	volatile int32_t t177 = 4570;

    t177 = (((x5929/x5930)*x5931)>>x5932);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x6037 = INT64_MAX;
	int8_t x6038 = INT8_MIN;
	uint8_t x6040 = 24U;
	volatile uint64_t t178 = 28221277450751LLU;

    t178 = (((x6037/x6038)*x6039)>>x6040);

    if (t178 != 4294967295LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint64_t x6054 = 785206523755692LLU;
	volatile int64_t x6055 = 1LL;
	int8_t x6056 = 1;

    t179 = (((x6053/x6054)*x6055)>>x6056);

    if (t179 != 0LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static int32_t x6061 = INT32_MIN;
	int64_t x6062 = INT64_MAX;
	int8_t x6063 = INT8_MIN;
	uint8_t x6064 = 19U;
	volatile int64_t t180 = -33414313116387996LL;

    t180 = (((x6061/x6062)*x6063)>>x6064);

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x6161 = 0;
	uint32_t x6162 = 520499487U;
	int8_t x6163 = INT8_MIN;
	uint32_t x6164 = 3U;

    t181 = (((x6161/x6162)*x6163)>>x6164);

    if (t181 != 0U) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x6213 = UINT16_MAX;
	volatile uint8_t x6214 = UINT8_MAX;
	volatile uint16_t x6215 = UINT16_MAX;
	uint8_t x6216 = 10U;
	static volatile int32_t t182 = -3120383;

    t182 = (((x6213/x6214)*x6215)>>x6216);

    if (t182 != 16447) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint8_t x6241 = 1U;
	uint32_t x6242 = 1013265542U;
	uint16_t x6243 = UINT16_MAX;
	uint8_t x6244 = 12U;
	uint32_t t183 = 6947U;

    t183 = (((x6241/x6242)*x6243)>>x6244);

    if (t183 != 0U) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x6345 = 1006LLU;
	int32_t x6346 = INT32_MIN;
	volatile int32_t x6347 = -1044;
	uint16_t x6348 = 0U;
	uint64_t t184 = 5577645LLU;

    t184 = (((x6345/x6346)*x6347)>>x6348);

    if (t184 != 0LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x6350 = 6;
	static int64_t x6351 = 6193661LL;
	int16_t x6352 = 1;
	static int64_t t185 = 85124904LL;

    t185 = (((x6349/x6350)*x6351)>>x6352);

    if (t185 != 21677813LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x6406 = -117329;
	volatile uint64_t x6407 = UINT64_MAX;
	uint8_t x6408 = 3U;

    t186 = (((x6405/x6406)*x6407)>>x6408);

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x6445 = UINT32_MAX;
	static uint8_t x6446 = UINT8_MAX;
	volatile int64_t x6447 = 216365LL;

    t187 = (((x6445/x6446)*x6447)>>x6448);

    if (t187 != 3644237642285LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x6497 = -919;
	volatile int32_t x6498 = INT32_MIN;
	int64_t x6499 = INT64_MIN;
	uint16_t x6500 = 36U;

    t188 = (((x6497/x6498)*x6499)>>x6500);

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x6513 = -1;
	static int64_t x6514 = INT64_MIN;
	int16_t x6516 = 12;
	volatile uint64_t t189 = 8624LLU;

    t189 = (((x6513/x6514)*x6515)>>x6516);

    if (t189 != 0LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint8_t x6525 = 1U;
	int16_t x6527 = 29;
	int16_t x6528 = 0;
	static uint32_t t190 = 7325U;

    t190 = (((x6525/x6526)*x6527)>>x6528);

    if (t190 != 0U) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x6601 = INT32_MIN;
	static int64_t x6602 = 3843348471450LL;
	uint32_t x6603 = UINT32_MAX;
	uint8_t x6604 = 1U;
	static volatile int64_t t191 = -88222481141LL;

    t191 = (((x6601/x6602)*x6603)>>x6604);

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x6617 = 7301990LL;
	uint32_t x6618 = 711U;
	uint32_t x6619 = 46885527U;
	volatile int64_t t192 = 10LL;

    t192 = (((x6617/x6618)*x6619)>>x6620);

    if (t192 != 240757181145LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x6634 = INT16_MIN;
	volatile uint64_t x6635 = UINT64_MAX;
	volatile int16_t x6636 = 0;
	static volatile uint64_t t193 = 149160715338062LLU;

    t193 = (((x6633/x6634)*x6635)>>x6636);

    if (t193 != 0LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x6641 = 24;
	int16_t x6642 = INT16_MAX;
	int32_t x6643 = INT32_MAX;
	static int32_t t194 = -126556;

    t194 = (((x6641/x6642)*x6643)>>x6644);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x6673 = INT64_MAX;
	int8_t x6674 = -1;
	int16_t x6675 = -1;
	volatile int8_t x6676 = 2;
	volatile int64_t t195 = -3LL;

    t195 = (((x6673/x6674)*x6675)>>x6676);

    if (t195 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int8_t x6689 = INT8_MIN;
	int32_t x6691 = INT32_MAX;
	int8_t x6692 = 4;
	volatile int32_t t196 = 0;

    t196 = (((x6689/x6690)*x6691)>>x6692);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x6693 = 14723LLU;
	static volatile int16_t x6695 = INT16_MIN;
	static uint16_t x6696 = 3U;
	static uint64_t t197 = 759747180362814761LLU;

    t197 = (((x6693/x6694)*x6695)>>x6696);

    if (t197 != 0LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint64_t x6698 = 10034202366LLU;
	int8_t x6699 = 13;
	volatile uint16_t x6700 = 26U;

    t198 = (((x6697/x6698)*x6699)>>x6700);

    if (t198 != 0LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint8_t x6797 = 8U;
	int64_t x6799 = INT64_MIN;
	uint8_t x6800 = 2U;
	int64_t t199 = -152LL;

    t199 = (((x6797/x6798)*x6799)>>x6800);

    if (t199 != 0LL) { NG(); } else { ; }
	
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

