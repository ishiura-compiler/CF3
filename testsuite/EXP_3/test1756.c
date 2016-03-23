
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

uint16_t x16 = 0U;
volatile uint32_t t2 = 42U;
int16_t x23 = 76;
int16_t x24 = 139;
int64_t x25 = INT64_MAX;
uint64_t x26 = 447LLU;
uint64_t t4 = 1LLU;
uint16_t x44 = UINT16_MAX;
volatile int16_t x78 = INT16_MIN;
int16_t x81 = INT16_MIN;
uint32_t x96 = 660U;
volatile int32_t t14 = 5;
static volatile uint16_t x114 = UINT16_MAX;
volatile uint32_t t16 = 32404392U;
volatile int8_t x132 = INT8_MIN;
uint64_t t19 = 4LLU;
int16_t x140 = 90;
uint32_t x164 = 1896U;
int64_t x172 = 19609264848LL;
int64_t x178 = INT64_MAX;
int64_t x180 = INT64_MIN;
int32_t t27 = -5;
uint8_t x186 = UINT8_MAX;
volatile uint32_t x188 = 11410U;
volatile int32_t t29 = -25;
static uint64_t x210 = 1668817120531LLU;
volatile uint8_t x211 = 36U;
int8_t x218 = INT8_MIN;
volatile int32_t x226 = -1;
volatile int16_t x234 = 7381;
int64_t x250 = -85153993823845325LL;
static int8_t x261 = INT8_MIN;
volatile uint64_t x284 = 486749292228267249LLU;
volatile uint64_t t40 = 4452697069960601LLU;
int32_t x305 = 1501;
int16_t x308 = INT16_MAX;
volatile uint64_t t43 = 576LLU;
uint16_t x320 = 3U;
volatile int64_t x327 = INT64_MIN;
uint64_t x334 = UINT64_MAX;
int8_t x337 = INT8_MIN;
static int32_t x349 = -4;
int32_t t50 = -242;
volatile uint32_t x363 = UINT32_MAX;
static uint64_t x365 = UINT64_MAX;
int32_t x368 = -1;
int16_t x373 = INT16_MIN;
uint64_t t53 = 2898896470343845LLU;
volatile int64_t t54 = 9279448726001702LL;
volatile uint32_t x406 = 416899639U;
volatile uint32_t x408 = 20709U;
int16_t x420 = INT16_MAX;
int16_t x425 = -1;
int32_t x427 = -1;
static int64_t x432 = INT64_MIN;
uint64_t t61 = 5658844LLU;
uint8_t x461 = UINT8_MAX;
volatile uint64_t t65 = 5LLU;
volatile int64_t t68 = -32870LL;
volatile int16_t x505 = 0;
int8_t x516 = INT8_MIN;
static volatile uint64_t x534 = 4462890221078088907LLU;
static uint64_t t72 = 7497402065731834LLU;
int64_t x537 = INT64_MIN;
static uint64_t x553 = 3141486492812091187LLU;
int32_t x554 = INT32_MAX;
uint64_t t77 = 7395LLU;
static int8_t x565 = 49;
int8_t x567 = INT8_MAX;
static uint64_t x573 = 31908629315LLU;
uint64_t x574 = UINT64_MAX;
int64_t x602 = 775624LL;
volatile int32_t x610 = 305;
int32_t t85 = -1;
int8_t x668 = INT8_MIN;
uint8_t x669 = 0U;
volatile int32_t x687 = INT32_MIN;
static int8_t x689 = INT8_MAX;
uint16_t x693 = 2U;
int16_t x707 = INT16_MAX;
int64_t x710 = -1LL;
int8_t x712 = -1;
static int32_t x728 = 21459839;
uint16_t x733 = UINT16_MAX;
uint64_t x734 = 1141549520498128791LLU;
static uint32_t x741 = 261009U;
volatile uint32_t t105 = 489663960U;
int16_t x746 = INT16_MIN;
int32_t x775 = INT32_MIN;
volatile int16_t x777 = INT16_MIN;
int64_t x780 = -1LL;
uint64_t t111 = 980905603089215166LLU;
int16_t x798 = INT16_MIN;
uint32_t x802 = UINT32_MAX;
static int8_t x803 = 6;
static int32_t x804 = INT32_MIN;
volatile int32_t t117 = 368269491;
static int16_t x826 = INT16_MAX;
int8_t x827 = -1;
uint8_t x837 = 63U;
static int64_t x838 = 168802307790248435LL;
int8_t x843 = INT8_MIN;
uint64_t t122 = 52504935734365LLU;
uint64_t x866 = UINT64_MAX;
static uint64_t x869 = 26713671LLU;
uint32_t x885 = UINT32_MAX;
int16_t x886 = INT16_MAX;
int64_t x897 = -1LL;
int64_t x900 = 1006LL;
int64_t x901 = INT64_MIN;
int32_t x903 = 645932119;
volatile int64_t t132 = 4011384253769749LL;
static volatile int8_t x927 = INT8_MIN;
uint32_t x940 = 5574U;
uint64_t x961 = 195190534LLU;
uint16_t x962 = UINT16_MAX;
volatile uint16_t x973 = UINT16_MAX;
uint32_t x975 = 758752U;
volatile int32_t t139 = -63049453;
int16_t x977 = INT16_MAX;
static int8_t x1003 = INT8_MIN;
uint64_t x1004 = 104852815591937192LLU;
static volatile int64_t x1024 = 101558486122130LL;
int16_t x1030 = -1;
int32_t x1032 = INT32_MIN;
int16_t x1034 = INT16_MIN;
int8_t x1036 = INT8_MIN;
static volatile int32_t t147 = 7436032;
int8_t x1040 = 10;
int32_t x1055 = INT32_MIN;
static int16_t x1056 = -1;
int16_t x1058 = INT16_MAX;
int8_t x1059 = -1;
volatile int8_t x1078 = INT8_MIN;
static uint16_t x1081 = 13475U;
int32_t x1090 = INT32_MIN;
int32_t x1094 = INT32_MAX;
int32_t t157 = -99336;
static uint32_t x1103 = 2453495U;
volatile int32_t t159 = 69224654;
int8_t x1113 = INT8_MIN;
uint64_t x1118 = 16214686497LLU;
int8_t x1121 = INT8_MAX;
uint8_t x1123 = UINT8_MAX;
uint32_t t162 = 73132U;
uint64_t x1125 = 9239095703LLU;
int64_t x1126 = -1LL;
volatile uint64_t t163 = 496503208211681818LLU;
int32_t x1129 = 738592515;
uint32_t t165 = 17396956U;
volatile uint16_t x1172 = UINT16_MAX;
uint64_t x1176 = UINT64_MAX;
static int64_t x1182 = -86533LL;
int32_t t170 = -2;
volatile int64_t x1207 = -317914LL;
static int8_t x1222 = 1;
volatile int32_t t174 = -472062341;
uint8_t x1227 = 15U;
volatile uint32_t t175 = 59U;
volatile int32_t t179 = -209;
uint16_t x1250 = UINT16_MAX;
static uint64_t x1251 = 7226LLU;
uint32_t x1253 = UINT32_MAX;
int8_t x1255 = -14;
int64_t x1256 = -1LL;
int8_t x1259 = INT8_MIN;
int32_t x1260 = INT32_MIN;
int32_t x1261 = INT32_MIN;
static uint32_t x1262 = 2747U;
uint32_t t183 = 32U;
static uint32_t x1277 = 13U;
int8_t x1305 = -1;
int32_t t189 = 0;
int64_t x1318 = -139820LL;
int64_t x1331 = -1LL;
volatile int64_t x1337 = INT64_MAX;
int32_t x1339 = -73128606;
uint64_t x1345 = 3217859LLU;
static volatile int32_t x1351 = -1;
int16_t x1353 = -1529;
int32_t x1354 = -970277;
volatile int32_t t198 = 674186;


void f0(void) {
    	int32_t x5 = INT32_MIN;
	int16_t x6 = -155;
	int8_t x7 = INT8_MIN;
	int8_t x8 = -1;
	static volatile int32_t t0 = 116;

    t0 = ((x5^x6)<<(x7>x8));

    if (t0 != 2147483493) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint32_t x9 = UINT32_MAX;
	int32_t x10 = INT32_MIN;
	static volatile int64_t x11 = -1LL;
	int64_t x12 = INT64_MIN;
	static volatile uint32_t t1 = 28100U;

    t1 = ((x9^x10)<<(x11>x12));

    if (t1 != 4294967294U) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x13 = -1;
	static uint32_t x14 = 8441U;
	int64_t x15 = INT64_MIN;

    t2 = ((x13^x14)<<(x15>x16));

    if (t2 != 4294958854U) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x21 = 0;
	static int64_t x22 = INT64_MAX;
	volatile int64_t t3 = INT64_MAX;

    t3 = ((x21^x22)<<(x23>x24));

    if (t3 != INT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int32_t x27 = INT32_MAX;
	int32_t x28 = -1061154;

    t4 = ((x25^x26)<<(x27>x28));

    if (t4 != 18446744073709550720LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x29 = -1LL;
	uint64_t x30 = 521651667LLU;
	int16_t x31 = INT16_MIN;
	uint64_t x32 = UINT64_MAX;
	static uint64_t t5 = 9760894738500LLU;

    t5 = ((x29^x30)<<(x31>x32));

    if (t5 != 18446744073187899948LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x33 = -91974;
	int32_t x34 = -197343973;
	int8_t x35 = -1;
	uint8_t x36 = 59U;
	int32_t t6 = 492141667;

    t6 = ((x33^x34)<<(x35>x36));

    if (t6 != 197287329) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x41 = INT16_MIN;
	int8_t x42 = -1;
	uint64_t x43 = 38529212LLU;
	static int32_t t7 = -448228;

    t7 = ((x41^x42)<<(x43>x44));

    if (t7 != 65534) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x49 = UINT16_MAX;
	int8_t x50 = INT8_MAX;
	uint16_t x51 = 773U;
	uint8_t x52 = 1U;
	int32_t t8 = 2;

    t8 = ((x49^x50)<<(x51>x52));

    if (t8 != 130816) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x57 = -67;
	volatile int64_t x58 = INT64_MIN;
	int64_t x59 = -1LL;
	int32_t x60 = INT32_MAX;
	int64_t t9 = 0LL;

    t9 = ((x57^x58)<<(x59>x60));

    if (t9 != 9223372036854775741LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x65 = 428230418LLU;
	volatile uint8_t x66 = 6U;
	int64_t x67 = -1LL;
	static uint16_t x68 = 3541U;
	volatile uint64_t t10 = 4961LLU;

    t10 = ((x65^x66)<<(x67>x68));

    if (t10 != 428230420LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x77 = INT8_MIN;
	uint32_t x79 = 369U;
	int8_t x80 = INT8_MIN;
	static volatile int32_t t11 = 230;

    t11 = ((x77^x78)<<(x79>x80));

    if (t11 != 32640) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x82 = -1;
	volatile int16_t x83 = INT16_MIN;
	int16_t x84 = INT16_MIN;
	volatile int32_t t12 = -7377;

    t12 = ((x81^x82)<<(x83>x84));

    if (t12 != 32767) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x93 = INT16_MIN;
	uint64_t x94 = 2298165628607462618LLU;
	volatile int8_t x95 = INT8_MAX;
	volatile uint64_t t13 = 28659703953453LLU;

    t13 = ((x93^x94)<<(x95>x96));

    if (t13 != 16148578445102120154LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x101 = INT16_MIN;
	int8_t x102 = INT8_MIN;
	int16_t x103 = INT16_MIN;
	int64_t x104 = INT64_MIN;

    t14 = ((x101^x102)<<(x103>x104));

    if (t14 != 65280) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile uint64_t x109 = UINT64_MAX;
	uint16_t x110 = 10U;
	volatile uint64_t x111 = UINT64_MAX;
	int16_t x112 = -1;
	uint64_t t15 = 270333351398LLU;

    t15 = ((x109^x110)<<(x111>x112));

    if (t15 != 18446744073709551605LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint32_t x113 = UINT32_MAX;
	int8_t x115 = INT8_MIN;
	static int64_t x116 = INT64_MIN;

    t16 = ((x113^x114)<<(x115>x116));

    if (t16 != 4294836224U) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x125 = 131U;
	volatile int16_t x126 = INT16_MAX;
	static int32_t x127 = INT32_MAX;
	int8_t x128 = 22;
	int32_t t17 = -339873;

    t17 = ((x125^x126)<<(x127>x128));

    if (t17 != 65272) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile uint64_t x129 = 22465612240525592LLU;
	uint8_t x130 = UINT8_MAX;
	uint8_t x131 = 0U;
	static volatile uint64_t t18 = 14LLU;

    t18 = ((x129^x130)<<(x131>x132));

    if (t18 != 44931224481051598LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x133 = 469U;
	uint64_t x134 = 0LLU;
	int64_t x135 = INT64_MAX;
	int32_t x136 = INT32_MIN;

    t19 = ((x133^x134)<<(x135>x136));

    if (t19 != 938LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int32_t x137 = -335302062;
	int16_t x138 = -1;
	static int64_t x139 = INT64_MIN;
	int32_t t20 = -921;

    t20 = ((x137^x138)<<(x139>x140));

    if (t20 != 335302061) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint8_t x149 = 0U;
	int16_t x150 = 58;
	int64_t x151 = INT64_MIN;
	int32_t x152 = INT32_MIN;
	static volatile int32_t t21 = -209;

    t21 = ((x149^x150)<<(x151>x152));

    if (t21 != 58) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x157 = 31U;
	uint16_t x158 = UINT16_MAX;
	static int64_t x159 = INT64_MIN;
	volatile int8_t x160 = INT8_MIN;
	static volatile int32_t t22 = -174456385;

    t22 = ((x157^x158)<<(x159>x160));

    if (t22 != 65504) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x161 = UINT64_MAX;
	static uint32_t x162 = UINT32_MAX;
	int16_t x163 = INT16_MIN;
	static uint64_t t23 = 7259446LLU;

    t23 = ((x161^x162)<<(x163>x164));

    if (t23 != 18446744065119617024LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x169 = -112;
	int8_t x170 = INT8_MIN;
	static int32_t x171 = -1;
	volatile int32_t t24 = -46804;

    t24 = ((x169^x170)<<(x171>x172));

    if (t24 != 16) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x173 = INT16_MIN;
	volatile int8_t x174 = -19;
	int8_t x175 = -1;
	uint8_t x176 = 31U;
	volatile int32_t t25 = -9916097;

    t25 = ((x173^x174)<<(x175>x176));

    if (t25 != 32749) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x177 = 116178461423703LLU;
	uint8_t x179 = 5U;
	uint64_t t26 = 4778046260637LLU;

    t26 = ((x177^x178)<<(x179>x180));

    if (t26 != 18446511716786704208LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static int8_t x181 = -1;
	volatile int16_t x182 = -1;
	int64_t x183 = INT64_MIN;
	static int64_t x184 = INT64_MAX;

    t27 = ((x181^x182)<<(x183>x184));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x185 = UINT32_MAX;
	int8_t x187 = INT8_MIN;
	uint32_t t28 = 1011U;

    t28 = ((x185^x186)<<(x187>x188));

    if (t28 != 4294966784U) { NG(); } else { ; }
	
}

void f29(void) {
    	static int8_t x189 = -1;
	static int16_t x190 = INT16_MIN;
	static int64_t x191 = 3186520250112LL;
	int16_t x192 = 23;

    t29 = ((x189^x190)<<(x191>x192));

    if (t29 != 65534) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x197 = INT8_MIN;
	int16_t x198 = -97;
	int64_t x199 = -1LL;
	static int16_t x200 = INT16_MAX;
	static volatile int32_t t30 = 2;

    t30 = ((x197^x198)<<(x199>x200));

    if (t30 != 31) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x209 = 402;
	int8_t x212 = INT8_MAX;
	volatile uint64_t t31 = 673LLU;

    t31 = ((x209^x210)<<(x211>x212));

    if (t31 != 1668817120385LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x217 = INT8_MIN;
	volatile uint32_t x219 = 5170U;
	int64_t x220 = 5744224LL;
	volatile int32_t t32 = 0;

    t32 = ((x217^x218)<<(x219>x220));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x221 = -1;
	uint64_t x222 = 3436952535LLU;
	static int16_t x223 = -2016;
	volatile uint64_t x224 = UINT64_MAX;
	uint64_t t33 = 494508LLU;

    t33 = ((x221^x222)<<(x223>x224));

    if (t33 != 18446744070272599080LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x225 = UINT64_MAX;
	uint32_t x227 = UINT32_MAX;
	int64_t x228 = INT64_MIN;
	volatile uint64_t t34 = 16066947LLU;

    t34 = ((x225^x226)<<(x227>x228));

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint8_t x233 = 7U;
	uint8_t x235 = 1U;
	int64_t x236 = INT64_MIN;
	volatile int32_t t35 = -337330;

    t35 = ((x233^x234)<<(x235>x236));

    if (t35 != 14756) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint16_t x245 = UINT16_MAX;
	uint16_t x246 = 14U;
	uint64_t x247 = 23181881978LLU;
	static volatile uint64_t x248 = 10327048733LLU;
	static int32_t t36 = -1548;

    t36 = ((x245^x246)<<(x247>x248));

    if (t36 != 131042) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x249 = -1;
	volatile uint8_t x251 = 32U;
	int32_t x252 = INT32_MIN;
	volatile int64_t t37 = -97623350624915LL;

    t37 = ((x249^x250)<<(x251>x252));

    if (t37 != 170307987647690648LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x262 = 25172673U;
	static int32_t x263 = -1;
	static int16_t x264 = INT16_MIN;
	uint32_t t38 = 327161U;

    t38 = ((x261^x262)<<(x263>x264));

    if (t38 != 4244621954U) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x273 = 3;
	int32_t x274 = INT32_MAX;
	uint32_t x275 = 30U;
	uint64_t x276 = 155298834458628062LLU;
	int32_t t39 = -765;

    t39 = ((x273^x274)<<(x275>x276));

    if (t39 != 2147483644) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x281 = UINT64_MAX;
	int8_t x282 = 27;
	uint32_t x283 = 175391668U;

    t40 = ((x281^x282)<<(x283>x284));

    if (t40 != 18446744073709551588LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x285 = INT64_MIN;
	static int32_t x286 = INT32_MIN;
	int64_t x287 = -3250LL;
	static int32_t x288 = 859;
	int64_t t41 = -2614729553031637LL;

    t41 = ((x285^x286)<<(x287>x288));

    if (t41 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint64_t x297 = UINT64_MAX;
	int8_t x298 = -6;
	uint8_t x299 = 0U;
	int32_t x300 = 132197934;
	static volatile uint64_t t42 = 441137309981768766LLU;

    t42 = ((x297^x298)<<(x299>x300));

    if (t42 != 5LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint64_t x306 = UINT64_MAX;
	int64_t x307 = -7973835197683LL;

    t43 = ((x305^x306)<<(x307>x308));

    if (t43 != 18446744073709550114LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x317 = INT8_MIN;
	static uint64_t x318 = 1LLU;
	uint8_t x319 = 78U;
	uint64_t t44 = 6640235LLU;

    t44 = ((x317^x318)<<(x319>x320));

    if (t44 != 18446744073709551362LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x321 = -1;
	static int32_t x322 = INT32_MIN;
	uint8_t x323 = 116U;
	static int8_t x324 = INT8_MAX;
	volatile int32_t t45 = INT32_MAX;

    t45 = ((x321^x322)<<(x323>x324));

    if (t45 != INT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x325 = UINT64_MAX;
	uint16_t x326 = 258U;
	static uint32_t x328 = UINT32_MAX;
	uint64_t t46 = 6712992LLU;

    t46 = ((x325^x326)<<(x327>x328));

    if (t46 != 18446744073709551357LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x333 = INT64_MIN;
	int8_t x335 = INT8_MAX;
	volatile int16_t x336 = -284;
	static uint64_t t47 = 44865477353812LLU;

    t47 = ((x333^x334)<<(x335>x336));

    if (t47 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x338 = INT16_MIN;
	int16_t x339 = INT16_MAX;
	int32_t x340 = INT32_MIN;
	static volatile int32_t t48 = 113;

    t48 = ((x337^x338)<<(x339>x340));

    if (t48 != 65280) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x341 = UINT32_MAX;
	int16_t x342 = INT16_MAX;
	int32_t x343 = INT32_MAX;
	int16_t x344 = 1486;
	volatile uint32_t t49 = 1U;

    t49 = ((x341^x342)<<(x343>x344));

    if (t49 != 4294901760U) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x350 = -57;
	int16_t x351 = 3;
	int32_t x352 = -134715179;

    t50 = ((x349^x350)<<(x351>x352));

    if (t50 != 118) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile uint32_t x361 = 80123776U;
	int8_t x362 = INT8_MAX;
	static int32_t x364 = INT32_MIN;
	volatile uint32_t t51 = 4605U;

    t51 = ((x361^x362)<<(x363>x364));

    if (t51 != 160247806U) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x366 = INT64_MIN;
	int8_t x367 = -1;
	static uint64_t t52 = 18055LLU;

    t52 = ((x365^x366)<<(x367>x368));

    if (t52 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x374 = UINT64_MAX;
	int8_t x375 = INT8_MAX;
	volatile uint8_t x376 = 22U;

    t53 = ((x373^x374)<<(x375>x376));

    if (t53 != 65534LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x377 = 1366723913103LL;
	uint8_t x378 = 15U;
	uint64_t x379 = 984506250LLU;
	int16_t x380 = INT16_MIN;

    t54 = ((x377^x378)<<(x379>x380));

    if (t54 != 1366723913088LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x385 = INT8_MIN;
	volatile int8_t x386 = -1;
	uint32_t x387 = 0U;
	uint8_t x388 = 2U;
	static int32_t t55 = 408;

    t55 = ((x385^x386)<<(x387>x388));

    if (t55 != 127) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint8_t x397 = 1U;
	uint64_t x398 = 135160019658LLU;
	int64_t x399 = -55LL;
	volatile uint8_t x400 = UINT8_MAX;
	uint64_t t56 = 270086251LLU;

    t56 = ((x397^x398)<<(x399>x400));

    if (t56 != 135160019659LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x405 = 198307208;
	volatile uint8_t x407 = 66U;
	volatile uint32_t t57 = 1548129U;

    t57 = ((x405^x406)<<(x407>x408));

    if (t57 != 319328191U) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int64_t x409 = INT64_MAX;
	static volatile uint64_t x410 = 165LLU;
	int64_t x411 = -2244174897757632179LL;
	volatile uint16_t x412 = UINT16_MAX;
	static uint64_t t58 = 15087346803604LLU;

    t58 = ((x409^x410)<<(x411>x412));

    if (t58 != 9223372036854775642LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x417 = UINT16_MAX;
	uint32_t x418 = UINT32_MAX;
	int32_t x419 = 1;
	uint32_t t59 = 474U;

    t59 = ((x417^x418)<<(x419>x420));

    if (t59 != 4294901760U) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x426 = 21186682LLU;
	static int16_t x428 = INT16_MIN;
	static volatile uint64_t t60 = 17LLU;

    t60 = ((x425^x426)<<(x427>x428));

    if (t60 != 18446744073667178250LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x429 = 56616335784LLU;
	volatile uint32_t x430 = 1978238U;
	static uint8_t x431 = 19U;

    t61 = ((x429^x430)<<(x431>x432));

    if (t61 != 113230294444LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x441 = UINT64_MAX;
	volatile int16_t x442 = -136;
	int8_t x443 = 0;
	uint64_t x444 = 46344451034LLU;
	volatile uint64_t t62 = 32149LLU;

    t62 = ((x441^x442)<<(x443>x444));

    if (t62 != 135LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint16_t x449 = UINT16_MAX;
	int32_t x450 = INT32_MAX;
	static uint8_t x451 = 61U;
	static volatile uint8_t x452 = UINT8_MAX;
	static int32_t t63 = -232;

    t63 = ((x449^x450)<<(x451>x452));

    if (t63 != 2147418112) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x462 = 1818807315U;
	uint16_t x463 = 111U;
	uint64_t x464 = 19524LLU;
	uint32_t t64 = 154U;

    t64 = ((x461^x462)<<(x463>x464));

    if (t64 != 1818807532U) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x473 = UINT64_MAX;
	static volatile int32_t x474 = -32463212;
	int32_t x475 = INT32_MIN;
	volatile int32_t x476 = 13;

    t65 = ((x473^x474)<<(x475>x476));

    if (t65 != 32463211LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x493 = INT64_MIN;
	volatile int64_t x494 = INT64_MIN;
	int8_t x495 = 0;
	uint32_t x496 = 14002U;
	volatile int64_t t66 = 306532549137LL;

    t66 = ((x493^x494)<<(x495>x496));

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int32_t x497 = INT32_MIN;
	int64_t x498 = INT64_MIN;
	int16_t x499 = 4;
	static uint32_t x500 = UINT32_MAX;
	int64_t t67 = -6695919587359725LL;

    t67 = ((x497^x498)<<(x499>x500));

    if (t67 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x501 = -1LL;
	int64_t x502 = -1LL;
	volatile int16_t x503 = INT16_MIN;
	uint8_t x504 = 7U;

    t68 = ((x501^x502)<<(x503>x504));

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint64_t x506 = UINT64_MAX;
	int64_t x507 = -13LL;
	uint8_t x508 = UINT8_MAX;
	static uint64_t t69 = UINT64_MAX;

    t69 = ((x505^x506)<<(x507>x508));

    if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x513 = INT16_MIN;
	int16_t x514 = INT16_MIN;
	uint64_t x515 = UINT64_MAX;
	volatile int32_t t70 = 367;

    t70 = ((x513^x514)<<(x515>x516));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x529 = INT16_MAX;
	int16_t x530 = 1608;
	static int16_t x531 = -1;
	static uint8_t x532 = UINT8_MAX;
	static volatile int32_t t71 = -13476;

    t71 = ((x529^x530)<<(x531>x532));

    if (t71 != 31159) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x533 = -12;
	int8_t x535 = INT8_MAX;
	volatile int64_t x536 = -507509LL;

    t72 = ((x533^x534)<<(x535>x536));

    if (t72 != 9520963631553373822LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint64_t x538 = 25081LLU;
	int32_t x539 = INT32_MIN;
	int8_t x540 = -1;
	volatile uint64_t t73 = 0LLU;

    t73 = ((x537^x538)<<(x539>x540));

    if (t73 != 9223372036854800889LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	static int32_t x541 = INT32_MIN;
	int64_t x542 = -950221076340004LL;
	int64_t x543 = -54309108134LL;
	volatile int64_t x544 = -1LL;
	int64_t t74 = -4139387LL;

    t74 = ((x541^x542)<<(x543>x544));

    if (t74 != 950222495245020LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile uint8_t x545 = 1U;
	uint16_t x546 = 399U;
	volatile uint32_t x547 = 1162U;
	int32_t x548 = INT32_MIN;
	int32_t t75 = 1027990;

    t75 = ((x545^x546)<<(x547>x548));

    if (t75 != 398) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint64_t x549 = UINT64_MAX;
	volatile uint32_t x550 = UINT32_MAX;
	int32_t x551 = INT32_MIN;
	int32_t x552 = INT32_MIN;
	volatile uint64_t t76 = 3026126727LLU;

    t76 = ((x549^x550)<<(x551>x552));

    if (t76 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint16_t x555 = UINT16_MAX;
	int8_t x556 = 12;

    t77 = ((x553^x554)<<(x555>x556));

    if (t77 != 6282972987318518168LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x566 = UINT16_MAX;
	static uint8_t x568 = UINT8_MAX;
	volatile int32_t t78 = -1;

    t78 = ((x565^x566)<<(x567>x568));

    if (t78 != 65486) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x575 = 464U;
	int16_t x576 = 3570;
	volatile uint64_t t79 = 14833921LLU;

    t79 = ((x573^x574)<<(x575>x576));

    if (t79 != 18446744041800922300LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint16_t x577 = UINT16_MAX;
	uint64_t x578 = 81046927799983218LLU;
	volatile uint16_t x579 = 3324U;
	int16_t x580 = 144;
	volatile uint64_t t80 = 192016740458183LLU;

    t80 = ((x577^x578)<<(x579>x580));

    if (t80 != 162093855599937306LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x593 = INT16_MIN;
	uint64_t x594 = 151066LLU;
	static volatile uint8_t x595 = 7U;
	uint32_t x596 = 50U;
	uint64_t t81 = 695436473566LLU;

    t81 = ((x593^x594)<<(x595>x596));

    if (t81 != 18446744073709407770LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x597 = INT16_MAX;
	int64_t x598 = INT64_MAX;
	static int16_t x599 = INT16_MIN;
	int16_t x600 = 0;
	int64_t t82 = 62226343297098615LL;

    t82 = ((x597^x598)<<(x599>x600));

    if (t82 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x601 = INT16_MAX;
	int8_t x603 = -1;
	uint32_t x604 = UINT32_MAX;
	int64_t t83 = -78560779758LL;

    t83 = ((x601^x602)<<(x603>x604));

    if (t83 != 764471LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x609 = 15;
	int16_t x611 = INT16_MIN;
	static int32_t x612 = 0;
	static volatile int32_t t84 = -588;

    t84 = ((x609^x610)<<(x611>x612));

    if (t84 != 318) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x613 = INT8_MIN;
	int8_t x614 = INT8_MIN;
	int32_t x615 = -1;
	uint64_t x616 = UINT64_MAX;

    t85 = ((x613^x614)<<(x615>x616));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x621 = UINT64_MAX;
	uint16_t x622 = UINT16_MAX;
	volatile int8_t x623 = -32;
	uint32_t x624 = 51746884U;
	volatile uint64_t t86 = 5222555326944318LLU;

    t86 = ((x621^x622)<<(x623>x624));

    if (t86 != 18446744073709420544LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint16_t x641 = 356U;
	uint8_t x642 = 77U;
	uint64_t x643 = UINT64_MAX;
	static int16_t x644 = -90;
	volatile int32_t t87 = -467512297;

    t87 = ((x641^x642)<<(x643>x644));

    if (t87 != 594) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint32_t x645 = UINT32_MAX;
	static int8_t x646 = 1;
	int32_t x647 = INT32_MAX;
	static uint32_t x648 = 259U;
	uint32_t t88 = 2110939784U;

    t88 = ((x645^x646)<<(x647>x648));

    if (t88 != 4294967292U) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x649 = 10655430753944LL;
	uint16_t x650 = UINT16_MAX;
	int16_t x651 = INT16_MIN;
	volatile int32_t x652 = INT32_MAX;
	int64_t t89 = 35394085LL;

    t89 = ((x649^x650)<<(x651>x652));

    if (t89 != 10655430787431LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x657 = 502320LLU;
	static int64_t x658 = INT64_MIN;
	int32_t x659 = INT32_MIN;
	uint16_t x660 = 890U;
	uint64_t t90 = 13LLU;

    t90 = ((x657^x658)<<(x659>x660));

    if (t90 != 9223372036855278128LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint64_t x665 = UINT64_MAX;
	int32_t x666 = INT32_MIN;
	volatile uint32_t x667 = 15U;
	volatile uint64_t t91 = 16LLU;

    t91 = ((x665^x666)<<(x667>x668));

    if (t91 != 2147483647LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x670 = UINT64_MAX;
	volatile int32_t x671 = INT32_MIN;
	uint16_t x672 = 11646U;
	volatile uint64_t t92 = UINT64_MAX;

    t92 = ((x669^x670)<<(x671>x672));

    if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x681 = UINT64_MAX;
	int16_t x682 = -1;
	int8_t x683 = 32;
	int32_t x684 = -1;
	uint64_t t93 = 2145605240LLU;

    t93 = ((x681^x682)<<(x683>x684));

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x685 = -1;
	int64_t x686 = INT64_MIN;
	volatile uint64_t x688 = UINT64_MAX;
	volatile int64_t t94 = INT64_MAX;

    t94 = ((x685^x686)<<(x687>x688));

    if (t94 != INT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint64_t x690 = 3693285552874078LLU;
	static int64_t x691 = INT64_MIN;
	int32_t x692 = -135271819;
	uint64_t t95 = 0LLU;

    t95 = ((x689^x690)<<(x691>x692));

    if (t95 != 3693285552874017LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x694 = INT8_MAX;
	int64_t x695 = INT64_MAX;
	int32_t x696 = INT32_MIN;
	int32_t t96 = 122964;

    t96 = ((x693^x694)<<(x695>x696));

    if (t96 != 250) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x697 = 7772066U;
	uint8_t x698 = 28U;
	volatile int16_t x699 = INT16_MAX;
	static int32_t x700 = INT32_MIN;
	static volatile uint32_t t97 = 90854722U;

    t97 = ((x697^x698)<<(x699>x700));

    if (t97 != 15544188U) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint64_t x701 = 139304770113624LLU;
	int64_t x702 = INT64_MIN;
	int64_t x703 = -670328478LL;
	uint32_t x704 = 2U;
	static uint64_t t98 = 5LLU;

    t98 = ((x701^x702)<<(x703>x704));

    if (t98 != 9223511341624889432LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x705 = INT16_MIN;
	int8_t x706 = INT8_MIN;
	static uint32_t x708 = 1552682039U;
	volatile int32_t t99 = 1;

    t99 = ((x705^x706)<<(x707>x708));

    if (t99 != 32640) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x709 = -354844;
	int8_t x711 = -1;
	volatile int64_t t100 = 455263639919597485LL;

    t100 = ((x709^x710)<<(x711>x712));

    if (t100 != 354843LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x713 = INT16_MAX;
	uint32_t x714 = 3U;
	int64_t x715 = INT64_MIN;
	static int64_t x716 = -1211LL;
	uint32_t t101 = 2380209U;

    t101 = ((x713^x714)<<(x715>x716));

    if (t101 != 32764U) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x725 = UINT16_MAX;
	int64_t x726 = INT64_MAX;
	int32_t x727 = 9895228;
	int64_t t102 = -30544254264598552LL;

    t102 = ((x725^x726)<<(x727>x728));

    if (t102 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x735 = INT16_MAX;
	uint32_t x736 = 228078777U;
	static volatile uint64_t t103 = 2590735274691272566LLU;

    t103 = ((x733^x734)<<(x735>x736));

    if (t103 != 1141549520498067560LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint32_t x737 = 1U;
	volatile int8_t x738 = INT8_MIN;
	uint8_t x739 = UINT8_MAX;
	volatile int16_t x740 = INT16_MAX;
	volatile uint32_t t104 = 36319U;

    t104 = ((x737^x738)<<(x739>x740));

    if (t104 != 4294967169U) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x742 = 1U;
	static int8_t x743 = INT8_MIN;
	int16_t x744 = 0;

    t105 = ((x741^x742)<<(x743>x744));

    if (t105 != 261008U) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x745 = INT16_MIN;
	uint8_t x747 = 0U;
	static volatile uint16_t x748 = 14U;
	int32_t t106 = -102601;

    t106 = ((x745^x746)<<(x747>x748));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static int64_t x757 = -1LL;
	int8_t x758 = INT8_MIN;
	static int64_t x759 = INT64_MIN;
	uint64_t x760 = UINT64_MAX;
	volatile int64_t t107 = -409898LL;

    t107 = ((x757^x758)<<(x759>x760));

    if (t107 != 127LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x773 = UINT64_MAX;
	uint8_t x774 = 37U;
	uint16_t x776 = 115U;
	uint64_t t108 = 1359578073LLU;

    t108 = ((x773^x774)<<(x775>x776));

    if (t108 != 18446744073709551578LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x778 = INT32_MIN;
	int8_t x779 = -1;
	volatile int32_t t109 = 6539112;

    t109 = ((x777^x778)<<(x779>x780));

    if (t109 != 2147450880) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x781 = UINT8_MAX;
	volatile uint16_t x782 = UINT16_MAX;
	uint32_t x783 = 7118928U;
	int64_t x784 = INT64_MIN;
	volatile int32_t t110 = 6;

    t110 = ((x781^x782)<<(x783>x784));

    if (t110 != 130560) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x793 = 1U;
	uint64_t x794 = 1838LLU;
	static int64_t x795 = -15621151201759824LL;
	static volatile int16_t x796 = INT16_MAX;

    t111 = ((x793^x794)<<(x795>x796));

    if (t111 != 1839LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint64_t x797 = 23208LLU;
	int32_t x799 = -1;
	static int16_t x800 = -1;
	static volatile uint64_t t112 = 6196373330LLU;

    t112 = ((x797^x798)<<(x799>x800));

    if (t112 != 18446744073709542056LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x801 = INT16_MIN;
	uint32_t t113 = 86036U;

    t113 = ((x801^x802)<<(x803>x804));

    if (t113 != 65534U) { NG(); } else { ; }
	
}

void f114(void) {
    	static int64_t x805 = -13152002LL;
	uint64_t x806 = 1656699198LLU;
	uint64_t x807 = 189982228110266406LLU;
	static int16_t x808 = -372;
	uint64_t t114 = 60LLU;

    t114 = ((x805^x806)<<(x807>x808));

    if (t114 != 18446744072057547200LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int64_t x809 = -1LL;
	int8_t x810 = INT8_MIN;
	int64_t x811 = -1LL;
	static int64_t x812 = 867251587332LL;
	int64_t t115 = 8069565350LL;

    t115 = ((x809^x810)<<(x811>x812));

    if (t115 != 127LL) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x813 = 539282725034480609LLU;
	int16_t x814 = INT16_MIN;
	int8_t x815 = INT8_MIN;
	static volatile uint16_t x816 = UINT16_MAX;
	uint64_t t116 = 1858541104752478LLU;

    t116 = ((x813^x814)<<(x815>x816));

    if (t116 != 17907461348675081185LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x821 = 2;
	static uint8_t x822 = UINT8_MAX;
	uint64_t x823 = UINT64_MAX;
	static volatile uint64_t x824 = UINT64_MAX;

    t117 = ((x821^x822)<<(x823>x824));

    if (t117 != 253) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x825 = INT8_MAX;
	uint64_t x828 = 6724LLU;
	volatile int32_t t118 = 2;

    t118 = ((x825^x826)<<(x827>x828));

    if (t118 != 65280) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x839 = INT32_MAX;
	volatile uint64_t x840 = 157504LLU;
	int64_t t119 = -16374001313668LL;

    t119 = ((x837^x838)<<(x839>x840));

    if (t119 != 337604615580496792LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static int64_t x841 = -1LL;
	static volatile int64_t x842 = INT64_MIN;
	uint8_t x844 = 0U;
	volatile int64_t t120 = INT64_MAX;

    t120 = ((x841^x842)<<(x843>x844));

    if (t120 != INT64_MAX) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x845 = INT64_MAX;
	uint16_t x846 = 50U;
	uint8_t x847 = UINT8_MAX;
	int16_t x848 = 508;
	volatile int64_t t121 = -57948903360739238LL;

    t121 = ((x845^x846)<<(x847>x848));

    if (t121 != 9223372036854775757LL) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint16_t x853 = UINT16_MAX;
	static uint64_t x854 = 3006720393370LLU;
	int32_t x855 = -6100820;
	volatile int8_t x856 = -1;

    t122 = ((x853^x854)<<(x855>x856));

    if (t122 != 3006720425829LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x857 = INT16_MIN;
	uint32_t x858 = 255U;
	static uint64_t x859 = 21664969232239989LLU;
	uint8_t x860 = 23U;
	volatile uint32_t t123 = 39119498U;

    t123 = ((x857^x858)<<(x859>x860));

    if (t123 != 4294902270U) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint32_t x861 = 918552U;
	uint16_t x862 = 7U;
	int8_t x863 = INT8_MIN;
	uint64_t x864 = 211014071493282LLU;
	uint32_t t124 = 2U;

    t124 = ((x861^x862)<<(x863>x864));

    if (t124 != 1837118U) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x865 = 590U;
	int32_t x867 = INT32_MAX;
	volatile int16_t x868 = INT16_MIN;
	volatile uint64_t t125 = 82851LLU;

    t125 = ((x865^x866)<<(x867>x868));

    if (t125 != 18446744073709550434LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x870 = INT16_MIN;
	int64_t x871 = -7LL;
	int64_t x872 = INT64_MAX;
	volatile uint64_t t126 = 4395634589210540946LLU;

    t126 = ((x869^x870)<<(x871>x872));

    if (t126 != 18446744073682820679LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint32_t x873 = 55527U;
	static int16_t x874 = 11776;
	int8_t x875 = INT8_MIN;
	int64_t x876 = -35152084315LL;
	uint32_t t127 = 17633211U;

    t127 = ((x873^x874)<<(x875>x876));

    if (t127 != 126414U) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x877 = INT8_MAX;
	uint8_t x878 = UINT8_MAX;
	volatile int32_t x879 = 77872575;
	uint8_t x880 = 3U;
	static volatile int32_t t128 = -42127830;

    t128 = ((x877^x878)<<(x879>x880));

    if (t128 != 256) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint16_t x887 = 6134U;
	int32_t x888 = -1;
	volatile uint32_t t129 = 114813360U;

    t129 = ((x885^x886)<<(x887>x888));

    if (t129 != 4294901760U) { NG(); } else { ; }
	
}

void f130(void) {
    	static int16_t x889 = -8339;
	int8_t x890 = INT8_MIN;
	volatile uint64_t x891 = 20296034508557847LLU;
	static int16_t x892 = -10510;
	int32_t t130 = -155;

    t130 = ((x889^x890)<<(x891>x892));

    if (t130 != 8429) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int8_t x898 = -1;
	int16_t x899 = INT16_MAX;
	volatile int64_t t131 = -1564187207031175LL;

    t131 = ((x897^x898)<<(x899>x900));

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x902 = INT64_MIN;
	int16_t x904 = INT16_MIN;

    t132 = ((x901^x902)<<(x903>x904));

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint32_t x921 = 3U;
	int64_t x922 = 80141LL;
	int32_t x923 = -2208;
	int16_t x924 = INT16_MIN;
	volatile int64_t t133 = -16330LL;

    t133 = ((x921^x922)<<(x923>x924));

    if (t133 != 160284LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int32_t x925 = -104706403;
	volatile uint64_t x926 = 3LLU;
	int16_t x928 = INT16_MIN;
	uint64_t t134 = 45400683909947LLU;

    t134 = ((x925^x926)<<(x927>x928));

    if (t134 != 18446744073500138812LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint64_t x937 = UINT64_MAX;
	uint32_t x938 = 22U;
	int16_t x939 = 3;
	static volatile uint64_t t135 = 479467286791LLU;

    t135 = ((x937^x938)<<(x939>x940));

    if (t135 != 18446744073709551593LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint64_t x953 = UINT64_MAX;
	int16_t x954 = 1;
	int32_t x955 = -862907441;
	static int8_t x956 = INT8_MIN;
	static volatile uint64_t t136 = 657027320044LLU;

    t136 = ((x953^x954)<<(x955>x956));

    if (t136 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x963 = INT16_MIN;
	int64_t x964 = -1LL;
	uint64_t t137 = 22654460LLU;

    t137 = ((x961^x962)<<(x963>x964));

    if (t137 != 195207417LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x965 = INT64_MIN;
	volatile uint64_t x966 = UINT64_MAX;
	volatile int32_t x967 = -1;
	int16_t x968 = 7830;
	static uint64_t t138 = 151687417921670165LLU;

    t138 = ((x965^x966)<<(x967>x968));

    if (t138 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x974 = INT16_MAX;
	static volatile int16_t x976 = 0;

    t139 = ((x973^x974)<<(x975>x976));

    if (t139 != 65536) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x978 = 0;
	uint64_t x979 = 1995036680399693LLU;
	static uint16_t x980 = 28U;
	static int32_t t140 = 2;

    t140 = ((x977^x978)<<(x979>x980));

    if (t140 != 65534) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x981 = -16204LL;
	uint64_t x982 = UINT64_MAX;
	static volatile uint32_t x983 = 114968U;
	static volatile uint32_t x984 = 63U;
	static volatile uint64_t t141 = 2094359415LLU;

    t141 = ((x981^x982)<<(x983>x984));

    if (t141 != 32406LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint32_t x1001 = UINT32_MAX;
	volatile int8_t x1002 = INT8_MIN;
	static uint32_t t142 = 3U;

    t142 = ((x1001^x1002)<<(x1003>x1004));

    if (t142 != 254U) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x1013 = 6U;
	static uint16_t x1014 = 1279U;
	uint64_t x1015 = 18616LLU;
	static int64_t x1016 = INT64_MIN;
	int32_t t143 = 551;

    t143 = ((x1013^x1014)<<(x1015>x1016));

    if (t143 != 1273) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x1017 = INT8_MAX;
	uint32_t x1018 = UINT32_MAX;
	int32_t x1019 = -1;
	volatile int8_t x1020 = -1;
	volatile uint32_t t144 = 3U;

    t144 = ((x1017^x1018)<<(x1019>x1020));

    if (t144 != 4294967168U) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x1021 = INT8_MAX;
	volatile uint32_t x1022 = 107152U;
	uint32_t x1023 = UINT32_MAX;
	volatile uint32_t t145 = 209377U;

    t145 = ((x1021^x1022)<<(x1023>x1024));

    if (t145 != 107247U) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x1029 = -1;
	uint64_t x1031 = 2940900498114913292LLU;
	static volatile int32_t t146 = 31;

    t146 = ((x1029^x1030)<<(x1031>x1032));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x1033 = -45;
	static int16_t x1035 = INT16_MIN;

    t147 = ((x1033^x1034)<<(x1035>x1036));

    if (t147 != 32723) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x1037 = 1033637LL;
	static uint32_t x1038 = 3912242U;
	int32_t x1039 = -1;
	static int64_t t148 = 2669LL;

    t148 = ((x1037^x1038)<<(x1039>x1040));

    if (t148 != 3438487LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static int16_t x1041 = -9244;
	uint64_t x1042 = 191785LLU;
	static uint8_t x1043 = UINT8_MAX;
	static int64_t x1044 = INT64_MIN;
	uint64_t t149 = 8601457LLU;

    t149 = ((x1041^x1042)<<(x1043>x1044));

    if (t149 != 18446744073709186458LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x1045 = INT8_MAX;
	uint8_t x1046 = 90U;
	volatile int16_t x1047 = -1;
	int8_t x1048 = INT8_MAX;
	int32_t t150 = -556;

    t150 = ((x1045^x1046)<<(x1047>x1048));

    if (t150 != 37) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x1053 = UINT32_MAX;
	uint8_t x1054 = 1U;
	static uint32_t t151 = 162635U;

    t151 = ((x1053^x1054)<<(x1055>x1056));

    if (t151 != 4294967294U) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x1057 = INT8_MAX;
	static int16_t x1060 = INT16_MIN;
	volatile int32_t t152 = 140329;

    t152 = ((x1057^x1058)<<(x1059>x1060));

    if (t152 != 65280) { NG(); } else { ; }
	
}

void f153(void) {
    	static int16_t x1061 = 120;
	int32_t x1062 = 3536;
	int8_t x1063 = -1;
	int8_t x1064 = -29;
	int32_t t153 = -1855572;

    t153 = ((x1061^x1062)<<(x1063>x1064));

    if (t153 != 6992) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint64_t x1077 = 9LLU;
	volatile int64_t x1079 = -1LL;
	int32_t x1080 = -1;
	uint64_t t154 = 3635125887882406LLU;

    t154 = ((x1077^x1078)<<(x1079>x1080));

    if (t154 != 18446744073709551497LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x1082 = 56792076358LL;
	int64_t x1083 = INT64_MIN;
	int32_t x1084 = INT32_MIN;
	volatile int64_t t155 = -17835576823851394LL;

    t155 = ((x1081^x1082)<<(x1083>x1084));

    if (t155 != 56792081637LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static int32_t x1089 = -1;
	volatile int16_t x1091 = -5075;
	static volatile uint32_t x1092 = UINT32_MAX;
	int32_t t156 = INT32_MAX;

    t156 = ((x1089^x1090)<<(x1091>x1092));

    if (t156 != INT32_MAX) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int32_t x1093 = 351679;
	static int64_t x1095 = 2283890008656047582LL;
	uint64_t x1096 = UINT64_MAX;

    t157 = ((x1093^x1094)<<(x1095>x1096));

    if (t157 != 2147131968) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x1097 = 446LLU;
	static volatile int16_t x1098 = INT16_MAX;
	static volatile uint16_t x1099 = UINT16_MAX;
	static volatile int8_t x1100 = -1;
	volatile uint64_t t158 = 3992033769LLU;

    t158 = ((x1097^x1098)<<(x1099>x1100));

    if (t158 != 64642LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile uint8_t x1101 = 8U;
	uint16_t x1102 = 3515U;
	int32_t x1104 = INT32_MAX;

    t159 = ((x1101^x1102)<<(x1103>x1104));

    if (t159 != 3507) { NG(); } else { ; }
	
}

void f160(void) {
    	static int64_t x1114 = -1LL;
	uint8_t x1115 = 98U;
	volatile int32_t x1116 = 16191717;
	static volatile int64_t t160 = 5483687286572834LL;

    t160 = ((x1113^x1114)<<(x1115>x1116));

    if (t160 != 127LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x1117 = INT32_MIN;
	int8_t x1119 = INT8_MIN;
	static uint8_t x1120 = 96U;
	volatile uint64_t t161 = 39349173590790617LLU;

    t161 = ((x1117^x1118)<<(x1119>x1120));

    if (t161 != 18446744057711983393LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint32_t x1122 = 452714U;
	uint64_t x1124 = 8873659763LLU;

    t162 = ((x1121^x1122)<<(x1123>x1124));

    if (t162 != 452629U) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x1127 = INT16_MIN;
	volatile int32_t x1128 = INT32_MIN;

    t163 = ((x1125^x1126)<<(x1127>x1128));

    if (t163 != 18446744055231360208LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x1130 = UINT16_MAX;
	int64_t x1131 = INT64_MIN;
	static volatile uint64_t x1132 = UINT64_MAX;
	volatile int32_t t164 = -783;

    t164 = ((x1129^x1130)<<(x1131>x1132));

    if (t164 != 738654460) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint32_t x1149 = 2219U;
	volatile uint16_t x1150 = UINT16_MAX;
	int16_t x1151 = -1;
	int16_t x1152 = -1;

    t165 = ((x1149^x1150)<<(x1151>x1152));

    if (t165 != 63316U) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint64_t x1157 = 817017582814586LLU;
	uint16_t x1158 = UINT16_MAX;
	volatile int8_t x1159 = INT8_MIN;
	int16_t x1160 = INT16_MIN;
	volatile uint64_t t166 = 516455712LLU;

    t166 = ((x1157^x1158)<<(x1159>x1160));

    if (t166 != 1634035165623562LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x1169 = -1;
	int64_t x1170 = -1LL;
	int16_t x1171 = INT16_MAX;
	int64_t t167 = 981465653LL;

    t167 = ((x1169^x1170)<<(x1171>x1172));

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int64_t x1173 = INT64_MIN;
	int8_t x1174 = -1;
	int8_t x1175 = INT8_MAX;
	static volatile int64_t t168 = INT64_MAX;

    t168 = ((x1173^x1174)<<(x1175>x1176));

    if (t168 != INT64_MAX) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x1181 = -1;
	volatile uint64_t x1183 = 317467549109320088LLU;
	int8_t x1184 = 2;
	int64_t t169 = 515699LL;

    t169 = ((x1181^x1182)<<(x1183>x1184));

    if (t169 != 173064LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x1189 = -1;
	int8_t x1190 = -14;
	int16_t x1191 = -1;
	volatile uint8_t x1192 = 22U;

    t170 = ((x1189^x1190)<<(x1191>x1192));

    if (t170 != 13) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x1201 = UINT16_MAX;
	int64_t x1202 = INT64_MAX;
	uint32_t x1203 = UINT32_MAX;
	int32_t x1204 = -1;
	static volatile int64_t t171 = -140242851434419LL;

    t171 = ((x1201^x1202)<<(x1203>x1204));

    if (t171 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x1205 = INT16_MIN;
	static volatile uint32_t x1206 = 94714U;
	int16_t x1208 = 4;
	volatile uint32_t t172 = 96059U;

    t172 = ((x1205^x1206)<<(x1207>x1208));

    if (t172 != 4294898170U) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x1213 = 337U;
	static volatile uint16_t x1214 = UINT16_MAX;
	uint64_t x1215 = 6033076LLU;
	int8_t x1216 = 0;
	volatile uint32_t t173 = 59U;

    t173 = ((x1213^x1214)<<(x1215>x1216));

    if (t173 != 130396U) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x1221 = 1834U;
	uint64_t x1223 = 46122437955950LLU;
	static int32_t x1224 = INT32_MIN;

    t174 = ((x1221^x1222)<<(x1223>x1224));

    if (t174 != 1835) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x1225 = 70U;
	static int16_t x1226 = INT16_MAX;
	static int32_t x1228 = INT32_MAX;

    t175 = ((x1225^x1226)<<(x1227>x1228));

    if (t175 != 32697U) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x1233 = -3504;
	static uint64_t x1234 = 4496528025175086LLU;
	int8_t x1235 = INT8_MIN;
	int64_t x1236 = -26586370600545032LL;
	static volatile uint64_t t176 = 68LLU;

    t176 = ((x1233^x1234)<<(x1235>x1236));

    if (t176 != 18437751017659198716LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x1237 = 2798LLU;
	uint8_t x1238 = 1U;
	static uint8_t x1239 = 3U;
	uint8_t x1240 = 2U;
	static volatile uint64_t t177 = 424649477340145LLU;

    t177 = ((x1237^x1238)<<(x1239>x1240));

    if (t177 != 5598LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x1241 = -1LL;
	int32_t x1242 = -1;
	int32_t x1243 = -456;
	int32_t x1244 = -4;
	int64_t t178 = 6096592608466LL;

    t178 = ((x1241^x1242)<<(x1243>x1244));

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x1245 = -1;
	int8_t x1246 = INT8_MIN;
	volatile int64_t x1247 = -1LL;
	int8_t x1248 = -5;

    t179 = ((x1245^x1246)<<(x1247>x1248));

    if (t179 != 254) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x1249 = INT16_MAX;
	int16_t x1252 = -1;
	int32_t t180 = 589910364;

    t180 = ((x1249^x1250)<<(x1251>x1252));

    if (t180 != 32768) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x1254 = -1;
	volatile uint32_t t181 = 14233U;

    t181 = ((x1253^x1254)<<(x1255>x1256));

    if (t181 != 0U) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint8_t x1257 = 23U;
	volatile uint64_t x1258 = 4696LLU;
	volatile uint64_t t182 = 1665310355463LLU;

    t182 = ((x1257^x1258)<<(x1259>x1260));

    if (t182 != 9374LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint32_t x1263 = 175U;
	uint64_t x1264 = UINT64_MAX;

    t183 = ((x1261^x1262)<<(x1263>x1264));

    if (t183 != 2147486395U) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x1269 = 754974385390490812LLU;
	uint16_t x1270 = UINT16_MAX;
	int32_t x1271 = INT32_MIN;
	uint64_t x1272 = UINT64_MAX;
	volatile uint64_t t184 = 2102739092061227LLU;

    t184 = ((x1269^x1270)<<(x1271>x1272));

    if (t184 != 754974385390545731LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x1278 = INT8_MIN;
	int64_t x1279 = INT64_MIN;
	static uint32_t x1280 = 110972919U;
	uint32_t t185 = 1865176U;

    t185 = ((x1277^x1278)<<(x1279>x1280));

    if (t185 != 4294967181U) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int32_t x1297 = -1;
	static volatile int64_t x1298 = INT64_MIN;
	volatile int64_t x1299 = 2737LL;
	static int32_t x1300 = 33167;
	volatile int64_t t186 = INT64_MAX;

    t186 = ((x1297^x1298)<<(x1299>x1300));

    if (t186 != INT64_MAX) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint8_t x1301 = UINT8_MAX;
	uint8_t x1302 = 3U;
	uint64_t x1303 = 4559089353261766LLU;
	int16_t x1304 = -1;
	int32_t t187 = 1495960;

    t187 = ((x1301^x1302)<<(x1303>x1304));

    if (t187 != 252) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x1306 = UINT64_MAX;
	volatile int32_t x1307 = INT32_MIN;
	int16_t x1308 = -1;
	static uint64_t t188 = 0LLU;

    t188 = ((x1305^x1306)<<(x1307>x1308));

    if (t188 != 0LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x1313 = 44;
	int8_t x1314 = INT8_MAX;
	static volatile int8_t x1315 = 0;
	uint8_t x1316 = 1U;

    t189 = ((x1313^x1314)<<(x1315>x1316));

    if (t189 != 83) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint64_t x1317 = UINT64_MAX;
	static uint32_t x1319 = UINT32_MAX;
	int64_t x1320 = -99034038613LL;
	uint64_t t190 = 13974579325LLU;

    t190 = ((x1317^x1318)<<(x1319>x1320));

    if (t190 != 279638LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x1325 = INT32_MIN;
	volatile uint64_t x1326 = 1099331459768LLU;
	int32_t x1327 = INT32_MIN;
	static int32_t x1328 = -20656;
	static uint64_t t191 = 4LLU;

    t191 = ((x1325^x1326)<<(x1327>x1328));

    if (t191 != 18446742976165239480LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int64_t x1329 = INT64_MAX;
	static int64_t x1330 = INT64_MAX;
	static volatile int16_t x1332 = -1;
	int64_t t192 = 4056251048417LL;

    t192 = ((x1329^x1330)<<(x1331>x1332));

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int32_t x1338 = 65449;
	uint8_t x1340 = UINT8_MAX;
	int64_t t193 = 14170249LL;

    t193 = ((x1337^x1338)<<(x1339>x1340));

    if (t193 != 9223372036854710358LL) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x1346 = INT32_MIN;
	int32_t x1347 = INT32_MIN;
	static int8_t x1348 = INT8_MIN;
	static volatile uint64_t t194 = 2924957433045015LLU;

    t194 = ((x1345^x1346)<<(x1347>x1348));

    if (t194 != 18446744071565285827LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x1349 = INT64_MIN;
	int32_t x1350 = INT32_MIN;
	int64_t x1352 = 60LL;
	static volatile int64_t t195 = -234LL;

    t195 = ((x1349^x1350)<<(x1351>x1352));

    if (t195 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x1355 = UINT32_MAX;
	int32_t x1356 = INT32_MAX;
	int32_t t196 = -10996044;

    t196 = ((x1353^x1354)<<(x1355>x1356));

    if (t196 != 1939384) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x1357 = -59;
	int16_t x1358 = INT16_MIN;
	int8_t x1359 = 6;
	volatile int64_t x1360 = INT64_MIN;
	int32_t t197 = 416285;

    t197 = ((x1357^x1358)<<(x1359>x1360));

    if (t197 != 65418) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x1385 = -1;
	int8_t x1386 = -1;
	int64_t x1387 = INT64_MIN;
	int32_t x1388 = -1;

    t198 = ((x1385^x1386)<<(x1387>x1388));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int32_t x1401 = INT32_MIN;
	volatile uint32_t x1402 = UINT32_MAX;
	int8_t x1403 = 0;
	volatile uint64_t x1404 = 1033180242315156548LLU;
	uint32_t t199 = 64U;

    t199 = ((x1401^x1402)<<(x1403>x1404));

    if (t199 != 2147483647U) { NG(); } else { ; }
	
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

