#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t x5 = INT32_MAX;
static volatile int16_t x7 = INT16_MIN;
volatile int32_t t1 = 216417;
static uint64_t x9 = 1454LLU;
uint64_t x15 = UINT64_MAX;
static uint32_t x17 = 27U;
int8_t x18 = INT8_MIN;
int16_t x36 = 3849;
int32_t x38 = -1;
volatile int64_t x43 = INT64_MIN;
uint64_t x47 = 2LLU;
volatile int32_t t11 = -337;
int64_t x52 = INT64_MAX;
volatile int32_t t12 = -538576574;
static int32_t t13 = -44241;
static int16_t x57 = INT16_MAX;
int16_t x63 = 658;
int64_t x64 = 521675041815110703LL;
int8_t x65 = 1;
int8_t x70 = INT8_MIN;
volatile int32_t x73 = INT32_MIN;
uint8_t x81 = 27U;
static volatile int32_t x84 = INT32_MIN;
uint32_t x86 = UINT32_MAX;
int32_t x91 = 74818;
int8_t x109 = INT8_MAX;
int16_t x112 = INT16_MAX;
int8_t x119 = 0;
int64_t x123 = -2101LL;
uint16_t x129 = 796U;
uint16_t x132 = UINT16_MAX;
int32_t t32 = 0;
int32_t t33 = -30166;
uint64_t x149 = 895165858026LLU;
static int64_t x151 = INT64_MIN;
volatile int64_t x152 = INT64_MAX;
uint32_t x156 = 22U;
int32_t x157 = INT32_MIN;
volatile int16_t x160 = -1;
volatile int32_t x161 = INT32_MAX;
static uint32_t x166 = 171930U;
static int8_t x170 = 0;
static uint16_t x172 = 19809U;
volatile int16_t x174 = INT16_MIN;
int16_t x182 = -1;
uint8_t x185 = 13U;
volatile int64_t x186 = 223238LL;
uint16_t x188 = 14379U;
int64_t x190 = -1033976637282LL;
int16_t x191 = INT16_MIN;
uint64_t x192 = 9266782LLU;
uint64_t x193 = 14LLU;
static volatile int32_t t49 = 134;
int32_t x202 = -83432936;
volatile int64_t x210 = INT64_MIN;
int16_t x212 = 96;
static int16_t x213 = INT16_MIN;
uint8_t x224 = 48U;
int8_t x229 = -2;
volatile int32_t t57 = 44768;
int8_t x238 = INT8_MIN;
static int32_t t59 = -287033;
uint64_t x243 = 189597LLU;
uint8_t x244 = UINT8_MAX;
uint8_t x250 = 1U;
int32_t x255 = -16;
uint64_t x259 = 19655192LLU;
volatile int16_t x272 = INT16_MIN;
volatile uint64_t x278 = 1409598LLU;
int32_t x279 = INT32_MAX;
int32_t x281 = INT32_MIN;
volatile uint8_t x283 = 3U;
int64_t x300 = -1LL;
uint16_t x303 = 469U;
uint8_t x306 = UINT8_MAX;
volatile uint16_t x310 = UINT16_MAX;
volatile uint32_t x311 = 90U;
int64_t x312 = INT64_MIN;
uint64_t x313 = 3LLU;
static int32_t t80 = 101638;
volatile uint64_t x325 = UINT64_MAX;
uint64_t x329 = 24522120LLU;
int32_t t83 = 5;
uint16_t x338 = 1U;
uint32_t x340 = 224U;
static int8_t x349 = 40;
volatile int32_t x351 = INT32_MIN;
static int32_t x353 = INT32_MIN;
uint8_t x366 = UINT8_MAX;
int64_t x370 = INT64_MAX;
volatile int32_t t92 = -619;
volatile int32_t t94 = -93;
int16_t x381 = -28;
volatile int32_t x382 = -45466;
int32_t t95 = -42209;
int16_t x390 = INT16_MIN;
int8_t x399 = INT8_MIN;


void f0(void) {
	int32_t x1 = INT32_MIN;
	static int32_t x2 = INT32_MIN;
	int8_t x3 = -1;
	int32_t x4 = -1;
	int32_t t0 = -92304;

	t0 = ((x1==x2)==(x3&x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint8_t x6 = UINT8_MAX;
	static volatile int16_t x8 = INT16_MIN;

	t1 = ((x5==x6)==(x7&x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x10 = -1;
	int32_t x11 = -1;
	int64_t x12 = INT64_MIN;
	static volatile int32_t t2 = 2966729;

	t2 = ((x9==x10)==(x11&x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint32_t x13 = UINT32_MAX;
	int16_t x14 = 15382;
	int32_t x16 = INT32_MIN;
	volatile int32_t t3 = -267;

	t3 = ((x13==x14)==(x15&x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x19 = INT16_MIN;
	int16_t x20 = 8;
	volatile int32_t t4 = -1;

	t4 = ((x17==x18)==(x19&x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x21 = 29U;
	int64_t x22 = INT64_MAX;
	int64_t x23 = -34409LL;
	static int8_t x24 = INT8_MIN;
	static int32_t t5 = 732070984;

	t5 = ((x21==x22)==(x23&x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -1;
	static int32_t x26 = -1597843;
	int64_t x27 = INT64_MIN;
	static int64_t x28 = -100420LL;
	int32_t t6 = -6114;

	t6 = ((x25==x26)==(x27&x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 93U;
	int64_t x30 = INT64_MIN;
	int16_t x31 = INT16_MAX;
	volatile int64_t x32 = -35396113717583995LL;
	volatile int32_t t7 = -1961;

	t7 = ((x29==x30)==(x31&x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	int8_t x34 = INT8_MAX;
	volatile int32_t x35 = INT32_MAX;
	static volatile int32_t t8 = -23161682;

	t8 = ((x33==x34)==(x35&x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x37 = INT8_MIN;
	volatile int32_t x39 = INT32_MAX;
	uint32_t x40 = 167808U;
	int32_t t9 = 192307129;

	t9 = ((x37==x38)==(x39&x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MAX;
	uint16_t x42 = 121U;
	static uint64_t x44 = 8392887524981704LLU;
	static int32_t t10 = 55;

	t10 = ((x41==x42)==(x43&x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x45 = -1;
	volatile uint64_t x46 = UINT64_MAX;
	int8_t x48 = -9;

	t11 = ((x45==x46)==(x47&x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x49 = INT64_MIN;
	volatile int8_t x50 = INT8_MIN;
	static volatile int64_t x51 = INT64_MIN;

	t12 = ((x49==x50)==(x51&x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x53 = 4;
	volatile int8_t x54 = -11;
	uint16_t x55 = UINT16_MAX;
	volatile int16_t x56 = INT16_MIN;

	t13 = ((x53==x54)==(x55&x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x58 = -1;
	int32_t x59 = INT32_MIN;
	static volatile int64_t x60 = -88246110735165739LL;
	volatile int32_t t14 = -3518;

	t14 = ((x57==x58)==(x59&x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int16_t x61 = -1;
	int16_t x62 = INT16_MIN;
	volatile int32_t t15 = 368352;

	t15 = ((x61==x62)==(x63&x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x66 = -1LL;
	uint8_t x67 = UINT8_MAX;
	int32_t x68 = INT32_MIN;
	int32_t t16 = -454;

	t16 = ((x65==x66)==(x67&x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x69 = 70U;
	int32_t x71 = -1;
	static uint16_t x72 = UINT16_MAX;
	int32_t t17 = 380390938;

	t17 = ((x69==x70)==(x71&x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x74 = UINT16_MAX;
	int32_t x75 = 67689931;
	volatile int64_t x76 = INT64_MIN;
	volatile int32_t t18 = 427965;

	t18 = ((x73==x74)==(x75&x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = 1U;
	int64_t x78 = INT64_MIN;
	uint64_t x79 = 14136826864741LLU;
	int32_t x80 = INT32_MIN;
	int32_t t19 = -97450;

	t19 = ((x77==x78)==(x79&x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x82 = UINT16_MAX;
	int8_t x83 = -1;
	volatile int32_t t20 = -3651;

	t20 = ((x81==x82)==(x83&x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = UINT8_MAX;
	int16_t x87 = -1;
	static int64_t x88 = INT64_MAX;
	int32_t t21 = 3;

	t21 = ((x85==x86)==(x87&x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	static volatile int16_t x90 = -1;
	int16_t x92 = INT16_MIN;
	int32_t t22 = -5;

	t22 = ((x89==x90)==(x91&x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = 6U;
	int64_t x94 = 212047273970290517LL;
	static volatile int64_t x95 = -1LL;
	static int64_t x96 = INT64_MIN;
	static int32_t t23 = -266001;

	t23 = ((x93==x94)==(x95&x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = UINT8_MAX;
	int16_t x98 = 171;
	int8_t x99 = 22;
	static int32_t x100 = INT32_MAX;
	int32_t t24 = 457;

	t24 = ((x97==x98)==(x99&x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MAX;
	uint8_t x102 = 0U;
	int32_t x103 = -227883;
	int32_t x104 = INT32_MAX;
	volatile int32_t t25 = -4884383;

	t25 = ((x101==x102)==(x103&x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = 2LLU;
	volatile int32_t x106 = INT32_MAX;
	int16_t x107 = 3;
	uint16_t x108 = 309U;
	volatile int32_t t26 = -6487;

	t26 = ((x105==x106)==(x107&x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x110 = INT16_MAX;
	int16_t x111 = 1;
	int32_t t27 = -2;

	t27 = ((x109==x110)==(x111&x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x113 = INT64_MIN;
	int8_t x114 = -1;
	static volatile int8_t x115 = INT8_MIN;
	static volatile int64_t x116 = -1LL;
	int32_t t28 = 469909;

	t28 = ((x113==x114)==(x115&x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int8_t x117 = -1;
	static volatile int16_t x118 = INT16_MIN;
	int16_t x120 = -1;
	volatile int32_t t29 = 30844;

	t29 = ((x117==x118)==(x119&x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = -812272827LL;
	static int16_t x122 = INT16_MIN;
	int32_t x124 = INT32_MIN;
	int32_t t30 = -123217348;

	t30 = ((x121==x122)==(x123&x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x125 = UINT16_MAX;
	int64_t x126 = INT64_MIN;
	uint16_t x127 = 26U;
	static int32_t x128 = 8;
	int32_t t31 = -2;

	t31 = ((x125==x126)==(x127&x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x130 = -1;
	static volatile uint8_t x131 = 27U;

	t32 = ((x129==x130)==(x131&x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x133 = 15;
	int8_t x134 = INT8_MIN;
	int16_t x135 = INT16_MIN;
	uint16_t x136 = 2334U;

	t33 = ((x133==x134)==(x135&x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x137 = UINT8_MAX;
	volatile int32_t x138 = -35708450;
	static int64_t x139 = INT64_MAX;
	volatile int64_t x140 = INT64_MAX;
	static int32_t t34 = 14;

	t34 = ((x137==x138)==(x139&x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = -107;
	static int16_t x142 = INT16_MIN;
	int64_t x143 = -1LL;
	int8_t x144 = INT8_MAX;
	volatile int32_t t35 = -457;

	t35 = ((x141==x142)==(x143&x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = -1LL;
	static int16_t x146 = INT16_MAX;
	int64_t x147 = -538324100150LL;
	int64_t x148 = -783336046LL;
	volatile int32_t t36 = 256176;

	t36 = ((x145==x146)==(x147&x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x150 = INT32_MIN;
	volatile int32_t t37 = -27491718;

	t37 = ((x149==x150)==(x151&x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = -474467;
	volatile int32_t x154 = INT32_MIN;
	uint8_t x155 = 0U;
	int32_t t38 = 7490;

	t38 = ((x153==x154)==(x155&x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x158 = UINT8_MAX;
	volatile int64_t x159 = INT64_MIN;
	static volatile int32_t t39 = 13390355;

	t39 = ((x157==x158)==(x159&x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x162 = INT32_MIN;
	static volatile uint16_t x163 = 13866U;
	uint8_t x164 = 5U;
	int32_t t40 = -13934;

	t40 = ((x161==x162)==(x163&x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x165 = 5188;
	int32_t x167 = INT32_MIN;
	static int32_t x168 = INT32_MIN;
	volatile int32_t t41 = -2;

	t41 = ((x165==x166)==(x167&x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x169 = 0U;
	static uint32_t x171 = UINT32_MAX;
	int32_t t42 = -1;

	t42 = ((x169==x170)==(x171&x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x173 = INT16_MIN;
	int8_t x175 = INT8_MIN;
	int8_t x176 = INT8_MIN;
	volatile int32_t t43 = 28864210;

	t43 = ((x173==x174)==(x175&x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x177 = 31U;
	int32_t x178 = INT32_MAX;
	static int8_t x179 = 18;
	uint16_t x180 = UINT16_MAX;
	volatile int32_t t44 = -43209068;

	t44 = ((x177==x178)==(x179&x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint32_t x181 = 2U;
	static int32_t x183 = -7338348;
	uint8_t x184 = UINT8_MAX;
	int32_t t45 = -5;

	t45 = ((x181==x182)==(x183&x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x187 = INT8_MIN;
	int32_t t46 = -4;

	t46 = ((x185==x186)==(x187&x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int32_t x189 = INT32_MAX;
	int32_t t47 = 1685;

	t47 = ((x189==x190)==(x191&x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x194 = INT32_MAX;
	volatile uint8_t x195 = 1U;
	int8_t x196 = INT8_MIN;
	int32_t t48 = -4;

	t48 = ((x193==x194)==(x195&x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x197 = INT64_MAX;
	uint32_t x198 = 425632033U;
	static int64_t x199 = INT64_MAX;
	uint32_t x200 = 871170U;

	t49 = ((x197==x198)==(x199&x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x201 = UINT32_MAX;
	int16_t x203 = INT16_MAX;
	int8_t x204 = INT8_MIN;
	volatile int32_t t50 = 8614755;

	t50 = ((x201==x202)==(x203&x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = 157445LLU;
	uint32_t x206 = 509657U;
	static int16_t x207 = -20;
	int16_t x208 = INT16_MAX;
	volatile int32_t t51 = 8311031;

	t51 = ((x205==x206)==(x207&x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = INT32_MIN;
	int32_t x211 = 879;
	volatile int32_t t52 = 36;

	t52 = ((x209==x210)==(x211&x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x214 = INT32_MIN;
	static int8_t x215 = -1;
	int64_t x216 = INT64_MIN;
	int32_t t53 = 16773;

	t53 = ((x213==x214)==(x215&x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MAX;
	int64_t x218 = -1LL;
	int16_t x219 = -1;
	int8_t x220 = -5;
	static volatile int32_t t54 = 391;

	t54 = ((x217==x218)==(x219&x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int16_t x221 = INT16_MIN;
	volatile int8_t x222 = INT8_MIN;
	int16_t x223 = INT16_MAX;
	volatile int32_t t55 = -1;

	t55 = ((x221==x222)==(x223&x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x225 = 22;
	int16_t x226 = INT16_MIN;
	int32_t x227 = INT32_MIN;
	uint16_t x228 = UINT16_MAX;
	static int32_t t56 = 180590;

	t56 = ((x225==x226)==(x227&x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x230 = 0U;
	int32_t x231 = -1;
	uint32_t x232 = 128073U;

	t57 = ((x229==x230)==(x231&x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x233 = INT32_MAX;
	int64_t x234 = -439129721154026LL;
	int16_t x235 = INT16_MIN;
	static int32_t x236 = INT32_MIN;
	int32_t t58 = 2677;

	t58 = ((x233==x234)==(x235&x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = INT16_MAX;
	int8_t x239 = -21;
	int32_t x240 = INT32_MIN;

	t59 = ((x237==x238)==(x239&x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x241 = INT64_MIN;
	volatile uint16_t x242 = UINT16_MAX;
	int32_t t60 = 34436;

	t60 = ((x241==x242)==(x243&x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = 352LL;
	uint16_t x246 = 1U;
	static volatile int8_t x247 = 0;
	static uint8_t x248 = 0U;
	volatile int32_t t61 = 45;

	t61 = ((x245==x246)==(x247&x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x249 = UINT32_MAX;
	uint64_t x251 = UINT64_MAX;
	int16_t x252 = 2;
	int32_t t62 = -3511306;

	t62 = ((x249==x250)==(x251&x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int64_t x253 = INT64_MIN;
	int8_t x254 = INT8_MIN;
	static volatile int32_t x256 = 41888;
	static int32_t t63 = -818042;

	t63 = ((x253==x254)==(x255&x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x257 = UINT16_MAX;
	int64_t x258 = INT64_MIN;
	static uint64_t x260 = 54188048LLU;
	int32_t t64 = 2;

	t64 = ((x257==x258)==(x259&x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = 5;
	int8_t x262 = 40;
	int8_t x263 = -1;
	uint16_t x264 = 3270U;
	int32_t t65 = -11949500;

	t65 = ((x261==x262)==(x263&x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x265 = INT16_MAX;
	uint64_t x266 = 247090037836444083LLU;
	uint8_t x267 = UINT8_MAX;
	uint64_t x268 = UINT64_MAX;
	static volatile int32_t t66 = -6;

	t66 = ((x265==x266)==(x267&x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x269 = -1LL;
	static int16_t x270 = INT16_MAX;
	uint32_t x271 = 5U;
	volatile int32_t t67 = 6440;

	t67 = ((x269==x270)==(x271&x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = 100U;
	uint16_t x274 = 2U;
	int32_t x275 = INT32_MAX;
	uint16_t x276 = UINT16_MAX;
	static int32_t t68 = 22015080;

	t68 = ((x273==x274)==(x275&x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x277 = 215U;
	uint16_t x280 = 1991U;
	int32_t t69 = 60;

	t69 = ((x277==x278)==(x279&x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x282 = 988107436012251130LL;
	static int8_t x284 = -3;
	volatile int32_t t70 = -3891994;

	t70 = ((x281==x282)==(x283&x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x285 = UINT32_MAX;
	int64_t x286 = 347581844753LL;
	int8_t x287 = INT8_MIN;
	uint16_t x288 = UINT16_MAX;
	int32_t t71 = -17931802;

	t71 = ((x285==x286)==(x287&x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = INT64_MAX;
	uint16_t x290 = 3335U;
	int8_t x291 = 0;
	uint8_t x292 = 1U;
	volatile int32_t t72 = -4200;

	t72 = ((x289==x290)==(x291&x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = 0;
	int16_t x294 = INT16_MIN;
	volatile int32_t x295 = 2981;
	volatile int16_t x296 = 1;
	volatile int32_t t73 = 330390;

	t73 = ((x293==x294)==(x295&x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x297 = INT32_MIN;
	int32_t x298 = INT32_MIN;
	int64_t x299 = INT64_MIN;
	int32_t t74 = -17;

	t74 = ((x297==x298)==(x299&x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = 23;
	volatile int32_t x302 = -1;
	uint8_t x304 = UINT8_MAX;
	int32_t t75 = -7274;

	t75 = ((x301==x302)==(x303&x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = INT32_MAX;
	int64_t x307 = INT64_MIN;
	static int16_t x308 = 8;
	volatile int32_t t76 = -557682;

	t76 = ((x305==x306)==(x307&x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x309 = UINT16_MAX;
	int32_t t77 = -476;

	t77 = ((x309==x310)==(x311&x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x314 = -1LL;
	int32_t x315 = INT32_MIN;
	volatile uint16_t x316 = UINT16_MAX;
	volatile int32_t t78 = -113182587;

	t78 = ((x313==x314)==(x315&x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x317 = 72LLU;
	static int8_t x318 = -1;
	uint64_t x319 = UINT64_MAX;
	int16_t x320 = -838;
	static volatile int32_t t79 = -14444218;

	t79 = ((x317==x318)==(x319&x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x321 = 0U;
	int8_t x322 = -15;
	int16_t x323 = INT16_MIN;
	uint8_t x324 = 1U;

	t80 = ((x321==x322)==(x323&x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x326 = UINT32_MAX;
	int16_t x327 = INT16_MIN;
	static int16_t x328 = INT16_MAX;
	int32_t t81 = -12137815;

	t81 = ((x325==x326)==(x327&x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x330 = 1;
	static int32_t x331 = 1948;
	int64_t x332 = INT64_MAX;
	volatile int32_t t82 = -11441163;

	t82 = ((x329==x330)==(x331&x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = INT64_MAX;
	volatile int32_t x334 = INT32_MAX;
	int8_t x335 = -38;
	static volatile int8_t x336 = 14;

	t83 = ((x333==x334)==(x335&x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = -1;
	int64_t x339 = INT64_MIN;
	static int32_t t84 = 274568983;

	t84 = ((x337==x338)==(x339&x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x341 = 5638785U;
	int32_t x342 = INT32_MIN;
	int32_t x343 = INT32_MAX;
	static volatile int64_t x344 = 11LL;
	static int32_t t85 = -51439983;

	t85 = ((x341==x342)==(x343&x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = -3;
	static int16_t x346 = -2727;
	int16_t x347 = 91;
	int8_t x348 = INT8_MAX;
	int32_t t86 = 1857375;

	t86 = ((x345==x346)==(x347&x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int32_t x350 = 11;
	int16_t x352 = INT16_MIN;
	volatile int32_t t87 = -12;

	t87 = ((x349==x350)==(x351&x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x354 = INT16_MIN;
	volatile uint64_t x355 = 47241496332LLU;
	volatile int64_t x356 = -3366034LL;
	static volatile int32_t t88 = 7006;

	t88 = ((x353==x354)==(x355&x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = -3243328640209863546LL;
	static uint32_t x358 = UINT32_MAX;
	int8_t x359 = 55;
	volatile int64_t x360 = 58036201765489LL;
	int32_t t89 = 462609;

	t89 = ((x357==x358)==(x359&x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x361 = UINT32_MAX;
	uint64_t x362 = 1084434060212LLU;
	volatile uint64_t x363 = UINT64_MAX;
	static uint64_t x364 = 324150LLU;
	volatile int32_t t90 = 192752630;

	t90 = ((x361==x362)==(x363&x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x365 = 0U;
	int16_t x367 = -1;
	int16_t x368 = -16;
	static int32_t t91 = 956;

	t91 = ((x365==x366)==(x367&x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x369 = 247LLU;
	uint16_t x371 = 27820U;
	static int16_t x372 = -1;

	t92 = ((x369==x370)==(x371&x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x373 = INT16_MIN;
	static int16_t x374 = INT16_MAX;
	int32_t x375 = -1;
	volatile int16_t x376 = INT16_MIN;
	int32_t t93 = -467631253;

	t93 = ((x373==x374)==(x375&x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = 10;
	int64_t x378 = INT64_MIN;
	uint64_t x379 = UINT64_MAX;
	int32_t x380 = INT32_MAX;

	t94 = ((x377==x378)==(x379&x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x383 = 0U;
	int32_t x384 = INT32_MIN;

	t95 = ((x381==x382)==(x383&x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = -1;
	int8_t x386 = INT8_MAX;
	uint16_t x387 = UINT16_MAX;
	int32_t x388 = 7431;
	int32_t t96 = 7378616;

	t96 = ((x385==x386)==(x387&x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = INT8_MAX;
	int8_t x391 = -1;
	volatile int32_t x392 = -85795771;
	static volatile int32_t t97 = -2577;

	t97 = ((x389==x390)==(x391&x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = INT16_MIN;
	int16_t x394 = 3;
	volatile int16_t x395 = -1;
	static int64_t x396 = -38683LL;
	int32_t t98 = -233599900;

	t98 = ((x393==x394)==(x395&x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = INT64_MAX;
	uint8_t x398 = UINT8_MAX;
	int32_t x400 = -1;
	int32_t t99 = 890650;

	t99 = ((x397==x398)==(x399&x400));

	if (t99 != 0) { NG(); } else { ; }
	
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

