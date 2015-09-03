#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x2 = 49LLU;
static volatile int16_t x4 = -1;
static volatile int32_t t0 = 17;
volatile int32_t t1 = -3020129;
uint64_t t2 = 37LLU;
int32_t x13 = -28;
uint64_t x18 = 69630LLU;
int32_t x21 = INT32_MIN;
int8_t x24 = INT8_MAX;
int32_t t5 = -24524637;
int8_t x28 = 2;
int8_t x34 = 14;
int32_t x40 = INT32_MIN;
uint16_t x52 = 227U;
int8_t x58 = -57;
int16_t x62 = 16013;
int32_t x67 = INT32_MIN;
int32_t x68 = INT32_MIN;
uint32_t x82 = 904U;
uint8_t x85 = 9U;
static int64_t x92 = 16309144012729LL;
int64_t t22 = -1657LL;
int16_t x101 = INT16_MAX;
int16_t x104 = -1599;
uint32_t t25 = 118U;
volatile int64_t x119 = -2302LL;
static uint64_t x121 = 21LLU;
volatile uint32_t t27 = 726U;
uint8_t x127 = UINT8_MAX;
volatile int16_t x137 = -1;
volatile uint32_t x139 = UINT32_MAX;
static uint32_t x151 = 138261342U;
static uint16_t x154 = 1866U;
int32_t x156 = INT32_MAX;
int32_t x168 = -1827;
static volatile uint64_t t38 = 225175LLU;
static int64_t x175 = INT64_MIN;
static int32_t x176 = -1;
volatile int8_t x180 = -16;
volatile uint32_t x181 = 26445171U;
uint64_t x194 = UINT64_MAX;
static int32_t x196 = 19591;
int64_t x198 = INT64_MAX;
volatile int32_t x199 = -1;
int8_t x201 = INT8_MAX;
int16_t x202 = INT16_MIN;
int16_t x208 = INT16_MAX;
int32_t t48 = 6;
int64_t x210 = INT64_MIN;
volatile uint8_t x213 = 2U;
static uint8_t x214 = 3U;
static volatile int32_t t50 = -3;
static uint64_t t52 = 767189456LLU;
int64_t x227 = 3240875162292238169LL;
uint16_t x230 = 5U;
volatile int16_t x235 = INT16_MIN;
static int8_t x238 = INT8_MAX;
volatile int8_t x244 = 7;
static int8_t x246 = -11;
int32_t x250 = -5789592;
static int32_t x254 = INT32_MAX;
uint16_t x255 = 31484U;
uint32_t x259 = 396611255U;
volatile uint64_t t61 = 454224LLU;
static uint32_t x264 = 13201860U;
uint64_t x273 = 397263348LLU;
volatile int8_t x281 = INT8_MIN;
volatile int64_t x285 = INT64_MAX;
static int8_t x301 = INT8_MAX;
int8_t x308 = INT8_MAX;
uint16_t x309 = UINT16_MAX;
int32_t x312 = -8047;
volatile int64_t x313 = INT64_MAX;
static int64_t x316 = INT64_MAX;
int64_t t75 = 47785626818277837LL;
static int64_t x323 = 792515572LL;
static int64_t t77 = 11391458LL;
static volatile int16_t x326 = 2003;
int8_t x328 = INT8_MAX;
int16_t x344 = -5;
uint8_t x347 = 37U;
volatile uint8_t x348 = UINT8_MAX;
uint64_t x350 = 1120115855414384LLU;
int32_t x352 = INT32_MAX;
static volatile int8_t x360 = -3;
static int32_t x367 = INT32_MAX;
static uint32_t x374 = UINT32_MAX;
volatile int64_t t89 = -343035028081LL;
static int64_t x379 = -123877575LL;
int64_t x383 = -1LL;
volatile int64_t t92 = -967626LL;
int16_t x390 = -1;
uint16_t x392 = UINT16_MAX;
int16_t x396 = INT16_MIN;
int32_t x398 = INT32_MAX;
int32_t x406 = -299096904;
uint64_t t96 = 1340043197500811LLU;
int8_t x412 = 4;
volatile int32_t t97 = 235;
static volatile uint32_t t98 = 320612U;


void f0(void) {
	uint32_t x1 = 230U;
	static int8_t x3 = 1;

	t0 = ((x1==x2)|(x3%x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = INT32_MIN;
	uint16_t x6 = 902U;
	int16_t x7 = 141;
	int8_t x8 = -15;

	t1 = ((x5==x6)|(x7%x8));

	if (t1 != 6) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x9 = UINT32_MAX;
	int16_t x10 = -1;
	uint64_t x11 = 58109224437LLU;
	volatile uint8_t x12 = UINT8_MAX;

	t2 = ((x9==x10)|(x11%x12));

	if (t2 != 133LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x14 = 147;
	uint16_t x15 = UINT16_MAX;
	int32_t x16 = -21;
	volatile int32_t t3 = -57;

	t3 = ((x13==x14)|(x15%x16));

	if (t3 != 15) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 1U;
	int8_t x19 = INT8_MIN;
	int32_t x20 = INT32_MAX;
	int32_t t4 = 3089;

	t4 = ((x17==x18)|(x19%x20));

	if (t4 != -128) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x22 = INT64_MAX;
	int8_t x23 = 11;

	t5 = ((x21==x22)|(x23%x24));

	if (t5 != 11) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -1;
	int8_t x26 = INT8_MIN;
	uint16_t x27 = 939U;
	volatile int32_t t6 = 1;

	t6 = ((x25==x26)|(x27%x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = 287;
	volatile int32_t x30 = 18456;
	int64_t x31 = INT64_MAX;
	static int16_t x32 = INT16_MIN;
	static volatile int64_t t7 = -813671919LL;

	t7 = ((x29==x30)|(x31%x32));

	if (t7 != 32767LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -133592;
	int32_t x35 = INT32_MIN;
	int64_t x36 = 20109945LL;
	static volatile int64_t t8 = 6LL;

	t8 = ((x33==x34)|(x35%x36));

	if (t8 != -15829478LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x37 = 19U;
	static int32_t x38 = -1;
	uint16_t x39 = 1U;
	int32_t t9 = 90;

	t9 = ((x37==x38)|(x39%x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = INT8_MIN;
	int32_t x46 = 323692605;
	uint32_t x47 = UINT32_MAX;
	int32_t x48 = -13;
	volatile uint32_t t10 = 0U;

	t10 = ((x45==x46)|(x47%x48));

	if (t10 != 12U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x49 = -20;
	static volatile int8_t x50 = 2;
	uint16_t x51 = UINT16_MAX;
	int32_t t11 = -5502300;

	t11 = ((x49==x50)|(x51%x52));

	if (t11 != 159) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x53 = 510789U;
	int32_t x54 = -1;
	int8_t x55 = INT8_MAX;
	uint8_t x56 = UINT8_MAX;
	volatile int32_t t12 = -3;

	t12 = ((x53==x54)|(x55%x56));

	if (t12 != 127) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x57 = INT8_MIN;
	volatile int16_t x59 = -4;
	uint16_t x60 = 1U;
	int32_t t13 = 12;

	t13 = ((x57==x58)|(x59%x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = INT8_MIN;
	static int16_t x63 = -7;
	static uint32_t x64 = UINT32_MAX;
	static uint32_t t14 = 523575U;

	t14 = ((x61==x62)|(x63%x64));

	if (t14 != 4294967289U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = INT16_MIN;
	volatile int32_t x66 = INT32_MIN;
	static int32_t t15 = 31;

	t15 = ((x65==x66)|(x67%x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x73 = -1LL;
	int32_t x74 = INT32_MIN;
	static uint32_t x75 = 1U;
	volatile int8_t x76 = -1;
	uint32_t t16 = 81925144U;

	t16 = ((x73==x74)|(x75%x76));

	if (t16 != 1U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x77 = -439852565;
	uint8_t x78 = 0U;
	int32_t x79 = INT32_MAX;
	volatile uint8_t x80 = 21U;
	static int32_t t17 = 758362085;

	t17 = ((x77==x78)|(x79%x80));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x81 = UINT32_MAX;
	int16_t x83 = 1498;
	static int64_t x84 = INT64_MAX;
	int64_t t18 = -6918861600LL;

	t18 = ((x81==x82)|(x83%x84));

	if (t18 != 1498LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x86 = 45U;
	int16_t x87 = 319;
	int16_t x88 = -1;
	volatile int32_t t19 = -222357016;

	t19 = ((x85==x86)|(x87%x88));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x89 = 27U;
	volatile int32_t x90 = INT32_MIN;
	volatile int32_t x91 = -566;
	volatile int64_t t20 = 1LL;

	t20 = ((x89==x90)|(x91%x92));

	if (t20 != -566LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x93 = UINT32_MAX;
	int8_t x94 = INT8_MIN;
	int8_t x95 = INT8_MIN;
	static int32_t x96 = INT32_MIN;
	volatile int32_t t21 = 914700;

	t21 = ((x93==x94)|(x95%x96));

	if (t21 != -128) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x97 = INT32_MIN;
	uint32_t x98 = 1880899679U;
	int64_t x99 = 267762786262876236LL;
	int64_t x100 = 33187520LL;

	t22 = ((x97==x98)|(x99%x100));

	if (t22 != 14898316LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x102 = -1;
	int64_t x103 = -1LL;
	int64_t t23 = -52570LL;

	t23 = ((x101==x102)|(x103%x104));

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x105 = INT8_MIN;
	uint32_t x106 = 11371U;
	volatile int32_t x107 = INT32_MIN;
	int8_t x108 = INT8_MIN;
	int32_t t24 = -237427;

	t24 = ((x105==x106)|(x107%x108));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x113 = INT16_MAX;
	int8_t x114 = INT8_MAX;
	uint8_t x115 = 1U;
	uint32_t x116 = 2773764U;

	t25 = ((x113==x114)|(x115%x116));

	if (t25 != 1U) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x117 = INT16_MIN;
	uint32_t x118 = UINT32_MAX;
	int16_t x120 = -798;
	int64_t t26 = 2508578021LL;

	t26 = ((x117==x118)|(x119%x120));

	if (t26 != -706LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x122 = 32538U;
	uint32_t x123 = UINT32_MAX;
	static int16_t x124 = -14879;

	t27 = ((x121==x122)|(x123%x124));

	if (t27 != 14878U) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x125 = -1664;
	volatile uint8_t x126 = 89U;
	volatile int8_t x128 = -1;
	volatile int32_t t28 = 795;

	t28 = ((x125==x126)|(x127%x128));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x129 = 6846256243LLU;
	volatile uint8_t x130 = UINT8_MAX;
	int32_t x131 = -80254842;
	volatile int8_t x132 = INT8_MAX;
	volatile int32_t t29 = 125490;

	t29 = ((x129==x130)|(x131%x132));

	if (t29 != -113) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x133 = -618;
	static uint8_t x134 = 6U;
	int16_t x135 = -2;
	volatile uint32_t x136 = UINT32_MAX;
	static volatile uint32_t t30 = 1U;

	t30 = ((x133==x134)|(x135%x136));

	if (t30 != 4294967294U) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x138 = 79001374LLU;
	volatile uint32_t x140 = 58U;
	volatile uint32_t t31 = 0U;

	t31 = ((x137==x138)|(x139%x140));

	if (t31 != 15U) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x141 = 998147025372716LLU;
	int64_t x142 = INT64_MIN;
	volatile uint8_t x143 = 4U;
	static uint8_t x144 = UINT8_MAX;
	volatile int32_t t32 = -6868964;

	t32 = ((x141==x142)|(x143%x144));

	if (t32 != 4) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x145 = -578159412768698LL;
	volatile int64_t x146 = 56141495874095396LL;
	static volatile int64_t x147 = -797805260LL;
	volatile uint8_t x148 = UINT8_MAX;
	int64_t t33 = -474034821913LL;

	t33 = ((x145==x146)|(x147%x148));

	if (t33 != -20LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x149 = 64U;
	int16_t x150 = INT16_MAX;
	static int16_t x152 = 7173;
	volatile uint32_t t34 = 652885622U;

	t34 = ((x149==x150)|(x151%x152));

	if (t34 != 1767U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x153 = INT8_MIN;
	int16_t x155 = INT16_MIN;
	static int32_t t35 = 110630;

	t35 = ((x153==x154)|(x155%x156));

	if (t35 != -32768) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x157 = INT16_MIN;
	uint8_t x158 = UINT8_MAX;
	int32_t x159 = INT32_MAX;
	int64_t x160 = 1010451126794396815LL;
	static volatile int64_t t36 = -20948486377LL;

	t36 = ((x157==x158)|(x159%x160));

	if (t36 != 2147483647LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x161 = INT8_MAX;
	int16_t x162 = INT16_MIN;
	static int8_t x163 = INT8_MAX;
	volatile int64_t x164 = INT64_MIN;
	volatile int64_t t37 = 1053LL;

	t37 = ((x161==x162)|(x163%x164));

	if (t37 != 127LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x165 = 0;
	int64_t x166 = -352621LL;
	uint64_t x167 = UINT64_MAX;

	t38 = ((x165==x166)|(x167%x168));

	if (t38 != 1826LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x169 = INT8_MAX;
	static int32_t x170 = INT32_MAX;
	int8_t x171 = INT8_MIN;
	int64_t x172 = INT64_MAX;
	volatile int64_t t39 = -1606LL;

	t39 = ((x169==x170)|(x171%x172));

	if (t39 != -128LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x173 = -1;
	uint8_t x174 = 1U;
	volatile int64_t t40 = -69960LL;

	t40 = ((x173==x174)|(x175%x176));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x177 = 29U;
	int8_t x178 = INT8_MIN;
	int32_t x179 = INT32_MIN;
	int32_t t41 = -12122529;

	t41 = ((x177==x178)|(x179%x180));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x182 = -1;
	int64_t x183 = -3811324623670LL;
	int64_t x184 = INT64_MAX;
	volatile int64_t t42 = 1LL;

	t42 = ((x181==x182)|(x183%x184));

	if (t42 != -3811324623670LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x185 = INT32_MIN;
	int16_t x186 = INT16_MIN;
	static int32_t x187 = -508;
	uint8_t x188 = UINT8_MAX;
	int32_t t43 = 54330506;

	t43 = ((x185==x186)|(x187%x188));

	if (t43 != -253) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x189 = INT8_MIN;
	volatile uint64_t x190 = 109020865973309950LLU;
	int8_t x191 = INT8_MAX;
	int16_t x192 = INT16_MAX;
	int32_t t44 = 212317887;

	t44 = ((x189==x190)|(x191%x192));

	if (t44 != 127) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x193 = INT32_MAX;
	int32_t x195 = 0;
	int32_t t45 = -121319600;

	t45 = ((x193==x194)|(x195%x196));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x197 = INT32_MIN;
	int8_t x200 = 3;
	static volatile int32_t t46 = -2503386;

	t46 = ((x197==x198)|(x199%x200));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x203 = 6032289164LL;
	int8_t x204 = INT8_MAX;
	volatile int64_t t47 = -477LL;

	t47 = ((x201==x202)|(x203%x204));

	if (t47 != 111LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x205 = -138;
	volatile int32_t x206 = -1;
	volatile int16_t x207 = 1;

	t48 = ((x205==x206)|(x207%x208));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x209 = 17160LL;
	static int64_t x211 = INT64_MIN;
	int64_t x212 = -33602485111260520LL;
	volatile int64_t t49 = 1LL;

	t49 = ((x209==x210)|(x211%x212));

	if (t49 != -16291116369393328LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x215 = -1;
	int32_t x216 = INT32_MAX;

	t50 = ((x213==x214)|(x215%x216));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x217 = -2;
	uint32_t x218 = UINT32_MAX;
	uint64_t x219 = 7062073365659LLU;
	int32_t x220 = 2772;
	static uint64_t t51 = 1LLU;

	t51 = ((x217==x218)|(x219%x220));

	if (t51 != 851LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x221 = 4649U;
	int64_t x222 = INT64_MIN;
	uint64_t x223 = UINT64_MAX;
	int16_t x224 = INT16_MIN;

	t52 = ((x221==x222)|(x223%x224));

	if (t52 != 32767LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x225 = -176220;
	volatile int16_t x226 = 665;
	static uint64_t x228 = 14443632628705LLU;
	volatile uint64_t t53 = 42503LLU;

	t53 = ((x225==x226)|(x227%x228));

	if (t53 != 12873063410269LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x229 = 259499407U;
	static uint64_t x231 = UINT64_MAX;
	int8_t x232 = INT8_MAX;
	static uint64_t t54 = 125LLU;

	t54 = ((x229==x230)|(x231%x232));

	if (t54 != 1LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x233 = 3794U;
	static int32_t x234 = -1;
	int8_t x236 = 25;
	int32_t t55 = 28;

	t55 = ((x233==x234)|(x235%x236));

	if (t55 != -18) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x237 = 375003955U;
	uint16_t x239 = UINT16_MAX;
	uint8_t x240 = 12U;
	static int32_t t56 = -769006350;

	t56 = ((x237==x238)|(x239%x240));

	if (t56 != 3) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x241 = UINT64_MAX;
	static volatile uint64_t x242 = UINT64_MAX;
	uint32_t x243 = UINT32_MAX;
	static uint32_t t57 = 356U;

	t57 = ((x241==x242)|(x243%x244));

	if (t57 != 3U) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x245 = 24U;
	volatile int8_t x247 = -7;
	int16_t x248 = INT16_MAX;
	volatile int32_t t58 = 346181272;

	t58 = ((x245==x246)|(x247%x248));

	if (t58 != -7) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x249 = 0;
	int32_t x251 = -1;
	int64_t x252 = INT64_MIN;
	static volatile int64_t t59 = 640012973963686LL;

	t59 = ((x249==x250)|(x251%x252));

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x253 = 1;
	int64_t x256 = 4LL;
	static int64_t t60 = -436604449LL;

	t60 = ((x253==x254)|(x255%x256));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x257 = INT8_MAX;
	int8_t x258 = 1;
	uint64_t x260 = 29LLU;

	t61 = ((x257==x258)|(x259%x260));

	if (t61 != 5LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x261 = INT64_MIN;
	int64_t x262 = INT64_MIN;
	int32_t x263 = 0;
	uint32_t t62 = 7185U;

	t62 = ((x261==x262)|(x263%x264));

	if (t62 != 1U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x265 = INT16_MAX;
	int16_t x266 = -12;
	volatile uint64_t x267 = 3969429943237736LLU;
	volatile int16_t x268 = -1;
	uint64_t t63 = 4969897002117797LLU;

	t63 = ((x265==x266)|(x267%x268));

	if (t63 != 3969429943237736LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x269 = 9783433U;
	int8_t x270 = -2;
	volatile int16_t x271 = INT16_MIN;
	static uint16_t x272 = 5U;
	volatile int32_t t64 = 675780715;

	t64 = ((x269==x270)|(x271%x272));

	if (t64 != -3) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x274 = 5U;
	uint16_t x275 = UINT16_MAX;
	volatile int16_t x276 = 104;
	int32_t t65 = -1;

	t65 = ((x273==x274)|(x275%x276));

	if (t65 != 15) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x277 = -8103;
	int64_t x278 = INT64_MIN;
	uint8_t x279 = UINT8_MAX;
	int8_t x280 = 5;
	volatile int32_t t66 = -266846710;

	t66 = ((x277==x278)|(x279%x280));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x282 = 1;
	static volatile int8_t x283 = 15;
	uint64_t x284 = 184542953LLU;
	static uint64_t t67 = 28462LLU;

	t67 = ((x281==x282)|(x283%x284));

	if (t67 != 15LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x286 = INT64_MIN;
	uint64_t x287 = 6774855907623LLU;
	volatile int8_t x288 = -1;
	volatile uint64_t t68 = 260046884409562LLU;

	t68 = ((x285==x286)|(x287%x288));

	if (t68 != 6774855907623LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x289 = INT32_MIN;
	int32_t x290 = INT32_MIN;
	int64_t x291 = -2708997LL;
	int32_t x292 = -1;
	int64_t t69 = 6781196950774LL;

	t69 = ((x289==x290)|(x291%x292));

	if (t69 != 1LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x293 = 16115806228LLU;
	uint8_t x294 = UINT8_MAX;
	int32_t x295 = INT32_MIN;
	volatile int32_t x296 = -812131;
	static volatile int32_t t70 = -30322486;

	t70 = ((x293==x294)|(x295%x296));

	if (t70 != -209284) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x297 = INT64_MIN;
	int32_t x298 = INT32_MAX;
	volatile int64_t x299 = -1LL;
	int32_t x300 = INT32_MAX;
	volatile int64_t t71 = -112995LL;

	t71 = ((x297==x298)|(x299%x300));

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x302 = -14719;
	uint32_t x303 = UINT32_MAX;
	static int32_t x304 = 30347595;
	volatile uint32_t t72 = 20647614U;

	t72 = ((x301==x302)|(x303%x304));

	if (t72 != 15956400U) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x305 = -1LL;
	int8_t x306 = -1;
	static int8_t x307 = INT8_MIN;
	int32_t t73 = 23125901;

	t73 = ((x305==x306)|(x307%x308));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x310 = INT32_MAX;
	int16_t x311 = 929;
	volatile int32_t t74 = -5;

	t74 = ((x309==x310)|(x311%x312));

	if (t74 != 929) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x314 = 3LLU;
	int16_t x315 = INT16_MIN;

	t75 = ((x313==x314)|(x315%x316));

	if (t75 != -32768LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x317 = INT8_MAX;
	int64_t x318 = INT64_MIN;
	volatile uint64_t x319 = 6LLU;
	uint64_t x320 = 1613514166442LLU;
	static volatile uint64_t t76 = 3708242762013443LLU;

	t76 = ((x317==x318)|(x319%x320));

	if (t76 != 6LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x321 = INT64_MIN;
	volatile int16_t x322 = INT16_MAX;
	int16_t x324 = INT16_MIN;

	t77 = ((x321==x322)|(x323%x324));

	if (t77 != 21492LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x325 = 3143U;
	static uint32_t x327 = 43602U;
	static uint32_t t78 = 13226U;

	t78 = ((x325==x326)|(x327%x328));

	if (t78 != 41U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x329 = -1;
	uint32_t x330 = 1923478U;
	uint64_t x331 = 98769061133131LLU;
	int16_t x332 = INT16_MIN;
	volatile uint64_t t79 = 31102LLU;

	t79 = ((x329==x330)|(x331%x332));

	if (t79 != 98769061133131LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x333 = -679009LL;
	int64_t x334 = -284526593276733525LL;
	uint64_t x335 = 18LLU;
	int8_t x336 = 1;
	uint64_t t80 = 55515738333898895LLU;

	t80 = ((x333==x334)|(x335%x336));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x337 = INT8_MIN;
	int16_t x338 = 0;
	uint64_t x339 = 15553697993908419LLU;
	static int8_t x340 = -1;
	static volatile uint64_t t81 = 1800646545LLU;

	t81 = ((x337==x338)|(x339%x340));

	if (t81 != 15553697993908419LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x341 = INT64_MIN;
	int8_t x342 = -1;
	static volatile int64_t x343 = INT64_MIN;
	volatile int64_t t82 = 81912403501LL;

	t82 = ((x341==x342)|(x343%x344));

	if (t82 != -3LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x345 = 81U;
	static volatile int8_t x346 = INT8_MAX;
	volatile int32_t t83 = 25820023;

	t83 = ((x345==x346)|(x347%x348));

	if (t83 != 37) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x349 = INT32_MAX;
	volatile int16_t x351 = 767;
	static int32_t t84 = 1;

	t84 = ((x349==x350)|(x351%x352));

	if (t84 != 767) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x353 = INT64_MAX;
	int8_t x354 = INT8_MAX;
	static volatile uint16_t x355 = UINT16_MAX;
	uint64_t x356 = 566162LLU;
	volatile uint64_t t85 = 1339749625LLU;

	t85 = ((x353==x354)|(x355%x356));

	if (t85 != 65535LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x357 = UINT8_MAX;
	volatile uint32_t x358 = 258906U;
	volatile uint32_t x359 = 5139U;
	uint32_t t86 = 0U;

	t86 = ((x357==x358)|(x359%x360));

	if (t86 != 5139U) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x361 = INT64_MIN;
	volatile uint64_t x362 = 161764699191827567LLU;
	uint32_t x363 = 11822U;
	int16_t x364 = INT16_MAX;
	uint32_t t87 = 17051U;

	t87 = ((x361==x362)|(x363%x364));

	if (t87 != 11822U) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint32_t x365 = 1041178363U;
	uint64_t x366 = 44LLU;
	static int16_t x368 = INT16_MIN;
	static int32_t t88 = -272581;

	t88 = ((x365==x366)|(x367%x368));

	if (t88 != 32767) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x373 = 6U;
	int16_t x375 = 15;
	volatile int64_t x376 = INT64_MAX;

	t89 = ((x373==x374)|(x375%x376));

	if (t89 != 15LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x377 = 2065;
	uint64_t x378 = UINT64_MAX;
	static int16_t x380 = INT16_MAX;
	int64_t t90 = 55961013LL;

	t90 = ((x377==x378)|(x379%x380));

	if (t90 != -18315LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x381 = INT8_MIN;
	int32_t x382 = INT32_MIN;
	volatile int16_t x384 = INT16_MIN;
	volatile int64_t t91 = 24LL;

	t91 = ((x381==x382)|(x383%x384));

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x385 = INT32_MIN;
	int64_t x386 = INT64_MIN;
	static volatile int16_t x387 = 60;
	static int64_t x388 = INT64_MIN;

	t92 = ((x385==x386)|(x387%x388));

	if (t92 != 60LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x389 = 57;
	int64_t x391 = INT64_MIN;
	static int64_t t93 = 1313735686055221LL;

	t93 = ((x389==x390)|(x391%x392));

	if (t93 != -32768LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x393 = -1LL;
	uint32_t x394 = UINT32_MAX;
	int8_t x395 = INT8_MIN;
	int32_t t94 = -31;

	t94 = ((x393==x394)|(x395%x396));

	if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x397 = INT32_MIN;
	int8_t x399 = -1;
	int64_t x400 = -1LL;
	volatile int64_t t95 = -177LL;

	t95 = ((x397==x398)|(x399%x400));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x405 = 26U;
	uint64_t x407 = 189633838149452094LLU;
	uint16_t x408 = UINT16_MAX;

	t96 = ((x405==x406)|(x407%x408));

	if (t96 != 4899LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x409 = UINT16_MAX;
	static volatile int8_t x410 = 0;
	static int32_t x411 = INT32_MIN;

	t97 = ((x409==x410)|(x411%x412));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x413 = INT64_MIN;
	volatile int64_t x414 = 146840LL;
	uint32_t x415 = 1810U;
	int16_t x416 = -69;

	t98 = ((x413==x414)|(x415%x416));

	if (t98 != 1810U) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x417 = 55LLU;
	static int8_t x418 = INT8_MIN;
	uint64_t x419 = 302631001LLU;
	uint8_t x420 = 2U;
	static volatile uint64_t t99 = 14922290495LLU;

	t99 = ((x417==x418)|(x419%x420));

	if (t99 != 1LLU) { NG(); } else { ; }
	
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

