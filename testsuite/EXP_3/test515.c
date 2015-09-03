#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -7032359;
int8_t x6 = 23;
int16_t x10 = INT16_MIN;
volatile int32_t x11 = -1;
volatile int64_t x14 = -1509LL;
uint64_t x16 = UINT64_MAX;
volatile int16_t x17 = -1;
uint32_t x21 = UINT32_MAX;
static volatile int64_t x23 = INT64_MAX;
static volatile int32_t t5 = 1;
volatile int32_t t6 = 397648;
int32_t t7 = 482;
uint32_t x34 = UINT32_MAX;
volatile int32_t x35 = -1;
int32_t x39 = -217;
volatile int8_t x40 = INT8_MIN;
uint32_t x44 = 3U;
int32_t t10 = -573876119;
int32_t x46 = INT32_MIN;
int64_t x57 = INT64_MAX;
uint32_t x68 = 113296U;
static volatile int32_t t17 = 127385;
volatile int32_t t18 = -108473103;
uint64_t x88 = 3714099991494967LLU;
int32_t x89 = -782727;
int32_t t21 = -3253385;
volatile int32_t x97 = INT32_MAX;
volatile int32_t t22 = -75;
int16_t x103 = INT16_MAX;
int32_t t23 = 200628908;
uint8_t x105 = 1U;
int32_t x107 = -1;
static uint16_t x117 = UINT16_MAX;
uint16_t x119 = 1U;
uint64_t x126 = 866788LLU;
uint8_t x131 = 5U;
volatile int16_t x136 = -4;
int64_t x137 = 80386501841LL;
static int64_t x138 = 419942308LL;
volatile uint32_t x154 = UINT32_MAX;
uint8_t x155 = UINT8_MAX;
int32_t x160 = INT32_MAX;
int32_t t36 = -948;
volatile int64_t x163 = INT64_MIN;
volatile int32_t t38 = -157614;
volatile uint32_t x169 = UINT32_MAX;
static int64_t x204 = INT64_MIN;
int64_t x213 = -78127LL;
static uint32_t x214 = 47289U;
int32_t t48 = -451576;
uint8_t x225 = 2U;
int8_t x228 = INT8_MIN;
volatile int8_t x238 = INT8_MIN;
int8_t x241 = -9;
int16_t x243 = INT16_MIN;
int16_t x244 = INT16_MAX;
int16_t x245 = -246;
uint32_t x250 = UINT32_MAX;
static uint16_t x261 = 7734U;
static int32_t x278 = INT32_MAX;
int32_t x279 = INT32_MAX;
static uint32_t x305 = 31U;
int32_t t64 = 9;
volatile int8_t x311 = -1;
int16_t x314 = INT16_MIN;
static volatile uint64_t x318 = 291LLU;
static uint8_t x319 = 22U;
volatile int64_t x324 = INT64_MIN;
static uint16_t x326 = 491U;
uint8_t x329 = UINT8_MAX;
volatile uint16_t x331 = UINT16_MAX;
static uint16_t x339 = UINT16_MAX;
uint32_t x358 = 0U;
int16_t x369 = -1;
static volatile int16_t x387 = 801;
uint8_t x395 = UINT8_MAX;
static int32_t x397 = 1398838;
uint16_t x399 = UINT16_MAX;
int32_t x400 = INT32_MIN;
volatile int32_t t83 = 34231439;
static int64_t x410 = 114636112LL;
volatile int64_t x412 = 3LL;
int8_t x417 = INT8_MIN;
volatile int32_t t87 = 232464838;
int32_t t88 = -1;
int8_t x425 = INT8_MAX;
int64_t x426 = -1LL;
static int16_t x429 = INT16_MAX;
int32_t x432 = INT32_MAX;
static int8_t x444 = 1;
static int64_t x450 = 7455606LL;
volatile int16_t x451 = -1;
uint16_t x465 = UINT16_MAX;
int16_t x477 = -1;


void f0(void) {
	volatile int8_t x1 = INT8_MAX;
	uint16_t x2 = 30689U;
	int8_t x3 = INT8_MIN;
	uint64_t x4 = 8950993867318573LLU;

	t0 = ((x1+x2)==(x3/x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MAX;
	volatile int16_t x7 = -501;
	static int8_t x8 = INT8_MIN;
	static volatile int32_t t1 = 128444556;

	t1 = ((x5+x6)==(x7/x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	uint16_t x12 = 37U;
	int32_t t2 = 2999047;

	t2 = ((x9+x10)==(x11/x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 98640U;
	int8_t x15 = INT8_MAX;
	volatile int32_t t3 = 17;

	t3 = ((x13+x14)==(x15/x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x18 = INT16_MIN;
	volatile uint64_t x19 = 101158571378167837LLU;
	int8_t x20 = 7;
	int32_t t4 = 159727121;

	t4 = ((x17+x18)==(x19/x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x22 = 83U;
	int64_t x24 = -1LL;

	t5 = ((x21+x22)==(x23/x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = 387372257LL;
	uint8_t x26 = 65U;
	uint8_t x27 = UINT8_MAX;
	int8_t x28 = 4;

	t6 = ((x25+x26)==(x27/x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	int8_t x30 = 1;
	static uint8_t x31 = 1U;
	volatile uint8_t x32 = 1U;

	t7 = ((x29+x30)==(x31/x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = UINT8_MAX;
	int32_t x36 = INT32_MIN;
	int32_t t8 = -43833;

	t8 = ((x33+x34)==(x35/x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = 5665029425LL;
	static int64_t x38 = INT64_MIN;
	int32_t t9 = 261346;

	t9 = ((x37+x38)==(x39/x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 79U;
	uint8_t x42 = 116U;
	int16_t x43 = INT16_MAX;

	t10 = ((x41+x42)==(x43/x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 3923U;
	uint16_t x47 = UINT16_MAX;
	uint32_t x48 = 5U;
	volatile int32_t t11 = 210523777;

	t11 = ((x45+x46)==(x47/x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = -1LL;
	int8_t x50 = INT8_MIN;
	volatile uint64_t x51 = 980LLU;
	uint32_t x52 = UINT32_MAX;
	static int32_t t12 = 133662106;

	t12 = ((x49+x50)==(x51/x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	uint16_t x54 = 380U;
	static int32_t x55 = -1;
	int64_t x56 = -3755LL;
	static int32_t t13 = 568521;

	t13 = ((x53+x54)==(x55/x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x58 = -3615;
	int64_t x59 = -1LL;
	volatile int16_t x60 = -1;
	int32_t t14 = -7522241;

	t14 = ((x57+x58)==(x59/x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = -4;
	int64_t x66 = 5540604085774LL;
	int8_t x67 = -23;
	volatile int32_t t15 = -2392092;

	t15 = ((x65+x66)==(x67/x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x73 = -1;
	uint8_t x74 = 2U;
	int8_t x75 = INT8_MIN;
	static int32_t x76 = -1;
	int32_t t16 = -820951;

	t16 = ((x73+x74)==(x75/x76));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x77 = 0U;
	uint8_t x78 = 14U;
	uint32_t x79 = 1298356671U;
	int8_t x80 = -1;

	t17 = ((x77+x78)==(x79/x80));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x81 = INT64_MIN;
	uint16_t x82 = 872U;
	int8_t x83 = 6;
	int8_t x84 = 6;

	t18 = ((x81+x82)==(x83/x84));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x85 = 29LLU;
	volatile int32_t x86 = -3;
	int64_t x87 = INT64_MIN;
	int32_t t19 = -49169;

	t19 = ((x85+x86)==(x87/x88));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x90 = 0;
	volatile int16_t x91 = -2860;
	int16_t x92 = INT16_MIN;
	volatile int32_t t20 = 58;

	t20 = ((x89+x90)==(x91/x92));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x93 = UINT64_MAX;
	volatile uint16_t x94 = UINT16_MAX;
	int16_t x95 = INT16_MIN;
	uint32_t x96 = 274334907U;

	t21 = ((x93+x94)==(x95/x96));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x98 = -1LL;
	int16_t x99 = INT16_MAX;
	int16_t x100 = INT16_MIN;

	t22 = ((x97+x98)==(x99/x100));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int16_t x101 = INT16_MAX;
	volatile uint16_t x102 = 3U;
	int32_t x104 = INT32_MAX;

	t23 = ((x101+x102)==(x103/x104));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x106 = UINT16_MAX;
	static volatile int64_t x108 = INT64_MAX;
	static volatile int32_t t24 = -964;

	t24 = ((x105+x106)==(x107/x108));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x109 = INT32_MIN;
	static int64_t x110 = INT64_MAX;
	int16_t x111 = INT16_MIN;
	static uint32_t x112 = UINT32_MAX;
	int32_t t25 = -204;

	t25 = ((x109+x110)==(x111/x112));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x118 = UINT8_MAX;
	int32_t x120 = INT32_MIN;
	static volatile int32_t t26 = -9011435;

	t26 = ((x117+x118)==(x119/x120));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x121 = 4LLU;
	uint32_t x122 = UINT32_MAX;
	static volatile uint32_t x123 = 40804U;
	static uint8_t x124 = 36U;
	volatile int32_t t27 = 338677;

	t27 = ((x121+x122)==(x123/x124));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint8_t x125 = 0U;
	static volatile int32_t x127 = -1188;
	volatile uint8_t x128 = 5U;
	static int32_t t28 = -7633;

	t28 = ((x125+x126)==(x127/x128));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x129 = INT8_MIN;
	int16_t x130 = -13;
	static int16_t x132 = 8413;
	volatile int32_t t29 = 2;

	t29 = ((x129+x130)==(x131/x132));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x133 = INT16_MAX;
	int64_t x134 = INT64_MIN;
	int8_t x135 = -1;
	static int32_t t30 = -5963;

	t30 = ((x133+x134)==(x135/x136));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x139 = INT16_MAX;
	uint32_t x140 = UINT32_MAX;
	static volatile int32_t t31 = -117;

	t31 = ((x137+x138)==(x139/x140));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x141 = INT8_MAX;
	static uint64_t x142 = UINT64_MAX;
	static int64_t x143 = INT64_MAX;
	volatile int64_t x144 = INT64_MIN;
	int32_t t32 = 6;

	t32 = ((x141+x142)==(x143/x144));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x145 = INT64_MAX;
	int32_t x146 = INT32_MIN;
	uint32_t x147 = UINT32_MAX;
	static int32_t x148 = INT32_MIN;
	int32_t t33 = 83;

	t33 = ((x145+x146)==(x147/x148));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x149 = INT16_MAX;
	int16_t x150 = INT16_MIN;
	uint32_t x151 = 48624301U;
	uint64_t x152 = UINT64_MAX;
	int32_t t34 = 3;

	t34 = ((x149+x150)==(x151/x152));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x153 = UINT64_MAX;
	int64_t x156 = -1LL;
	volatile int32_t t35 = 1;

	t35 = ((x153+x154)==(x155/x156));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x157 = UINT8_MAX;
	volatile uint32_t x158 = 10U;
	int64_t x159 = INT64_MIN;

	t36 = ((x157+x158)==(x159/x160));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x161 = -4;
	int32_t x162 = -1;
	volatile int8_t x164 = INT8_MIN;
	static volatile int32_t t37 = -352585522;

	t37 = ((x161+x162)==(x163/x164));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x165 = 1U;
	volatile int64_t x166 = -1LL;
	int8_t x167 = -1;
	volatile int32_t x168 = -1;

	t38 = ((x165+x166)==(x167/x168));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x170 = 1919013831952307LL;
	volatile uint32_t x171 = 2287635U;
	int32_t x172 = -3;
	volatile int32_t t39 = 266130;

	t39 = ((x169+x170)==(x171/x172));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x181 = UINT64_MAX;
	volatile int16_t x182 = INT16_MAX;
	static volatile uint8_t x183 = UINT8_MAX;
	uint8_t x184 = UINT8_MAX;
	volatile int32_t t40 = -1030949418;

	t40 = ((x181+x182)==(x183/x184));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x185 = 1U;
	int64_t x186 = INT64_MIN;
	static int64_t x187 = -796225421122LL;
	uint64_t x188 = UINT64_MAX;
	int32_t t41 = 29003;

	t41 = ((x185+x186)==(x187/x188));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x189 = -1;
	static uint64_t x190 = UINT64_MAX;
	uint64_t x191 = UINT64_MAX;
	int8_t x192 = INT8_MAX;
	volatile int32_t t42 = -1138;

	t42 = ((x189+x190)==(x191/x192));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x193 = 1786123026502196LLU;
	uint8_t x194 = 4U;
	int64_t x195 = -273554783936LL;
	int32_t x196 = -1;
	volatile int32_t t43 = -589;

	t43 = ((x193+x194)==(x195/x196));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x201 = -683246135;
	uint8_t x202 = 42U;
	volatile uint8_t x203 = 95U;
	static int32_t t44 = 297;

	t44 = ((x201+x202)==(x203/x204));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x205 = UINT8_MAX;
	volatile uint16_t x206 = 669U;
	int8_t x207 = -9;
	static int16_t x208 = -448;
	volatile int32_t t45 = -1;

	t45 = ((x205+x206)==(x207/x208));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x209 = INT16_MAX;
	int16_t x210 = INT16_MIN;
	volatile uint8_t x211 = UINT8_MAX;
	uint64_t x212 = 3963417928LLU;
	int32_t t46 = 16261;

	t46 = ((x209+x210)==(x211/x212));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x215 = 4219911U;
	int32_t x216 = 83916;
	static int32_t t47 = -7941881;

	t47 = ((x213+x214)==(x215/x216));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int16_t x217 = INT16_MIN;
	volatile int8_t x218 = INT8_MAX;
	static uint8_t x219 = 54U;
	static int8_t x220 = INT8_MIN;

	t48 = ((x217+x218)==(x219/x220));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x221 = -1;
	int32_t x222 = -1;
	static volatile int16_t x223 = -1;
	volatile uint16_t x224 = UINT16_MAX;
	int32_t t49 = -37318497;

	t49 = ((x221+x222)==(x223/x224));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x226 = INT16_MIN;
	uint64_t x227 = 8066027546LLU;
	static volatile int32_t t50 = 15641204;

	t50 = ((x225+x226)==(x227/x228));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x229 = 8783240LLU;
	uint16_t x230 = 0U;
	int16_t x231 = INT16_MIN;
	uint32_t x232 = 22U;
	volatile int32_t t51 = 13901;

	t51 = ((x229+x230)==(x231/x232));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x237 = -1;
	volatile uint16_t x239 = 2U;
	int8_t x240 = -61;
	volatile int32_t t52 = 19933;

	t52 = ((x237+x238)==(x239/x240));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x242 = 11U;
	volatile int32_t t53 = -5;

	t53 = ((x241+x242)==(x243/x244));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x246 = UINT32_MAX;
	volatile int64_t x247 = INT64_MIN;
	uint16_t x248 = 2208U;
	int32_t t54 = -6703;

	t54 = ((x245+x246)==(x247/x248));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x249 = INT64_MIN;
	static uint64_t x251 = UINT64_MAX;
	int8_t x252 = -1;
	volatile int32_t t55 = -2074;

	t55 = ((x249+x250)==(x251/x252));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x253 = INT16_MIN;
	int8_t x254 = -1;
	uint64_t x255 = 104024938846660LLU;
	int64_t x256 = -1LL;
	static int32_t t56 = 388;

	t56 = ((x253+x254)==(x255/x256));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x262 = 1748137180U;
	int32_t x263 = INT32_MIN;
	int64_t x264 = INT64_MAX;
	int32_t t57 = 307010;

	t57 = ((x261+x262)==(x263/x264));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x265 = UINT64_MAX;
	static volatile int16_t x266 = INT16_MIN;
	uint8_t x267 = 2U;
	uint16_t x268 = UINT16_MAX;
	volatile int32_t t58 = -40;

	t58 = ((x265+x266)==(x267/x268));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x269 = 27U;
	static int16_t x270 = 87;
	int16_t x271 = -1;
	volatile uint8_t x272 = 56U;
	volatile int32_t t59 = 108;

	t59 = ((x269+x270)==(x271/x272));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x277 = INT32_MIN;
	volatile uint8_t x280 = UINT8_MAX;
	int32_t t60 = 1;

	t60 = ((x277+x278)==(x279/x280));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x285 = 9843543;
	int16_t x286 = INT16_MIN;
	static uint32_t x287 = UINT32_MAX;
	volatile int64_t x288 = INT64_MIN;
	int32_t t61 = 477398179;

	t61 = ((x285+x286)==(x287/x288));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x293 = 7076U;
	int32_t x294 = INT32_MAX;
	int8_t x295 = -1;
	volatile int64_t x296 = 472601984630922163LL;
	static volatile int32_t t62 = -2816673;

	t62 = ((x293+x294)==(x295/x296));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x301 = 31736585;
	uint8_t x302 = 15U;
	int64_t x303 = -1LL;
	static volatile int8_t x304 = -31;
	volatile int32_t t63 = 8750;

	t63 = ((x301+x302)==(x303/x304));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x306 = UINT16_MAX;
	volatile int32_t x307 = INT32_MIN;
	int8_t x308 = INT8_MIN;

	t64 = ((x305+x306)==(x307/x308));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x309 = INT32_MAX;
	int16_t x310 = -1;
	int16_t x312 = -15898;
	int32_t t65 = 735677;

	t65 = ((x309+x310)==(x311/x312));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x313 = -1;
	int16_t x315 = INT16_MIN;
	int8_t x316 = -1;
	int32_t t66 = 13000;

	t66 = ((x313+x314)==(x315/x316));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x317 = -1;
	static int16_t x320 = INT16_MAX;
	volatile int32_t t67 = 2514;

	t67 = ((x317+x318)==(x319/x320));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x321 = 29U;
	uint16_t x322 = 41U;
	int32_t x323 = INT32_MIN;
	int32_t t68 = -1866415;

	t68 = ((x321+x322)==(x323/x324));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x325 = 4866;
	uint8_t x327 = UINT8_MAX;
	int64_t x328 = -1LL;
	volatile int32_t t69 = -376;

	t69 = ((x325+x326)==(x327/x328));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x330 = INT8_MAX;
	int16_t x332 = -3;
	static volatile int32_t t70 = -7125595;

	t70 = ((x329+x330)==(x331/x332));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint8_t x337 = 43U;
	int32_t x338 = 12257;
	uint64_t x340 = UINT64_MAX;
	int32_t t71 = -79208;

	t71 = ((x337+x338)==(x339/x340));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x345 = 1206496U;
	uint16_t x346 = UINT16_MAX;
	static int64_t x347 = -1LL;
	int16_t x348 = INT16_MIN;
	int32_t t72 = 503;

	t72 = ((x345+x346)==(x347/x348));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x349 = 102;
	int16_t x350 = INT16_MIN;
	uint16_t x351 = 12301U;
	static int8_t x352 = INT8_MIN;
	volatile int32_t t73 = 229;

	t73 = ((x349+x350)==(x351/x352));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x353 = 74072U;
	int16_t x354 = -60;
	uint32_t x355 = UINT32_MAX;
	int32_t x356 = INT32_MIN;
	volatile int32_t t74 = 9;

	t74 = ((x353+x354)==(x355/x356));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x357 = 87U;
	int64_t x359 = 0LL;
	uint64_t x360 = 30627069LLU;
	volatile int32_t t75 = -2;

	t75 = ((x357+x358)==(x359/x360));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x361 = 61;
	int16_t x362 = INT16_MIN;
	volatile int32_t x363 = -457194310;
	static int32_t x364 = INT32_MIN;
	volatile int32_t t76 = 11251220;

	t76 = ((x361+x362)==(x363/x364));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x365 = INT8_MAX;
	static int32_t x366 = INT32_MIN;
	static volatile uint8_t x367 = UINT8_MAX;
	int8_t x368 = -30;
	static int32_t t77 = -975;

	t77 = ((x365+x366)==(x367/x368));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x370 = INT16_MAX;
	int16_t x371 = -1;
	int16_t x372 = INT16_MIN;
	volatile int32_t t78 = -5782;

	t78 = ((x369+x370)==(x371/x372));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x373 = UINT16_MAX;
	uint8_t x374 = UINT8_MAX;
	volatile int8_t x375 = INT8_MIN;
	int8_t x376 = INT8_MIN;
	volatile int32_t t79 = 3178287;

	t79 = ((x373+x374)==(x375/x376));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x381 = -3;
	int8_t x382 = INT8_MIN;
	int32_t x383 = -1;
	int64_t x384 = -532838177548LL;
	volatile int32_t t80 = -73;

	t80 = ((x381+x382)==(x383/x384));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint8_t x385 = UINT8_MAX;
	static int16_t x386 = 4442;
	uint16_t x388 = UINT16_MAX;
	int32_t t81 = -109;

	t81 = ((x385+x386)==(x387/x388));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x393 = INT16_MAX;
	uint8_t x394 = UINT8_MAX;
	static uint16_t x396 = UINT16_MAX;
	int32_t t82 = 1588877;

	t82 = ((x393+x394)==(x395/x396));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x398 = INT8_MAX;

	t83 = ((x397+x398)==(x399/x400));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x401 = -1;
	int16_t x402 = 0;
	int16_t x403 = -1;
	int16_t x404 = INT16_MAX;
	int32_t t84 = -123414;

	t84 = ((x401+x402)==(x403/x404));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x405 = INT8_MIN;
	int16_t x406 = INT16_MIN;
	static volatile int16_t x407 = 801;
	static int64_t x408 = -1LL;
	int32_t t85 = -1565;

	t85 = ((x405+x406)==(x407/x408));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x409 = INT32_MIN;
	int16_t x411 = INT16_MAX;
	volatile int32_t t86 = -32849998;

	t86 = ((x409+x410)==(x411/x412));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x418 = 1U;
	static int64_t x419 = -1LL;
	uint8_t x420 = UINT8_MAX;

	t87 = ((x417+x418)==(x419/x420));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x421 = 14;
	int8_t x422 = -1;
	int16_t x423 = -1;
	volatile uint32_t x424 = 420650U;

	t88 = ((x421+x422)==(x423/x424));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x427 = 1;
	uint16_t x428 = 14342U;
	volatile int32_t t89 = 8014987;

	t89 = ((x425+x426)==(x427/x428));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x430 = -1LL;
	static int64_t x431 = -2122083592270848760LL;
	int32_t t90 = -1;

	t90 = ((x429+x430)==(x431/x432));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x433 = -1;
	volatile int8_t x434 = INT8_MIN;
	static uint32_t x435 = 844U;
	int8_t x436 = INT8_MIN;
	int32_t t91 = 1;

	t91 = ((x433+x434)==(x435/x436));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x441 = 716LL;
	int64_t x442 = INT64_MIN;
	static uint64_t x443 = 971160436318LLU;
	int32_t t92 = -5024059;

	t92 = ((x441+x442)==(x443/x444));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint64_t x445 = 933431LLU;
	static uint8_t x446 = 12U;
	static uint32_t x447 = 966U;
	uint32_t x448 = 37U;
	volatile int32_t t93 = -6;

	t93 = ((x445+x446)==(x447/x448));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x449 = INT8_MIN;
	volatile int8_t x452 = INT8_MAX;
	int32_t t94 = 0;

	t94 = ((x449+x450)==(x451/x452));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x457 = -656;
	static uint32_t x458 = 9U;
	static int64_t x459 = INT64_MIN;
	int16_t x460 = INT16_MAX;
	int32_t t95 = 0;

	t95 = ((x457+x458)==(x459/x460));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x461 = 23U;
	int16_t x462 = -1;
	int64_t x463 = INT64_MIN;
	int16_t x464 = INT16_MAX;
	volatile int32_t t96 = 240513832;

	t96 = ((x461+x462)==(x463/x464));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x466 = 171U;
	int64_t x467 = INT64_MAX;
	volatile int8_t x468 = -7;
	int32_t t97 = -1;

	t97 = ((x465+x466)==(x467/x468));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x478 = UINT32_MAX;
	int8_t x479 = INT8_MIN;
	static int16_t x480 = -11054;
	int32_t t98 = -1917;

	t98 = ((x477+x478)==(x479/x480));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x485 = -6978;
	static volatile uint32_t x486 = UINT32_MAX;
	int8_t x487 = INT8_MAX;
	int32_t x488 = INT32_MIN;
	int32_t t99 = 212585659;

	t99 = ((x485+x486)==(x487/x488));

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

