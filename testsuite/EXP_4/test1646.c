
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

static int16_t x3 = INT16_MAX;
static int8_t x15 = 35;
int32_t x19 = -1;
uint32_t x26 = 58773U;
int32_t x27 = -1;
volatile int64_t x28 = -25LL;
uint32_t x51 = 424713U;
int64_t x59 = 1724989061527LL;
static int32_t t6 = -220317;
int64_t x69 = 644LL;
int16_t x77 = -1;
uint8_t x80 = UINT8_MAX;
int32_t x103 = -1;
volatile uint16_t x120 = UINT16_MAX;
volatile int16_t x123 = 0;
uint64_t x124 = 114778148384253023LLU;
volatile uint32_t x129 = UINT32_MAX;
static int64_t x130 = 20479LL;
int16_t x139 = INT16_MIN;
volatile int32_t t16 = -71037;
static int32_t x141 = 72342625;
static int32_t t17 = -8901;
static int32_t x145 = -1;
uint32_t x158 = 11U;
uint64_t x162 = 5529051831855230559LLU;
uint8_t x175 = 0U;
uint64_t x181 = 2371184900244423LLU;
int32_t x184 = -1;
int16_t x187 = 108;
static int32_t x193 = INT32_MIN;
int16_t x196 = 29;
volatile int16_t x197 = INT16_MIN;
static volatile int32_t t25 = -2;
uint64_t x206 = 587LLU;
volatile int32_t t26 = -298699664;
static volatile int32_t t27 = -104959;
int8_t x220 = -28;
volatile uint64_t x226 = UINT64_MAX;
uint32_t x238 = UINT32_MAX;
uint16_t x242 = UINT16_MAX;
volatile int32_t t32 = -371;
static volatile int64_t x252 = INT64_MAX;
uint64_t x253 = UINT64_MAX;
static uint8_t x254 = 0U;
int16_t x256 = INT16_MIN;
volatile int32_t t34 = 270;
static int32_t x270 = INT32_MAX;
int8_t x272 = -1;
static int64_t x276 = -215450LL;
int32_t t38 = -177;
static int16_t x312 = INT16_MIN;
uint32_t x329 = UINT32_MAX;
uint32_t x333 = 2970348U;
volatile int16_t x345 = -5830;
static int8_t x347 = 0;
volatile int32_t t45 = 896163;
int32_t x354 = 4;
volatile int32_t t47 = -1928;
int64_t x371 = INT64_MAX;
volatile int8_t x372 = 3;
uint8_t x382 = UINT8_MAX;
volatile uint16_t x395 = 3283U;
static int64_t x413 = INT64_MIN;
int8_t x421 = INT8_MAX;
volatile int16_t x424 = -1;
volatile int16_t x429 = -516;
static int32_t x430 = 0;
int16_t x431 = -26;
volatile int16_t x433 = INT16_MAX;
int32_t t56 = 428;
volatile uint32_t x441 = 1U;
volatile uint64_t x463 = 43LLU;
int8_t x477 = INT8_MIN;
static int16_t x489 = INT16_MIN;
int64_t x490 = INT64_MAX;
volatile uint16_t x495 = 209U;
uint64_t x506 = UINT64_MAX;
static int32_t t67 = 1;
volatile uint8_t x515 = UINT8_MAX;
static volatile int16_t x517 = 1;
int32_t t69 = 4906774;
static volatile int32_t x540 = 65545;
int16_t x541 = -1;
uint16_t x542 = UINT16_MAX;
static volatile int16_t x544 = INT16_MIN;
static uint32_t x559 = 10535750U;
volatile int32_t t74 = 6;
uint64_t x561 = UINT64_MAX;
uint8_t x562 = UINT8_MAX;
int16_t x584 = 20;
uint8_t x586 = UINT8_MAX;
int8_t x600 = -1;
volatile int32_t t79 = -1;
uint8_t x602 = 30U;
int8_t x603 = INT8_MIN;
volatile int8_t x609 = 28;
uint16_t x626 = UINT16_MAX;
int32_t x628 = INT32_MAX;
int8_t x636 = INT8_MAX;
uint64_t x664 = 1351216171LLU;
int32_t x673 = -1;
volatile int32_t t90 = 53419982;
static uint8_t x711 = 6U;
volatile uint8_t x722 = 3U;
int16_t x723 = -5371;
volatile int64_t x724 = 1LL;
static uint16_t x726 = 967U;
uint32_t x731 = 2982594U;
int64_t x735 = INT64_MIN;
static int32_t x750 = 24;
volatile uint8_t x751 = UINT8_MAX;
int32_t t99 = -422;
volatile int32_t t100 = 15502928;
int16_t x789 = INT16_MIN;
int8_t x806 = INT8_MAX;
int32_t t103 = 570127;
int64_t x812 = INT64_MIN;
int32_t x824 = INT32_MIN;
volatile int32_t t106 = 75;
volatile int64_t x865 = INT64_MIN;
int64_t x866 = INT64_MAX;
int16_t x885 = INT16_MAX;
uint32_t x889 = UINT32_MAX;
uint32_t x914 = 407426U;
int32_t x915 = INT32_MAX;
int16_t x916 = -1;
uint8_t x918 = UINT8_MAX;
int32_t t115 = -6647242;
int32_t x925 = -1;
uint32_t x927 = 15730U;
uint8_t x947 = 4U;
int16_t x948 = INT16_MIN;
volatile uint16_t x950 = UINT16_MAX;
static uint32_t x961 = 14U;
int64_t x963 = -1LL;
uint16_t x985 = 187U;
static uint64_t x986 = UINT64_MAX;
volatile int32_t t127 = 9907;
int64_t x1027 = INT64_MIN;
volatile int32_t t128 = 2;
uint64_t x1034 = 1938806502973503LLU;
static volatile int16_t x1035 = -1;
int64_t x1036 = -1LL;
uint64_t x1037 = UINT64_MAX;
static volatile int32_t t130 = 0;
int64_t x1051 = INT64_MIN;
uint32_t x1053 = UINT32_MAX;
uint32_t x1054 = 1U;
uint64_t x1065 = 268857642708778230LLU;
int32_t x1071 = -1;
static int32_t t137 = 0;
int64_t x1097 = INT64_MIN;
volatile int32_t t140 = -16099350;
int64_t x1107 = INT64_MAX;
int64_t x1109 = 52355LL;
int8_t x1112 = -1;
int16_t x1117 = 26;
volatile int8_t x1118 = INT8_MAX;
int16_t x1123 = -23;
static int32_t t146 = -77797;
volatile int8_t x1133 = 8;
int8_t x1137 = INT8_MIN;
static uint32_t x1138 = 16661516U;
int16_t x1139 = 53;
static int32_t t149 = 3;
int8_t x1174 = 1;
volatile int8_t x1175 = INT8_MIN;
int16_t x1185 = INT16_MIN;
int8_t x1187 = INT8_MAX;
uint32_t x1193 = 33173524U;
static volatile int64_t x1195 = INT64_MIN;
uint16_t x1197 = UINT16_MAX;
uint32_t x1198 = 23170U;
uint16_t x1199 = 194U;
volatile int8_t x1207 = -1;
volatile int8_t x1208 = INT8_MIN;
volatile int32_t t160 = 2402489;
volatile int32_t t161 = 73515;
volatile uint32_t x1230 = 57289301U;
static volatile int32_t t162 = 54;
volatile int32_t t164 = -3;
uint16_t x1256 = UINT16_MAX;
volatile uint8_t x1258 = 1U;
volatile uint64_t x1259 = UINT64_MAX;
volatile int16_t x1260 = INT16_MIN;
static volatile int32_t t166 = 1;
volatile uint32_t x1282 = 32544U;
int8_t x1292 = -1;
uint8_t x1321 = 14U;
uint8_t x1324 = UINT8_MAX;
static int8_t x1326 = 20;
int32_t t172 = -145814;
uint16_t x1335 = 2U;
static volatile int32_t t173 = 3;
int8_t x1349 = INT8_MIN;
uint32_t x1350 = UINT32_MAX;
volatile uint8_t x1352 = 23U;
int64_t x1354 = 121469LL;
int16_t x1359 = -1;
int64_t x1374 = 255LL;
static volatile uint16_t x1392 = 1U;
uint8_t x1393 = 25U;
static volatile uint32_t x1396 = 7U;
int8_t x1402 = INT8_MAX;
uint64_t x1403 = 240779LLU;
volatile int32_t x1408 = -2292171;
volatile int32_t t184 = -170;
static int8_t x1415 = INT8_MIN;
int32_t t185 = 0;
uint16_t x1419 = 58U;
int64_t x1425 = INT64_MIN;
volatile int8_t x1431 = -1;
volatile int32_t t188 = -149121397;
static volatile int32_t t189 = -240303521;
uint32_t x1441 = UINT32_MAX;
uint32_t x1449 = 19U;
volatile uint8_t x1450 = UINT8_MAX;
int64_t x1451 = INT64_MIN;
volatile int64_t x1468 = 10534131475395LL;
static int8_t x1478 = INT8_MAX;
uint16_t x1490 = 1U;
int32_t t198 = 37;
static int8_t x1501 = -25;
uint8_t x1503 = 56U;
int32_t t199 = -72053085;


void f0(void) {
    	int8_t x1 = 0;
	uint16_t x2 = UINT16_MAX;
	static int64_t x4 = 7177213LL;
	int32_t t0 = -107540631;

    t0 = (x1==(x2<<(x3>x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x13 = 26U;
	uint16_t x14 = 2U;
	int32_t x16 = 8521;
	int32_t t1 = 1;

    t1 = (x13==(x14<<(x15>x16)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x17 = INT64_MIN;
	uint8_t x18 = 39U;
	volatile int64_t x20 = INT64_MIN;
	static int32_t t2 = -126566683;

    t2 = (x17==(x18<<(x19>x20)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x25 = INT8_MIN;
	int32_t t3 = -12;

    t3 = (x25==(x26<<(x27>x28)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x45 = 3;
	uint64_t x46 = 4322605434924548LLU;
	int16_t x47 = -1;
	volatile int8_t x48 = 1;
	volatile int32_t t4 = 1;

    t4 = (x45==(x46<<(x47>x48)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x49 = INT8_MIN;
	int8_t x50 = INT8_MAX;
	int64_t x52 = INT64_MIN;
	static int32_t t5 = -14;

    t5 = (x49==(x50<<(x51>x52)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int64_t x57 = INT64_MAX;
	uint16_t x58 = 7U;
	static int64_t x60 = INT64_MIN;

    t6 = (x57==(x58<<(x59>x60)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x65 = INT32_MIN;
	uint32_t x66 = UINT32_MAX;
	uint8_t x67 = UINT8_MAX;
	uint64_t x68 = 3625458822871LLU;
	volatile int32_t t7 = -350475348;

    t7 = (x65==(x66<<(x67>x68)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x70 = UINT64_MAX;
	int8_t x71 = INT8_MIN;
	static int8_t x72 = -10;
	static int32_t t8 = 10732068;

    t8 = (x69==(x70<<(x71>x72)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x78 = 17LLU;
	static uint16_t x79 = UINT16_MAX;
	volatile int32_t t9 = 835783;

    t9 = (x77==(x78<<(x79>x80)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x101 = 10113190080LLU;
	uint8_t x102 = 2U;
	static volatile int16_t x104 = 0;
	volatile int32_t t10 = -14365;

    t10 = (x101==(x102<<(x103>x104)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x105 = INT64_MAX;
	volatile uint64_t x106 = 19031355505LLU;
	int64_t x107 = INT64_MIN;
	int8_t x108 = -1;
	int32_t t11 = -13234;

    t11 = (x105==(x106<<(x107>x108)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x117 = INT16_MIN;
	static volatile int16_t x118 = INT16_MAX;
	uint16_t x119 = UINT16_MAX;
	int32_t t12 = 370;

    t12 = (x117==(x118<<(x119>x120)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint64_t x121 = UINT64_MAX;
	uint32_t x122 = 66409686U;
	static volatile int32_t t13 = 1;

    t13 = (x121==(x122<<(x123>x124)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int8_t x125 = -1;
	int64_t x126 = 18232720LL;
	static int16_t x127 = INT16_MIN;
	uint16_t x128 = UINT16_MAX;
	volatile int32_t t14 = 793;

    t14 = (x125==(x126<<(x127>x128)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x131 = UINT16_MAX;
	int8_t x132 = INT8_MIN;
	int32_t t15 = 5725110;

    t15 = (x129==(x130<<(x131>x132)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x137 = UINT32_MAX;
	uint32_t x138 = UINT32_MAX;
	static uint16_t x140 = 88U;

    t16 = (x137==(x138<<(x139>x140)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint8_t x142 = 7U;
	volatile int64_t x143 = INT64_MAX;
	static int64_t x144 = INT64_MIN;

    t17 = (x141==(x142<<(x143>x144)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x146 = INT16_MAX;
	volatile uint32_t x147 = 7U;
	static int16_t x148 = 2;
	int32_t t18 = -13016841;

    t18 = (x145==(x146<<(x147>x148)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x157 = UINT16_MAX;
	int16_t x159 = -1;
	int64_t x160 = -2LL;
	static volatile int32_t t19 = 734905;

    t19 = (x157==(x158<<(x159>x160)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint64_t x161 = 23LLU;
	int8_t x163 = 7;
	static uint8_t x164 = 105U;
	volatile int32_t t20 = -253339;

    t20 = (x161==(x162<<(x163>x164)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint32_t x173 = UINT32_MAX;
	static volatile uint8_t x174 = 24U;
	int32_t x176 = -1;
	volatile int32_t t21 = -243520;

    t21 = (x173==(x174<<(x175>x176)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x182 = 59;
	int16_t x183 = -1;
	static volatile int32_t t22 = -5721;

    t22 = (x181==(x182<<(x183>x184)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int64_t x185 = -1LL;
	int8_t x186 = INT8_MAX;
	int16_t x188 = INT16_MIN;
	volatile int32_t t23 = 833180945;

    t23 = (x185==(x186<<(x187>x188)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x194 = 126U;
	static int64_t x195 = 10043155572447LL;
	int32_t t24 = -16;

    t24 = (x193==(x194<<(x195>x196)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x198 = 45U;
	int8_t x199 = -62;
	uint8_t x200 = 1U;

    t25 = (x197==(x198<<(x199>x200)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint32_t x205 = 29U;
	uint64_t x207 = UINT64_MAX;
	int16_t x208 = INT16_MIN;

    t26 = (x205==(x206<<(x207>x208)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x209 = 395024705915LLU;
	uint8_t x210 = UINT8_MAX;
	uint8_t x211 = 119U;
	int8_t x212 = INT8_MIN;

    t27 = (x209==(x210<<(x211>x212)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x217 = 69U;
	static uint32_t x218 = 162452057U;
	int16_t x219 = INT16_MIN;
	static int32_t t28 = 1186359;

    t28 = (x217==(x218<<(x219>x220)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x221 = 1225204634412LLU;
	int8_t x222 = INT8_MAX;
	volatile int32_t x223 = -6451;
	volatile int64_t x224 = -3473376LL;
	int32_t t29 = -2;

    t29 = (x221==(x222<<(x223>x224)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x225 = -305102LL;
	static int16_t x227 = INT16_MAX;
	uint16_t x228 = 10U;
	volatile int32_t t30 = 399799976;

    t30 = (x225==(x226<<(x227>x228)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int16_t x237 = INT16_MIN;
	int16_t x239 = -1;
	static int64_t x240 = -120421430467178LL;
	volatile int32_t t31 = -16;

    t31 = (x237==(x238<<(x239>x240)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint16_t x241 = UINT16_MAX;
	int64_t x243 = INT64_MIN;
	uint16_t x244 = UINT16_MAX;

    t32 = (x241==(x242<<(x243>x244)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x249 = 709;
	int32_t x250 = INT32_MAX;
	static int8_t x251 = 4;
	int32_t t33 = -31903;

    t33 = (x249==(x250<<(x251>x252)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint32_t x255 = 34635340U;

    t34 = (x253==(x254<<(x255>x256)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x257 = 20;
	uint16_t x258 = UINT16_MAX;
	int32_t x259 = 133578740;
	volatile int64_t x260 = INT64_MAX;
	int32_t t35 = -63249426;

    t35 = (x257==(x258<<(x259>x260)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x269 = -8565293455169LL;
	static volatile int16_t x271 = INT16_MIN;
	int32_t t36 = -131867748;

    t36 = (x269==(x270<<(x271>x272)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x273 = INT64_MAX;
	uint32_t x274 = 36U;
	int8_t x275 = INT8_MAX;
	volatile int32_t t37 = 1612;

    t37 = (x273==(x274<<(x275>x276)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x277 = 1678U;
	volatile uint32_t x278 = UINT32_MAX;
	uint64_t x279 = 278954683109421132LLU;
	uint32_t x280 = UINT32_MAX;

    t38 = (x277==(x278<<(x279>x280)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x281 = 60635261;
	volatile uint8_t x282 = 79U;
	int16_t x283 = INT16_MIN;
	uint64_t x284 = 1588020334725975772LLU;
	int32_t t39 = 215266928;

    t39 = (x281==(x282<<(x283>x284)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x285 = 0U;
	volatile uint16_t x286 = UINT16_MAX;
	int16_t x287 = -1;
	int64_t x288 = INT64_MIN;
	static volatile int32_t t40 = -82855;

    t40 = (x285==(x286<<(x287>x288)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x289 = INT8_MIN;
	static volatile uint16_t x290 = UINT16_MAX;
	int8_t x291 = 1;
	volatile int16_t x292 = INT16_MAX;
	volatile int32_t t41 = -73435;

    t41 = (x289==(x290<<(x291>x292)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int64_t x309 = INT64_MIN;
	uint64_t x310 = 1088032385LLU;
	static int16_t x311 = 57;
	int32_t t42 = -1;

    t42 = (x309==(x310<<(x311>x312)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x330 = 6114U;
	uint8_t x331 = 3U;
	volatile int8_t x332 = INT8_MAX;
	volatile int32_t t43 = -56658416;

    t43 = (x329==(x330<<(x331>x332)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint64_t x334 = 1981LLU;
	uint32_t x335 = 6U;
	static int8_t x336 = -1;
	static int32_t t44 = -1;

    t44 = (x333==(x334<<(x335>x336)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x346 = INT32_MAX;
	volatile int32_t x348 = INT32_MAX;

    t45 = (x345==(x346<<(x347>x348)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x353 = -691;
	uint8_t x355 = 42U;
	uint32_t x356 = 706U;
	volatile int32_t t46 = 20341850;

    t46 = (x353==(x354<<(x355>x356)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x365 = 15257;
	uint32_t x366 = UINT32_MAX;
	uint64_t x367 = 3419303716152042998LLU;
	int64_t x368 = -1LL;

    t47 = (x365==(x366<<(x367>x368)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x369 = UINT16_MAX;
	uint32_t x370 = 2234829U;
	static volatile int32_t t48 = 11771957;

    t48 = (x369==(x370<<(x371>x372)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x373 = -1;
	static int32_t x374 = 12;
	int8_t x375 = INT8_MIN;
	static uint32_t x376 = 26002670U;
	int32_t t49 = -518785677;

    t49 = (x373==(x374<<(x375>x376)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x381 = INT8_MIN;
	int16_t x383 = INT16_MIN;
	int16_t x384 = 389;
	volatile int32_t t50 = -957614183;

    t50 = (x381==(x382<<(x383>x384)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x393 = INT16_MIN;
	uint64_t x394 = UINT64_MAX;
	uint32_t x396 = UINT32_MAX;
	int32_t t51 = 1;

    t51 = (x393==(x394<<(x395>x396)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x397 = INT64_MAX;
	static uint8_t x398 = 121U;
	static volatile uint64_t x399 = 106816886LLU;
	volatile int64_t x400 = -1LL;
	static int32_t t52 = -23322804;

    t52 = (x397==(x398<<(x399>x400)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x414 = 14;
	int64_t x415 = INT64_MIN;
	uint16_t x416 = UINT16_MAX;
	volatile int32_t t53 = 3401323;

    t53 = (x413==(x414<<(x415>x416)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x422 = UINT64_MAX;
	int8_t x423 = INT8_MIN;
	int32_t t54 = 10;

    t54 = (x421==(x422<<(x423>x424)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x432 = 5LL;
	int32_t t55 = 2010520;

    t55 = (x429==(x430<<(x431>x432)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint8_t x434 = 1U;
	volatile int64_t x435 = INT64_MIN;
	volatile int64_t x436 = 50LL;

    t56 = (x433==(x434<<(x435>x436)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x437 = 1174854U;
	int16_t x438 = 1719;
	int16_t x439 = INT16_MIN;
	int64_t x440 = -1LL;
	static int32_t t57 = -44200507;

    t57 = (x437==(x438<<(x439>x440)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x442 = 1;
	uint64_t x443 = 6927126900529LLU;
	int8_t x444 = INT8_MIN;
	int32_t t58 = 5140023;

    t58 = (x441==(x442<<(x443>x444)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint16_t x461 = 132U;
	uint32_t x462 = 4U;
	int32_t x464 = INT32_MIN;
	int32_t t59 = 0;

    t59 = (x461==(x462<<(x463>x464)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x469 = INT8_MIN;
	uint32_t x470 = 2924U;
	static int16_t x471 = INT16_MAX;
	int16_t x472 = INT16_MIN;
	volatile int32_t t60 = -75580;

    t60 = (x469==(x470<<(x471>x472)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x473 = 5;
	uint8_t x474 = 4U;
	int16_t x475 = -58;
	volatile int16_t x476 = -15;
	volatile int32_t t61 = -2317;

    t61 = (x473==(x474<<(x475>x476)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x478 = 330267191315041136LLU;
	static volatile int32_t x479 = INT32_MIN;
	uint8_t x480 = UINT8_MAX;
	int32_t t62 = -3491516;

    t62 = (x477==(x478<<(x479>x480)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile uint64_t x481 = 99239501568LLU;
	static uint32_t x482 = UINT32_MAX;
	int32_t x483 = INT32_MIN;
	static uint8_t x484 = 23U;
	int32_t t63 = -51;

    t63 = (x481==(x482<<(x483>x484)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint64_t x491 = 463638604100LLU;
	volatile int16_t x492 = -6;
	volatile int32_t t64 = 463172255;

    t64 = (x489==(x490<<(x491>x492)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x493 = 1;
	static int16_t x494 = INT16_MAX;
	static int32_t x496 = 4414;
	int32_t t65 = 354812394;

    t65 = (x493==(x494<<(x495>x496)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x501 = INT8_MAX;
	volatile int64_t x502 = 648426482449061851LL;
	volatile uint32_t x503 = 2031U;
	volatile int64_t x504 = 1422LL;
	volatile int32_t t66 = -15059;

    t66 = (x501==(x502<<(x503>x504)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x505 = -1LL;
	int8_t x507 = INT8_MIN;
	int16_t x508 = -351;

    t67 = (x505==(x506<<(x507>x508)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile int16_t x513 = 1546;
	int8_t x514 = 2;
	uint16_t x516 = 5533U;
	volatile int32_t t68 = 586;

    t68 = (x513==(x514<<(x515>x516)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint16_t x518 = 2260U;
	uint32_t x519 = 101705868U;
	volatile int32_t x520 = INT32_MAX;

    t69 = (x517==(x518<<(x519>x520)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x525 = 545U;
	static int64_t x526 = 2733163204176702463LL;
	int8_t x527 = -1;
	int8_t x528 = INT8_MIN;
	int32_t t70 = -82;

    t70 = (x525==(x526<<(x527>x528)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile int32_t x537 = INT32_MIN;
	uint32_t x538 = UINT32_MAX;
	uint16_t x539 = UINT16_MAX;
	int32_t t71 = 35483;

    t71 = (x537==(x538<<(x539>x540)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x543 = 50208215U;
	int32_t t72 = -33;

    t72 = (x541==(x542<<(x543>x544)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x549 = 943;
	static uint8_t x550 = UINT8_MAX;
	static volatile int8_t x551 = INT8_MIN;
	int16_t x552 = -1;
	int32_t t73 = 38;

    t73 = (x549==(x550<<(x551>x552)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x557 = INT64_MIN;
	int32_t x558 = INT32_MAX;
	static volatile int8_t x560 = -3;

    t74 = (x557==(x558<<(x559>x560)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x563 = 24;
	uint16_t x564 = UINT16_MAX;
	volatile int32_t t75 = 13541881;

    t75 = (x561==(x562<<(x563>x564)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int32_t x581 = 3266;
	int8_t x582 = 38;
	int8_t x583 = INT8_MAX;
	volatile int32_t t76 = 45;

    t76 = (x581==(x582<<(x583>x584)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x585 = INT32_MAX;
	int16_t x587 = INT16_MIN;
	int64_t x588 = INT64_MAX;
	int32_t t77 = -216399117;

    t77 = (x585==(x586<<(x587>x588)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile uint8_t x589 = 27U;
	int16_t x590 = 1387;
	volatile int16_t x591 = -1;
	int32_t x592 = INT32_MIN;
	int32_t t78 = 0;

    t78 = (x589==(x590<<(x591>x592)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x597 = INT8_MIN;
	int8_t x598 = INT8_MAX;
	uint8_t x599 = UINT8_MAX;

    t79 = (x597==(x598<<(x599>x600)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x601 = -7080;
	volatile int64_t x604 = -58148942LL;
	int32_t t80 = -6042290;

    t80 = (x601==(x602<<(x603>x604)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x610 = UINT16_MAX;
	int8_t x611 = -1;
	int8_t x612 = -1;
	volatile int32_t t81 = 61838676;

    t81 = (x609==(x610<<(x611>x612)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x621 = 382857574071685363LLU;
	static int16_t x622 = 47;
	static int16_t x623 = -1;
	static volatile int32_t x624 = -1;
	int32_t t82 = 107325;

    t82 = (x621==(x622<<(x623>x624)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x625 = INT16_MIN;
	int16_t x627 = 45;
	int32_t t83 = -2;

    t83 = (x625==(x626<<(x627>x628)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x633 = INT16_MIN;
	volatile uint32_t x634 = 14U;
	volatile uint16_t x635 = 14U;
	int32_t t84 = -3166453;

    t84 = (x633==(x634<<(x635>x636)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint64_t x637 = 731LLU;
	static int8_t x638 = INT8_MAX;
	int64_t x639 = INT64_MIN;
	uint8_t x640 = 58U;
	volatile int32_t t85 = 52192;

    t85 = (x637==(x638<<(x639>x640)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x645 = 1U;
	static uint8_t x646 = UINT8_MAX;
	int16_t x647 = INT16_MIN;
	int64_t x648 = -1856561555LL;
	int32_t t86 = -5720134;

    t86 = (x645==(x646<<(x647>x648)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile int64_t x661 = 22907156334587LL;
	uint8_t x662 = 6U;
	int8_t x663 = INT8_MAX;
	int32_t t87 = -328;

    t87 = (x661==(x662<<(x663>x664)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint16_t x674 = 7732U;
	volatile int64_t x675 = INT64_MAX;
	uint64_t x676 = UINT64_MAX;
	int32_t t88 = 467324024;

    t88 = (x673==(x674<<(x675>x676)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x685 = -11;
	volatile uint64_t x686 = 3309648LLU;
	uint64_t x687 = 16398099438LLU;
	int8_t x688 = INT8_MIN;
	volatile int32_t t89 = 1;

    t89 = (x685==(x686<<(x687>x688)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x697 = -1;
	int32_t x698 = 3;
	volatile int32_t x699 = -1;
	uint64_t x700 = 438494175427355703LLU;

    t90 = (x697==(x698<<(x699>x700)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x705 = -8457971722850LL;
	uint16_t x706 = 15U;
	int8_t x707 = INT8_MIN;
	uint64_t x708 = 2036970920064540LLU;
	int32_t t91 = 15177;

    t91 = (x705==(x706<<(x707>x708)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint32_t x709 = UINT32_MAX;
	int8_t x710 = 2;
	uint64_t x712 = 519622733962LLU;
	static int32_t t92 = -953115112;

    t92 = (x709==(x710<<(x711>x712)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x713 = INT32_MIN;
	uint64_t x714 = UINT64_MAX;
	int16_t x715 = 1820;
	int8_t x716 = INT8_MAX;
	volatile int32_t t93 = -9221229;

    t93 = (x713==(x714<<(x715>x716)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x721 = 120LL;
	int32_t t94 = 112048699;

    t94 = (x721==(x722<<(x723>x724)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x725 = INT64_MIN;
	volatile int32_t x727 = INT32_MIN;
	static int16_t x728 = -1;
	int32_t t95 = -511;

    t95 = (x725==(x726<<(x727>x728)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x729 = -462743;
	int16_t x730 = 1;
	static volatile int64_t x732 = -99970LL;
	int32_t t96 = -685064;

    t96 = (x729==(x730<<(x731>x732)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int64_t x733 = -1367860434093LL;
	int32_t x734 = INT32_MAX;
	static int8_t x736 = INT8_MIN;
	int32_t t97 = -434;

    t97 = (x733==(x734<<(x735>x736)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x745 = -33;
	volatile int16_t x746 = 1;
	int32_t x747 = 355987210;
	int32_t x748 = -6178;
	int32_t t98 = -62;

    t98 = (x745==(x746<<(x747>x748)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint16_t x749 = 11U;
	volatile uint16_t x752 = UINT16_MAX;

    t99 = (x749==(x750<<(x751>x752)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint8_t x781 = 112U;
	volatile int16_t x782 = 111;
	static int16_t x783 = INT16_MIN;
	int8_t x784 = INT8_MIN;

    t100 = (x781==(x782<<(x783>x784)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x790 = INT64_MAX;
	int32_t x791 = INT32_MIN;
	static int8_t x792 = INT8_MIN;
	volatile int32_t t101 = -1473;

    t101 = (x789==(x790<<(x791>x792)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x797 = INT16_MAX;
	volatile int16_t x798 = 201;
	uint64_t x799 = 1161369771786010679LLU;
	int8_t x800 = 3;
	int32_t t102 = -680162005;

    t102 = (x797==(x798<<(x799>x800)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x805 = 0;
	uint16_t x807 = UINT16_MAX;
	int32_t x808 = INT32_MIN;

    t103 = (x805==(x806<<(x807>x808)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x809 = INT64_MIN;
	uint64_t x810 = 764LLU;
	int32_t x811 = -1;
	volatile int32_t t104 = -80;

    t104 = (x809==(x810<<(x811>x812)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x817 = -1LL;
	static int32_t x818 = INT32_MAX;
	volatile uint16_t x819 = 209U;
	int32_t x820 = INT32_MAX;
	int32_t t105 = 1985;

    t105 = (x817==(x818<<(x819>x820)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x821 = 33494;
	static uint16_t x822 = 3142U;
	uint64_t x823 = UINT64_MAX;

    t106 = (x821==(x822<<(x823>x824)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile uint64_t x841 = 34376747LLU;
	static int32_t x842 = 13;
	int16_t x843 = INT16_MIN;
	static uint16_t x844 = 2U;
	volatile int32_t t107 = -204318318;

    t107 = (x841==(x842<<(x843>x844)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x849 = 915030801U;
	int8_t x850 = INT8_MAX;
	uint16_t x851 = 25249U;
	int32_t x852 = INT32_MAX;
	volatile int32_t t108 = 427;

    t108 = (x849==(x850<<(x851>x852)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint16_t x857 = 3664U;
	uint64_t x858 = 13820246856LLU;
	int16_t x859 = -1;
	int16_t x860 = INT16_MIN;
	int32_t t109 = -2199;

    t109 = (x857==(x858<<(x859>x860)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int8_t x867 = 21;
	volatile int16_t x868 = INT16_MAX;
	int32_t t110 = 6168549;

    t110 = (x865==(x866<<(x867>x868)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int64_t x869 = INT64_MIN;
	uint16_t x870 = UINT16_MAX;
	static uint8_t x871 = 3U;
	volatile uint64_t x872 = UINT64_MAX;
	static volatile int32_t t111 = 835405401;

    t111 = (x869==(x870<<(x871>x872)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x886 = INT64_MAX;
	int16_t x887 = INT16_MIN;
	static volatile int16_t x888 = INT16_MIN;
	static int32_t t112 = -19;

    t112 = (x885==(x886<<(x887>x888)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int8_t x890 = 0;
	uint16_t x891 = UINT16_MAX;
	int64_t x892 = INT64_MIN;
	int32_t t113 = -3;

    t113 = (x889==(x890<<(x891>x892)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x913 = 3859;
	int32_t t114 = -406441112;

    t114 = (x913==(x914<<(x915>x916)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x917 = -926;
	int8_t x919 = INT8_MIN;
	static uint8_t x920 = 5U;

    t115 = (x917==(x918<<(x919>x920)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x926 = 1U;
	uint16_t x928 = UINT16_MAX;
	int32_t t116 = -729192;

    t116 = (x925==(x926<<(x927>x928)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x941 = INT32_MIN;
	int64_t x942 = 227225908707895592LL;
	uint32_t x943 = 1U;
	int64_t x944 = INT64_MIN;
	volatile int32_t t117 = 21515348;

    t117 = (x941==(x942<<(x943>x944)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint8_t x945 = UINT8_MAX;
	int16_t x946 = INT16_MAX;
	volatile int32_t t118 = 52628;

    t118 = (x945==(x946<<(x947>x948)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x949 = INT64_MAX;
	volatile int16_t x951 = -1;
	static int16_t x952 = 0;
	int32_t t119 = -662231;

    t119 = (x949==(x950<<(x951>x952)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x953 = INT8_MAX;
	static volatile int16_t x954 = INT16_MAX;
	uint8_t x955 = 6U;
	uint64_t x956 = 15LLU;
	volatile int32_t t120 = 569633;

    t120 = (x953==(x954<<(x955>x956)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x962 = UINT16_MAX;
	int8_t x964 = -1;
	int32_t t121 = -58366253;

    t121 = (x961==(x962<<(x963>x964)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x965 = -1843723888521890LL;
	volatile uint64_t x966 = 1647961451711LLU;
	static volatile int64_t x967 = 3395LL;
	int64_t x968 = INT64_MIN;
	static volatile int32_t t122 = 28972845;

    t122 = (x965==(x966<<(x967>x968)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x969 = INT32_MIN;
	static uint32_t x970 = 2672147U;
	int16_t x971 = INT16_MIN;
	static uint64_t x972 = 15LLU;
	static int32_t t123 = -27889646;

    t123 = (x969==(x970<<(x971>x972)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x981 = INT8_MAX;
	static uint8_t x982 = 8U;
	volatile int16_t x983 = 9959;
	int16_t x984 = INT16_MAX;
	volatile int32_t t124 = 157;

    t124 = (x981==(x982<<(x983>x984)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int64_t x987 = INT64_MAX;
	int64_t x988 = INT64_MIN;
	int32_t t125 = -118;

    t125 = (x985==(x986<<(x987>x988)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x1001 = 9U;
	uint8_t x1002 = UINT8_MAX;
	int64_t x1003 = INT64_MIN;
	uint64_t x1004 = 137LLU;
	int32_t t126 = -91747;

    t126 = (x1001==(x1002<<(x1003>x1004)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x1005 = 3008U;
	volatile uint64_t x1006 = UINT64_MAX;
	uint8_t x1007 = 7U;
	uint32_t x1008 = 238087U;

    t127 = (x1005==(x1006<<(x1007>x1008)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int32_t x1025 = INT32_MAX;
	volatile uint64_t x1026 = 3274138508LLU;
	static int64_t x1028 = -1LL;

    t128 = (x1025==(x1026<<(x1027>x1028)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x1033 = INT64_MAX;
	int32_t t129 = -1273946;

    t129 = (x1033==(x1034<<(x1035>x1036)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x1038 = 121;
	int16_t x1039 = INT16_MAX;
	volatile uint64_t x1040 = 1728354925010LLU;

    t130 = (x1037==(x1038<<(x1039>x1040)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int8_t x1049 = -1;
	uint64_t x1050 = 31LLU;
	static int16_t x1052 = 0;
	int32_t t131 = -7;

    t131 = (x1049==(x1050<<(x1051>x1052)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x1055 = INT64_MIN;
	uint16_t x1056 = 746U;
	volatile int32_t t132 = -8353155;

    t132 = (x1053==(x1054<<(x1055>x1056)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int64_t x1061 = 18297803753LL;
	static int8_t x1062 = INT8_MAX;
	static int8_t x1063 = INT8_MIN;
	int64_t x1064 = 22400601403142037LL;
	volatile int32_t t133 = 5382;

    t133 = (x1061==(x1062<<(x1063>x1064)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x1066 = 1652U;
	uint32_t x1067 = 28093U;
	volatile int8_t x1068 = INT8_MIN;
	volatile int32_t t134 = -353599;

    t134 = (x1065==(x1066<<(x1067>x1068)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x1069 = 258;
	static int64_t x1070 = 3770915578LL;
	static volatile int8_t x1072 = INT8_MIN;
	volatile int32_t t135 = -56122;

    t135 = (x1069==(x1070<<(x1071>x1072)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x1077 = INT64_MIN;
	uint64_t x1078 = 2203310684643829441LLU;
	volatile uint32_t x1079 = 10U;
	int16_t x1080 = -31;
	static volatile int32_t t136 = 1;

    t136 = (x1077==(x1078<<(x1079>x1080)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint32_t x1081 = 522776U;
	volatile uint64_t x1082 = UINT64_MAX;
	int8_t x1083 = 0;
	int32_t x1084 = INT32_MIN;

    t137 = (x1081==(x1082<<(x1083>x1084)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x1085 = INT64_MIN;
	int16_t x1086 = INT16_MAX;
	int32_t x1087 = -1;
	uint32_t x1088 = 40U;
	int32_t t138 = -35;

    t138 = (x1085==(x1086<<(x1087>x1088)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x1093 = INT64_MAX;
	uint32_t x1094 = 31U;
	uint32_t x1095 = UINT32_MAX;
	int64_t x1096 = INT64_MIN;
	volatile int32_t t139 = 30;

    t139 = (x1093==(x1094<<(x1095>x1096)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x1098 = INT64_MAX;
	int8_t x1099 = -5;
	int8_t x1100 = 6;

    t140 = (x1097==(x1098<<(x1099>x1100)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int32_t x1105 = INT32_MAX;
	int8_t x1106 = INT8_MAX;
	static int8_t x1108 = INT8_MIN;
	volatile int32_t t141 = -171047;

    t141 = (x1105==(x1106<<(x1107>x1108)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x1110 = UINT8_MAX;
	int32_t x1111 = 1;
	int32_t t142 = -2474;

    t142 = (x1109==(x1110<<(x1111>x1112)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x1113 = -1LL;
	int8_t x1114 = 0;
	uint16_t x1115 = 25130U;
	int8_t x1116 = INT8_MAX;
	int32_t t143 = -148841707;

    t143 = (x1113==(x1114<<(x1115>x1116)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int64_t x1119 = INT64_MAX;
	int64_t x1120 = -31LL;
	int32_t t144 = 793;

    t144 = (x1117==(x1118<<(x1119>x1120)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x1121 = 9U;
	uint8_t x1122 = UINT8_MAX;
	int8_t x1124 = INT8_MIN;
	volatile int32_t t145 = -20922864;

    t145 = (x1121==(x1122<<(x1123>x1124)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x1129 = 16;
	uint16_t x1130 = 25U;
	int32_t x1131 = INT32_MAX;
	volatile uint32_t x1132 = 10415261U;

    t146 = (x1129==(x1130<<(x1131>x1132)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint64_t x1134 = 7264673012732LLU;
	uint32_t x1135 = UINT32_MAX;
	static uint32_t x1136 = 336222U;
	static int32_t t147 = 2587843;

    t147 = (x1133==(x1134<<(x1135>x1136)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x1140 = 37;
	static volatile int32_t t148 = 977680108;

    t148 = (x1137==(x1138<<(x1139>x1140)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x1141 = INT32_MIN;
	uint8_t x1142 = 0U;
	uint16_t x1143 = 1U;
	int8_t x1144 = INT8_MAX;

    t149 = (x1141==(x1142<<(x1143>x1144)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x1149 = INT32_MAX;
	static uint16_t x1150 = UINT16_MAX;
	int32_t x1151 = 162342;
	int64_t x1152 = -397536751LL;
	int32_t t150 = -6560507;

    t150 = (x1149==(x1150<<(x1151>x1152)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x1165 = -1236293581589425LL;
	volatile int32_t x1166 = 1145;
	uint16_t x1167 = 23694U;
	volatile int32_t x1168 = INT32_MAX;
	volatile int32_t t151 = 24790;

    t151 = (x1165==(x1166<<(x1167>x1168)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x1173 = INT32_MIN;
	int8_t x1176 = INT8_MAX;
	int32_t t152 = -169861640;

    t152 = (x1173==(x1174<<(x1175>x1176)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x1181 = INT8_MAX;
	volatile uint32_t x1182 = UINT32_MAX;
	static volatile uint8_t x1183 = 29U;
	volatile int8_t x1184 = 8;
	volatile int32_t t153 = 1;

    t153 = (x1181==(x1182<<(x1183>x1184)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint64_t x1186 = 142881143481LLU;
	static volatile uint64_t x1188 = 8LLU;
	volatile int32_t t154 = 13650;

    t154 = (x1185==(x1186<<(x1187>x1188)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x1194 = UINT16_MAX;
	uint64_t x1196 = 1630753669551304486LLU;
	volatile int32_t t155 = -2030;

    t155 = (x1193==(x1194<<(x1195>x1196)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile uint32_t x1200 = UINT32_MAX;
	static int32_t t156 = -5115538;

    t156 = (x1197==(x1198<<(x1199>x1200)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x1205 = INT8_MIN;
	volatile uint8_t x1206 = UINT8_MAX;
	int32_t t157 = -19650328;

    t157 = (x1205==(x1206<<(x1207>x1208)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static int32_t x1213 = INT32_MIN;
	int8_t x1214 = INT8_MAX;
	volatile int16_t x1215 = INT16_MIN;
	volatile uint16_t x1216 = 1U;
	int32_t t158 = 26298956;

    t158 = (x1213==(x1214<<(x1215>x1216)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x1217 = INT64_MIN;
	uint16_t x1218 = 10U;
	int16_t x1219 = INT16_MAX;
	uint64_t x1220 = UINT64_MAX;
	volatile int32_t t159 = -197458;

    t159 = (x1217==(x1218<<(x1219>x1220)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int8_t x1221 = INT8_MIN;
	uint8_t x1222 = 0U;
	uint64_t x1223 = 566812105LLU;
	int32_t x1224 = INT32_MAX;

    t160 = (x1221==(x1222<<(x1223>x1224)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x1225 = 3113U;
	int32_t x1226 = INT32_MAX;
	int16_t x1227 = -1;
	int8_t x1228 = INT8_MAX;

    t161 = (x1225==(x1226<<(x1227>x1228)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static int8_t x1229 = 0;
	uint8_t x1231 = 19U;
	int8_t x1232 = INT8_MAX;

    t162 = (x1229==(x1230<<(x1231>x1232)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x1233 = INT32_MAX;
	uint64_t x1234 = 275748079401366LLU;
	int8_t x1235 = INT8_MAX;
	int32_t x1236 = INT32_MAX;
	volatile int32_t t163 = 17763516;

    t163 = (x1233==(x1234<<(x1235>x1236)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static int32_t x1237 = INT32_MIN;
	static uint32_t x1238 = 1660308U;
	static int16_t x1239 = INT16_MIN;
	static uint8_t x1240 = 22U;

    t164 = (x1237==(x1238<<(x1239>x1240)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint16_t x1253 = UINT16_MAX;
	volatile uint8_t x1254 = 3U;
	uint8_t x1255 = 26U;
	volatile int32_t t165 = -87271446;

    t165 = (x1253==(x1254<<(x1255>x1256)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x1257 = INT64_MIN;

    t166 = (x1257==(x1258<<(x1259>x1260)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x1281 = INT8_MAX;
	uint8_t x1283 = UINT8_MAX;
	uint64_t x1284 = 208141743169074712LLU;
	static volatile int32_t t167 = 1105;

    t167 = (x1281==(x1282<<(x1283>x1284)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x1289 = INT8_MAX;
	static int64_t x1290 = 573LL;
	int16_t x1291 = -1;
	static volatile int32_t t168 = 24;

    t168 = (x1289==(x1290<<(x1291>x1292)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint8_t x1309 = 0U;
	uint8_t x1310 = 31U;
	int64_t x1311 = -1LL;
	uint32_t x1312 = 102491U;
	volatile int32_t t169 = -507582;

    t169 = (x1309==(x1310<<(x1311>x1312)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x1317 = INT16_MIN;
	uint8_t x1318 = 2U;
	volatile int8_t x1319 = 0;
	static int16_t x1320 = INT16_MAX;
	int32_t t170 = 2821;

    t170 = (x1317==(x1318<<(x1319>x1320)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x1322 = UINT16_MAX;
	int16_t x1323 = -889;
	static volatile int32_t t171 = -895312242;

    t171 = (x1321==(x1322<<(x1323>x1324)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x1325 = INT16_MIN;
	int64_t x1327 = -280059799154425LL;
	volatile int32_t x1328 = -1;

    t172 = (x1325==(x1326<<(x1327>x1328)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x1333 = -1LL;
	uint64_t x1334 = 2LLU;
	volatile uint16_t x1336 = 0U;

    t173 = (x1333==(x1334<<(x1335>x1336)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int16_t x1337 = 459;
	int8_t x1338 = INT8_MAX;
	int32_t x1339 = INT32_MIN;
	static volatile uint64_t x1340 = 973412868992LLU;
	static int32_t t174 = -13;

    t174 = (x1337==(x1338<<(x1339>x1340)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x1351 = INT16_MAX;
	static int32_t t175 = 2;

    t175 = (x1349==(x1350<<(x1351>x1352)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x1353 = INT8_MIN;
	int16_t x1355 = 1493;
	int16_t x1356 = -2827;
	volatile int32_t t176 = 12;

    t176 = (x1353==(x1354<<(x1355>x1356)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x1357 = 19354;
	static volatile uint32_t x1358 = 3479U;
	int16_t x1360 = -81;
	static volatile int32_t t177 = 233166;

    t177 = (x1357==(x1358<<(x1359>x1360)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x1361 = INT32_MAX;
	int8_t x1362 = 2;
	int16_t x1363 = INT16_MIN;
	int8_t x1364 = INT8_MIN;
	int32_t t178 = 9010;

    t178 = (x1361==(x1362<<(x1363>x1364)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x1373 = -1;
	uint32_t x1375 = UINT32_MAX;
	int8_t x1376 = INT8_MIN;
	int32_t t179 = -6330;

    t179 = (x1373==(x1374<<(x1375>x1376)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int32_t x1385 = INT32_MIN;
	uint8_t x1386 = 39U;
	static uint32_t x1387 = 55957U;
	int8_t x1388 = 42;
	static int32_t t180 = 3;

    t180 = (x1385==(x1386<<(x1387>x1388)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile int64_t x1389 = -67231967468567965LL;
	uint32_t x1390 = 47981U;
	int16_t x1391 = 7;
	int32_t t181 = 1593220;

    t181 = (x1389==(x1390<<(x1391>x1392)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x1394 = 34202339U;
	static volatile uint16_t x1395 = 2U;
	int32_t t182 = 166427;

    t182 = (x1393==(x1394<<(x1395>x1396)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint16_t x1401 = UINT16_MAX;
	volatile int32_t x1404 = INT32_MAX;
	volatile int32_t t183 = -3054550;

    t183 = (x1401==(x1402<<(x1403>x1404)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x1405 = INT64_MAX;
	int32_t x1406 = INT32_MAX;
	int64_t x1407 = INT64_MIN;

    t184 = (x1405==(x1406<<(x1407>x1408)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x1413 = UINT16_MAX;
	uint8_t x1414 = 5U;
	uint32_t x1416 = UINT32_MAX;

    t185 = (x1413==(x1414<<(x1415>x1416)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x1417 = INT64_MIN;
	int64_t x1418 = 7LL;
	static int64_t x1420 = INT64_MIN;
	volatile int32_t t186 = -73830736;

    t186 = (x1417==(x1418<<(x1419>x1420)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x1426 = UINT8_MAX;
	int64_t x1427 = -1LL;
	static volatile uint8_t x1428 = 43U;
	volatile int32_t t187 = 522;

    t187 = (x1425==(x1426<<(x1427>x1428)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x1429 = INT16_MAX;
	static volatile uint32_t x1430 = 383U;
	static int64_t x1432 = INT64_MIN;

    t188 = (x1429==(x1430<<(x1431>x1432)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x1433 = 174U;
	uint16_t x1434 = 594U;
	uint32_t x1435 = 23U;
	uint8_t x1436 = UINT8_MAX;

    t189 = (x1433==(x1434<<(x1435>x1436)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x1442 = UINT8_MAX;
	int64_t x1443 = 1LL;
	static uint32_t x1444 = 117313U;
	volatile int32_t t190 = -3836;

    t190 = (x1441==(x1442<<(x1443>x1444)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x1445 = UINT32_MAX;
	volatile uint8_t x1446 = 20U;
	uint8_t x1447 = 1U;
	int64_t x1448 = -30876651900787471LL;
	static volatile int32_t t191 = -61886267;

    t191 = (x1445==(x1446<<(x1447>x1448)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x1452 = -95;
	static int32_t t192 = 0;

    t192 = (x1449==(x1450<<(x1451>x1452)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint8_t x1461 = 1U;
	int8_t x1462 = INT8_MAX;
	static volatile int16_t x1463 = -112;
	static uint64_t x1464 = UINT64_MAX;
	static int32_t t193 = -222;

    t193 = (x1461==(x1462<<(x1463>x1464)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x1465 = 3050688103LL;
	int32_t x1466 = 44290;
	volatile uint8_t x1467 = UINT8_MAX;
	int32_t t194 = 15;

    t194 = (x1465==(x1466<<(x1467>x1468)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x1473 = UINT8_MAX;
	static uint32_t x1474 = 3539276U;
	int64_t x1475 = INT64_MIN;
	static int64_t x1476 = -1LL;
	int32_t t195 = 420082;

    t195 = (x1473==(x1474<<(x1475>x1476)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint16_t x1477 = 2U;
	int16_t x1479 = INT16_MIN;
	volatile int32_t x1480 = INT32_MAX;
	volatile int32_t t196 = 50909250;

    t196 = (x1477==(x1478<<(x1479>x1480)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x1485 = -1LL;
	uint8_t x1486 = 24U;
	int16_t x1487 = INT16_MAX;
	int32_t x1488 = 211;
	int32_t t197 = 1791937;

    t197 = (x1485==(x1486<<(x1487>x1488)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x1489 = INT16_MIN;
	int8_t x1491 = 30;
	static int32_t x1492 = -378060578;

    t198 = (x1489==(x1490<<(x1491>x1492)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x1502 = UINT64_MAX;
	int32_t x1504 = INT32_MIN;

    t199 = (x1501==(x1502<<(x1503>x1504)));

    if (t199 != 0) { NG(); } else { ; }
	
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

