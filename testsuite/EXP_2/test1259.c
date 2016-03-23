
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

int8_t x20 = 1;
int64_t x24 = -1LL;
volatile uint8_t x25 = 28U;
int64_t x26 = -1LL;
volatile int8_t x38 = INT8_MAX;
uint16_t x93 = UINT16_MAX;
uint16_t x97 = 1351U;
int32_t x98 = INT32_MIN;
static volatile int32_t t10 = 85581;
int8_t x128 = 1;
volatile int32_t t12 = 86;
int16_t x136 = INT16_MIN;
int8_t x152 = INT8_MAX;
static int16_t x162 = INT16_MAX;
volatile int32_t x164 = INT32_MIN;
int64_t t16 = -15LL;
uint16_t x173 = UINT16_MAX;
volatile uint64_t x175 = 6LLU;
int8_t x185 = 36;
volatile int32_t t19 = 0;
uint32_t x194 = UINT32_MAX;
uint64_t x208 = 2553182LLU;
uint16_t x219 = 10U;
static uint64_t x220 = 25537LLU;
volatile uint8_t x221 = UINT8_MAX;
int8_t x233 = 1;
int8_t x252 = INT8_MAX;
int32_t x258 = -56;
int16_t x281 = INT16_MAX;
int32_t x282 = 14331954;
static int16_t x283 = 12;
uint8_t x301 = 0U;
int32_t x303 = INT32_MIN;
int8_t x306 = 0;
uint64_t x313 = 79106912LLU;
uint8_t x328 = 43U;
static volatile int64_t t34 = 5LL;
static int16_t x342 = -900;
volatile int32_t t35 = 291859;
volatile uint32_t x348 = 3U;
uint16_t x357 = UINT16_MAX;
uint32_t x361 = 12672374U;
volatile uint32_t x368 = 3710524U;
int32_t t41 = 17064879;
uint16_t x389 = 271U;
volatile int8_t x390 = 0;
int16_t x400 = INT16_MIN;
uint8_t x407 = UINT8_MAX;
int32_t x421 = 9;
int16_t x424 = -1;
int16_t x448 = INT16_MAX;
uint32_t x471 = 6547U;
uint16_t x473 = 145U;
uint16_t x478 = UINT16_MAX;
volatile int16_t x495 = INT16_MIN;
uint8_t x509 = UINT8_MAX;
uint8_t x511 = UINT8_MAX;
int32_t t61 = 25420;
static volatile int16_t x545 = INT16_MAX;
int16_t x549 = INT16_MAX;
volatile uint8_t x565 = UINT8_MAX;
uint64_t x566 = 82358814181LLU;
static int32_t t66 = -3600284;
static volatile uint8_t x569 = UINT8_MAX;
volatile int16_t x572 = 22;
volatile int32_t t68 = -707743274;
static uint16_t x581 = 0U;
static uint32_t x592 = 253005578U;
volatile int64_t x603 = 7177947230LL;
volatile uint64_t t72 = 1737477488LLU;
int8_t x607 = -1;
int32_t t73 = 14589611;
int32_t t74 = -10067663;
uint64_t x617 = UINT64_MAX;
uint32_t x619 = UINT32_MAX;
uint64_t t75 = UINT64_MAX;
int16_t x656 = INT16_MIN;
int32_t t77 = -773444;
static uint32_t x661 = UINT32_MAX;
int32_t x666 = INT32_MIN;
int64_t x672 = INT64_MIN;
int16_t x678 = 6386;
static int64_t x680 = INT64_MAX;
volatile int64_t t81 = INT64_MAX;
volatile uint8_t x692 = 24U;
static int64_t x694 = INT64_MIN;
int16_t x703 = INT16_MIN;
volatile int32_t x706 = 18597;
uint32_t t85 = 309662U;
int32_t x718 = INT32_MIN;
volatile int8_t x720 = INT8_MIN;
int8_t x748 = 1;
int32_t t88 = 52361;
static int16_t x759 = 337;
static int8_t x762 = 6;
int8_t x763 = -9;
int32_t t93 = 26915;
uint64_t x793 = UINT64_MAX;
uint32_t x803 = UINT32_MAX;
static uint64_t t98 = 967603537756415LLU;
volatile uint8_t x834 = 0U;
int32_t x835 = INT32_MIN;
int64_t t104 = 0LL;
int64_t x851 = INT64_MIN;
uint32_t t105 = UINT32_MAX;
int32_t t109 = -147881293;
uint64_t t110 = UINT64_MAX;
volatile int64_t t111 = 123LL;
static uint32_t x952 = 52U;
uint16_t x953 = UINT16_MAX;
int8_t x954 = -1;
static int32_t x959 = INT32_MIN;
volatile uint64_t t116 = UINT64_MAX;
int32_t x968 = INT32_MAX;
uint32_t x985 = 921218U;
static volatile uint32_t t119 = UINT32_MAX;
int32_t x1012 = 283370;
int32_t t120 = -767013554;
static volatile uint8_t x1023 = 2U;
static int32_t t122 = 81304;
int8_t x1041 = INT8_MAX;
int64_t x1042 = -1904629590614LL;
static volatile uint32_t x1053 = 53U;
int16_t x1054 = INT16_MIN;
uint64_t x1056 = 117898856351LLU;
volatile int16_t x1060 = INT16_MAX;
uint16_t x1075 = UINT16_MAX;
int8_t x1081 = INT8_MAX;
int32_t t130 = 674;
uint32_t x1086 = UINT32_MAX;
int64_t x1088 = -1LL;
static int64_t t131 = 31893751LL;
volatile int64_t x1094 = -1LL;
volatile int64_t t132 = -187924813824742791LL;
int64_t x1112 = -1LL;
volatile int32_t x1133 = 53;
uint8_t x1136 = 9U;
volatile uint32_t x1137 = 6U;
int32_t x1155 = -49864050;
static uint8_t x1177 = 4U;
int32_t x1178 = -58169;
int64_t x1179 = -1LL;
int32_t x1180 = INT32_MIN;
static int16_t x1190 = -2;
int64_t x1200 = -202542566783324423LL;
int32_t x1207 = -1;
uint32_t x1214 = UINT32_MAX;
volatile uint32_t x1215 = 118307U;
uint8_t x1217 = UINT8_MAX;
volatile int64_t t148 = INT64_MIN;
int64_t x1231 = -1LL;
int32_t x1235 = INT32_MIN;
int16_t x1245 = 1599;
int8_t x1246 = 0;
static int64_t t152 = 93169627132690LL;
int64_t x1252 = INT64_MIN;
int64_t t153 = -63681534629562593LL;
uint8_t x1257 = 0U;
int16_t x1260 = INT16_MIN;
volatile int32_t t154 = -19;
volatile int8_t x1261 = 30;
uint16_t x1274 = UINT16_MAX;
volatile int8_t x1299 = -1;
int64_t x1300 = INT64_MIN;
uint64_t x1301 = 10LLU;
volatile uint16_t x1304 = 618U;
int32_t t160 = -1520626;
int16_t x1332 = -1;
uint64_t x1335 = 33822420685233LLU;
volatile uint64_t t163 = 368110971975426028LLU;
volatile uint64_t x1345 = UINT64_MAX;
int64_t x1346 = INT64_MIN;
int32_t t166 = -26;
static uint8_t x1362 = 2U;
static uint8_t x1382 = 1U;
volatile int32_t t170 = 134;
static int16_t x1386 = -1;
volatile int32_t t171 = -1080;
int8_t x1392 = -1;
static int64_t x1411 = INT64_MAX;
int64_t x1445 = 272615032523829091LL;
static volatile int8_t x1448 = -1;
static int16_t x1458 = INT16_MAX;
static uint16_t x1459 = UINT16_MAX;
static int16_t x1466 = -1;
int32_t x1467 = -1;
int64_t x1479 = INT64_MIN;
int32_t x1480 = INT32_MIN;
uint32_t x1532 = 3U;
int32_t x1541 = 4580;
int32_t x1542 = INT32_MIN;
uint32_t x1543 = 5U;
int32_t x1548 = INT32_MIN;
int32_t t192 = -1875;
static uint16_t x1563 = 4U;
int64_t x1564 = -432642815LL;
static uint64_t x1583 = 712171LLU;
int32_t x1599 = -66435;


void f0(void) {
    	int64_t x13 = 2168231584656744273LL;
	uint64_t x14 = UINT64_MAX;
	static int16_t x15 = -1;
	static int16_t x16 = INT16_MIN;
	volatile int64_t t0 = 4262389280LL;

    t0 = ((x13<<(x14!=x15))|x16);

    if (t0 != -8367LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x17 = UINT16_MAX;
	int32_t x18 = -1;
	uint16_t x19 = 29U;
	int32_t t1 = 1465;

    t1 = ((x17<<(x18!=x19))|x20);

    if (t1 != 131071) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x21 = UINT16_MAX;
	int32_t x22 = INT32_MIN;
	volatile int64_t x23 = -1LL;
	int64_t t2 = 0LL;

    t2 = ((x21<<(x22!=x23))|x24);

    if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x27 = UINT8_MAX;
	uint64_t x28 = 248LLU;
	volatile uint64_t t3 = 827081433965141LLU;

    t3 = ((x25<<(x26!=x27))|x28);

    if (t3 != 248LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x29 = 3051U;
	uint32_t x30 = 11709U;
	uint32_t x31 = UINT32_MAX;
	volatile int64_t x32 = INT64_MAX;
	int64_t t4 = INT64_MAX;

    t4 = ((x29<<(x30!=x31))|x32);

    if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x37 = 1U;
	int32_t x39 = -1;
	int64_t x40 = INT64_MIN;
	int64_t t5 = -404761LL;

    t5 = ((x37<<(x38!=x39))|x40);

    if (t5 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x45 = 528U;
	uint32_t x46 = UINT32_MAX;
	static int8_t x47 = INT8_MIN;
	int8_t x48 = INT8_MAX;
	static volatile int32_t t6 = -3;

    t6 = ((x45<<(x46!=x47))|x48);

    if (t6 != 1151) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x65 = 101472921978LLU;
	volatile uint32_t x66 = 1150584682U;
	volatile int32_t x67 = INT32_MAX;
	int8_t x68 = INT8_MAX;
	uint64_t t7 = 18LLU;

    t7 = ((x65<<(x66!=x67))|x68);

    if (t7 != 202945843967LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint16_t x77 = 81U;
	int16_t x78 = -1;
	static int8_t x79 = INT8_MAX;
	uint16_t x80 = 65U;
	int32_t t8 = -42236400;

    t8 = ((x77<<(x78!=x79))|x80);

    if (t8 != 227) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x94 = 2030670323U;
	static int64_t x95 = -1LL;
	int32_t x96 = INT32_MIN;
	volatile int32_t t9 = 6;

    t9 = ((x93<<(x94!=x95))|x96);

    if (t9 != -2147352578) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x99 = -49;
	int32_t x100 = -1;

    t10 = ((x97<<(x98!=x99))|x100);

    if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x113 = 1;
	int8_t x114 = INT8_MAX;
	int8_t x115 = INT8_MAX;
	static int8_t x116 = 20;
	volatile int32_t t11 = 974;

    t11 = ((x113<<(x114!=x115))|x116);

    if (t11 != 21) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint8_t x125 = UINT8_MAX;
	volatile int32_t x126 = INT32_MIN;
	volatile uint64_t x127 = 77783797LLU;

    t12 = ((x125<<(x126!=x127))|x128);

    if (t12 != 511) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x133 = UINT8_MAX;
	int8_t x134 = INT8_MIN;
	static int16_t x135 = INT16_MAX;
	volatile int32_t t13 = -26495;

    t13 = ((x133<<(x134!=x135))|x136);

    if (t13 != -32258) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x145 = 45385102U;
	uint32_t x146 = UINT32_MAX;
	volatile uint32_t x147 = 3U;
	int16_t x148 = -1;
	uint32_t t14 = UINT32_MAX;

    t14 = ((x145<<(x146!=x147))|x148);

    if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x149 = 9U;
	uint32_t x150 = UINT32_MAX;
	int8_t x151 = INT8_MAX;
	int32_t t15 = 5514535;

    t15 = ((x149<<(x150!=x151))|x152);

    if (t15 != 127) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile int64_t x161 = 8695545472367LL;
	int64_t x163 = -423814297160861LL;

    t16 = ((x161<<(x162!=x163))|x164);

    if (t16 != -1379120418LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x174 = INT64_MAX;
	volatile int32_t x176 = -1;
	int32_t t17 = 40;

    t17 = ((x173<<(x174!=x175))|x176);

    if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint32_t x181 = 130636U;
	int32_t x182 = INT32_MIN;
	uint32_t x183 = 629471U;
	uint32_t x184 = 95U;
	uint32_t t18 = 3134662U;

    t18 = ((x181<<(x182!=x183))|x184);

    if (t18 != 261343U) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x186 = -14;
	int8_t x187 = -6;
	int8_t x188 = 1;

    t19 = ((x185<<(x186!=x187))|x188);

    if (t19 != 73) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x193 = 444;
	volatile int16_t x195 = 0;
	int32_t x196 = -1;
	static int32_t t20 = 61;

    t20 = ((x193<<(x194!=x195))|x196);

    if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x205 = UINT16_MAX;
	static int64_t x206 = -2LL;
	int16_t x207 = -1;
	volatile uint64_t t21 = 4094316605LLU;

    t21 = ((x205<<(x206!=x207))|x208);

    if (t21 != 2621438LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x217 = 6U;
	int16_t x218 = -11618;
	static volatile uint64_t t22 = 489101960LLU;

    t22 = ((x217<<(x218!=x219))|x220);

    if (t22 != 25549LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x222 = INT8_MAX;
	volatile int32_t x223 = 1;
	static volatile int16_t x224 = 8;
	volatile int32_t t23 = -10575;

    t23 = ((x221<<(x222!=x223))|x224);

    if (t23 != 510) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x234 = INT8_MIN;
	int8_t x235 = -4;
	volatile int32_t x236 = -3109;
	int32_t t24 = 1;

    t24 = ((x233<<(x234!=x235))|x236);

    if (t24 != -3109) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x245 = 248719557U;
	static int32_t x246 = INT32_MAX;
	int16_t x247 = INT16_MIN;
	int32_t x248 = INT32_MIN;
	uint32_t t25 = 926161U;

    t25 = ((x245<<(x246!=x247))|x248);

    if (t25 != 2644922762U) { NG(); } else { ; }
	
}

void f26(void) {
    	static int32_t x249 = 123;
	int64_t x250 = -1LL;
	int16_t x251 = INT16_MIN;
	int32_t t26 = 1;

    t26 = ((x249<<(x250!=x251))|x252);

    if (t26 != 255) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x257 = INT16_MAX;
	uint8_t x259 = UINT8_MAX;
	uint32_t x260 = 7591U;
	uint32_t t27 = 21607U;

    t27 = ((x257<<(x258!=x259))|x260);

    if (t27 != 65535U) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x284 = 1U;
	static volatile int32_t t28 = 283;

    t28 = ((x281<<(x282!=x283))|x284);

    if (t28 != 65535) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint64_t x297 = 56160768739624230LLU;
	int64_t x298 = INT64_MIN;
	volatile int64_t x299 = 314135LL;
	static int8_t x300 = INT8_MIN;
	volatile uint64_t t29 = 15963926214601LLU;

    t29 = ((x297<<(x298!=x299))|x300);

    if (t29 != 18446744073709551564LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	static int16_t x302 = -1;
	volatile int16_t x304 = INT16_MIN;
	int32_t t30 = -5157;

    t30 = ((x301<<(x302!=x303))|x304);

    if (t30 != -32768) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint16_t x305 = 0U;
	int32_t x307 = INT32_MAX;
	uint32_t x308 = UINT32_MAX;
	volatile uint32_t t31 = UINT32_MAX;

    t31 = ((x305<<(x306!=x307))|x308);

    if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x314 = -310187110LL;
	uint32_t x315 = UINT32_MAX;
	volatile int32_t x316 = INT32_MIN;
	uint64_t t32 = 15444LLU;

    t32 = ((x313<<(x314!=x315))|x316);

    if (t32 != 18446744071720281792LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x325 = 3476084U;
	uint8_t x326 = 54U;
	volatile uint32_t x327 = UINT32_MAX;
	volatile uint32_t t33 = 48466244U;

    t33 = ((x325<<(x326!=x327))|x328);

    if (t33 != 6952171U) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x333 = UINT16_MAX;
	int8_t x334 = 3;
	volatile uint16_t x335 = UINT16_MAX;
	int64_t x336 = -1LL;

    t34 = ((x333<<(x334!=x335))|x336);

    if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x341 = 22738U;
	uint8_t x343 = 35U;
	static uint16_t x344 = 1U;

    t35 = ((x341<<(x342!=x343))|x344);

    if (t35 != 45477) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x345 = UINT64_MAX;
	static int16_t x346 = INT16_MIN;
	uint64_t x347 = UINT64_MAX;
	volatile uint64_t t36 = UINT64_MAX;

    t36 = ((x345<<(x346!=x347))|x348);

    if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x358 = 1U;
	int16_t x359 = -1;
	static uint16_t x360 = 13481U;
	volatile int32_t t37 = 467;

    t37 = ((x357<<(x358!=x359))|x360);

    if (t37 != 131071) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x362 = INT8_MIN;
	int16_t x363 = 0;
	int8_t x364 = -1;
	volatile uint32_t t38 = UINT32_MAX;

    t38 = ((x361<<(x362!=x363))|x364);

    if (t38 != UINT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint8_t x365 = 6U;
	uint16_t x366 = UINT16_MAX;
	static volatile uint32_t x367 = UINT32_MAX;
	volatile uint32_t t39 = 2486746U;

    t39 = ((x365<<(x366!=x367))|x368);

    if (t39 != 3710524U) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint64_t x377 = UINT64_MAX;
	int16_t x378 = INT16_MIN;
	int16_t x379 = INT16_MAX;
	int32_t x380 = -1;
	volatile uint64_t t40 = UINT64_MAX;

    t40 = ((x377<<(x378!=x379))|x380);

    if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x381 = UINT16_MAX;
	volatile uint16_t x382 = 4663U;
	int32_t x383 = INT32_MIN;
	static int32_t x384 = 53;

    t41 = ((x381<<(x382!=x383))|x384);

    if (t41 != 131071) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x391 = INT8_MIN;
	volatile uint8_t x392 = UINT8_MAX;
	int32_t t42 = 4811;

    t42 = ((x389<<(x390!=x391))|x392);

    if (t42 != 767) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x393 = 0;
	int64_t x394 = -1LL;
	static volatile uint16_t x395 = 6U;
	int32_t x396 = -646;
	int32_t t43 = 0;

    t43 = ((x393<<(x394!=x395))|x396);

    if (t43 != -646) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint8_t x397 = 65U;
	static uint64_t x398 = UINT64_MAX;
	int16_t x399 = INT16_MIN;
	static volatile int32_t t44 = 1;

    t44 = ((x397<<(x398!=x399))|x400);

    if (t44 != -32638) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint8_t x405 = 1U;
	int8_t x406 = INT8_MAX;
	volatile uint8_t x408 = 2U;
	static int32_t t45 = 5;

    t45 = ((x405<<(x406!=x407))|x408);

    if (t45 != 2) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x422 = 0U;
	static int16_t x423 = INT16_MAX;
	volatile int32_t t46 = 1;

    t46 = ((x421<<(x422!=x423))|x424);

    if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint16_t x437 = 83U;
	volatile int16_t x438 = -620;
	int8_t x439 = INT8_MIN;
	uint16_t x440 = UINT16_MAX;
	volatile int32_t t47 = 1116;

    t47 = ((x437<<(x438!=x439))|x440);

    if (t47 != 65535) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x445 = 2U;
	int32_t x446 = -112258620;
	int64_t x447 = INT64_MAX;
	volatile int32_t t48 = -2;

    t48 = ((x445<<(x446!=x447))|x448);

    if (t48 != 32767) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x449 = INT8_MAX;
	int16_t x450 = 14059;
	uint16_t x451 = UINT16_MAX;
	static int64_t x452 = INT64_MIN;
	int64_t t49 = -6118723563091LL;

    t49 = ((x449<<(x450!=x451))|x452);

    if (t49 != -9223372036854775554LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x457 = UINT8_MAX;
	volatile int8_t x458 = INT8_MIN;
	static volatile int32_t x459 = -1885556;
	int32_t x460 = INT32_MIN;
	int32_t t50 = -1;

    t50 = ((x457<<(x458!=x459))|x460);

    if (t50 != -2147483138) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x465 = INT8_MAX;
	volatile uint64_t x466 = 3269626LLU;
	uint8_t x467 = 1U;
	int64_t x468 = -1LL;
	volatile int64_t t51 = -404745806LL;

    t51 = ((x465<<(x466!=x467))|x468);

    if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x469 = 21LLU;
	volatile int16_t x470 = -977;
	int8_t x472 = 1;
	uint64_t t52 = 34261491LLU;

    t52 = ((x469<<(x470!=x471))|x472);

    if (t52 != 43LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x474 = UINT8_MAX;
	static uint64_t x475 = 7072214557111869552LLU;
	static int8_t x476 = INT8_MIN;
	volatile int32_t t53 = -7376465;

    t53 = ((x473<<(x474!=x475))|x476);

    if (t53 != -94) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x477 = 0;
	volatile int8_t x479 = INT8_MAX;
	static uint64_t x480 = 18662081LLU;
	volatile uint64_t t54 = 86695790843LLU;

    t54 = ((x477<<(x478!=x479))|x480);

    if (t54 != 18662081LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint32_t x493 = 949619679U;
	static int32_t x494 = -36882;
	int32_t x496 = INT32_MIN;
	static uint32_t t55 = 131589506U;

    t55 = ((x493<<(x494!=x495))|x496);

    if (t55 != 4046723006U) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint64_t x501 = 486LLU;
	int64_t x502 = INT64_MIN;
	static int8_t x503 = -1;
	static int64_t x504 = INT64_MIN;
	uint64_t t56 = 31LLU;

    t56 = ((x501<<(x502!=x503))|x504);

    if (t56 != 9223372036854776780LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x510 = 16404U;
	static volatile int64_t x512 = INT64_MIN;
	static volatile int64_t t57 = 1LL;

    t57 = ((x509<<(x510!=x511))|x512);

    if (t57 != -9223372036854775298LL) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x517 = 11;
	int32_t x518 = -1;
	uint32_t x519 = 75942142U;
	int8_t x520 = INT8_MAX;
	int32_t t58 = 438898;

    t58 = ((x517<<(x518!=x519))|x520);

    if (t58 != 127) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint8_t x521 = 102U;
	static uint32_t x522 = 0U;
	uint32_t x523 = 637071U;
	int32_t x524 = INT32_MIN;
	volatile int32_t t59 = 286;

    t59 = ((x521<<(x522!=x523))|x524);

    if (t59 != -2147483444) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x529 = 1U;
	volatile int8_t x530 = 1;
	int32_t x531 = INT32_MAX;
	int8_t x532 = 15;
	volatile int32_t t60 = 404;

    t60 = ((x529<<(x530!=x531))|x532);

    if (t60 != 15) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x537 = INT8_MAX;
	int16_t x538 = INT16_MIN;
	uint64_t x539 = 0LLU;
	int32_t x540 = -1;

    t61 = ((x537<<(x538!=x539))|x540);

    if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int32_t x546 = -1;
	int32_t x547 = -1;
	int64_t x548 = -6252LL;
	volatile int64_t t62 = -1475923428579LL;

    t62 = ((x545<<(x546!=x547))|x548);

    if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x550 = 706U;
	int64_t x551 = -2836336998214520178LL;
	int32_t x552 = 53920673;
	volatile int32_t t63 = -1;

    t63 = ((x549<<(x550!=x551))|x552);

    if (t63 != 53936127) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x553 = 16260448642LL;
	static volatile int8_t x554 = -26;
	static int8_t x555 = INT8_MIN;
	volatile int32_t x556 = 53782143;
	volatile int64_t t64 = -9LL;

    t64 = ((x553<<(x554!=x555))|x556);

    if (t64 != 32538732415LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint32_t x561 = 75U;
	int8_t x562 = -36;
	int32_t x563 = 3806261;
	int8_t x564 = -43;
	volatile uint32_t t65 = 522U;

    t65 = ((x561<<(x562!=x563))|x564);

    if (t65 != 4294967255U) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint16_t x567 = 1383U;
	static int8_t x568 = INT8_MIN;

    t66 = ((x565<<(x566!=x567))|x568);

    if (t66 != -2) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x570 = INT8_MIN;
	int64_t x571 = INT64_MIN;
	static int32_t t67 = 28283;

    t67 = ((x569<<(x570!=x571))|x572);

    if (t67 != 510) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x577 = UINT16_MAX;
	int8_t x578 = INT8_MAX;
	int32_t x579 = -872327004;
	uint16_t x580 = 20U;

    t68 = ((x577<<(x578!=x579))|x580);

    if (t68 != 131070) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint8_t x582 = 30U;
	uint8_t x583 = 50U;
	volatile uint64_t x584 = 1445910342LLU;
	static volatile uint64_t t69 = 0LLU;

    t69 = ((x581<<(x582!=x583))|x584);

    if (t69 != 1445910342LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x589 = INT8_MAX;
	int16_t x590 = 2512;
	static uint8_t x591 = 3U;
	volatile uint32_t t70 = 331137U;

    t70 = ((x589<<(x590!=x591))|x592);

    if (t70 != 253005822U) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x597 = 116LLU;
	int32_t x598 = 6589;
	int64_t x599 = INT64_MIN;
	int16_t x600 = INT16_MAX;
	uint64_t t71 = 25015504434LLU;

    t71 = ((x597<<(x598!=x599))|x600);

    if (t71 != 32767LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x601 = 47U;
	uint64_t x602 = 52424400563950879LLU;
	uint64_t x604 = 107775242282989LLU;

    t72 = ((x601<<(x602!=x603))|x604);

    if (t72 != 107775242283007LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile uint16_t x605 = UINT16_MAX;
	int64_t x606 = -1LL;
	int32_t x608 = 8038;

    t73 = ((x605<<(x606!=x607))|x608);

    if (t73 != 65535) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint8_t x609 = 0U;
	volatile int16_t x610 = INT16_MAX;
	int16_t x611 = INT16_MIN;
	int32_t x612 = 23;

    t74 = ((x609<<(x610!=x611))|x612);

    if (t74 != 23) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x618 = -98LL;
	volatile int64_t x620 = -562856174051443LL;

    t75 = ((x617<<(x618!=x619))|x620);

    if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x629 = UINT16_MAX;
	static uint8_t x630 = UINT8_MAX;
	uint16_t x631 = 226U;
	static uint16_t x632 = 2U;
	static volatile int32_t t76 = 1;

    t76 = ((x629<<(x630!=x631))|x632);

    if (t76 != 131070) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x653 = 0;
	int8_t x654 = INT8_MAX;
	static uint32_t x655 = 8300142U;

    t77 = ((x653<<(x654!=x655))|x656);

    if (t77 != -32768) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x662 = INT16_MIN;
	volatile uint8_t x663 = 28U;
	static int64_t x664 = INT64_MIN;
	int64_t t78 = 796322772785LL;

    t78 = ((x661<<(x662!=x663))|x664);

    if (t78 != -9223372032559808514LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x665 = 58183953LLU;
	uint32_t x667 = UINT32_MAX;
	volatile int8_t x668 = 19;
	volatile uint64_t t79 = 37LLU;

    t79 = ((x665<<(x666!=x667))|x668);

    if (t79 != 116367923LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x669 = UINT32_MAX;
	int32_t x670 = INT32_MIN;
	int64_t x671 = -1LL;
	volatile int64_t t80 = -50501809795LL;

    t80 = ((x669<<(x670!=x671))|x672);

    if (t80 != -9223372032559808514LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int8_t x677 = INT8_MAX;
	int8_t x679 = INT8_MIN;

    t81 = ((x677<<(x678!=x679))|x680);

    if (t81 != INT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x689 = 5;
	int16_t x690 = INT16_MIN;
	int32_t x691 = INT32_MIN;
	volatile int32_t t82 = -4161814;

    t82 = ((x689<<(x690!=x691))|x692);

    if (t82 != 26) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x693 = 49U;
	volatile uint64_t x695 = 508084LLU;
	uint8_t x696 = 11U;
	volatile int32_t t83 = 4410895;

    t83 = ((x693<<(x694!=x695))|x696);

    if (t83 != 107) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint8_t x701 = 65U;
	int64_t x702 = INT64_MIN;
	static int64_t x704 = INT64_MIN;
	static int64_t t84 = -1015801759879363LL;

    t84 = ((x701<<(x702!=x703))|x704);

    if (t84 != -9223372036854775678LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x705 = 13389U;
	uint16_t x707 = 150U;
	uint32_t x708 = 126U;

    t85 = ((x705<<(x706!=x707))|x708);

    if (t85 != 26878U) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x717 = 101691083450137LLU;
	int8_t x719 = -2;
	static volatile uint64_t t86 = 13035842LLU;

    t86 = ((x717<<(x718!=x719))|x720);

    if (t86 != 18446744073709551538LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x725 = UINT32_MAX;
	volatile uint8_t x726 = UINT8_MAX;
	uint8_t x727 = UINT8_MAX;
	volatile int64_t x728 = 43554LL;
	int64_t t87 = -845735768865694LL;

    t87 = ((x725<<(x726!=x727))|x728);

    if (t87 != 4294967295LL) { NG(); } else { ; }
	
}

void f88(void) {
    	static int8_t x745 = 22;
	int16_t x746 = 57;
	int64_t x747 = 12648605687742421LL;

    t88 = ((x745<<(x746!=x747))|x748);

    if (t88 != 45) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x757 = UINT32_MAX;
	int16_t x758 = -6045;
	volatile int16_t x760 = INT16_MAX;
	volatile uint32_t t89 = UINT32_MAX;

    t89 = ((x757<<(x758!=x759))|x760);

    if (t89 != UINT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x761 = 3376195775LLU;
	int64_t x764 = INT64_MAX;
	static uint64_t t90 = 4281068338088LLU;

    t90 = ((x761<<(x762!=x763))|x764);

    if (t90 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x765 = 198452U;
	static int32_t x766 = 6656;
	volatile uint16_t x767 = UINT16_MAX;
	static int64_t x768 = INT64_MIN;
	volatile int64_t t91 = 6755131378190105LL;

    t91 = ((x765<<(x766!=x767))|x768);

    if (t91 != -9223372036854378904LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x773 = 890352543;
	uint8_t x774 = 10U;
	int64_t x775 = 6078LL;
	static int32_t x776 = INT32_MIN;
	static int32_t t92 = -328916681;

    t92 = ((x773<<(x774!=x775))|x776);

    if (t92 != -366778562) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x777 = 13U;
	int8_t x778 = 0;
	uint64_t x779 = 24LLU;
	volatile int8_t x780 = INT8_MIN;

    t93 = ((x777<<(x778!=x779))|x780);

    if (t93 != -102) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint16_t x785 = UINT16_MAX;
	int16_t x786 = 105;
	volatile int8_t x787 = -1;
	volatile int16_t x788 = INT16_MAX;
	volatile int32_t t94 = 2333731;

    t94 = ((x785<<(x786!=x787))|x788);

    if (t94 != 131071) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x794 = -1;
	volatile int32_t x795 = INT32_MAX;
	uint8_t x796 = 73U;
	volatile uint64_t t95 = UINT64_MAX;

    t95 = ((x793<<(x794!=x795))|x796);

    if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x801 = 174489749813425855LLU;
	static volatile int8_t x802 = INT8_MIN;
	volatile int8_t x804 = 5;
	volatile uint64_t t96 = 90450LLU;

    t96 = ((x801<<(x802!=x803))|x804);

    if (t96 != 348979499626851711LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x813 = 723228605006LLU;
	int64_t x814 = INT64_MAX;
	uint16_t x815 = 1522U;
	int8_t x816 = 1;
	static volatile uint64_t t97 = 3859LLU;

    t97 = ((x813<<(x814!=x815))|x816);

    if (t97 != 1446457210013LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint64_t x817 = 1994395LLU;
	volatile uint16_t x818 = 3U;
	static int16_t x819 = -1;
	int16_t x820 = INT16_MIN;

    t98 = ((x817<<(x818!=x819))|x820);

    if (t98 != 18446744073709542710LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint32_t x821 = UINT32_MAX;
	int8_t x822 = INT8_MIN;
	static int8_t x823 = INT8_MAX;
	int8_t x824 = -19;
	volatile uint32_t t99 = UINT32_MAX;

    t99 = ((x821<<(x822!=x823))|x824);

    if (t99 != UINT32_MAX) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x825 = 98U;
	int64_t x826 = -1LL;
	int64_t x827 = -3008495526LL;
	static int16_t x828 = INT16_MIN;
	int32_t t100 = -44339539;

    t100 = ((x825<<(x826!=x827))|x828);

    if (t100 != -32572) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x829 = INT8_MAX;
	volatile int64_t x830 = -2019325735LL;
	int64_t x831 = INT64_MIN;
	uint16_t x832 = UINT16_MAX;
	int32_t t101 = -19013755;

    t101 = ((x829<<(x830!=x831))|x832);

    if (t101 != 65535) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint64_t x833 = 1689057815928988LLU;
	uint32_t x836 = UINT32_MAX;
	uint64_t t102 = 39244068558481299LLU;

    t102 = ((x833<<(x834!=x835))|x836);

    if (t102 != 3378116332355583LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x841 = 1;
	static uint16_t x842 = 7830U;
	static uint64_t x843 = 389LLU;
	static int64_t x844 = -1LL;
	static int64_t t103 = 3765707446718550030LL;

    t103 = ((x841<<(x842!=x843))|x844);

    if (t103 != -1LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static int64_t x845 = 1959LL;
	uint32_t x846 = 54U;
	int64_t x847 = -2881524882502636LL;
	int8_t x848 = 59;

    t104 = ((x845<<(x846!=x847))|x848);

    if (t104 != 3967LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x849 = 680605290U;
	uint16_t x850 = 133U;
	volatile uint32_t x852 = UINT32_MAX;

    t105 = ((x849<<(x850!=x851))|x852);

    if (t105 != UINT32_MAX) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x853 = 248;
	static volatile int8_t x854 = -1;
	static int32_t x855 = -1;
	int8_t x856 = 1;
	volatile int32_t t106 = 0;

    t106 = ((x853<<(x854!=x855))|x856);

    if (t106 != 249) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile uint32_t x857 = UINT32_MAX;
	static int64_t x858 = INT64_MIN;
	static uint64_t x859 = 2LLU;
	static int32_t x860 = INT32_MAX;
	volatile uint32_t t107 = UINT32_MAX;

    t107 = ((x857<<(x858!=x859))|x860);

    if (t107 != UINT32_MAX) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x865 = UINT16_MAX;
	int16_t x866 = -1;
	uint8_t x867 = 7U;
	int32_t x868 = 7196;
	static int32_t t108 = -2389528;

    t108 = ((x865<<(x866!=x867))|x868);

    if (t108 != 131070) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x869 = 4U;
	int16_t x870 = INT16_MIN;
	int8_t x871 = INT8_MIN;
	volatile int32_t x872 = INT32_MIN;

    t109 = ((x869<<(x870!=x871))|x872);

    if (t109 != -2147483640) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x873 = UINT64_MAX;
	volatile int64_t x874 = -2314018LL;
	int16_t x875 = INT16_MIN;
	static int16_t x876 = -1;

    t110 = ((x873<<(x874!=x875))|x876);

    if (t110 != UINT64_MAX) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x885 = 1491838293697207LL;
	static volatile int64_t x886 = INT64_MIN;
	uint64_t x887 = 57101100294446896LLU;
	static int64_t x888 = -1LL;

    t111 = ((x885<<(x886!=x887))|x888);

    if (t111 != -1LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x889 = 355910U;
	static uint64_t x890 = UINT64_MAX;
	static int8_t x891 = INT8_MIN;
	static int16_t x892 = INT16_MIN;
	volatile uint32_t t112 = 1474U;

    t112 = ((x889<<(x890!=x891))|x892);

    if (t112 != 4294958220U) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x921 = 296446226529610LLU;
	int32_t x922 = 2977575;
	volatile int16_t x923 = -41;
	int16_t x924 = 1;
	uint64_t t113 = 4626473887LLU;

    t113 = ((x921<<(x922!=x923))|x924);

    if (t113 != 592892453059221LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x949 = 4U;
	static int64_t x950 = INT64_MIN;
	int8_t x951 = -21;
	volatile uint32_t t114 = 551U;

    t114 = ((x949<<(x950!=x951))|x952);

    if (t114 != 60U) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x955 = INT8_MAX;
	int32_t x956 = 12178;
	int32_t t115 = -18543;

    t115 = ((x953<<(x954!=x955))|x956);

    if (t115 != 131070) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint64_t x957 = 8LLU;
	static int8_t x958 = INT8_MAX;
	int16_t x960 = -1;

    t116 = ((x957<<(x958!=x959))|x960);

    if (t116 != UINT64_MAX) { NG(); } else { ; }
	
}

void f117(void) {
    	static int32_t x965 = 1;
	int32_t x966 = 6464386;
	int32_t x967 = -653612009;
	int32_t t117 = INT32_MAX;

    t117 = ((x965<<(x966!=x967))|x968);

    if (t117 != INT32_MAX) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint8_t x986 = UINT8_MAX;
	int16_t x987 = -20;
	volatile int16_t x988 = 15820;
	volatile uint32_t t118 = 7803U;

    t118 = ((x985<<(x986!=x987))|x988);

    if (t118 != 1850828U) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint32_t x1005 = 357640U;
	static volatile int64_t x1006 = -14LL;
	static int64_t x1007 = INT64_MIN;
	volatile uint32_t x1008 = UINT32_MAX;

    t119 = ((x1005<<(x1006!=x1007))|x1008);

    if (t119 != UINT32_MAX) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x1009 = 3557U;
	uint32_t x1010 = 87449U;
	int32_t x1011 = 0;

    t120 = ((x1009<<(x1010!=x1011))|x1012);

    if (t120 != 285674) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x1021 = 64232854544129LL;
	uint16_t x1022 = UINT16_MAX;
	int16_t x1024 = 3302;
	int64_t t121 = 42702278490178455LL;

    t121 = ((x1021<<(x1022!=x1023))|x1024);

    if (t121 != 128465709088486LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x1029 = 1916U;
	int64_t x1030 = -1LL;
	int8_t x1031 = -1;
	int32_t x1032 = INT32_MIN;

    t122 = ((x1029<<(x1030!=x1031))|x1032);

    if (t122 != -2147481732) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x1033 = UINT64_MAX;
	static int8_t x1034 = -1;
	static int64_t x1035 = -1LL;
	int16_t x1036 = INT16_MIN;
	uint64_t t123 = UINT64_MAX;

    t123 = ((x1033<<(x1034!=x1035))|x1036);

    if (t123 != UINT64_MAX) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x1043 = INT8_MAX;
	static int64_t x1044 = 1LL;
	volatile int64_t t124 = -106231LL;

    t124 = ((x1041<<(x1042!=x1043))|x1044);

    if (t124 != 255LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint32_t x1049 = 1568528U;
	static int64_t x1050 = INT64_MIN;
	int32_t x1051 = INT32_MAX;
	static int64_t x1052 = -1LL;
	volatile int64_t t125 = -13040498191LL;

    t125 = ((x1049<<(x1050!=x1051))|x1052);

    if (t125 != -1LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x1055 = INT16_MIN;
	static volatile uint64_t t126 = 823025274275730LLU;

    t126 = ((x1053<<(x1054!=x1055))|x1056);

    if (t126 != 117898856383LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x1057 = 750796U;
	uint16_t x1058 = UINT16_MAX;
	uint8_t x1059 = 50U;
	uint32_t t127 = 3526U;

    t127 = ((x1057<<(x1058!=x1059))|x1060);

    if (t127 != 1507327U) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x1061 = 304396LLU;
	volatile int64_t x1062 = -1LL;
	uint16_t x1063 = UINT16_MAX;
	uint32_t x1064 = 8455457U;
	uint64_t t128 = 124815637684423LLU;

    t128 = ((x1061<<(x1062!=x1063))|x1064);

    if (t128 != 8998713LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x1073 = 7605873290655LL;
	volatile int16_t x1074 = INT16_MIN;
	volatile uint64_t x1076 = 40780LLU;
	static uint64_t t129 = 261884754403864952LLU;

    t129 = ((x1073<<(x1074!=x1075))|x1076);

    if (t129 != 15211746615166LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x1082 = 249448093881LLU;
	int8_t x1083 = INT8_MIN;
	static int32_t x1084 = INT32_MIN;

    t130 = ((x1081<<(x1082!=x1083))|x1084);

    if (t130 != -2147483394) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x1085 = 1;
	int32_t x1087 = INT32_MIN;

    t131 = ((x1085<<(x1086!=x1087))|x1088);

    if (t131 != -1LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x1093 = 1045995240099LL;
	int16_t x1095 = -1;
	int16_t x1096 = 13376;

    t132 = ((x1093<<(x1094!=x1095))|x1096);

    if (t132 != 1045995241187LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x1105 = 950978;
	int16_t x1106 = INT16_MIN;
	int64_t x1107 = -179642962343LL;
	int16_t x1108 = INT16_MIN;
	volatile int32_t t133 = 5825083;

    t133 = ((x1105<<(x1106!=x1107))|x1108);

    if (t133 != -31356) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x1109 = 7U;
	int32_t x1110 = -3683213;
	int16_t x1111 = INT16_MIN;
	int64_t t134 = -355523893721855LL;

    t134 = ((x1109<<(x1110!=x1111))|x1112);

    if (t134 != -1LL) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint32_t x1129 = 1640U;
	uint32_t x1130 = 18028954U;
	uint8_t x1131 = UINT8_MAX;
	static int32_t x1132 = INT32_MIN;
	volatile uint32_t t135 = 175835563U;

    t135 = ((x1129<<(x1130!=x1131))|x1132);

    if (t135 != 2147486928U) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x1134 = INT16_MIN;
	uint64_t x1135 = UINT64_MAX;
	static volatile int32_t t136 = -1150605;

    t136 = ((x1133<<(x1134!=x1135))|x1136);

    if (t136 != 107) { NG(); } else { ; }
	
}

void f137(void) {
    	static int32_t x1138 = 1;
	uint32_t x1139 = 2003U;
	uint16_t x1140 = UINT16_MAX;
	static volatile uint32_t t137 = 39123U;

    t137 = ((x1137<<(x1138!=x1139))|x1140);

    if (t137 != 65535U) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint64_t x1153 = 0LLU;
	int64_t x1154 = 77698403795786360LL;
	static uint64_t x1156 = 31349459LLU;
	volatile uint64_t t138 = 89438202273473764LLU;

    t138 = ((x1153<<(x1154!=x1155))|x1156);

    if (t138 != 31349459LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile uint64_t x1169 = 735294LLU;
	static int8_t x1170 = 3;
	int32_t x1171 = INT32_MAX;
	volatile int64_t x1172 = INT64_MAX;
	static volatile uint64_t t139 = 2264656LLU;

    t139 = ((x1169<<(x1170!=x1171))|x1172);

    if (t139 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint8_t x1173 = UINT8_MAX;
	int8_t x1174 = INT8_MAX;
	uint16_t x1175 = UINT16_MAX;
	int32_t x1176 = -1;
	volatile int32_t t140 = 13716824;

    t140 = ((x1173<<(x1174!=x1175))|x1176);

    if (t140 != -1) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t t141 = 7783291;

    t141 = ((x1177<<(x1178!=x1179))|x1180);

    if (t141 != -2147483640) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x1181 = 9;
	volatile uint8_t x1182 = 2U;
	int8_t x1183 = -1;
	static int32_t x1184 = -1;
	int32_t t142 = -11265917;

    t142 = ((x1181<<(x1182!=x1183))|x1184);

    if (t142 != -1) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x1189 = 236963;
	int8_t x1191 = INT8_MIN;
	int16_t x1192 = INT16_MIN;
	static volatile int32_t t143 = 11;

    t143 = ((x1189<<(x1190!=x1191))|x1192);

    if (t143 != -17594) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint16_t x1197 = 7U;
	volatile int32_t x1198 = 0;
	int32_t x1199 = -1;
	volatile int64_t t144 = -474064852LL;

    t144 = ((x1197<<(x1198!=x1199))|x1200);

    if (t144 != -202542566783324417LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static int64_t x1205 = 91003293005LL;
	static int8_t x1206 = 1;
	volatile int16_t x1208 = 8658;
	volatile int64_t t145 = -119717225622669290LL;

    t145 = ((x1205<<(x1206!=x1207))|x1208);

    if (t145 != 182006594522LL) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x1213 = 20;
	int16_t x1216 = INT16_MIN;
	int32_t t146 = -4830138;

    t146 = ((x1213<<(x1214!=x1215))|x1216);

    if (t146 != -32728) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x1218 = 502531723191014LLU;
	volatile int64_t x1219 = -3LL;
	static int16_t x1220 = INT16_MIN;
	int32_t t147 = 218;

    t147 = ((x1217<<(x1218!=x1219))|x1220);

    if (t147 != -32258) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x1221 = 0;
	static int8_t x1222 = INT8_MIN;
	uint8_t x1223 = 74U;
	int64_t x1224 = INT64_MIN;

    t148 = ((x1221<<(x1222!=x1223))|x1224);

    if (t148 != INT64_MIN) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint64_t x1229 = UINT64_MAX;
	int64_t x1230 = INT64_MIN;
	int32_t x1232 = 761;
	volatile uint64_t t149 = UINT64_MAX;

    t149 = ((x1229<<(x1230!=x1231))|x1232);

    if (t149 != UINT64_MAX) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x1233 = 117U;
	static int16_t x1234 = -1;
	static uint64_t x1236 = 33722125229220LLU;
	static volatile uint64_t t150 = 1349172265479LLU;

    t150 = ((x1233<<(x1234!=x1235))|x1236);

    if (t150 != 33722125229294LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x1237 = INT16_MAX;
	uint64_t x1238 = 892200006624018LLU;
	int16_t x1239 = 5851;
	int8_t x1240 = INT8_MIN;
	int32_t t151 = -1;

    t151 = ((x1237<<(x1238!=x1239))|x1240);

    if (t151 != -2) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x1247 = 41747219LL;
	int64_t x1248 = 15LL;

    t152 = ((x1245<<(x1246!=x1247))|x1248);

    if (t152 != 3199LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x1249 = INT8_MAX;
	int64_t x1250 = INT64_MIN;
	static uint64_t x1251 = UINT64_MAX;

    t153 = ((x1249<<(x1250!=x1251))|x1252);

    if (t153 != -9223372036854775554LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x1258 = 1U;
	static volatile int16_t x1259 = INT16_MIN;

    t154 = ((x1257<<(x1258!=x1259))|x1260);

    if (t154 != -32768) { NG(); } else { ; }
	
}

void f155(void) {
    	static int8_t x1262 = INT8_MAX;
	uint64_t x1263 = 121671281713LLU;
	int16_t x1264 = -1;
	int32_t t155 = 14481723;

    t155 = ((x1261<<(x1262!=x1263))|x1264);

    if (t155 != -1) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile int16_t x1273 = 928;
	int8_t x1275 = INT8_MIN;
	static volatile uint32_t x1276 = 951U;
	volatile uint32_t t156 = 5031951U;

    t156 = ((x1273<<(x1274!=x1275))|x1276);

    if (t156 != 2039U) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x1289 = 11764374146948LLU;
	volatile uint32_t x1290 = 842356U;
	static int8_t x1291 = -53;
	int16_t x1292 = INT16_MIN;
	volatile uint64_t t157 = 37915881899LLU;

    t157 = ((x1289<<(x1290!=x1291))|x1292);

    if (t157 != 18446744073709526792LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x1297 = UINT64_MAX;
	static uint32_t x1298 = 11403U;
	volatile uint64_t t158 = 384LLU;

    t158 = ((x1297<<(x1298!=x1299))|x1300);

    if (t158 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint64_t x1302 = UINT64_MAX;
	int16_t x1303 = 9046;
	volatile uint64_t t159 = 51731297578LLU;

    t159 = ((x1301<<(x1302!=x1303))|x1304);

    if (t159 != 638LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int8_t x1309 = 30;
	volatile uint32_t x1310 = 3602170U;
	int32_t x1311 = 3;
	static int16_t x1312 = 6;

    t160 = ((x1309<<(x1310!=x1311))|x1312);

    if (t160 != 62) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x1329 = 2U;
	int8_t x1330 = INT8_MIN;
	static uint32_t x1331 = 63U;
	volatile int32_t t161 = -51230;

    t161 = ((x1329<<(x1330!=x1331))|x1332);

    if (t161 != -1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint64_t x1333 = 1674LLU;
	static volatile uint32_t x1334 = 210929320U;
	int64_t x1336 = INT64_MIN;
	static volatile uint64_t t162 = 3886905421LLU;

    t162 = ((x1333<<(x1334!=x1335))|x1336);

    if (t162 != 9223372036854779156LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x1341 = 67482651686LLU;
	int8_t x1342 = INT8_MAX;
	int8_t x1343 = 12;
	uint16_t x1344 = 41U;

    t163 = ((x1341<<(x1342!=x1343))|x1344);

    if (t163 != 134965303405LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x1347 = -201;
	static int16_t x1348 = 3727;
	volatile uint64_t t164 = UINT64_MAX;

    t164 = ((x1345<<(x1346!=x1347))|x1348);

    if (t164 != UINT64_MAX) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x1349 = 14;
	int8_t x1350 = INT8_MAX;
	int8_t x1351 = INT8_MIN;
	uint8_t x1352 = UINT8_MAX;
	volatile int32_t t165 = -6486;

    t165 = ((x1349<<(x1350!=x1351))|x1352);

    if (t165 != 255) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int16_t x1353 = INT16_MAX;
	static int64_t x1354 = -1LL;
	uint64_t x1355 = 459406212064LLU;
	int32_t x1356 = INT32_MIN;

    t166 = ((x1353<<(x1354!=x1355))|x1356);

    if (t166 != -2147418114) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint64_t x1361 = 28227LLU;
	static uint8_t x1363 = UINT8_MAX;
	int64_t x1364 = -1LL;
	uint64_t t167 = UINT64_MAX;

    t167 = ((x1361<<(x1362!=x1363))|x1364);

    if (t167 != UINT64_MAX) { NG(); } else { ; }
	
}

void f168(void) {
    	static int16_t x1365 = 43;
	int32_t x1366 = -27660;
	uint32_t x1367 = 138U;
	volatile int32_t x1368 = -1;
	int32_t t168 = -6;

    t168 = ((x1365<<(x1366!=x1367))|x1368);

    if (t168 != -1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint64_t x1369 = UINT64_MAX;
	int8_t x1370 = INT8_MAX;
	uint8_t x1371 = 86U;
	uint8_t x1372 = UINT8_MAX;
	volatile uint64_t t169 = UINT64_MAX;

    t169 = ((x1369<<(x1370!=x1371))|x1372);

    if (t169 != UINT64_MAX) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint8_t x1381 = UINT8_MAX;
	static uint8_t x1383 = 1U;
	int8_t x1384 = -17;

    t170 = ((x1381<<(x1382!=x1383))|x1384);

    if (t170 != -1) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x1385 = 2757;
	int8_t x1387 = INT8_MAX;
	int16_t x1388 = INT16_MIN;

    t171 = ((x1385<<(x1386!=x1387))|x1388);

    if (t171 != -27254) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x1389 = INT16_MAX;
	int8_t x1390 = 0;
	uint8_t x1391 = 70U;
	int32_t t172 = -169;

    t172 = ((x1389<<(x1390!=x1391))|x1392);

    if (t172 != -1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x1409 = 40U;
	int64_t x1410 = INT64_MAX;
	int8_t x1412 = INT8_MAX;
	int32_t t173 = -6052;

    t173 = ((x1409<<(x1410!=x1411))|x1412);

    if (t173 != 127) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x1425 = 114U;
	volatile uint64_t x1426 = 194LLU;
	int16_t x1427 = -659;
	int32_t x1428 = INT32_MIN;
	volatile int32_t t174 = 38;

    t174 = ((x1425<<(x1426!=x1427))|x1428);

    if (t174 != -2147483420) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x1437 = 6;
	volatile int8_t x1438 = -1;
	volatile int32_t x1439 = INT32_MIN;
	static int64_t x1440 = -1LL;
	volatile int64_t t175 = -6919041524973LL;

    t175 = ((x1437<<(x1438!=x1439))|x1440);

    if (t175 != -1LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x1441 = 3U;
	int16_t x1442 = 12;
	int64_t x1443 = 14016866LL;
	int64_t x1444 = INT64_MAX;
	static volatile int64_t t176 = INT64_MAX;

    t176 = ((x1441<<(x1442!=x1443))|x1444);

    if (t176 != INT64_MAX) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x1446 = 1U;
	uint64_t x1447 = UINT64_MAX;
	volatile int64_t t177 = -197642LL;

    t177 = ((x1445<<(x1446!=x1447))|x1448);

    if (t177 != -1LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x1453 = 47659945972072969LLU;
	int32_t x1454 = -174517;
	uint16_t x1455 = 1861U;
	uint16_t x1456 = UINT16_MAX;
	uint64_t t178 = 5453610548522861669LLU;

    t178 = ((x1453<<(x1454!=x1455))|x1456);

    if (t178 != 95319891944210431LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x1457 = UINT8_MAX;
	uint64_t x1460 = 232188689289LLU;
	volatile uint64_t t179 = 382941LLU;

    t179 = ((x1457<<(x1458!=x1459))|x1460);

    if (t179 != 232188689407LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint32_t x1465 = UINT32_MAX;
	int32_t x1468 = -764;
	volatile uint32_t t180 = UINT32_MAX;

    t180 = ((x1465<<(x1466!=x1467))|x1468);

    if (t180 != UINT32_MAX) { NG(); } else { ; }
	
}

void f181(void) {
    	static int16_t x1469 = 1;
	uint64_t x1470 = 3221623LLU;
	int32_t x1471 = INT32_MIN;
	volatile int16_t x1472 = -3;
	int32_t t181 = 22446021;

    t181 = ((x1469<<(x1470!=x1471))|x1472);

    if (t181 != -1) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x1477 = INT8_MAX;
	static volatile int8_t x1478 = 11;
	int32_t t182 = -12;

    t182 = ((x1477<<(x1478!=x1479))|x1480);

    if (t182 != -2147483394) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x1481 = INT8_MAX;
	static uint32_t x1482 = UINT32_MAX;
	int8_t x1483 = INT8_MAX;
	volatile uint8_t x1484 = 100U;
	volatile int32_t t183 = -65080995;

    t183 = ((x1481<<(x1482!=x1483))|x1484);

    if (t183 != 254) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint32_t x1497 = UINT32_MAX;
	uint16_t x1498 = UINT16_MAX;
	static int16_t x1499 = INT16_MAX;
	int8_t x1500 = -1;
	uint32_t t184 = UINT32_MAX;

    t184 = ((x1497<<(x1498!=x1499))|x1500);

    if (t184 != UINT32_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint32_t x1513 = 65392850U;
	volatile uint8_t x1514 = UINT8_MAX;
	int8_t x1515 = -1;
	int64_t x1516 = INT64_MAX;
	volatile int64_t t185 = INT64_MAX;

    t185 = ((x1513<<(x1514!=x1515))|x1516);

    if (t185 != INT64_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x1521 = 200890450U;
	volatile int32_t x1522 = INT32_MIN;
	static volatile uint32_t x1523 = 28120U;
	int32_t x1524 = INT32_MIN;
	volatile uint32_t t186 = 7577341U;

    t186 = ((x1521<<(x1522!=x1523))|x1524);

    if (t186 != 2549264548U) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x1525 = UINT8_MAX;
	uint32_t x1526 = UINT32_MAX;
	int8_t x1527 = -1;
	int32_t x1528 = -7096;
	static volatile int32_t t187 = 255642;

    t187 = ((x1525<<(x1526!=x1527))|x1528);

    if (t187 != -6913) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int64_t x1529 = 330808632758863880LL;
	uint16_t x1530 = 29U;
	volatile uint8_t x1531 = 1U;
	int64_t t188 = 26203122944793LL;

    t188 = ((x1529<<(x1530!=x1531))|x1532);

    if (t188 != 661617265517727763LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x1537 = UINT64_MAX;
	static int16_t x1538 = INT16_MIN;
	static int32_t x1539 = INT32_MAX;
	uint32_t x1540 = 208822640U;
	static volatile uint64_t t189 = 311662351LLU;

    t189 = ((x1537<<(x1538!=x1539))|x1540);

    if (t189 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x1544 = 23575206008607394LLU;
	volatile uint64_t t190 = 113LLU;

    t190 = ((x1541<<(x1542!=x1543))|x1544);

    if (t190 != 23575206008615914LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x1545 = 107926U;
	int8_t x1546 = INT8_MIN;
	static int8_t x1547 = 0;
	volatile uint32_t t191 = 2U;

    t191 = ((x1545<<(x1546!=x1547))|x1548);

    if (t191 != 2147699500U) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1549 = 6;
	uint64_t x1550 = UINT64_MAX;
	int8_t x1551 = INT8_MAX;
	uint8_t x1552 = UINT8_MAX;

    t192 = ((x1549<<(x1550!=x1551))|x1552);

    if (t192 != 255) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x1561 = 369U;
	int8_t x1562 = INT8_MAX;
	volatile int64_t t193 = -7306LL;

    t193 = ((x1561<<(x1562!=x1563))|x1564);

    if (t193 != -432642077LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x1569 = 5U;
	int64_t x1570 = INT64_MIN;
	static volatile uint32_t x1571 = UINT32_MAX;
	int8_t x1572 = INT8_MAX;
	uint32_t t194 = 2217685U;

    t194 = ((x1569<<(x1570!=x1571))|x1572);

    if (t194 != 127U) { NG(); } else { ; }
	
}

void f195(void) {
    	static int8_t x1573 = INT8_MAX;
	volatile uint8_t x1574 = 6U;
	int32_t x1575 = INT32_MIN;
	static volatile uint32_t x1576 = 27U;
	volatile uint32_t t195 = 46U;

    t195 = ((x1573<<(x1574!=x1575))|x1576);

    if (t195 != 255U) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int64_t x1581 = 1136LL;
	volatile int8_t x1582 = INT8_MAX;
	int16_t x1584 = 1;
	volatile int64_t t196 = -1045626135685018LL;

    t196 = ((x1581<<(x1582!=x1583))|x1584);

    if (t196 != 2273LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x1585 = 119282285928LL;
	int32_t x1586 = INT32_MAX;
	volatile uint64_t x1587 = 24156303402LLU;
	volatile int8_t x1588 = INT8_MAX;
	volatile int64_t t197 = 69LL;

    t197 = ((x1585<<(x1586!=x1587))|x1588);

    if (t197 != 238564571903LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x1589 = 370544568205477249LL;
	int16_t x1590 = INT16_MAX;
	static int8_t x1591 = INT8_MAX;
	uint8_t x1592 = 40U;
	int64_t t198 = 1180696039403LL;

    t198 = ((x1589<<(x1590!=x1591))|x1592);

    if (t198 != 741089136410954538LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x1597 = INT16_MAX;
	volatile int64_t x1598 = -107677188883475LL;
	int32_t x1600 = INT32_MIN;
	volatile int32_t t199 = 345526513;

    t199 = ((x1597<<(x1598!=x1599))|x1600);

    if (t199 != -2147418114) { NG(); } else { ; }
	
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

