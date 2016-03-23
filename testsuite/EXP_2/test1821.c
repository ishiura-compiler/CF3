
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

static volatile int16_t x7 = -14;
static int16_t x30 = INT16_MIN;
volatile uint8_t x45 = UINT8_MAX;
static int64_t t5 = INT64_MIN;
int16_t x71 = -199;
uint32_t x72 = 37U;
int32_t x73 = -1;
int32_t x77 = -1;
int16_t x79 = 1572;
uint64_t x90 = 193801718127374138LLU;
int64_t x93 = INT64_MAX;
int64_t x100 = -19496434LL;
int8_t x102 = -1;
volatile uint64_t x105 = UINT64_MAX;
uint64_t t16 = 704458352082656LLU;
int16_t x135 = INT16_MAX;
static volatile int16_t x136 = 12;
static volatile int32_t t17 = 253;
int16_t x137 = -1;
int16_t x138 = -1;
int32_t x151 = INT32_MAX;
volatile int8_t x153 = 1;
int32_t x156 = INT32_MIN;
static volatile int32_t t22 = 213353860;
uint32_t x174 = 357U;
int8_t x175 = INT8_MIN;
volatile int8_t x178 = -1;
volatile uint32_t t24 = 226830U;
int32_t x182 = 2462;
int32_t x184 = INT32_MAX;
uint16_t x191 = 127U;
volatile uint8_t x196 = 0U;
volatile int8_t x197 = INT8_MIN;
static volatile int32_t t28 = INT32_MIN;
uint32_t x208 = 12335950U;
int32_t t30 = -7;
volatile int32_t x249 = INT32_MAX;
int16_t x258 = -3858;
volatile int8_t x277 = -30;
uint64_t x279 = 1225774043LLU;
static int32_t t35 = 4242391;
int64_t x281 = -1599387608846299099LL;
uint64_t x282 = 25979LLU;
uint8_t x289 = 41U;
int64_t x293 = INT64_MAX;
volatile uint64_t t40 = 8354223373LLU;
int16_t x309 = INT16_MIN;
uint32_t x312 = 1U;
static int16_t x314 = INT16_MAX;
int16_t x316 = INT16_MIN;
volatile int64_t x317 = INT64_MIN;
volatile int64_t t44 = -25666605LL;
int8_t x321 = INT8_MIN;
uint64_t t47 = 8073985235157890406LLU;
volatile uint64_t t48 = 1610635317154134105LLU;
volatile int64_t x361 = INT64_MAX;
volatile int32_t t50 = 0;
int64_t x386 = INT64_MIN;
int16_t x387 = -1;
int32_t x406 = -236;
uint16_t x407 = UINT16_MAX;
static int32_t x479 = -1;
volatile int16_t x485 = -220;
static int32_t x487 = -1;
int16_t x496 = INT16_MIN;
int16_t x523 = -1;
static volatile uint64_t x524 = 29820295LLU;
uint64_t t64 = 286520350LLU;
static int8_t x525 = -8;
uint32_t t65 = 13U;
int8_t x544 = INT8_MIN;
volatile int8_t x553 = INT8_MIN;
int32_t x568 = 125489924;
volatile int32_t t69 = -35555;
uint64_t t70 = 3963756972LLU;
volatile int32_t x577 = -1;
uint32_t x579 = UINT32_MAX;
uint16_t x580 = UINT16_MAX;
volatile int16_t x590 = 1;
static uint32_t x624 = 501U;
volatile uint32_t t76 = 0U;
uint8_t x631 = 78U;
volatile int16_t x633 = INT16_MAX;
int16_t x644 = INT16_MIN;
volatile int16_t x648 = INT16_MIN;
uint32_t x658 = UINT32_MAX;
static int64_t t82 = 170818487144531LL;
uint32_t x668 = UINT32_MAX;
int16_t x671 = INT16_MIN;
volatile int32_t x677 = -1;
volatile int32_t t86 = -66351;
int64_t t87 = INT64_MIN;
volatile int64_t x702 = INT64_MIN;
int16_t x703 = -1;
int32_t x704 = -1;
uint8_t x708 = 102U;
static volatile int32_t x724 = INT32_MIN;
int64_t x726 = INT64_MIN;
static int8_t x728 = INT8_MIN;
int32_t t94 = -616176515;
int64_t x745 = 35261925LL;
static int8_t x752 = INT8_MAX;
volatile uint32_t t96 = 30800090U;
static int64_t x753 = -1LL;
int16_t x767 = -1;
int32_t t100 = 0;
int64_t x786 = -384LL;
int8_t x788 = INT8_MIN;
int16_t x791 = -1;
uint32_t x801 = 21469810U;
static volatile int8_t x803 = 63;
int16_t x817 = INT16_MAX;
uint64_t x820 = 8009734217526939LLU;
uint8_t x830 = 0U;
int32_t x839 = -872811;
volatile int64_t t111 = INT64_MIN;
uint64_t x844 = UINT64_MAX;
static int8_t x851 = INT8_MIN;
int64_t x855 = 0LL;
uint64_t t116 = 708525316676333LLU;
int32_t x861 = 3757917;
int8_t x865 = INT8_MIN;
volatile int64_t t119 = -504361957588LL;
static volatile uint32_t x893 = UINT32_MAX;
int32_t x894 = 285461557;
int32_t x901 = -1;
uint64_t x906 = 42488567244927858LLU;
uint64_t x911 = UINT64_MAX;
volatile uint16_t x914 = 6U;
static volatile uint32_t x915 = UINT32_MAX;
int64_t x921 = -8LL;
static int8_t x930 = -1;
int64_t t128 = -1LL;
int8_t x957 = 0;
int8_t x965 = INT8_MAX;
int32_t x968 = 7325351;
volatile int16_t x972 = -8493;
volatile uint32_t x989 = UINT32_MAX;
int32_t x990 = INT32_MIN;
int16_t x1000 = -2;
static uint64_t x1001 = 14694LLU;
volatile uint64_t t135 = 3798931629312860430LLU;
uint32_t x1022 = 9U;
int64_t x1057 = INT64_MAX;
volatile int64_t t141 = 2669213443029018LL;
static int64_t t145 = INT64_MIN;
volatile uint8_t x1081 = 4U;
static volatile int32_t t146 = 362669647;
int16_t x1087 = 28;
volatile int64_t x1089 = -1LL;
int8_t x1103 = INT8_MIN;
static int8_t x1154 = -2;
int32_t x1168 = 36;
volatile int64_t t155 = 10298367LL;
static int16_t x1189 = INT16_MAX;
int32_t x1190 = INT32_MIN;
static volatile int16_t x1191 = INT16_MIN;
int64_t t157 = 3788034488031582473LL;
int32_t x1215 = INT32_MAX;
int16_t x1219 = INT16_MAX;
volatile int16_t x1221 = -3;
uint16_t x1224 = UINT16_MAX;
static int16_t x1227 = -48;
volatile int16_t x1236 = INT16_MAX;
uint8_t x1253 = UINT8_MAX;
static int64_t x1254 = -1704347LL;
int32_t t166 = INT32_MIN;
static int64_t x1264 = 36756212713LL;
int8_t x1274 = INT8_MIN;
volatile int64_t x1275 = 4LL;
volatile int64_t x1276 = INT64_MIN;
uint64_t t169 = 31LLU;
uint8_t x1286 = 3U;
volatile int64_t x1311 = -16176LL;
volatile int32_t t171 = -1;
int64_t x1327 = 409459932107764LL;
int8_t x1337 = INT8_MAX;
int16_t x1338 = INT16_MIN;
volatile uint32_t x1355 = UINT32_MAX;
int8_t x1356 = 7;
int32_t x1359 = -1;
int16_t x1360 = -3395;
uint64_t x1370 = 40LLU;
volatile int16_t x1386 = INT16_MIN;
static uint32_t x1387 = UINT32_MAX;
volatile int64_t x1388 = INT64_MIN;
volatile int64_t t180 = INT64_MIN;
int64_t x1390 = INT64_MIN;
uint16_t x1393 = 22U;
int32_t t182 = -1161;
uint64_t x1410 = 5717524279LLU;
uint8_t x1437 = UINT8_MAX;
int8_t x1439 = INT8_MIN;
volatile uint64_t t186 = UINT64_MAX;
int64_t t187 = 28418LL;
volatile int8_t x1465 = INT8_MIN;
int64_t x1466 = INT64_MIN;
static int16_t x1467 = INT16_MAX;
static uint32_t t189 = 58U;
int32_t x1485 = -1;
uint32_t x1486 = 4U;
volatile int32_t t192 = -1751;
int32_t x1510 = INT32_MIN;
int16_t x1533 = INT16_MIN;
int64_t x1534 = -1LL;
int8_t x1538 = -1;
volatile int32_t t197 = 44;
static int8_t x1551 = INT8_MIN;
int32_t x1555 = INT32_MAX;
int64_t t199 = -113LL;


void f0(void) {
    	volatile int16_t x5 = 0;
	int16_t x6 = INT16_MIN;
	static uint64_t x8 = UINT64_MAX;
	volatile uint64_t t0 = UINT64_MAX;

    t0 = ((x5%(x6<=x7))+x8);

    if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x13 = 24436601069977LLU;
	uint8_t x14 = 3U;
	static int32_t x15 = INT32_MAX;
	int8_t x16 = -1;
	uint64_t t1 = UINT64_MAX;

    t1 = ((x13%(x14<=x15))+x16);

    if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x21 = -14487;
	int32_t x22 = INT32_MIN;
	int16_t x23 = -7146;
	int32_t x24 = -1;
	volatile int32_t t2 = -1730374;

    t2 = ((x21%(x22<=x23))+x24);

    if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x29 = UINT32_MAX;
	volatile uint32_t x31 = UINT32_MAX;
	int64_t x32 = INT64_MAX;
	int64_t t3 = INT64_MAX;

    t3 = ((x29%(x30<=x31))+x32);

    if (t3 != INT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x41 = 1;
	int64_t x42 = INT64_MIN;
	volatile uint32_t x43 = 9U;
	int32_t x44 = 56;
	volatile int32_t t4 = 692;

    t4 = ((x41%(x42<=x43))+x44);

    if (t4 != 56) { NG(); } else { ; }
	
}

void f5(void) {
    	static int64_t x46 = INT64_MIN;
	int64_t x47 = 5324428502LL;
	int64_t x48 = INT64_MIN;

    t5 = ((x45%(x46<=x47))+x48);

    if (t5 != INT64_MIN) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x49 = -1;
	static int8_t x50 = INT8_MIN;
	uint32_t x51 = UINT32_MAX;
	static volatile int8_t x52 = INT8_MIN;
	volatile int32_t t6 = 0;

    t6 = ((x49%(x50<=x51))+x52);

    if (t6 != -128) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x57 = INT64_MIN;
	volatile int64_t x58 = INT64_MIN;
	uint8_t x59 = 1U;
	int64_t x60 = -2963LL;
	int64_t t7 = 1LL;

    t7 = ((x57%(x58<=x59))+x60);

    if (t7 != -2963LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x65 = INT8_MIN;
	int16_t x66 = INT16_MIN;
	int8_t x67 = INT8_MAX;
	uint64_t x68 = UINT64_MAX;
	uint64_t t8 = UINT64_MAX;

    t8 = ((x65%(x66<=x67))+x68);

    if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x69 = 2U;
	int16_t x70 = INT16_MIN;
	volatile uint32_t t9 = 770539U;

    t9 = ((x69%(x70<=x71))+x72);

    if (t9 != 37U) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x74 = INT32_MIN;
	static volatile int16_t x75 = INT16_MIN;
	int64_t x76 = -512544001531LL;
	volatile int64_t t10 = 4047266LL;

    t10 = ((x73%(x74<=x75))+x76);

    if (t10 != -512544001531LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x78 = INT64_MIN;
	static int64_t x80 = -9443146714603LL;
	int64_t t11 = 989189585480752267LL;

    t11 = ((x77%(x78<=x79))+x80);

    if (t11 != -9443146714603LL) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint32_t x89 = 126U;
	static int64_t x91 = INT64_MIN;
	static uint8_t x92 = 25U;
	static volatile uint32_t t12 = 196U;

    t12 = ((x89%(x90<=x91))+x92);

    if (t12 != 25U) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x94 = UINT32_MAX;
	uint64_t x95 = 49637834616809865LLU;
	volatile int16_t x96 = -1;
	static int64_t t13 = -40411398141969383LL;

    t13 = ((x93%(x94<=x95))+x96);

    if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint32_t x97 = UINT32_MAX;
	uint8_t x98 = UINT8_MAX;
	int64_t x99 = 3389556155LL;
	volatile int64_t t14 = 463794466545060LL;

    t14 = ((x97%(x98<=x99))+x100);

    if (t14 != -19496434LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x101 = INT64_MIN;
	uint8_t x103 = 3U;
	static volatile uint8_t x104 = 3U;
	static int64_t t15 = -450605281LL;

    t15 = ((x101%(x102<=x103))+x104);

    if (t15 != 3LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x106 = 2450U;
	int32_t x107 = -702363;
	uint8_t x108 = UINT8_MAX;

    t16 = ((x105%(x106<=x107))+x108);

    if (t16 != 255LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x133 = INT8_MIN;
	int64_t x134 = INT64_MIN;

    t17 = ((x133%(x134<=x135))+x136);

    if (t17 != 12) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x139 = 527151LL;
	int16_t x140 = -1;
	volatile int32_t t18 = 55254758;

    t18 = ((x137%(x138<=x139))+x140);

    if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x145 = -217733379950LL;
	uint32_t x146 = 1736627894U;
	int64_t x147 = INT64_MAX;
	uint64_t x148 = 22388642426730LLU;
	volatile uint64_t t19 = 703152375243771LLU;

    t19 = ((x145%(x146<=x147))+x148);

    if (t19 != 22388642426730LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x149 = 810154606U;
	int8_t x150 = INT8_MAX;
	volatile int16_t x152 = INT16_MIN;
	static uint32_t t20 = 95U;

    t20 = ((x149%(x150<=x151))+x152);

    if (t20 != 4294934528U) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x154 = INT64_MIN;
	int64_t x155 = INT64_MAX;
	volatile int32_t t21 = INT32_MIN;

    t21 = ((x153%(x154<=x155))+x156);

    if (t21 != INT32_MIN) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x165 = INT32_MIN;
	static uint64_t x166 = 314309444082059LLU;
	int16_t x167 = INT16_MIN;
	int8_t x168 = 52;

    t22 = ((x165%(x166<=x167))+x168);

    if (t22 != 52) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x173 = UINT16_MAX;
	uint64_t x176 = 228LLU;
	uint64_t t23 = 6483756957057521LLU;

    t23 = ((x173%(x174<=x175))+x176);

    if (t23 != 228LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x177 = INT8_MIN;
	int32_t x179 = 65965415;
	static uint32_t x180 = 93U;

    t24 = ((x177%(x178<=x179))+x180);

    if (t24 != 93U) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile uint8_t x181 = 25U;
	volatile uint32_t x183 = 9838U;
	int32_t t25 = INT32_MAX;

    t25 = ((x181%(x182<=x183))+x184);

    if (t25 != INT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x189 = 4041;
	int64_t x190 = INT64_MIN;
	int8_t x192 = INT8_MIN;
	int32_t t26 = 361446;

    t26 = ((x189%(x190<=x191))+x192);

    if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x193 = -10955;
	int16_t x194 = INT16_MIN;
	int16_t x195 = -4167;
	volatile int32_t t27 = -88;

    t27 = ((x193%(x194<=x195))+x196);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x198 = 15281431LLU;
	int32_t x199 = INT32_MIN;
	int32_t x200 = INT32_MIN;

    t28 = ((x197%(x198<=x199))+x200);

    if (t28 != INT32_MIN) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint8_t x205 = UINT8_MAX;
	int16_t x206 = INT16_MIN;
	int16_t x207 = -1;
	uint32_t t29 = 0U;

    t29 = ((x205%(x206<=x207))+x208);

    if (t29 != 12335950U) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x209 = INT8_MIN;
	volatile int64_t x210 = INT64_MIN;
	int64_t x211 = INT64_MIN;
	int8_t x212 = -6;

    t30 = ((x209%(x210<=x211))+x212);

    if (t30 != -6) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x250 = UINT64_MAX;
	static int16_t x251 = -1;
	uint64_t x252 = 7161LLU;
	uint64_t t31 = 34892985190253223LLU;

    t31 = ((x249%(x250<=x251))+x252);

    if (t31 != 7161LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint64_t x253 = 20797383306068826LLU;
	volatile uint64_t x254 = UINT64_MAX;
	static int32_t x255 = -1;
	int64_t x256 = 965LL;
	uint64_t t32 = 931718473777LLU;

    t32 = ((x253%(x254<=x255))+x256);

    if (t32 != 965LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x257 = INT64_MAX;
	int8_t x259 = -1;
	static int8_t x260 = INT8_MIN;
	static int64_t t33 = 99LL;

    t33 = ((x257%(x258<=x259))+x260);

    if (t33 != -128LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x269 = -1LL;
	volatile int8_t x270 = INT8_MIN;
	int16_t x271 = -100;
	uint64_t x272 = 17818528086422493LLU;
	static uint64_t t34 = 39978689947427738LLU;

    t34 = ((x269%(x270<=x271))+x272);

    if (t34 != 17818528086422493LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x278 = INT8_MAX;
	int32_t x280 = 128444964;

    t35 = ((x277%(x278<=x279))+x280);

    if (t35 != 128444964) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x283 = INT16_MIN;
	uint8_t x284 = 8U;
	volatile int64_t t36 = -3773577477560317001LL;

    t36 = ((x281%(x282<=x283))+x284);

    if (t36 != 8LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x285 = INT32_MIN;
	int32_t x286 = -1;
	uint8_t x287 = 0U;
	volatile uint8_t x288 = 31U;
	static volatile int32_t t37 = -1;

    t37 = ((x285%(x286<=x287))+x288);

    if (t37 != 31) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x290 = INT32_MIN;
	int8_t x291 = 3;
	uint32_t x292 = 9U;
	static volatile uint32_t t38 = 118927832U;

    t38 = ((x289%(x290<=x291))+x292);

    if (t38 != 9U) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x294 = 2;
	static int64_t x295 = INT64_MAX;
	int64_t x296 = 1846848185418LL;
	int64_t t39 = 15796245LL;

    t39 = ((x293%(x294<=x295))+x296);

    if (t39 != 1846848185418LL) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint64_t x301 = 7LLU;
	uint64_t x302 = 7462107412LLU;
	uint64_t x303 = UINT64_MAX;
	int16_t x304 = INT16_MIN;

    t40 = ((x301%(x302<=x303))+x304);

    if (t40 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x305 = INT64_MAX;
	volatile uint64_t x306 = 471574895LLU;
	int16_t x307 = INT16_MIN;
	volatile int8_t x308 = -1;
	int64_t t41 = -1980219955744112LL;

    t41 = ((x305%(x306<=x307))+x308);

    if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x310 = INT16_MIN;
	int64_t x311 = 400995LL;
	uint32_t t42 = 10631U;

    t42 = ((x309%(x310<=x311))+x312);

    if (t42 != 1U) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x313 = INT8_MAX;
	static volatile int32_t x315 = INT32_MAX;
	volatile int32_t t43 = 30405584;

    t43 = ((x313%(x314<=x315))+x316);

    if (t43 != -32768) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x318 = INT8_MIN;
	volatile int8_t x319 = INT8_MIN;
	int8_t x320 = INT8_MIN;

    t44 = ((x317%(x318<=x319))+x320);

    if (t44 != -128LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x322 = INT16_MIN;
	int16_t x323 = -5;
	static uint8_t x324 = UINT8_MAX;
	int32_t t45 = 295;

    t45 = ((x321%(x322<=x323))+x324);

    if (t45 != 255) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int32_t x325 = INT32_MIN;
	int16_t x326 = INT16_MIN;
	int16_t x327 = -3227;
	volatile int32_t x328 = -14272459;
	static int32_t t46 = 2;

    t46 = ((x325%(x326<=x327))+x328);

    if (t46 != -14272459) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x333 = INT64_MIN;
	static uint32_t x334 = 0U;
	uint64_t x335 = UINT64_MAX;
	uint64_t x336 = 93044LLU;

    t47 = ((x333%(x334<=x335))+x336);

    if (t47 != 93044LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x341 = UINT64_MAX;
	int64_t x342 = INT64_MIN;
	int64_t x343 = INT64_MIN;
	static int8_t x344 = INT8_MIN;

    t48 = ((x341%(x342<=x343))+x344);

    if (t48 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x362 = INT64_MIN;
	int8_t x363 = INT8_MIN;
	uint8_t x364 = 14U;
	int64_t t49 = -374100LL;

    t49 = ((x361%(x362<=x363))+x364);

    if (t49 != 14LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x369 = 52815;
	int64_t x370 = INT64_MIN;
	volatile uint8_t x371 = 41U;
	int8_t x372 = -4;

    t50 = ((x369%(x370<=x371))+x372);

    if (t50 != -4) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x377 = 188141496;
	int16_t x378 = INT16_MIN;
	int8_t x379 = INT8_MAX;
	static uint8_t x380 = UINT8_MAX;
	int32_t t51 = -10;

    t51 = ((x377%(x378<=x379))+x380);

    if (t51 != 255) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x381 = 3780U;
	int32_t x382 = -1;
	static uint64_t x383 = UINT64_MAX;
	static uint32_t x384 = 719168945U;
	volatile uint32_t t52 = 5095U;

    t52 = ((x381%(x382<=x383))+x384);

    if (t52 != 719168945U) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int64_t x385 = INT64_MIN;
	static uint16_t x388 = 8792U;
	int64_t t53 = -81803LL;

    t53 = ((x385%(x386<=x387))+x388);

    if (t53 != 8792LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x405 = INT64_MAX;
	int32_t x408 = -1;
	volatile int64_t t54 = 239917625424LL;

    t54 = ((x405%(x406<=x407))+x408);

    if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x417 = -53;
	uint16_t x418 = 1U;
	uint8_t x419 = UINT8_MAX;
	int64_t x420 = INT64_MAX;
	static volatile int64_t t55 = INT64_MAX;

    t55 = ((x417%(x418<=x419))+x420);

    if (t55 != INT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x421 = 12935U;
	static int8_t x422 = -3;
	int32_t x423 = INT32_MAX;
	int8_t x424 = INT8_MIN;
	static uint32_t t56 = 219U;

    t56 = ((x421%(x422<=x423))+x424);

    if (t56 != 4294967168U) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x441 = INT64_MAX;
	int64_t x442 = -1LL;
	static volatile int64_t x443 = 101825666570977246LL;
	volatile uint8_t x444 = 0U;
	int64_t t57 = -12367112845LL;

    t57 = ((x441%(x442<=x443))+x444);

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x445 = -1;
	volatile int32_t x446 = INT32_MAX;
	int64_t x447 = 20931114507056568LL;
	static uint64_t x448 = 1408098764613830452LLU;
	volatile uint64_t t58 = 149745833106LLU;

    t58 = ((x445%(x446<=x447))+x448);

    if (t58 != 1408098764613830452LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x461 = INT8_MIN;
	static uint8_t x462 = UINT8_MAX;
	static volatile int16_t x463 = INT16_MAX;
	volatile int64_t x464 = -2396304942LL;
	static volatile int64_t t59 = -10369564673LL;

    t59 = ((x461%(x462<=x463))+x464);

    if (t59 != -2396304942LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x477 = UINT64_MAX;
	int16_t x478 = -1;
	int32_t x480 = INT32_MIN;
	uint64_t t60 = 961391541LLU;

    t60 = ((x477%(x478<=x479))+x480);

    if (t60 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x486 = 2LLU;
	int16_t x488 = -33;
	volatile int32_t t61 = 53220017;

    t61 = ((x485%(x486<=x487))+x488);

    if (t61 != -33) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x489 = UINT64_MAX;
	int16_t x490 = 5542;
	static uint16_t x491 = UINT16_MAX;
	int8_t x492 = INT8_MIN;
	volatile uint64_t t62 = 669978845750254LLU;

    t62 = ((x489%(x490<=x491))+x492);

    if (t62 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int64_t x493 = -1895017342433894008LL;
	int64_t x494 = -123703242817LL;
	int16_t x495 = INT16_MIN;
	volatile int64_t t63 = -10LL;

    t63 = ((x493%(x494<=x495))+x496);

    if (t63 != -32768LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x521 = INT8_MIN;
	int64_t x522 = -1LL;

    t64 = ((x521%(x522<=x523))+x524);

    if (t64 != 29820295LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x526 = -1;
	volatile int8_t x527 = -1;
	volatile uint32_t x528 = 10719U;

    t65 = ((x525%(x526<=x527))+x528);

    if (t65 != 10719U) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x541 = INT16_MAX;
	static volatile uint8_t x542 = 13U;
	int16_t x543 = INT16_MAX;
	static int32_t t66 = 4047;

    t66 = ((x541%(x542<=x543))+x544);

    if (t66 != -128) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x549 = 17U;
	static volatile int32_t x550 = -1;
	volatile int64_t x551 = 49957LL;
	static uint64_t x552 = UINT64_MAX;
	volatile uint64_t t67 = UINT64_MAX;

    t67 = ((x549%(x550<=x551))+x552);

    if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x554 = 335302999742851LL;
	int64_t x555 = INT64_MAX;
	int16_t x556 = INT16_MIN;
	int32_t t68 = 98448;

    t68 = ((x553%(x554<=x555))+x556);

    if (t68 != -32768) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x565 = UINT8_MAX;
	volatile int64_t x566 = INT64_MIN;
	uint32_t x567 = 852U;

    t69 = ((x565%(x566<=x567))+x568);

    if (t69 != 125489924) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x573 = INT16_MIN;
	uint8_t x574 = 15U;
	static volatile int16_t x575 = 136;
	uint64_t x576 = 271709457689LLU;

    t70 = ((x573%(x574<=x575))+x576);

    if (t70 != 271709457689LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x578 = UINT16_MAX;
	int32_t t71 = 605969;

    t71 = ((x577%(x578<=x579))+x580);

    if (t71 != 65535) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x581 = INT16_MAX;
	int64_t x582 = INT64_MIN;
	int16_t x583 = INT16_MIN;
	uint32_t x584 = 2284U;
	uint32_t t72 = 126569660U;

    t72 = ((x581%(x582<=x583))+x584);

    if (t72 != 2284U) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x585 = 3318U;
	int16_t x586 = INT16_MAX;
	volatile int16_t x587 = INT16_MAX;
	int32_t x588 = -3;
	volatile int32_t t73 = -91;

    t73 = ((x585%(x586<=x587))+x588);

    if (t73 != -3) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x589 = UINT16_MAX;
	int8_t x591 = INT8_MAX;
	static uint16_t x592 = UINT16_MAX;
	int32_t t74 = 57557106;

    t74 = ((x589%(x590<=x591))+x592);

    if (t74 != 65535) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint64_t x601 = UINT64_MAX;
	static uint64_t x602 = 6726000631LLU;
	volatile int8_t x603 = INT8_MIN;
	int32_t x604 = -1;
	uint64_t t75 = UINT64_MAX;

    t75 = ((x601%(x602<=x603))+x604);

    if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x621 = -1;
	int32_t x622 = INT32_MIN;
	int8_t x623 = 0;

    t76 = ((x621%(x622<=x623))+x624);

    if (t76 != 501U) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x629 = INT16_MAX;
	int16_t x630 = INT16_MIN;
	uint16_t x632 = 20828U;
	int32_t t77 = 827071819;

    t77 = ((x629%(x630<=x631))+x632);

    if (t77 != 20828) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x634 = -3596947;
	int8_t x635 = INT8_MAX;
	int32_t x636 = INT32_MAX;
	static volatile int32_t t78 = INT32_MAX;

    t78 = ((x633%(x634<=x635))+x636);

    if (t78 != INT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x641 = 63802396461234LL;
	int8_t x642 = INT8_MIN;
	volatile int8_t x643 = INT8_MIN;
	volatile int64_t t79 = 11290LL;

    t79 = ((x641%(x642<=x643))+x644);

    if (t79 != -32768LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x645 = 984U;
	uint64_t x646 = 216908LLU;
	int16_t x647 = -6;
	uint32_t t80 = 82652646U;

    t80 = ((x645%(x646<=x647))+x648);

    if (t80 != 4294934528U) { NG(); } else { ; }
	
}

void f81(void) {
    	static int16_t x653 = -1;
	int16_t x654 = 466;
	uint16_t x655 = UINT16_MAX;
	uint16_t x656 = UINT16_MAX;
	int32_t t81 = -12227;

    t81 = ((x653%(x654<=x655))+x656);

    if (t81 != 65535) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x657 = -786032LL;
	uint64_t x659 = 6095324304896615LLU;
	volatile uint16_t x660 = UINT16_MAX;

    t82 = ((x657%(x658<=x659))+x660);

    if (t82 != 65535LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x665 = INT16_MIN;
	int16_t x666 = -1;
	uint8_t x667 = 48U;
	volatile uint32_t t83 = UINT32_MAX;

    t83 = ((x665%(x666<=x667))+x668);

    if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int16_t x669 = INT16_MAX;
	int64_t x670 = INT64_MIN;
	int64_t x672 = -1LL;
	volatile int64_t t84 = 2043LL;

    t84 = ((x669%(x670<=x671))+x672);

    if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x673 = 1274583;
	volatile int32_t x674 = INT32_MIN;
	volatile uint32_t x675 = UINT32_MAX;
	uint32_t x676 = UINT32_MAX;
	volatile uint32_t t85 = UINT32_MAX;

    t85 = ((x673%(x674<=x675))+x676);

    if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x678 = INT8_MIN;
	uint8_t x679 = 0U;
	uint8_t x680 = 42U;

    t86 = ((x677%(x678<=x679))+x680);

    if (t86 != 42) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x681 = 1;
	uint16_t x682 = 2088U;
	static uint64_t x683 = UINT64_MAX;
	static int64_t x684 = INT64_MIN;

    t87 = ((x681%(x682<=x683))+x684);

    if (t87 != INT64_MIN) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x689 = 4318;
	int64_t x690 = INT64_MIN;
	int16_t x691 = INT16_MIN;
	static volatile int16_t x692 = INT16_MIN;
	int32_t t88 = -325392696;

    t88 = ((x689%(x690<=x691))+x692);

    if (t88 != -32768) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x701 = UINT8_MAX;
	volatile int32_t t89 = 206636309;

    t89 = ((x701%(x702<=x703))+x704);

    if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x705 = -62;
	int32_t x706 = -1;
	int8_t x707 = 0;
	int32_t t90 = 51698;

    t90 = ((x705%(x706<=x707))+x708);

    if (t90 != 102) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int8_t x713 = -1;
	static int64_t x714 = -2593649207LL;
	int64_t x715 = INT64_MAX;
	int8_t x716 = 54;
	volatile int32_t t91 = 90832768;

    t91 = ((x713%(x714<=x715))+x716);

    if (t91 != 54) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint64_t x717 = UINT64_MAX;
	volatile int32_t x718 = INT32_MIN;
	int64_t x719 = -1LL;
	volatile int32_t x720 = INT32_MIN;
	uint64_t t92 = 3LLU;

    t92 = ((x717%(x718<=x719))+x720);

    if (t92 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x721 = INT32_MAX;
	int16_t x722 = -115;
	uint32_t x723 = UINT32_MAX;
	int32_t t93 = INT32_MIN;

    t93 = ((x721%(x722<=x723))+x724);

    if (t93 != INT32_MIN) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x725 = -13;
	int8_t x727 = INT8_MIN;

    t94 = ((x725%(x726<=x727))+x728);

    if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x746 = INT64_MIN;
	static int8_t x747 = 31;
	uint64_t x748 = 1868LLU;
	volatile uint64_t t95 = 1641724244LLU;

    t95 = ((x745%(x746<=x747))+x748);

    if (t95 != 1868LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x749 = UINT32_MAX;
	int8_t x750 = 0;
	static uint8_t x751 = UINT8_MAX;

    t96 = ((x749%(x750<=x751))+x752);

    if (t96 != 127U) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int64_t x754 = INT64_MIN;
	int64_t x755 = -20299863825169LL;
	int64_t x756 = 2970994000605628LL;
	int64_t t97 = -214406LL;

    t97 = ((x753%(x754<=x755))+x756);

    if (t97 != 2970994000605628LL) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int16_t x761 = -1;
	static int16_t x762 = INT16_MIN;
	int8_t x763 = -1;
	uint64_t x764 = UINT64_MAX;
	volatile uint64_t t98 = UINT64_MAX;

    t98 = ((x761%(x762<=x763))+x764);

    if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x765 = INT64_MIN;
	int64_t x766 = -1LL;
	int32_t x768 = -6;
	int64_t t99 = 173527015LL;

    t99 = ((x765%(x766<=x767))+x768);

    if (t99 != -6LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x773 = INT16_MIN;
	volatile int8_t x774 = INT8_MIN;
	int8_t x775 = INT8_MAX;
	volatile int8_t x776 = INT8_MAX;

    t100 = ((x773%(x774<=x775))+x776);

    if (t100 != 127) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x781 = -13278;
	static int8_t x782 = INT8_MIN;
	int8_t x783 = INT8_MIN;
	static uint16_t x784 = 29990U;
	volatile int32_t t101 = -308297149;

    t101 = ((x781%(x782<=x783))+x784);

    if (t101 != 29990) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x785 = -1;
	int8_t x787 = -1;
	static volatile int32_t t102 = -2595;

    t102 = ((x785%(x786<=x787))+x788);

    if (t102 != -128) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int32_t x789 = INT32_MIN;
	int16_t x790 = -4677;
	static int8_t x792 = -1;
	static int32_t t103 = -47395881;

    t103 = ((x789%(x790<=x791))+x792);

    if (t103 != -1) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x802 = INT8_MIN;
	int16_t x804 = INT16_MIN;
	uint32_t t104 = 8U;

    t104 = ((x801%(x802<=x803))+x804);

    if (t104 != 4294934528U) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x805 = UINT64_MAX;
	int8_t x806 = INT8_MIN;
	static uint64_t x807 = UINT64_MAX;
	uint64_t x808 = 60397495998014LLU;
	volatile uint64_t t105 = 703882653190248LLU;

    t105 = ((x805%(x806<=x807))+x808);

    if (t105 != 60397495998014LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint64_t x818 = 7998850438854LLU;
	int64_t x819 = INT64_MIN;
	volatile uint64_t t106 = 12071486721925LLU;

    t106 = ((x817%(x818<=x819))+x820);

    if (t106 != 8009734217526939LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x821 = -1;
	volatile int32_t x822 = INT32_MIN;
	uint16_t x823 = UINT16_MAX;
	volatile int16_t x824 = INT16_MIN;
	volatile int32_t t107 = 114;

    t107 = ((x821%(x822<=x823))+x824);

    if (t107 != -32768) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint16_t x825 = 1526U;
	static int16_t x826 = INT16_MIN;
	int64_t x827 = -1LL;
	static int64_t x828 = -1LL;
	int64_t t108 = -2387912LL;

    t108 = ((x825%(x826<=x827))+x828);

    if (t108 != -1LL) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int64_t x829 = 2007585LL;
	volatile uint32_t x831 = 14277U;
	uint8_t x832 = 3U;
	volatile int64_t t109 = -1059LL;

    t109 = ((x829%(x830<=x831))+x832);

    if (t109 != 3LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x833 = -1;
	static int16_t x834 = -11300;
	uint8_t x835 = 101U;
	static int8_t x836 = INT8_MIN;
	volatile int32_t t110 = -6608145;

    t110 = ((x833%(x834<=x835))+x836);

    if (t110 != -128) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int8_t x837 = -1;
	static uint32_t x838 = 500U;
	int64_t x840 = INT64_MIN;

    t111 = ((x837%(x838<=x839))+x840);

    if (t111 != INT64_MIN) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint8_t x841 = 35U;
	uint32_t x842 = 437U;
	int8_t x843 = INT8_MIN;
	uint64_t t112 = UINT64_MAX;

    t112 = ((x841%(x842<=x843))+x844);

    if (t112 != UINT64_MAX) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x845 = 0LL;
	volatile uint8_t x846 = 97U;
	uint64_t x847 = 174505596476LLU;
	int8_t x848 = -8;
	int64_t t113 = 264633722LL;

    t113 = ((x845%(x846<=x847))+x848);

    if (t113 != -8LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x849 = INT16_MIN;
	static int32_t x850 = -660019257;
	static int16_t x852 = 14;
	volatile int32_t t114 = 1052117002;

    t114 = ((x849%(x850<=x851))+x852);

    if (t114 != 14) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x853 = UINT8_MAX;
	static int64_t x854 = -338LL;
	int64_t x856 = 2948685074318LL;
	int64_t t115 = 19822593LL;

    t115 = ((x853%(x854<=x855))+x856);

    if (t115 != 2948685074318LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x857 = 1;
	uint32_t x858 = UINT32_MAX;
	volatile uint64_t x859 = 62636284290044156LLU;
	static volatile uint64_t x860 = 6146442492973LLU;

    t116 = ((x857%(x858<=x859))+x860);

    if (t116 != 6146442492973LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint8_t x862 = 82U;
	volatile int32_t x863 = INT32_MAX;
	static volatile uint8_t x864 = 9U;
	int32_t t117 = 623108433;

    t117 = ((x861%(x862<=x863))+x864);

    if (t117 != 9) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int16_t x866 = INT16_MIN;
	volatile int32_t x867 = -30;
	static int8_t x868 = -1;
	volatile int32_t t118 = 24;

    t118 = ((x865%(x866<=x867))+x868);

    if (t118 != -1) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x877 = INT64_MAX;
	int16_t x878 = 86;
	int64_t x879 = 9046670792619LL;
	int32_t x880 = INT32_MIN;

    t119 = ((x877%(x878<=x879))+x880);

    if (t119 != -2147483648LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x881 = INT32_MAX;
	uint32_t x882 = UINT32_MAX;
	static uint64_t x883 = 2047287880604LLU;
	volatile int16_t x884 = -2523;
	int32_t t120 = -8498;

    t120 = ((x881%(x882<=x883))+x884);

    if (t120 != -2523) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x889 = INT64_MIN;
	int32_t x890 = INT32_MIN;
	volatile int32_t x891 = -1940974;
	int32_t x892 = -1;
	volatile int64_t t121 = -2943613LL;

    t121 = ((x889%(x890<=x891))+x892);

    if (t121 != -1LL) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x895 = 7356743168491616LL;
	int16_t x896 = INT16_MIN;
	volatile uint32_t t122 = 522566208U;

    t122 = ((x893%(x894<=x895))+x896);

    if (t122 != 4294934528U) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x902 = -1;
	int16_t x903 = -1;
	int8_t x904 = INT8_MIN;
	volatile int32_t t123 = 195978;

    t123 = ((x901%(x902<=x903))+x904);

    if (t123 != -128) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x905 = -1;
	static int16_t x907 = -1;
	uint32_t x908 = 747215510U;
	uint32_t t124 = 0U;

    t124 = ((x905%(x906<=x907))+x908);

    if (t124 != 747215510U) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x909 = -1;
	volatile int64_t x910 = INT64_MIN;
	int16_t x912 = INT16_MIN;
	volatile int32_t t125 = -59814;

    t125 = ((x909%(x910<=x911))+x912);

    if (t125 != -32768) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x913 = INT32_MAX;
	int8_t x916 = INT8_MIN;
	volatile int32_t t126 = 4607504;

    t126 = ((x913%(x914<=x915))+x916);

    if (t126 != -128) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x922 = 1U;
	static int16_t x923 = 8586;
	static uint8_t x924 = 30U;
	volatile int64_t t127 = -127653176759110286LL;

    t127 = ((x921%(x922<=x923))+x924);

    if (t127 != 30LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x929 = INT64_MIN;
	int64_t x931 = INT64_MAX;
	int32_t x932 = 3934223;

    t128 = ((x929%(x930<=x931))+x932);

    if (t128 != 3934223LL) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint32_t x949 = 508352U;
	uint32_t x950 = 18U;
	static int16_t x951 = -1;
	uint8_t x952 = 1U;
	volatile uint32_t t129 = 3843258U;

    t129 = ((x949%(x950<=x951))+x952);

    if (t129 != 1U) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint64_t x958 = 261LLU;
	int64_t x959 = INT64_MIN;
	volatile int32_t x960 = 122104;
	int32_t t130 = -1;

    t130 = ((x957%(x958<=x959))+x960);

    if (t130 != 122104) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x966 = INT16_MIN;
	volatile int32_t x967 = 42;
	volatile int32_t t131 = 14727;

    t131 = ((x965%(x966<=x967))+x968);

    if (t131 != 7325351) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x969 = INT8_MAX;
	int16_t x970 = INT16_MIN;
	uint16_t x971 = 4U;
	int32_t t132 = 1;

    t132 = ((x969%(x970<=x971))+x972);

    if (t132 != -8493) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x991 = 117;
	int8_t x992 = -1;
	volatile uint32_t t133 = UINT32_MAX;

    t133 = ((x989%(x990<=x991))+x992);

    if (t133 != UINT32_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x997 = INT16_MIN;
	uint32_t x998 = 589U;
	static int16_t x999 = INT16_MAX;
	volatile int32_t t134 = 144786451;

    t134 = ((x997%(x998<=x999))+x1000);

    if (t134 != -2) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x1002 = -1LL;
	int32_t x1003 = 77161;
	int32_t x1004 = INT32_MIN;

    t135 = ((x1001%(x1002<=x1003))+x1004);

    if (t135 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x1005 = 0LL;
	uint32_t x1006 = 2465U;
	volatile int32_t x1007 = INT32_MIN;
	static int64_t x1008 = -13LL;
	volatile int64_t t136 = -1520242457029789208LL;

    t136 = ((x1005%(x1006<=x1007))+x1008);

    if (t136 != -13LL) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x1021 = INT32_MIN;
	int32_t x1023 = INT32_MIN;
	int64_t x1024 = -6607LL;
	static int64_t t137 = 3944398684578950LL;

    t137 = ((x1021%(x1022<=x1023))+x1024);

    if (t137 != -6607LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x1045 = 4741756108237LLU;
	int8_t x1046 = 5;
	uint32_t x1047 = 26667U;
	uint16_t x1048 = 1474U;
	volatile uint64_t t138 = 12536948980044721LLU;

    t138 = ((x1045%(x1046<=x1047))+x1048);

    if (t138 != 1474LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x1049 = UINT8_MAX;
	volatile int16_t x1050 = INT16_MIN;
	int64_t x1051 = 11527845LL;
	int32_t x1052 = -98317972;
	volatile int32_t t139 = -55278530;

    t139 = ((x1049%(x1050<=x1051))+x1052);

    if (t139 != -98317972) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x1053 = UINT32_MAX;
	volatile uint64_t x1054 = 549321644414219226LLU;
	int32_t x1055 = -1;
	static volatile uint16_t x1056 = 11098U;
	uint32_t t140 = 52251U;

    t140 = ((x1053%(x1054<=x1055))+x1056);

    if (t140 != 11098U) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x1058 = 2;
	uint64_t x1059 = 3814579512445035497LLU;
	volatile uint16_t x1060 = 1U;

    t141 = ((x1057%(x1058<=x1059))+x1060);

    if (t141 != 1LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x1065 = INT16_MIN;
	int8_t x1066 = INT8_MAX;
	uint16_t x1067 = 166U;
	int32_t x1068 = INT32_MAX;
	static int32_t t142 = INT32_MAX;

    t142 = ((x1065%(x1066<=x1067))+x1068);

    if (t142 != INT32_MAX) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile uint16_t x1069 = UINT16_MAX;
	int16_t x1070 = 1;
	uint16_t x1071 = UINT16_MAX;
	static uint32_t x1072 = 47007216U;
	uint32_t t143 = 24896U;

    t143 = ((x1069%(x1070<=x1071))+x1072);

    if (t143 != 47007216U) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x1073 = UINT8_MAX;
	int32_t x1074 = -1;
	static uint16_t x1075 = 1U;
	volatile uint32_t x1076 = 1272539481U;
	uint32_t t144 = 243U;

    t144 = ((x1073%(x1074<=x1075))+x1076);

    if (t144 != 1272539481U) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x1077 = INT8_MIN;
	int16_t x1078 = -1;
	int8_t x1079 = 3;
	int64_t x1080 = INT64_MIN;

    t145 = ((x1077%(x1078<=x1079))+x1080);

    if (t145 != INT64_MIN) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x1082 = -1;
	uint16_t x1083 = UINT16_MAX;
	int16_t x1084 = INT16_MAX;

    t146 = ((x1081%(x1082<=x1083))+x1084);

    if (t146 != 32767) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x1085 = INT8_MIN;
	volatile uint16_t x1086 = 0U;
	uint32_t x1088 = UINT32_MAX;
	uint32_t t147 = UINT32_MAX;

    t147 = ((x1085%(x1086<=x1087))+x1088);

    if (t147 != UINT32_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x1090 = UINT32_MAX;
	int8_t x1091 = -1;
	int16_t x1092 = 1;
	int64_t t148 = 520946390993LL;

    t148 = ((x1089%(x1090<=x1091))+x1092);

    if (t148 != 1LL) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int64_t x1101 = INT64_MIN;
	volatile int16_t x1102 = -12382;
	int64_t x1104 = INT64_MAX;
	volatile int64_t t149 = INT64_MAX;

    t149 = ((x1101%(x1102<=x1103))+x1104);

    if (t149 != INT64_MAX) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x1125 = 7;
	static uint16_t x1126 = UINT16_MAX;
	uint16_t x1127 = UINT16_MAX;
	static int32_t x1128 = 19030;
	volatile int32_t t150 = -26179;

    t150 = ((x1125%(x1126<=x1127))+x1128);

    if (t150 != 19030) { NG(); } else { ; }
	
}

void f151(void) {
    	static int16_t x1141 = -1;
	static int16_t x1142 = -7658;
	int16_t x1143 = -1;
	volatile int16_t x1144 = -1;
	static volatile int32_t t151 = -105598628;

    t151 = ((x1141%(x1142<=x1143))+x1144);

    if (t151 != -1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint8_t x1145 = UINT8_MAX;
	volatile int32_t x1146 = -1;
	static uint8_t x1147 = 39U;
	int64_t x1148 = INT64_MIN;
	volatile int64_t t152 = INT64_MIN;

    t152 = ((x1145%(x1146<=x1147))+x1148);

    if (t152 != INT64_MIN) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x1149 = INT64_MIN;
	static uint8_t x1150 = 1U;
	uint32_t x1151 = UINT32_MAX;
	static int64_t x1152 = INT64_MIN;
	volatile int64_t t153 = INT64_MIN;

    t153 = ((x1149%(x1150<=x1151))+x1152);

    if (t153 != INT64_MIN) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int64_t x1153 = -5452LL;
	int8_t x1155 = INT8_MAX;
	int16_t x1156 = -1;
	static volatile int64_t t154 = -2375955691859593LL;

    t154 = ((x1153%(x1154<=x1155))+x1156);

    if (t154 != -1LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x1165 = -89623LL;
	int64_t x1166 = INT64_MIN;
	uint16_t x1167 = 3293U;

    t155 = ((x1165%(x1166<=x1167))+x1168);

    if (t155 != 36LL) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x1169 = -1;
	int8_t x1170 = -14;
	static volatile int64_t x1171 = INT64_MAX;
	static volatile uint8_t x1172 = UINT8_MAX;
	volatile int32_t t156 = -36928;

    t156 = ((x1169%(x1170<=x1171))+x1172);

    if (t156 != 255) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x1192 = -1LL;

    t157 = ((x1189%(x1190<=x1191))+x1192);

    if (t157 != -1LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static int32_t x1197 = -1;
	volatile int16_t x1198 = INT16_MIN;
	int8_t x1199 = -1;
	volatile int16_t x1200 = 3;
	volatile int32_t t158 = -7573104;

    t158 = ((x1197%(x1198<=x1199))+x1200);

    if (t158 != 3) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x1213 = UINT64_MAX;
	static int16_t x1214 = INT16_MIN;
	int16_t x1216 = INT16_MIN;
	uint64_t t159 = 228560LLU;

    t159 = ((x1213%(x1214<=x1215))+x1216);

    if (t159 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int64_t x1217 = INT64_MIN;
	uint8_t x1218 = 0U;
	int8_t x1220 = INT8_MIN;
	volatile int64_t t160 = 7998857376LL;

    t160 = ((x1217%(x1218<=x1219))+x1220);

    if (t160 != -128LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x1222 = 5289U;
	int16_t x1223 = INT16_MAX;
	int32_t t161 = 3848;

    t161 = ((x1221%(x1222<=x1223))+x1224);

    if (t161 != 65535) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x1225 = 40560121;
	volatile int8_t x1226 = INT8_MIN;
	static uint16_t x1228 = 955U;
	int32_t t162 = 279;

    t162 = ((x1225%(x1226<=x1227))+x1228);

    if (t162 != 955) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x1233 = INT8_MIN;
	uint8_t x1234 = 0U;
	int64_t x1235 = 2098361843971LL;
	static volatile int32_t t163 = -1765469;

    t163 = ((x1233%(x1234<=x1235))+x1236);

    if (t163 != 32767) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint16_t x1245 = 0U;
	uint64_t x1246 = 27LLU;
	int32_t x1247 = -1;
	uint8_t x1248 = 3U;
	volatile int32_t t164 = 679;

    t164 = ((x1245%(x1246<=x1247))+x1248);

    if (t164 != 3) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x1255 = -1;
	int32_t x1256 = INT32_MAX;
	int32_t t165 = INT32_MAX;

    t165 = ((x1253%(x1254<=x1255))+x1256);

    if (t165 != INT32_MAX) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x1257 = INT32_MIN;
	volatile uint32_t x1258 = UINT32_MAX;
	volatile int64_t x1259 = 386699059413130771LL;
	int32_t x1260 = INT32_MIN;

    t166 = ((x1257%(x1258<=x1259))+x1260);

    if (t166 != INT32_MIN) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint64_t x1261 = UINT64_MAX;
	int8_t x1262 = INT8_MIN;
	uint64_t x1263 = UINT64_MAX;
	static volatile uint64_t t167 = 2152409055979616444LLU;

    t167 = ((x1261%(x1262<=x1263))+x1264);

    if (t167 != 36756212713LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x1269 = 2124U;
	uint8_t x1270 = 5U;
	uint32_t x1271 = 367U;
	int64_t x1272 = -103596975336665LL;
	volatile int64_t t168 = -4444103690135229LL;

    t168 = ((x1269%(x1270<=x1271))+x1272);

    if (t168 != -103596975336665LL) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint64_t x1273 = UINT64_MAX;

    t169 = ((x1273%(x1274<=x1275))+x1276);

    if (t169 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x1285 = INT32_MIN;
	uint16_t x1287 = 29U;
	volatile int32_t x1288 = -27561731;
	static volatile int32_t t170 = -2299981;

    t170 = ((x1285%(x1286<=x1287))+x1288);

    if (t170 != -27561731) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int32_t x1309 = 26828310;
	int64_t x1310 = INT64_MIN;
	static int32_t x1312 = -13041;

    t171 = ((x1309%(x1310<=x1311))+x1312);

    if (t171 != -13041) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint16_t x1317 = 976U;
	int32_t x1318 = -1;
	int32_t x1319 = INT32_MAX;
	int16_t x1320 = 3;
	volatile int32_t t172 = -46;

    t172 = ((x1317%(x1318<=x1319))+x1320);

    if (t172 != 3) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x1325 = 6708656U;
	uint16_t x1326 = 0U;
	uint32_t x1328 = 4454U;
	uint32_t t173 = 1U;

    t173 = ((x1325%(x1326<=x1327))+x1328);

    if (t173 != 4454U) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x1339 = UINT8_MAX;
	int32_t x1340 = 353520343;
	int32_t t174 = -749892;

    t174 = ((x1337%(x1338<=x1339))+x1340);

    if (t174 != 353520343) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x1349 = -1;
	int64_t x1350 = -1LL;
	int64_t x1351 = INT64_MAX;
	uint8_t x1352 = UINT8_MAX;
	static int32_t t175 = 536327;

    t175 = ((x1349%(x1350<=x1351))+x1352);

    if (t175 != 255) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x1353 = INT32_MAX;
	static uint16_t x1354 = 8686U;
	int32_t t176 = -156914;

    t176 = ((x1353%(x1354<=x1355))+x1356);

    if (t176 != 7) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x1357 = -2;
	uint64_t x1358 = 574346124308614LLU;
	int32_t t177 = -14715901;

    t177 = ((x1357%(x1358<=x1359))+x1360);

    if (t177 != -3395) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint8_t x1361 = 0U;
	int8_t x1362 = -1;
	static int64_t x1363 = INT64_MAX;
	int64_t x1364 = INT64_MIN;
	volatile int64_t t178 = INT64_MIN;

    t178 = ((x1361%(x1362<=x1363))+x1364);

    if (t178 != INT64_MIN) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x1369 = 0U;
	int64_t x1371 = -1780504410939439182LL;
	int64_t x1372 = INT64_MAX;
	int64_t t179 = INT64_MAX;

    t179 = ((x1369%(x1370<=x1371))+x1372);

    if (t179 != INT64_MAX) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x1385 = -1;

    t180 = ((x1385%(x1386<=x1387))+x1388);

    if (t180 != INT64_MIN) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x1389 = INT16_MIN;
	static int16_t x1391 = -29;
	int64_t x1392 = INT64_MAX;
	int64_t t181 = INT64_MAX;

    t181 = ((x1389%(x1390<=x1391))+x1392);

    if (t181 != INT64_MAX) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x1394 = INT16_MIN;
	static int16_t x1395 = INT16_MIN;
	int8_t x1396 = 0;

    t182 = ((x1393%(x1394<=x1395))+x1396);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x1409 = 23U;
	volatile uint64_t x1411 = UINT64_MAX;
	static int16_t x1412 = -1;
	int32_t t183 = -1;

    t183 = ((x1409%(x1410<=x1411))+x1412);

    if (t183 != -1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint64_t x1438 = 2010982821LLU;
	uint8_t x1440 = 1U;
	volatile int32_t t184 = 664;

    t184 = ((x1437%(x1438<=x1439))+x1440);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static int8_t x1441 = -1;
	static int32_t x1442 = -10008963;
	int8_t x1443 = INT8_MAX;
	int32_t x1444 = INT32_MIN;
	volatile int32_t t185 = INT32_MIN;

    t185 = ((x1441%(x1442<=x1443))+x1444);

    if (t185 != INT32_MIN) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int32_t x1445 = -1;
	volatile int8_t x1446 = -8;
	static int8_t x1447 = -1;
	static uint64_t x1448 = UINT64_MAX;

    t186 = ((x1445%(x1446<=x1447))+x1448);

    if (t186 != UINT64_MAX) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x1449 = UINT8_MAX;
	int16_t x1450 = INT16_MIN;
	int32_t x1451 = 878927601;
	static int64_t x1452 = -1LL;

    t187 = ((x1449%(x1450<=x1451))+x1452);

    if (t187 != -1LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x1457 = 8;
	int8_t x1458 = INT8_MIN;
	uint64_t x1459 = UINT64_MAX;
	int16_t x1460 = 560;
	static int32_t t188 = 27314;

    t188 = ((x1457%(x1458<=x1459))+x1460);

    if (t188 != 560) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x1468 = 26044U;

    t189 = ((x1465%(x1466<=x1467))+x1468);

    if (t189 != 26044U) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int32_t x1473 = INT32_MIN;
	int8_t x1474 = INT8_MIN;
	volatile int8_t x1475 = -6;
	static int8_t x1476 = 0;
	int32_t t190 = 890585384;

    t190 = ((x1473%(x1474<=x1475))+x1476);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int16_t x1477 = INT16_MAX;
	int8_t x1478 = -6;
	int8_t x1479 = INT8_MAX;
	int8_t x1480 = INT8_MIN;
	volatile int32_t t191 = 996;

    t191 = ((x1477%(x1478<=x1479))+x1480);

    if (t191 != -128) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1487 = -1;
	int16_t x1488 = INT16_MAX;

    t192 = ((x1485%(x1486<=x1487))+x1488);

    if (t192 != 32767) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x1501 = UINT64_MAX;
	volatile int16_t x1502 = INT16_MIN;
	int8_t x1503 = INT8_MIN;
	uint16_t x1504 = UINT16_MAX;
	uint64_t t193 = 2LLU;

    t193 = ((x1501%(x1502<=x1503))+x1504);

    if (t193 != 65535LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x1509 = INT8_MIN;
	static volatile uint32_t x1511 = UINT32_MAX;
	uint16_t x1512 = 8656U;
	int32_t t194 = -469153;

    t194 = ((x1509%(x1510<=x1511))+x1512);

    if (t194 != 8656) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x1517 = 5U;
	int64_t x1518 = 4LL;
	volatile int16_t x1519 = INT16_MAX;
	volatile uint32_t x1520 = UINT32_MAX;
	volatile uint32_t t195 = UINT32_MAX;

    t195 = ((x1517%(x1518<=x1519))+x1520);

    if (t195 != UINT32_MAX) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x1535 = UINT64_MAX;
	int32_t x1536 = INT32_MIN;
	int32_t t196 = INT32_MIN;

    t196 = ((x1533%(x1534<=x1535))+x1536);

    if (t196 != INT32_MIN) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x1537 = -1;
	uint8_t x1539 = UINT8_MAX;
	static int16_t x1540 = -29;

    t197 = ((x1537%(x1538<=x1539))+x1540);

    if (t197 != -29) { NG(); } else { ; }
	
}

void f198(void) {
    	static int32_t x1549 = -1;
	int32_t x1550 = -11920419;
	int16_t x1552 = 0;
	volatile int32_t t198 = -18401;

    t198 = ((x1549%(x1550<=x1551))+x1552);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int64_t x1553 = INT64_MIN;
	int32_t x1554 = -779977;
	volatile uint16_t x1556 = 0U;

    t199 = ((x1553%(x1554<=x1555))+x1556);

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

