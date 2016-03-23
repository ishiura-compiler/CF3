
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

volatile int32_t x1 = INT32_MIN;
static int64_t x4 = -1LL;
static int64_t x15 = -1LL;
volatile uint32_t t1 = 2U;
int16_t x27 = 651;
int64_t x63 = INT64_MIN;
int32_t t6 = -460;
int8_t x86 = 0;
static int8_t x87 = INT8_MAX;
static volatile int64_t t9 = -15LL;
uint64_t x101 = UINT64_MAX;
int8_t x105 = INT8_MAX;
int64_t x126 = INT64_MAX;
uint8_t x129 = 1U;
int16_t x132 = INT16_MIN;
int8_t x152 = INT8_MAX;
int64_t x163 = INT64_MIN;
volatile int8_t x197 = -1;
int16_t x200 = -1;
uint8_t x207 = UINT8_MAX;
volatile int64_t t21 = 4LL;
static uint8_t x210 = UINT8_MAX;
static uint32_t x223 = 875U;
uint64_t x225 = 226LLU;
static uint16_t x234 = UINT16_MAX;
int16_t x236 = -4596;
static uint64_t x237 = 1051749385LLU;
volatile int32_t t29 = 10633433;
uint8_t x270 = 64U;
int64_t x295 = -120172LL;
int64_t x306 = INT64_MAX;
static volatile int16_t x307 = 47;
volatile int32_t x337 = 54672204;
static uint64_t x338 = 59260916412452LLU;
int64_t x347 = INT64_MIN;
static volatile int32_t t38 = -6308;
volatile uint8_t x361 = 6U;
uint16_t x362 = 939U;
volatile int32_t x363 = -3226;
int8_t x370 = INT8_MAX;
volatile int32_t x374 = INT32_MAX;
static volatile uint16_t x375 = 29U;
int32_t t41 = -45848;
int32_t x403 = INT32_MAX;
int16_t x404 = -1;
volatile int32_t t43 = -2707;
int64_t x407 = 77669LL;
volatile uint64_t t44 = 399LLU;
int8_t x420 = INT8_MIN;
int16_t x430 = 5663;
volatile int64_t t48 = -645361114347LL;
int32_t x434 = INT32_MAX;
volatile uint16_t x435 = UINT16_MAX;
volatile int8_t x437 = INT8_MIN;
int64_t x442 = INT64_MAX;
uint64_t t53 = 2796645319542394154LLU;
uint32_t x469 = UINT32_MAX;
int8_t x472 = INT8_MIN;
uint64_t x482 = 4421642LLU;
int64_t x489 = INT64_MAX;
int8_t x495 = INT8_MIN;
int64_t t61 = 1648943050175LL;
int64_t x517 = INT64_MIN;
volatile uint8_t x519 = 0U;
uint32_t x529 = 1678617121U;
static int8_t x531 = INT8_MIN;
volatile int8_t x532 = INT8_MIN;
int64_t t64 = 298121415LL;
int8_t x534 = 11;
uint32_t x541 = 226333U;
volatile int64_t t68 = -1124769346008LL;
int8_t x570 = 0;
static uint8_t x573 = 1U;
int8_t x622 = INT8_MAX;
static int64_t t75 = 1LL;
int8_t x625 = 39;
static int8_t x627 = INT8_MIN;
static uint64_t t76 = 53693750037LLU;
static int16_t x643 = -1;
int8_t x648 = 9;
static int64_t x656 = INT64_MAX;
int64_t x672 = INT64_MIN;
static int32_t t83 = INT32_MIN;
uint32_t x681 = UINT32_MAX;
int16_t x682 = 5;
uint8_t x718 = 54U;
int64_t x721 = INT64_MIN;
static volatile int64_t x722 = 10928879469140LL;
int64_t t91 = 2518031996513695481LL;
static uint64_t t92 = 260528LLU;
int64_t x753 = -1LL;
uint8_t x756 = 2U;
static int16_t x770 = INT16_MAX;
static uint32_t t95 = 146U;
static volatile uint32_t t97 = 3U;
static int64_t x789 = 23685427413308810LL;
uint16_t x791 = 0U;
int64_t x801 = -296895LL;
uint16_t x805 = 16U;
int64_t x807 = INT64_MIN;
volatile uint8_t x810 = UINT8_MAX;
int8_t x811 = INT8_MIN;
volatile int8_t x812 = -1;
volatile int8_t x813 = INT8_MAX;
int8_t x815 = -1;
static volatile uint16_t x818 = 0U;
int32_t x819 = INT32_MIN;
volatile int64_t t103 = 45274598LL;
uint64_t x830 = UINT64_MAX;
int64_t x831 = -21031557LL;
uint64_t t105 = 3LLU;
uint8_t x853 = UINT8_MAX;
uint8_t x854 = 9U;
uint32_t x867 = UINT32_MAX;
int16_t x869 = INT16_MIN;
int64_t x870 = 27288LL;
volatile uint16_t x875 = 802U;
int8_t x876 = -1;
int64_t x880 = INT64_MIN;
volatile uint32_t t114 = 24430749U;
static int16_t x891 = INT16_MAX;
volatile int32_t t115 = 492677;
static int8_t x900 = 0;
static int32_t x903 = -1;
int64_t x904 = -16LL;
static volatile int8_t x905 = -1;
uint32_t x906 = 7305833U;
int64_t x931 = -1LL;
static volatile uint8_t x934 = 11U;
int64_t x935 = 2LL;
static int64_t x936 = -1LL;
volatile int32_t t121 = -28675;
volatile int16_t x940 = INT16_MAX;
static volatile uint32_t t122 = UINT32_MAX;
uint64_t x962 = 818960LLU;
static int16_t x975 = -12639;
static uint64_t x982 = 22177781590943LLU;
int8_t x1005 = 1;
int32_t t133 = -515;
int8_t x1016 = 0;
uint64_t t134 = 26927LLU;
static uint8_t x1026 = 26U;
int8_t x1029 = -7;
uint64_t t138 = 2689749722522365LLU;
int16_t x1065 = -1;
int64_t x1076 = -69599198676LL;
volatile uint64_t t142 = 68780523042048LLU;
volatile int64_t x1099 = INT64_MAX;
static uint8_t x1123 = 24U;
uint32_t t152 = 21423296U;
volatile int64_t x1149 = 477221703LL;
uint16_t x1162 = 1U;
volatile uint64_t t154 = 4052370476791LLU;
volatile uint8_t x1169 = 108U;
int8_t x1170 = 43;
uint16_t x1171 = UINT16_MAX;
volatile int64_t x1173 = INT64_MIN;
int64_t x1175 = INT64_MIN;
uint8_t x1176 = 62U;
volatile int32_t x1183 = INT32_MIN;
uint8_t x1186 = 0U;
int8_t x1198 = 1;
static int32_t x1199 = 5258378;
static int32_t x1200 = INT32_MIN;
volatile uint32_t x1207 = UINT32_MAX;
int32_t x1234 = 28115100;
uint16_t x1235 = 1U;
static int32_t x1247 = INT32_MAX;
int64_t x1251 = INT64_MIN;
uint64_t t167 = 41LLU;
volatile int32_t x1255 = INT32_MIN;
volatile int32_t t168 = -1;
int64_t t172 = 0LL;
int32_t x1288 = -1;
uint64_t x1294 = UINT64_MAX;
int64_t x1315 = 14554153LL;
uint16_t x1316 = UINT16_MAX;
volatile uint32_t t177 = 17733U;
uint32_t x1321 = 987495U;
int32_t x1323 = 1;
uint16_t x1330 = 1U;
int32_t t181 = 3;
uint64_t x1342 = 1505LLU;
volatile int32_t x1353 = -1;
int32_t x1362 = INT32_MAX;
volatile int16_t x1367 = INT16_MIN;
volatile int8_t x1389 = 3;
volatile int32_t t191 = 413876667;
uint64_t t192 = 1LLU;
int32_t x1410 = 13207733;
volatile int32_t t194 = -93969731;
static int8_t x1434 = INT8_MAX;
int64_t x1445 = INT64_MAX;
int16_t x1464 = -3;
volatile uint64_t t198 = 1155934205091060LLU;
static volatile int8_t x1465 = INT8_MIN;
volatile uint64_t t199 = 2159601179385LLU;


void f0(void) {
    	uint32_t x2 = UINT32_MAX;
	int16_t x3 = -1;
	uint32_t t0 = 522513U;

    t0 = (x1^(x2>>(x3!=x4)));

    if (t0 != 2147483647U) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint8_t x13 = 12U;
	uint32_t x14 = UINT32_MAX;
	int16_t x16 = INT16_MIN;

    t1 = (x13^(x14>>(x15!=x16)));

    if (t1 != 2147483635U) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x25 = INT64_MIN;
	int8_t x26 = 28;
	uint8_t x28 = 9U;
	int64_t t2 = 12916310LL;

    t2 = (x25^(x26>>(x27!=x28)));

    if (t2 != -9223372036854775794LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x33 = -1;
	static int64_t x34 = INT64_MAX;
	uint32_t x35 = 818106U;
	int8_t x36 = INT8_MAX;
	static volatile int64_t t3 = -59163518200220LL;

    t3 = (x33^(x34>>(x35!=x36)));

    if (t3 != -4611686018427387904LL) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x41 = -89611;
	uint8_t x42 = 2U;
	uint8_t x43 = 4U;
	volatile uint8_t x44 = UINT8_MAX;
	volatile int32_t t4 = 450618;

    t4 = (x41^(x42>>(x43!=x44)));

    if (t4 != -89612) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x49 = INT32_MIN;
	static uint32_t x50 = UINT32_MAX;
	int16_t x51 = INT16_MAX;
	static uint16_t x52 = 0U;
	volatile uint32_t t5 = UINT32_MAX;

    t5 = (x49^(x50>>(x51!=x52)));

    if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x61 = -1;
	static volatile int8_t x62 = 13;
	static uint64_t x64 = 1401LLU;

    t6 = (x61^(x62>>(x63!=x64)));

    if (t6 != -7) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x77 = 5971345;
	volatile int16_t x78 = INT16_MAX;
	int8_t x79 = 11;
	uint64_t x80 = 558683029784456764LLU;
	int32_t t7 = 477652;

    t7 = (x77^(x78>>(x79!=x80)));

    if (t7 != 5972590) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x81 = INT16_MIN;
	static uint16_t x82 = 2596U;
	volatile int16_t x83 = -1;
	int64_t x84 = INT64_MIN;
	int32_t t8 = -19315160;

    t8 = (x81^(x82>>(x83!=x84)));

    if (t8 != -31470) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x85 = 31287LL;
	uint32_t x88 = UINT32_MAX;

    t9 = (x85^(x86>>(x87!=x88)));

    if (t9 != 31287LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x97 = INT8_MIN;
	uint32_t x98 = 657U;
	volatile uint8_t x99 = 1U;
	static volatile int32_t x100 = -1;
	uint32_t t10 = 481978U;

    t10 = (x97^(x98>>(x99!=x100)));

    if (t10 != 4294966984U) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x102 = UINT32_MAX;
	int64_t x103 = 98667668160LL;
	static volatile int32_t x104 = 234688;
	static uint64_t t11 = 138986960696752LLU;

    t11 = (x101^(x102>>(x103!=x104)));

    if (t11 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint8_t x106 = 11U;
	static uint64_t x107 = 354372436LLU;
	int8_t x108 = 2;
	int32_t t12 = 3;

    t12 = (x105^(x106>>(x107!=x108)));

    if (t12 != 122) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x121 = 426263LLU;
	uint64_t x122 = 53386561LLU;
	int8_t x123 = INT8_MIN;
	static int32_t x124 = -1;
	uint64_t t13 = 64011LLU;

    t13 = (x121^(x122>>(x123!=x124)));

    if (t13 != 26333111LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x125 = -1;
	uint32_t x127 = 59365805U;
	static int8_t x128 = INT8_MAX;
	volatile int64_t t14 = 10797609LL;

    t14 = (x125^(x126>>(x127!=x128)));

    if (t14 != -4611686018427387904LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x130 = UINT16_MAX;
	static int32_t x131 = -134678;
	int32_t t15 = -231;

    t15 = (x129^(x130>>(x131!=x132)));

    if (t15 != 32766) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x145 = UINT32_MAX;
	int64_t x146 = 67LL;
	int64_t x147 = INT64_MIN;
	uint32_t x148 = 1625817301U;
	int64_t t16 = 1214899609038948954LL;

    t16 = (x145^(x146>>(x147!=x148)));

    if (t16 != 4294967262LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x149 = 286689214646LLU;
	uint8_t x150 = 1U;
	int16_t x151 = INT16_MIN;
	volatile uint64_t t17 = 206279757LLU;

    t17 = (x149^(x150>>(x151!=x152)));

    if (t17 != 286689214646LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x161 = 545858LLU;
	uint8_t x162 = 0U;
	uint8_t x164 = UINT8_MAX;
	volatile uint64_t t18 = 803685258012918LLU;

    t18 = (x161^(x162>>(x163!=x164)));

    if (t18 != 545858LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x177 = -597559473893195LL;
	static volatile int32_t x178 = INT32_MAX;
	volatile int64_t x179 = -6LL;
	static volatile uint32_t x180 = UINT32_MAX;
	volatile int64_t t19 = 244582440LL;

    t19 = (x177^(x178>>(x179!=x180)));

    if (t19 != -597559199633590LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint64_t x198 = UINT64_MAX;
	int16_t x199 = INT16_MAX;
	uint64_t t20 = 1456190867LLU;

    t20 = (x197^(x198>>(x199!=x200)));

    if (t20 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x205 = -1LL;
	uint32_t x206 = 485U;
	static int16_t x208 = INT16_MIN;

    t21 = (x205^(x206>>(x207!=x208)));

    if (t21 != -243LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile int16_t x209 = INT16_MAX;
	uint32_t x211 = 9520141U;
	static int64_t x212 = -671869841247657LL;
	volatile int32_t t22 = -15155506;

    t22 = (x209^(x210>>(x211!=x212)));

    if (t22 != 32640) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x217 = INT8_MIN;
	uint64_t x218 = 4271293401LLU;
	static int64_t x219 = 492965212LL;
	uint16_t x220 = UINT16_MAX;
	volatile uint64_t t23 = 21LLU;

    t23 = (x217^(x218>>(x219!=x220)));

    if (t23 != 18446744071573905004LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x221 = 21165U;
	int32_t x222 = INT32_MAX;
	uint64_t x224 = 127476980998937LLU;
	volatile uint32_t t24 = 14U;

    t24 = (x221^(x222>>(x223!=x224)));

    if (t24 != 1073720658U) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x226 = 17971U;
	static int32_t x227 = INT32_MIN;
	uint64_t x228 = 72LLU;
	volatile uint64_t t25 = 349764171746LLU;

    t25 = (x225^(x226>>(x227!=x228)));

    if (t25 != 9211LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x233 = 2;
	volatile uint16_t x235 = UINT16_MAX;
	int32_t t26 = 110057180;

    t26 = (x233^(x234>>(x235!=x236)));

    if (t26 != 32765) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint8_t x238 = UINT8_MAX;
	int32_t x239 = INT32_MAX;
	int16_t x240 = INT16_MAX;
	volatile uint64_t t27 = 64613993065950LLU;

    t27 = (x237^(x238>>(x239!=x240)));

    if (t27 != 1051749494LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t x249 = INT32_MAX;
	static volatile uint64_t x250 = 2997544375LLU;
	volatile int64_t x251 = -6014LL;
	int32_t x252 = -1;
	uint64_t t28 = 573086LLU;

    t28 = (x249^(x250>>(x251!=x252)));

    if (t28 != 648711460LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile uint8_t x253 = UINT8_MAX;
	int16_t x254 = INT16_MAX;
	uint16_t x255 = 1U;
	int16_t x256 = -9913;

    t29 = (x253^(x254>>(x255!=x256)));

    if (t29 != 16128) { NG(); } else { ; }
	
}

void f30(void) {
    	static int64_t x257 = INT64_MAX;
	volatile int64_t x258 = INT64_MAX;
	volatile int32_t x259 = -1;
	static int32_t x260 = INT32_MIN;
	volatile int64_t t30 = -1703537327883160LL;

    t30 = (x257^(x258>>(x259!=x260)));

    if (t30 != 4611686018427387904LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x269 = 83U;
	volatile int8_t x271 = -17;
	uint32_t x272 = UINT32_MAX;
	static int32_t t31 = -10658;

    t31 = (x269^(x270>>(x271!=x272)));

    if (t31 != 115) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x285 = 151326U;
	volatile uint32_t x286 = 7U;
	int64_t x287 = INT64_MIN;
	volatile uint8_t x288 = UINT8_MAX;
	uint32_t t32 = 1U;

    t32 = (x285^(x286>>(x287!=x288)));

    if (t32 != 151325U) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x289 = INT8_MAX;
	uint8_t x290 = 60U;
	int8_t x291 = INT8_MIN;
	int32_t x292 = INT32_MIN;
	int32_t t33 = -4625709;

    t33 = (x289^(x290>>(x291!=x292)));

    if (t33 != 97) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int16_t x293 = INT16_MIN;
	static volatile int16_t x294 = 114;
	int8_t x296 = 4;
	int32_t t34 = -175189456;

    t34 = (x293^(x294>>(x295!=x296)));

    if (t34 != -32711) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x305 = -1;
	int64_t x308 = INT64_MIN;
	volatile int64_t t35 = 159823LL;

    t35 = (x305^(x306>>(x307!=x308)));

    if (t35 != -4611686018427387904LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x333 = -1LL;
	int32_t x334 = 48;
	int8_t x335 = -1;
	uint32_t x336 = 1U;
	int64_t t36 = -228850074673064LL;

    t36 = (x333^(x334>>(x335!=x336)));

    if (t36 != -25LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x339 = 31158937U;
	uint32_t x340 = 2890U;
	uint64_t t37 = 193411080326007087LLU;

    t37 = (x337^(x338>>(x339!=x340)));

    if (t37 != 29630504215390LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x345 = 5U;
	volatile uint8_t x346 = UINT8_MAX;
	int64_t x348 = -2207305LL;

    t38 = (x345^(x346>>(x347!=x348)));

    if (t38 != 122) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x364 = -161;
	int32_t t39 = -214111;

    t39 = (x361^(x362>>(x363!=x364)));

    if (t39 != 467) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x369 = INT64_MAX;
	int16_t x371 = INT16_MIN;
	uint16_t x372 = 0U;
	int64_t t40 = 21094198360412643LL;

    t40 = (x369^(x370>>(x371!=x372)));

    if (t40 != 9223372036854775744LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x373 = INT16_MIN;
	int64_t x376 = INT64_MIN;

    t41 = (x373^(x374>>(x375!=x376)));

    if (t41 != -1073709057) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x389 = 0U;
	static uint16_t x390 = 7391U;
	volatile int16_t x391 = INT16_MIN;
	int16_t x392 = -1;
	int32_t t42 = -1;

    t42 = (x389^(x390>>(x391!=x392)));

    if (t42 != 3695) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x401 = INT32_MIN;
	uint16_t x402 = 107U;

    t43 = (x401^(x402>>(x403!=x404)));

    if (t43 != -2147483595) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x405 = UINT8_MAX;
	uint64_t x406 = UINT64_MAX;
	volatile uint16_t x408 = UINT16_MAX;

    t44 = (x405^(x406>>(x407!=x408)));

    if (t44 != 9223372036854775552LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x417 = INT32_MAX;
	static uint16_t x418 = 2790U;
	volatile int8_t x419 = INT8_MIN;
	volatile int32_t t45 = -3443;

    t45 = (x417^(x418>>(x419!=x420)));

    if (t45 != 2147480857) { NG(); } else { ; }
	
}

void f46(void) {
    	static int64_t x421 = 990348LL;
	int8_t x422 = INT8_MAX;
	int32_t x423 = INT32_MIN;
	int16_t x424 = -19;
	static volatile int64_t t46 = 439173043LL;

    t46 = (x421^(x422>>(x423!=x424)));

    if (t46 != 990387LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x425 = INT8_MAX;
	static volatile uint32_t x426 = UINT32_MAX;
	int64_t x427 = 28319177625LL;
	static int16_t x428 = INT16_MIN;
	volatile uint32_t t47 = 79294U;

    t47 = (x425^(x426>>(x427!=x428)));

    if (t47 != 2147483520U) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x429 = INT64_MAX;
	int32_t x431 = INT32_MIN;
	static int16_t x432 = INT16_MIN;

    t48 = (x429^(x430>>(x431!=x432)));

    if (t48 != 9223372036854772976LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x433 = -29;
	volatile int64_t x436 = INT64_MIN;
	volatile int32_t t49 = 8062;

    t49 = (x433^(x434>>(x435!=x436)));

    if (t49 != -1073741796) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x438 = 2;
	int8_t x439 = INT8_MIN;
	static int32_t x440 = INT32_MIN;
	static volatile int32_t t50 = 1463;

    t50 = (x437^(x438>>(x439!=x440)));

    if (t50 != -127) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x441 = UINT8_MAX;
	int8_t x443 = INT8_MIN;
	static int64_t x444 = INT64_MAX;
	volatile int64_t t51 = 723533129LL;

    t51 = (x441^(x442>>(x443!=x444)));

    if (t51 != 4611686018427387648LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x449 = -1LL;
	volatile uint8_t x450 = 7U;
	static int64_t x451 = 65058372282645LL;
	static volatile uint64_t x452 = 26523LLU;
	int64_t t52 = 1809LL;

    t52 = (x449^(x450>>(x451!=x452)));

    if (t52 != -4LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint32_t x453 = 427U;
	uint64_t x454 = 0LLU;
	uint16_t x455 = UINT16_MAX;
	uint64_t x456 = 23101907923245189LLU;

    t53 = (x453^(x454>>(x455!=x456)));

    if (t53 != 427LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x457 = -54;
	static int32_t x458 = 734;
	uint8_t x459 = UINT8_MAX;
	int32_t x460 = INT32_MIN;
	int32_t t54 = 1347;

    t54 = (x457^(x458>>(x459!=x460)));

    if (t54 != -347) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x461 = INT8_MIN;
	static uint32_t x462 = 998118440U;
	int8_t x463 = INT8_MIN;
	uint8_t x464 = UINT8_MAX;
	volatile uint32_t t55 = 0U;

    t55 = (x461^(x462>>(x463!=x464)));

    if (t55 != 3795907988U) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x470 = 185774;
	int8_t x471 = 40;
	uint32_t t56 = 11411U;

    t56 = (x469^(x470>>(x471!=x472)));

    if (t56 != 4294874408U) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x473 = -4;
	volatile uint16_t x474 = 27U;
	uint32_t x475 = UINT32_MAX;
	uint16_t x476 = 27U;
	volatile int32_t t57 = 22;

    t57 = (x473^(x474>>(x475!=x476)));

    if (t57 != -15) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x481 = -1;
	static int16_t x483 = 313;
	int32_t x484 = -43857027;
	uint64_t t58 = 173098LLU;

    t58 = (x481^(x482>>(x483!=x484)));

    if (t58 != 18446744073707340794LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x490 = 284075689U;
	int16_t x491 = INT16_MIN;
	uint32_t x492 = UINT32_MAX;
	int64_t t59 = 2035042583231162870LL;

    t59 = (x489^(x490>>(x491!=x492)));

    if (t59 != 9223372036712737963LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x493 = INT64_MAX;
	int32_t x494 = INT32_MAX;
	static int16_t x496 = INT16_MIN;
	static volatile int64_t t60 = 73263882222LL;

    t60 = (x493^(x494>>(x495!=x496)));

    if (t60 != 9223372035781033984LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x509 = INT64_MIN;
	volatile int16_t x510 = 27;
	static int16_t x511 = INT16_MIN;
	int32_t x512 = -1;

    t61 = (x509^(x510>>(x511!=x512)));

    if (t61 != -9223372036854775795LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint16_t x513 = 0U;
	uint64_t x514 = UINT64_MAX;
	static volatile int64_t x515 = INT64_MAX;
	uint64_t x516 = 10430LLU;
	volatile uint64_t t62 = 1735615132535065493LLU;

    t62 = (x513^(x514>>(x515!=x516)));

    if (t62 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint32_t x518 = 281U;
	int16_t x520 = 8689;
	int64_t t63 = 3605929815LL;

    t63 = (x517^(x518>>(x519!=x520)));

    if (t63 != -9223372036854775668LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x530 = 2756LL;

    t64 = (x529^(x530>>(x531!=x532)));

    if (t64 != 1678614757LL) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int64_t x533 = INT64_MIN;
	volatile int64_t x535 = INT64_MIN;
	static int64_t x536 = -627LL;
	int64_t t65 = -506770LL;

    t65 = (x533^(x534>>(x535!=x536)));

    if (t65 != -9223372036854775803LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint32_t x542 = 432237U;
	static int8_t x543 = INT8_MAX;
	volatile int64_t x544 = INT64_MAX;
	uint32_t t66 = 30622581U;

    t66 = (x541^(x542>>(x543!=x544)));

    if (t66 != 14379U) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x545 = -1LL;
	int64_t x546 = INT64_MAX;
	int32_t x547 = INT32_MAX;
	static int8_t x548 = INT8_MIN;
	int64_t t67 = -191494738LL;

    t67 = (x545^(x546>>(x547!=x548)));

    if (t67 != -4611686018427387904LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x553 = 55856196202371143LL;
	uint16_t x554 = UINT16_MAX;
	int8_t x555 = 2;
	uint16_t x556 = 645U;

    t68 = (x553^(x554>>(x555!=x556)));

    if (t68 != 55856196202391480LL) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x569 = -1;
	int8_t x571 = INT8_MIN;
	uint32_t x572 = 5U;
	volatile int32_t t69 = 5909;

    t69 = (x569^(x570>>(x571!=x572)));

    if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x574 = 29U;
	uint32_t x575 = 12U;
	int16_t x576 = -5019;
	int32_t t70 = 0;

    t70 = (x573^(x574>>(x575!=x576)));

    if (t70 != 15) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x585 = 0U;
	uint8_t x586 = 12U;
	uint32_t x587 = UINT32_MAX;
	volatile int16_t x588 = 285;
	volatile uint32_t t71 = 1376831310U;

    t71 = (x585^(x586>>(x587!=x588)));

    if (t71 != 6U) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int64_t x601 = INT64_MIN;
	volatile uint64_t x602 = 1096090LLU;
	uint32_t x603 = 4649897U;
	uint16_t x604 = 33U;
	volatile uint64_t t72 = 6476LLU;

    t72 = (x601^(x602>>(x603!=x604)));

    if (t72 != 9223372036855323853LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x605 = -1;
	uint8_t x606 = 13U;
	volatile int64_t x607 = INT64_MAX;
	int64_t x608 = INT64_MIN;
	volatile int32_t t73 = -1;

    t73 = (x605^(x606>>(x607!=x608)));

    if (t73 != -7) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x617 = INT16_MAX;
	int16_t x618 = INT16_MAX;
	static int16_t x619 = INT16_MIN;
	int64_t x620 = INT64_MAX;
	int32_t t74 = 164523;

    t74 = (x617^(x618>>(x619!=x620)));

    if (t74 != 16384) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x621 = INT64_MIN;
	int64_t x623 = 798775344065491LL;
	int32_t x624 = -302;

    t75 = (x621^(x622>>(x623!=x624)));

    if (t75 != -9223372036854775745LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile uint64_t x626 = UINT64_MAX;
	int16_t x628 = INT16_MAX;

    t76 = (x625^(x626>>(x627!=x628)));

    if (t76 != 9223372036854775768LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x637 = 3610332U;
	int16_t x638 = INT16_MAX;
	int32_t x639 = -7498;
	uint8_t x640 = UINT8_MAX;
	uint32_t t77 = 13680U;

    t77 = (x637^(x638>>(x639!=x640)));

    if (t77 != 3615011U) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int8_t x641 = -12;
	static uint16_t x642 = 10094U;
	uint16_t x644 = 5634U;
	volatile int32_t t78 = 4905722;

    t78 = (x641^(x642>>(x643!=x644)));

    if (t78 != -5053) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int8_t x645 = -1;
	uint32_t x646 = UINT32_MAX;
	volatile int8_t x647 = INT8_MIN;
	uint32_t t79 = 482408092U;

    t79 = (x645^(x646>>(x647!=x648)));

    if (t79 != 2147483648U) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile uint64_t x649 = UINT64_MAX;
	static uint32_t x650 = 38144U;
	uint64_t x651 = UINT64_MAX;
	int32_t x652 = INT32_MAX;
	uint64_t t80 = 2LLU;

    t80 = (x649^(x650>>(x651!=x652)));

    if (t80 != 18446744073709532543LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x653 = INT16_MAX;
	static uint16_t x654 = 304U;
	uint32_t x655 = 3532150U;
	int32_t t81 = -44732052;

    t81 = (x653^(x654>>(x655!=x656)));

    if (t81 != 32615) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint32_t x661 = 1634680201U;
	uint8_t x662 = 16U;
	int32_t x663 = 2992732;
	static int8_t x664 = INT8_MAX;
	volatile uint32_t t82 = 114718628U;

    t82 = (x661^(x662>>(x663!=x664)));

    if (t82 != 1634680193U) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int32_t x669 = INT32_MIN;
	volatile int32_t x670 = 0;
	static volatile uint64_t x671 = 14LLU;

    t83 = (x669^(x670>>(x671!=x672)));

    if (t83 != INT32_MIN) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x673 = INT8_MIN;
	uint8_t x674 = 33U;
	int32_t x675 = 85758;
	int64_t x676 = INT64_MAX;
	volatile int32_t t84 = 3902996;

    t84 = (x673^(x674>>(x675!=x676)));

    if (t84 != -112) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x683 = INT64_MIN;
	int16_t x684 = INT16_MAX;
	static uint32_t t85 = 561442U;

    t85 = (x681^(x682>>(x683!=x684)));

    if (t85 != 4294967293U) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int16_t x701 = -1326;
	volatile uint64_t x702 = UINT64_MAX;
	int64_t x703 = -1LL;
	int8_t x704 = INT8_MAX;
	volatile uint64_t t86 = 247LLU;

    t86 = (x701^(x702>>(x703!=x704)));

    if (t86 != 9223372036854777133LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x705 = 111U;
	uint32_t x706 = UINT32_MAX;
	int8_t x707 = 0;
	int16_t x708 = 0;
	volatile uint32_t t87 = 18494U;

    t87 = (x705^(x706>>(x707!=x708)));

    if (t87 != 4294967184U) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x717 = 431LLU;
	uint8_t x719 = UINT8_MAX;
	int32_t x720 = INT32_MIN;
	uint64_t t88 = 220550076213LLU;

    t88 = (x717^(x718>>(x719!=x720)));

    if (t88 != 436LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x723 = INT32_MIN;
	uint64_t x724 = 60467434LLU;
	volatile int64_t t89 = -63171776635780LL;

    t89 = (x721^(x722>>(x723!=x724)));

    if (t89 != -9223366572415041238LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x729 = 551LLU;
	uint64_t x730 = UINT64_MAX;
	uint32_t x731 = UINT32_MAX;
	int8_t x732 = -1;
	static uint64_t t90 = 129423950790681LLU;

    t90 = (x729^(x730>>(x731!=x732)));

    if (t90 != 18446744073709551064LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x733 = -1LL;
	int32_t x734 = INT32_MAX;
	uint8_t x735 = 3U;
	static int32_t x736 = -907;

    t91 = (x733^(x734>>(x735!=x736)));

    if (t91 != -1073741824LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x745 = INT16_MIN;
	uint64_t x746 = 192460008LLU;
	uint16_t x747 = 2322U;
	int32_t x748 = INT32_MIN;

    t92 = (x745^(x746>>(x747!=x748)));

    if (t92 != 18446744073613335156LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x754 = 124;
	static int32_t x755 = INT32_MAX;
	volatile int64_t t93 = 23LL;

    t93 = (x753^(x754>>(x755!=x756)));

    if (t93 != -63LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x769 = INT32_MAX;
	uint8_t x771 = 8U;
	volatile int64_t x772 = INT64_MAX;
	static volatile int32_t t94 = 704276414;

    t94 = (x769^(x770>>(x771!=x772)));

    if (t94 != 2147467264) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x773 = -1;
	uint32_t x774 = UINT32_MAX;
	static uint32_t x775 = UINT32_MAX;
	static uint32_t x776 = UINT32_MAX;

    t95 = (x773^(x774>>(x775!=x776)));

    if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint64_t x781 = 13924701187849LLU;
	int64_t x782 = 977797656551194404LL;
	static volatile uint8_t x783 = 114U;
	int8_t x784 = INT8_MAX;
	static uint64_t t96 = 2129080LLU;

    t96 = (x781^(x782>>(x783!=x784)));

    if (t96 != 488893785584341147LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile int32_t x785 = INT32_MAX;
	uint32_t x786 = UINT32_MAX;
	int16_t x787 = INT16_MIN;
	volatile uint16_t x788 = 61U;

    t97 = (x785^(x786>>(x787!=x788)));

    if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint8_t x790 = UINT8_MAX;
	uint16_t x792 = 928U;
	volatile int64_t t98 = -81373LL;

    t98 = (x789^(x790>>(x791!=x792)));

    if (t98 != 23685427413308917LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x802 = 369400603LL;
	volatile int64_t x803 = -4309169955494LL;
	uint8_t x804 = 102U;
	volatile int64_t t99 = 181967LL;

    t99 = (x801^(x802>>(x803!=x804)));

    if (t99 != -184994356LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x806 = INT8_MAX;
	volatile uint16_t x808 = 4369U;
	int32_t t100 = 103;

    t100 = (x805^(x806>>(x807!=x808)));

    if (t100 != 47) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x809 = 1696U;
	uint32_t t101 = 64354U;

    t101 = (x809^(x810>>(x811!=x812)));

    if (t101 != 1759U) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x814 = 2;
	uint16_t x816 = 6716U;
	volatile int32_t t102 = -53251;

    t102 = (x813^(x814>>(x815!=x816)));

    if (t102 != 126) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x817 = 7960932LL;
	volatile int64_t x820 = -1LL;

    t103 = (x817^(x818>>(x819!=x820)));

    if (t103 != 7960932LL) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int32_t x821 = INT32_MIN;
	int16_t x822 = 2;
	static uint16_t x823 = 1U;
	int32_t x824 = 755;
	int32_t t104 = 385690533;

    t104 = (x821^(x822>>(x823!=x824)));

    if (t104 != -2147483647) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int8_t x829 = -3;
	uint16_t x832 = UINT16_MAX;

    t105 = (x829^(x830>>(x831!=x832)));

    if (t105 != 9223372036854775810LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int64_t x841 = -1LL;
	int8_t x842 = 14;
	uint16_t x843 = 1935U;
	uint64_t x844 = UINT64_MAX;
	static volatile int64_t t106 = -2LL;

    t106 = (x841^(x842>>(x843!=x844)));

    if (t106 != -8LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x855 = 27409866492389LL;
	static uint32_t x856 = 1591U;
	int32_t t107 = -28120054;

    t107 = (x853^(x854>>(x855!=x856)));

    if (t107 != 251) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x857 = -26690218568LL;
	uint32_t x858 = 48U;
	uint8_t x859 = UINT8_MAX;
	volatile uint64_t x860 = 662305479LLU;
	volatile int64_t t108 = -68625707LL;

    t108 = (x857^(x858>>(x859!=x860)));

    if (t108 != -26690218592LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x865 = -1;
	uint64_t x866 = UINT64_MAX;
	int32_t x868 = -1;
	volatile uint64_t t109 = 4611LLU;

    t109 = (x865^(x866>>(x867!=x868)));

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	static int32_t x871 = INT32_MIN;
	volatile int32_t x872 = INT32_MIN;
	int64_t t110 = -154875595633834LL;

    t110 = (x869^(x870>>(x871!=x872)));

    if (t110 != -5480LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static int64_t x873 = -1LL;
	uint32_t x874 = 460U;
	volatile int64_t t111 = 3LL;

    t111 = (x873^(x874>>(x875!=x876)));

    if (t111 != -231LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x877 = 1496679100928463201LLU;
	int8_t x878 = 0;
	uint64_t x879 = 7055648817970854LLU;
	uint64_t t112 = 2049200920045979LLU;

    t112 = (x877^(x878>>(x879!=x880)));

    if (t112 != 1496679100928463201LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x881 = INT8_MAX;
	volatile uint32_t x882 = UINT32_MAX;
	volatile int64_t x883 = 6730731429LL;
	uint8_t x884 = 5U;
	static volatile uint32_t t113 = 2866659U;

    t113 = (x881^(x882>>(x883!=x884)));

    if (t113 != 2147483520U) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x885 = 54220545U;
	int16_t x886 = INT16_MAX;
	int16_t x887 = INT16_MAX;
	volatile int16_t x888 = -12708;

    t114 = (x885^(x886>>(x887!=x888)));

    if (t114 != 54225150U) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x889 = INT16_MAX;
	volatile int16_t x890 = INT16_MAX;
	uint64_t x892 = 54033873978982LLU;

    t115 = (x889^(x890>>(x891!=x892)));

    if (t115 != 16384) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x897 = INT32_MAX;
	volatile int64_t x898 = 20LL;
	int32_t x899 = INT32_MIN;
	volatile int64_t t116 = 213638018LL;

    t116 = (x897^(x898>>(x899!=x900)));

    if (t116 != 2147483637LL) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x901 = 2564U;
	int64_t x902 = 2585207LL;
	int64_t t117 = -12159300833630LL;

    t117 = (x901^(x902>>(x903!=x904)));

    if (t117 != 1291071LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x907 = INT64_MAX;
	int32_t x908 = INT32_MIN;
	static volatile uint32_t t118 = 2U;

    t118 = (x905^(x906>>(x907!=x908)));

    if (t118 != 4291314379U) { NG(); } else { ; }
	
}

void f119(void) {
    	static int16_t x917 = INT16_MAX;
	int32_t x918 = 262576;
	int16_t x919 = INT16_MAX;
	volatile uint64_t x920 = UINT64_MAX;
	int32_t t119 = 2533;

    t119 = (x917^(x918>>(x919!=x920)));

    if (t119 != 163623) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x929 = INT32_MIN;
	uint8_t x930 = UINT8_MAX;
	int64_t x932 = 4LL;
	static int32_t t120 = 7083;

    t120 = (x929^(x930>>(x931!=x932)));

    if (t120 != -2147483521) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x933 = 8153U;

    t121 = (x933^(x934>>(x935!=x936)));

    if (t121 != 8156) { NG(); } else { ; }
	
}

void f122(void) {
    	static int16_t x937 = -1;
	uint32_t x938 = 1U;
	int16_t x939 = -19;

    t122 = (x937^(x938>>(x939!=x940)));

    if (t122 != UINT32_MAX) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x949 = -31;
	int16_t x950 = 5592;
	int16_t x951 = -274;
	volatile int64_t x952 = 1080491692298296761LL;
	static int32_t t123 = -23179568;

    t123 = (x949^(x950>>(x951!=x952)));

    if (t123 != -2803) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x953 = INT8_MIN;
	static uint16_t x954 = 6U;
	int16_t x955 = INT16_MIN;
	int64_t x956 = -1739LL;
	volatile int32_t t124 = -243;

    t124 = (x953^(x954>>(x955!=x956)));

    if (t124 != -125) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int64_t x957 = -1LL;
	uint8_t x958 = 0U;
	int32_t x959 = INT32_MIN;
	int32_t x960 = INT32_MAX;
	int64_t t125 = 652400366845LL;

    t125 = (x957^(x958>>(x959!=x960)));

    if (t125 != -1LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x961 = -5;
	static uint16_t x963 = 723U;
	int16_t x964 = -516;
	uint64_t t126 = 341762185LLU;

    t126 = (x961^(x962>>(x963!=x964)));

    if (t126 != 18446744073709142131LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x969 = UINT8_MAX;
	int32_t x970 = INT32_MAX;
	uint32_t x971 = UINT32_MAX;
	int8_t x972 = -1;
	volatile int32_t t127 = -2205;

    t127 = (x969^(x970>>(x971!=x972)));

    if (t127 != 2147483392) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x973 = INT64_MIN;
	uint16_t x974 = 307U;
	int64_t x976 = INT64_MIN;
	int64_t t128 = 14669033628122LL;

    t128 = (x973^(x974>>(x975!=x976)));

    if (t128 != -9223372036854775655LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static int16_t x977 = -4556;
	static volatile int64_t x978 = INT64_MAX;
	static uint8_t x979 = 1U;
	static volatile int32_t x980 = -391801;
	int64_t t129 = 12697200677LL;

    t129 = (x977^(x978>>(x979!=x980)));

    if (t129 != -4611686018427383349LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static int16_t x981 = INT16_MIN;
	int8_t x983 = -1;
	uint16_t x984 = 16U;
	volatile uint64_t t130 = 975348698641772LLU;

    t130 = (x981^(x982>>(x983!=x984)));

    if (t130 != 18446732984818734543LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x985 = INT32_MAX;
	int64_t x986 = 469LL;
	static int8_t x987 = INT8_MAX;
	uint8_t x988 = UINT8_MAX;
	int64_t t131 = -658859250LL;

    t131 = (x985^(x986>>(x987!=x988)));

    if (t131 != 2147483413LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x1001 = UINT64_MAX;
	volatile int16_t x1002 = INT16_MAX;
	uint32_t x1003 = 3835405U;
	static uint16_t x1004 = UINT16_MAX;
	uint64_t t132 = 4447189040039344953LLU;

    t132 = (x1001^(x1002>>(x1003!=x1004)));

    if (t132 != 18446744073709535232LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x1006 = 1;
	uint16_t x1007 = 820U;
	volatile uint16_t x1008 = 5U;

    t133 = (x1005^(x1006>>(x1007!=x1008)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int8_t x1013 = INT8_MAX;
	uint64_t x1014 = 13605LLU;
	uint8_t x1015 = 1U;

    t134 = (x1013^(x1014>>(x1015!=x1016)));

    if (t134 != 6893LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile uint64_t x1017 = UINT64_MAX;
	int16_t x1018 = INT16_MAX;
	static volatile int32_t x1019 = INT32_MIN;
	int16_t x1020 = -1;
	volatile uint64_t t135 = 5992285435152LLU;

    t135 = (x1017^(x1018>>(x1019!=x1020)));

    if (t135 != 18446744073709535232LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x1025 = INT16_MAX;
	uint16_t x1027 = 9U;
	volatile int16_t x1028 = 8794;
	volatile int32_t t136 = 87859;

    t136 = (x1025^(x1026>>(x1027!=x1028)));

    if (t136 != 32754) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x1030 = UINT8_MAX;
	uint16_t x1031 = 6368U;
	volatile int64_t x1032 = -1LL;
	int32_t t137 = 7411357;

    t137 = (x1029^(x1030>>(x1031!=x1032)));

    if (t137 != -122) { NG(); } else { ; }
	
}

void f138(void) {
    	static int64_t x1045 = -1LL;
	uint64_t x1046 = UINT64_MAX;
	uint32_t x1047 = 69U;
	int32_t x1048 = 0;

    t138 = (x1045^(x1046>>(x1047!=x1048)));

    if (t138 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x1057 = INT16_MIN;
	volatile uint32_t x1058 = 3U;
	volatile int32_t x1059 = INT32_MAX;
	uint16_t x1060 = 1350U;
	uint32_t t139 = 274U;

    t139 = (x1057^(x1058>>(x1059!=x1060)));

    if (t139 != 4294934529U) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x1066 = 1820936423995286175LL;
	volatile int32_t x1067 = -1;
	volatile uint8_t x1068 = 4U;
	int64_t t140 = 10771666271850LL;

    t140 = (x1065^(x1066>>(x1067!=x1068)));

    if (t140 != -910468211997643088LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x1069 = INT8_MIN;
	int32_t x1070 = 156923377;
	int8_t x1071 = INT8_MAX;
	volatile uint16_t x1072 = 26U;
	volatile int32_t t141 = -1392900;

    t141 = (x1069^(x1070>>(x1071!=x1072)));

    if (t141 != -78461576) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x1073 = 141341784;
	volatile uint64_t x1074 = 4549331LLU;
	int64_t x1075 = -232LL;

    t142 = (x1073^(x1074>>(x1075!=x1076)));

    if (t142 != 139329841LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	static int16_t x1081 = INT16_MIN;
	volatile uint16_t x1082 = 1460U;
	int16_t x1083 = 110;
	static int8_t x1084 = INT8_MAX;
	int32_t t143 = -30256710;

    t143 = (x1081^(x1082>>(x1083!=x1084)));

    if (t143 != -32038) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x1089 = -1;
	uint16_t x1090 = 161U;
	static int16_t x1091 = 239;
	int32_t x1092 = -9;
	int32_t t144 = -832;

    t144 = (x1089^(x1090>>(x1091!=x1092)));

    if (t144 != -81) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x1097 = 1948133U;
	static uint8_t x1098 = 1U;
	uint8_t x1100 = 13U;
	static uint32_t t145 = 254737248U;

    t145 = (x1097^(x1098>>(x1099!=x1100)));

    if (t145 != 1948133U) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x1105 = INT8_MIN;
	static int64_t x1106 = INT64_MAX;
	int16_t x1107 = 758;
	int64_t x1108 = INT64_MAX;
	volatile int64_t t146 = 75560978232653852LL;

    t146 = (x1105^(x1106>>(x1107!=x1108)));

    if (t146 != -4611686018427387777LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x1109 = INT32_MAX;
	static uint64_t x1110 = 59382112LLU;
	int32_t x1111 = -1;
	int32_t x1112 = INT32_MIN;
	static uint64_t t147 = 10754LLU;

    t147 = (x1109^(x1110>>(x1111!=x1112)));

    if (t147 != 2117792591LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x1117 = 987721024774833LL;
	static uint16_t x1118 = UINT16_MAX;
	static int8_t x1119 = INT8_MIN;
	int32_t x1120 = -840356;
	static volatile int64_t t148 = 5357481LL;

    t148 = (x1117^(x1118>>(x1119!=x1120)));

    if (t148 != 987721024789838LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int16_t x1121 = 326;
	static uint32_t x1122 = UINT32_MAX;
	uint8_t x1124 = 61U;
	static uint32_t t149 = 7391U;

    t149 = (x1121^(x1122>>(x1123!=x1124)));

    if (t149 != 2147483321U) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x1125 = -6;
	uint32_t x1126 = UINT32_MAX;
	static int8_t x1127 = INT8_MAX;
	static uint16_t x1128 = 6530U;
	static volatile uint32_t t150 = 33583U;

    t150 = (x1125^(x1126>>(x1127!=x1128)));

    if (t150 != 2147483653U) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x1129 = -23193889LL;
	uint16_t x1130 = 27U;
	int8_t x1131 = INT8_MAX;
	volatile uint16_t x1132 = 317U;
	static int64_t t151 = 58021975901581649LL;

    t151 = (x1129^(x1130>>(x1131!=x1132)));

    if (t151 != -23193902LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static int16_t x1137 = INT16_MIN;
	uint32_t x1138 = UINT32_MAX;
	int16_t x1139 = 505;
	static int64_t x1140 = INT64_MAX;

    t152 = (x1137^(x1138>>(x1139!=x1140)));

    if (t152 != 2147516415U) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x1150 = UINT64_MAX;
	int64_t x1151 = INT64_MIN;
	volatile int32_t x1152 = 156775;
	uint64_t t153 = 4141345629005180LLU;

    t153 = (x1149^(x1150>>(x1151!=x1152)));

    if (t153 != 9223372036377554104LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x1161 = 263806278528LLU;
	uint64_t x1163 = UINT64_MAX;
	volatile int16_t x1164 = -11;

    t154 = (x1161^(x1162>>(x1163!=x1164)));

    if (t154 != 263806278528LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x1172 = -7;
	int32_t t155 = 6526225;

    t155 = (x1169^(x1170>>(x1171!=x1172)));

    if (t155 != 121) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x1174 = 1028325992114LLU;
	uint64_t t156 = 4876LLU;

    t156 = (x1173^(x1174>>(x1175!=x1176)));

    if (t156 != 9223372551017771865LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x1177 = 2U;
	int16_t x1178 = 309;
	int8_t x1179 = -57;
	int64_t x1180 = INT64_MIN;
	volatile uint32_t t157 = 12489U;

    t157 = (x1177^(x1178>>(x1179!=x1180)));

    if (t157 != 152U) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x1181 = INT8_MIN;
	uint16_t x1182 = 66U;
	int64_t x1184 = INT64_MAX;
	int32_t t158 = -3;

    t158 = (x1181^(x1182>>(x1183!=x1184)));

    if (t158 != -95) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x1185 = -1;
	volatile int32_t x1187 = INT32_MAX;
	int16_t x1188 = INT16_MIN;
	int32_t t159 = 364264757;

    t159 = (x1185^(x1186>>(x1187!=x1188)));

    if (t159 != -1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x1197 = -1;
	volatile int32_t t160 = -18;

    t160 = (x1197^(x1198>>(x1199!=x1200)));

    if (t160 != -1) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint64_t x1201 = 4048197251339LLU;
	static int8_t x1202 = 24;
	static volatile int16_t x1203 = 3160;
	uint8_t x1204 = UINT8_MAX;
	volatile uint64_t t161 = 6920809471221251LLU;

    t161 = (x1201^(x1202>>(x1203!=x1204)));

    if (t161 != 4048197251335LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x1205 = -3754;
	int16_t x1206 = 39;
	int16_t x1208 = INT16_MIN;
	volatile int32_t t162 = 500237;

    t162 = (x1205^(x1206>>(x1207!=x1208)));

    if (t162 != -3771) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int32_t x1217 = -1;
	uint8_t x1218 = 1U;
	static int32_t x1219 = -1720;
	int16_t x1220 = -1;
	int32_t t163 = -652;

    t163 = (x1217^(x1218>>(x1219!=x1220)));

    if (t163 != -1) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x1225 = INT32_MAX;
	uint64_t x1226 = 355499803LLU;
	volatile int16_t x1227 = -1;
	int16_t x1228 = INT16_MAX;
	uint64_t t164 = 83804LLU;

    t164 = (x1225^(x1226>>(x1227!=x1228)));

    if (t164 != 1969733746LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x1233 = 94;
	int8_t x1236 = INT8_MAX;
	volatile int32_t t165 = -27;

    t165 = (x1233^(x1234>>(x1235!=x1236)));

    if (t165 != 14057488) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint64_t x1245 = 3581LLU;
	uint64_t x1246 = 4966189115695147LLU;
	int8_t x1248 = INT8_MIN;
	volatile uint64_t t166 = 7778215LLU;

    t166 = (x1245^(x1246>>(x1247!=x1248)));

    if (t166 != 2483094557851112LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int8_t x1249 = -1;
	uint64_t x1250 = UINT64_MAX;
	static volatile int64_t x1252 = INT64_MAX;

    t167 = (x1249^(x1250>>(x1251!=x1252)));

    if (t167 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x1253 = 1;
	static uint8_t x1254 = 0U;
	volatile int8_t x1256 = -1;

    t168 = (x1253^(x1254>>(x1255!=x1256)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint8_t x1257 = UINT8_MAX;
	uint64_t x1258 = 1125711070LLU;
	static uint64_t x1259 = 12149LLU;
	int32_t x1260 = INT32_MIN;
	uint64_t t169 = 79526413430934930LLU;

    t169 = (x1257^(x1258>>(x1259!=x1260)));

    if (t169 != 562855568LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int64_t x1265 = INT64_MIN;
	volatile uint64_t x1266 = UINT64_MAX;
	int32_t x1267 = 41194855;
	uint16_t x1268 = UINT16_MAX;
	uint64_t t170 = UINT64_MAX;

    t170 = (x1265^(x1266>>(x1267!=x1268)));

    if (t170 != UINT64_MAX) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x1273 = 14U;
	uint64_t x1274 = 35155851323263889LLU;
	uint8_t x1275 = 8U;
	volatile uint64_t x1276 = 191515018202LLU;
	static volatile uint64_t t171 = 57021LLU;

    t171 = (x1273^(x1274>>(x1275!=x1276)));

    if (t171 != 17577925661631942LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x1281 = INT64_MIN;
	volatile uint32_t x1282 = UINT32_MAX;
	volatile int8_t x1283 = INT8_MAX;
	int16_t x1284 = INT16_MAX;

    t172 = (x1281^(x1282>>(x1283!=x1284)));

    if (t172 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x1285 = 12186LLU;
	int64_t x1286 = 20563938LL;
	volatile uint16_t x1287 = UINT16_MAX;
	uint64_t t173 = 269819188968059LLU;

    t173 = (x1285^(x1286>>(x1287!=x1288)));

    if (t173 != 10275947LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x1293 = 1;
	int32_t x1295 = 1585;
	static uint16_t x1296 = 0U;
	volatile uint64_t t174 = 36761095LLU;

    t174 = (x1293^(x1294>>(x1295!=x1296)));

    if (t174 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x1297 = INT32_MAX;
	uint32_t x1298 = 1808U;
	int32_t x1299 = INT32_MIN;
	static int32_t x1300 = -1;
	uint32_t t175 = 2017460842U;

    t175 = (x1297^(x1298>>(x1299!=x1300)));

    if (t175 != 2147482743U) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x1309 = INT32_MIN;
	int32_t x1310 = INT32_MAX;
	uint16_t x1311 = 1U;
	int64_t x1312 = 334360093367LL;
	int32_t t176 = 230259;

    t176 = (x1309^(x1310>>(x1311!=x1312)));

    if (t176 != -1073741825) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x1313 = UINT16_MAX;
	uint32_t x1314 = 2543622U;

    t177 = (x1313^(x1314>>(x1315!=x1316)));

    if (t177 != 1284092U) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x1317 = UINT16_MAX;
	uint64_t x1318 = 2078068248LLU;
	uint32_t x1319 = 1962174168U;
	int32_t x1320 = INT32_MIN;
	volatile uint64_t t178 = 52551919LLU;

    t178 = (x1317^(x1318>>(x1319!=x1320)));

    if (t178 != 1039046899LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x1322 = 53;
	uint64_t x1324 = 202545092603LLU;
	static uint32_t t179 = 5U;

    t179 = (x1321^(x1322>>(x1323!=x1324)));

    if (t179 != 987517U) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int16_t x1325 = INT16_MIN;
	uint32_t x1326 = UINT32_MAX;
	int64_t x1327 = -3157224026935642LL;
	int16_t x1328 = INT16_MAX;
	volatile uint32_t t180 = 127U;

    t180 = (x1325^(x1326>>(x1327!=x1328)));

    if (t180 != 2147516415U) { NG(); } else { ; }
	
}

void f181(void) {
    	static int16_t x1329 = -1;
	static int16_t x1331 = 58;
	volatile int8_t x1332 = 7;

    t181 = (x1329^(x1330>>(x1331!=x1332)));

    if (t181 != -1) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x1337 = 41;
	int64_t x1338 = INT64_MAX;
	int8_t x1339 = -1;
	static volatile int32_t x1340 = INT32_MIN;
	static int64_t t182 = 132274574369147617LL;

    t182 = (x1337^(x1338>>(x1339!=x1340)));

    if (t182 != 4611686018427387862LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x1341 = INT32_MIN;
	volatile int16_t x1343 = 1355;
	uint64_t x1344 = 2666827795942LLU;
	volatile uint64_t t183 = 1073485728LLU;

    t183 = (x1341^(x1342>>(x1343!=x1344)));

    if (t183 != 18446744071562068720LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x1349 = -33;
	int32_t x1350 = INT32_MAX;
	uint64_t x1351 = 243426LLU;
	static int64_t x1352 = 640LL;
	volatile int32_t t184 = 71131866;

    t184 = (x1349^(x1350>>(x1351!=x1352)));

    if (t184 != -1073741792) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint8_t x1354 = UINT8_MAX;
	uint32_t x1355 = UINT32_MAX;
	int16_t x1356 = -1;
	volatile int32_t t185 = 877866;

    t185 = (x1353^(x1354>>(x1355!=x1356)));

    if (t185 != -256) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x1361 = 669;
	int32_t x1363 = INT32_MAX;
	static int8_t x1364 = INT8_MAX;
	static int32_t t186 = -12914121;

    t186 = (x1361^(x1362>>(x1363!=x1364)));

    if (t186 != 1073741154) { NG(); } else { ; }
	
}

void f187(void) {
    	static int32_t x1365 = 7113046;
	uint8_t x1366 = 0U;
	int8_t x1368 = -1;
	static volatile int32_t t187 = -81;

    t187 = (x1365^(x1366>>(x1367!=x1368)));

    if (t187 != 7113046) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x1369 = -1;
	int16_t x1370 = INT16_MAX;
	static int16_t x1371 = -2;
	static int64_t x1372 = INT64_MAX;
	int32_t t188 = 21768;

    t188 = (x1369^(x1370>>(x1371!=x1372)));

    if (t188 != -16384) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x1373 = INT8_MIN;
	int32_t x1374 = 7368;
	int8_t x1375 = 4;
	uint16_t x1376 = 6968U;
	volatile int32_t t189 = -692216;

    t189 = (x1373^(x1374>>(x1375!=x1376)));

    if (t189 != -3612) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int64_t x1377 = -3426700825LL;
	uint32_t x1378 = 4565U;
	int32_t x1379 = INT32_MAX;
	static int32_t x1380 = INT32_MIN;
	int64_t t190 = 754128958642190631LL;

    t190 = (x1377^(x1378>>(x1379!=x1380)));

    if (t190 != -3426698995LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x1390 = 83555363;
	int16_t x1391 = 191;
	uint8_t x1392 = 24U;

    t191 = (x1389^(x1390>>(x1391!=x1392)));

    if (t191 != 41777682) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x1401 = INT32_MAX;
	uint64_t x1402 = 798378776797759LLU;
	int64_t x1403 = -8359439216059LL;
	int64_t x1404 = INT64_MAX;

    t192 = (x1401^(x1402>>(x1403!=x1404)));

    if (t192 != 399191344836320LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x1405 = UINT8_MAX;
	static uint8_t x1406 = 35U;
	static int8_t x1407 = INT8_MAX;
	int16_t x1408 = INT16_MIN;
	int32_t t193 = -5750;

    t193 = (x1405^(x1406>>(x1407!=x1408)));

    if (t193 != 238) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint16_t x1409 = UINT16_MAX;
	static uint32_t x1411 = 67788U;
	uint8_t x1412 = UINT8_MAX;

    t194 = (x1409^(x1410>>(x1411!=x1412)));

    if (t194 != 6568869) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x1433 = INT8_MAX;
	int32_t x1435 = INT32_MAX;
	int32_t x1436 = 1;
	volatile int32_t t195 = 23;

    t195 = (x1433^(x1434>>(x1435!=x1436)));

    if (t195 != 64) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int8_t x1437 = 27;
	static int32_t x1438 = 3;
	int64_t x1439 = INT64_MIN;
	static int16_t x1440 = INT16_MIN;
	volatile int32_t t196 = 270774693;

    t196 = (x1437^(x1438>>(x1439!=x1440)));

    if (t196 != 26) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x1446 = 322230880318LLU;
	volatile uint8_t x1447 = 1U;
	static int16_t x1448 = 1;
	uint64_t t197 = 10276505680LLU;

    t197 = (x1445^(x1446>>(x1447!=x1448)));

    if (t197 != 9223371714623895489LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x1461 = 1LLU;
	volatile uint16_t x1462 = UINT16_MAX;
	int64_t x1463 = -32952757LL;

    t198 = (x1461^(x1462>>(x1463!=x1464)));

    if (t198 != 32766LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x1466 = 60220244681694LLU;
	int8_t x1467 = INT8_MIN;
	int64_t x1468 = INT64_MIN;

    t199 = (x1465^(x1466>>(x1467!=x1468)));

    if (t199 != 18446713963587210863LLU) { NG(); } else { ; }
	
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

