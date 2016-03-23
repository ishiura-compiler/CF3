
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

static int8_t x6 = INT8_MAX;
volatile uint8_t x14 = 52U;
volatile int32_t x16 = INT32_MIN;
static int32_t x17 = 111;
static int32_t x24 = INT32_MAX;
uint16_t x66 = 476U;
volatile int32_t x67 = INT32_MAX;
volatile int32_t t9 = 25004;
static uint32_t x79 = 34248U;
static uint16_t x80 = 301U;
volatile int32_t t10 = -412;
int32_t x84 = 5;
int64_t x90 = 838LL;
int32_t x91 = INT32_MIN;
int64_t x92 = INT64_MAX;
int8_t x103 = INT8_MAX;
uint64_t x110 = 61LLU;
int8_t x112 = -1;
int32_t x143 = INT32_MAX;
int32_t x155 = -1;
uint64_t x156 = 614787024580259492LLU;
uint8_t x185 = 124U;
static volatile int64_t x189 = INT64_MIN;
uint32_t x190 = UINT32_MAX;
static volatile int64_t x192 = 1332661LL;
int32_t x195 = -1;
uint32_t x200 = 1840004626U;
int64_t x205 = 865294520961LL;
uint32_t x211 = UINT32_MAX;
int8_t x212 = INT8_MIN;
int32_t t27 = -9429;
volatile uint8_t x225 = 10U;
int8_t x257 = -1;
static volatile uint32_t x258 = 128970423U;
int8_t x260 = 0;
static int64_t x280 = INT64_MAX;
uint32_t x304 = 1795686U;
volatile uint32_t x314 = UINT32_MAX;
static uint32_t x316 = 118U;
uint8_t x317 = 31U;
static uint32_t x345 = 120812U;
uint16_t x346 = 26480U;
int16_t x367 = 178;
int32_t x368 = -955;
uint32_t x371 = 2047U;
volatile int64_t x372 = -661552125671299LL;
int64_t x383 = INT64_MIN;
int32_t t45 = 225;
int32_t x419 = INT32_MIN;
volatile uint16_t x420 = 6U;
int32_t x437 = -1;
volatile int32_t t52 = 2659270;
int8_t x449 = INT8_MIN;
static volatile int32_t x461 = -179;
uint16_t x486 = 154U;
volatile int32_t t58 = 3838;
static int32_t t59 = -14;
static int32_t t60 = -1227;
int64_t x547 = INT64_MIN;
volatile int32_t t64 = 2049;
int32_t x554 = 93845;
int16_t x556 = -1057;
volatile int32_t t66 = -605896;
int32_t t67 = -1;
int16_t x571 = INT16_MIN;
int32_t t69 = 0;
int32_t x577 = INT32_MIN;
uint64_t x586 = 1214848715140750544LLU;
int32_t t72 = -5;
int32_t x636 = INT32_MIN;
int16_t x639 = INT16_MIN;
volatile int32_t t74 = -1143;
int64_t x644 = -1LL;
volatile int64_t x645 = INT64_MIN;
static volatile int32_t t78 = -20819;
int32_t x661 = INT32_MIN;
volatile int32_t t79 = 11286;
uint16_t x667 = UINT16_MAX;
volatile int32_t t80 = -317346;
uint32_t x669 = UINT32_MAX;
int64_t x676 = INT64_MIN;
static int16_t x683 = 7;
uint32_t x687 = 21U;
volatile int32_t t84 = 248413863;
int64_t x735 = INT64_MIN;
int64_t x747 = -1LL;
static volatile uint16_t x753 = UINT16_MAX;
volatile int32_t x754 = 11;
int32_t x755 = 86472107;
int64_t x762 = 2053150LL;
volatile int16_t x769 = INT16_MIN;
uint8_t x770 = 97U;
int16_t x774 = 477;
static int16_t x778 = INT16_MAX;
uint64_t x788 = UINT64_MAX;
int64_t x789 = 3651LL;
int8_t x806 = INT8_MAX;
static int32_t t101 = -110;
static volatile uint8_t x812 = 1U;
int8_t x813 = INT8_MAX;
uint32_t x821 = 46U;
int32_t x825 = INT32_MAX;
static int32_t x826 = 38519;
int64_t x831 = INT64_MIN;
static int32_t x837 = -3298;
volatile int32_t x840 = 32;
int64_t x841 = 78739138LL;
int64_t x844 = 1931590856LL;
int32_t t110 = -40;
volatile int32_t t111 = 254;
int32_t t112 = -385094154;
volatile int64_t x889 = INT64_MIN;
static int16_t x890 = 33;
volatile int32_t t115 = -1761;
uint8_t x917 = 57U;
uint64_t x922 = 826987453579704455LLU;
int64_t x925 = INT64_MIN;
volatile int32_t t118 = 1;
uint32_t x939 = UINT32_MAX;
static int64_t x955 = INT64_MAX;
int32_t t120 = -50;
int8_t x957 = 9;
int16_t x973 = INT16_MIN;
volatile uint16_t x976 = 28U;
int16_t x987 = 9;
int32_t x989 = INT32_MIN;
int8_t x992 = 31;
int8_t x1029 = INT8_MIN;
volatile int32_t t127 = 5855;
int16_t x1044 = INT16_MIN;
static int16_t x1050 = INT16_MAX;
int32_t x1053 = 726456;
int32_t t131 = 22861537;
static volatile int32_t t132 = -29;
static volatile int8_t x1073 = -1;
volatile int16_t x1076 = INT16_MIN;
volatile int8_t x1101 = INT8_MAX;
volatile int16_t x1104 = -2;
volatile int32_t x1109 = INT32_MAX;
uint32_t x1115 = UINT32_MAX;
int16_t x1130 = INT16_MAX;
int64_t x1139 = 1LL;
int8_t x1142 = 1;
int64_t x1146 = 61LL;
volatile uint16_t x1157 = 21U;
static volatile int64_t x1164 = INT64_MIN;
volatile int32_t t147 = -190860;
volatile int16_t x1166 = INT16_MAX;
int8_t x1170 = 0;
static uint64_t x1173 = 26826LLU;
int8_t x1176 = -1;
int32_t t150 = -40;
int64_t x1177 = INT64_MAX;
uint8_t x1180 = 1U;
static int16_t x1186 = INT16_MAX;
static volatile int32_t t152 = 1;
static int8_t x1202 = 9;
int64_t x1221 = -12961LL;
uint64_t x1224 = UINT64_MAX;
volatile int32_t t157 = -5952;
int32_t x1236 = INT32_MIN;
int32_t t159 = -155456;
int64_t x1240 = 150771647145092258LL;
volatile int64_t x1242 = INT64_MAX;
int32_t x1246 = 3072264;
static int8_t x1269 = -3;
volatile int8_t x1273 = 0;
uint8_t x1279 = UINT8_MAX;
int8_t x1280 = -1;
int16_t x1284 = -16261;
volatile int16_t x1290 = INT16_MAX;
volatile uint8_t x1294 = UINT8_MAX;
volatile int32_t t169 = 1058;
int8_t x1299 = -1;
volatile int32_t t170 = -208679247;
int16_t x1305 = 1;
static uint32_t x1306 = 1532U;
int16_t x1309 = INT16_MAX;
static uint16_t x1310 = 786U;
static uint16_t x1312 = UINT16_MAX;
int16_t x1323 = INT16_MIN;
int32_t t174 = -229717;
int8_t x1329 = INT8_MAX;
int32_t x1335 = 5077537;
int32_t x1339 = INT32_MAX;
static uint16_t x1340 = UINT16_MAX;
volatile uint16_t x1350 = UINT16_MAX;
static uint8_t x1370 = 1U;
static int64_t x1372 = INT64_MIN;
volatile int32_t t182 = 594643143;
int64_t x1380 = 23118793513LL;
uint8_t x1386 = 1U;
int64_t x1388 = -135512LL;
int16_t x1403 = 1;
uint8_t x1410 = 1U;
uint8_t x1418 = 1U;
int32_t t187 = -20664834;
int32_t x1427 = -64319;
static int32_t t190 = 15737987;
volatile int32_t t191 = 88659;
uint8_t x1450 = UINT8_MAX;
volatile uint16_t x1451 = 95U;
volatile int32_t x1455 = INT32_MIN;
int32_t x1469 = -1;
static int8_t x1481 = INT8_MIN;


void f0(void) {
    	int16_t x5 = INT16_MIN;
	int64_t x7 = INT64_MIN;
	uint32_t x8 = 111297492U;
	int32_t t0 = 229;

    t0 = (x5==(x6>>(x7==x8)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x13 = 0;
	int64_t x15 = 4570957461750LL;
	volatile int32_t t1 = -905;

    t1 = (x13==(x14>>(x15==x16)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x18 = 76U;
	int64_t x19 = -1LL;
	volatile int32_t x20 = INT32_MIN;
	volatile int32_t t2 = -6;

    t2 = (x17==(x18>>(x19==x20)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile int64_t x21 = INT64_MIN;
	static uint32_t x22 = UINT32_MAX;
	static int32_t x23 = -644;
	volatile int32_t t3 = 13639285;

    t3 = (x21==(x22>>(x23==x24)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x49 = -12;
	uint16_t x50 = 27U;
	static uint32_t x51 = 221179U;
	int64_t x52 = -1LL;
	int32_t t4 = 683122335;

    t4 = (x49==(x50>>(x51==x52)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x53 = 392369U;
	uint16_t x54 = UINT16_MAX;
	volatile int64_t x55 = INT64_MIN;
	int16_t x56 = INT16_MAX;
	int32_t t5 = -61;

    t5 = (x53==(x54>>(x55==x56)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint32_t x57 = 239874176U;
	static int16_t x58 = INT16_MAX;
	static int32_t x59 = 34618;
	uint64_t x60 = UINT64_MAX;
	volatile int32_t t6 = 452;

    t6 = (x57==(x58>>(x59==x60)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x65 = INT32_MAX;
	uint16_t x68 = 1U;
	int32_t t7 = -10;

    t7 = (x65==(x66>>(x67==x68)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x69 = -18;
	volatile uint8_t x70 = 0U;
	int32_t x71 = INT32_MAX;
	uint64_t x72 = 102292388258147709LLU;
	volatile int32_t t8 = 13;

    t8 = (x69==(x70>>(x71==x72)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x73 = INT8_MAX;
	static uint8_t x74 = 3U;
	static int64_t x75 = INT64_MIN;
	int8_t x76 = 1;

    t9 = (x73==(x74>>(x75==x76)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint64_t x77 = 294275475606LLU;
	volatile uint16_t x78 = 2U;

    t10 = (x77==(x78>>(x79==x80)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint64_t x81 = UINT64_MAX;
	int8_t x82 = INT8_MAX;
	volatile int8_t x83 = -1;
	volatile int32_t t11 = -64301;

    t11 = (x81==(x82>>(x83==x84)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x85 = 2;
	static uint8_t x86 = UINT8_MAX;
	static int16_t x87 = INT16_MAX;
	static int8_t x88 = 0;
	volatile int32_t t12 = 0;

    t12 = (x85==(x86>>(x87==x88)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x89 = INT32_MIN;
	int32_t t13 = -1;

    t13 = (x89==(x90>>(x91==x92)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x101 = UINT64_MAX;
	static volatile int8_t x102 = 3;
	int16_t x104 = INT16_MIN;
	int32_t t14 = 356006;

    t14 = (x101==(x102>>(x103==x104)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x105 = INT32_MAX;
	int32_t x106 = 3946385;
	int64_t x107 = INT64_MIN;
	volatile int8_t x108 = -15;
	volatile int32_t t15 = -150;

    t15 = (x105==(x106>>(x107==x108)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x109 = INT64_MIN;
	static int8_t x111 = -1;
	volatile int32_t t16 = 224119;

    t16 = (x109==(x110>>(x111==x112)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x125 = INT64_MAX;
	volatile int8_t x126 = 0;
	int32_t x127 = -74582392;
	uint8_t x128 = UINT8_MAX;
	volatile int32_t t17 = -413398589;

    t17 = (x125==(x126>>(x127==x128)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x141 = INT8_MAX;
	volatile int16_t x142 = 1;
	static uint8_t x144 = 45U;
	int32_t t18 = -603636460;

    t18 = (x141==(x142>>(x143==x144)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x153 = -1;
	volatile int64_t x154 = INT64_MAX;
	volatile int32_t t19 = 33905;

    t19 = (x153==(x154>>(x155==x156)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int16_t x165 = INT16_MIN;
	uint8_t x166 = 0U;
	int32_t x167 = -59087;
	int8_t x168 = -62;
	volatile int32_t t20 = -121034;

    t20 = (x165==(x166>>(x167==x168)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x181 = 106U;
	volatile uint64_t x182 = 54960075LLU;
	int16_t x183 = -1;
	uint32_t x184 = 31274U;
	static int32_t t21 = -11;

    t21 = (x181==(x182>>(x183==x184)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x186 = UINT32_MAX;
	volatile uint16_t x187 = UINT16_MAX;
	static uint8_t x188 = 125U;
	volatile int32_t t22 = 0;

    t22 = (x185==(x186>>(x187==x188)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x191 = INT32_MIN;
	int32_t t23 = 12;

    t23 = (x189==(x190>>(x191==x192)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x193 = -173600;
	int64_t x194 = 3613320659858LL;
	int32_t x196 = INT32_MAX;
	volatile int32_t t24 = 938;

    t24 = (x193==(x194>>(x195==x196)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int64_t x197 = INT64_MAX;
	volatile uint16_t x198 = UINT16_MAX;
	int8_t x199 = INT8_MIN;
	volatile int32_t t25 = -8;

    t25 = (x197==(x198>>(x199==x200)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint64_t x206 = 1LLU;
	int16_t x207 = INT16_MAX;
	uint32_t x208 = UINT32_MAX;
	volatile int32_t t26 = 900625772;

    t26 = (x205==(x206>>(x207==x208)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x209 = 4U;
	uint64_t x210 = UINT64_MAX;

    t27 = (x209==(x210>>(x211==x212)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x226 = INT64_MAX;
	static int32_t x227 = -1;
	int64_t x228 = 0LL;
	int32_t t28 = 1;

    t28 = (x225==(x226>>(x227==x228)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int64_t x253 = -1LL;
	static int16_t x254 = 14;
	uint32_t x255 = UINT32_MAX;
	volatile int64_t x256 = -1LL;
	int32_t t29 = -388;

    t29 = (x253==(x254>>(x255==x256)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x259 = 1U;
	static int32_t t30 = -97;

    t30 = (x257==(x258>>(x259==x260)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x265 = INT16_MIN;
	int64_t x266 = INT64_MAX;
	static int16_t x267 = INT16_MIN;
	static int16_t x268 = -1;
	int32_t t31 = 60223099;

    t31 = (x265==(x266>>(x267==x268)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x277 = 3U;
	uint8_t x278 = 22U;
	static uint32_t x279 = 287U;
	static volatile int32_t t32 = 313782;

    t32 = (x277==(x278>>(x279==x280)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x301 = -1;
	int32_t x302 = 3634;
	int8_t x303 = INT8_MIN;
	int32_t t33 = 1301;

    t33 = (x301==(x302>>(x303==x304)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x313 = INT16_MIN;
	uint32_t x315 = 5575540U;
	volatile int32_t t34 = 13;

    t34 = (x313==(x314>>(x315==x316)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint32_t x318 = UINT32_MAX;
	volatile int16_t x319 = 2;
	int64_t x320 = INT64_MAX;
	volatile int32_t t35 = -2240839;

    t35 = (x317==(x318>>(x319==x320)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x325 = -1;
	uint8_t x326 = 66U;
	int64_t x327 = -422414791424545LL;
	volatile int64_t x328 = 1LL;
	int32_t t36 = 1681;

    t36 = (x325==(x326>>(x327==x328)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x333 = INT8_MIN;
	int16_t x334 = 11802;
	uint8_t x335 = UINT8_MAX;
	uint16_t x336 = UINT16_MAX;
	static int32_t t37 = -10;

    t37 = (x333==(x334>>(x335==x336)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x347 = UINT16_MAX;
	int64_t x348 = 31304856331LL;
	static volatile int32_t t38 = -32;

    t38 = (x345==(x346>>(x347==x348)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x357 = INT64_MAX;
	int64_t x358 = 7LL;
	int8_t x359 = INT8_MAX;
	int8_t x360 = -1;
	volatile int32_t t39 = 928216;

    t39 = (x357==(x358>>(x359==x360)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x361 = INT8_MIN;
	static int64_t x362 = INT64_MAX;
	volatile int8_t x363 = INT8_MIN;
	int32_t x364 = -1;
	int32_t t40 = -185272;

    t40 = (x361==(x362>>(x363==x364)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x365 = INT32_MIN;
	volatile uint16_t x366 = 187U;
	int32_t t41 = 106106;

    t41 = (x365==(x366>>(x367==x368)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x369 = -1;
	volatile int16_t x370 = INT16_MAX;
	static int32_t t42 = 3570;

    t42 = (x369==(x370>>(x371==x372)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x373 = 3476;
	volatile uint32_t x374 = 99812U;
	int8_t x375 = -1;
	uint8_t x376 = UINT8_MAX;
	volatile int32_t t43 = 5;

    t43 = (x373==(x374>>(x375==x376)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int64_t x381 = -4839200663LL;
	uint64_t x382 = 2473031566273LLU;
	static int64_t x384 = INT64_MIN;
	volatile int32_t t44 = -27530467;

    t44 = (x381==(x382>>(x383==x384)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int64_t x401 = 1LL;
	int64_t x402 = 6342558923LL;
	static uint32_t x403 = 6U;
	static int16_t x404 = INT16_MIN;

    t45 = (x401==(x402>>(x403==x404)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x409 = UINT64_MAX;
	static uint8_t x410 = 33U;
	int32_t x411 = -1;
	uint16_t x412 = 31740U;
	volatile int32_t t46 = -3873581;

    t46 = (x409==(x410>>(x411==x412)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x417 = INT16_MAX;
	volatile uint64_t x418 = 7LLU;
	volatile int32_t t47 = -14;

    t47 = (x417==(x418>>(x419==x420)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x421 = -1LL;
	static uint8_t x422 = 0U;
	int32_t x423 = 3;
	int64_t x424 = 641196LL;
	volatile int32_t t48 = -724990775;

    t48 = (x421==(x422>>(x423==x424)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x429 = -10563;
	static uint32_t x430 = 134U;
	int8_t x431 = 54;
	volatile uint64_t x432 = 461619285481824794LLU;
	volatile int32_t t49 = 45587243;

    t49 = (x429==(x430>>(x431==x432)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x438 = UINT16_MAX;
	volatile uint32_t x439 = 3481092U;
	static int8_t x440 = INT8_MIN;
	static volatile int32_t t50 = 36784842;

    t50 = (x437==(x438>>(x439==x440)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile int64_t x441 = INT64_MAX;
	int64_t x442 = 21LL;
	int16_t x443 = INT16_MIN;
	volatile int8_t x444 = -1;
	int32_t t51 = 35407710;

    t51 = (x441==(x442>>(x443==x444)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static int16_t x445 = -1;
	uint32_t x446 = 1656U;
	volatile uint32_t x447 = 725698U;
	static uint64_t x448 = 57LLU;

    t52 = (x445==(x446>>(x447==x448)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x450 = UINT16_MAX;
	uint16_t x451 = UINT16_MAX;
	uint16_t x452 = 44U;
	int32_t t53 = -417167;

    t53 = (x449==(x450>>(x451==x452)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x462 = 1061429U;
	int16_t x463 = -1491;
	volatile int32_t x464 = INT32_MIN;
	volatile int32_t t54 = 399155;

    t54 = (x461==(x462>>(x463==x464)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x465 = INT64_MIN;
	volatile uint64_t x466 = 2351253LLU;
	int64_t x467 = INT64_MAX;
	volatile int8_t x468 = INT8_MIN;
	static int32_t t55 = 3243;

    t55 = (x465==(x466>>(x467==x468)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x473 = 93U;
	int32_t x474 = INT32_MAX;
	uint8_t x475 = 1U;
	volatile int64_t x476 = 15656816LL;
	int32_t t56 = -21197361;

    t56 = (x473==(x474>>(x475==x476)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x477 = INT32_MIN;
	static uint16_t x478 = 30U;
	volatile uint32_t x479 = 1005473775U;
	static uint32_t x480 = 91898580U;
	int32_t t57 = -126596;

    t57 = (x477==(x478>>(x479==x480)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x485 = INT8_MIN;
	int64_t x487 = INT64_MAX;
	int16_t x488 = 178;

    t58 = (x485==(x486>>(x487==x488)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int64_t x493 = -62LL;
	int32_t x494 = 0;
	int16_t x495 = INT16_MIN;
	static int8_t x496 = -1;

    t59 = (x493==(x494>>(x495==x496)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x497 = INT16_MAX;
	int32_t x498 = INT32_MAX;
	int32_t x499 = INT32_MIN;
	volatile int16_t x500 = 2168;

    t60 = (x497==(x498>>(x499==x500)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x501 = UINT32_MAX;
	uint32_t x502 = 4268U;
	volatile uint32_t x503 = 1425U;
	volatile int32_t x504 = -3;
	volatile int32_t t61 = -13044579;

    t61 = (x501==(x502>>(x503==x504)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x533 = UINT64_MAX;
	volatile int32_t x534 = INT32_MAX;
	volatile uint64_t x535 = 35449LLU;
	int8_t x536 = 21;
	static volatile int32_t t62 = 65747;

    t62 = (x533==(x534>>(x535==x536)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x541 = -1;
	volatile uint64_t x542 = UINT64_MAX;
	static int8_t x543 = INT8_MIN;
	int8_t x544 = INT8_MIN;
	volatile int32_t t63 = 149;

    t63 = (x541==(x542>>(x543==x544)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint64_t x545 = 11816LLU;
	static uint32_t x546 = UINT32_MAX;
	volatile int8_t x548 = INT8_MAX;

    t64 = (x545==(x546>>(x547==x548)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint16_t x549 = 3429U;
	uint64_t x550 = 17502115582078LLU;
	static int16_t x551 = 0;
	int8_t x552 = -7;
	volatile int32_t t65 = 435;

    t65 = (x549==(x550>>(x551==x552)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x553 = UINT16_MAX;
	volatile int16_t x555 = -945;

    t66 = (x553==(x554>>(x555==x556)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x561 = UINT16_MAX;
	uint64_t x562 = UINT64_MAX;
	int64_t x563 = -1LL;
	uint16_t x564 = UINT16_MAX;

    t67 = (x561==(x562>>(x563==x564)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x565 = INT8_MAX;
	volatile int64_t x566 = INT64_MAX;
	volatile uint64_t x567 = UINT64_MAX;
	int64_t x568 = INT64_MIN;
	volatile int32_t t68 = -310;

    t68 = (x565==(x566>>(x567==x568)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x569 = INT8_MAX;
	int64_t x570 = 39226093794LL;
	static volatile uint32_t x572 = 246952793U;

    t69 = (x569==(x570>>(x571==x572)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x578 = UINT64_MAX;
	uint8_t x579 = 0U;
	volatile int64_t x580 = -1LL;
	volatile int32_t t70 = -446;

    t70 = (x577==(x578>>(x579==x580)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x581 = INT64_MIN;
	uint8_t x582 = 64U;
	int32_t x583 = INT32_MIN;
	static int32_t x584 = INT32_MAX;
	volatile int32_t t71 = 6430;

    t71 = (x581==(x582>>(x583==x584)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x585 = INT32_MAX;
	int16_t x587 = -1;
	int16_t x588 = 119;

    t72 = (x585==(x586>>(x587==x588)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x633 = 895504;
	int16_t x634 = 7019;
	int32_t x635 = -1;
	int32_t t73 = 177;

    t73 = (x633==(x634>>(x635==x636)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x637 = 0;
	uint64_t x638 = UINT64_MAX;
	static uint16_t x640 = 14549U;

    t74 = (x637==(x638>>(x639==x640)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x641 = -74907139153482022LL;
	int8_t x642 = INT8_MAX;
	volatile uint64_t x643 = UINT64_MAX;
	int32_t t75 = 3;

    t75 = (x641==(x642>>(x643==x644)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x646 = UINT8_MAX;
	static uint64_t x647 = 114847661225788LLU;
	int32_t x648 = INT32_MAX;
	int32_t t76 = -30478;

    t76 = (x645==(x646>>(x647==x648)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x649 = INT32_MAX;
	volatile uint16_t x650 = 0U;
	uint64_t x651 = 1395401896111016LLU;
	int16_t x652 = -1;
	static volatile int32_t t77 = -165074522;

    t77 = (x649==(x650>>(x651==x652)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int8_t x653 = 23;
	uint8_t x654 = 104U;
	static int16_t x655 = -1;
	uint8_t x656 = 0U;

    t78 = (x653==(x654>>(x655==x656)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x662 = 26U;
	int64_t x663 = INT64_MAX;
	uint64_t x664 = 18720LLU;

    t79 = (x661==(x662>>(x663==x664)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x665 = 17;
	int32_t x666 = 38440940;
	int64_t x668 = 215417841399256LL;

    t80 = (x665==(x666>>(x667==x668)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x670 = 7261224U;
	static uint64_t x671 = 757886658173700LLU;
	volatile uint64_t x672 = UINT64_MAX;
	int32_t t81 = -10110525;

    t81 = (x669==(x670>>(x671==x672)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x673 = -1;
	int32_t x674 = INT32_MAX;
	int8_t x675 = INT8_MAX;
	volatile int32_t t82 = 109468253;

    t82 = (x673==(x674>>(x675==x676)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x681 = -1LL;
	volatile uint16_t x682 = 348U;
	static uint32_t x684 = 517944162U;
	static int32_t t83 = 86;

    t83 = (x681==(x682>>(x683==x684)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x685 = 31U;
	uint16_t x686 = 11U;
	volatile uint32_t x688 = 12U;

    t84 = (x685==(x686>>(x687==x688)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x693 = UINT8_MAX;
	int16_t x694 = 10699;
	static uint16_t x695 = 1217U;
	int16_t x696 = INT16_MAX;
	volatile int32_t t85 = -26;

    t85 = (x693==(x694>>(x695==x696)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x701 = INT8_MIN;
	uint16_t x702 = 44U;
	static uint32_t x703 = 105U;
	int64_t x704 = INT64_MIN;
	int32_t t86 = -545692;

    t86 = (x701==(x702>>(x703==x704)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x729 = UINT8_MAX;
	static int64_t x730 = INT64_MAX;
	int16_t x731 = INT16_MAX;
	int8_t x732 = INT8_MIN;
	int32_t t87 = 930275;

    t87 = (x729==(x730>>(x731==x732)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x733 = INT8_MIN;
	static uint32_t x734 = UINT32_MAX;
	int32_t x736 = INT32_MAX;
	int32_t t88 = 687474782;

    t88 = (x733==(x734>>(x735==x736)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x737 = 253153330LLU;
	int8_t x738 = 9;
	static int8_t x739 = -23;
	int64_t x740 = 2LL;
	volatile int32_t t89 = -8014;

    t89 = (x737==(x738>>(x739==x740)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x745 = UINT8_MAX;
	uint8_t x746 = UINT8_MAX;
	int8_t x748 = -10;
	int32_t t90 = 214724;

    t90 = (x745==(x746>>(x747==x748)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int8_t x749 = INT8_MIN;
	uint8_t x750 = UINT8_MAX;
	uint16_t x751 = UINT16_MAX;
	static volatile uint64_t x752 = 1424402799413567309LLU;
	int32_t t91 = 1364296;

    t91 = (x749==(x750>>(x751==x752)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x756 = -1;
	int32_t t92 = -1231;

    t92 = (x753==(x754>>(x755==x756)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x761 = -1;
	int16_t x763 = INT16_MIN;
	int32_t x764 = INT32_MIN;
	int32_t t93 = 865458611;

    t93 = (x761==(x762>>(x763==x764)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x765 = 0LL;
	int8_t x766 = INT8_MAX;
	uint8_t x767 = 3U;
	int64_t x768 = INT64_MIN;
	int32_t t94 = 162;

    t94 = (x765==(x766>>(x767==x768)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x771 = INT64_MAX;
	int8_t x772 = -1;
	static int32_t t95 = -53934;

    t95 = (x769==(x770>>(x771==x772)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x773 = INT32_MAX;
	volatile int32_t x775 = -96;
	int16_t x776 = INT16_MIN;
	int32_t t96 = -2809335;

    t96 = (x773==(x774>>(x775==x776)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int8_t x777 = INT8_MAX;
	int32_t x779 = INT32_MIN;
	int16_t x780 = INT16_MIN;
	int32_t t97 = 8;

    t97 = (x777==(x778>>(x779==x780)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x781 = -7;
	static int16_t x782 = 1;
	uint64_t x783 = UINT64_MAX;
	volatile int32_t x784 = INT32_MIN;
	volatile int32_t t98 = -1;

    t98 = (x781==(x782>>(x783==x784)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x785 = INT64_MIN;
	uint32_t x786 = 137760367U;
	uint32_t x787 = 31833U;
	int32_t t99 = 1787;

    t99 = (x785==(x786>>(x787==x788)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x790 = 19213675707LL;
	int64_t x791 = INT64_MAX;
	int32_t x792 = INT32_MIN;
	int32_t t100 = -227;

    t100 = (x789==(x790>>(x791==x792)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x805 = -489;
	int16_t x807 = -278;
	int64_t x808 = INT64_MIN;

    t101 = (x805==(x806>>(x807==x808)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x809 = -1LL;
	int16_t x810 = 2;
	static volatile int32_t x811 = -1;
	int32_t t102 = -1160915;

    t102 = (x809==(x810>>(x811==x812)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x814 = 1U;
	static volatile int32_t x815 = INT32_MIN;
	static uint8_t x816 = 73U;
	int32_t t103 = 2397;

    t103 = (x813==(x814>>(x815==x816)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static int64_t x822 = INT64_MAX;
	static int64_t x823 = -1LL;
	static int64_t x824 = INT64_MIN;
	volatile int32_t t104 = -142572;

    t104 = (x821==(x822>>(x823==x824)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x827 = INT16_MIN;
	int64_t x828 = -116LL;
	int32_t t105 = 176;

    t105 = (x825==(x826>>(x827==x828)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x829 = INT8_MIN;
	volatile uint8_t x830 = 75U;
	uint32_t x832 = 122733U;
	int32_t t106 = 251;

    t106 = (x829==(x830>>(x831==x832)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x833 = 96U;
	volatile int16_t x834 = 213;
	int64_t x835 = 58662271764272LL;
	volatile int32_t x836 = -17;
	volatile int32_t t107 = 2;

    t107 = (x833==(x834>>(x835==x836)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x838 = 0;
	int32_t x839 = 0;
	static int32_t t108 = -113634;

    t108 = (x837==(x838>>(x839==x840)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x842 = 10U;
	static int8_t x843 = 1;
	volatile int32_t t109 = -1;

    t109 = (x841==(x842>>(x843==x844)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x845 = INT64_MIN;
	int8_t x846 = INT8_MAX;
	volatile int16_t x847 = INT16_MAX;
	uint16_t x848 = UINT16_MAX;

    t110 = (x845==(x846>>(x847==x848)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x865 = -8;
	static int8_t x866 = 1;
	int16_t x867 = 1;
	int64_t x868 = INT64_MIN;

    t111 = (x865==(x866>>(x867==x868)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x873 = 15105U;
	int64_t x874 = 15602958972636LL;
	volatile int8_t x875 = -14;
	int8_t x876 = INT8_MAX;

    t112 = (x873==(x874>>(x875==x876)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x881 = INT16_MAX;
	int64_t x882 = 36874982713LL;
	int64_t x883 = 3048854353633LL;
	volatile uint8_t x884 = 121U;
	volatile int32_t t113 = 0;

    t113 = (x881==(x882>>(x883==x884)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x891 = 11085;
	int16_t x892 = -1182;
	static int32_t t114 = 890146981;

    t114 = (x889==(x890>>(x891==x892)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x893 = INT16_MIN;
	int8_t x894 = 29;
	static uint16_t x895 = 6U;
	int32_t x896 = INT32_MAX;

    t115 = (x893==(x894>>(x895==x896)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x918 = 186U;
	int32_t x919 = -1;
	uint8_t x920 = UINT8_MAX;
	int32_t t116 = -84512533;

    t116 = (x917==(x918>>(x919==x920)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x921 = INT64_MAX;
	int64_t x923 = INT64_MAX;
	volatile int16_t x924 = INT16_MIN;
	static int32_t t117 = 0;

    t117 = (x921==(x922>>(x923==x924)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x926 = 172181665437220661LL;
	int8_t x927 = INT8_MAX;
	static int8_t x928 = -1;

    t118 = (x925==(x926>>(x927==x928)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x937 = -2323660;
	uint16_t x938 = UINT16_MAX;
	volatile uint16_t x940 = UINT16_MAX;
	int32_t t119 = 28483;

    t119 = (x937==(x938>>(x939==x940)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x953 = INT32_MIN;
	uint64_t x954 = 181858015083843LLU;
	int32_t x956 = INT32_MIN;

    t120 = (x953==(x954>>(x955==x956)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x958 = 0;
	uint32_t x959 = UINT32_MAX;
	static volatile uint64_t x960 = 7226730503959LLU;
	volatile int32_t t121 = 1;

    t121 = (x957==(x958>>(x959==x960)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x961 = 97U;
	static uint64_t x962 = 155LLU;
	int64_t x963 = -124297554479331079LL;
	int16_t x964 = INT16_MIN;
	int32_t t122 = -115;

    t122 = (x961==(x962>>(x963==x964)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x974 = 1;
	int16_t x975 = INT16_MIN;
	static int32_t t123 = 0;

    t123 = (x973==(x974>>(x975==x976)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x985 = 3;
	int32_t x986 = 973824380;
	uint64_t x988 = UINT64_MAX;
	volatile int32_t t124 = 458670;

    t124 = (x985==(x986>>(x987==x988)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x990 = 4412073900468LLU;
	int8_t x991 = INT8_MIN;
	int32_t t125 = 124443;

    t125 = (x989==(x990>>(x991==x992)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x1005 = -1;
	volatile uint64_t x1006 = 111181954043LLU;
	static uint64_t x1007 = 2043905607863LLU;
	int8_t x1008 = 61;
	volatile int32_t t126 = -32061309;

    t126 = (x1005==(x1006>>(x1007==x1008)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x1030 = UINT32_MAX;
	int8_t x1031 = -1;
	int64_t x1032 = INT64_MIN;

    t127 = (x1029==(x1030>>(x1031==x1032)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x1033 = UINT16_MAX;
	static uint16_t x1034 = 30U;
	static uint32_t x1035 = UINT32_MAX;
	int64_t x1036 = INT64_MAX;
	volatile int32_t t128 = -148940704;

    t128 = (x1033==(x1034>>(x1035==x1036)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x1041 = 31;
	int8_t x1042 = INT8_MAX;
	int16_t x1043 = INT16_MAX;
	volatile int32_t t129 = 12225524;

    t129 = (x1041==(x1042>>(x1043==x1044)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x1049 = INT32_MAX;
	volatile uint16_t x1051 = 0U;
	uint8_t x1052 = UINT8_MAX;
	static volatile int32_t t130 = 1;

    t130 = (x1049==(x1050>>(x1051==x1052)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x1054 = INT8_MAX;
	volatile int32_t x1055 = 202843046;
	volatile int16_t x1056 = INT16_MIN;

    t131 = (x1053==(x1054>>(x1055==x1056)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x1057 = -258827718420440438LL;
	uint8_t x1058 = 126U;
	int8_t x1059 = INT8_MIN;
	int64_t x1060 = INT64_MIN;

    t132 = (x1057==(x1058>>(x1059==x1060)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x1065 = INT32_MIN;
	int16_t x1066 = 49;
	int16_t x1067 = INT16_MIN;
	int64_t x1068 = INT64_MIN;
	int32_t t133 = 0;

    t133 = (x1065==(x1066>>(x1067==x1068)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x1069 = 3828;
	static uint64_t x1070 = 2113502319327607020LLU;
	static uint64_t x1071 = 135LLU;
	static int8_t x1072 = INT8_MIN;
	int32_t t134 = 1;

    t134 = (x1069==(x1070>>(x1071==x1072)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x1074 = 472352174U;
	volatile uint16_t x1075 = 1U;
	int32_t t135 = 598939650;

    t135 = (x1073==(x1074>>(x1075==x1076)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x1085 = INT16_MIN;
	uint32_t x1086 = UINT32_MAX;
	int8_t x1087 = -17;
	static int16_t x1088 = -1;
	volatile int32_t t136 = -7;

    t136 = (x1085==(x1086>>(x1087==x1088)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x1093 = 0;
	uint64_t x1094 = 468659LLU;
	int16_t x1095 = INT16_MIN;
	volatile uint16_t x1096 = 1360U;
	volatile int32_t t137 = 64;

    t137 = (x1093==(x1094>>(x1095==x1096)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x1102 = 0LLU;
	volatile int64_t x1103 = INT64_MIN;
	int32_t t138 = 4404302;

    t138 = (x1101==(x1102>>(x1103==x1104)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x1110 = INT8_MAX;
	volatile int64_t x1111 = -1022LL;
	volatile uint8_t x1112 = 14U;
	int32_t t139 = 1;

    t139 = (x1109==(x1110>>(x1111==x1112)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x1113 = -1331;
	uint16_t x1114 = 14318U;
	static uint64_t x1116 = UINT64_MAX;
	volatile int32_t t140 = -12985348;

    t140 = (x1113==(x1114>>(x1115==x1116)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint16_t x1121 = 10701U;
	uint64_t x1122 = 286782555573188381LLU;
	int32_t x1123 = -1;
	int8_t x1124 = INT8_MIN;
	int32_t t141 = -5688405;

    t141 = (x1121==(x1122>>(x1123==x1124)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x1129 = -1;
	static int64_t x1131 = -1LL;
	static int8_t x1132 = -1;
	volatile int32_t t142 = 176106;

    t142 = (x1129==(x1130>>(x1131==x1132)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x1137 = -1;
	int64_t x1138 = INT64_MAX;
	int64_t x1140 = -128105384026826419LL;
	int32_t t143 = -320;

    t143 = (x1137==(x1138>>(x1139==x1140)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile uint64_t x1141 = UINT64_MAX;
	int16_t x1143 = INT16_MAX;
	int32_t x1144 = INT32_MIN;
	int32_t t144 = -1049166276;

    t144 = (x1141==(x1142>>(x1143==x1144)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x1145 = UINT32_MAX;
	int8_t x1147 = -1;
	static int32_t x1148 = -68;
	volatile int32_t t145 = 369297155;

    t145 = (x1145==(x1146>>(x1147==x1148)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x1158 = 0U;
	int64_t x1159 = 1133267973996980385LL;
	int8_t x1160 = -1;
	static volatile int32_t t146 = -416182336;

    t146 = (x1157==(x1158>>(x1159==x1160)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x1161 = INT32_MIN;
	volatile uint16_t x1162 = UINT16_MAX;
	int32_t x1163 = 4;

    t147 = (x1161==(x1162>>(x1163==x1164)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x1165 = INT16_MIN;
	static uint8_t x1167 = 0U;
	uint64_t x1168 = 8065918LLU;
	int32_t t148 = 8;

    t148 = (x1165==(x1166>>(x1167==x1168)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x1169 = INT64_MIN;
	static volatile int32_t x1171 = 1;
	static volatile uint16_t x1172 = UINT16_MAX;
	int32_t t149 = 882;

    t149 = (x1169==(x1170>>(x1171==x1172)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int16_t x1174 = INT16_MAX;
	static volatile int64_t x1175 = 1950792267LL;

    t150 = (x1173==(x1174>>(x1175==x1176)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int16_t x1178 = 82;
	int8_t x1179 = INT8_MIN;
	int32_t t151 = -19;

    t151 = (x1177==(x1178>>(x1179==x1180)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x1185 = UINT64_MAX;
	volatile int8_t x1187 = -1;
	int8_t x1188 = -1;

    t152 = (x1185==(x1186>>(x1187==x1188)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x1193 = -1;
	int16_t x1194 = 3;
	volatile int64_t x1195 = INT64_MAX;
	static int64_t x1196 = 1LL;
	int32_t t153 = 913;

    t153 = (x1193==(x1194>>(x1195==x1196)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x1201 = 0LL;
	int64_t x1203 = 1278873478579LL;
	int16_t x1204 = -675;
	volatile int32_t t154 = -425;

    t154 = (x1201==(x1202>>(x1203==x1204)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x1205 = INT64_MIN;
	uint32_t x1206 = 4090003U;
	uint16_t x1207 = UINT16_MAX;
	volatile int64_t x1208 = INT64_MIN;
	volatile int32_t t155 = 421417;

    t155 = (x1205==(x1206>>(x1207==x1208)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x1217 = 5;
	uint8_t x1218 = UINT8_MAX;
	int16_t x1219 = -9947;
	static uint32_t x1220 = 865790U;
	volatile int32_t t156 = -177495137;

    t156 = (x1217==(x1218>>(x1219==x1220)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x1222 = 42810LLU;
	static int64_t x1223 = INT64_MAX;

    t157 = (x1221==(x1222>>(x1223==x1224)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint16_t x1229 = 59U;
	uint16_t x1230 = 3U;
	int32_t x1231 = -1;
	int8_t x1232 = INT8_MIN;
	int32_t t158 = -1722093;

    t158 = (x1229==(x1230>>(x1231==x1232)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint64_t x1233 = 27511LLU;
	volatile uint32_t x1234 = 3U;
	uint64_t x1235 = 262734LLU;

    t159 = (x1233==(x1234>>(x1235==x1236)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x1237 = -1;
	int8_t x1238 = INT8_MAX;
	static int64_t x1239 = INT64_MIN;
	static volatile int32_t t160 = 2;

    t160 = (x1237==(x1238>>(x1239==x1240)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x1241 = 7;
	static uint16_t x1243 = UINT16_MAX;
	int16_t x1244 = INT16_MIN;
	int32_t t161 = -65408986;

    t161 = (x1241==(x1242>>(x1243==x1244)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x1245 = UINT64_MAX;
	int16_t x1247 = INT16_MIN;
	int16_t x1248 = INT16_MIN;
	int32_t t162 = -1336301;

    t162 = (x1245==(x1246>>(x1247==x1248)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x1253 = -1LL;
	static volatile uint16_t x1254 = 7U;
	uint32_t x1255 = UINT32_MAX;
	int32_t x1256 = -61;
	static int32_t t163 = -2898;

    t163 = (x1253==(x1254>>(x1255==x1256)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x1270 = 208854LL;
	int16_t x1271 = INT16_MIN;
	int16_t x1272 = INT16_MIN;
	static volatile int32_t t164 = -2747;

    t164 = (x1269==(x1270>>(x1271==x1272)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int8_t x1274 = INT8_MAX;
	static uint64_t x1275 = 21LLU;
	uint32_t x1276 = 2519U;
	volatile int32_t t165 = 8342756;

    t165 = (x1273==(x1274>>(x1275==x1276)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x1277 = INT32_MAX;
	static volatile uint64_t x1278 = 43936291168LLU;
	int32_t t166 = 0;

    t166 = (x1277==(x1278>>(x1279==x1280)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x1281 = INT16_MIN;
	static int8_t x1282 = 0;
	int32_t x1283 = 4022799;
	volatile int32_t t167 = -637424;

    t167 = (x1281==(x1282>>(x1283==x1284)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int16_t x1289 = INT16_MAX;
	static uint8_t x1291 = 13U;
	uint8_t x1292 = 2U;
	int32_t t168 = -6;

    t168 = (x1289==(x1290>>(x1291==x1292)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int32_t x1293 = 0;
	int8_t x1295 = INT8_MIN;
	volatile int16_t x1296 = INT16_MIN;

    t169 = (x1293==(x1294>>(x1295==x1296)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int8_t x1297 = INT8_MIN;
	uint64_t x1298 = 5404777307606922LLU;
	static int8_t x1300 = 1;

    t170 = (x1297==(x1298>>(x1299==x1300)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x1301 = -1LL;
	uint8_t x1302 = UINT8_MAX;
	static int32_t x1303 = 13632161;
	int64_t x1304 = -97488014LL;
	volatile int32_t t171 = 236461;

    t171 = (x1301==(x1302>>(x1303==x1304)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x1307 = INT16_MAX;
	int16_t x1308 = INT16_MAX;
	int32_t t172 = 4759;

    t172 = (x1305==(x1306>>(x1307==x1308)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x1311 = UINT32_MAX;
	int32_t t173 = -408;

    t173 = (x1309==(x1310>>(x1311==x1312)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint32_t x1321 = UINT32_MAX;
	uint16_t x1322 = UINT16_MAX;
	uint8_t x1324 = 1U;

    t174 = (x1321==(x1322>>(x1323==x1324)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x1330 = UINT32_MAX;
	static volatile int32_t x1331 = -76;
	int16_t x1332 = -5368;
	static int32_t t175 = -106729;

    t175 = (x1329==(x1330>>(x1331==x1332)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int8_t x1333 = -1;
	volatile uint64_t x1334 = 2048LLU;
	int64_t x1336 = 82245575665287187LL;
	volatile int32_t t176 = 0;

    t176 = (x1333==(x1334>>(x1335==x1336)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x1337 = -24;
	static uint64_t x1338 = UINT64_MAX;
	volatile int32_t t177 = -2439;

    t177 = (x1337==(x1338>>(x1339==x1340)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x1341 = INT8_MIN;
	uint8_t x1342 = 5U;
	uint64_t x1343 = UINT64_MAX;
	int64_t x1344 = 193LL;
	static int32_t t178 = -40;

    t178 = (x1341==(x1342>>(x1343==x1344)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x1349 = INT16_MIN;
	uint16_t x1351 = UINT16_MAX;
	uint32_t x1352 = 43732085U;
	int32_t t179 = 172617693;

    t179 = (x1349==(x1350>>(x1351==x1352)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x1353 = INT8_MIN;
	int16_t x1354 = 84;
	int16_t x1355 = INT16_MIN;
	uint64_t x1356 = 1583335788LLU;
	static int32_t t180 = -988096781;

    t180 = (x1353==(x1354>>(x1355==x1356)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint16_t x1365 = 7U;
	uint32_t x1366 = 2U;
	uint64_t x1367 = UINT64_MAX;
	uint16_t x1368 = 5U;
	int32_t t181 = -193748;

    t181 = (x1365==(x1366>>(x1367==x1368)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x1369 = -12;
	int8_t x1371 = 3;

    t182 = (x1369==(x1370>>(x1371==x1372)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint8_t x1377 = UINT8_MAX;
	uint64_t x1378 = 243712171LLU;
	int32_t x1379 = 7751481;
	int32_t t183 = 201;

    t183 = (x1377==(x1378>>(x1379==x1380)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int64_t x1385 = INT64_MIN;
	static int16_t x1387 = INT16_MAX;
	volatile int32_t t184 = -10487;

    t184 = (x1385==(x1386>>(x1387==x1388)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint8_t x1401 = 25U;
	int16_t x1402 = INT16_MAX;
	int64_t x1404 = INT64_MIN;
	int32_t t185 = 555;

    t185 = (x1401==(x1402>>(x1403==x1404)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x1409 = -1;
	uint16_t x1411 = UINT16_MAX;
	int32_t x1412 = -81040136;
	int32_t t186 = 71589;

    t186 = (x1409==(x1410>>(x1411==x1412)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int16_t x1417 = INT16_MAX;
	int64_t x1419 = INT64_MIN;
	int32_t x1420 = -1784;

    t187 = (x1417==(x1418>>(x1419==x1420)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x1421 = -16;
	uint8_t x1422 = UINT8_MAX;
	int64_t x1423 = -424862219202538731LL;
	uint16_t x1424 = 8863U;
	int32_t t188 = -350390;

    t188 = (x1421==(x1422>>(x1423==x1424)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint8_t x1425 = 1U;
	uint8_t x1426 = 115U;
	uint8_t x1428 = 2U;
	volatile int32_t t189 = -8074;

    t189 = (x1425==(x1426>>(x1427==x1428)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint64_t x1429 = 3758709000221790434LLU;
	uint64_t x1430 = UINT64_MAX;
	static volatile uint64_t x1431 = 6996146LLU;
	int32_t x1432 = INT32_MIN;

    t190 = (x1429==(x1430>>(x1431==x1432)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x1437 = INT8_MIN;
	static int64_t x1438 = INT64_MAX;
	static volatile int32_t x1439 = INT32_MAX;
	int32_t x1440 = INT32_MIN;

    t191 = (x1437==(x1438>>(x1439==x1440)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x1449 = INT64_MIN;
	static int32_t x1452 = -1;
	volatile int32_t t192 = -5;

    t192 = (x1449==(x1450>>(x1451==x1452)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x1453 = INT8_MAX;
	uint64_t x1454 = 3LLU;
	static volatile int32_t x1456 = INT32_MIN;
	int32_t t193 = 942762;

    t193 = (x1453==(x1454>>(x1455==x1456)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x1457 = -31;
	int64_t x1458 = 77654641756577LL;
	static int8_t x1459 = -1;
	static int16_t x1460 = INT16_MIN;
	volatile int32_t t194 = 45260279;

    t194 = (x1457==(x1458>>(x1459==x1460)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x1461 = INT16_MIN;
	uint8_t x1462 = 16U;
	static int64_t x1463 = 4454714545846658134LL;
	volatile int8_t x1464 = -1;
	int32_t t195 = 17743438;

    t195 = (x1461==(x1462>>(x1463==x1464)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x1470 = INT32_MAX;
	volatile uint8_t x1471 = 26U;
	int32_t x1472 = INT32_MIN;
	static volatile int32_t t196 = -54;

    t196 = (x1469==(x1470>>(x1471==x1472)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int8_t x1473 = INT8_MIN;
	int32_t x1474 = INT32_MAX;
	volatile int16_t x1475 = 1;
	uint32_t x1476 = 873561U;
	static volatile int32_t t197 = -4304335;

    t197 = (x1473==(x1474>>(x1475==x1476)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x1477 = 399601469432452LLU;
	uint32_t x1478 = 226409019U;
	static uint64_t x1479 = 8354951538LLU;
	int8_t x1480 = INT8_MIN;
	volatile int32_t t198 = 7798396;

    t198 = (x1477==(x1478>>(x1479==x1480)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint8_t x1482 = 49U;
	int8_t x1483 = INT8_MIN;
	uint8_t x1484 = UINT8_MAX;
	int32_t t199 = 57200;

    t199 = (x1481==(x1482>>(x1483==x1484)));

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

