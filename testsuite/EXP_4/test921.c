
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

volatile int32_t t1 = 1;
volatile int64_t x11 = INT64_MIN;
volatile int32_t x14 = -32;
static int8_t x16 = INT8_MIN;
uint32_t x43 = UINT32_MAX;
uint32_t x53 = 6207U;
int64_t x55 = INT64_MIN;
volatile int32_t t9 = 88;
uint16_t x69 = UINT16_MAX;
int64_t x72 = INT64_MAX;
int32_t t10 = -1;
volatile uint64_t x73 = 26550484330680LLU;
uint16_t x74 = 6353U;
int16_t x78 = -1;
volatile int32_t x80 = INT32_MAX;
static uint32_t x81 = 2580497U;
int8_t x125 = INT8_MAX;
volatile uint32_t t18 = UINT32_MAX;
static int8_t x143 = 3;
int16_t x150 = INT16_MIN;
uint64_t x152 = 726416LLU;
static volatile uint16_t x156 = UINT16_MAX;
int32_t x159 = 4414;
uint64_t x163 = UINT64_MAX;
static int32_t x168 = -1;
uint64_t x171 = UINT64_MAX;
int32_t t25 = -709031019;
volatile uint64_t t26 = 605LLU;
int16_t x194 = -1;
static int64_t x199 = 9694144268906LL;
uint64_t x201 = UINT64_MAX;
int16_t x210 = INT16_MAX;
int8_t x214 = INT8_MAX;
int64_t x223 = -434782797LL;
int8_t x239 = 1;
volatile uint16_t x245 = 7640U;
uint16_t x253 = UINT16_MAX;
static int8_t x254 = -1;
int8_t x258 = INT8_MIN;
uint32_t x280 = 23778925U;
uint8_t x293 = UINT8_MAX;
static uint32_t x294 = UINT32_MAX;
int32_t x296 = INT32_MIN;
uint16_t x297 = UINT16_MAX;
uint16_t x320 = UINT16_MAX;
uint8_t x330 = UINT8_MAX;
uint32_t x331 = 814U;
int64_t x332 = 140430399LL;
int8_t x358 = 62;
volatile uint32_t x371 = UINT32_MAX;
volatile uint32_t x372 = UINT32_MAX;
int8_t x373 = 0;
volatile int8_t x380 = INT8_MIN;
volatile int32_t t54 = INT32_MAX;
uint8_t x382 = 3U;
volatile uint32_t x387 = UINT32_MAX;
uint64_t x390 = 1555LLU;
volatile int16_t x392 = -2;
volatile uint64_t x395 = 3LLU;
int32_t t58 = -1966900;
int16_t x399 = INT16_MIN;
static int64_t x414 = -1LL;
int32_t x416 = INT32_MIN;
int64_t x419 = 2910061507393123654LL;
volatile int64_t x420 = INT64_MIN;
int64_t x424 = -1LL;
volatile int32_t x426 = INT32_MIN;
volatile int32_t t63 = 42596492;
int16_t x435 = 3911;
int8_t x437 = INT8_MAX;
uint16_t x439 = 1U;
volatile int32_t x445 = INT32_MAX;
int16_t x455 = 60;
static uint8_t x465 = 68U;
volatile uint8_t x481 = UINT8_MAX;
static uint64_t x496 = 317845LLU;
int32_t x498 = INT32_MIN;
uint64_t t77 = 1700654294149273LLU;
int16_t x526 = -1;
static uint16_t x539 = 249U;
uint8_t x554 = 1U;
int32_t x556 = -1;
static uint32_t x578 = UINT32_MAX;
int16_t x591 = INT16_MAX;
volatile int32_t t84 = 15;
uint8_t x604 = UINT8_MAX;
int64_t x613 = INT64_MAX;
static uint32_t x614 = UINT32_MAX;
uint64_t x645 = 6374068LLU;
static int8_t x646 = -16;
volatile int8_t x647 = 0;
uint64_t x651 = 9102003916664965669LLU;
volatile uint32_t t90 = 7517U;
volatile uint64_t x659 = UINT64_MAX;
int32_t x660 = INT32_MIN;
static int32_t x706 = -1;
uint32_t x712 = UINT32_MAX;
volatile int32_t t96 = -1407478;
int32_t x731 = INT32_MIN;
uint32_t t101 = 23231342U;
int16_t x760 = INT16_MIN;
int16_t x776 = -1;
int32_t x784 = INT32_MIN;
static uint16_t x785 = 1U;
static volatile int32_t x788 = INT32_MIN;
int32_t t106 = -28140778;
uint16_t x805 = UINT16_MAX;
volatile uint16_t x825 = UINT16_MAX;
int64_t x830 = INT64_MIN;
int64_t x832 = 1576720LL;
int8_t x875 = 47;
static uint8_t x881 = 2U;
static volatile int16_t x894 = 35;
uint64_t t116 = 2052559169849LLU;
static int16_t x913 = 126;
uint64_t x917 = 22650216467LLU;
static volatile uint8_t x918 = UINT8_MAX;
int32_t x940 = -1;
int32_t t121 = 784387901;
uint32_t t122 = 42U;
uint64_t x978 = UINT64_MAX;
static volatile int32_t x982 = INT32_MIN;
uint32_t x989 = 10117694U;
uint64_t x990 = 13391LLU;
uint64_t x995 = 13188139284445LLU;
int32_t t129 = 246042;
uint16_t x1033 = 2604U;
uint8_t x1044 = 20U;
int32_t t131 = -25;
int64_t x1055 = -2855505919370LL;
uint32_t t133 = 443822U;
static uint8_t x1073 = 74U;
int16_t x1076 = INT16_MIN;
int32_t t135 = 82024815;
int32_t t136 = 1;
int64_t x1107 = -1LL;
uint64_t x1122 = 449267431461LLU;
uint16_t x1139 = 903U;
uint8_t x1149 = 127U;
int64_t x1150 = INT64_MAX;
int64_t x1153 = 3847315078294875LL;
uint16_t x1158 = 3U;
static uint16_t x1164 = UINT16_MAX;
static int32_t t147 = -2363;
int8_t x1173 = 16;
uint8_t x1174 = 3U;
volatile int32_t x1178 = -423945;
int32_t x1198 = INT32_MIN;
int16_t x1199 = INT16_MIN;
uint64_t t150 = 8921LLU;
uint8_t x1201 = 0U;
int32_t x1203 = 64;
uint32_t x1210 = UINT32_MAX;
int64_t x1215 = INT64_MIN;
static volatile int16_t x1223 = INT16_MIN;
uint32_t t157 = 1046198298U;
int8_t x1232 = -1;
volatile uint64_t t161 = 417035659574LLU;
static int64_t x1269 = INT64_MAX;
volatile int64_t t162 = -1LL;
volatile int64_t x1279 = -1LL;
int32_t t163 = 7011;
static int32_t x1300 = -1;
uint8_t x1309 = UINT8_MAX;
volatile uint8_t x1328 = UINT8_MAX;
int8_t x1329 = 6;
int8_t x1334 = INT8_MAX;
static int32_t t172 = 1;
uint8_t x1370 = UINT8_MAX;
int32_t x1385 = 105;
int32_t t177 = 42;
uint32_t x1416 = 159U;
uint16_t x1444 = UINT16_MAX;
volatile int16_t x1451 = INT16_MIN;
int64_t x1470 = 1685290LL;
static volatile uint32_t x1471 = 29321U;
volatile int32_t x1498 = INT32_MIN;
uint32_t x1507 = 167512124U;
static uint8_t x1513 = UINT8_MAX;
int16_t x1514 = INT16_MIN;
volatile uint32_t t193 = 0U;
uint64_t x1571 = UINT64_MAX;
volatile uint32_t t196 = UINT32_MAX;
volatile uint64_t x1594 = 24315475LLU;


void f0(void) {
    	int16_t x1 = INT16_MAX;
	int16_t x2 = INT16_MIN;
	int32_t x3 = -1;
	int64_t x4 = 1074586814530LL;
	volatile int32_t t0 = 2;

    t0 = (x1>>(x2<=(x3%x4)));

    if (t0 != 16383) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MAX;
	uint16_t x6 = 14U;
	int16_t x7 = INT16_MAX;
	uint8_t x8 = 23U;

    t1 = (x5>>(x6<=(x7%x8)));

    if (t1 != 1073741823) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = 12;
	int8_t x10 = INT8_MAX;
	volatile int8_t x12 = -1;
	static int32_t t2 = -133852;

    t2 = (x9>>(x10<=(x11%x12)));

    if (t2 != 12) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = 119984903717LL;
	int32_t x15 = -1;
	static volatile int64_t t3 = 30696822LL;

    t3 = (x13>>(x14<=(x15%x16)));

    if (t3 != 59992451858LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x29 = 42U;
	uint32_t x30 = 15U;
	volatile int8_t x31 = INT8_MIN;
	static int8_t x32 = -1;
	int32_t t4 = -26781;

    t4 = (x29>>(x30<=(x31%x32)));

    if (t4 != 42) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint64_t x33 = 2490787142LLU;
	static uint8_t x34 = UINT8_MAX;
	int32_t x35 = 116368;
	volatile uint64_t x36 = 338169389876LLU;
	volatile uint64_t t5 = 451229539LLU;

    t5 = (x33>>(x34<=(x35%x36)));

    if (t5 != 1245393571LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint8_t x41 = 20U;
	static int8_t x42 = INT8_MAX;
	int64_t x44 = INT64_MIN;
	volatile int32_t t6 = -361413;

    t6 = (x41>>(x42<=(x43%x44)));

    if (t6 != 10) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x45 = 4287;
	uint64_t x46 = UINT64_MAX;
	static int8_t x47 = 44;
	static int16_t x48 = 3925;
	int32_t t7 = 2451006;

    t7 = (x45>>(x46<=(x47%x48)));

    if (t7 != 4287) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x54 = 57586689994968LLU;
	uint16_t x56 = UINT16_MAX;
	static uint32_t t8 = 240024U;

    t8 = (x53>>(x54<=(x55%x56)));

    if (t8 != 3103U) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x57 = 42U;
	volatile uint16_t x58 = 1U;
	static int16_t x59 = INT16_MAX;
	int64_t x60 = INT64_MAX;

    t9 = (x57>>(x58<=(x59%x60)));

    if (t9 != 21) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint64_t x70 = UINT64_MAX;
	volatile int16_t x71 = INT16_MIN;

    t10 = (x69>>(x70<=(x71%x72)));

    if (t10 != 65535) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x75 = -2285;
	uint16_t x76 = 5U;
	uint64_t t11 = 962892262724LLU;

    t11 = (x73>>(x74<=(x75%x76)));

    if (t11 != 26550484330680LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint8_t x77 = 1U;
	int64_t x79 = 1275759023527LL;
	volatile int32_t t12 = 24;

    t12 = (x77>>(x78<=(x79%x80)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x82 = -177;
	uint8_t x83 = UINT8_MAX;
	static int8_t x84 = INT8_MAX;
	volatile uint32_t t13 = 4402691U;

    t13 = (x81>>(x82<=(x83%x84)));

    if (t13 != 1290248U) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x89 = 119;
	static int32_t x90 = INT32_MAX;
	volatile int8_t x91 = INT8_MAX;
	int16_t x92 = INT16_MAX;
	volatile int32_t t14 = 10270;

    t14 = (x89>>(x90<=(x91%x92)));

    if (t14 != 119) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x93 = INT32_MAX;
	int16_t x94 = 8011;
	uint32_t x95 = 272579U;
	int8_t x96 = INT8_MIN;
	volatile int32_t t15 = 20467701;

    t15 = (x93>>(x94<=(x95%x96)));

    if (t15 != 1073741823) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint8_t x101 = 57U;
	volatile int8_t x102 = -1;
	static int64_t x103 = 579LL;
	int64_t x104 = -1LL;
	static int32_t t16 = 1;

    t16 = (x101>>(x102<=(x103%x104)));

    if (t16 != 28) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x126 = -427;
	int16_t x127 = INT16_MIN;
	volatile uint32_t x128 = 113825U;
	static volatile int32_t t17 = -13001536;

    t17 = (x125>>(x126<=(x127%x128)));

    if (t17 != 127) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint32_t x129 = UINT32_MAX;
	int32_t x130 = INT32_MAX;
	int32_t x131 = INT32_MIN;
	static int32_t x132 = INT32_MAX;

    t18 = (x129>>(x130<=(x131%x132)));

    if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x141 = 1766U;
	int8_t x142 = -1;
	int8_t x144 = -1;
	uint32_t t19 = 60977U;

    t19 = (x141>>(x142<=(x143%x144)));

    if (t19 != 883U) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x149 = 198U;
	static volatile int8_t x151 = -19;
	volatile uint32_t t20 = 993194U;

    t20 = (x149>>(x150<=(x151%x152)));

    if (t20 != 198U) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x153 = INT32_MAX;
	int8_t x154 = INT8_MAX;
	volatile uint32_t x155 = UINT32_MAX;
	static volatile int32_t t21 = INT32_MAX;

    t21 = (x153>>(x154<=(x155%x156)));

    if (t21 != INT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x157 = 15U;
	uint32_t x158 = UINT32_MAX;
	int32_t x160 = INT32_MIN;
	volatile int32_t t22 = 4438;

    t22 = (x157>>(x158<=(x159%x160)));

    if (t22 != 15) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x161 = UINT32_MAX;
	uint16_t x162 = 5214U;
	int32_t x164 = -1;
	volatile uint32_t t23 = UINT32_MAX;

    t23 = (x161>>(x162<=(x163%x164)));

    if (t23 != UINT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint8_t x165 = 47U;
	static volatile int64_t x166 = INT64_MAX;
	static uint8_t x167 = 37U;
	static int32_t t24 = 417436872;

    t24 = (x165>>(x166<=(x167%x168)));

    if (t24 != 47) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x169 = UINT16_MAX;
	int16_t x170 = INT16_MIN;
	uint32_t x172 = UINT32_MAX;

    t25 = (x169>>(x170<=(x171%x172)));

    if (t25 != 65535) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint64_t x181 = UINT64_MAX;
	static volatile int64_t x182 = INT64_MIN;
	uint8_t x183 = 10U;
	uint16_t x184 = 27U;

    t26 = (x181>>(x182<=(x183%x184)));

    if (t26 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x189 = UINT8_MAX;
	static int32_t x190 = -7891728;
	static uint8_t x191 = 3U;
	static int16_t x192 = -1;
	volatile int32_t t27 = -486799225;

    t27 = (x189>>(x190<=(x191%x192)));

    if (t27 != 127) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x193 = 177U;
	int64_t x195 = -77LL;
	static uint32_t x196 = UINT32_MAX;
	volatile uint32_t t28 = 545U;

    t28 = (x193>>(x194<=(x195%x196)));

    if (t28 != 177U) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint8_t x197 = 26U;
	int32_t x198 = 1;
	uint8_t x200 = 18U;
	int32_t t29 = -13910275;

    t29 = (x197>>(x198<=(x199%x200)));

    if (t29 != 13) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x202 = 48U;
	volatile int64_t x203 = -1LL;
	volatile int8_t x204 = 1;
	uint64_t t30 = UINT64_MAX;

    t30 = (x201>>(x202<=(x203%x204)));

    if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x205 = 7U;
	volatile uint32_t x206 = 329905997U;
	static volatile int32_t x207 = 10886162;
	volatile int16_t x208 = INT16_MAX;
	int32_t t31 = -80479713;

    t31 = (x205>>(x206<=(x207%x208)));

    if (t31 != 7) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x209 = UINT8_MAX;
	static int8_t x211 = INT8_MIN;
	volatile uint64_t x212 = 244236519381991443LLU;
	volatile int32_t t32 = -8205076;

    t32 = (x209>>(x210<=(x211%x212)));

    if (t32 != 127) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x213 = 1;
	static volatile int8_t x215 = -14;
	volatile uint8_t x216 = UINT8_MAX;
	static volatile int32_t t33 = 906;

    t33 = (x213>>(x214<=(x215%x216)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x217 = INT64_MAX;
	uint8_t x218 = UINT8_MAX;
	int16_t x219 = INT16_MAX;
	static uint16_t x220 = UINT16_MAX;
	volatile int64_t t34 = 2146236098571LL;

    t34 = (x217>>(x218<=(x219%x220)));

    if (t34 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int16_t x221 = 52;
	int32_t x222 = INT32_MIN;
	uint16_t x224 = UINT16_MAX;
	volatile int32_t t35 = -4931;

    t35 = (x221>>(x222<=(x223%x224)));

    if (t35 != 26) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint64_t x225 = UINT64_MAX;
	volatile int16_t x226 = INT16_MAX;
	int32_t x227 = -65404203;
	int64_t x228 = INT64_MAX;
	uint64_t t36 = UINT64_MAX;

    t36 = (x225>>(x226<=(x227%x228)));

    if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x237 = 2;
	int8_t x238 = INT8_MAX;
	uint16_t x240 = UINT16_MAX;
	int32_t t37 = 35;

    t37 = (x237>>(x238<=(x239%x240)));

    if (t37 != 2) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x246 = INT16_MAX;
	int64_t x247 = INT64_MIN;
	int16_t x248 = -878;
	int32_t t38 = -71099;

    t38 = (x245>>(x246<=(x247%x248)));

    if (t38 != 7640) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x255 = INT16_MIN;
	int32_t x256 = -1;
	volatile int32_t t39 = -1306;

    t39 = (x253>>(x254<=(x255%x256)));

    if (t39 != 32767) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x257 = UINT32_MAX;
	volatile uint32_t x259 = 22U;
	volatile int64_t x260 = 49849740280647LL;
	volatile uint32_t t40 = 1946U;

    t40 = (x257>>(x258<=(x259%x260)));

    if (t40 != 2147483647U) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x277 = 358648LLU;
	int32_t x278 = INT32_MIN;
	int64_t x279 = -290057581058362LL;
	uint64_t t41 = 66854705303679LLU;

    t41 = (x277>>(x278<=(x279%x280)));

    if (t41 != 179324LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint16_t x295 = UINT16_MAX;
	volatile int32_t t42 = -1297;

    t42 = (x293>>(x294<=(x295%x296)));

    if (t42 != 255) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x298 = INT8_MIN;
	uint64_t x299 = 1LLU;
	volatile int32_t x300 = -1;
	int32_t t43 = 212933;

    t43 = (x297>>(x298<=(x299%x300)));

    if (t43 != 65535) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x305 = UINT32_MAX;
	uint32_t x306 = 30U;
	int16_t x307 = INT16_MIN;
	static int8_t x308 = 5;
	uint32_t t44 = 31062U;

    t44 = (x305>>(x306<=(x307%x308)));

    if (t44 != 2147483647U) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint64_t x317 = UINT64_MAX;
	volatile uint64_t x318 = 414897640LLU;
	uint64_t x319 = 7LLU;
	uint64_t t45 = UINT64_MAX;

    t45 = (x317>>(x318<=(x319%x320)));

    if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint32_t x329 = 7727U;
	uint32_t t46 = 15U;

    t46 = (x329>>(x330<=(x331%x332)));

    if (t46 != 3863U) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint16_t x333 = UINT16_MAX;
	uint8_t x334 = 56U;
	uint64_t x335 = 9227223557495604LLU;
	int16_t x336 = INT16_MIN;
	int32_t t47 = -438144;

    t47 = (x333>>(x334<=(x335%x336)));

    if (t47 != 32767) { NG(); } else { ; }
	
}

void f48(void) {
    	static int16_t x349 = INT16_MAX;
	int32_t x350 = INT32_MAX;
	volatile int16_t x351 = INT16_MAX;
	static uint32_t x352 = UINT32_MAX;
	static volatile int32_t t48 = 1255;

    t48 = (x349>>(x350<=(x351%x352)));

    if (t48 != 32767) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x357 = 57;
	uint16_t x359 = 329U;
	static int8_t x360 = INT8_MIN;
	static int32_t t49 = -3161216;

    t49 = (x357>>(x358<=(x359%x360)));

    if (t49 != 28) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x361 = 8U;
	uint16_t x362 = 2U;
	int16_t x363 = 11;
	int16_t x364 = INT16_MIN;
	volatile uint32_t t50 = 5934584U;

    t50 = (x361>>(x362<=(x363%x364)));

    if (t50 != 4U) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint16_t x365 = UINT16_MAX;
	uint32_t x366 = 993U;
	int8_t x367 = INT8_MAX;
	int32_t x368 = -70752;
	int32_t t51 = -1;

    t51 = (x365>>(x366<=(x367%x368)));

    if (t51 != 65535) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x369 = UINT64_MAX;
	static int16_t x370 = -1;
	volatile uint64_t t52 = UINT64_MAX;

    t52 = (x369>>(x370<=(x371%x372)));

    if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint64_t x374 = 5774123LLU;
	uint64_t x375 = UINT64_MAX;
	int32_t x376 = INT32_MAX;
	static int32_t t53 = -101166140;

    t53 = (x373>>(x374<=(x375%x376)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x377 = INT32_MAX;
	static uint8_t x378 = UINT8_MAX;
	int16_t x379 = INT16_MAX;

    t54 = (x377>>(x378<=(x379%x380)));

    if (t54 != INT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint32_t x381 = 21U;
	int64_t x383 = INT64_MAX;
	static int64_t x384 = -202215LL;
	uint32_t t55 = 9019137U;

    t55 = (x381>>(x382<=(x383%x384)));

    if (t55 != 10U) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x385 = 1U;
	int8_t x386 = -2;
	int16_t x388 = INT16_MAX;
	static volatile uint32_t t56 = 16313673U;

    t56 = (x385>>(x386<=(x387%x388)));

    if (t56 != 1U) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x389 = INT32_MAX;
	static volatile int64_t x391 = 226330177345694087LL;
	int32_t t57 = INT32_MAX;

    t57 = (x389>>(x390<=(x391%x392)));

    if (t57 != INT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x393 = INT16_MAX;
	uint16_t x394 = 1U;
	uint64_t x396 = UINT64_MAX;

    t58 = (x393>>(x394<=(x395%x396)));

    if (t58 != 16383) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x397 = INT64_MAX;
	static int32_t x398 = INT32_MIN;
	volatile int32_t x400 = INT32_MIN;
	volatile int64_t t59 = 2LL;

    t59 = (x397>>(x398<=(x399%x400)));

    if (t59 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint16_t x413 = 11612U;
	int64_t x415 = 66108783LL;
	volatile int32_t t60 = 692;

    t60 = (x413>>(x414<=(x415%x416)));

    if (t60 != 5806) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x417 = INT8_MAX;
	volatile uint8_t x418 = 43U;
	static volatile int32_t t61 = -10;

    t61 = (x417>>(x418<=(x419%x420)));

    if (t61 != 63) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x421 = INT64_MAX;
	uint8_t x422 = 19U;
	static uint64_t x423 = 924399964106LLU;
	volatile int64_t t62 = -4131890014247LL;

    t62 = (x421>>(x422<=(x423%x424)));

    if (t62 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static int32_t x425 = INT32_MAX;
	int32_t x427 = INT32_MIN;
	static int64_t x428 = INT64_MIN;

    t63 = (x425>>(x426<=(x427%x428)));

    if (t63 != 1073741823) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x429 = 2U;
	static int64_t x430 = 8349111744LL;
	int8_t x431 = -1;
	int64_t x432 = INT64_MIN;
	volatile int32_t t64 = -21972816;

    t64 = (x429>>(x430<=(x431%x432)));

    if (t64 != 2) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x433 = UINT32_MAX;
	volatile int8_t x434 = -1;
	uint32_t x436 = 59U;
	uint32_t t65 = UINT32_MAX;

    t65 = (x433>>(x434<=(x435%x436)));

    if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x438 = -1LL;
	uint16_t x440 = 1867U;
	int32_t t66 = 8;

    t66 = (x437>>(x438<=(x439%x440)));

    if (t66 != 63) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x446 = -1;
	uint64_t x447 = 6994LLU;
	uint32_t x448 = UINT32_MAX;
	volatile int32_t t67 = INT32_MAX;

    t67 = (x445>>(x446<=(x447%x448)));

    if (t67 != INT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x449 = 245;
	static int8_t x450 = -1;
	uint32_t x451 = 57765974U;
	uint32_t x452 = 928314U;
	int32_t t68 = 12925;

    t68 = (x449>>(x450<=(x451%x452)));

    if (t68 != 245) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x453 = 251;
	int32_t x454 = INT32_MIN;
	uint64_t x456 = 1521LLU;
	static volatile int32_t t69 = 189688936;

    t69 = (x453>>(x454<=(x455%x456)));

    if (t69 != 251) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile int64_t x466 = INT64_MIN;
	int32_t x467 = -1;
	uint8_t x468 = 3U;
	volatile int32_t t70 = 116670;

    t70 = (x465>>(x466<=(x467%x468)));

    if (t70 != 34) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint8_t x469 = 1U;
	int16_t x470 = 4306;
	int8_t x471 = -1;
	uint16_t x472 = UINT16_MAX;
	int32_t t71 = -4297;

    t71 = (x469>>(x470<=(x471%x472)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile uint32_t x473 = 495386U;
	int8_t x474 = INT8_MIN;
	volatile int8_t x475 = -1;
	static int32_t x476 = INT32_MIN;
	uint32_t t72 = 2271892U;

    t72 = (x473>>(x474<=(x475%x476)));

    if (t72 != 247693U) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x482 = 27;
	uint8_t x483 = UINT8_MAX;
	int32_t x484 = INT32_MAX;
	volatile int32_t t73 = -44226;

    t73 = (x481>>(x482<=(x483%x484)));

    if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
    	static int64_t x485 = 2997935405134192659LL;
	volatile int16_t x486 = INT16_MIN;
	int32_t x487 = INT32_MAX;
	int8_t x488 = 27;
	volatile int64_t t74 = -1LL;

    t74 = (x485>>(x486<=(x487%x488)));

    if (t74 != 1498967702567096329LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile uint16_t x493 = UINT16_MAX;
	int16_t x494 = -1;
	volatile int8_t x495 = INT8_MIN;
	int32_t t75 = -2709;

    t75 = (x493>>(x494<=(x495%x496)));

    if (t75 != 65535) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint16_t x497 = UINT16_MAX;
	volatile int32_t x499 = INT32_MIN;
	uint32_t x500 = 3U;
	static volatile int32_t t76 = -42840;

    t76 = (x497>>(x498<=(x499%x500)));

    if (t76 != 65535) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint64_t x505 = 45451LLU;
	int64_t x506 = INT64_MAX;
	static int64_t x507 = -1LL;
	int8_t x508 = INT8_MIN;

    t77 = (x505>>(x506<=(x507%x508)));

    if (t77 != 45451LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint32_t x525 = 21272U;
	uint32_t x527 = 7062087U;
	volatile uint8_t x528 = 10U;
	uint32_t t78 = 808114U;

    t78 = (x525>>(x526<=(x527%x528)));

    if (t78 != 21272U) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x537 = UINT16_MAX;
	int8_t x538 = INT8_MIN;
	static int64_t x540 = INT64_MAX;
	volatile int32_t t79 = 1525784;

    t79 = (x537>>(x538<=(x539%x540)));

    if (t79 != 32767) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x553 = 27U;
	static int32_t x555 = INT32_MIN;
	static volatile int32_t t80 = -9;

    t80 = (x553>>(x554<=(x555%x556)));

    if (t80 != 27) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint64_t x573 = 2097567658LLU;
	int64_t x574 = INT64_MAX;
	uint64_t x575 = 26415409482227LLU;
	static int64_t x576 = INT64_MIN;
	uint64_t t81 = 175298LLU;

    t81 = (x573>>(x574<=(x575%x576)));

    if (t81 != 2097567658LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x577 = 1U;
	static volatile uint8_t x579 = 85U;
	static uint64_t x580 = UINT64_MAX;
	int32_t t82 = -374;

    t82 = (x577>>(x578<=(x579%x580)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x585 = INT64_MAX;
	int8_t x586 = INT8_MIN;
	int16_t x587 = 50;
	static volatile uint32_t x588 = UINT32_MAX;
	volatile int64_t t83 = INT64_MAX;

    t83 = (x585>>(x586<=(x587%x588)));

    if (t83 != INT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int16_t x589 = INT16_MAX;
	uint16_t x590 = UINT16_MAX;
	int8_t x592 = 38;

    t84 = (x589>>(x590<=(x591%x592)));

    if (t84 != 32767) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x597 = 7U;
	uint64_t x598 = UINT64_MAX;
	uint16_t x599 = 2260U;
	uint8_t x600 = UINT8_MAX;
	int32_t t85 = -10939534;

    t85 = (x597>>(x598<=(x599%x600)));

    if (t85 != 7) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x601 = INT16_MAX;
	uint16_t x602 = UINT16_MAX;
	volatile uint64_t x603 = 6077LLU;
	volatile int32_t t86 = -1714637;

    t86 = (x601>>(x602<=(x603%x604)));

    if (t86 != 32767) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x615 = INT8_MIN;
	static int64_t x616 = INT64_MIN;
	static int64_t t87 = INT64_MAX;

    t87 = (x613>>(x614<=(x615%x616)));

    if (t87 != INT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x617 = UINT16_MAX;
	static int8_t x618 = -5;
	static uint16_t x619 = UINT16_MAX;
	uint16_t x620 = UINT16_MAX;
	volatile int32_t t88 = -3;

    t88 = (x617>>(x618<=(x619%x620)));

    if (t88 != 32767) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x648 = INT8_MAX;
	uint64_t t89 = 60LLU;

    t89 = (x645>>(x646<=(x647%x648)));

    if (t89 != 3187034LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x649 = 3U;
	int8_t x650 = -15;
	uint16_t x652 = UINT16_MAX;

    t90 = (x649>>(x650<=(x651%x652)));

    if (t90 != 3U) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int32_t x657 = INT32_MAX;
	static int32_t x658 = INT32_MIN;
	static volatile int32_t t91 = INT32_MAX;

    t91 = (x657>>(x658<=(x659%x660)));

    if (t91 != INT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x673 = UINT8_MAX;
	static uint8_t x674 = 11U;
	int32_t x675 = -81511;
	uint32_t x676 = 25U;
	int32_t t92 = -4;

    t92 = (x673>>(x674<=(x675%x676)));

    if (t92 != 255) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile uint64_t x681 = UINT64_MAX;
	int32_t x682 = 3885;
	int64_t x683 = INT64_MAX;
	uint32_t x684 = 10522U;
	uint64_t t93 = 3011726532513261LLU;

    t93 = (x681>>(x682<=(x683%x684)));

    if (t93 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint32_t x693 = 275027289U;
	uint16_t x694 = 127U;
	int8_t x695 = -1;
	volatile int32_t x696 = -45719;
	volatile uint32_t t94 = 16237479U;

    t94 = (x693>>(x694<=(x695%x696)));

    if (t94 != 275027289U) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x705 = UINT32_MAX;
	int8_t x707 = INT8_MIN;
	int32_t x708 = INT32_MAX;
	volatile uint32_t t95 = UINT32_MAX;

    t95 = (x705>>(x706<=(x707%x708)));

    if (t95 != UINT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint8_t x709 = UINT8_MAX;
	uint64_t x710 = 1LLU;
	static int64_t x711 = -345579201153436LL;

    t96 = (x709>>(x710<=(x711%x712)));

    if (t96 != 127) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x713 = INT8_MAX;
	int8_t x714 = -1;
	static uint16_t x715 = UINT16_MAX;
	volatile int64_t x716 = INT64_MAX;
	volatile int32_t t97 = 22197291;

    t97 = (x713>>(x714<=(x715%x716)));

    if (t97 != 63) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x717 = 20318948269120570LLU;
	int8_t x718 = -1;
	int8_t x719 = INT8_MAX;
	int32_t x720 = -10703;
	volatile uint64_t t98 = 27297731LLU;

    t98 = (x717>>(x718<=(x719%x720)));

    if (t98 != 10159474134560285LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint32_t x729 = UINT32_MAX;
	int8_t x730 = INT8_MAX;
	uint16_t x732 = 4U;
	static volatile uint32_t t99 = UINT32_MAX;

    t99 = (x729>>(x730<=(x731%x732)));

    if (t99 != UINT32_MAX) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x733 = INT32_MAX;
	uint16_t x734 = UINT16_MAX;
	int16_t x735 = -1;
	int32_t x736 = 3;
	volatile int32_t t100 = INT32_MAX;

    t100 = (x733>>(x734<=(x735%x736)));

    if (t100 != INT32_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x741 = 745593107U;
	int64_t x742 = -22716LL;
	int32_t x743 = -1;
	uint16_t x744 = UINT16_MAX;

    t101 = (x741>>(x742<=(x743%x744)));

    if (t101 != 372796553U) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x749 = 4;
	int16_t x750 = -1;
	static uint64_t x751 = 7LLU;
	uint32_t x752 = 4048U;
	static volatile int32_t t102 = -915;

    t102 = (x749>>(x750<=(x751%x752)));

    if (t102 != 4) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x757 = 53U;
	static int8_t x758 = 1;
	volatile uint16_t x759 = 48U;
	uint32_t t103 = 4U;

    t103 = (x757>>(x758<=(x759%x760)));

    if (t103 != 26U) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x773 = 30144574LL;
	int64_t x774 = INT64_MIN;
	static int8_t x775 = INT8_MIN;
	int64_t t104 = -514913LL;

    t104 = (x773>>(x774<=(x775%x776)));

    if (t104 != 15072287LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x781 = 475U;
	volatile int32_t x782 = INT32_MIN;
	volatile int64_t x783 = INT64_MAX;
	int32_t t105 = 90811;

    t105 = (x781>>(x782<=(x783%x784)));

    if (t105 != 237) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x786 = 4526683461LLU;
	volatile int64_t x787 = INT64_MIN;

    t106 = (x785>>(x786<=(x787%x788)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x789 = INT16_MAX;
	uint32_t x790 = UINT32_MAX;
	volatile int64_t x791 = -19741125LL;
	uint8_t x792 = 1U;
	int32_t t107 = 0;

    t107 = (x789>>(x790<=(x791%x792)));

    if (t107 != 32767) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x806 = 4464;
	int64_t x807 = -18LL;
	int32_t x808 = INT32_MAX;
	volatile int32_t t108 = -1299268;

    t108 = (x805>>(x806<=(x807%x808)));

    if (t108 != 65535) { NG(); } else { ; }
	
}

void f109(void) {
    	static int16_t x809 = INT16_MAX;
	int32_t x810 = -1;
	int32_t x811 = -1;
	static uint64_t x812 = 3797486363120825189LLU;
	static int32_t t109 = -51923185;

    t109 = (x809>>(x810<=(x811%x812)));

    if (t109 != 32767) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x826 = 293LLU;
	volatile int64_t x827 = -1LL;
	volatile int32_t x828 = -1;
	volatile int32_t t110 = -2220;

    t110 = (x825>>(x826<=(x827%x828)));

    if (t110 != 65535) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x829 = 20U;
	volatile uint32_t x831 = 10155U;
	uint32_t t111 = 24414U;

    t111 = (x829>>(x830<=(x831%x832)));

    if (t111 != 10U) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x857 = 6435U;
	int16_t x858 = INT16_MIN;
	volatile int16_t x859 = INT16_MIN;
	uint64_t x860 = 1922LLU;
	volatile int32_t t112 = 2;

    t112 = (x857>>(x858<=(x859%x860)));

    if (t112 != 6435) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x873 = INT8_MAX;
	volatile uint64_t x874 = UINT64_MAX;
	static int8_t x876 = -1;
	int32_t t113 = 6561586;

    t113 = (x873>>(x874<=(x875%x876)));

    if (t113 != 127) { NG(); } else { ; }
	
}

void f114(void) {
    	static int8_t x882 = -13;
	static int64_t x883 = -1LL;
	uint32_t x884 = 29U;
	static volatile int32_t t114 = 3408933;

    t114 = (x881>>(x882<=(x883%x884)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x885 = INT16_MAX;
	int8_t x886 = 52;
	volatile int8_t x887 = INT8_MIN;
	static volatile int32_t x888 = -355466;
	static int32_t t115 = -1;

    t115 = (x885>>(x886<=(x887%x888)));

    if (t115 != 32767) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x893 = 796210LLU;
	uint64_t x895 = 129766498438063LLU;
	uint16_t x896 = UINT16_MAX;

    t116 = (x893>>(x894<=(x895%x896)));

    if (t116 != 398105LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x914 = INT64_MIN;
	volatile uint8_t x915 = UINT8_MAX;
	int32_t x916 = INT32_MAX;
	volatile int32_t t117 = 51561693;

    t117 = (x913>>(x914<=(x915%x916)));

    if (t117 != 63) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint64_t x919 = 1092585758662601LLU;
	int64_t x920 = INT64_MAX;
	volatile uint64_t t118 = 677LLU;

    t118 = (x917>>(x918<=(x919%x920)));

    if (t118 != 11325108233LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile int16_t x933 = 7883;
	uint8_t x934 = 0U;
	int64_t x935 = INT64_MIN;
	int8_t x936 = 1;
	static volatile int32_t t119 = 10217563;

    t119 = (x933>>(x934<=(x935%x936)));

    if (t119 != 3941) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint64_t x937 = 123909924510180409LLU;
	int32_t x938 = INT32_MAX;
	int64_t x939 = INT64_MAX;
	static volatile uint64_t t120 = 32286785368359LLU;

    t120 = (x937>>(x938<=(x939%x940)));

    if (t120 != 123909924510180409LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x945 = INT16_MAX;
	uint64_t x946 = 61LLU;
	uint32_t x947 = UINT32_MAX;
	static int64_t x948 = INT64_MAX;

    t121 = (x945>>(x946<=(x947%x948)));

    if (t121 != 16383) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x949 = 19339U;
	volatile uint8_t x950 = UINT8_MAX;
	int16_t x951 = INT16_MAX;
	int32_t x952 = INT32_MIN;

    t122 = (x949>>(x950<=(x951%x952)));

    if (t122 != 9669U) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile uint8_t x961 = 37U;
	int32_t x962 = -1;
	volatile int16_t x963 = -20;
	volatile int8_t x964 = INT8_MIN;
	static volatile int32_t t123 = 7248178;

    t123 = (x961>>(x962<=(x963%x964)));

    if (t123 != 37) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x977 = UINT16_MAX;
	int64_t x979 = -1LL;
	int32_t x980 = INT32_MAX;
	int32_t t124 = 14340607;

    t124 = (x977>>(x978<=(x979%x980)));

    if (t124 != 32767) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x981 = INT8_MAX;
	volatile int8_t x983 = INT8_MIN;
	static int32_t x984 = -151;
	int32_t t125 = 354;

    t125 = (x981>>(x982<=(x983%x984)));

    if (t125 != 63) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x991 = 1LLU;
	uint64_t x992 = 7974LLU;
	static uint32_t t126 = 60424U;

    t126 = (x989>>(x990<=(x991%x992)));

    if (t126 != 10117694U) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x993 = INT64_MAX;
	volatile uint8_t x994 = UINT8_MAX;
	uint32_t x996 = 1881572361U;
	volatile int64_t t127 = -6567686LL;

    t127 = (x993>>(x994<=(x995%x996)));

    if (t127 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x1013 = 15U;
	static volatile uint32_t x1014 = UINT32_MAX;
	uint64_t x1015 = 6752LLU;
	volatile int8_t x1016 = INT8_MIN;
	static int32_t t128 = -8145;

    t128 = (x1013>>(x1014<=(x1015%x1016)));

    if (t128 != 15) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x1021 = 7384U;
	int64_t x1022 = INT64_MIN;
	int16_t x1023 = -1;
	static uint64_t x1024 = 28840455281401LLU;

    t129 = (x1021>>(x1022<=(x1023%x1024)));

    if (t129 != 7384) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x1034 = INT64_MIN;
	uint16_t x1035 = UINT16_MAX;
	static uint16_t x1036 = UINT16_MAX;
	volatile int32_t t130 = -448;

    t130 = (x1033>>(x1034<=(x1035%x1036)));

    if (t130 != 1302) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int8_t x1041 = INT8_MAX;
	uint8_t x1042 = UINT8_MAX;
	uint64_t x1043 = 7403LLU;

    t131 = (x1041>>(x1042<=(x1043%x1044)));

    if (t131 != 127) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x1053 = INT16_MAX;
	volatile uint32_t x1054 = 6807U;
	int64_t x1056 = -48635073267510LL;
	static volatile int32_t t132 = 1835816;

    t132 = (x1053>>(x1054<=(x1055%x1056)));

    if (t132 != 32767) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x1065 = 1035259U;
	uint64_t x1066 = 453LLU;
	volatile int64_t x1067 = INT64_MIN;
	int64_t x1068 = INT64_MAX;

    t133 = (x1065>>(x1066<=(x1067%x1068)));

    if (t133 != 517629U) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int16_t x1074 = -1;
	volatile uint32_t x1075 = UINT32_MAX;
	volatile int32_t t134 = 3563135;

    t134 = (x1073>>(x1074<=(x1075%x1076)));

    if (t134 != 74) { NG(); } else { ; }
	
}

void f135(void) {
    	static int8_t x1085 = 26;
	uint8_t x1086 = UINT8_MAX;
	int16_t x1087 = 12328;
	int32_t x1088 = INT32_MIN;

    t135 = (x1085>>(x1086<=(x1087%x1088)));

    if (t135 != 13) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x1089 = INT8_MAX;
	volatile int16_t x1090 = INT16_MIN;
	int64_t x1091 = 402837020451698LL;
	int64_t x1092 = 469571LL;

    t136 = (x1089>>(x1090<=(x1091%x1092)));

    if (t136 != 63) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int8_t x1097 = 1;
	int64_t x1098 = INT64_MIN;
	volatile int32_t x1099 = INT32_MIN;
	int32_t x1100 = INT32_MIN;
	volatile int32_t t137 = -7459;

    t137 = (x1097>>(x1098<=(x1099%x1100)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x1105 = INT64_MAX;
	int16_t x1106 = -1;
	int64_t x1108 = -1LL;
	volatile int64_t t138 = 28603111312797418LL;

    t138 = (x1105>>(x1106<=(x1107%x1108)));

    if (t138 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint16_t x1109 = 554U;
	int16_t x1110 = INT16_MIN;
	int8_t x1111 = 20;
	int64_t x1112 = 14168322LL;
	volatile int32_t t139 = 18;

    t139 = (x1109>>(x1110<=(x1111%x1112)));

    if (t139 != 277) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x1121 = 121529U;
	int16_t x1123 = 23;
	volatile int64_t x1124 = -1LL;
	uint32_t t140 = 3397436U;

    t140 = (x1121>>(x1122<=(x1123%x1124)));

    if (t140 != 121529U) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x1129 = INT16_MAX;
	int32_t x1130 = INT32_MIN;
	static uint16_t x1131 = UINT16_MAX;
	int64_t x1132 = INT64_MIN;
	volatile int32_t t141 = 1;

    t141 = (x1129>>(x1130<=(x1131%x1132)));

    if (t141 != 16383) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x1137 = 5U;
	static int32_t x1138 = -1;
	int64_t x1140 = INT64_MIN;
	int32_t t142 = -1044;

    t142 = (x1137>>(x1138<=(x1139%x1140)));

    if (t142 != 2) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x1145 = 344;
	int64_t x1146 = INT64_MAX;
	static int32_t x1147 = 1500284;
	volatile int64_t x1148 = INT64_MAX;
	int32_t t143 = -1;

    t143 = (x1145>>(x1146<=(x1147%x1148)));

    if (t143 != 344) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x1151 = INT32_MAX;
	uint64_t x1152 = UINT64_MAX;
	int32_t t144 = -4082;

    t144 = (x1149>>(x1150<=(x1151%x1152)));

    if (t144 != 127) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int16_t x1154 = -1;
	int16_t x1155 = INT16_MIN;
	int16_t x1156 = INT16_MAX;
	static int64_t t145 = -13656252839LL;

    t145 = (x1153>>(x1154<=(x1155%x1156)));

    if (t145 != 1923657539147437LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x1157 = 0U;
	int32_t x1159 = INT32_MIN;
	volatile int32_t x1160 = INT32_MIN;
	volatile uint32_t t146 = 147141U;

    t146 = (x1157>>(x1158<=(x1159%x1160)));

    if (t146 != 0U) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x1161 = 1122U;
	int64_t x1162 = INT64_MAX;
	static int32_t x1163 = -1;

    t147 = (x1161>>(x1162<=(x1163%x1164)));

    if (t147 != 1122) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x1175 = -1091816721058741LL;
	int64_t x1176 = INT64_MIN;
	volatile int32_t t148 = -258;

    t148 = (x1173>>(x1174<=(x1175%x1176)));

    if (t148 != 16) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint8_t x1177 = 16U;
	static volatile int16_t x1179 = INT16_MIN;
	int8_t x1180 = -1;
	volatile int32_t t149 = -16653;

    t149 = (x1177>>(x1178<=(x1179%x1180)));

    if (t149 != 8) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x1197 = 5421254136981LLU;
	int16_t x1200 = INT16_MAX;

    t150 = (x1197>>(x1198<=(x1199%x1200)));

    if (t150 != 2710627068490LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x1202 = UINT64_MAX;
	volatile uint16_t x1204 = UINT16_MAX;
	static volatile int32_t t151 = -1;

    t151 = (x1201>>(x1202<=(x1203%x1204)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint8_t x1205 = UINT8_MAX;
	uint64_t x1206 = 107932LLU;
	uint64_t x1207 = UINT64_MAX;
	static volatile int32_t x1208 = 1;
	volatile int32_t t152 = 44284749;

    t152 = (x1205>>(x1206<=(x1207%x1208)));

    if (t152 != 255) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint8_t x1209 = 0U;
	int16_t x1211 = INT16_MIN;
	int64_t x1212 = INT64_MIN;
	int32_t t153 = 548836747;

    t153 = (x1209>>(x1210<=(x1211%x1212)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static int32_t x1213 = INT32_MAX;
	uint64_t x1214 = 13588913300790628LLU;
	uint32_t x1216 = UINT32_MAX;
	volatile int32_t t154 = -25;

    t154 = (x1213>>(x1214<=(x1215%x1216)));

    if (t154 != 1073741823) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x1217 = UINT32_MAX;
	int32_t x1218 = INT32_MAX;
	int16_t x1219 = 0;
	int8_t x1220 = INT8_MIN;
	uint32_t t155 = UINT32_MAX;

    t155 = (x1217>>(x1218<=(x1219%x1220)));

    if (t155 != UINT32_MAX) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x1221 = 1U;
	int64_t x1222 = INT64_MIN;
	static int32_t x1224 = -1;
	int32_t t156 = -85096;

    t156 = (x1221>>(x1222<=(x1223%x1224)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint32_t x1225 = 1U;
	volatile uint64_t x1226 = 1305196LLU;
	int32_t x1227 = 172721;
	int8_t x1228 = -1;

    t157 = (x1225>>(x1226<=(x1227%x1228)));

    if (t157 != 1U) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x1229 = UINT8_MAX;
	uint16_t x1230 = 6U;
	int32_t x1231 = -1;
	static int32_t t158 = 7530365;

    t158 = (x1229>>(x1230<=(x1231%x1232)));

    if (t158 != 255) { NG(); } else { ; }
	
}

void f159(void) {
    	static int64_t x1237 = INT64_MAX;
	uint32_t x1238 = 40U;
	int64_t x1239 = INT64_MIN;
	int32_t x1240 = -1;
	volatile int64_t t159 = INT64_MAX;

    t159 = (x1237>>(x1238<=(x1239%x1240)));

    if (t159 != INT64_MAX) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x1245 = 58U;
	int32_t x1246 = -1015;
	int32_t x1247 = INT32_MIN;
	volatile int8_t x1248 = -1;
	volatile int32_t t160 = 9610445;

    t160 = (x1245>>(x1246<=(x1247%x1248)));

    if (t160 != 29) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x1265 = 151634LLU;
	int64_t x1266 = 3557LL;
	volatile int16_t x1267 = 70;
	int32_t x1268 = -39;

    t161 = (x1265>>(x1266<=(x1267%x1268)));

    if (t161 != 151634LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile int8_t x1270 = -1;
	static int8_t x1271 = INT8_MAX;
	int64_t x1272 = -2315399LL;

    t162 = (x1269>>(x1270<=(x1271%x1272)));

    if (t162 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x1277 = 6U;
	int32_t x1278 = -1;
	int64_t x1280 = INT64_MIN;

    t163 = (x1277>>(x1278<=(x1279%x1280)));

    if (t163 != 3) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x1285 = 0U;
	uint8_t x1286 = UINT8_MAX;
	static int32_t x1287 = INT32_MAX;
	volatile int16_t x1288 = 2;
	int32_t t164 = -218818;

    t164 = (x1285>>(x1286<=(x1287%x1288)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x1297 = 6915U;
	uint16_t x1298 = 17520U;
	int32_t x1299 = INT32_MIN;
	volatile uint32_t t165 = 574525U;

    t165 = (x1297>>(x1298<=(x1299%x1300)));

    if (t165 != 6915U) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x1310 = -1LL;
	static int16_t x1311 = -1;
	static int64_t x1312 = -1LL;
	int32_t t166 = -15;

    t166 = (x1309>>(x1310<=(x1311%x1312)));

    if (t166 != 127) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x1321 = UINT8_MAX;
	int8_t x1322 = -35;
	volatile int16_t x1323 = INT16_MAX;
	static uint8_t x1324 = UINT8_MAX;
	volatile int32_t t167 = 90782;

    t167 = (x1321>>(x1322<=(x1323%x1324)));

    if (t167 != 127) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x1325 = 27LLU;
	uint16_t x1326 = UINT16_MAX;
	uint64_t x1327 = UINT64_MAX;
	uint64_t t168 = 323701765LLU;

    t168 = (x1325>>(x1326<=(x1327%x1328)));

    if (t168 != 27LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x1330 = INT8_MAX;
	int8_t x1331 = INT8_MAX;
	volatile int64_t x1332 = INT64_MIN;
	volatile int32_t t169 = 45248;

    t169 = (x1329>>(x1330<=(x1331%x1332)));

    if (t169 != 3) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint32_t x1333 = 5U;
	int64_t x1335 = INT64_MAX;
	int32_t x1336 = INT32_MIN;
	static uint32_t t170 = 918686034U;

    t170 = (x1333>>(x1334<=(x1335%x1336)));

    if (t170 != 2U) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x1341 = 821U;
	int8_t x1342 = -1;
	int32_t x1343 = -297;
	uint16_t x1344 = UINT16_MAX;
	int32_t t171 = -42;

    t171 = (x1341>>(x1342<=(x1343%x1344)));

    if (t171 != 821) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x1357 = 1;
	int64_t x1358 = -17050LL;
	static uint8_t x1359 = 12U;
	int8_t x1360 = 62;

    t172 = (x1357>>(x1358<=(x1359%x1360)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x1369 = INT8_MAX;
	uint32_t x1371 = 22121898U;
	uint8_t x1372 = 4U;
	static volatile int32_t t173 = 859091678;

    t173 = (x1369>>(x1370<=(x1371%x1372)));

    if (t173 != 127) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint32_t x1373 = UINT32_MAX;
	volatile int16_t x1374 = -930;
	volatile uint16_t x1375 = UINT16_MAX;
	volatile int8_t x1376 = INT8_MIN;
	volatile uint32_t t174 = 436311418U;

    t174 = (x1373>>(x1374<=(x1375%x1376)));

    if (t174 != 2147483647U) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x1377 = 1498016U;
	uint16_t x1378 = UINT16_MAX;
	static volatile int64_t x1379 = INT64_MAX;
	int64_t x1380 = INT64_MIN;
	volatile uint32_t t175 = 21840775U;

    t175 = (x1377>>(x1378<=(x1379%x1380)));

    if (t175 != 749008U) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x1386 = 0U;
	int8_t x1387 = -21;
	static int64_t x1388 = INT64_MIN;
	volatile int32_t t176 = 355;

    t176 = (x1385>>(x1386<=(x1387%x1388)));

    if (t176 != 105) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x1393 = 29U;
	int16_t x1394 = 3708;
	int32_t x1395 = 116134590;
	int32_t x1396 = -80197;

    t177 = (x1393>>(x1394<=(x1395%x1396)));

    if (t177 != 14) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x1405 = 68922U;
	uint16_t x1406 = 146U;
	uint8_t x1407 = UINT8_MAX;
	int8_t x1408 = INT8_MAX;
	uint32_t t178 = 45941U;

    t178 = (x1405>>(x1406<=(x1407%x1408)));

    if (t178 != 68922U) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint64_t x1413 = 14047343483LLU;
	uint8_t x1414 = 1U;
	int16_t x1415 = -2;
	volatile uint64_t t179 = 32292445882873LLU;

    t179 = (x1413>>(x1414<=(x1415%x1416)));

    if (t179 != 7023671741LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x1425 = 1421491037LL;
	static int32_t x1426 = 43444;
	int32_t x1427 = INT32_MIN;
	uint64_t x1428 = UINT64_MAX;
	volatile int64_t t180 = 84284LL;

    t180 = (x1425>>(x1426<=(x1427%x1428)));

    if (t180 != 710745518LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x1441 = UINT64_MAX;
	static uint64_t x1442 = 8361082672524225280LLU;
	uint16_t x1443 = 1199U;
	uint64_t t181 = UINT64_MAX;

    t181 = (x1441>>(x1442<=(x1443%x1444)));

    if (t181 != UINT64_MAX) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x1449 = 727LLU;
	static int16_t x1450 = INT16_MIN;
	int64_t x1452 = INT64_MIN;
	volatile uint64_t t182 = 44747410LLU;

    t182 = (x1449>>(x1450<=(x1451%x1452)));

    if (t182 != 363LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x1461 = UINT16_MAX;
	uint64_t x1462 = 221396884721LLU;
	int16_t x1463 = -1;
	int8_t x1464 = INT8_MIN;
	volatile int32_t t183 = -155;

    t183 = (x1461>>(x1462<=(x1463%x1464)));

    if (t183 != 32767) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x1465 = 63U;
	int8_t x1466 = -4;
	uint8_t x1467 = 2U;
	uint32_t x1468 = 18654745U;
	int32_t t184 = -251;

    t184 = (x1465>>(x1466<=(x1467%x1468)));

    if (t184 != 63) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x1469 = 43U;
	uint16_t x1472 = 31U;
	volatile uint32_t t185 = 6384U;

    t185 = (x1469>>(x1470<=(x1471%x1472)));

    if (t185 != 43U) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x1493 = 6;
	uint8_t x1494 = 2U;
	int32_t x1495 = INT32_MAX;
	uint32_t x1496 = UINT32_MAX;
	int32_t t186 = -31959357;

    t186 = (x1493>>(x1494<=(x1495%x1496)));

    if (t186 != 3) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x1497 = 880LL;
	int8_t x1499 = INT8_MIN;
	volatile int64_t x1500 = -1LL;
	int64_t t187 = -418007111LL;

    t187 = (x1497>>(x1498<=(x1499%x1500)));

    if (t187 != 440LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x1505 = 14U;
	int64_t x1506 = INT64_MAX;
	int8_t x1508 = 2;
	volatile int32_t t188 = -11;

    t188 = (x1505>>(x1506<=(x1507%x1508)));

    if (t188 != 14) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile uint8_t x1515 = 1U;
	int32_t x1516 = -1;
	volatile int32_t t189 = -1;

    t189 = (x1513>>(x1514<=(x1515%x1516)));

    if (t189 != 127) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint8_t x1529 = UINT8_MAX;
	int16_t x1530 = INT16_MIN;
	uint32_t x1531 = 125758956U;
	static int16_t x1532 = -3;
	volatile int32_t t190 = -2667;

    t190 = (x1529>>(x1530<=(x1531%x1532)));

    if (t190 != 255) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x1533 = 904529482709LL;
	int64_t x1534 = INT64_MIN;
	int8_t x1535 = INT8_MAX;
	volatile int32_t x1536 = -1;
	int64_t t191 = -14640378LL;

    t191 = (x1533>>(x1534<=(x1535%x1536)));

    if (t191 != 452264741354LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1537 = INT8_MAX;
	uint16_t x1538 = UINT16_MAX;
	static int64_t x1539 = 4171158790LL;
	static volatile uint64_t x1540 = 42LLU;
	int32_t t192 = -7601711;

    t192 = (x1537>>(x1538<=(x1539%x1540)));

    if (t192 != 127) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x1545 = 1U;
	volatile uint16_t x1546 = UINT16_MAX;
	volatile uint16_t x1547 = 18U;
	volatile uint8_t x1548 = UINT8_MAX;

    t193 = (x1545>>(x1546<=(x1547%x1548)));

    if (t193 != 1U) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x1549 = 6U;
	int16_t x1550 = INT16_MIN;
	int8_t x1551 = INT8_MAX;
	static int16_t x1552 = INT16_MIN;
	volatile int32_t t194 = -710587;

    t194 = (x1549>>(x1550<=(x1551%x1552)));

    if (t194 != 3) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x1569 = 31585633962LL;
	static uint8_t x1570 = 13U;
	int32_t x1572 = -1;
	volatile int64_t t195 = 28481LL;

    t195 = (x1569>>(x1570<=(x1571%x1572)));

    if (t195 != 31585633962LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x1577 = UINT32_MAX;
	uint8_t x1578 = UINT8_MAX;
	int8_t x1579 = -1;
	int64_t x1580 = 42LL;

    t196 = (x1577>>(x1578<=(x1579%x1580)));

    if (t196 != UINT32_MAX) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint32_t x1581 = 1U;
	static int8_t x1582 = -1;
	int32_t x1583 = -152948;
	int64_t x1584 = 28396219466LL;
	volatile uint32_t t197 = 2082178U;

    t197 = (x1581>>(x1582<=(x1583%x1584)));

    if (t197 != 1U) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x1585 = INT8_MAX;
	int32_t x1586 = INT32_MAX;
	volatile int64_t x1587 = -15260587464LL;
	int32_t x1588 = -101559;
	volatile int32_t t198 = -205;

    t198 = (x1585>>(x1586<=(x1587%x1588)));

    if (t198 != 127) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x1593 = 4237528LLU;
	int64_t x1595 = -15938371LL;
	uint32_t x1596 = UINT32_MAX;
	static volatile uint64_t t199 = 40362868459280LLU;

    t199 = (x1593>>(x1594<=(x1595%x1596)));

    if (t199 != 2118764LLU) { NG(); } else { ; }
	
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

