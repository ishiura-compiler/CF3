
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

int64_t x3 = INT64_MIN;
int32_t x17 = INT32_MAX;
int64_t x18 = -1LL;
int16_t x51 = INT16_MIN;
static int32_t x54 = INT32_MAX;
int8_t x55 = -1;
volatile int8_t x74 = 0;
static volatile int64_t x85 = INT64_MAX;
volatile int32_t x100 = INT32_MAX;
int32_t t12 = 11166475;
uint8_t x125 = 4U;
uint16_t x151 = 3438U;
static volatile int32_t t16 = -29028077;
int16_t x159 = 81;
volatile int32_t t18 = -268749;
static int64_t x179 = -1LL;
volatile int8_t x187 = INT8_MAX;
static uint32_t x201 = 12731623U;
uint64_t x202 = 3LLU;
uint32_t t24 = 1U;
volatile int32_t t25 = -1593;
uint16_t x209 = 254U;
int8_t x220 = -1;
static uint8_t x240 = 29U;
volatile int8_t x249 = 2;
int16_t x258 = -3652;
uint16_t x264 = 5U;
int64_t x269 = INT64_MAX;
static int64_t t34 = INT64_MAX;
uint16_t x290 = 168U;
int16_t x291 = INT16_MIN;
volatile int64_t t37 = INT64_MAX;
int64_t x310 = INT64_MAX;
volatile int64_t x322 = 422LL;
uint64_t x324 = 353042915557095447LLU;
volatile uint64_t t41 = 19785137514LLU;
int16_t x370 = -121;
int16_t x372 = INT16_MAX;
uint64_t t42 = UINT64_MAX;
static uint16_t x373 = 26916U;
volatile int8_t x376 = INT8_MIN;
uint32_t x377 = 411U;
int16_t x380 = -1;
int16_t x385 = INT16_MAX;
volatile int8_t x396 = -1;
int8_t x398 = INT8_MIN;
uint64_t x409 = 117485081833LLU;
static int8_t x410 = INT8_MIN;
volatile int16_t x411 = -49;
int8_t x412 = -1;
int16_t x420 = INT16_MAX;
static int32_t x435 = -1;
int32_t t52 = 10;
int64_t t54 = INT64_MAX;
static int32_t x472 = -166584;
int8_t x496 = INT8_MIN;
volatile int16_t x527 = -1;
uint8_t x530 = 0U;
uint64_t x551 = 92343649197LLU;
static volatile int32_t t65 = -2758;
uint64_t x555 = 4LLU;
volatile int32_t t66 = -240396;
int32_t x557 = INT32_MAX;
uint64_t x558 = 61LLU;
int64_t x571 = INT64_MIN;
int64_t x572 = 27450066569583LL;
int32_t t68 = -8;
volatile int32_t t69 = -184121;
uint16_t x621 = 54U;
int64_t x624 = INT64_MIN;
volatile int32_t t71 = -13489;
uint16_t x638 = 4U;
uint32_t x646 = 11744985U;
volatile int8_t x650 = -14;
uint8_t x654 = 0U;
volatile int16_t x657 = 0;
static uint8_t x696 = 1U;
int32_t t80 = 706;
volatile uint64_t x705 = UINT64_MAX;
volatile uint64_t x729 = UINT64_MAX;
static int8_t x732 = -1;
uint16_t x733 = 28000U;
int8_t x734 = 0;
volatile uint16_t x735 = 4U;
static int32_t x752 = INT32_MIN;
static int64_t t90 = INT64_MAX;
volatile int16_t x759 = INT16_MIN;
volatile int32_t x772 = 38701940;
volatile int32_t t93 = -21;
uint8_t x783 = 25U;
int64_t x786 = INT64_MIN;
static int64_t x795 = INT64_MIN;
uint16_t x803 = 560U;
volatile int32_t t99 = 221741;
volatile uint16_t x830 = 58U;
static uint16_t x831 = 1369U;
int8_t x832 = -1;
static uint16_t x841 = 4039U;
static uint8_t x843 = 42U;
uint16_t x865 = 242U;
int16_t x867 = INT16_MIN;
volatile int32_t t103 = 18;
int32_t x870 = -1;
uint8_t x871 = UINT8_MAX;
static uint32_t x894 = UINT32_MAX;
int64_t x899 = INT64_MIN;
uint16_t x903 = UINT16_MAX;
static uint8_t x910 = UINT8_MAX;
int32_t t112 = 1;
int64_t x922 = -1LL;
volatile uint64_t x924 = 4601786978089224010LLU;
volatile int64_t x939 = INT64_MIN;
int64_t x954 = INT64_MAX;
int32_t t117 = 145087;
uint32_t x973 = 1U;
uint16_t x981 = UINT16_MAX;
int32_t x995 = INT32_MAX;
static int64_t x999 = INT64_MAX;
int8_t x1000 = INT8_MAX;
int8_t x1002 = INT8_MAX;
uint64_t x1012 = 134667366LLU;
int8_t x1015 = INT8_MIN;
static int64_t t128 = INT64_MAX;
static uint64_t x1022 = 8710272007274LLU;
int16_t x1032 = 402;
volatile int32_t t131 = -267;
int64_t x1038 = INT64_MIN;
int8_t x1045 = 50;
uint64_t x1057 = 9360852382LLU;
int8_t x1058 = -1;
uint64_t t135 = 15697187LLU;
int8_t x1065 = 0;
static volatile int32_t t136 = 569062024;
static int32_t x1070 = -130366544;
int8_t x1074 = -1;
uint64_t x1075 = 54254641453003929LLU;
static uint64_t x1076 = 255863975685685539LLU;
volatile uint32_t t138 = UINT32_MAX;
static volatile int32_t x1080 = 1;
volatile int32_t t139 = 26685047;
volatile uint32_t x1087 = 524711343U;
uint64_t x1091 = UINT64_MAX;
static uint32_t x1092 = 2147U;
volatile int8_t x1099 = INT8_MAX;
static int16_t x1113 = 3;
uint16_t x1115 = 20573U;
volatile uint8_t x1119 = 18U;
uint64_t x1121 = 79448LLU;
int64_t x1123 = 8574075639847LL;
static int8_t x1143 = -63;
uint16_t x1153 = 8440U;
int32_t x1155 = 3009;
static uint16_t x1171 = 1967U;
static uint64_t x1174 = 675207369193665LLU;
static uint8_t x1183 = 9U;
static int8_t x1190 = 56;
int16_t x1191 = 1;
static int32_t t155 = -871991;
int16_t x1220 = INT16_MIN;
uint8_t x1225 = 79U;
int32_t x1238 = INT32_MIN;
volatile int64_t x1239 = INT64_MIN;
volatile int16_t x1242 = -3653;
uint64_t x1257 = 2870083861993LLU;
int16_t x1258 = -200;
uint32_t x1261 = 104680U;
static int8_t x1264 = INT8_MIN;
int8_t x1287 = INT8_MIN;
uint8_t x1291 = 119U;
static volatile uint32_t t173 = UINT32_MAX;
int64_t x1314 = 2247150056121383622LL;
static int64_t x1323 = 182096LL;
int64_t t177 = 12973850LL;
int8_t x1350 = 61;
int64_t t180 = 0LL;
uint32_t x1370 = UINT32_MAX;
volatile int64_t t184 = 3LL;
volatile uint16_t x1389 = 0U;
uint16_t x1409 = 22015U;
int64_t x1411 = INT64_MIN;
uint16_t x1416 = 266U;
static int64_t x1428 = -1LL;
int16_t x1446 = INT16_MIN;
int16_t x1448 = INT16_MIN;
int32_t t192 = 3;
static int16_t x1457 = 14498;
int16_t x1460 = 10858;
volatile int32_t t195 = -24042743;
int64_t x1461 = INT64_MAX;
uint64_t x1486 = 407332122LLU;
static volatile int32_t x1487 = 1;
uint8_t x1488 = UINT8_MAX;


void f0(void) {
    	uint8_t x1 = 2U;
	volatile uint8_t x2 = 5U;
	volatile int32_t x4 = -1;
	static int32_t t0 = 427052452;

    t0 = (x1>>(x2==(x3%x4)));

    if (t0 != 2) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint16_t x19 = 10U;
	int32_t x20 = -1;
	volatile int32_t t1 = INT32_MAX;

    t1 = (x17>>(x18==(x19%x20)));

    if (t1 != INT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x33 = 5745937223879LLU;
	int16_t x34 = INT16_MAX;
	uint16_t x35 = 21608U;
	int64_t x36 = -13985127335326153LL;
	volatile uint64_t t2 = 3LLU;

    t2 = (x33>>(x34==(x35%x36)));

    if (t2 != 5745937223879LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x37 = 458962566786516848LLU;
	uint16_t x38 = 61U;
	int8_t x39 = 1;
	uint64_t x40 = 1439LLU;
	uint64_t t3 = 5979LLU;

    t3 = (x37>>(x38==(x39%x40)));

    if (t3 != 458962566786516848LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x49 = UINT64_MAX;
	uint16_t x50 = 29U;
	static uint32_t x52 = 62230921U;
	volatile uint64_t t4 = UINT64_MAX;

    t4 = (x49>>(x50==(x51%x52)));

    if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x53 = 1786008729U;
	int32_t x56 = INT32_MIN;
	uint32_t t5 = 0U;

    t5 = (x53>>(x54==(x55%x56)));

    if (t5 != 1786008729U) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x57 = 100033LLU;
	static int8_t x58 = -1;
	volatile int8_t x59 = INT8_MIN;
	volatile uint8_t x60 = 39U;
	static volatile uint64_t t6 = 3324711827LLU;

    t6 = (x57>>(x58==(x59%x60)));

    if (t6 != 100033LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x61 = 61;
	uint32_t x62 = 56641426U;
	int32_t x63 = 333094589;
	uint16_t x64 = 1U;
	volatile int32_t t7 = 20;

    t7 = (x61>>(x62==(x63%x64)));

    if (t7 != 61) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x65 = 1552810816LLU;
	static int64_t x66 = -8972LL;
	static int32_t x67 = 45381;
	static uint16_t x68 = 110U;
	static volatile uint64_t t8 = 392717898184LLU;

    t8 = (x65>>(x66==(x67%x68)));

    if (t8 != 1552810816LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile uint8_t x73 = 3U;
	uint16_t x75 = 25475U;
	static int32_t x76 = -5349;
	int32_t t9 = -440;

    t9 = (x73>>(x74==(x75%x76)));

    if (t9 != 3) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x86 = INT32_MIN;
	volatile int32_t x87 = -911813;
	volatile uint32_t x88 = UINT32_MAX;
	static int64_t t10 = INT64_MAX;

    t10 = (x85>>(x86==(x87%x88)));

    if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x89 = 1031760442LL;
	int64_t x90 = -2848LL;
	static uint8_t x91 = UINT8_MAX;
	uint8_t x92 = UINT8_MAX;
	volatile int64_t t11 = -125509618028975LL;

    t11 = (x89>>(x90==(x91%x92)));

    if (t11 != 1031760442LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x97 = INT8_MAX;
	int32_t x98 = INT32_MIN;
	uint16_t x99 = 33U;

    t12 = (x97>>(x98==(x99%x100)));

    if (t12 != 127) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x113 = 65417LL;
	int64_t x114 = INT64_MAX;
	static int64_t x115 = INT64_MAX;
	static uint32_t x116 = 10U;
	static int64_t t13 = -395944317120503LL;

    t13 = (x113>>(x114==(x115%x116)));

    if (t13 != 65417LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x126 = INT64_MIN;
	static int32_t x127 = INT32_MIN;
	uint8_t x128 = UINT8_MAX;
	int32_t t14 = 2980;

    t14 = (x125>>(x126==(x127%x128)));

    if (t14 != 4) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint64_t x141 = 4677856LLU;
	static uint32_t x142 = 1U;
	static volatile uint16_t x143 = UINT16_MAX;
	static volatile int64_t x144 = INT64_MIN;
	volatile uint64_t t15 = 80615509LLU;

    t15 = (x141>>(x142==(x143%x144)));

    if (t15 != 4677856LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x149 = UINT16_MAX;
	uint32_t x150 = 85U;
	int64_t x152 = INT64_MIN;

    t16 = (x149>>(x150==(x151%x152)));

    if (t16 != 65535) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x153 = 873755840;
	int64_t x154 = INT64_MIN;
	uint8_t x155 = 0U;
	int8_t x156 = -31;
	volatile int32_t t17 = -247200;

    t17 = (x153>>(x154==(x155%x156)));

    if (t17 != 873755840) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint8_t x157 = 1U;
	uint64_t x158 = UINT64_MAX;
	static int16_t x160 = INT16_MIN;

    t18 = (x157>>(x158==(x159%x160)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x161 = 26224911;
	int16_t x162 = 44;
	int16_t x163 = INT16_MAX;
	volatile int32_t x164 = -1;
	int32_t t19 = 390306;

    t19 = (x161>>(x162==(x163%x164)));

    if (t19 != 26224911) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint16_t x173 = UINT16_MAX;
	int16_t x174 = -1;
	int16_t x175 = -1;
	static uint32_t x176 = UINT32_MAX;
	volatile int32_t t20 = 14718;

    t20 = (x173>>(x174==(x175%x176)));

    if (t20 != 65535) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint32_t x177 = 218U;
	static int32_t x178 = -431;
	volatile uint16_t x180 = 29U;
	volatile uint32_t t21 = 1425900U;

    t21 = (x177>>(x178==(x179%x180)));

    if (t21 != 218U) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint8_t x185 = UINT8_MAX;
	int8_t x186 = INT8_MIN;
	static int16_t x188 = INT16_MAX;
	static int32_t t22 = -64313484;

    t22 = (x185>>(x186==(x187%x188)));

    if (t22 != 255) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x197 = 14U;
	volatile int16_t x198 = -1;
	volatile int16_t x199 = -72;
	volatile uint16_t x200 = 246U;
	volatile int32_t t23 = -2067;

    t23 = (x197>>(x198==(x199%x200)));

    if (t23 != 14) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x203 = -6736LL;
	static uint8_t x204 = UINT8_MAX;

    t24 = (x201>>(x202==(x203%x204)));

    if (t24 != 12731623U) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint8_t x205 = 58U;
	int16_t x206 = INT16_MAX;
	int8_t x207 = -1;
	int32_t x208 = -1;

    t25 = (x205>>(x206==(x207%x208)));

    if (t25 != 58) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x210 = INT16_MIN;
	volatile uint32_t x211 = UINT32_MAX;
	static int16_t x212 = -21;
	int32_t t26 = -61024432;

    t26 = (x209>>(x210==(x211%x212)));

    if (t26 != 254) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x213 = 92U;
	static volatile int64_t x214 = -4548291173763784971LL;
	volatile int16_t x215 = INT16_MIN;
	volatile uint8_t x216 = UINT8_MAX;
	volatile uint32_t t27 = 306982U;

    t27 = (x213>>(x214==(x215%x216)));

    if (t27 != 92U) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x217 = INT8_MAX;
	int8_t x218 = -1;
	volatile int16_t x219 = -1;
	static int32_t t28 = 106560;

    t28 = (x217>>(x218==(x219%x220)));

    if (t28 != 127) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint8_t x237 = 29U;
	int16_t x238 = -212;
	static int32_t x239 = INT32_MAX;
	int32_t t29 = -553;

    t29 = (x237>>(x238==(x239%x240)));

    if (t29 != 29) { NG(); } else { ; }
	
}

void f30(void) {
    	static int16_t x250 = -6;
	int32_t x251 = INT32_MIN;
	static uint32_t x252 = 40U;
	volatile int32_t t30 = -49128056;

    t30 = (x249>>(x250==(x251%x252)));

    if (t30 != 2) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x257 = 20U;
	int8_t x259 = INT8_MAX;
	int16_t x260 = 2;
	volatile uint32_t t31 = 27839U;

    t31 = (x257>>(x258==(x259%x260)));

    if (t31 != 20U) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint8_t x261 = UINT8_MAX;
	uint16_t x262 = 6465U;
	int16_t x263 = -2;
	volatile int32_t t32 = -1;

    t32 = (x261>>(x262==(x263%x264)));

    if (t32 != 255) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint64_t x265 = 571424803386959643LLU;
	uint64_t x266 = 12373355247LLU;
	uint32_t x267 = 189796U;
	static int32_t x268 = INT32_MAX;
	volatile uint64_t t33 = 13751740848480LLU;

    t33 = (x265>>(x266==(x267%x268)));

    if (t33 != 571424803386959643LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x270 = -1;
	uint8_t x271 = UINT8_MAX;
	volatile int64_t x272 = INT64_MIN;

    t34 = (x269>>(x270==(x271%x272)));

    if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint8_t x285 = 1U;
	int64_t x286 = INT64_MIN;
	volatile int32_t x287 = INT32_MAX;
	volatile int64_t x288 = -1LL;
	volatile int32_t t35 = -7;

    t35 = (x285>>(x286==(x287%x288)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint16_t x289 = 16U;
	uint32_t x292 = UINT32_MAX;
	volatile int32_t t36 = -2327268;

    t36 = (x289>>(x290==(x291%x292)));

    if (t36 != 16) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x293 = INT64_MAX;
	int64_t x294 = INT64_MIN;
	static volatile int8_t x295 = INT8_MIN;
	static int8_t x296 = -1;

    t37 = (x293>>(x294==(x295%x296)));

    if (t37 != INT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x309 = 11U;
	static volatile int32_t x311 = INT32_MAX;
	uint32_t x312 = 13386478U;
	volatile int32_t t38 = 6132391;

    t38 = (x309>>(x310==(x311%x312)));

    if (t38 != 11) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x321 = UINT64_MAX;
	int64_t x323 = -1LL;
	uint64_t t39 = UINT64_MAX;

    t39 = (x321>>(x322==(x323%x324)));

    if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x357 = 11;
	volatile int32_t x358 = INT32_MIN;
	volatile int8_t x359 = INT8_MAX;
	int64_t x360 = INT64_MIN;
	volatile int32_t t40 = -1696;

    t40 = (x357>>(x358==(x359%x360)));

    if (t40 != 11) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint64_t x361 = 14795447309LLU;
	static int32_t x362 = -1;
	volatile uint32_t x363 = 2541142U;
	static int8_t x364 = -30;

    t41 = (x361>>(x362==(x363%x364)));

    if (t41 != 14795447309LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint64_t x369 = UINT64_MAX;
	int32_t x371 = -6;

    t42 = (x369>>(x370==(x371%x372)));

    if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x374 = INT8_MIN;
	volatile int32_t x375 = -1;
	volatile int32_t t43 = -2;

    t43 = (x373>>(x374==(x375%x376)));

    if (t43 != 26916) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int16_t x378 = -1;
	int32_t x379 = INT32_MIN;
	static uint32_t t44 = 22835U;

    t44 = (x377>>(x378==(x379%x380)));

    if (t44 != 411U) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x386 = 5U;
	int16_t x387 = INT16_MIN;
	volatile int16_t x388 = INT16_MIN;
	volatile int32_t t45 = -9;

    t45 = (x385>>(x386==(x387%x388)));

    if (t45 != 32767) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint64_t x389 = 10817484LLU;
	volatile int8_t x390 = -10;
	uint64_t x391 = 116LLU;
	static volatile int8_t x392 = -14;
	static volatile uint64_t t46 = 2210136659955055LLU;

    t46 = (x389>>(x390==(x391%x392)));

    if (t46 != 10817484LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x393 = 2U;
	uint64_t x394 = 2167102LLU;
	int16_t x395 = INT16_MIN;
	int32_t t47 = -704;

    t47 = (x393>>(x394==(x395%x396)));

    if (t47 != 2) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x397 = 15726;
	int64_t x399 = -1LL;
	int8_t x400 = INT8_MIN;
	volatile int32_t t48 = 28;

    t48 = (x397>>(x398==(x399%x400)));

    if (t48 != 15726) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x405 = 94U;
	int64_t x406 = -1LL;
	int16_t x407 = INT16_MAX;
	uint64_t x408 = UINT64_MAX;
	static volatile int32_t t49 = 167417;

    t49 = (x405>>(x406==(x407%x408)));

    if (t49 != 94) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile uint64_t t50 = 870666677LLU;

    t50 = (x409>>(x410==(x411%x412)));

    if (t50 != 117485081833LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x417 = 3;
	static int64_t x418 = 133338028312662LL;
	uint32_t x419 = 699U;
	int32_t t51 = 107583706;

    t51 = (x417>>(x418==(x419%x420)));

    if (t51 != 3) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x433 = INT16_MAX;
	int64_t x434 = INT64_MIN;
	static uint32_t x436 = 3455867U;

    t52 = (x433>>(x434==(x435%x436)));

    if (t52 != 32767) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x437 = 32;
	int64_t x438 = INT64_MIN;
	static int32_t x439 = INT32_MAX;
	int64_t x440 = INT64_MIN;
	int32_t t53 = 894926522;

    t53 = (x437>>(x438==(x439%x440)));

    if (t53 != 32) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x461 = INT64_MAX;
	int8_t x462 = -1;
	volatile int8_t x463 = INT8_MIN;
	int64_t x464 = 172210332286576LL;

    t54 = (x461>>(x462==(x463%x464)));

    if (t54 != INT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int32_t x465 = INT32_MAX;
	static int64_t x466 = -659385006LL;
	int16_t x467 = INT16_MAX;
	int64_t x468 = -1473LL;
	static int32_t t55 = INT32_MAX;

    t55 = (x465>>(x466==(x467%x468)));

    if (t55 != INT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint64_t x469 = 6081274700366200LLU;
	volatile uint16_t x470 = 85U;
	int64_t x471 = INT64_MIN;
	static uint64_t t56 = 454183563LLU;

    t56 = (x469>>(x470==(x471%x472)));

    if (t56 != 6081274700366200LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x485 = 225489391LL;
	int16_t x486 = 741;
	uint64_t x487 = 1205770010LLU;
	int8_t x488 = INT8_MIN;
	volatile int64_t t57 = -25551034908349327LL;

    t57 = (x485>>(x486==(x487%x488)));

    if (t57 != 225489391LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int64_t x489 = 67889735218223LL;
	static uint32_t x490 = 53U;
	static uint32_t x491 = 0U;
	int16_t x492 = 3;
	volatile int64_t t58 = 38187LL;

    t58 = (x489>>(x490==(x491%x492)));

    if (t58 != 67889735218223LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x493 = 5U;
	int8_t x494 = INT8_MIN;
	int32_t x495 = -1;
	static uint32_t t59 = 387257U;

    t59 = (x493>>(x494==(x495%x496)));

    if (t59 != 5U) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x505 = 567;
	static int8_t x506 = 13;
	static volatile int16_t x507 = INT16_MIN;
	uint8_t x508 = 43U;
	int32_t t60 = -836987188;

    t60 = (x505>>(x506==(x507%x508)));

    if (t60 != 567) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x513 = UINT16_MAX;
	volatile int16_t x514 = INT16_MIN;
	static int16_t x515 = INT16_MAX;
	uint32_t x516 = UINT32_MAX;
	static int32_t t61 = -4;

    t61 = (x513>>(x514==(x515%x516)));

    if (t61 != 65535) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x525 = INT16_MAX;
	int8_t x526 = INT8_MIN;
	uint8_t x528 = UINT8_MAX;
	static int32_t t62 = -23;

    t62 = (x525>>(x526==(x527%x528)));

    if (t62 != 32767) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x529 = UINT64_MAX;
	int32_t x531 = INT32_MAX;
	static int16_t x532 = INT16_MIN;
	uint64_t t63 = UINT64_MAX;

    t63 = (x529>>(x530==(x531%x532)));

    if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x545 = 35078945;
	uint64_t x546 = 866065366647612010LLU;
	static int16_t x547 = -1;
	int16_t x548 = -6;
	volatile int32_t t64 = -396370191;

    t64 = (x545>>(x546==(x547%x548)));

    if (t64 != 35078945) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile uint8_t x549 = 41U;
	static int8_t x550 = INT8_MAX;
	int32_t x552 = 62;

    t65 = (x549>>(x550==(x551%x552)));

    if (t65 != 41) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x553 = 1;
	volatile uint8_t x554 = 0U;
	uint16_t x556 = 91U;

    t66 = (x553>>(x554==(x555%x556)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x559 = -19178;
	int16_t x560 = INT16_MAX;
	volatile int32_t t67 = INT32_MAX;

    t67 = (x557>>(x558==(x559%x560)));

    if (t67 != INT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x569 = INT8_MAX;
	int8_t x570 = INT8_MIN;

    t68 = (x569>>(x570==(x571%x572)));

    if (t68 != 127) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x589 = 1U;
	int32_t x590 = -277;
	int32_t x591 = -1;
	static int16_t x592 = 2;

    t69 = (x589>>(x590==(x591%x592)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint32_t x617 = 574202U;
	uint32_t x618 = 3604674U;
	static int32_t x619 = 0;
	static int16_t x620 = INT16_MIN;
	static volatile uint32_t t70 = 12U;

    t70 = (x617>>(x618==(x619%x620)));

    if (t70 != 574202U) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x622 = -2879468846739851923LL;
	int8_t x623 = -1;

    t71 = (x621>>(x622==(x623%x624)));

    if (t71 != 54) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint32_t x629 = 134U;
	int16_t x630 = INT16_MIN;
	int16_t x631 = INT16_MAX;
	volatile int16_t x632 = INT16_MIN;
	volatile uint32_t t72 = 29218547U;

    t72 = (x629>>(x630==(x631%x632)));

    if (t72 != 134U) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint32_t x637 = 101U;
	int16_t x639 = -1;
	int8_t x640 = 2;
	uint32_t t73 = 1188U;

    t73 = (x637>>(x638==(x639%x640)));

    if (t73 != 101U) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint64_t x641 = 5978429LLU;
	static int8_t x642 = -1;
	uint8_t x643 = 8U;
	int16_t x644 = INT16_MAX;
	volatile uint64_t t74 = 10725729201445934LLU;

    t74 = (x641>>(x642==(x643%x644)));

    if (t74 != 5978429LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint32_t x645 = UINT32_MAX;
	volatile int16_t x647 = 1;
	volatile int16_t x648 = -3173;
	uint32_t t75 = UINT32_MAX;

    t75 = (x645>>(x646==(x647%x648)));

    if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x649 = 1;
	int8_t x651 = 23;
	int32_t x652 = INT32_MIN;
	volatile int32_t t76 = 248;

    t76 = (x649>>(x650==(x651%x652)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x653 = INT16_MAX;
	int16_t x655 = 0;
	int32_t x656 = 793;
	static volatile int32_t t77 = -7032;

    t77 = (x653>>(x654==(x655%x656)));

    if (t77 != 16383) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x658 = UINT64_MAX;
	int64_t x659 = INT64_MIN;
	volatile int64_t x660 = -820902909503678981LL;
	int32_t t78 = -10967;

    t78 = (x657>>(x658==(x659%x660)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x665 = 4697618;
	int64_t x666 = INT64_MAX;
	int8_t x667 = -2;
	int8_t x668 = INT8_MIN;
	int32_t t79 = -2441389;

    t79 = (x665>>(x666==(x667%x668)));

    if (t79 != 4697618) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint8_t x693 = UINT8_MAX;
	static int64_t x694 = 824046998515LL;
	int64_t x695 = 113265308363417759LL;

    t80 = (x693>>(x694==(x695%x696)));

    if (t80 != 255) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int8_t x701 = 45;
	uint32_t x702 = 125503U;
	uint8_t x703 = 14U;
	volatile int16_t x704 = -1;
	volatile int32_t t81 = 1;

    t81 = (x701>>(x702==(x703%x704)));

    if (t81 != 45) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x706 = -2489;
	int64_t x707 = INT64_MIN;
	static int8_t x708 = INT8_MIN;
	volatile uint64_t t82 = UINT64_MAX;

    t82 = (x705>>(x706==(x707%x708)));

    if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x709 = 24;
	int8_t x710 = -1;
	int32_t x711 = 5;
	int16_t x712 = -1;
	volatile int32_t t83 = -127;

    t83 = (x709>>(x710==(x711%x712)));

    if (t83 != 24) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x721 = 0U;
	volatile int32_t x722 = -1;
	int8_t x723 = 11;
	static uint16_t x724 = 4U;
	volatile uint32_t t84 = 13U;

    t84 = (x721>>(x722==(x723%x724)));

    if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x725 = 2642U;
	uint16_t x726 = 1995U;
	uint64_t x727 = UINT64_MAX;
	static volatile int64_t x728 = -1LL;
	uint32_t t85 = 691U;

    t85 = (x725>>(x726==(x727%x728)));

    if (t85 != 2642U) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x730 = 93LL;
	uint64_t x731 = UINT64_MAX;
	uint64_t t86 = UINT64_MAX;

    t86 = (x729>>(x730==(x731%x732)));

    if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x736 = INT8_MAX;
	int32_t t87 = 9784;

    t87 = (x733>>(x734==(x735%x736)));

    if (t87 != 28000) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x741 = 1;
	static uint64_t x742 = 378075LLU;
	static int8_t x743 = 45;
	int32_t x744 = -2172;
	static int32_t t88 = -13034900;

    t88 = (x741>>(x742==(x743%x744)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x745 = 0U;
	static volatile int8_t x746 = -39;
	static uint16_t x747 = 842U;
	uint16_t x748 = 1679U;
	uint32_t t89 = 7145U;

    t89 = (x745>>(x746==(x747%x748)));

    if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x749 = INT64_MAX;
	int8_t x750 = INT8_MIN;
	uint16_t x751 = UINT16_MAX;

    t90 = (x749>>(x750==(x751%x752)));

    if (t90 != INT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint8_t x757 = UINT8_MAX;
	static int64_t x758 = INT64_MIN;
	static volatile uint16_t x760 = 2U;
	int32_t t91 = -5;

    t91 = (x757>>(x758==(x759%x760)));

    if (t91 != 255) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x765 = 0;
	int16_t x766 = INT16_MAX;
	volatile int16_t x767 = -1;
	int64_t x768 = INT64_MIN;
	volatile int32_t t92 = 179;

    t92 = (x765>>(x766==(x767%x768)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint16_t x769 = UINT16_MAX;
	uint32_t x770 = 2059052U;
	static int64_t x771 = INT64_MIN;

    t93 = (x769>>(x770==(x771%x772)));

    if (t93 != 65535) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint64_t x781 = 26679670LLU;
	volatile int16_t x782 = INT16_MIN;
	static int64_t x784 = INT64_MAX;
	volatile uint64_t t94 = 36949806592036124LLU;

    t94 = (x781>>(x782==(x783%x784)));

    if (t94 != 26679670LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x785 = INT32_MAX;
	int16_t x787 = -1;
	static int64_t x788 = INT64_MIN;
	volatile int32_t t95 = INT32_MAX;

    t95 = (x785>>(x786==(x787%x788)));

    if (t95 != INT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x789 = 27U;
	int64_t x790 = INT64_MIN;
	volatile int64_t x791 = INT64_MIN;
	volatile uint32_t x792 = 1167651247U;
	static int32_t t96 = 8;

    t96 = (x789>>(x790==(x791%x792)));

    if (t96 != 27) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint8_t x793 = 0U;
	int8_t x794 = -1;
	static uint32_t x796 = 1697U;
	int32_t t97 = 14;

    t97 = (x793>>(x794==(x795%x796)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x801 = INT32_MAX;
	int16_t x802 = 240;
	int64_t x804 = 229441386855LL;
	volatile int32_t t98 = INT32_MAX;

    t98 = (x801>>(x802==(x803%x804)));

    if (t98 != INT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x809 = UINT8_MAX;
	uint8_t x810 = 1U;
	uint16_t x811 = 2U;
	int64_t x812 = 6985LL;

    t99 = (x809>>(x810==(x811%x812)));

    if (t99 != 255) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x825 = 34562000668LL;
	static int8_t x826 = INT8_MAX;
	int64_t x827 = INT64_MIN;
	uint32_t x828 = UINT32_MAX;
	volatile int64_t t100 = 96172529397472321LL;

    t100 = (x825>>(x826==(x827%x828)));

    if (t100 != 34562000668LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x829 = 508910U;
	uint32_t t101 = 5668U;

    t101 = (x829>>(x830==(x831%x832)));

    if (t101 != 508910U) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint16_t x842 = 0U;
	int32_t x844 = INT32_MIN;
	int32_t t102 = 10562333;

    t102 = (x841>>(x842==(x843%x844)));

    if (t102 != 4039) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint32_t x866 = 5867U;
	static int16_t x868 = -1;

    t103 = (x865>>(x866==(x867%x868)));

    if (t103 != 242) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x869 = 2;
	uint16_t x872 = 2U;
	volatile int32_t t104 = 233078;

    t104 = (x869>>(x870==(x871%x872)));

    if (t104 != 2) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x873 = INT8_MAX;
	uint32_t x874 = 81062812U;
	uint16_t x875 = 7U;
	int16_t x876 = 462;
	volatile int32_t t105 = -41101788;

    t105 = (x873>>(x874==(x875%x876)));

    if (t105 != 127) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x885 = 5U;
	int32_t x886 = 473075001;
	uint8_t x887 = UINT8_MAX;
	volatile int8_t x888 = -1;
	uint32_t t106 = 22358697U;

    t106 = (x885>>(x886==(x887%x888)));

    if (t106 != 5U) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x889 = UINT64_MAX;
	uint32_t x890 = 2U;
	static int8_t x891 = -1;
	int64_t x892 = INT64_MIN;
	volatile uint64_t t107 = UINT64_MAX;

    t107 = (x889>>(x890==(x891%x892)));

    if (t107 != UINT64_MAX) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x893 = 1;
	uint64_t x895 = UINT64_MAX;
	uint64_t x896 = UINT64_MAX;
	int32_t t108 = 304503687;

    t108 = (x893>>(x894==(x895%x896)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x897 = UINT32_MAX;
	int32_t x898 = INT32_MIN;
	uint16_t x900 = UINT16_MAX;
	uint32_t t109 = UINT32_MAX;

    t109 = (x897>>(x898==(x899%x900)));

    if (t109 != UINT32_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint32_t x901 = UINT32_MAX;
	uint32_t x902 = 9414U;
	int64_t x904 = INT64_MAX;
	static uint32_t t110 = UINT32_MAX;

    t110 = (x901>>(x902==(x903%x904)));

    if (t110 != UINT32_MAX) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint64_t x905 = 109648834272LLU;
	uint16_t x906 = 16U;
	int16_t x907 = INT16_MIN;
	static uint16_t x908 = 654U;
	volatile uint64_t t111 = 5LLU;

    t111 = (x905>>(x906==(x907%x908)));

    if (t111 != 109648834272LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x909 = 471634929;
	int16_t x911 = 160;
	uint16_t x912 = 1U;

    t112 = (x909>>(x910==(x911%x912)));

    if (t112 != 471634929) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x921 = INT32_MAX;
	uint8_t x923 = UINT8_MAX;
	volatile int32_t t113 = INT32_MAX;

    t113 = (x921>>(x922==(x923%x924)));

    if (t113 != INT32_MAX) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint64_t x925 = 33245657345LLU;
	int8_t x926 = INT8_MAX;
	int64_t x927 = 250410LL;
	static volatile uint8_t x928 = 23U;
	static uint64_t t114 = 15244734734151LLU;

    t114 = (x925>>(x926==(x927%x928)));

    if (t114 != 33245657345LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint32_t x937 = 1531U;
	static int16_t x938 = 44;
	volatile uint32_t x940 = UINT32_MAX;
	uint32_t t115 = 18596605U;

    t115 = (x937>>(x938==(x939%x940)));

    if (t115 != 1531U) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile uint32_t x941 = 24045U;
	int32_t x942 = -28327690;
	uint32_t x943 = 0U;
	static int32_t x944 = INT32_MAX;
	static uint32_t t116 = 548890U;

    t116 = (x941>>(x942==(x943%x944)));

    if (t116 != 24045U) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x953 = 501002365;
	static volatile int8_t x955 = INT8_MIN;
	static volatile int32_t x956 = INT32_MIN;

    t117 = (x953>>(x954==(x955%x956)));

    if (t117 != 501002365) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint64_t x961 = UINT64_MAX;
	volatile int8_t x962 = INT8_MIN;
	int8_t x963 = INT8_MIN;
	static int16_t x964 = INT16_MIN;
	uint64_t t118 = 2309308LLU;

    t118 = (x961>>(x962==(x963%x964)));

    if (t118 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x965 = 14;
	volatile int8_t x966 = INT8_MIN;
	volatile int32_t x967 = -340133;
	uint64_t x968 = UINT64_MAX;
	int32_t t119 = -468;

    t119 = (x965>>(x966==(x967%x968)));

    if (t119 != 14) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x969 = UINT16_MAX;
	static int8_t x970 = 2;
	int8_t x971 = 0;
	int64_t x972 = INT64_MAX;
	volatile int32_t t120 = -10519;

    t120 = (x969>>(x970==(x971%x972)));

    if (t120 != 65535) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x974 = UINT32_MAX;
	volatile int64_t x975 = -1LL;
	static uint16_t x976 = 13800U;
	uint32_t t121 = 8583463U;

    t121 = (x973>>(x974==(x975%x976)));

    if (t121 != 1U) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x982 = 9119LL;
	int16_t x983 = -175;
	int8_t x984 = INT8_MIN;
	static int32_t t122 = 220;

    t122 = (x981>>(x982==(x983%x984)));

    if (t122 != 65535) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint16_t x985 = 0U;
	int16_t x986 = 0;
	volatile uint16_t x987 = 930U;
	uint64_t x988 = 65622LLU;
	volatile int32_t t123 = 1;

    t123 = (x985>>(x986==(x987%x988)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x993 = 88U;
	uint8_t x994 = UINT8_MAX;
	int64_t x996 = -104446501061026LL;
	volatile int32_t t124 = 292080;

    t124 = (x993>>(x994==(x995%x996)));

    if (t124 != 88) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x997 = UINT16_MAX;
	static int32_t x998 = 65685413;
	volatile int32_t t125 = 364095721;

    t125 = (x997>>(x998==(x999%x1000)));

    if (t125 != 65535) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x1001 = INT16_MAX;
	int32_t x1003 = INT32_MAX;
	int8_t x1004 = INT8_MAX;
	int32_t t126 = 1;

    t126 = (x1001>>(x1002==(x1003%x1004)));

    if (t126 != 32767) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x1009 = 3;
	volatile uint8_t x1010 = 6U;
	int8_t x1011 = -2;
	int32_t t127 = -66437;

    t127 = (x1009>>(x1010==(x1011%x1012)));

    if (t127 != 3) { NG(); } else { ; }
	
}

void f128(void) {
    	static int64_t x1013 = INT64_MAX;
	volatile uint64_t x1014 = 23636579LLU;
	static volatile uint16_t x1016 = 1001U;

    t128 = (x1013>>(x1014==(x1015%x1016)));

    if (t128 != INT64_MAX) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x1021 = 2LLU;
	int16_t x1023 = 311;
	volatile uint8_t x1024 = 118U;
	uint64_t t129 = 1391034600LLU;

    t129 = (x1021>>(x1022==(x1023%x1024)));

    if (t129 != 2LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x1025 = 5U;
	uint64_t x1026 = 3600363132221LLU;
	static int16_t x1027 = INT16_MIN;
	int8_t x1028 = INT8_MIN;
	int32_t t130 = -1;

    t130 = (x1025>>(x1026==(x1027%x1028)));

    if (t130 != 5) { NG(); } else { ; }
	
}

void f131(void) {
    	static int16_t x1029 = INT16_MAX;
	int16_t x1030 = -1;
	uint64_t x1031 = UINT64_MAX;

    t131 = (x1029>>(x1030==(x1031%x1032)));

    if (t131 != 32767) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x1037 = 16826;
	volatile int8_t x1039 = -1;
	static uint8_t x1040 = UINT8_MAX;
	int32_t t132 = 6180119;

    t132 = (x1037>>(x1038==(x1039%x1040)));

    if (t132 != 16826) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x1046 = 133LL;
	uint8_t x1047 = 13U;
	int16_t x1048 = -1;
	int32_t t133 = 970;

    t133 = (x1045>>(x1046==(x1047%x1048)));

    if (t133 != 50) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x1049 = UINT64_MAX;
	static uint64_t x1050 = 237620027417475403LLU;
	static volatile uint64_t x1051 = UINT64_MAX;
	int8_t x1052 = 51;
	static volatile uint64_t t134 = UINT64_MAX;

    t134 = (x1049>>(x1050==(x1051%x1052)));

    if (t134 != UINT64_MAX) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x1059 = -64225176;
	static volatile uint32_t x1060 = UINT32_MAX;

    t135 = (x1057>>(x1058==(x1059%x1060)));

    if (t135 != 9360852382LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x1066 = -1;
	static uint16_t x1067 = UINT16_MAX;
	volatile uint8_t x1068 = 73U;

    t136 = (x1065>>(x1066==(x1067%x1068)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x1069 = UINT32_MAX;
	volatile int16_t x1071 = INT16_MAX;
	uint32_t x1072 = UINT32_MAX;
	volatile uint32_t t137 = UINT32_MAX;

    t137 = (x1069>>(x1070==(x1071%x1072)));

    if (t137 != UINT32_MAX) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x1073 = UINT32_MAX;

    t138 = (x1073>>(x1074==(x1075%x1076)));

    if (t138 != UINT32_MAX) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x1077 = UINT8_MAX;
	uint32_t x1078 = 28U;
	static volatile int8_t x1079 = INT8_MIN;

    t139 = (x1077>>(x1078==(x1079%x1080)));

    if (t139 != 255) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint16_t x1085 = 12U;
	int8_t x1086 = INT8_MAX;
	int16_t x1088 = INT16_MAX;
	int32_t t140 = -2753127;

    t140 = (x1085>>(x1086==(x1087%x1088)));

    if (t140 != 12) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x1089 = INT32_MAX;
	int16_t x1090 = -5573;
	int32_t t141 = INT32_MAX;

    t141 = (x1089>>(x1090==(x1091%x1092)));

    if (t141 != INT32_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint16_t x1093 = 8813U;
	uint16_t x1094 = 90U;
	uint64_t x1095 = UINT64_MAX;
	volatile uint8_t x1096 = 25U;
	int32_t t142 = 407;

    t142 = (x1093>>(x1094==(x1095%x1096)));

    if (t142 != 8813) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint16_t x1097 = 1709U;
	uint16_t x1098 = 1U;
	uint32_t x1100 = UINT32_MAX;
	static volatile int32_t t143 = -1;

    t143 = (x1097>>(x1098==(x1099%x1100)));

    if (t143 != 1709) { NG(); } else { ; }
	
}

void f144(void) {
    	static int64_t x1114 = -13597LL;
	int32_t x1116 = 60;
	volatile int32_t t144 = -257084505;

    t144 = (x1113>>(x1114==(x1115%x1116)));

    if (t144 != 3) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x1117 = UINT8_MAX;
	static uint8_t x1118 = 87U;
	uint8_t x1120 = 6U;
	int32_t t145 = 2806;

    t145 = (x1117>>(x1118==(x1119%x1120)));

    if (t145 != 255) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint32_t x1122 = 1906U;
	uint8_t x1124 = 47U;
	volatile uint64_t t146 = 229112883LLU;

    t146 = (x1121>>(x1122==(x1123%x1124)));

    if (t146 != 79448LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x1141 = UINT16_MAX;
	static int32_t x1142 = INT32_MIN;
	int8_t x1144 = INT8_MIN;
	static int32_t t147 = 59008129;

    t147 = (x1141>>(x1142==(x1143%x1144)));

    if (t147 != 65535) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile uint16_t x1154 = UINT16_MAX;
	int16_t x1156 = INT16_MIN;
	static int32_t t148 = 1;

    t148 = (x1153>>(x1154==(x1155%x1156)));

    if (t148 != 8440) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x1165 = 6U;
	uint8_t x1166 = 3U;
	static int32_t x1167 = INT32_MAX;
	volatile int32_t x1168 = 199917109;
	volatile int32_t t149 = -44508191;

    t149 = (x1165>>(x1166==(x1167%x1168)));

    if (t149 != 6) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x1169 = INT64_MAX;
	int8_t x1170 = -18;
	static int64_t x1172 = -1LL;
	int64_t t150 = INT64_MAX;

    t150 = (x1169>>(x1170==(x1171%x1172)));

    if (t150 != INT64_MAX) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x1173 = UINT32_MAX;
	static uint64_t x1175 = 9206306LLU;
	uint16_t x1176 = UINT16_MAX;
	uint32_t t151 = UINT32_MAX;

    t151 = (x1173>>(x1174==(x1175%x1176)));

    if (t151 != UINT32_MAX) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x1177 = UINT8_MAX;
	volatile int8_t x1178 = INT8_MAX;
	int64_t x1179 = 276LL;
	int16_t x1180 = INT16_MIN;
	int32_t t152 = 8572;

    t152 = (x1177>>(x1178==(x1179%x1180)));

    if (t152 != 255) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int16_t x1181 = 3554;
	uint8_t x1182 = 0U;
	uint32_t x1184 = 295U;
	static int32_t t153 = -61149650;

    t153 = (x1181>>(x1182==(x1183%x1184)));

    if (t153 != 3554) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int64_t x1189 = INT64_MAX;
	int8_t x1192 = INT8_MAX;
	volatile int64_t t154 = INT64_MAX;

    t154 = (x1189>>(x1190==(x1191%x1192)));

    if (t154 != INT64_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint16_t x1197 = UINT16_MAX;
	static int16_t x1198 = -1164;
	static int64_t x1199 = -387846000106421LL;
	int32_t x1200 = 26129785;

    t155 = (x1197>>(x1198==(x1199%x1200)));

    if (t155 != 65535) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x1205 = INT8_MAX;
	static int8_t x1206 = INT8_MIN;
	int8_t x1207 = INT8_MIN;
	uint8_t x1208 = UINT8_MAX;
	volatile int32_t t156 = -66676;

    t156 = (x1205>>(x1206==(x1207%x1208)));

    if (t156 != 63) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x1213 = 3U;
	volatile int32_t x1214 = 7621348;
	static int16_t x1215 = -1;
	volatile int32_t x1216 = INT32_MIN;
	volatile uint32_t t157 = 513523U;

    t157 = (x1213>>(x1214==(x1215%x1216)));

    if (t157 != 3U) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint8_t x1217 = 9U;
	uint32_t x1218 = 417113653U;
	int16_t x1219 = INT16_MIN;
	volatile int32_t t158 = -3288880;

    t158 = (x1217>>(x1218==(x1219%x1220)));

    if (t158 != 9) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x1221 = INT16_MAX;
	int8_t x1222 = -1;
	uint16_t x1223 = 1U;
	int64_t x1224 = INT64_MAX;
	static volatile int32_t t159 = -730;

    t159 = (x1221>>(x1222==(x1223%x1224)));

    if (t159 != 32767) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x1226 = INT32_MIN;
	volatile int16_t x1227 = INT16_MIN;
	uint32_t x1228 = 1277U;
	int32_t t160 = -27781489;

    t160 = (x1225>>(x1226==(x1227%x1228)));

    if (t160 != 79) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x1233 = 30LL;
	uint32_t x1234 = UINT32_MAX;
	int16_t x1235 = -2964;
	volatile int64_t x1236 = -4272054269642467LL;
	int64_t t161 = -24054912LL;

    t161 = (x1233>>(x1234==(x1235%x1236)));

    if (t161 != 30LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x1237 = INT8_MAX;
	volatile int16_t x1240 = INT16_MIN;
	volatile int32_t t162 = -307;

    t162 = (x1237>>(x1238==(x1239%x1240)));

    if (t162 != 127) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x1241 = UINT16_MAX;
	int8_t x1243 = 1;
	int16_t x1244 = INT16_MAX;
	int32_t t163 = -167410316;

    t163 = (x1241>>(x1242==(x1243%x1244)));

    if (t163 != 65535) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x1249 = UINT8_MAX;
	int16_t x1250 = INT16_MIN;
	volatile uint16_t x1251 = 120U;
	int8_t x1252 = INT8_MIN;
	volatile int32_t t164 = 133438;

    t164 = (x1249>>(x1250==(x1251%x1252)));

    if (t164 != 255) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x1259 = INT8_MIN;
	uint32_t x1260 = UINT32_MAX;
	volatile uint64_t t165 = 47459842952526728LLU;

    t165 = (x1257>>(x1258==(x1259%x1260)));

    if (t165 != 2870083861993LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x1262 = INT32_MIN;
	int64_t x1263 = -25017871835478LL;
	volatile uint32_t t166 = 25375245U;

    t166 = (x1261>>(x1262==(x1263%x1264)));

    if (t166 != 104680U) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x1265 = 16;
	int16_t x1266 = -4;
	int16_t x1267 = 1;
	int32_t x1268 = INT32_MIN;
	volatile int32_t t167 = -2399651;

    t167 = (x1265>>(x1266==(x1267%x1268)));

    if (t167 != 16) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int64_t x1269 = 1660950716659LL;
	int8_t x1270 = INT8_MIN;
	static uint16_t x1271 = 28455U;
	uint64_t x1272 = 257940497161320LLU;
	volatile int64_t t168 = 63861376LL;

    t168 = (x1269>>(x1270==(x1271%x1272)));

    if (t168 != 1660950716659LL) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x1273 = 0;
	uint64_t x1274 = 4LLU;
	uint8_t x1275 = UINT8_MAX;
	int16_t x1276 = INT16_MIN;
	volatile int32_t t169 = 1;

    t169 = (x1273>>(x1274==(x1275%x1276)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x1285 = INT16_MAX;
	int32_t x1286 = INT32_MAX;
	volatile int16_t x1288 = INT16_MAX;
	volatile int32_t t170 = -128044822;

    t170 = (x1285>>(x1286==(x1287%x1288)));

    if (t170 != 32767) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x1289 = 48U;
	int16_t x1290 = INT16_MIN;
	int64_t x1292 = -1LL;
	volatile int32_t t171 = -170673;

    t171 = (x1289>>(x1290==(x1291%x1292)));

    if (t171 != 48) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x1297 = UINT16_MAX;
	uint16_t x1298 = 1U;
	static volatile uint8_t x1299 = 3U;
	volatile int8_t x1300 = 6;
	volatile int32_t t172 = 35;

    t172 = (x1297>>(x1298==(x1299%x1300)));

    if (t172 != 65535) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x1305 = UINT32_MAX;
	int8_t x1306 = INT8_MIN;
	int32_t x1307 = INT32_MIN;
	int64_t x1308 = -1LL;

    t173 = (x1305>>(x1306==(x1307%x1308)));

    if (t173 != UINT32_MAX) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x1309 = 2;
	uint8_t x1310 = 44U;
	uint8_t x1311 = UINT8_MAX;
	int64_t x1312 = 393029322LL;
	static int32_t t174 = 39935933;

    t174 = (x1309>>(x1310==(x1311%x1312)));

    if (t174 != 2) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x1313 = INT16_MAX;
	int32_t x1315 = -13473876;
	volatile uint16_t x1316 = 886U;
	static int32_t t175 = -6793;

    t175 = (x1313>>(x1314==(x1315%x1316)));

    if (t175 != 32767) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x1321 = 231U;
	static int8_t x1322 = INT8_MAX;
	uint8_t x1324 = 111U;
	uint32_t t176 = 2465684U;

    t176 = (x1321>>(x1322==(x1323%x1324)));

    if (t176 != 231U) { NG(); } else { ; }
	
}

void f177(void) {
    	static int64_t x1325 = 81591140LL;
	volatile uint64_t x1326 = 360226569232643807LLU;
	int16_t x1327 = INT16_MIN;
	int16_t x1328 = INT16_MIN;

    t177 = (x1325>>(x1326==(x1327%x1328)));

    if (t177 != 81591140LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x1337 = 2;
	int64_t x1338 = INT64_MAX;
	int64_t x1339 = INT64_MIN;
	int16_t x1340 = -1;
	int32_t t178 = 71;

    t178 = (x1337>>(x1338==(x1339%x1340)));

    if (t178 != 2) { NG(); } else { ; }
	
}

void f179(void) {
    	static int32_t x1345 = 165454221;
	static int16_t x1346 = 3096;
	volatile uint16_t x1347 = UINT16_MAX;
	int32_t x1348 = INT32_MAX;
	static int32_t t179 = 417;

    t179 = (x1345>>(x1346==(x1347%x1348)));

    if (t179 != 165454221) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x1349 = 461LL;
	static int64_t x1351 = INT64_MAX;
	uint32_t x1352 = 1237U;

    t180 = (x1349>>(x1350==(x1351%x1352)));

    if (t180 != 461LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile uint64_t x1353 = UINT64_MAX;
	int32_t x1354 = -3285775;
	static int32_t x1355 = INT32_MAX;
	int8_t x1356 = 60;
	volatile uint64_t t181 = UINT64_MAX;

    t181 = (x1353>>(x1354==(x1355%x1356)));

    if (t181 != UINT64_MAX) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x1357 = INT16_MAX;
	static int64_t x1358 = -1LL;
	volatile int32_t x1359 = 1;
	uint32_t x1360 = 1558U;
	volatile int32_t t182 = 21228553;

    t182 = (x1357>>(x1358==(x1359%x1360)));

    if (t182 != 32767) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x1369 = INT64_MAX;
	uint32_t x1371 = 444490841U;
	uint8_t x1372 = UINT8_MAX;
	int64_t t183 = INT64_MAX;

    t183 = (x1369>>(x1370==(x1371%x1372)));

    if (t183 != INT64_MAX) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x1377 = 3231871286771107LL;
	volatile int32_t x1378 = INT32_MIN;
	int16_t x1379 = INT16_MAX;
	static int8_t x1380 = 2;

    t184 = (x1377>>(x1378==(x1379%x1380)));

    if (t184 != 3231871286771107LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint16_t x1381 = UINT16_MAX;
	int16_t x1382 = -1;
	static int32_t x1383 = INT32_MIN;
	uint32_t x1384 = 618425189U;
	int32_t t185 = 13684885;

    t185 = (x1381>>(x1382==(x1383%x1384)));

    if (t185 != 65535) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int32_t x1390 = INT32_MIN;
	volatile uint32_t x1391 = 58518004U;
	int64_t x1392 = -1LL;
	volatile int32_t t186 = -19954232;

    t186 = (x1389>>(x1390==(x1391%x1392)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x1410 = -2;
	static int32_t x1412 = INT32_MIN;
	volatile int32_t t187 = -16;

    t187 = (x1409>>(x1410==(x1411%x1412)));

    if (t187 != 22015) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x1413 = INT32_MAX;
	int16_t x1414 = INT16_MIN;
	static int64_t x1415 = 1492585777LL;
	int32_t t188 = INT32_MAX;

    t188 = (x1413>>(x1414==(x1415%x1416)));

    if (t188 != INT32_MAX) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x1417 = 208U;
	static uint8_t x1418 = 0U;
	int64_t x1419 = INT64_MAX;
	int32_t x1420 = -495;
	uint32_t t189 = 1053210U;

    t189 = (x1417>>(x1418==(x1419%x1420)));

    if (t189 != 208U) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int64_t x1425 = INT64_MAX;
	int64_t x1426 = -1LL;
	int64_t x1427 = INT64_MIN;
	static int64_t t190 = INT64_MAX;

    t190 = (x1425>>(x1426==(x1427%x1428)));

    if (t190 != INT64_MAX) { NG(); } else { ; }
	
}

void f191(void) {
    	static int64_t x1429 = INT64_MAX;
	int64_t x1430 = 3567399836037165215LL;
	static uint8_t x1431 = 10U;
	uint16_t x1432 = UINT16_MAX;
	volatile int64_t t191 = INT64_MAX;

    t191 = (x1429>>(x1430==(x1431%x1432)));

    if (t191 != INT64_MAX) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x1445 = 0U;
	int64_t x1447 = INT64_MAX;

    t192 = (x1445>>(x1446==(x1447%x1448)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x1449 = UINT32_MAX;
	int32_t x1450 = INT32_MIN;
	volatile int16_t x1451 = INT16_MIN;
	static int32_t x1452 = INT32_MAX;
	uint32_t t193 = UINT32_MAX;

    t193 = (x1449>>(x1450==(x1451%x1452)));

    if (t193 != UINT32_MAX) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint16_t x1453 = 938U;
	int8_t x1454 = INT8_MIN;
	uint16_t x1455 = 457U;
	static volatile int32_t x1456 = INT32_MIN;
	volatile int32_t t194 = -88;

    t194 = (x1453>>(x1454==(x1455%x1456)));

    if (t194 != 938) { NG(); } else { ; }
	
}

void f195(void) {
    	static int32_t x1458 = -1;
	static uint32_t x1459 = 6138229U;

    t195 = (x1457>>(x1458==(x1459%x1460)));

    if (t195 != 14498) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x1462 = -51467963288481LL;
	int64_t x1463 = -16788627518927206LL;
	int32_t x1464 = -1;
	volatile int64_t t196 = INT64_MAX;

    t196 = (x1461>>(x1462==(x1463%x1464)));

    if (t196 != INT64_MAX) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint16_t x1481 = UINT16_MAX;
	static int32_t x1482 = -1;
	int64_t x1483 = INT64_MAX;
	int16_t x1484 = INT16_MIN;
	volatile int32_t t197 = 23254;

    t197 = (x1481>>(x1482==(x1483%x1484)));

    if (t197 != 65535) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x1485 = INT16_MAX;
	volatile int32_t t198 = -8499;

    t198 = (x1485>>(x1486==(x1487%x1488)));

    if (t198 != 32767) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int32_t x1493 = INT32_MAX;
	static volatile int8_t x1494 = INT8_MAX;
	int32_t x1495 = INT32_MIN;
	static int16_t x1496 = 6;
	volatile int32_t t199 = INT32_MAX;

    t199 = (x1493>>(x1494==(x1495%x1496)));

    if (t199 != INT32_MAX) { NG(); } else { ; }
	
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

