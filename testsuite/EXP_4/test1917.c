
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

int64_t x1 = INT64_MIN;
int8_t x6 = 7;
int32_t x18 = 5268591;
uint32_t x24 = UINT32_MAX;
uint32_t t4 = 45308208U;
int64_t x38 = 7117LL;
static uint64_t x50 = UINT64_MAX;
static volatile int64_t x61 = INT64_MAX;
volatile int64_t x62 = 1305LL;
static uint8_t x63 = 78U;
uint16_t x66 = UINT16_MAX;
int8_t x69 = INT8_MAX;
static uint32_t x89 = UINT32_MAX;
uint8_t x90 = 0U;
int8_t x91 = -50;
volatile int16_t x95 = -1;
int16_t x96 = INT16_MIN;
int64_t x103 = INT64_MIN;
volatile int32_t t16 = 6402;
volatile int32_t x119 = INT32_MIN;
int64_t x123 = INT64_MAX;
volatile int8_t x127 = 1;
uint64_t x134 = 0LLU;
volatile uint16_t x135 = UINT16_MAX;
volatile uint64_t x151 = 1568056403LLU;
volatile uint64_t t27 = 83633429677119LLU;
uint8_t x182 = UINT8_MAX;
int32_t x200 = INT32_MIN;
static int32_t x209 = 1;
int8_t x215 = INT8_MIN;
uint16_t x239 = UINT16_MAX;
volatile uint32_t t36 = UINT32_MAX;
uint32_t x247 = 741U;
int8_t x250 = INT8_MAX;
int16_t x252 = 250;
uint64_t x258 = 135893564060LLU;
volatile int8_t x259 = INT8_MIN;
volatile uint64_t t39 = 94072582222954LLU;
volatile int16_t x262 = 1;
volatile int32_t t41 = -52;
volatile uint32_t x278 = UINT32_MAX;
uint32_t x283 = UINT32_MAX;
static int32_t t43 = 16398427;
volatile int32_t x290 = 1;
int16_t x296 = INT16_MIN;
int32_t x315 = INT32_MIN;
int16_t x316 = INT16_MIN;
static uint16_t x322 = UINT16_MAX;
uint32_t x323 = 1U;
int8_t x336 = 1;
static uint16_t x338 = UINT16_MAX;
int64_t x345 = -1LL;
uint32_t x350 = UINT32_MAX;
int64_t x351 = INT64_MIN;
int64_t t54 = 36611102784LL;
int8_t x365 = INT8_MAX;
volatile int32_t t58 = -717782008;
uint64_t x389 = 1381043331732LLU;
volatile uint64_t t60 = 219883908228187897LLU;
int64_t x393 = 84405123LL;
uint8_t x394 = 13U;
static uint64_t x395 = UINT64_MAX;
static volatile uint8_t x402 = UINT8_MAX;
int64_t x418 = 1151676450422888061LL;
static int32_t t64 = 8922;
static int32_t x450 = 3581496;
int32_t t69 = -30;
int16_t x473 = 11871;
int32_t x475 = INT32_MIN;
uint64_t t71 = UINT64_MAX;
static int32_t x496 = 93;
int32_t t74 = INT32_MAX;
static int64_t x501 = -1LL;
static int8_t x529 = INT8_MAX;
int16_t x552 = -1;
volatile int32_t x559 = 109;
int8_t x561 = INT8_MIN;
uint32_t x574 = 1152598U;
uint16_t x636 = UINT16_MAX;
int32_t x638 = INT32_MAX;
int32_t x662 = 137231306;
int32_t x664 = -684461063;
int16_t x670 = 4410;
uint8_t x672 = UINT8_MAX;
uint8_t x685 = UINT8_MAX;
int64_t x687 = 17003998330LL;
int32_t x699 = -1;
volatile int8_t x700 = INT8_MAX;
static volatile uint64_t x715 = UINT64_MAX;
volatile int8_t x721 = INT8_MIN;
static volatile uint8_t x734 = 44U;
volatile uint16_t x736 = 1U;
volatile uint64_t t105 = 5670LLU;
static int32_t x759 = -84490;
int8_t x766 = 0;
int64_t x768 = -1LL;
int32_t x776 = -1;
volatile uint64_t t110 = 3613871293LLU;
int8_t x786 = 3;
volatile int8_t x789 = 0;
uint16_t x791 = UINT16_MAX;
uint32_t x797 = UINT32_MAX;
volatile int32_t x800 = -1;
uint8_t x822 = 3U;
int32_t t115 = -120;
int16_t x863 = -1;
uint32_t x864 = UINT32_MAX;
static uint64_t t118 = UINT64_MAX;
uint64_t x875 = 257821610LLU;
static volatile int32_t t120 = 5841829;
volatile uint32_t x900 = UINT32_MAX;
int8_t x906 = 0;
uint64_t x917 = 31652LLU;
int8_t x930 = INT8_MAX;
static int64_t x932 = -1991076215276378890LL;
uint16_t x938 = 6240U;
uint64_t x949 = 25980474655LLU;
volatile int64_t x952 = 9137LL;
int64_t x955 = INT64_MIN;
static int64_t x961 = INT64_MAX;
static int32_t x977 = INT32_MAX;
int64_t x979 = -2LL;
int16_t x980 = INT16_MIN;
volatile int16_t x981 = INT16_MIN;
uint16_t x982 = 16995U;
int32_t t134 = -96259935;
static volatile uint8_t x987 = 16U;
volatile uint32_t x988 = UINT32_MAX;
volatile uint32_t t135 = UINT32_MAX;
int32_t x1007 = -924911;
static int32_t x1016 = -24513882;
volatile int64_t x1017 = INT64_MIN;
volatile uint64_t t140 = 4044095654266274797LLU;
uint16_t x1043 = UINT16_MAX;
uint64_t x1044 = 1670LLU;
uint32_t x1087 = 240568248U;
static int32_t t143 = -2008977;
int8_t x1093 = -1;
int64_t x1105 = INT64_MAX;
int8_t x1111 = INT8_MIN;
uint8_t x1115 = 15U;
int32_t x1117 = INT32_MIN;
uint8_t x1118 = UINT8_MAX;
int32_t x1121 = INT32_MAX;
static volatile uint64_t x1149 = UINT64_MAX;
volatile uint64_t t154 = UINT64_MAX;
volatile uint64_t t156 = 1LLU;
uint8_t x1179 = 10U;
volatile int32_t t158 = -209;
uint32_t x1189 = 1U;
int32_t x1207 = INT32_MIN;
static uint64_t x1214 = 115493215LLU;
int64_t x1215 = INT64_MAX;
volatile uint64_t t162 = 254927744425LLU;
int16_t x1226 = INT16_MAX;
int16_t x1229 = INT16_MIN;
volatile int16_t x1233 = INT16_MAX;
static uint64_t x1248 = 369886148922305770LLU;
int64_t t168 = 1LL;
volatile int32_t x1280 = -1;
static uint16_t x1285 = 42U;
volatile int64_t x1297 = INT64_MIN;
int16_t x1329 = 129;
int32_t x1334 = 2609;
static int32_t x1335 = INT32_MAX;
int32_t x1341 = INT32_MIN;
static int64_t x1351 = 1023727231953074947LL;
uint16_t x1370 = 3U;
static int32_t t183 = 369592;
int16_t x1385 = INT16_MAX;
static int64_t x1387 = -84918LL;
uint64_t x1392 = 539556513LLU;
volatile uint64_t t185 = UINT64_MAX;
uint32_t x1417 = 1421U;
int16_t x1419 = INT16_MIN;
volatile uint32_t x1420 = 41223U;
int8_t x1426 = INT8_MAX;
int16_t x1449 = -1;
volatile int64_t x1452 = INT64_MAX;
static int64_t x1471 = INT64_MAX;
uint8_t x1472 = 79U;


void f0(void) {
    	volatile uint8_t x2 = 3U;
	int8_t x3 = INT8_MAX;
	int64_t x4 = 577664776040LL;
	static int64_t t0 = -2184169913512LL;

    t0 = (x1|(x2>>(x3<=x4)));

    if (t0 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = UINT64_MAX;
	uint16_t x7 = 33U;
	static uint8_t x8 = 49U;
	uint64_t t1 = UINT64_MAX;

    t1 = (x5|(x6>>(x7<=x8)));

    if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x13 = INT16_MAX;
	uint32_t x14 = 3721486U;
	int8_t x15 = -1;
	volatile uint8_t x16 = UINT8_MAX;
	volatile uint32_t t2 = 6U;

    t2 = (x13|(x14>>(x15<=x16)));

    if (t2 != 1867775U) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint16_t x17 = 7173U;
	static volatile int16_t x19 = INT16_MIN;
	int32_t x20 = -1;
	int32_t t3 = 1;

    t3 = (x17|(x18>>(x19<=x20)));

    if (t3 != 2637367) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x21 = 92445U;
	static uint8_t x22 = UINT8_MAX;
	uint64_t x23 = UINT64_MAX;

    t4 = (x21|(x22>>(x23<=x24)));

    if (t4 != 92671U) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x37 = -1;
	uint32_t x39 = 155046U;
	int64_t x40 = INT64_MIN;
	volatile int64_t t5 = 4279505421403LL;

    t5 = (x37|(x38>>(x39<=x40)));

    if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint64_t x49 = 114LLU;
	volatile int32_t x51 = INT32_MIN;
	int16_t x52 = -1;
	uint64_t t6 = 23703275849967738LLU;

    t6 = (x49|(x50>>(x51<=x52)));

    if (t6 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x53 = 27930LL;
	volatile uint64_t x54 = 262LLU;
	int16_t x55 = INT16_MIN;
	volatile int8_t x56 = 22;
	static volatile uint64_t t7 = 0LLU;

    t7 = (x53|(x54>>(x55<=x56)));

    if (t7 != 28059LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x64 = UINT16_MAX;
	int64_t t8 = INT64_MAX;

    t8 = (x61|(x62>>(x63<=x64)));

    if (t8 != INT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x65 = -56;
	static int16_t x67 = INT16_MAX;
	int32_t x68 = INT32_MIN;
	volatile int32_t t9 = 32228152;

    t9 = (x65|(x66>>(x67<=x68)));

    if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x70 = 1;
	int32_t x71 = 448375;
	int32_t x72 = -37;
	static volatile int32_t t10 = 6;

    t10 = (x69|(x70>>(x71<=x72)));

    if (t10 != 127) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile uint64_t x73 = 174474109790LLU;
	uint8_t x74 = 4U;
	int16_t x75 = INT16_MIN;
	uint8_t x76 = 29U;
	uint64_t t11 = 339410709104013LLU;

    t11 = (x73|(x74>>(x75<=x76)));

    if (t11 != 174474109790LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x77 = 1172U;
	static uint32_t x78 = 108697637U;
	int8_t x79 = 0;
	int16_t x80 = INT16_MIN;
	volatile uint32_t t12 = 12702404U;

    t12 = (x77|(x78>>(x79<=x80)));

    if (t12 != 108698805U) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int32_t x92 = -1;
	uint32_t t13 = UINT32_MAX;

    t13 = (x89|(x90>>(x91<=x92)));

    if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x93 = -64757;
	uint16_t x94 = 17514U;
	int32_t t14 = -15082;

    t14 = (x93|(x94>>(x95<=x96)));

    if (t14 != -47253) { NG(); } else { ; }
	
}

void f15(void) {
    	static int16_t x101 = INT16_MIN;
	volatile uint32_t x102 = UINT32_MAX;
	int16_t x104 = 2;
	volatile uint32_t t15 = UINT32_MAX;

    t15 = (x101|(x102>>(x103<=x104)));

    if (t15 != UINT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int16_t x105 = INT16_MIN;
	uint8_t x106 = 51U;
	static int8_t x107 = -1;
	volatile int8_t x108 = -1;

    t16 = (x105|(x106>>(x107<=x108)));

    if (t16 != -32743) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x109 = -1LL;
	int8_t x110 = 0;
	static int64_t x111 = -1LL;
	volatile int32_t x112 = INT32_MIN;
	volatile int64_t t17 = 15449649773991LL;

    t17 = (x109|(x110>>(x111<=x112)));

    if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint64_t x117 = 16814477815129281LLU;
	static int16_t x118 = INT16_MAX;
	uint16_t x120 = UINT16_MAX;
	uint64_t t18 = 19828LLU;

    t18 = (x117|(x118>>(x119<=x120)));

    if (t18 != 16814477815136255LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x121 = 3311U;
	int8_t x122 = INT8_MAX;
	int16_t x124 = INT16_MAX;
	volatile int32_t t19 = 0;

    t19 = (x121|(x122>>(x123<=x124)));

    if (t19 != 3327) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x125 = 1013;
	int32_t x126 = 820399;
	int32_t x128 = INT32_MIN;
	static int32_t t20 = 38328;

    t20 = (x125|(x126>>(x127<=x128)));

    if (t20 != 821247) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x133 = -10;
	volatile int8_t x136 = INT8_MIN;
	uint64_t t21 = 1907408862004848LLU;

    t21 = (x133|(x134>>(x135<=x136)));

    if (t21 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x141 = INT8_MAX;
	static int16_t x142 = INT16_MAX;
	int32_t x143 = INT32_MAX;
	int16_t x144 = INT16_MAX;
	int32_t t22 = 121633;

    t22 = (x141|(x142>>(x143<=x144)));

    if (t22 != 32767) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x149 = -1;
	volatile uint8_t x150 = UINT8_MAX;
	uint64_t x152 = UINT64_MAX;
	volatile int32_t t23 = -32498;

    t23 = (x149|(x150>>(x151<=x152)));

    if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x153 = UINT8_MAX;
	static int64_t x154 = 53509781478798LL;
	int8_t x155 = -55;
	volatile int32_t x156 = -2072;
	int64_t t24 = 19102684521LL;

    t24 = (x153|(x154>>(x155<=x156)));

    if (t24 != 53509781478911LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x157 = 12;
	int8_t x158 = 12;
	int16_t x159 = -96;
	int16_t x160 = INT16_MIN;
	int32_t t25 = 0;

    t25 = (x157|(x158>>(x159<=x160)));

    if (t25 != 12) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint8_t x165 = UINT8_MAX;
	uint64_t x166 = 30618653070882419LLU;
	int16_t x167 = INT16_MIN;
	int32_t x168 = -1;
	static uint64_t t26 = 34387169272197LLU;

    t26 = (x165|(x166>>(x167<=x168)));

    if (t26 != 15309326535441407LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x173 = 3221254760927LLU;
	uint64_t x174 = 211354LLU;
	int64_t x175 = -1LL;
	int64_t x176 = INT64_MIN;

    t27 = (x173|(x174>>(x175<=x176)));

    if (t27 != 3221254830559LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x181 = 86U;
	volatile int8_t x183 = INT8_MIN;
	volatile int16_t x184 = -1;
	int32_t t28 = 1;

    t28 = (x181|(x182>>(x183<=x184)));

    if (t28 != 127) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x197 = UINT16_MAX;
	static int64_t x198 = 4956427LL;
	static volatile uint8_t x199 = UINT8_MAX;
	volatile int64_t t29 = -785591169613LL;

    t29 = (x197|(x198>>(x199<=x200)));

    if (t29 != 4980735LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x201 = 43U;
	uint32_t x202 = 0U;
	uint32_t x203 = 243366546U;
	volatile int16_t x204 = INT16_MIN;
	volatile uint32_t t30 = 2U;

    t30 = (x201|(x202>>(x203<=x204)));

    if (t30 != 43U) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x205 = 7417U;
	uint16_t x206 = UINT16_MAX;
	int16_t x207 = INT16_MAX;
	int64_t x208 = 51735531LL;
	volatile int32_t t31 = 247;

    t31 = (x205|(x206>>(x207<=x208)));

    if (t31 != 32767) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint64_t x210 = 472899198LLU;
	volatile uint16_t x211 = UINT16_MAX;
	int8_t x212 = INT8_MIN;
	volatile uint64_t t32 = 43230LLU;

    t32 = (x209|(x210>>(x211<=x212)));

    if (t32 != 472899199LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x213 = INT8_MIN;
	volatile int64_t x214 = 0LL;
	volatile uint64_t x216 = UINT64_MAX;
	volatile int64_t t33 = -454LL;

    t33 = (x213|(x214>>(x215<=x216)));

    if (t33 != -128LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x217 = 0;
	volatile uint32_t x218 = 2182986U;
	int8_t x219 = -23;
	static int8_t x220 = 5;
	uint32_t t34 = 1404U;

    t34 = (x217|(x218>>(x219<=x220)));

    if (t34 != 1091493U) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x221 = INT64_MIN;
	volatile uint32_t x222 = 897U;
	static uint64_t x223 = UINT64_MAX;
	uint16_t x224 = 1871U;
	static int64_t t35 = 492LL;

    t35 = (x221|(x222>>(x223<=x224)));

    if (t35 != -9223372036854774911LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x237 = 364796163U;
	uint32_t x238 = UINT32_MAX;
	static int32_t x240 = -635707;

    t36 = (x237|(x238>>(x239<=x240)));

    if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x245 = UINT8_MAX;
	static volatile uint64_t x246 = 2510565671914LLU;
	uint64_t x248 = 312096870720210LLU;
	static uint64_t t37 = 28923894953230LLU;

    t37 = (x245|(x246>>(x247<=x248)));

    if (t37 != 1255282835967LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x249 = 1308U;
	int32_t x251 = -1;
	volatile uint32_t t38 = 76806850U;

    t38 = (x249|(x250>>(x251<=x252)));

    if (t38 != 1343U) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x257 = INT16_MIN;
	int8_t x260 = INT8_MIN;

    t39 = (x257|(x258>>(x259<=x260)));

    if (t39 != 18446744073709526350LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x261 = -1;
	int16_t x263 = INT16_MAX;
	uint64_t x264 = UINT64_MAX;
	volatile int32_t t40 = 6;

    t40 = (x261|(x262>>(x263<=x264)));

    if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x273 = INT16_MIN;
	volatile int16_t x274 = INT16_MAX;
	static uint8_t x275 = 29U;
	int64_t x276 = -9448LL;

    t41 = (x273|(x274>>(x275<=x276)));

    if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint64_t x277 = UINT64_MAX;
	int32_t x279 = 370;
	volatile int64_t x280 = -1LL;
	uint64_t t42 = UINT64_MAX;

    t42 = (x277|(x278>>(x279<=x280)));

    if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x281 = UINT16_MAX;
	int32_t x282 = 0;
	static int64_t x284 = INT64_MIN;

    t43 = (x281|(x282>>(x283<=x284)));

    if (t43 != 65535) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int16_t x289 = 7010;
	static int32_t x291 = INT32_MAX;
	static uint32_t x292 = 333U;
	int32_t t44 = -62072153;

    t44 = (x289|(x290>>(x291<=x292)));

    if (t44 != 7011) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x293 = 12U;
	static uint32_t x294 = UINT32_MAX;
	int32_t x295 = INT32_MIN;
	static uint32_t t45 = 788274U;

    t45 = (x293|(x294>>(x295<=x296)));

    if (t45 != 2147483647U) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int64_t x297 = 534938176500LL;
	uint16_t x298 = 11651U;
	static int32_t x299 = -1;
	int32_t x300 = -1977953;
	volatile int64_t t46 = 270444555969LL;

    t46 = (x297|(x298>>(x299<=x300)));

    if (t46 != 534938185719LL) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x305 = -1;
	int16_t x306 = 17;
	static volatile uint64_t x307 = UINT64_MAX;
	int16_t x308 = -1;
	volatile int32_t t47 = 227697001;

    t47 = (x305|(x306>>(x307<=x308)));

    if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x309 = INT16_MIN;
	int64_t x310 = 1470341172556030699LL;
	static int32_t x311 = INT32_MIN;
	uint64_t x312 = UINT64_MAX;
	volatile int64_t t48 = 923731314713293913LL;

    t48 = (x309|(x310>>(x311<=x312)));

    if (t48 != -20107LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x313 = INT16_MIN;
	int64_t x314 = INT64_MAX;
	int64_t t49 = -224139351LL;

    t49 = (x313|(x314>>(x315<=x316)));

    if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x321 = INT8_MAX;
	volatile int8_t x324 = INT8_MIN;
	volatile int32_t t50 = -2;

    t50 = (x321|(x322>>(x323<=x324)));

    if (t50 != 32767) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x333 = -1;
	int8_t x334 = INT8_MAX;
	int16_t x335 = -1;
	int32_t t51 = -3443387;

    t51 = (x333|(x334>>(x335<=x336)));

    if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x337 = 246U;
	uint16_t x339 = UINT16_MAX;
	uint16_t x340 = 93U;
	volatile int32_t t52 = -5;

    t52 = (x337|(x338>>(x339<=x340)));

    if (t52 != 65535) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint8_t x346 = 2U;
	static int64_t x347 = -8379LL;
	volatile uint64_t x348 = UINT64_MAX;
	static int64_t t53 = -22524080LL;

    t53 = (x345|(x346>>(x347<=x348)));

    if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x349 = 61LL;
	static uint32_t x352 = 11036U;

    t54 = (x349|(x350>>(x351<=x352)));

    if (t54 != 2147483647LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint16_t x353 = UINT16_MAX;
	uint64_t x354 = 2LLU;
	int16_t x355 = -274;
	uint64_t x356 = 64785844LLU;
	volatile uint64_t t55 = 242LLU;

    t55 = (x353|(x354>>(x355<=x356)));

    if (t55 != 65535LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x357 = INT64_MIN;
	uint8_t x358 = UINT8_MAX;
	int16_t x359 = INT16_MIN;
	uint8_t x360 = 118U;
	volatile int64_t t56 = -526643133LL;

    t56 = (x357|(x358>>(x359<=x360)));

    if (t56 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile uint8_t x366 = UINT8_MAX;
	int32_t x367 = 47766;
	uint16_t x368 = UINT16_MAX;
	int32_t t57 = 129305990;

    t57 = (x365|(x366>>(x367<=x368)));

    if (t57 != 127) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x377 = -1;
	uint16_t x378 = 1U;
	static uint8_t x379 = UINT8_MAX;
	volatile int16_t x380 = 1060;

    t58 = (x377|(x378>>(x379<=x380)));

    if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile uint32_t x385 = UINT32_MAX;
	uint32_t x386 = 35621U;
	int8_t x387 = INT8_MIN;
	static uint16_t x388 = 29847U;
	volatile uint32_t t59 = UINT32_MAX;

    t59 = (x385|(x386>>(x387<=x388)));

    if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x390 = UINT8_MAX;
	int8_t x391 = -1;
	uint16_t x392 = 13U;

    t60 = (x389|(x390>>(x391<=x392)));

    if (t60 != 1381043331839LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x396 = INT16_MIN;
	int64_t t61 = 21172LL;

    t61 = (x393|(x394>>(x395<=x396)));

    if (t61 != 84405135LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x401 = 2U;
	static int16_t x403 = INT16_MIN;
	int16_t x404 = INT16_MIN;
	int32_t t62 = 258131;

    t62 = (x401|(x402>>(x403<=x404)));

    if (t62 != 127) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x417 = INT16_MAX;
	uint16_t x419 = 939U;
	static int64_t x420 = -1LL;
	int64_t t63 = 51LL;

    t63 = (x417|(x418>>(x419<=x420)));

    if (t63 != 1151676450422915071LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x437 = UINT8_MAX;
	uint16_t x438 = 146U;
	uint16_t x439 = 566U;
	volatile uint16_t x440 = 9U;

    t64 = (x437|(x438>>(x439<=x440)));

    if (t64 != 255) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint32_t x441 = 3U;
	uint32_t x442 = 98085U;
	int32_t x443 = INT32_MIN;
	int64_t x444 = INT64_MAX;
	volatile uint32_t t65 = 9538003U;

    t65 = (x441|(x442>>(x443<=x444)));

    if (t65 != 49043U) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x445 = INT64_MIN;
	uint16_t x446 = UINT16_MAX;
	int32_t x447 = INT32_MIN;
	uint16_t x448 = 0U;
	int64_t t66 = -27972LL;

    t66 = (x445|(x446>>(x447<=x448)));

    if (t66 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int64_t x449 = -574701914277773LL;
	int64_t x451 = INT64_MAX;
	int32_t x452 = INT32_MIN;
	int64_t t67 = -470383087785299LL;

    t67 = (x449|(x450>>(x451<=x452)));

    if (t67 != -574701910966661LL) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x461 = -1;
	uint32_t x462 = 1124140070U;
	int32_t x463 = INT32_MIN;
	int8_t x464 = INT8_MIN;
	uint32_t t68 = UINT32_MAX;

    t68 = (x461|(x462>>(x463<=x464)));

    if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x465 = UINT16_MAX;
	int8_t x466 = INT8_MAX;
	int32_t x467 = -5;
	static int16_t x468 = 1;

    t69 = (x465|(x466>>(x467<=x468)));

    if (t69 != 65535) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile uint64_t x474 = UINT64_MAX;
	static int64_t x476 = -1207741LL;
	volatile uint64_t t70 = 1610429370956847LLU;

    t70 = (x473|(x474>>(x475<=x476)));

    if (t70 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint64_t x477 = UINT64_MAX;
	int16_t x478 = 81;
	int32_t x479 = INT32_MIN;
	volatile int64_t x480 = INT64_MIN;

    t71 = (x477|(x478>>(x479<=x480)));

    if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int32_t x489 = -169;
	uint32_t x490 = 2098124184U;
	static int64_t x491 = INT64_MAX;
	static uint32_t x492 = 122U;
	volatile uint32_t t72 = 1692U;

    t72 = (x489|(x490>>(x491<=x492)));

    if (t72 != 4294967263U) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x493 = INT16_MAX;
	uint64_t x494 = UINT64_MAX;
	int8_t x495 = INT8_MIN;
	uint64_t t73 = 562980LLU;

    t73 = (x493|(x494>>(x495<=x496)));

    if (t73 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x497 = INT32_MAX;
	int8_t x498 = INT8_MAX;
	int64_t x499 = INT64_MIN;
	static int16_t x500 = 10;

    t74 = (x497|(x498>>(x499<=x500)));

    if (t74 != INT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint32_t x502 = 65140813U;
	int32_t x503 = INT32_MIN;
	int32_t x504 = 0;
	int64_t t75 = -4LL;

    t75 = (x501|(x502>>(x503<=x504)));

    if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int8_t x517 = -1;
	uint16_t x518 = UINT16_MAX;
	uint8_t x519 = 6U;
	int32_t x520 = INT32_MIN;
	int32_t t76 = -18;

    t76 = (x517|(x518>>(x519<=x520)));

    if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x530 = INT8_MAX;
	uint64_t x531 = UINT64_MAX;
	int16_t x532 = -27;
	volatile int32_t t77 = -2297;

    t77 = (x529|(x530>>(x531<=x532)));

    if (t77 != 127) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x533 = INT8_MIN;
	static uint64_t x534 = UINT64_MAX;
	uint32_t x535 = 461U;
	volatile uint8_t x536 = UINT8_MAX;
	static uint64_t t78 = UINT64_MAX;

    t78 = (x533|(x534>>(x535<=x536)));

    if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x537 = INT64_MIN;
	uint16_t x538 = 1U;
	int16_t x539 = -9308;
	volatile int16_t x540 = INT16_MIN;
	volatile int64_t t79 = 33355235016203LL;

    t79 = (x537|(x538>>(x539<=x540)));

    if (t79 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint16_t x549 = 11U;
	static uint32_t x550 = 306U;
	volatile uint16_t x551 = UINT16_MAX;
	volatile uint32_t t80 = 3829U;

    t80 = (x549|(x550>>(x551<=x552)));

    if (t80 != 315U) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x553 = 0;
	static uint32_t x554 = UINT32_MAX;
	int64_t x555 = INT64_MIN;
	volatile int64_t x556 = -1227903171036948993LL;
	static volatile uint32_t t81 = 167275U;

    t81 = (x553|(x554>>(x555<=x556)));

    if (t81 != 2147483647U) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x557 = -1LL;
	uint64_t x558 = UINT64_MAX;
	int16_t x560 = -165;
	uint64_t t82 = UINT64_MAX;

    t82 = (x557|(x558>>(x559<=x560)));

    if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x562 = INT64_MAX;
	volatile uint64_t x563 = 12146331955419LLU;
	int64_t x564 = -13488554392389556LL;
	volatile int64_t t83 = 432348786523593LL;

    t83 = (x561|(x562>>(x563<=x564)));

    if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x569 = UINT32_MAX;
	int8_t x570 = INT8_MAX;
	static int64_t x571 = INT64_MIN;
	int16_t x572 = -1;
	volatile uint32_t t84 = UINT32_MAX;

    t84 = (x569|(x570>>(x571<=x572)));

    if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x573 = INT16_MIN;
	static volatile int16_t x575 = 883;
	volatile int64_t x576 = INT64_MIN;
	volatile uint32_t t85 = 570210292U;

    t85 = (x573|(x574>>(x575<=x576)));

    if (t85 != 4294940246U) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int32_t x581 = 846;
	volatile int64_t x582 = 874993672181750LL;
	int8_t x583 = -1;
	volatile uint32_t x584 = 670155448U;
	static volatile int64_t t86 = -683475430004LL;

    t86 = (x581|(x582>>(x583<=x584)));

    if (t86 != 874993672181758LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x589 = 0U;
	uint64_t x590 = UINT64_MAX;
	int64_t x591 = -1LL;
	static uint32_t x592 = UINT32_MAX;
	uint64_t t87 = 128250LLU;

    t87 = (x589|(x590>>(x591<=x592)));

    if (t87 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x601 = INT8_MIN;
	uint32_t x602 = UINT32_MAX;
	volatile uint32_t x603 = UINT32_MAX;
	int32_t x604 = INT32_MAX;
	volatile uint32_t t88 = UINT32_MAX;

    t88 = (x601|(x602>>(x603<=x604)));

    if (t88 != UINT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x617 = -1;
	uint8_t x618 = 1U;
	static volatile int16_t x619 = -4;
	volatile int32_t x620 = -3893098;
	int32_t t89 = 2225;

    t89 = (x617|(x618>>(x619<=x620)));

    if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x629 = INT8_MAX;
	uint16_t x630 = UINT16_MAX;
	uint32_t x631 = 107966U;
	int16_t x632 = INT16_MIN;
	int32_t t90 = 2115265;

    t90 = (x629|(x630>>(x631<=x632)));

    if (t90 != 32767) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int16_t x633 = INT16_MIN;
	static int16_t x634 = 29;
	int32_t x635 = INT32_MAX;
	volatile int32_t t91 = 15409;

    t91 = (x633|(x634>>(x635<=x636)));

    if (t91 != -32739) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint8_t x637 = 0U;
	uint32_t x639 = 1263926U;
	int8_t x640 = -31;
	static volatile int32_t t92 = 0;

    t92 = (x637|(x638>>(x639<=x640)));

    if (t92 != 1073741823) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile int8_t x641 = 1;
	static uint64_t x642 = 91939602446736LLU;
	int16_t x643 = -1;
	static volatile int32_t x644 = -1;
	uint64_t t93 = 6364944494471LLU;

    t93 = (x641|(x642>>(x643<=x644)));

    if (t93 != 45969801223369LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x645 = -1;
	volatile int64_t x646 = 247633555948050833LL;
	volatile int64_t x647 = -46LL;
	uint64_t x648 = UINT64_MAX;
	static volatile int64_t t94 = -27463886686791LL;

    t94 = (x645|(x646>>(x647<=x648)));

    if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x661 = INT8_MAX;
	volatile int32_t x663 = 114145667;
	int32_t t95 = 15189;

    t95 = (x661|(x662>>(x663<=x664)));

    if (t95 != 137231359) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x665 = -5;
	int64_t x666 = INT64_MAX;
	int8_t x667 = 0;
	uint32_t x668 = 1U;
	int64_t t96 = -44226115LL;

    t96 = (x665|(x666>>(x667<=x668)));

    if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile uint16_t x669 = 409U;
	int64_t x671 = 99465106583647LL;
	volatile int32_t t97 = -218;

    t97 = (x669|(x670>>(x671<=x672)));

    if (t97 != 4539) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x673 = 1U;
	int8_t x674 = INT8_MAX;
	uint16_t x675 = 126U;
	int32_t x676 = INT32_MIN;
	int32_t t98 = 93282;

    t98 = (x673|(x674>>(x675<=x676)));

    if (t98 != 127) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x677 = -3958000673LL;
	static uint32_t x678 = UINT32_MAX;
	int64_t x679 = INT64_MAX;
	int64_t x680 = INT64_MAX;
	int64_t t99 = -2012037218337LL;

    t99 = (x677|(x678>>(x679<=x680)));

    if (t99 != -2147483649LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x686 = 105;
	uint32_t x688 = 837619753U;
	int32_t t100 = 40387898;

    t100 = (x685|(x686>>(x687<=x688)));

    if (t100 != 255) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x697 = -1;
	uint8_t x698 = 0U;
	volatile int32_t t101 = 0;

    t101 = (x697|(x698>>(x699<=x700)));

    if (t101 != -1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint64_t x701 = 2032518846927108478LLU;
	static int32_t x702 = 1472;
	int32_t x703 = 6;
	volatile uint64_t x704 = 4760056LLU;
	volatile uint64_t t102 = 10657639274854612LLU;

    t102 = (x701|(x702>>(x703<=x704)));

    if (t102 != 2032518846927109118LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x713 = INT32_MAX;
	static int16_t x714 = INT16_MAX;
	static int32_t x716 = INT32_MIN;
	volatile int32_t t103 = INT32_MAX;

    t103 = (x713|(x714>>(x715<=x716)));

    if (t103 != INT32_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint64_t x722 = 349612LLU;
	int16_t x723 = -1;
	volatile uint8_t x724 = UINT8_MAX;
	volatile uint64_t t104 = 743579265311LLU;

    t104 = (x721|(x722>>(x723<=x724)));

    if (t104 != 18446744073709551574LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x733 = 57110LLU;
	static int64_t x735 = INT64_MAX;

    t105 = (x733|(x734>>(x735<=x736)));

    if (t105 != 57150LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x749 = 12;
	uint8_t x750 = UINT8_MAX;
	int32_t x751 = INT32_MIN;
	int8_t x752 = INT8_MAX;
	int32_t t106 = 21475;

    t106 = (x749|(x750>>(x751<=x752)));

    if (t106 != 127) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x757 = UINT64_MAX;
	volatile uint32_t x758 = UINT32_MAX;
	int16_t x760 = INT16_MAX;
	volatile uint64_t t107 = UINT64_MAX;

    t107 = (x757|(x758>>(x759<=x760)));

    if (t107 != UINT64_MAX) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x761 = -1;
	static uint16_t x762 = 156U;
	int32_t x763 = INT32_MIN;
	uint32_t x764 = UINT32_MAX;
	volatile int32_t t108 = 872342;

    t108 = (x761|(x762>>(x763<=x764)));

    if (t108 != -1) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x765 = -38;
	uint32_t x767 = UINT32_MAX;
	volatile int32_t t109 = 1222;

    t109 = (x765|(x766>>(x767<=x768)));

    if (t109 != -38) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x773 = -62;
	uint64_t x774 = 890403736096LLU;
	int64_t x775 = -2004250916392814LL;

    t110 = (x773|(x774>>(x775<=x776)));

    if (t110 != 18446744073709551570LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x785 = 1515391121260587298LL;
	static uint64_t x787 = 4589LLU;
	int16_t x788 = 47;
	int64_t t111 = 5163875685768LL;

    t111 = (x785|(x786>>(x787<=x788)));

    if (t111 != 1515391121260587299LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int16_t x790 = 943;
	int32_t x792 = 31063;
	volatile int32_t t112 = 288113280;

    t112 = (x789|(x790>>(x791<=x792)));

    if (t112 != 943) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x798 = 9U;
	int16_t x799 = INT16_MIN;
	volatile uint32_t t113 = UINT32_MAX;

    t113 = (x797|(x798>>(x799<=x800)));

    if (t113 != UINT32_MAX) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x801 = INT16_MIN;
	int16_t x802 = INT16_MAX;
	volatile int16_t x803 = INT16_MIN;
	static int32_t x804 = INT32_MAX;
	static int32_t t114 = -44715036;

    t114 = (x801|(x802>>(x803<=x804)));

    if (t114 != -16385) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x821 = INT8_MIN;
	uint64_t x823 = 16814409148LLU;
	int64_t x824 = -1LL;

    t115 = (x821|(x822>>(x823<=x824)));

    if (t115 != -127) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x849 = 6221;
	uint8_t x850 = 18U;
	int32_t x851 = -1;
	int16_t x852 = -1;
	int32_t t116 = -120581;

    t116 = (x849|(x850>>(x851<=x852)));

    if (t116 != 6221) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x861 = 1;
	static int16_t x862 = INT16_MAX;
	volatile int32_t t117 = 124501888;

    t117 = (x861|(x862>>(x863<=x864)));

    if (t117 != 16383) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x865 = -1;
	static uint64_t x866 = 964186537849400LLU;
	int64_t x867 = -1LL;
	int16_t x868 = 0;

    t118 = (x865|(x866>>(x867<=x868)));

    if (t118 != UINT64_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x873 = -1;
	static int32_t x874 = INT32_MAX;
	uint16_t x876 = UINT16_MAX;
	int32_t t119 = 2635275;

    t119 = (x873|(x874>>(x875<=x876)));

    if (t119 != -1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x881 = 1U;
	uint16_t x882 = 1342U;
	uint16_t x883 = 36U;
	volatile uint16_t x884 = 5U;

    t120 = (x881|(x882>>(x883<=x884)));

    if (t120 != 1343) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x897 = INT64_MIN;
	uint64_t x898 = 1970028304122504575LLU;
	int8_t x899 = INT8_MIN;
	static uint64_t t121 = 10497688020007615LLU;

    t121 = (x897|(x898>>(x899<=x900)));

    if (t121 != 10208386188916028095LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	static int16_t x901 = -1;
	uint32_t x902 = UINT32_MAX;
	static volatile int8_t x903 = INT8_MIN;
	int16_t x904 = -1;
	static uint32_t t122 = UINT32_MAX;

    t122 = (x901|(x902>>(x903<=x904)));

    if (t122 != UINT32_MAX) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x905 = INT8_MIN;
	static volatile int8_t x907 = INT8_MIN;
	static int8_t x908 = INT8_MIN;
	volatile int32_t t123 = 29214888;

    t123 = (x905|(x906>>(x907<=x908)));

    if (t123 != -128) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x918 = 1;
	static volatile int16_t x919 = INT16_MIN;
	uint32_t x920 = 61U;
	uint64_t t124 = 493LLU;

    t124 = (x917|(x918>>(x919<=x920)));

    if (t124 != 31653LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int64_t x929 = -447883885935924177LL;
	int32_t x931 = 28;
	int64_t t125 = -5889621272403278LL;

    t125 = (x929|(x930>>(x931<=x932)));

    if (t125 != -447883885935924097LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint32_t x937 = 2138519664U;
	volatile uint32_t x939 = 349729U;
	int8_t x940 = INT8_MIN;
	uint32_t t126 = 12U;

    t126 = (x937|(x938>>(x939<=x940)));

    if (t126 != 2138520688U) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x945 = 4283U;
	volatile uint16_t x946 = UINT16_MAX;
	static int64_t x947 = 64590517463077500LL;
	uint64_t x948 = 19072805488LLU;
	int32_t t127 = -15;

    t127 = (x945|(x946>>(x947<=x948)));

    if (t127 != 65535) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint64_t x950 = 35012576901361542LLU;
	int64_t x951 = INT64_MAX;
	uint64_t t128 = 11538825978LLU;

    t128 = (x949|(x950>>(x951<=x952)));

    if (t128 != 35012602873446303LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x953 = 222578849546LL;
	volatile int8_t x954 = INT8_MAX;
	volatile int8_t x956 = -22;
	volatile int64_t t129 = 81103LL;

    t129 = (x953|(x954>>(x955<=x956)));

    if (t129 != 222578849599LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint64_t x962 = UINT64_MAX;
	int8_t x963 = -1;
	volatile uint8_t x964 = 0U;
	volatile uint64_t t130 = 676552114717368091LLU;

    t130 = (x961|(x962>>(x963<=x964)));

    if (t130 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int8_t x965 = INT8_MIN;
	uint64_t x966 = UINT64_MAX;
	uint32_t x967 = 2195199U;
	int16_t x968 = INT16_MIN;
	volatile uint64_t t131 = UINT64_MAX;

    t131 = (x965|(x966>>(x967<=x968)));

    if (t131 != UINT64_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x973 = INT8_MIN;
	static uint8_t x974 = UINT8_MAX;
	int32_t x975 = -1;
	static int8_t x976 = -1;
	static volatile int32_t t132 = -7;

    t132 = (x973|(x974>>(x975<=x976)));

    if (t132 != -1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint64_t x978 = 2953LLU;
	static uint64_t t133 = 21788814LLU;

    t133 = (x977|(x978>>(x979<=x980)));

    if (t133 != 2147483647LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x983 = -1;
	volatile int64_t x984 = -1LL;

    t134 = (x981|(x982>>(x983<=x984)));

    if (t134 != -24271) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x985 = -1;
	static uint32_t x986 = UINT32_MAX;

    t135 = (x985|(x986>>(x987<=x988)));

    if (t135 != UINT32_MAX) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x997 = INT64_MIN;
	uint16_t x998 = 23991U;
	int64_t x999 = 1LL;
	static volatile int64_t x1000 = INT64_MIN;
	int64_t t136 = -2752409867858432977LL;

    t136 = (x997|(x998>>(x999<=x1000)));

    if (t136 != -9223372036854751817LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x1005 = INT16_MIN;
	volatile int16_t x1006 = INT16_MAX;
	static uint8_t x1008 = 48U;
	int32_t t137 = 111;

    t137 = (x1005|(x1006>>(x1007<=x1008)));

    if (t137 != -16385) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x1013 = INT16_MIN;
	int8_t x1014 = 7;
	volatile int16_t x1015 = INT16_MIN;
	int32_t t138 = 3492;

    t138 = (x1013|(x1014>>(x1015<=x1016)));

    if (t138 != -32761) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x1018 = 6173;
	volatile uint64_t x1019 = 2892088055042382LLU;
	int8_t x1020 = 1;
	int64_t t139 = 674452933137699LL;

    t139 = (x1017|(x1018>>(x1019<=x1020)));

    if (t139 != -9223372036854769635LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint32_t x1037 = UINT32_MAX;
	uint64_t x1038 = 3634703LLU;
	uint64_t x1039 = 14863371895LLU;
	uint8_t x1040 = 95U;

    t140 = (x1037|(x1038>>(x1039<=x1040)));

    if (t140 != 4294967295LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static int32_t x1041 = 1052895854;
	int16_t x1042 = INT16_MAX;
	volatile int32_t t141 = -2029185;

    t141 = (x1041|(x1042>>(x1043<=x1044)));

    if (t141 != 1052901375) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x1081 = INT32_MIN;
	int32_t x1082 = INT32_MAX;
	volatile uint64_t x1083 = 401914155443512867LLU;
	uint16_t x1084 = 619U;
	volatile int32_t t142 = 987;

    t142 = (x1081|(x1082>>(x1083<=x1084)));

    if (t142 != -1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint8_t x1085 = 15U;
	uint8_t x1086 = 6U;
	volatile int64_t x1088 = -1LL;

    t143 = (x1085|(x1086>>(x1087<=x1088)));

    if (t143 != 15) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x1089 = 15U;
	int64_t x1090 = INT64_MAX;
	int64_t x1091 = -6933LL;
	uint64_t x1092 = 2310975214LLU;
	static volatile int64_t t144 = INT64_MAX;

    t144 = (x1089|(x1090>>(x1091<=x1092)));

    if (t144 != INT64_MAX) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int64_t x1094 = INT64_MAX;
	uint16_t x1095 = 136U;
	int16_t x1096 = -1;
	volatile int64_t t145 = 668459922LL;

    t145 = (x1093|(x1094>>(x1095<=x1096)));

    if (t145 != -1LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x1106 = 4;
	uint16_t x1107 = 725U;
	int64_t x1108 = -2145132852LL;
	int64_t t146 = INT64_MAX;

    t146 = (x1105|(x1106>>(x1107<=x1108)));

    if (t146 != INT64_MAX) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x1109 = INT8_MAX;
	int16_t x1110 = 7;
	static uint16_t x1112 = 448U;
	volatile int32_t t147 = 637298;

    t147 = (x1109|(x1110>>(x1111<=x1112)));

    if (t147 != 127) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int64_t x1113 = 37259515LL;
	int8_t x1114 = INT8_MAX;
	static uint8_t x1116 = 2U;
	int64_t t148 = -911699LL;

    t148 = (x1113|(x1114>>(x1115<=x1116)));

    if (t148 != 37259519LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x1119 = INT32_MAX;
	uint64_t x1120 = UINT64_MAX;
	volatile int32_t t149 = -513024823;

    t149 = (x1117|(x1118>>(x1119<=x1120)));

    if (t149 != -2147483521) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x1122 = UINT8_MAX;
	int8_t x1123 = INT8_MIN;
	int16_t x1124 = 100;
	volatile int32_t t150 = INT32_MAX;

    t150 = (x1121|(x1122>>(x1123<=x1124)));

    if (t150 != INT32_MAX) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x1125 = 7457380U;
	static int8_t x1126 = 1;
	static volatile uint16_t x1127 = 1507U;
	volatile uint16_t x1128 = 164U;
	volatile uint32_t t151 = 187U;

    t151 = (x1125|(x1126>>(x1127<=x1128)));

    if (t151 != 7457381U) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x1129 = 6133;
	uint64_t x1130 = 32261708170LLU;
	uint8_t x1131 = UINT8_MAX;
	int16_t x1132 = INT16_MIN;
	volatile uint64_t t152 = 626657375592835079LLU;

    t152 = (x1129|(x1130>>(x1131<=x1132)));

    if (t152 != 32261709823LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x1133 = -2;
	uint32_t x1134 = 41828U;
	volatile int64_t x1135 = INT64_MAX;
	uint64_t x1136 = 0LLU;
	uint32_t t153 = 3905U;

    t153 = (x1133|(x1134>>(x1135<=x1136)));

    if (t153 != 4294967294U) { NG(); } else { ; }
	
}

void f154(void) {
    	static int32_t x1150 = 106;
	uint64_t x1151 = 4412LLU;
	int16_t x1152 = INT16_MIN;

    t154 = (x1149|(x1150>>(x1151<=x1152)));

    if (t154 != UINT64_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x1161 = -1;
	int16_t x1162 = INT16_MAX;
	volatile int8_t x1163 = INT8_MIN;
	int32_t x1164 = INT32_MIN;
	int32_t t155 = -682;

    t155 = (x1161|(x1162>>(x1163<=x1164)));

    if (t155 != -1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x1165 = 0U;
	uint64_t x1166 = UINT64_MAX;
	int64_t x1167 = INT64_MIN;
	static int16_t x1168 = 2487;

    t156 = (x1165|(x1166>>(x1167<=x1168)));

    if (t156 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x1177 = 2U;
	static uint64_t x1178 = 0LLU;
	int8_t x1180 = INT8_MIN;
	static volatile uint64_t t157 = 489832LLU;

    t157 = (x1177|(x1178>>(x1179<=x1180)));

    if (t157 != 2LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int32_t x1185 = -1;
	uint8_t x1186 = UINT8_MAX;
	int32_t x1187 = INT32_MIN;
	int16_t x1188 = 3273;

    t158 = (x1185|(x1186>>(x1187<=x1188)));

    if (t158 != -1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x1190 = UINT64_MAX;
	static uint16_t x1191 = 12618U;
	static volatile int64_t x1192 = INT64_MAX;
	volatile uint64_t t159 = 33042769LLU;

    t159 = (x1189|(x1190>>(x1191<=x1192)));

    if (t159 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x1193 = INT32_MIN;
	static int32_t x1194 = 4049;
	static int16_t x1195 = INT16_MIN;
	static int64_t x1196 = INT64_MIN;
	volatile int32_t t160 = -19665204;

    t160 = (x1193|(x1194>>(x1195<=x1196)));

    if (t160 != -2147479599) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x1205 = INT64_MIN;
	uint16_t x1206 = 3U;
	static int16_t x1208 = 10;
	static volatile int64_t t161 = -186LL;

    t161 = (x1205|(x1206>>(x1207<=x1208)));

    if (t161 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static int64_t x1213 = 7414577LL;
	uint16_t x1216 = 0U;

    t162 = (x1213|(x1214>>(x1215<=x1216)));

    if (t162 != 116616063LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x1225 = 3875;
	static volatile int8_t x1227 = -26;
	volatile uint8_t x1228 = UINT8_MAX;
	int32_t t163 = -83;

    t163 = (x1225|(x1226>>(x1227<=x1228)));

    if (t163 != 16383) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x1230 = 1988U;
	int8_t x1231 = INT8_MIN;
	uint64_t x1232 = 54775124465605LLU;
	int32_t t164 = -2366032;

    t164 = (x1229|(x1230>>(x1231<=x1232)));

    if (t164 != -30780) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x1234 = 33398668;
	int64_t x1235 = INT64_MIN;
	static volatile uint64_t x1236 = 40528409295131920LLU;
	static int32_t t165 = 46860;

    t165 = (x1233|(x1234>>(x1235<=x1236)));

    if (t165 != 33423359) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint16_t x1245 = 0U;
	uint8_t x1246 = UINT8_MAX;
	int8_t x1247 = 1;
	volatile int32_t t166 = -512334629;

    t166 = (x1245|(x1246>>(x1247<=x1248)));

    if (t166 != 127) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int64_t x1249 = -1LL;
	volatile uint32_t x1250 = 69918529U;
	static int8_t x1251 = INT8_MIN;
	int32_t x1252 = -1;
	int64_t t167 = -2307607586251313193LL;

    t167 = (x1249|(x1250>>(x1251<=x1252)));

    if (t167 != -1LL) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int64_t x1253 = INT64_MIN;
	int64_t x1254 = INT64_MAX;
	volatile uint32_t x1255 = 136U;
	uint32_t x1256 = 1197U;

    t168 = (x1253|(x1254>>(x1255<=x1256)));

    if (t168 != -4611686018427387905LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x1269 = 37U;
	uint64_t x1270 = 96042118LLU;
	static int16_t x1271 = -1;
	int8_t x1272 = -1;
	volatile uint64_t t169 = 227294055286062250LLU;

    t169 = (x1269|(x1270>>(x1271<=x1272)));

    if (t169 != 48021095LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x1277 = 217610U;
	uint16_t x1278 = 59U;
	int64_t x1279 = INT64_MAX;
	static uint32_t t170 = 3U;

    t170 = (x1277|(x1278>>(x1279<=x1280)));

    if (t170 != 217659U) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x1281 = INT32_MAX;
	int32_t x1282 = INT32_MAX;
	volatile uint8_t x1283 = UINT8_MAX;
	int32_t x1284 = -1;
	volatile int32_t t171 = INT32_MAX;

    t171 = (x1281|(x1282>>(x1283<=x1284)));

    if (t171 != INT32_MAX) { NG(); } else { ; }
	
}

void f172(void) {
    	static int32_t x1286 = 1117;
	int8_t x1287 = -39;
	static uint16_t x1288 = UINT16_MAX;
	static int32_t t172 = 18294660;

    t172 = (x1285|(x1286>>(x1287<=x1288)));

    if (t172 != 558) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint32_t x1298 = UINT32_MAX;
	int32_t x1299 = INT32_MIN;
	volatile int16_t x1300 = 3905;
	volatile int64_t t173 = -7047942202673LL;

    t173 = (x1297|(x1298>>(x1299<=x1300)));

    if (t173 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x1313 = -1LL;
	int16_t x1314 = 0;
	int32_t x1315 = -151251;
	int64_t x1316 = INT64_MAX;
	int64_t t174 = 14LL;

    t174 = (x1313|(x1314>>(x1315<=x1316)));

    if (t174 != -1LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x1330 = 11LLU;
	int8_t x1331 = INT8_MAX;
	int16_t x1332 = INT16_MAX;
	volatile uint64_t t175 = 2929452745958LLU;

    t175 = (x1329|(x1330>>(x1331<=x1332)));

    if (t175 != 133LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x1333 = 332U;
	static int8_t x1336 = INT8_MIN;
	static int32_t t176 = -448;

    t176 = (x1333|(x1334>>(x1335<=x1336)));

    if (t176 != 2941) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x1337 = UINT32_MAX;
	uint16_t x1338 = UINT16_MAX;
	int64_t x1339 = INT64_MAX;
	int16_t x1340 = INT16_MAX;
	static uint32_t t177 = UINT32_MAX;

    t177 = (x1337|(x1338>>(x1339<=x1340)));

    if (t177 != UINT32_MAX) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint32_t x1342 = UINT32_MAX;
	volatile int64_t x1343 = 593532816984124LL;
	uint32_t x1344 = 21534U;
	uint32_t t178 = UINT32_MAX;

    t178 = (x1341|(x1342>>(x1343<=x1344)));

    if (t178 != UINT32_MAX) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x1345 = INT16_MAX;
	uint32_t x1346 = 117302U;
	volatile int32_t x1347 = INT32_MIN;
	int16_t x1348 = -23;
	volatile uint32_t t179 = 22512U;

    t179 = (x1345|(x1346>>(x1347<=x1348)));

    if (t179 != 65535U) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint8_t x1349 = UINT8_MAX;
	volatile uint64_t x1350 = 287LLU;
	volatile int32_t x1352 = 1188;
	uint64_t t180 = 66373882858730321LLU;

    t180 = (x1349|(x1350>>(x1351<=x1352)));

    if (t180 != 511LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x1353 = INT32_MIN;
	volatile uint32_t x1354 = 15U;
	volatile int32_t x1355 = INT32_MAX;
	int8_t x1356 = -4;
	volatile uint32_t t181 = 5819U;

    t181 = (x1353|(x1354>>(x1355<=x1356)));

    if (t181 != 2147483663U) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x1357 = 17U;
	uint32_t x1358 = 59U;
	volatile int8_t x1359 = -1;
	uint16_t x1360 = 2U;
	volatile uint32_t t182 = 59866U;

    t182 = (x1357|(x1358>>(x1359<=x1360)));

    if (t182 != 29U) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x1369 = -1;
	int8_t x1371 = 15;
	volatile uint32_t x1372 = 0U;

    t183 = (x1369|(x1370>>(x1371<=x1372)));

    if (t183 != -1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int8_t x1386 = 30;
	int64_t x1388 = INT64_MIN;
	static int32_t t184 = 1359;

    t184 = (x1385|(x1386>>(x1387<=x1388)));

    if (t184 != 32767) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x1389 = -1;
	static uint64_t x1390 = 468402899LLU;
	static volatile int32_t x1391 = INT32_MIN;

    t185 = (x1389|(x1390>>(x1391<=x1392)));

    if (t185 != UINT64_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x1397 = INT64_MIN;
	uint8_t x1398 = 10U;
	uint64_t x1399 = UINT64_MAX;
	static uint64_t x1400 = UINT64_MAX;
	volatile int64_t t186 = 16LL;

    t186 = (x1397|(x1398>>(x1399<=x1400)));

    if (t186 != -9223372036854775803LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x1413 = -1;
	int64_t x1414 = 25789041783747LL;
	static int32_t x1415 = INT32_MIN;
	static volatile uint32_t x1416 = 4758133U;
	int64_t t187 = -5934218594868LL;

    t187 = (x1413|(x1414>>(x1415<=x1416)));

    if (t187 != -1LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x1418 = 6;
	volatile uint32_t t188 = 15U;

    t188 = (x1417|(x1418>>(x1419<=x1420)));

    if (t188 != 1423U) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x1421 = INT64_MAX;
	uint16_t x1422 = 869U;
	int64_t x1423 = INT64_MAX;
	volatile int16_t x1424 = -1;
	volatile int64_t t189 = INT64_MAX;

    t189 = (x1421|(x1422>>(x1423<=x1424)));

    if (t189 != INT64_MAX) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x1425 = INT8_MIN;
	volatile int16_t x1427 = 0;
	int32_t x1428 = -1;
	int32_t t190 = 45855090;

    t190 = (x1425|(x1426>>(x1427<=x1428)));

    if (t190 != -1) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x1429 = -1;
	uint8_t x1430 = UINT8_MAX;
	int8_t x1431 = INT8_MIN;
	int8_t x1432 = -26;
	volatile int32_t t191 = 981690;

    t191 = (x1429|(x1430>>(x1431<=x1432)));

    if (t191 != -1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x1437 = 1330051LLU;
	int8_t x1438 = 0;
	int32_t x1439 = 48112884;
	int32_t x1440 = INT32_MIN;
	static volatile uint64_t t192 = 8240514LLU;

    t192 = (x1437|(x1438>>(x1439<=x1440)));

    if (t192 != 1330051LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x1441 = 8973U;
	int8_t x1442 = 0;
	static int8_t x1443 = INT8_MIN;
	int32_t x1444 = -1;
	volatile int32_t t193 = 300059;

    t193 = (x1441|(x1442>>(x1443<=x1444)));

    if (t193 != 8973) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x1450 = 1;
	int32_t x1451 = -1;
	volatile int32_t t194 = 462666161;

    t194 = (x1449|(x1450>>(x1451<=x1452)));

    if (t194 != -1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int16_t x1469 = -1;
	uint8_t x1470 = 1U;
	int32_t t195 = 431;

    t195 = (x1469|(x1470>>(x1471<=x1472)));

    if (t195 != -1) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint64_t x1477 = 284867016905LLU;
	uint8_t x1478 = 0U;
	int8_t x1479 = -1;
	static int64_t x1480 = 3930371807729LL;
	uint64_t t196 = 67640862487286LLU;

    t196 = (x1477|(x1478>>(x1479<=x1480)));

    if (t196 != 284867016905LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x1481 = 1U;
	uint8_t x1482 = 0U;
	volatile int64_t x1483 = -1LL;
	static volatile int64_t x1484 = -314155429187LL;
	int32_t t197 = -59;

    t197 = (x1481|(x1482>>(x1483<=x1484)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x1493 = -22;
	volatile int64_t x1494 = 10367367008089LL;
	static int64_t x1495 = INT64_MAX;
	static int8_t x1496 = -1;
	static volatile int64_t t198 = -182601578978381882LL;

    t198 = (x1493|(x1494>>(x1495<=x1496)));

    if (t198 != -5LL) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int32_t x1501 = INT32_MIN;
	static int64_t x1502 = INT64_MAX;
	static int8_t x1503 = -6;
	int8_t x1504 = INT8_MIN;
	static volatile int64_t t199 = -20LL;

    t199 = (x1501|(x1502>>(x1503<=x1504)));

    if (t199 != -1LL) { NG(); } else { ; }
	
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

