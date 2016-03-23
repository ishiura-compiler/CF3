
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

static int8_t x4 = 1;
uint64_t x30 = 167085LLU;
uint64_t t2 = 268LLU;
static int16_t x36 = INT16_MIN;
int16_t x73 = -1;
int64_t t9 = 0LL;
int64_t x85 = -3LL;
volatile int64_t t10 = 734940LL;
uint64_t x91 = UINT64_MAX;
uint16_t x121 = UINT16_MAX;
static int8_t x123 = 22;
static int32_t x141 = -11;
volatile int64_t x142 = INT64_MAX;
int64_t x143 = INT64_MIN;
int32_t x145 = -1;
int32_t x147 = INT32_MIN;
uint16_t x162 = 2U;
uint32_t x185 = 444965U;
volatile int64_t t22 = -1946732878080938462LL;
uint64_t x217 = 98554250003938626LLU;
int8_t x218 = 2;
volatile int16_t x220 = 15;
static int64_t x224 = INT64_MIN;
volatile int32_t t26 = -102307579;
int8_t x248 = INT8_MIN;
int64_t x249 = 1467240330068LL;
uint64_t x252 = 881263252912555LLU;
uint32_t x253 = 813633U;
uint8_t x258 = UINT8_MAX;
int32_t t32 = -114842448;
uint16_t x277 = 11664U;
uint64_t x278 = 3766470LLU;
uint8_t x282 = 55U;
static uint64_t x285 = 12085129554151LLU;
volatile int64_t x291 = INT64_MIN;
int64_t x300 = -13896438291388890LL;
uint64_t t40 = 1641360102LLU;
static int64_t x321 = -1LL;
int8_t x325 = -1;
volatile int32_t x330 = 1876428;
uint16_t x331 = 1U;
uint8_t x333 = 45U;
volatile uint64_t t45 = 186813068602577604LLU;
volatile uint32_t x361 = 536U;
int16_t x362 = 15;
int16_t x373 = 1;
static volatile int32_t t48 = 15;
int64_t x415 = INT64_MIN;
uint16_t x417 = UINT16_MAX;
int32_t x419 = 404246752;
int8_t x433 = -1;
volatile uint32_t t55 = 1330U;
int16_t x443 = -1;
int32_t x460 = INT32_MAX;
int16_t x463 = -3418;
uint64_t t60 = 622071253LLU;
volatile int32_t t61 = 916756;
uint8_t x477 = 7U;
static int32_t x486 = INT32_MAX;
int32_t t68 = 20383212;
volatile int32_t t69 = 1;
volatile int64_t t72 = -27130496347486664LL;
int8_t x560 = INT8_MIN;
int32_t x561 = INT32_MAX;
int32_t x563 = -1;
volatile uint64_t t74 = 521454LLU;
uint16_t x574 = 71U;
int32_t x605 = 4;
int16_t x608 = INT16_MIN;
uint32_t x622 = 3099U;
int16_t x624 = INT16_MAX;
volatile int8_t x627 = INT8_MAX;
int64_t x633 = INT64_MIN;
uint32_t x698 = UINT32_MAX;
int32_t x700 = 2707;
static int16_t x703 = -1;
uint64_t x708 = 6263764327378879725LLU;
int64_t x718 = INT64_MAX;
uint8_t x741 = 3U;
volatile uint8_t x742 = UINT8_MAX;
volatile int32_t x749 = INT32_MIN;
uint16_t x789 = UINT16_MAX;
int32_t x792 = 183;
int32_t t101 = -437560005;
uint64_t x793 = 16540646LLU;
static uint8_t x794 = UINT8_MAX;
uint16_t x795 = 3U;
volatile int64_t x809 = INT64_MIN;
volatile uint64_t x816 = 2865336997LLU;
volatile int8_t x831 = -26;
uint16_t x850 = UINT16_MAX;
int32_t x851 = -1;
volatile int8_t x865 = -1;
static uint64_t x870 = UINT64_MAX;
int64_t x878 = INT64_MAX;
static uint32_t x879 = 1U;
int8_t x880 = -1;
volatile int32_t t115 = -306155;
volatile uint64_t x923 = UINT64_MAX;
int32_t x940 = 86546;
volatile int32_t t119 = 768091613;
uint64_t x955 = 270LLU;
int32_t t122 = -2103256;
volatile uint16_t x961 = 17090U;
uint64_t t123 = 4906LLU;
static volatile uint8_t x966 = 90U;
uint8_t x969 = 1U;
uint16_t x970 = UINT16_MAX;
volatile uint64_t x972 = UINT64_MAX;
int32_t t125 = 119054725;
int16_t x974 = INT16_MAX;
int32_t t128 = 3;
int32_t x992 = INT32_MIN;
static volatile int32_t x1003 = INT32_MIN;
int8_t x1028 = -1;
int16_t x1029 = 1;
int32_t x1046 = INT32_MAX;
uint16_t x1049 = UINT16_MAX;
volatile uint16_t x1050 = 3U;
int32_t x1051 = INT32_MAX;
int8_t x1052 = INT8_MIN;
int8_t x1053 = 29;
uint64_t x1054 = 5166809549LLU;
int32_t t140 = 1;
volatile int8_t x1081 = INT8_MIN;
int32_t x1101 = INT32_MIN;
static int8_t x1103 = -35;
volatile uint32_t x1126 = UINT32_MAX;
uint16_t x1130 = 7104U;
int8_t x1136 = INT8_MIN;
int32_t t147 = -67453;
int32_t x1149 = -1013844;
int32_t x1150 = 12836889;
static int16_t x1154 = 60;
volatile uint64_t t152 = 34682769831988LLU;
uint64_t x1186 = UINT64_MAX;
int32_t x1188 = -882;
static volatile uint8_t x1192 = UINT8_MAX;
uint16_t x1197 = 2U;
int32_t x1200 = 6965112;
uint8_t x1220 = 4U;
int32_t x1240 = INT32_MIN;
int32_t t161 = -1;
int64_t x1249 = -3554LL;
volatile int64_t x1275 = INT64_MAX;
static int8_t x1303 = INT8_MIN;
uint32_t x1305 = 1612199U;
int32_t x1306 = INT32_MAX;
volatile uint32_t t167 = 134451962U;
int16_t x1320 = INT16_MIN;
int32_t x1323 = INT32_MIN;
int16_t x1326 = INT16_MAX;
volatile uint32_t t171 = 333U;
volatile int64_t x1334 = 5958LL;
static uint32_t x1336 = 1988518U;
volatile int64_t t172 = -3LL;
uint32_t x1338 = 737815U;
int8_t x1339 = INT8_MAX;
uint64_t x1348 = 65957359LLU;
volatile int64_t x1349 = INT64_MAX;
uint8_t x1363 = 1U;
static uint64_t x1365 = 71LLU;
static int32_t x1368 = INT32_MIN;
static int64_t x1377 = -1LL;
volatile uint64_t t182 = 9072838522373868LLU;
uint64_t x1384 = 5674735278LLU;
uint8_t x1396 = UINT8_MAX;
uint64_t x1402 = UINT64_MAX;
static volatile uint64_t t185 = 20023998403998LLU;
static int64_t x1410 = 10LL;
uint32_t x1421 = 509U;
static uint32_t t187 = 722881U;
static uint8_t x1441 = UINT8_MAX;
uint8_t x1444 = 4U;
volatile int32_t t191 = -3114;
volatile int16_t x1460 = INT16_MIN;
uint8_t x1462 = UINT8_MAX;
volatile int8_t x1463 = INT8_MIN;
volatile int32_t t193 = -23;
int64_t x1473 = -21204384LL;
uint16_t x1484 = 31558U;
volatile uint64_t t196 = 253075928LLU;
uint64_t x1508 = 317LLU;
int64_t t197 = -949951498090449516LL;
volatile int32_t x1512 = INT32_MAX;


void f0(void) {
    	int32_t x1 = -431521;
	uint32_t x2 = 10U;
	int64_t x3 = -558956713864573802LL;
	uint32_t t0 = 101U;

    t0 = (x1/(x2>>(x3!=x4)));

    if (t0 != 858907155U) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MAX;
	static uint64_t x6 = UINT64_MAX;
	uint64_t x7 = 48549948182074440LLU;
	int64_t x8 = -1LL;
	volatile uint64_t t1 = 65335009663LLU;

    t1 = (x5/(x6>>(x7!=x8)));

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x29 = 258976U;
	uint64_t x31 = 146156333797691LLU;
	int16_t x32 = INT16_MIN;

    t2 = (x29/(x30>>(x31!=x32)));

    if (t2 != 3LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint64_t x33 = 28387640LLU;
	volatile uint32_t x34 = UINT32_MAX;
	int32_t x35 = INT32_MAX;
	static volatile uint64_t t3 = 149320522712484LLU;

    t3 = (x33/(x34>>(x35!=x36)));

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x37 = INT64_MIN;
	uint8_t x38 = 83U;
	uint16_t x39 = 3U;
	int8_t x40 = INT8_MIN;
	volatile int64_t t4 = 71946168LL;

    t4 = (x37/(x38>>(x39!=x40)));

    if (t4 != -224960293581823800LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x45 = 1018754686;
	static uint64_t x46 = 13LLU;
	int64_t x47 = INT64_MIN;
	static int8_t x48 = -1;
	uint64_t t5 = 277985720668985LLU;

    t5 = (x45/(x46>>(x47!=x48)));

    if (t5 != 169792447LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x53 = INT8_MAX;
	uint16_t x54 = 277U;
	int32_t x55 = INT32_MAX;
	int8_t x56 = INT8_MIN;
	int32_t t6 = 43241;

    t6 = (x53/(x54>>(x55!=x56)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint32_t x65 = 3974U;
	uint64_t x66 = 1072075718960974LLU;
	int64_t x67 = -1LL;
	uint16_t x68 = 16U;
	uint64_t t7 = 3206420LLU;

    t7 = (x65/(x66>>(x67!=x68)));

    if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint32_t x74 = 608258U;
	int32_t x75 = -45;
	volatile int16_t x76 = INT16_MIN;
	volatile uint32_t t8 = 867U;

    t8 = (x73/(x74>>(x75!=x76)));

    if (t8 != 14122U) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint32_t x77 = 21821U;
	int64_t x78 = INT64_MAX;
	int64_t x79 = INT64_MAX;
	uint32_t x80 = 540U;

    t9 = (x77/(x78>>(x79!=x80)));

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x86 = INT16_MAX;
	int8_t x87 = INT8_MAX;
	uint64_t x88 = 5824315174974723065LLU;

    t10 = (x85/(x86>>(x87!=x88)));

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x89 = INT32_MIN;
	uint8_t x90 = 118U;
	int8_t x92 = INT8_MIN;
	int32_t t11 = -76;

    t11 = (x89/(x90>>(x91!=x92)));

    if (t11 != -36398027) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x113 = -2;
	int64_t x114 = 179LL;
	uint8_t x115 = UINT8_MAX;
	int64_t x116 = INT64_MIN;
	int64_t t12 = -937017LL;

    t12 = (x113/(x114>>(x115!=x116)));

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x122 = INT8_MAX;
	int64_t x124 = INT64_MAX;
	volatile int32_t t13 = -44833251;

    t13 = (x121/(x122>>(x123!=x124)));

    if (t13 != 1040) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint8_t x133 = UINT8_MAX;
	uint8_t x134 = UINT8_MAX;
	int8_t x135 = INT8_MIN;
	uint8_t x136 = 122U;
	volatile int32_t t14 = -4458;

    t14 = (x133/(x134>>(x135!=x136)));

    if (t14 != 2) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x137 = 54U;
	volatile uint32_t x138 = UINT32_MAX;
	static volatile int32_t x139 = 10067209;
	static int8_t x140 = 31;
	volatile uint32_t t15 = 1261U;

    t15 = (x137/(x138>>(x139!=x140)));

    if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x144 = INT8_MAX;
	volatile int64_t t16 = 1015343574713188LL;

    t16 = (x141/(x142>>(x143!=x144)));

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x146 = 25494U;
	uint16_t x148 = 20788U;
	static uint32_t t17 = 132505U;

    t17 = (x145/(x146>>(x147!=x148)));

    if (t17 != 336939U) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x161 = -1;
	volatile uint8_t x163 = UINT8_MAX;
	int8_t x164 = 41;
	int32_t t18 = 217983;

    t18 = (x161/(x162>>(x163!=x164)));

    if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x181 = INT32_MAX;
	static volatile uint8_t x182 = 9U;
	int16_t x183 = -350;
	volatile uint16_t x184 = 4U;
	volatile int32_t t19 = -191048359;

    t19 = (x181/(x182>>(x183!=x184)));

    if (t19 != 536870911) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint8_t x186 = 86U;
	volatile int64_t x187 = -1LL;
	int16_t x188 = INT16_MIN;
	uint32_t t20 = 11U;

    t20 = (x185/(x186>>(x187!=x188)));

    if (t20 != 10348U) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile int32_t x193 = INT32_MAX;
	int64_t x194 = INT64_MAX;
	int32_t x195 = -1;
	int32_t x196 = -999;
	volatile int64_t t21 = -560215969LL;

    t21 = (x193/(x194>>(x195!=x196)));

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint32_t x197 = UINT32_MAX;
	int64_t x198 = INT64_MAX;
	int32_t x199 = INT32_MAX;
	static uint32_t x200 = 26275U;

    t22 = (x197/(x198>>(x199!=x200)));

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x213 = 1LLU;
	static int16_t x214 = INT16_MAX;
	int32_t x215 = 14;
	int32_t x216 = INT32_MIN;
	uint64_t t23 = 42548LLU;

    t23 = (x213/(x214>>(x215!=x216)));

    if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x219 = 42U;
	uint64_t t24 = 21323980654331LLU;

    t24 = (x217/(x218>>(x219!=x220)));

    if (t24 != 98554250003938626LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x221 = 2U;
	static uint32_t x222 = 24198U;
	int16_t x223 = -1;
	volatile uint32_t t25 = 638898U;

    t25 = (x221/(x222>>(x223!=x224)));

    if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int32_t x225 = INT32_MIN;
	static int32_t x226 = INT32_MAX;
	uint8_t x227 = UINT8_MAX;
	int8_t x228 = -1;

    t26 = (x225/(x226>>(x227!=x228)));

    if (t26 != -2) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int16_t x233 = -264;
	static volatile uint8_t x234 = 47U;
	int8_t x235 = INT8_MAX;
	volatile uint8_t x236 = 10U;
	static volatile int32_t t27 = -5890;

    t27 = (x233/(x234>>(x235!=x236)));

    if (t27 != -11) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x237 = -1LL;
	uint32_t x238 = UINT32_MAX;
	uint8_t x239 = 2U;
	static int32_t x240 = INT32_MIN;
	volatile int64_t t28 = -64430556237838LL;

    t28 = (x237/(x238>>(x239!=x240)));

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x245 = 71U;
	uint64_t x246 = 25825LLU;
	int8_t x247 = -1;
	volatile uint64_t t29 = 223104LLU;

    t29 = (x245/(x246>>(x247!=x248)));

    if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	static int64_t x250 = 26022LL;
	uint16_t x251 = UINT16_MAX;
	volatile int64_t t30 = 47661576179LL;

    t30 = (x249/(x250>>(x251!=x252)));

    if (t30 != 112769220LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x254 = 1219886354899978767LLU;
	volatile int8_t x255 = INT8_MIN;
	volatile uint16_t x256 = UINT16_MAX;
	static volatile uint64_t t31 = 18LLU;

    t31 = (x253/(x254>>(x255!=x256)));

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint16_t x257 = UINT16_MAX;
	int64_t x259 = INT64_MIN;
	int8_t x260 = 1;

    t32 = (x257/(x258>>(x259!=x260)));

    if (t32 != 516) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x261 = INT8_MIN;
	static volatile uint64_t x262 = 271181502LLU;
	int64_t x263 = -474LL;
	int32_t x264 = 847128;
	volatile uint64_t t33 = 4505232605465944LLU;

    t33 = (x261/(x262>>(x263!=x264)));

    if (t33 != 136047215150LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x279 = 1294413U;
	int64_t x280 = INT64_MIN;
	volatile uint64_t t34 = 5LLU;

    t34 = (x277/(x278>>(x279!=x280)));

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int16_t x281 = -4224;
	volatile int64_t x283 = INT64_MIN;
	uint64_t x284 = 19126014LLU;
	static volatile int32_t t35 = 26992690;

    t35 = (x281/(x282>>(x283!=x284)));

    if (t35 != -156) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint32_t x286 = 155138307U;
	uint32_t x287 = 1229344U;
	uint8_t x288 = UINT8_MAX;
	static volatile uint64_t t36 = 62496100157LLU;

    t36 = (x285/(x286>>(x287!=x288)));

    if (t36 != 155798LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x289 = INT32_MIN;
	uint8_t x290 = 52U;
	volatile int8_t x292 = -1;
	volatile int32_t t37 = -6185;

    t37 = (x289/(x290>>(x291!=x292)));

    if (t37 != -82595524) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x293 = 1LLU;
	int64_t x294 = 465224LL;
	static uint32_t x295 = 2U;
	volatile int8_t x296 = -5;
	uint64_t t38 = 982201216979LLU;

    t38 = (x293/(x294>>(x295!=x296)));

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x297 = INT8_MIN;
	int64_t x298 = INT64_MAX;
	int8_t x299 = INT8_MIN;
	volatile int64_t t39 = -1061642461733382448LL;

    t39 = (x297/(x298>>(x299!=x300)));

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint64_t x313 = 846080LLU;
	static volatile int16_t x314 = INT16_MAX;
	static int8_t x315 = -1;
	int8_t x316 = 26;

    t40 = (x313/(x314>>(x315!=x316)));

    if (t40 != 51LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x322 = INT16_MAX;
	static int16_t x323 = INT16_MIN;
	uint16_t x324 = 1U;
	int64_t t41 = 1853135851393LL;

    t41 = (x321/(x322>>(x323!=x324)));

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x326 = 221990842U;
	uint16_t x327 = 21114U;
	int64_t x328 = -1LL;
	uint32_t t42 = 50272959U;

    t42 = (x325/(x326>>(x327!=x328)));

    if (t42 != 38U) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x329 = INT32_MIN;
	int32_t x332 = INT32_MIN;
	volatile int32_t t43 = -49460017;

    t43 = (x329/(x330>>(x331!=x332)));

    if (t43 != -2288) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x334 = 5U;
	int16_t x335 = -6;
	int32_t x336 = 1;
	volatile int32_t t44 = -31054;

    t44 = (x333/(x334>>(x335!=x336)));

    if (t44 != 22) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint64_t x345 = 68845476061297LLU;
	uint8_t x346 = 17U;
	int64_t x347 = INT64_MAX;
	static volatile int64_t x348 = -1LL;

    t45 = (x345/(x346>>(x347!=x348)));

    if (t45 != 8605684507662LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x363 = INT16_MIN;
	int64_t x364 = 1003407992327678790LL;
	volatile uint32_t t46 = 10048U;

    t46 = (x361/(x362>>(x363!=x364)));

    if (t46 != 76U) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x365 = INT64_MIN;
	static volatile uint64_t x366 = UINT64_MAX;
	int8_t x367 = -1;
	int64_t x368 = INT64_MIN;
	uint64_t t47 = 258645LLU;

    t47 = (x365/(x366>>(x367!=x368)));

    if (t47 != 1LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint8_t x374 = 83U;
	uint64_t x375 = UINT64_MAX;
	uint64_t x376 = 938787676193472315LLU;

    t48 = (x373/(x374>>(x375!=x376)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x389 = -775375041;
	int16_t x390 = INT16_MAX;
	int8_t x391 = 0;
	uint64_t x392 = UINT64_MAX;
	int32_t t49 = -1;

    t49 = (x389/(x390>>(x391!=x392)));

    if (t49 != -47328) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x397 = INT8_MIN;
	uint8_t x398 = UINT8_MAX;
	volatile uint64_t x399 = 4199880883785LLU;
	uint16_t x400 = 0U;
	int32_t t50 = 16222621;

    t50 = (x397/(x398>>(x399!=x400)));

    if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x401 = INT8_MIN;
	uint16_t x402 = 182U;
	volatile int16_t x403 = INT16_MAX;
	uint64_t x404 = 3878288340485665LLU;
	int32_t t51 = -218920279;

    t51 = (x401/(x402>>(x403!=x404)));

    if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x413 = 4U;
	int32_t x414 = 868;
	uint64_t x416 = 3832LLU;
	volatile int32_t t52 = 681;

    t52 = (x413/(x414>>(x415!=x416)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x418 = UINT8_MAX;
	int32_t x420 = -1;
	volatile int32_t t53 = -168;

    t53 = (x417/(x418>>(x419!=x420)));

    if (t53 != 516) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int64_t x429 = -141989015374LL;
	uint8_t x430 = 55U;
	int64_t x431 = -180080096LL;
	volatile int32_t x432 = INT32_MAX;
	int64_t t54 = 1LL;

    t54 = (x429/(x430>>(x431!=x432)));

    if (t54 != -5258852421LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint32_t x434 = 1366051632U;
	static uint32_t x435 = 28U;
	int32_t x436 = 505037;

    t55 = (x433/(x434>>(x435!=x436)));

    if (t55 != 6U) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile int16_t x437 = -1;
	uint32_t x438 = UINT32_MAX;
	int16_t x439 = -1;
	volatile int8_t x440 = -1;
	volatile uint32_t t56 = 10211327U;

    t56 = (x437/(x438>>(x439!=x440)));

    if (t56 != 1U) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x441 = UINT8_MAX;
	static volatile int32_t x442 = INT32_MAX;
	static int16_t x444 = -239;
	int32_t t57 = -7009;

    t57 = (x441/(x442>>(x443!=x444)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x453 = UINT32_MAX;
	int32_t x454 = INT32_MAX;
	static volatile int64_t x455 = INT64_MAX;
	uint64_t x456 = 22LLU;
	volatile uint32_t t58 = 8852U;

    t58 = (x453/(x454>>(x455!=x456)));

    if (t58 != 4U) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x457 = 1;
	uint16_t x458 = 172U;
	uint32_t x459 = UINT32_MAX;
	int32_t t59 = -4990156;

    t59 = (x457/(x458>>(x459!=x460)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x461 = 135784872118725LLU;
	uint16_t x462 = 57U;
	static int64_t x464 = -1LL;

    t60 = (x461/(x462>>(x463!=x464)));

    if (t60 != 4849459718525LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x469 = INT8_MIN;
	volatile uint8_t x470 = UINT8_MAX;
	int64_t x471 = INT64_MIN;
	uint8_t x472 = 0U;

    t61 = (x469/(x470>>(x471!=x472)));

    if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x478 = UINT8_MAX;
	int8_t x479 = INT8_MAX;
	uint64_t x480 = UINT64_MAX;
	static volatile int32_t t62 = -1868;

    t62 = (x477/(x478>>(x479!=x480)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x481 = 1754921LLU;
	uint32_t x482 = UINT32_MAX;
	int32_t x483 = 14440;
	volatile uint64_t x484 = 2LLU;
	volatile uint64_t t63 = 22873832LLU;

    t63 = (x481/(x482>>(x483!=x484)));

    if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x485 = UINT8_MAX;
	uint16_t x487 = 3U;
	int32_t x488 = INT32_MIN;
	int32_t t64 = -1026889;

    t64 = (x485/(x486>>(x487!=x488)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int32_t x497 = INT32_MIN;
	volatile uint8_t x498 = UINT8_MAX;
	volatile int64_t x499 = 13730976705669716LL;
	static int16_t x500 = -1;
	static volatile int32_t t65 = 10336;

    t65 = (x497/(x498>>(x499!=x500)));

    if (t65 != -16909320) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x513 = -1;
	int32_t x514 = 16382064;
	int8_t x515 = INT8_MAX;
	static int64_t x516 = -1LL;
	volatile int32_t t66 = -92809;

    t66 = (x513/(x514>>(x515!=x516)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int64_t x517 = INT64_MIN;
	int16_t x518 = 6;
	int64_t x519 = INT64_MIN;
	uint8_t x520 = 105U;
	static int64_t t67 = 5360880LL;

    t67 = (x517/(x518>>(x519!=x520)));

    if (t67 != -3074457345618258602LL) { NG(); } else { ; }
	
}

void f68(void) {
    	static int32_t x521 = INT32_MAX;
	int16_t x522 = 243;
	int16_t x523 = -1;
	volatile uint32_t x524 = UINT32_MAX;

    t68 = (x521/(x522>>(x523!=x524)));

    if (t68 != 8837381) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x533 = INT8_MIN;
	static int16_t x534 = 206;
	volatile int64_t x535 = -8696563122457752LL;
	volatile uint8_t x536 = UINT8_MAX;

    t69 = (x533/(x534>>(x535!=x536)));

    if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x537 = 7U;
	volatile int32_t x538 = INT32_MAX;
	volatile int32_t x539 = INT32_MIN;
	static int16_t x540 = -6;
	volatile int32_t t70 = 20693597;

    t70 = (x537/(x538>>(x539!=x540)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x541 = UINT16_MAX;
	uint64_t x542 = 90LLU;
	int64_t x543 = 3712254691411LL;
	int16_t x544 = INT16_MIN;
	volatile uint64_t t71 = 5131022LLU;

    t71 = (x541/(x542>>(x543!=x544)));

    if (t71 != 1456LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x549 = INT64_MIN;
	uint32_t x550 = UINT32_MAX;
	volatile int32_t x551 = INT32_MAX;
	uint32_t x552 = UINT32_MAX;

    t72 = (x549/(x550>>(x551!=x552)));

    if (t72 != -4294967298LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x557 = INT64_MAX;
	uint8_t x558 = UINT8_MAX;
	int16_t x559 = 1781;
	int64_t t73 = 481542342104584092LL;

    t73 = (x557/(x558>>(x559!=x560)));

    if (t73 != 72624976668147841LL) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint64_t x562 = 3402169831318012LLU;
	volatile int16_t x564 = -1;

    t74 = (x561/(x562>>(x563!=x564)));

    if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint16_t x565 = 12710U;
	static volatile uint32_t x566 = UINT32_MAX;
	int64_t x567 = INT64_MIN;
	int16_t x568 = INT16_MAX;
	volatile uint32_t t75 = 5U;

    t75 = (x565/(x566>>(x567!=x568)));

    if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int8_t x569 = -1;
	volatile int64_t x570 = 3173174LL;
	uint8_t x571 = UINT8_MAX;
	static int8_t x572 = INT8_MIN;
	int64_t t76 = -34950963746322660LL;

    t76 = (x569/(x570>>(x571!=x572)));

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x573 = 113U;
	volatile int32_t x575 = INT32_MIN;
	uint64_t x576 = 1683854911172273295LLU;
	static volatile uint32_t t77 = 3575U;

    t77 = (x573/(x574>>(x575!=x576)));

    if (t77 != 3U) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint16_t x585 = 1U;
	uint8_t x586 = 2U;
	uint16_t x587 = 10U;
	uint8_t x588 = UINT8_MAX;
	volatile int32_t t78 = -250882;

    t78 = (x585/(x586>>(x587!=x588)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint64_t x601 = 6LLU;
	int64_t x602 = 2393898LL;
	static int32_t x603 = -1;
	static int16_t x604 = INT16_MAX;
	volatile uint64_t t79 = 83813662LLU;

    t79 = (x601/(x602>>(x603!=x604)));

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x606 = 16LLU;
	volatile int8_t x607 = INT8_MIN;
	static uint64_t t80 = 205LLU;

    t80 = (x605/(x606>>(x607!=x608)));

    if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x609 = INT8_MIN;
	volatile uint8_t x610 = 2U;
	uint16_t x611 = 10593U;
	static int8_t x612 = -4;
	volatile int32_t t81 = -127464;

    t81 = (x609/(x610>>(x611!=x612)));

    if (t81 != -128) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x621 = 1U;
	uint16_t x623 = UINT16_MAX;
	volatile uint32_t t82 = 115910204U;

    t82 = (x621/(x622>>(x623!=x624)));

    if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint16_t x625 = UINT16_MAX;
	uint8_t x626 = UINT8_MAX;
	static uint8_t x628 = 52U;
	static volatile int32_t t83 = 1;

    t83 = (x625/(x626>>(x627!=x628)));

    if (t83 != 516) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x629 = INT32_MIN;
	uint16_t x630 = 755U;
	int32_t x631 = INT32_MIN;
	int32_t x632 = INT32_MAX;
	int32_t t84 = 1931087;

    t84 = (x629/(x630>>(x631!=x632)));

    if (t84 != -5696243) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x634 = 54LLU;
	volatile int16_t x635 = -47;
	uint64_t x636 = 69734058LLU;
	uint64_t t85 = 274907531853418LLU;

    t85 = (x633/(x634>>(x635!=x636)));

    if (t85 != 341606371735362066LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x637 = -1;
	static int64_t x638 = 2048262619488LL;
	static int16_t x639 = INT16_MIN;
	uint16_t x640 = UINT16_MAX;
	int64_t t86 = -67103936LL;

    t86 = (x637/(x638>>(x639!=x640)));

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x653 = 5U;
	int8_t x654 = INT8_MAX;
	int16_t x655 = -1043;
	uint16_t x656 = UINT16_MAX;
	uint32_t t87 = 14U;

    t87 = (x653/(x654>>(x655!=x656)));

    if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x669 = INT8_MIN;
	volatile uint64_t x670 = UINT64_MAX;
	static int8_t x671 = INT8_MIN;
	int8_t x672 = -1;
	uint64_t t88 = 46578480840527LLU;

    t88 = (x669/(x670>>(x671!=x672)));

    if (t88 != 1LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x685 = -27;
	volatile uint32_t x686 = 2814U;
	int8_t x687 = INT8_MAX;
	volatile int32_t x688 = -190;
	static volatile uint32_t t89 = 46510U;

    t89 = (x685/(x686>>(x687!=x688)));

    if (t89 != 3052570U) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x697 = UINT64_MAX;
	static volatile int8_t x699 = INT8_MIN;
	volatile uint64_t t90 = 1092LLU;

    t90 = (x697/(x698>>(x699!=x700)));

    if (t90 != 8589934596LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x701 = 0;
	volatile uint32_t x702 = 490U;
	volatile int64_t x704 = -1LL;
	uint32_t t91 = 193596147U;

    t91 = (x701/(x702>>(x703!=x704)));

    if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x705 = 4837U;
	uint32_t x706 = 158U;
	uint32_t x707 = UINT32_MAX;
	uint32_t t92 = 11U;

    t92 = (x705/(x706>>(x707!=x708)));

    if (t92 != 61U) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x709 = INT64_MAX;
	static int8_t x710 = INT8_MAX;
	int16_t x711 = INT16_MAX;
	int64_t x712 = 4490323LL;
	static int64_t t93 = 45915178440691067LL;

    t93 = (x709/(x710>>(x711!=x712)));

    if (t93 != 146402730743726600LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x717 = 23U;
	static int64_t x719 = INT64_MIN;
	static int8_t x720 = -1;
	int64_t t94 = -7LL;

    t94 = (x717/(x718>>(x719!=x720)));

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x725 = INT8_MIN;
	int32_t x726 = INT32_MAX;
	uint32_t x727 = 196320U;
	volatile int64_t x728 = 0LL;
	volatile int32_t t95 = -72;

    t95 = (x725/(x726>>(x727!=x728)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x743 = -1;
	static int32_t x744 = INT32_MIN;
	int32_t t96 = -3240;

    t96 = (x741/(x742>>(x743!=x744)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile uint64_t x750 = 3495166182018LLU;
	int64_t x751 = -1870LL;
	uint64_t x752 = 10LLU;
	static volatile uint64_t t97 = 146067840511968185LLU;

    t97 = (x749/(x750>>(x751!=x752)));

    if (t97 != 10555574LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x761 = -44;
	int32_t x762 = 1598004;
	int32_t x763 = INT32_MAX;
	int64_t x764 = INT64_MIN;
	volatile int32_t t98 = -2148;

    t98 = (x761/(x762>>(x763!=x764)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x777 = INT32_MIN;
	int16_t x778 = INT16_MAX;
	int32_t x779 = -477334578;
	int32_t x780 = -325;
	int32_t t99 = -1555;

    t99 = (x777/(x778>>(x779!=x780)));

    if (t99 != -131080) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile int8_t x781 = 3;
	volatile uint8_t x782 = 24U;
	volatile uint8_t x783 = UINT8_MAX;
	uint8_t x784 = UINT8_MAX;
	int32_t t100 = -43;

    t100 = (x781/(x782>>(x783!=x784)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x790 = 49;
	uint16_t x791 = 0U;

    t101 = (x789/(x790>>(x791!=x792)));

    if (t101 != 2730) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x796 = INT64_MIN;
	volatile uint64_t t102 = 44810LLU;

    t102 = (x793/(x794>>(x795!=x796)));

    if (t102 != 130241LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x797 = -1;
	uint16_t x798 = 3830U;
	int32_t x799 = -254080722;
	uint64_t x800 = 13441391479204081LLU;
	volatile int32_t t103 = 250755302;

    t103 = (x797/(x798>>(x799!=x800)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x801 = -1;
	int16_t x802 = 9348;
	uint8_t x803 = 52U;
	static int16_t x804 = INT16_MIN;
	volatile int32_t t104 = -49021;

    t104 = (x801/(x802>>(x803!=x804)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x810 = UINT16_MAX;
	uint32_t x811 = 6527U;
	int16_t x812 = -1;
	int64_t t105 = 31299807235313645LL;

    t105 = (x809/(x810>>(x811!=x812)));

    if (t105 != -281483566907400LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x813 = 209144160LL;
	static int16_t x814 = 256;
	int16_t x815 = 516;
	volatile int64_t t106 = -8LL;

    t106 = (x813/(x814>>(x815!=x816)));

    if (t106 != 1633938LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x829 = UINT32_MAX;
	volatile uint64_t x830 = 3353875LLU;
	static int32_t x832 = 226123;
	uint64_t t107 = 103194LLU;

    t107 = (x829/(x830>>(x831!=x832)));

    if (t107 != 2561LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x849 = 3097359U;
	int32_t x852 = INT32_MAX;
	uint32_t t108 = 63310U;

    t108 = (x849/(x850>>(x851!=x852)));

    if (t108 != 94U) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint8_t x857 = 13U;
	int32_t x858 = 11;
	uint32_t x859 = 28433093U;
	uint32_t x860 = 1U;
	static volatile int32_t t109 = -369;

    t109 = (x857/(x858>>(x859!=x860)));

    if (t109 != 2) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x866 = UINT32_MAX;
	uint64_t x867 = UINT64_MAX;
	volatile int16_t x868 = 227;
	uint32_t t110 = 29110134U;

    t110 = (x865/(x866>>(x867!=x868)));

    if (t110 != 2U) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int16_t x869 = INT16_MAX;
	static volatile int8_t x871 = 4;
	int32_t x872 = -1;
	uint64_t t111 = 13170775493LLU;

    t111 = (x869/(x870>>(x871!=x872)));

    if (t111 != 0LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int8_t x877 = -5;
	static volatile int64_t t112 = 8142185109LL;

    t112 = (x877/(x878>>(x879!=x880)));

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x889 = INT8_MAX;
	static uint16_t x890 = UINT16_MAX;
	uint16_t x891 = UINT16_MAX;
	volatile uint8_t x892 = UINT8_MAX;
	volatile int32_t t113 = 1;

    t113 = (x889/(x890>>(x891!=x892)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile int8_t x897 = INT8_MAX;
	uint8_t x898 = 27U;
	int16_t x899 = INT16_MAX;
	int8_t x900 = -1;
	int32_t t114 = -530220520;

    t114 = (x897/(x898>>(x899!=x900)));

    if (t114 != 9) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint8_t x913 = UINT8_MAX;
	int8_t x914 = 14;
	int64_t x915 = 62LL;
	volatile uint8_t x916 = 74U;

    t115 = (x913/(x914>>(x915!=x916)));

    if (t115 != 36) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x921 = -1;
	int8_t x922 = INT8_MAX;
	int32_t x924 = INT32_MIN;
	int32_t t116 = 0;

    t116 = (x921/(x922>>(x923!=x924)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x929 = -25970195534LL;
	uint32_t x930 = 238372750U;
	volatile int32_t x931 = INT32_MIN;
	volatile int8_t x932 = INT8_MAX;
	int64_t t117 = 2LL;

    t117 = (x929/(x930>>(x931!=x932)));

    if (t117 != -217LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x937 = 102U;
	static uint32_t x938 = 13U;
	static int8_t x939 = INT8_MAX;
	volatile uint32_t t118 = 1899297U;

    t118 = (x937/(x938>>(x939!=x940)));

    if (t118 != 17U) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x941 = 24;
	static uint8_t x942 = 4U;
	uint16_t x943 = 275U;
	volatile int32_t x944 = INT32_MIN;

    t119 = (x941/(x942>>(x943!=x944)));

    if (t119 != 12) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint16_t x949 = UINT16_MAX;
	static uint64_t x950 = UINT64_MAX;
	uint64_t x951 = 2026750608458260LLU;
	int64_t x952 = -3246044223LL;
	volatile uint64_t t120 = 1237991262173859423LLU;

    t120 = (x949/(x950>>(x951!=x952)));

    if (t120 != 0LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x953 = UINT8_MAX;
	uint32_t x954 = UINT32_MAX;
	int16_t x956 = INT16_MAX;
	static uint32_t t121 = 2132535U;

    t121 = (x953/(x954>>(x955!=x956)));

    if (t121 != 0U) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x957 = INT16_MIN;
	uint16_t x958 = 100U;
	static int8_t x959 = -1;
	int8_t x960 = INT8_MIN;

    t122 = (x957/(x958>>(x959!=x960)));

    if (t122 != -655) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x962 = 180LLU;
	uint16_t x963 = 3U;
	uint16_t x964 = 15261U;

    t123 = (x961/(x962>>(x963!=x964)));

    if (t123 != 189LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x965 = -1;
	int32_t x967 = 52;
	uint64_t x968 = 204162784LLU;
	static volatile int32_t t124 = -993;

    t124 = (x965/(x966>>(x967!=x968)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x971 = -2045945023458LL;

    t125 = (x969/(x970>>(x971!=x972)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x973 = -1;
	int32_t x975 = INT32_MIN;
	uint64_t x976 = 8715742469131LLU;
	int32_t t126 = -1050388;

    t126 = (x973/(x974>>(x975!=x976)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x981 = -1;
	int16_t x982 = 2889;
	uint8_t x983 = UINT8_MAX;
	int32_t x984 = INT32_MAX;
	int32_t t127 = -97;

    t127 = (x981/(x982>>(x983!=x984)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint16_t x985 = 13U;
	uint8_t x986 = 38U;
	int64_t x987 = INT64_MAX;
	volatile int8_t x988 = -1;

    t128 = (x985/(x986>>(x987!=x988)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x989 = 10;
	static uint32_t x990 = 104103U;
	static uint64_t x991 = UINT64_MAX;
	uint32_t t129 = 0U;

    t129 = (x989/(x990>>(x991!=x992)));

    if (t129 != 0U) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x1001 = -1;
	static uint32_t x1002 = 1411444U;
	int8_t x1004 = -4;
	uint32_t t130 = 6181U;

    t130 = (x1001/(x1002>>(x1003!=x1004)));

    if (t130 != 6085U) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x1013 = INT16_MIN;
	int8_t x1014 = 22;
	int16_t x1015 = 3659;
	int8_t x1016 = 1;
	int32_t t131 = 70;

    t131 = (x1013/(x1014>>(x1015!=x1016)));

    if (t131 != -2978) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x1021 = -1LL;
	uint8_t x1022 = UINT8_MAX;
	int32_t x1023 = -54555;
	int16_t x1024 = 184;
	volatile int64_t t132 = 667201LL;

    t132 = (x1021/(x1022>>(x1023!=x1024)));

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x1025 = -1;
	static int64_t x1026 = INT64_MAX;
	volatile int16_t x1027 = -1;
	volatile int64_t t133 = 5140437071893200LL;

    t133 = (x1025/(x1026>>(x1027!=x1028)));

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x1030 = 974375;
	uint16_t x1031 = 239U;
	static int64_t x1032 = -1LL;
	volatile int32_t t134 = -44;

    t134 = (x1029/(x1030>>(x1031!=x1032)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int64_t x1037 = INT64_MIN;
	uint16_t x1038 = UINT16_MAX;
	int16_t x1039 = -1;
	int32_t x1040 = INT32_MIN;
	volatile int64_t t135 = 5607LL;

    t135 = (x1037/(x1038>>(x1039!=x1040)));

    if (t135 != -281483566907400LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile uint64_t x1045 = 143617039694588LLU;
	uint8_t x1047 = 5U;
	volatile int64_t x1048 = 23022589559LL;
	static volatile uint64_t t136 = 585204396LLU;

    t136 = (x1045/(x1046>>(x1047!=x1048)));

    if (t136 != 133753LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t t137 = -6754;

    t137 = (x1049/(x1050>>(x1051!=x1052)));

    if (t137 != 65535) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x1055 = UINT64_MAX;
	int8_t x1056 = -40;
	static uint64_t t138 = 329501479246656205LLU;

    t138 = (x1053/(x1054>>(x1055!=x1056)));

    if (t138 != 0LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x1057 = INT64_MIN;
	int8_t x1058 = 18;
	int8_t x1059 = INT8_MIN;
	int16_t x1060 = INT16_MAX;
	volatile int64_t t139 = 61127737028LL;

    t139 = (x1057/(x1058>>(x1059!=x1060)));

    if (t139 != -1024819115206086200LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x1065 = 24U;
	int16_t x1066 = 48;
	uint64_t x1067 = 4977762764782LLU;
	int8_t x1068 = 51;

    t140 = (x1065/(x1066>>(x1067!=x1068)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x1082 = UINT8_MAX;
	int8_t x1083 = -2;
	static volatile uint32_t x1084 = 133812U;
	volatile int32_t t141 = 1355;

    t141 = (x1081/(x1082>>(x1083!=x1084)));

    if (t141 != -1) { NG(); } else { ; }
	
}

void f142(void) {
    	static int32_t x1089 = INT32_MIN;
	int8_t x1090 = 42;
	static uint16_t x1091 = UINT16_MAX;
	static int8_t x1092 = -4;
	int32_t t142 = 2;

    t142 = (x1089/(x1090>>(x1091!=x1092)));

    if (t142 != -102261126) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x1097 = 7479200U;
	uint64_t x1098 = 3331152330580327LLU;
	static int8_t x1099 = 1;
	int32_t x1100 = INT32_MAX;
	volatile uint64_t t143 = 46730647LLU;

    t143 = (x1097/(x1098>>(x1099!=x1100)));

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint16_t x1102 = UINT16_MAX;
	uint16_t x1104 = UINT16_MAX;
	static int32_t t144 = -4157;

    t144 = (x1101/(x1102>>(x1103!=x1104)));

    if (t144 != -65538) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x1125 = 6;
	int8_t x1127 = INT8_MIN;
	static volatile int8_t x1128 = INT8_MAX;
	uint32_t t145 = 519U;

    t145 = (x1125/(x1126>>(x1127!=x1128)));

    if (t145 != 0U) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x1129 = 0U;
	int32_t x1131 = 52;
	static int32_t x1132 = -1;
	volatile int32_t t146 = -70275622;

    t146 = (x1129/(x1130>>(x1131!=x1132)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x1133 = 2U;
	int32_t x1134 = INT32_MAX;
	int16_t x1135 = INT16_MIN;

    t147 = (x1133/(x1134>>(x1135!=x1136)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x1151 = 1U;
	int8_t x1152 = INT8_MIN;
	volatile int32_t t148 = -223769720;

    t148 = (x1149/(x1150>>(x1151!=x1152)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x1153 = 32670349546331030LL;
	int8_t x1155 = -1;
	uint8_t x1156 = UINT8_MAX;
	int64_t t149 = 45858541360LL;

    t149 = (x1153/(x1154>>(x1155!=x1156)));

    if (t149 != 1089011651544367LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x1157 = INT64_MAX;
	uint64_t x1158 = 11415446LLU;
	volatile int64_t x1159 = INT64_MIN;
	int16_t x1160 = -1;
	static uint64_t t150 = 95298189215026LLU;

    t150 = (x1157/(x1158>>(x1159!=x1160)));

    if (t150 != 1615945980008LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile int16_t x1165 = INT16_MIN;
	static int32_t x1166 = INT32_MAX;
	int16_t x1167 = INT16_MIN;
	static volatile int8_t x1168 = -1;
	volatile int32_t t151 = 905112;

    t151 = (x1165/(x1166>>(x1167!=x1168)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x1173 = UINT64_MAX;
	uint8_t x1174 = 11U;
	int8_t x1175 = -29;
	volatile uint16_t x1176 = 6U;

    t152 = (x1173/(x1174>>(x1175!=x1176)));

    if (t152 != 3689348814741910323LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x1185 = INT64_MAX;
	uint8_t x1187 = UINT8_MAX;
	uint64_t t153 = 395388300LLU;

    t153 = (x1185/(x1186>>(x1187!=x1188)));

    if (t153 != 1LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	static int8_t x1189 = -1;
	uint32_t x1190 = 1135U;
	volatile int8_t x1191 = 2;
	static volatile uint32_t t154 = 12955U;

    t154 = (x1189/(x1190>>(x1191!=x1192)));

    if (t154 != 7574898U) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x1193 = -8;
	volatile uint64_t x1194 = UINT64_MAX;
	volatile uint8_t x1195 = 1U;
	int32_t x1196 = -19469290;
	static volatile uint64_t t155 = 1193246518LLU;

    t155 = (x1193/(x1194>>(x1195!=x1196)));

    if (t155 != 1LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x1198 = 476;
	static int16_t x1199 = INT16_MIN;
	static int32_t t156 = -88901857;

    t156 = (x1197/(x1198>>(x1199!=x1200)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x1205 = 2436987U;
	uint32_t x1206 = 50U;
	static volatile int64_t x1207 = -30LL;
	int64_t x1208 = -1LL;
	uint32_t t157 = 667074U;

    t157 = (x1205/(x1206>>(x1207!=x1208)));

    if (t157 != 97479U) { NG(); } else { ; }
	
}

void f158(void) {
    	static int64_t x1217 = INT64_MAX;
	uint16_t x1218 = 849U;
	uint8_t x1219 = 9U;
	int64_t t158 = -31130127213207384LL;

    t158 = (x1217/(x1218>>(x1219!=x1220)));

    if (t158 != 21753235935978244LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile int16_t x1225 = INT16_MIN;
	uint64_t x1226 = 224443946050911980LLU;
	int16_t x1227 = INT16_MIN;
	int16_t x1228 = INT16_MIN;
	static uint64_t t159 = 7998861035857023042LLU;

    t159 = (x1225/(x1226>>(x1227!=x1228)));

    if (t159 != 82LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int16_t x1237 = -1;
	uint8_t x1238 = UINT8_MAX;
	int64_t x1239 = INT64_MAX;
	int32_t t160 = 118;

    t160 = (x1237/(x1238>>(x1239!=x1240)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x1241 = -1;
	static int32_t x1242 = 7960;
	static int32_t x1243 = INT32_MIN;
	int32_t x1244 = INT32_MAX;

    t161 = (x1241/(x1242>>(x1243!=x1244)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x1250 = 5189677549730LL;
	static int32_t x1251 = INT32_MIN;
	int64_t x1252 = INT64_MAX;
	static int64_t t162 = 181083179322018LL;

    t162 = (x1249/(x1250>>(x1251!=x1252)));

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x1265 = 207456;
	uint32_t x1266 = 40582U;
	int64_t x1267 = -1LL;
	int16_t x1268 = 1788;
	static uint32_t t163 = 29271U;

    t163 = (x1265/(x1266>>(x1267!=x1268)));

    if (t163 != 10U) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int8_t x1273 = -31;
	uint32_t x1274 = 78116022U;
	static uint64_t x1276 = 40679650355823LLU;
	volatile uint32_t t164 = 4165U;

    t164 = (x1273/(x1274>>(x1275!=x1276)));

    if (t164 != 109U) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x1281 = -1;
	int64_t x1282 = 12LL;
	static volatile int16_t x1283 = 4;
	uint64_t x1284 = 50403LLU;
	static int64_t t165 = 510LL;

    t165 = (x1281/(x1282>>(x1283!=x1284)));

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x1301 = -6;
	volatile int16_t x1302 = INT16_MAX;
	int8_t x1304 = -17;
	static volatile int32_t t166 = 8888386;

    t166 = (x1301/(x1302>>(x1303!=x1304)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x1307 = 7;
	int32_t x1308 = -134867711;

    t167 = (x1305/(x1306>>(x1307!=x1308)));

    if (t167 != 0U) { NG(); } else { ; }
	
}

void f168(void) {
    	static int64_t x1313 = 2682584416760LL;
	volatile int8_t x1314 = INT8_MAX;
	uint8_t x1315 = UINT8_MAX;
	static int32_t x1316 = 29899;
	static int64_t t168 = -50552092LL;

    t168 = (x1313/(x1314>>(x1315!=x1316)));

    if (t168 != 42580705027LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x1317 = -27;
	static int32_t x1318 = INT32_MAX;
	int16_t x1319 = 7273;
	static volatile int32_t t169 = -27931856;

    t169 = (x1317/(x1318>>(x1319!=x1320)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x1321 = 0;
	int16_t x1322 = INT16_MAX;
	uint8_t x1324 = 2U;
	volatile int32_t t170 = 6;

    t170 = (x1321/(x1322>>(x1323!=x1324)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x1325 = UINT32_MAX;
	volatile int8_t x1327 = -1;
	int8_t x1328 = INT8_MIN;

    t171 = (x1325/(x1326>>(x1327!=x1328)));

    if (t171 != 262160U) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x1333 = 18191U;
	int16_t x1335 = 1217;

    t172 = (x1333/(x1334>>(x1335!=x1336)));

    if (t172 != 6LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x1337 = -768252597747052LL;
	volatile int8_t x1340 = INT8_MAX;
	static volatile int64_t t173 = -807LL;

    t173 = (x1337/(x1338>>(x1339!=x1340)));

    if (t173 != -1041253698LL) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint8_t x1341 = 7U;
	volatile int64_t x1342 = INT64_MAX;
	int16_t x1343 = -20;
	int8_t x1344 = 59;
	int64_t t174 = 921844LL;

    t174 = (x1341/(x1342>>(x1343!=x1344)));

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x1345 = UINT16_MAX;
	int8_t x1346 = INT8_MAX;
	int8_t x1347 = INT8_MIN;
	static int32_t t175 = 3822204;

    t175 = (x1345/(x1346>>(x1347!=x1348)));

    if (t175 != 1040) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int32_t x1350 = INT32_MAX;
	int32_t x1351 = INT32_MIN;
	volatile int64_t x1352 = INT64_MIN;
	volatile int64_t t176 = 1676322881797887825LL;

    t176 = (x1349/(x1350>>(x1351!=x1352)));

    if (t176 != 8589934600LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x1353 = 40863599LL;
	static volatile int64_t x1354 = 17649532232832LL;
	int16_t x1355 = -1;
	uint32_t x1356 = UINT32_MAX;
	static int64_t t177 = -3579325504534767LL;

    t177 = (x1353/(x1354>>(x1355!=x1356)));

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x1357 = INT64_MIN;
	volatile int16_t x1358 = 5979;
	volatile uint32_t x1359 = 31U;
	uint16_t x1360 = 2151U;
	static volatile int64_t t178 = 249718973946210835LL;

    t178 = (x1357/(x1358>>(x1359!=x1360)));

    if (t178 != -3085771842373628LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint64_t x1361 = 14LLU;
	int64_t x1362 = INT64_MAX;
	volatile int8_t x1364 = -26;
	uint64_t t179 = 5706627297647026LLU;

    t179 = (x1361/(x1362>>(x1363!=x1364)));

    if (t179 != 0LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint64_t x1366 = 144LLU;
	int64_t x1367 = INT64_MIN;
	volatile uint64_t t180 = 11LLU;

    t180 = (x1365/(x1366>>(x1367!=x1368)));

    if (t180 != 0LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	static int64_t x1369 = 24773321991887LL;
	static uint64_t x1370 = UINT64_MAX;
	uint32_t x1371 = UINT32_MAX;
	uint64_t x1372 = UINT64_MAX;
	uint64_t t181 = 10LLU;

    t181 = (x1369/(x1370>>(x1371!=x1372)));

    if (t181 != 0LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x1378 = UINT64_MAX;
	int8_t x1379 = -6;
	uint8_t x1380 = 6U;

    t182 = (x1377/(x1378>>(x1379!=x1380)));

    if (t182 != 2LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x1381 = -1;
	volatile int64_t x1382 = INT64_MAX;
	volatile int8_t x1383 = INT8_MIN;
	volatile int64_t t183 = 142LL;

    t183 = (x1381/(x1382>>(x1383!=x1384)));

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint64_t x1393 = 386836365686169LLU;
	static uint64_t x1394 = UINT64_MAX;
	static int16_t x1395 = INT16_MIN;
	volatile uint64_t t184 = 468LLU;

    t184 = (x1393/(x1394>>(x1395!=x1396)));

    if (t184 != 0LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x1401 = INT64_MIN;
	int64_t x1403 = INT64_MAX;
	int32_t x1404 = 256074;

    t185 = (x1401/(x1402>>(x1403!=x1404)));

    if (t185 != 1LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x1409 = UINT8_MAX;
	int64_t x1411 = 759823229LL;
	volatile uint64_t x1412 = 21170646574850LLU;
	volatile int64_t t186 = 128781490555808490LL;

    t186 = (x1409/(x1410>>(x1411!=x1412)));

    if (t186 != 51LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x1422 = UINT8_MAX;
	static int64_t x1423 = 7874005LL;
	volatile uint16_t x1424 = 548U;

    t187 = (x1421/(x1422>>(x1423!=x1424)));

    if (t187 != 4U) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x1425 = -1;
	uint32_t x1426 = UINT32_MAX;
	static int32_t x1427 = -1;
	volatile int16_t x1428 = 2256;
	volatile uint32_t t188 = 146811U;

    t188 = (x1425/(x1426>>(x1427!=x1428)));

    if (t188 != 2U) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint64_t x1429 = UINT64_MAX;
	uint32_t x1430 = UINT32_MAX;
	int8_t x1431 = INT8_MIN;
	uint32_t x1432 = 12857733U;
	uint64_t t189 = 29152680339546LLU;

    t189 = (x1429/(x1430>>(x1431!=x1432)));

    if (t189 != 8589934596LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint64_t x1442 = 71329937LLU;
	uint32_t x1443 = 39624270U;
	static volatile uint64_t t190 = 48430494844492LLU;

    t190 = (x1441/(x1442>>(x1443!=x1444)));

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int16_t x1445 = -68;
	static uint8_t x1446 = UINT8_MAX;
	volatile int16_t x1447 = -11;
	int64_t x1448 = 3LL;

    t191 = (x1445/(x1446>>(x1447!=x1448)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x1457 = -920401790267LL;
	static uint16_t x1458 = 5387U;
	volatile int16_t x1459 = -1;
	volatile int64_t t192 = 52946025LL;

    t192 = (x1457/(x1458>>(x1459!=x1460)));

    if (t192 != -341775636LL) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint16_t x1461 = 12U;
	int64_t x1464 = 3534LL;

    t193 = (x1461/(x1462>>(x1463!=x1464)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x1469 = 7568U;
	uint16_t x1470 = UINT16_MAX;
	int32_t x1471 = 1377;
	int16_t x1472 = -1;
	uint32_t t194 = 362U;

    t194 = (x1469/(x1470>>(x1471!=x1472)));

    if (t194 != 0U) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint64_t x1474 = 943301246LLU;
	int64_t x1475 = INT64_MIN;
	int8_t x1476 = INT8_MIN;
	uint64_t t195 = 3015027286327096LLU;

    t195 = (x1473/(x1474>>(x1475!=x1476)));

    if (t195 != 39111035105LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x1481 = INT16_MAX;
	uint64_t x1482 = 918897661884112530LLU;
	uint16_t x1483 = 1725U;

    t196 = (x1481/(x1482>>(x1483!=x1484)));

    if (t196 != 0LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int64_t x1505 = -1LL;
	volatile uint32_t x1506 = UINT32_MAX;
	volatile int64_t x1507 = INT64_MAX;

    t197 = (x1505/(x1506>>(x1507!=x1508)));

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint64_t x1509 = 1467400LLU;
	static uint32_t x1510 = UINT32_MAX;
	volatile int64_t x1511 = INT64_MIN;
	static uint64_t t198 = 12527046LLU;

    t198 = (x1509/(x1510>>(x1511!=x1512)));

    if (t198 != 0LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x1513 = INT8_MAX;
	int32_t x1514 = INT32_MAX;
	int16_t x1515 = 9722;
	int16_t x1516 = INT16_MIN;
	volatile int32_t t199 = -11152751;

    t199 = (x1513/(x1514>>(x1515!=x1516)));

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

