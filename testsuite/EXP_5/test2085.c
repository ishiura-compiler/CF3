#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int16_t x4 = INT16_MAX;
int32_t t0 = 199;
static int64_t x7 = INT64_MIN;
uint8_t x9 = UINT8_MAX;
uint8_t x12 = 7U;
int64_t x19 = INT64_MIN;
static uint32_t t5 = 69262800U;
int32_t x29 = INT32_MIN;
static uint64_t x30 = 12403198086562LLU;
int16_t x32 = -4233;
uint16_t x39 = 2214U;
static volatile int8_t x43 = INT8_MIN;
int64_t x53 = INT64_MIN;
static int8_t x54 = -5;
uint64_t x59 = 1021665893022LLU;
uint32_t x64 = 165U;
static uint8_t x69 = 57U;
static volatile int8_t x72 = INT8_MIN;
static volatile int64_t t17 = 781977LL;
uint32_t x76 = 193U;
volatile int64_t t18 = 44343600881LL;
int8_t x77 = -1;
int8_t x82 = INT8_MAX;
volatile int64_t x87 = INT64_MIN;
static uint16_t x93 = 93U;
uint32_t t24 = 448U;
static volatile uint32_t x107 = 927U;
uint32_t x109 = 773579720U;
int8_t x110 = 1;
static int16_t x114 = INT16_MIN;
static int8_t x121 = INT8_MIN;
volatile int8_t x122 = INT8_MIN;
static volatile int8_t x132 = -7;
int8_t x144 = INT8_MAX;
volatile uint32_t t32 = 69U;
int64_t x145 = -208463849353LL;
volatile uint16_t x155 = UINT16_MAX;
int64_t x157 = INT64_MAX;
int32_t x171 = -1;
uint32_t x174 = UINT32_MAX;
static uint32_t t39 = 7171U;
static volatile int16_t x181 = -1;
int8_t x186 = INT8_MIN;
int64_t t41 = -598293714045LL;
int64_t x194 = -1LL;
volatile uint32_t t44 = 1546U;
volatile int64_t x207 = INT64_MIN;
volatile uint32_t x208 = 25096U;
uint16_t x215 = UINT16_MAX;
uint64_t t47 = 216775LLU;
volatile int64_t x217 = INT64_MIN;
uint64_t x223 = UINT64_MAX;
static int64_t x230 = -3232579LL;
int16_t x246 = -1;
volatile int32_t x264 = INT32_MIN;
uint64_t x267 = UINT64_MAX;
static int8_t x268 = 2;
volatile uint64_t t58 = 26LLU;
volatile int8_t x274 = 7;
int64_t t60 = 19634626LL;
int64_t x288 = 3966248087859558LL;
static volatile int64_t t62 = 457616855592LL;
int16_t x289 = -1;
uint16_t x310 = 74U;
int32_t x312 = -1045;
int64_t t67 = 0LL;
static int64_t x317 = -1LL;
static volatile uint64_t t70 = 218208795748LLU;
int16_t x328 = INT16_MIN;
static int32_t x341 = 15;
uint32_t x342 = UINT32_MAX;
int64_t x343 = INT64_MIN;
int32_t x347 = -111932;
volatile uint32_t x351 = 0U;
uint32_t x366 = 9187U;
volatile uint8_t x367 = 61U;
uint16_t x368 = 238U;
int64_t x374 = INT64_MAX;
int16_t x387 = -396;
uint32_t x389 = 158596U;
int32_t x390 = INT32_MIN;
uint64_t x393 = UINT64_MAX;
static uint8_t x396 = UINT8_MAX;
int8_t x414 = INT8_MIN;
int8_t x432 = INT8_MAX;
uint8_t x435 = 64U;
int64_t t90 = 5858678605404LL;
volatile uint16_t x445 = 2U;
volatile int8_t x454 = -1;
int32_t x457 = INT32_MAX;
volatile uint8_t x467 = 26U;
int32_t x468 = -126642987;
static int16_t x471 = -326;
int16_t x472 = INT16_MAX;
uint16_t x481 = UINT16_MAX;
int8_t x486 = INT8_MIN;


void f0(void) {
	volatile uint8_t x1 = 86U;
	int32_t x2 = INT32_MIN;
	int32_t x3 = INT32_MAX;

	t0 = (x1%((x2^x3)%x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	volatile uint64_t x6 = UINT64_MAX;
	uint16_t x8 = 8494U;
	volatile uint64_t t1 = 2245972761LLU;

	t1 = (x5%((x6^x7)%x8));

	if (t1 != 1578LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x10 = 124U;
	volatile int64_t x11 = -103149024LL;
	int64_t t2 = -190213116116156123LL;

	t2 = (x9%((x10^x11)%x12));

	if (t2 != 1LL) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int8_t x13 = INT8_MIN;
	volatile int64_t x14 = INT64_MAX;
	int8_t x15 = 3;
	int64_t x16 = INT64_MIN;
	volatile int64_t t3 = 16LL;

	t3 = (x13%((x14^x15)%x16));

	if (t3 != -128LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 27U;
	uint8_t x18 = 39U;
	int16_t x20 = INT16_MAX;
	volatile int64_t t4 = 261284749847293LL;

	t4 = (x17%((x18^x19)%x20));

	if (t4 != 27LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 2039739U;
	int8_t x22 = -1;
	volatile uint8_t x23 = 1U;
	volatile int8_t x24 = -31;

	t5 = (x21%((x22^x23)%x24));

	if (t5 != 2039739U) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	int64_t x26 = INT64_MIN;
	uint64_t x27 = UINT64_MAX;
	static uint64_t x28 = UINT64_MAX;
	uint64_t t6 = 5808007376764585716LLU;

	t6 = (x25%((x26^x27)%x28));

	if (t6 != 9223372034707292161LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x31 = UINT8_MAX;
	static uint64_t t7 = 238LLU;

	t7 = (x29%((x30^x31)%x32));

	if (t7 != 895038748267LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	int64_t x34 = 13995567LL;
	int8_t x35 = -42;
	static int16_t x36 = -2;
	volatile int64_t t8 = -1796646517049011250LL;

	t8 = (x33%((x34^x35)%x36));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 8U;
	uint64_t x38 = 32722LLU;
	volatile int8_t x40 = -1;
	uint64_t t9 = 22427732142773LLU;

	t9 = (x37%((x38^x39)%x40));

	if (t9 != 8LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = INT32_MAX;
	uint16_t x42 = 3U;
	int64_t x44 = 31404037285137LL;
	volatile int64_t t10 = -3936584001LL;

	t10 = (x41%((x42^x43)%x44));

	if (t10 != 22LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = -1LL;
	volatile int64_t x46 = INT64_MAX;
	int8_t x47 = INT8_MAX;
	int64_t x48 = 270323515369860LL;
	static volatile int64_t t11 = -1620922196161320LL;

	t11 = (x45%((x46^x47)%x48));

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = -140889973130564938LL;
	static uint8_t x50 = 0U;
	static int16_t x51 = -1;
	uint8_t x52 = UINT8_MAX;
	int64_t t12 = 3LL;

	t12 = (x49%((x50^x51)%x52));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x55 = -1;
	static uint16_t x56 = 11U;
	int64_t t13 = -7320379304843LL;

	t13 = (x53%((x54^x55)%x56));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MIN;
	uint64_t x58 = 114581385351LLU;
	int8_t x60 = INT8_MIN;
	uint64_t t14 = 41LLU;

	t14 = (x57%((x58^x59)%x60));

	if (t14 != 1021006728347LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = 5U;
	static uint16_t x62 = 512U;
	static volatile int64_t x63 = -1LL;
	volatile int64_t t15 = -4053158889219LL;

	t15 = (x61%((x62^x63)%x64));

	if (t15 != 5LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = UINT64_MAX;
	static int64_t x66 = INT64_MIN;
	int64_t x67 = INT64_MAX;
	int16_t x68 = 2380;
	static uint64_t t16 = 61340847397187186LLU;

	t16 = (x65%((x66^x67)%x68));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x70 = -1LL;
	static uint8_t x71 = 36U;

	t17 = (x69%((x70^x71)%x72));

	if (t17 != 20LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = 9;
	volatile int8_t x74 = -1;
	int64_t x75 = INT64_MIN;

	t18 = (x73%((x74^x75)%x76));

	if (t18 != 9LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x78 = INT16_MIN;
	int32_t x79 = -1;
	uint16_t x80 = UINT16_MAX;
	int32_t t19 = 960248220;

	t19 = (x77%((x78^x79)%x80));

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = 822;
	int32_t x83 = INT32_MIN;
	int64_t x84 = INT64_MAX;
	int64_t t20 = 5856383599059LL;

	t20 = (x81%((x82^x83)%x84));

	if (t20 != 822LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x85 = 1635U;
	volatile int8_t x86 = 3;
	int32_t x88 = INT32_MIN;
	volatile int64_t t21 = -10408LL;

	t21 = (x85%((x86^x87)%x88));

	if (t21 != 1635LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x94 = 1LLU;
	volatile int32_t x95 = INT32_MIN;
	volatile int16_t x96 = INT16_MIN;
	uint64_t t22 = 49504497LLU;

	t22 = (x93%((x94^x95)%x96));

	if (t22 != 93LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x97 = INT64_MIN;
	static int64_t x98 = -126630669132266530LL;
	volatile int16_t x99 = -5923;
	volatile int8_t x100 = 41;
	volatile int64_t t23 = 15515LL;

	t23 = (x97%((x98^x99)%x100));

	if (t23 != -9LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x101 = 59306U;
	uint32_t x102 = 1U;
	int16_t x103 = INT16_MIN;
	int8_t x104 = 5;

	t24 = (x101%((x102^x103)%x104));

	if (t24 != 2U) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x105 = 385636191556099LLU;
	uint16_t x106 = UINT16_MAX;
	static int64_t x108 = 334291363LL;
	uint64_t t25 = 1LLU;

	t25 = (x105%((x106^x107)%x108));

	if (t25 != 39619LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x111 = INT32_MIN;
	int16_t x112 = INT16_MAX;
	uint32_t t26 = 899U;

	t26 = (x109%((x110^x111)%x112));

	if (t26 != 773579720U) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x113 = 26U;
	volatile int8_t x115 = INT8_MIN;
	uint16_t x116 = 3589U;
	volatile int32_t t27 = -3;

	t27 = (x113%((x114^x115)%x116));

	if (t27 != 26) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x117 = 5927U;
	static uint64_t x118 = UINT64_MAX;
	static int8_t x119 = INT8_MIN;
	static uint32_t x120 = 1695667U;
	static volatile uint64_t t28 = 49022LLU;

	t28 = (x117%((x118^x119)%x120));

	if (t28 != 85LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x123 = UINT16_MAX;
	volatile int32_t x124 = INT32_MAX;
	static volatile int32_t t29 = -43075;

	t29 = (x121%((x122^x123)%x124));

	if (t29 != -128) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x125 = INT64_MAX;
	volatile uint64_t x126 = UINT64_MAX;
	volatile int8_t x127 = INT8_MIN;
	int8_t x128 = 21;
	volatile uint64_t t30 = 32867732LLU;

	t30 = (x125%((x126^x127)%x128));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x129 = -1;
	volatile uint16_t x130 = 69U;
	uint32_t x131 = 53U;
	volatile uint32_t t31 = 293681693U;

	t31 = (x129%((x130^x131)%x132));

	if (t31 != 31U) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x141 = 47;
	static uint32_t x142 = UINT32_MAX;
	static int16_t x143 = INT16_MAX;

	t32 = (x141%((x142^x143)%x144));

	if (t32 != 5U) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x146 = -1LL;
	int8_t x147 = INT8_MAX;
	volatile int16_t x148 = INT16_MAX;
	volatile int64_t t33 = -23626288756LL;

	t33 = (x145%((x146^x147)%x148));

	if (t33 != -9LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x149 = INT32_MIN;
	uint32_t x150 = 13993U;
	static uint64_t x151 = 5935LLU;
	int16_t x152 = INT16_MIN;
	uint64_t t34 = 2LLU;

	t34 = (x149%((x150^x151)%x152));

	if (t34 != 6524LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x153 = 12U;
	volatile uint32_t x154 = 234U;
	int16_t x156 = -1;
	volatile uint32_t t35 = 22189061U;

	t35 = (x153%((x154^x155)%x156));

	if (t35 != 12U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x158 = 498;
	static volatile int32_t x159 = INT32_MAX;
	int8_t x160 = INT8_MIN;
	volatile int64_t t36 = -1842699288LL;

	t36 = (x157%((x158^x159)%x160));

	if (t36 != 7LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x161 = 6526;
	static volatile uint16_t x162 = UINT16_MAX;
	uint32_t x163 = 1199U;
	volatile int32_t x164 = -4875351;
	uint32_t t37 = 0U;

	t37 = (x161%((x162^x163)%x164));

	if (t37 != 6526U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x169 = -658LL;
	int8_t x170 = INT8_MAX;
	static int16_t x172 = INT16_MIN;
	volatile int64_t t38 = 428986LL;

	t38 = (x169%((x170^x171)%x172));

	if (t38 != -18LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x173 = -1;
	int16_t x175 = INT16_MIN;
	int32_t x176 = INT32_MAX;

	t39 = (x173%((x174^x175)%x176));

	if (t39 != 3U) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x182 = 23U;
	static uint64_t x183 = 37969094064410LLU;
	int16_t x184 = INT16_MIN;
	volatile uint64_t t40 = 14498467LLU;

	t40 = (x181%((x182^x183)%x184));

	if (t40 != 29258933235120LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x185 = 10478558744LL;
	volatile uint32_t x187 = 6U;
	int64_t x188 = -23177437785780LL;

	t41 = (x185%((x186^x187)%x188));

	if (t41 != 1888624396LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x189 = UINT64_MAX;
	uint64_t x190 = 1LLU;
	uint64_t x191 = 647954320168989956LLU;
	int16_t x192 = INT16_MAX;
	uint64_t t42 = 8605089483460LLU;

	t42 = (x189%((x190^x191)%x192));

	if (t42 != 867LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x193 = -454529666;
	uint32_t x195 = 56160U;
	static int8_t x196 = INT8_MIN;
	int64_t t43 = -545321383424LL;

	t43 = (x193%((x194^x195)%x196));

	if (t43 != -82LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x197 = 1306532U;
	int16_t x198 = -4835;
	uint16_t x199 = 187U;
	int32_t x200 = 314;

	t44 = (x197%((x198^x199)%x200));

	if (t44 != 1306532U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x205 = 1;
	volatile int32_t x206 = -6;
	volatile int64_t t45 = -7852343892LL;

	t45 = (x205%((x206^x207)%x208));

	if (t45 != 1LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x209 = 1056593LL;
	static int16_t x210 = INT16_MIN;
	int8_t x211 = -1;
	volatile uint32_t x212 = 29989164U;
	int64_t t46 = -37013350277545658LL;

	t46 = (x209%((x210^x211)%x212));

	if (t46 != 8049LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x213 = 472694516446535325LLU;
	int16_t x214 = -1;
	uint64_t x216 = 3391LLU;

	t47 = (x213%((x214^x215)%x216));

	if (t47 != 1554LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x218 = 392372700685LL;
	uint8_t x219 = 91U;
	uint16_t x220 = UINT16_MAX;
	int64_t t48 = 33851755764859748LL;

	t48 = (x217%((x218^x219)%x220));

	if (t48 != -37571LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x221 = INT8_MIN;
	int32_t x222 = INT32_MIN;
	static uint64_t x224 = 114562342141572LLU;
	volatile uint64_t t49 = 872933LLU;

	t49 = (x221%((x222^x223)%x224));

	if (t49 != 2147483523LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x225 = -1LL;
	volatile int64_t x226 = INT64_MIN;
	int32_t x227 = -1;
	static int32_t x228 = -846158;
	volatile int64_t t50 = 1071890509428006417LL;

	t50 = (x225%((x226^x227)%x228));

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x229 = UINT64_MAX;
	int32_t x231 = -314;
	uint32_t x232 = 163055779U;
	uint64_t t51 = 56407LLU;

	t51 = (x229%((x230^x231)%x232));

	if (t51 != 1380658LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x233 = UINT32_MAX;
	int64_t x234 = 7935317855660LL;
	int64_t x235 = INT64_MAX;
	int8_t x236 = INT8_MIN;
	int64_t t52 = 131919325985171LL;

	t52 = (x233%((x234^x235)%x236));

	if (t52 != 76LL) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int32_t x241 = -163149;
	int32_t x242 = -630;
	static int16_t x243 = -1;
	int32_t x244 = 7301437;
	volatile int32_t t53 = -1918;

	t53 = (x241%((x242^x243)%x244));

	if (t53 != -238) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x245 = INT32_MIN;
	int64_t x247 = 8978LL;
	int16_t x248 = -2462;
	volatile int64_t t54 = -30249138073LL;

	t54 = (x245%((x246^x247)%x248));

	if (t54 != -173LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x249 = INT32_MIN;
	uint64_t x250 = 2992502LLU;
	static uint16_t x251 = UINT16_MAX;
	volatile uint8_t x252 = 5U;
	static uint64_t t55 = 258177438LLU;

	t55 = (x249%((x250^x251)%x252));

	if (t55 != 2LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x253 = INT8_MAX;
	int64_t x254 = -226996LL;
	volatile int8_t x255 = 28;
	int32_t x256 = INT32_MIN;
	volatile int64_t t56 = -43284292524207535LL;

	t56 = (x253%((x254^x255)%x256));

	if (t56 != 127LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x261 = INT16_MIN;
	int16_t x262 = -1;
	int8_t x263 = 59;
	volatile int32_t t57 = 21882;

	t57 = (x261%((x262^x263)%x264));

	if (t57 != -8) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x265 = -1;
	uint64_t x266 = 8702000LLU;

	t58 = (x265%((x266^x267)%x268));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x269 = -1LL;
	int8_t x270 = INT8_MIN;
	volatile int16_t x271 = INT16_MIN;
	volatile uint16_t x272 = UINT16_MAX;
	int64_t t59 = 472093892908LL;

	t59 = (x269%((x270^x271)%x272));

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x273 = -13512540441LL;
	static int16_t x275 = -1;
	static int64_t x276 = INT64_MIN;

	t60 = (x273%((x274^x275)%x276));

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x281 = 2U;
	int32_t x282 = -90;
	static int16_t x283 = -1;
	int8_t x284 = INT8_MIN;
	volatile uint32_t t61 = 486481946U;

	t61 = (x281%((x282^x283)%x284));

	if (t61 != 2U) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x285 = 6767430622LL;
	int64_t x286 = 67884540689LL;
	uint8_t x287 = 9U;

	t62 = (x285%((x286^x287)%x288));

	if (t62 != 6767430622LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x290 = -1;
	int32_t x291 = 119630445;
	static int16_t x292 = INT16_MIN;
	volatile int32_t t63 = -457554417;

	t63 = (x289%((x290^x291)%x292));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x297 = INT32_MAX;
	int32_t x298 = 15;
	static uint8_t x299 = 5U;
	int64_t x300 = 103990551188LL;
	int64_t t64 = -2857LL;

	t64 = (x297%((x298^x299)%x300));

	if (t64 != 7LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x301 = 15U;
	volatile int8_t x302 = INT8_MAX;
	volatile int16_t x303 = INT16_MIN;
	static uint64_t x304 = 608LLU;
	uint64_t t65 = 8845188897644691LLU;

	t65 = (x301%((x302^x303)%x304));

	if (t65 != 15LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x305 = INT8_MIN;
	int8_t x306 = INT8_MIN;
	volatile int64_t x307 = -290216770249543LL;
	int8_t x308 = 11;
	int64_t t66 = -32174LL;

	t66 = (x305%((x306^x307)%x308));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x309 = -1;
	static int64_t x311 = -1LL;

	t67 = (x309%((x310^x311)%x312));

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x313 = UINT16_MAX;
	uint64_t x314 = 185848489419631821LLU;
	uint32_t x315 = 12796U;
	int8_t x316 = -1;
	volatile uint64_t t68 = 44LLU;

	t68 = (x313%((x314^x315)%x316));

	if (t68 != 65535LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x318 = 52;
	uint32_t x319 = 1268U;
	static int16_t x320 = INT16_MAX;
	int64_t t69 = -6725151245LL;

	t69 = (x317%((x318^x319)%x320));

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x321 = INT16_MIN;
	static uint64_t x322 = 840104524841LLU;
	uint16_t x323 = 982U;
	static int8_t x324 = -11;

	t70 = (x321%((x322^x323)%x324));

	if (t70 != 249449925677LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x325 = 2322U;
	int16_t x326 = -1;
	int64_t x327 = -3249543620LL;
	int64_t t71 = 5749021264068LL;

	t71 = (x325%((x326^x327)%x328));

	if (t71 != 2322LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x329 = 559134653231LLU;
	int64_t x330 = 3LL;
	static volatile int64_t x331 = INT64_MAX;
	static volatile int32_t x332 = 27715;
	uint64_t t72 = 249148006LLU;

	t72 = (x329%((x330^x331)%x332));

	if (t72 != 71LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x333 = -1;
	int64_t x334 = -1LL;
	uint16_t x335 = 91U;
	int64_t x336 = INT64_MAX;
	int64_t t73 = 1360379099LL;

	t73 = (x333%((x334^x335)%x336));

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x344 = INT16_MIN;
	int64_t t74 = 41723LL;

	t74 = (x341%((x342^x343)%x344));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x345 = INT32_MAX;
	int32_t x346 = 649906;
	static int8_t x348 = INT8_MIN;
	volatile int32_t t75 = -85;

	t75 = (x345%((x346^x347)%x348));

	if (t75 != 7) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x349 = INT8_MIN;
	int8_t x350 = INT8_MIN;
	uint8_t x352 = 45U;
	uint32_t t76 = 3823897U;

	t76 = (x349%((x350^x351)%x352));

	if (t76 != 30U) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x365 = 2051624U;
	volatile uint32_t t77 = 1540034723U;

	t77 = (x365%((x366^x367)%x368));

	if (t77 != 116U) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int16_t x373 = INT16_MIN;
	static int64_t x375 = 22557359341365LL;
	static uint32_t x376 = 2331607U;
	static volatile int64_t t78 = 53407LL;

	t78 = (x373%((x374^x375)%x376));

	if (t78 != -32768LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x377 = 719915U;
	static int64_t x378 = INT64_MIN;
	uint32_t x379 = 3826243U;
	int8_t x380 = INT8_MIN;
	static volatile int64_t t79 = 36332LL;

	t79 = (x377%((x378^x379)%x380));

	if (t79 != 54LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x385 = UINT8_MAX;
	int16_t x386 = -1;
	static uint64_t x388 = 63349916LLU;
	volatile uint64_t t80 = 1093065233794LLU;

	t80 = (x385%((x386^x387)%x388));

	if (t80 != 255LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x391 = 962278278LLU;
	int32_t x392 = INT32_MIN;
	volatile uint64_t t81 = 2297246261935029358LLU;

	t81 = (x389%((x390^x391)%x392));

	if (t81 != 158596LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x394 = INT16_MIN;
	uint32_t x395 = 4095951U;
	uint64_t t82 = 0LLU;

	t82 = (x393%((x394^x395)%x396));

	if (t82 != 110LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x397 = INT64_MIN;
	static int64_t x398 = INT64_MAX;
	int64_t x399 = -46790646954353411LL;
	int8_t x400 = INT8_MAX;
	int64_t t83 = 1076377384094LL;

	t83 = (x397%((x398^x399)%x400));

	if (t83 != -18LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x413 = -1;
	static uint32_t x415 = UINT32_MAX;
	static volatile uint16_t x416 = UINT16_MAX;
	static volatile uint32_t t84 = 34659499U;

	t84 = (x413%((x414^x415)%x416));

	if (t84 != 15U) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x417 = INT32_MIN;
	static int8_t x418 = -1;
	static int64_t x419 = 12075LL;
	static int32_t x420 = -17009;
	int64_t t85 = 5232007LL;

	t85 = (x417%((x418^x419)%x420));

	if (t85 != -8568LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x421 = 1;
	static uint16_t x422 = UINT16_MAX;
	int8_t x423 = -28;
	volatile int8_t x424 = INT8_MIN;
	volatile int32_t t86 = -894028213;

	t86 = (x421%((x422^x423)%x424));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x429 = -3136LL;
	volatile int64_t x430 = 48853183756LL;
	int8_t x431 = INT8_MIN;
	static volatile int64_t t87 = -834628054364LL;

	t87 = (x429%((x430^x431)%x432));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x433 = 64U;
	int32_t x434 = -1;
	uint32_t x436 = UINT32_MAX;
	static uint32_t t88 = 1U;

	t88 = (x433%((x434^x435)%x436));

	if (t88 != 64U) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x437 = 39U;
	uint8_t x438 = UINT8_MAX;
	int16_t x439 = INT16_MIN;
	int8_t x440 = INT8_MIN;
	volatile int32_t t89 = -61448326;

	t89 = (x437%((x438^x439)%x440));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x441 = INT64_MIN;
	uint32_t x442 = 551U;
	int64_t x443 = -310LL;
	int8_t x444 = INT8_MAX;

	t90 = (x441%((x442^x443)%x444));

	if (t90 != -8LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x446 = UINT32_MAX;
	int32_t x447 = INT32_MIN;
	static uint32_t x448 = UINT32_MAX;
	volatile uint32_t t91 = 254993797U;

	t91 = (x445%((x446^x447)%x448));

	if (t91 != 2U) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x453 = UINT8_MAX;
	int32_t x455 = INT32_MIN;
	uint32_t x456 = 10U;
	static uint32_t t92 = 1U;

	t92 = (x453%((x454^x455)%x456));

	if (t92 != 3U) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x458 = 8U;
	volatile int8_t x459 = INT8_MIN;
	static volatile int16_t x460 = INT16_MAX;
	int32_t t93 = 353;

	t93 = (x457%((x458^x459)%x460));

	if (t93 != 7) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x461 = 11;
	static volatile uint32_t x462 = 1319720U;
	uint64_t x463 = 54186375276653LLU;
	int64_t x464 = INT64_MAX;
	volatile uint64_t t94 = 1003633750097054030LLU;

	t94 = (x461%((x462^x463)%x464));

	if (t94 != 11LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x465 = INT32_MAX;
	uint8_t x466 = 0U;
	volatile int32_t t95 = 423;

	t95 = (x465%((x466^x467)%x468));

	if (t95 != 23) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x469 = -1;
	uint64_t x470 = UINT64_MAX;
	volatile uint64_t t96 = 1573915477320815LLU;

	t96 = (x469%((x470^x471)%x472));

	if (t96 != 15LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x482 = 219U;
	int32_t x483 = -222;
	static int8_t x484 = INT8_MIN;
	volatile uint32_t t97 = 283287U;

	t97 = (x481%((x482^x483)%x484));

	if (t97 != 74U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x485 = INT16_MAX;
	uint8_t x487 = 49U;
	uint32_t x488 = 190931U;
	uint32_t t98 = 452676244U;

	t98 = (x485%((x486^x487)%x488));

	if (t98 != 32767U) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x489 = 1268;
	int32_t x490 = -7525;
	int16_t x491 = INT16_MAX;
	int16_t x492 = INT16_MAX;
	int32_t t99 = -237384;

	t99 = (x489%((x490^x491)%x492));

	if (t99 != 1268) { NG(); } else { ; }
	
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


    return 0;
}

