#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x3 = INT64_MAX;
int16_t x9 = INT16_MIN;
int32_t t3 = -50;
uint32_t x19 = 7747U;
static int32_t x26 = 33346589;
uint64_t x42 = 26370LLU;
uint64_t x50 = 27182136516507029LLU;
int32_t x52 = 0;
uint64_t t9 = 2LLU;
static uint8_t x56 = 46U;
int16_t x57 = -1;
uint32_t t11 = UINT32_MAX;
int16_t x66 = INT16_MIN;
volatile int32_t x68 = -121656;
uint64_t x72 = 5384LLU;
int32_t x75 = INT32_MIN;
int64_t t15 = -690762905430915277LL;
int16_t x79 = 3;
volatile int8_t x80 = INT8_MIN;
uint8_t x93 = 0U;
int8_t x100 = -1;
volatile uint64_t x102 = 278362779886375235LLU;
volatile uint64_t t21 = 298LLU;
volatile int64_t x111 = -10091542875412LL;
int64_t t23 = 708013478738LL;
int16_t x113 = -60;
uint8_t x139 = 3U;
int16_t x140 = 11619;
volatile int32_t x146 = INT32_MIN;
static volatile int64_t t29 = -264415659LL;
int16_t x153 = -1;
int64_t x161 = INT64_MIN;
static uint64_t t33 = 237LLU;
uint64_t x165 = 12965553974259LLU;
uint64_t x171 = UINT64_MAX;
static uint16_t x172 = 36U;
int32_t x182 = -1;
uint16_t x202 = 14U;
static uint64_t x203 = UINT64_MAX;
int32_t x211 = -717;
static volatile uint32_t t42 = 215U;
uint64_t t43 = 245978872020LLU;
static volatile uint64_t t44 = UINT64_MAX;
uint16_t x221 = 7U;
static uint32_t x222 = UINT32_MAX;
uint32_t x226 = 72U;
static volatile int64_t t46 = INT64_MAX;
int32_t x239 = INT32_MAX;
int32_t x240 = INT32_MIN;
volatile int32_t t48 = 981;
uint32_t x241 = 132857148U;
int32_t x244 = 1039221341;
volatile int64_t x246 = -1LL;
static uint16_t x248 = 645U;
uint64_t x252 = UINT64_MAX;
volatile int16_t x254 = INT16_MIN;
static uint64_t t53 = 3206861LLU;
volatile int8_t x266 = -1;
int16_t x269 = -471;
static uint32_t x274 = 4U;
static int16_t x282 = INT16_MIN;
volatile int8_t x285 = INT8_MIN;
static int32_t x288 = -7825;
volatile int8_t x292 = INT8_MIN;
static volatile int32_t x302 = 1;
static int32_t x310 = -104252266;
int8_t x313 = 1;
uint64_t x314 = UINT64_MAX;
volatile int16_t x316 = INT16_MIN;
static volatile uint64_t t65 = 3LLU;
volatile int16_t x318 = INT16_MIN;
volatile uint8_t x322 = 45U;
int32_t x339 = INT32_MIN;
static int32_t x340 = 38;
volatile int32_t t72 = -20098797;
volatile int8_t x346 = -1;
volatile uint64_t t73 = UINT64_MAX;
volatile int32_t x353 = INT32_MIN;
volatile uint16_t x359 = 565U;
static volatile int32_t t75 = 61;
int16_t x367 = INT16_MAX;
int8_t x378 = INT8_MAX;
volatile uint64_t t80 = 4119221141689LLU;
uint64_t x386 = 151795LLU;
volatile int16_t x387 = INT16_MIN;
int16_t x404 = INT16_MIN;
static int64_t t83 = 14341917635280217LL;
volatile int64_t x413 = 1090LL;
volatile int64_t t86 = 10278061633LL;
uint32_t x428 = 90U;
uint64_t x434 = 28339488LLU;
uint64_t x437 = 2LLU;
static int64_t x441 = 397797326LL;
uint32_t x448 = UINT32_MAX;
volatile int64_t t94 = 146632280LL;
volatile uint64_t x458 = 1538962551LLU;
volatile uint64_t t96 = 76013LLU;
static volatile int16_t x463 = INT16_MIN;
volatile uint8_t x465 = 2U;
int32_t t98 = -11611;
volatile int8_t x476 = -2;


void f0(void) {
	static int64_t x1 = INT64_MIN;
	int64_t x2 = -1LL;
	int16_t x4 = -4;
	volatile int64_t t0 = 2571106282726944935LL;

	t0 = (x1|(x2+(x3+x4)));

	if (t0 != -6LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -226;
	uint64_t x6 = UINT64_MAX;
	int64_t x7 = INT64_MIN;
	uint32_t x8 = UINT32_MAX;
	uint64_t t1 = 59954LLU;

	t1 = (x5|(x6+(x7+x8)));

	if (t1 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x10 = UINT64_MAX;
	volatile int64_t x11 = -921LL;
	volatile int64_t x12 = -1370226447LL;
	volatile uint64_t t2 = 196907811682601895LLU;

	t2 = (x9|(x10+(x11+x12)));

	if (t2 != 18446744073709550935LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = -1;
	uint16_t x14 = 19816U;
	int8_t x15 = INT8_MAX;
	int8_t x16 = INT8_MAX;

	t3 = (x13|(x14+(x15+x16)));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = 0;
	int16_t x18 = -1;
	int32_t x20 = 788293223;
	static volatile uint32_t t4 = 6U;

	t4 = (x17|(x18+(x19+x20)));

	if (t4 != 788300969U) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	static int32_t x22 = -1;
	uint64_t x23 = 8005LLU;
	static uint32_t x24 = UINT32_MAX;
	uint64_t t5 = UINT64_MAX;

	t5 = (x21|(x22+(x23+x24)));

	if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 2U;
	volatile uint32_t x27 = 54U;
	int32_t x28 = INT32_MIN;
	static uint32_t t6 = 57319U;

	t6 = (x25|(x26+(x27+x28)));

	if (t6 != 2180830291U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x33 = UINT8_MAX;
	static uint64_t x34 = UINT64_MAX;
	int32_t x35 = INT32_MIN;
	uint32_t x36 = 5334703U;
	volatile uint64_t t7 = 1843LLU;

	t7 = (x33|(x34+(x35+x36)));

	if (t7 != 2152818431LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x41 = 343U;
	volatile int8_t x43 = -1;
	static int64_t x44 = -1LL;
	static uint64_t t8 = 133519LLU;

	t8 = (x41|(x42+(x43+x44)));

	if (t8 != 26455LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x49 = INT32_MIN;
	uint16_t x51 = 228U;

	t9 = (x49|(x50+(x51+x52)));

	if (t9 != 18446744073026762361LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x53 = 59262;
	uint64_t x54 = UINT64_MAX;
	int32_t x55 = -985;
	uint64_t t10 = 4903931427512127LLU;

	t10 = (x53|(x54+(x55+x56)));

	if (t10 != 18446744073709551486LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x58 = INT8_MAX;
	uint32_t x59 = 2615U;
	int8_t x60 = INT8_MIN;

	t11 = (x57|(x58+(x59+x60)));

	if (t11 != UINT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x61 = INT8_MIN;
	volatile uint16_t x62 = UINT16_MAX;
	int64_t x63 = -1LL;
	int16_t x64 = -47;
	volatile int64_t t12 = -15655LL;

	t12 = (x61|(x62+(x63+x64)));

	if (t12 != -49LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x65 = 3LLU;
	uint16_t x67 = UINT16_MAX;
	static uint64_t t13 = 3210498LLU;

	t13 = (x65|(x66+(x67+x68)));

	if (t13 != 18446744073709462727LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x69 = 2630373569961613LLU;
	int64_t x70 = 859223568LL;
	volatile uint32_t x71 = 73388U;
	volatile uint64_t t14 = 920385611051499543LLU;

	t14 = (x69|(x70+(x71+x72)));

	if (t14 != 2630374127042509LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x73 = -1;
	uint8_t x74 = 15U;
	int64_t x76 = -1LL;

	t15 = (x73|(x74+(x75+x76)));

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x77 = INT16_MIN;
	int8_t x78 = -1;
	volatile int32_t t16 = -1;

	t16 = (x77|(x78+(x79+x80)));

	if (t16 != -126) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x81 = INT64_MAX;
	static volatile int8_t x82 = -1;
	static uint16_t x83 = 28U;
	int32_t x84 = 24;
	volatile int64_t t17 = INT64_MAX;

	t17 = (x81|(x82+(x83+x84)));

	if (t17 != INT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x85 = 0;
	volatile uint8_t x86 = UINT8_MAX;
	int32_t x87 = INT32_MIN;
	volatile uint16_t x88 = 285U;
	int32_t t18 = -365328035;

	t18 = (x85|(x86+(x87+x88)));

	if (t18 != -2147483108) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x94 = 86U;
	volatile int8_t x95 = INT8_MAX;
	int8_t x96 = INT8_MIN;
	int32_t t19 = 26894;

	t19 = (x93|(x94+(x95+x96)));

	if (t19 != 85) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x97 = INT16_MIN;
	static int16_t x98 = -1;
	uint8_t x99 = 2U;
	static int32_t t20 = -3212;

	t20 = (x97|(x98+(x99+x100)));

	if (t20 != -32768) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x101 = INT8_MIN;
	int16_t x103 = -1;
	volatile int32_t x104 = -72;

	t21 = (x101|(x102+(x103+x104)));

	if (t21 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x105 = INT8_MIN;
	uint16_t x106 = UINT16_MAX;
	static uint64_t x107 = 551855LLU;
	uint16_t x108 = 716U;
	volatile uint64_t t22 = 8340306367074LLU;

	t22 = (x105|(x106+(x107+x108)));

	if (t22 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x109 = 1024U;
	static volatile uint32_t x110 = 616124U;
	static int16_t x112 = INT16_MAX;

	t23 = (x109|(x110+(x111+x112)));

	if (t23 != -10091542225497LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x114 = 26982541865176LLU;
	int32_t x115 = 556;
	int16_t x116 = 1893;
	static volatile uint64_t t24 = 22LLU;

	t24 = (x113|(x114+(x115+x116)));

	if (t24 != 18446744073709551597LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x125 = INT16_MAX;
	int8_t x126 = INT8_MAX;
	uint64_t x127 = UINT64_MAX;
	uint16_t x128 = 32330U;
	volatile uint64_t t25 = 98138697LLU;

	t25 = (x125|(x126+(x127+x128)));

	if (t25 != 32767LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x129 = INT8_MAX;
	static int32_t x130 = 31086;
	volatile int16_t x131 = INT16_MAX;
	static int8_t x132 = -1;
	static int32_t t26 = 95;

	t26 = (x129|(x130+(x131+x132)));

	if (t26 != 63871) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x137 = INT32_MIN;
	uint32_t x138 = 72774U;
	volatile uint32_t t27 = 6166500U;

	t27 = (x137|(x138+(x139+x140)));

	if (t27 != 2147568044U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x141 = INT16_MIN;
	volatile uint32_t x142 = UINT32_MAX;
	uint16_t x143 = UINT16_MAX;
	uint16_t x144 = 33U;
	uint32_t t28 = 1416029690U;

	t28 = (x141|(x142+(x143+x144)));

	if (t28 != 4294934559U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x145 = INT64_MIN;
	volatile int8_t x147 = 29;
	uint32_t x148 = 15655U;

	t29 = (x145|(x146+(x147+x148)));

	if (t29 != -9223372034707276476LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x149 = INT8_MIN;
	int32_t x150 = -1;
	int32_t x151 = INT32_MIN;
	int64_t x152 = 21944036402302414LL;
	volatile int64_t t30 = 129959550480LL;

	t30 = (x149|(x150+(x151+x152)));

	if (t30 != -51LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x154 = INT8_MIN;
	volatile int64_t x155 = 150816827LL;
	int8_t x156 = INT8_MIN;
	int64_t t31 = 166584631367LL;

	t31 = (x153|(x154+(x155+x156)));

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x157 = INT64_MIN;
	uint8_t x158 = 46U;
	volatile int16_t x159 = INT16_MAX;
	uint16_t x160 = 722U;
	static int64_t t32 = -27773557LL;

	t32 = (x157|(x158+(x159+x160)));

	if (t32 != -9223372036854742273LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x162 = INT64_MIN;
	int64_t x163 = INT64_MAX;
	uint64_t x164 = UINT64_MAX;

	t33 = (x161|(x162+(x163+x164)));

	if (t33 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x166 = -1LL;
	volatile int64_t x167 = -1LL;
	static int8_t x168 = -1;
	volatile uint64_t t34 = UINT64_MAX;

	t34 = (x165|(x166+(x167+x168)));

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x169 = 7;
	int32_t x170 = INT32_MAX;
	volatile uint64_t t35 = 3332649624LLU;

	t35 = (x169|(x170+(x171+x172)));

	if (t35 != 2147483687LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x177 = -1LL;
	volatile uint32_t x178 = UINT32_MAX;
	volatile int32_t x179 = -1;
	uint32_t x180 = 1343U;
	volatile int64_t t36 = -963633219504451LL;

	t36 = (x177|(x178+(x179+x180)));

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x181 = -67;
	volatile int16_t x183 = INT16_MIN;
	int16_t x184 = INT16_MAX;
	volatile int32_t t37 = -54873;

	t37 = (x181|(x182+(x183+x184)));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x193 = INT32_MIN;
	volatile int8_t x194 = 1;
	static int8_t x195 = -1;
	uint32_t x196 = 1100921U;
	uint32_t t38 = 1U;

	t38 = (x193|(x194+(x195+x196)));

	if (t38 != 2148584569U) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x197 = UINT8_MAX;
	static int16_t x198 = -1;
	static volatile uint32_t x199 = 163U;
	int8_t x200 = INT8_MIN;
	uint32_t t39 = 1U;

	t39 = (x197|(x198+(x199+x200)));

	if (t39 != 255U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x201 = 1;
	uint8_t x204 = UINT8_MAX;
	uint64_t t40 = 109306LLU;

	t40 = (x201|(x202+(x203+x204)));

	if (t40 != 269LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x205 = INT16_MAX;
	uint8_t x206 = UINT8_MAX;
	static int16_t x207 = INT16_MAX;
	uint16_t x208 = 15426U;
	int32_t t41 = -578835534;

	t41 = (x205|(x206+(x207+x208)));

	if (t41 != 65535) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x209 = 11U;
	static int32_t x210 = -1;
	uint32_t x212 = UINT32_MAX;

	t42 = (x209|(x210+(x211+x212)));

	if (t42 != 4294966587U) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x213 = 229590503899LLU;
	int16_t x214 = INT16_MIN;
	int8_t x215 = 0;
	static uint64_t x216 = 184LLU;

	t43 = (x213|(x214+(x215+x216)));

	if (t43 != 18446744073709523451LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x217 = -2;
	uint64_t x218 = UINT64_MAX;
	static uint8_t x219 = 52U;
	int32_t x220 = 5960328;

	t44 = (x217|(x218+(x219+x220)));

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x223 = 1U;
	int16_t x224 = 114;
	uint32_t t45 = 408808U;

	t45 = (x221|(x222+(x223+x224)));

	if (t45 != 119U) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int64_t x225 = INT64_MAX;
	int32_t x227 = 585795;
	int8_t x228 = INT8_MIN;

	t46 = (x225|(x226+(x227+x228)));

	if (t46 != INT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x233 = INT16_MIN;
	int8_t x234 = -49;
	int32_t x235 = INT32_MAX;
	int64_t x236 = -1LL;
	int64_t t47 = 774756577753LL;

	t47 = (x233|(x234+(x235+x236)));

	if (t47 != -51LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x237 = -5;
	int16_t x238 = INT16_MAX;

	t48 = (x237|(x238+(x239+x240)));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x242 = -1;
	int16_t x243 = 871;
	volatile uint32_t t49 = 22876U;

	t49 = (x241|(x242+(x243+x244)));

	if (t49 != 1073446399U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x245 = INT8_MIN;
	uint32_t x247 = UINT32_MAX;
	int64_t t50 = -2709LL;

	t50 = (x245|(x246+(x247+x248)));

	if (t50 != -125LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x249 = INT64_MAX;
	volatile int16_t x250 = INT16_MIN;
	static uint32_t x251 = 1622601U;
	volatile uint64_t t51 = 258760470695951LLU;

	t51 = (x249|(x250+(x251+x252)));

	if (t51 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x253 = 13;
	uint16_t x255 = 0U;
	int32_t x256 = -1;
	static int32_t t52 = 2285302;

	t52 = (x253|(x254+(x255+x256)));

	if (t52 != -32769) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x257 = -3132;
	int8_t x258 = -2;
	uint64_t x259 = UINT64_MAX;
	static uint8_t x260 = UINT8_MAX;

	t53 = (x257|(x258+(x259+x260)));

	if (t53 != 18446744073709548540LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x265 = INT8_MIN;
	int8_t x267 = 0;
	int16_t x268 = INT16_MAX;
	int32_t t54 = 326;

	t54 = (x265|(x266+(x267+x268)));

	if (t54 != -2) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x270 = INT32_MIN;
	uint8_t x271 = UINT8_MAX;
	static int32_t x272 = 40106;
	volatile int32_t t55 = 4164792;

	t55 = (x269|(x270+(x271+x272)));

	if (t55 != -87) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x273 = 18;
	volatile int16_t x275 = INT16_MAX;
	static volatile int64_t x276 = INT64_MIN;
	int64_t t56 = 1760540612LL;

	t56 = (x273|(x274+(x275+x276)));

	if (t56 != -9223372036854743021LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x277 = INT64_MAX;
	int64_t x278 = 451270037023734LL;
	static uint64_t x279 = 10992480304082475LLU;
	int32_t x280 = INT32_MIN;
	uint64_t t57 = 1927412252511LLU;

	t57 = (x277|(x278+(x279+x280)));

	if (t57 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x281 = UINT32_MAX;
	uint32_t x283 = 5U;
	uint32_t x284 = UINT32_MAX;
	volatile uint32_t t58 = UINT32_MAX;

	t58 = (x281|(x282+(x283+x284)));

	if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x286 = 2084575U;
	uint8_t x287 = 5U;
	volatile uint32_t t59 = 123816U;

	t59 = (x285|(x286+(x287+x288)));

	if (t59 != 4294967251U) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x289 = INT16_MAX;
	int64_t x290 = INT64_MAX;
	int16_t x291 = INT16_MIN;
	static volatile int64_t t60 = -2707834LL;

	t60 = (x289|(x290+(x291+x292)));

	if (t60 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x297 = INT32_MIN;
	uint64_t x298 = 2LLU;
	uint64_t x299 = UINT64_MAX;
	uint32_t x300 = 30990U;
	volatile uint64_t t61 = 846LLU;

	t61 = (x297|(x298+(x299+x300)));

	if (t61 != 18446744071562098959LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x301 = INT8_MAX;
	uint8_t x303 = UINT8_MAX;
	int32_t x304 = INT32_MIN;
	volatile int32_t t62 = -1020749934;

	t62 = (x301|(x302+(x303+x304)));

	if (t62 != -2147483265) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x305 = -1;
	int64_t x306 = -8530246922LL;
	uint16_t x307 = 736U;
	static uint32_t x308 = 0U;
	volatile int64_t t63 = 105561311252LL;

	t63 = (x305|(x306+(x307+x308)));

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x309 = INT16_MAX;
	int32_t x311 = 3400870;
	uint16_t x312 = 432U;
	int32_t t64 = 367;

	t64 = (x309|(x310+(x311+x312)));

	if (t64 != -100827137) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x315 = -1;

	t65 = (x313|(x314+(x315+x316)));

	if (t65 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x317 = INT32_MAX;
	uint64_t x319 = UINT64_MAX;
	int32_t x320 = -1;
	volatile uint64_t t66 = UINT64_MAX;

	t66 = (x317|(x318+(x319+x320)));

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x321 = 98U;
	static int32_t x323 = 601204;
	volatile uint8_t x324 = 72U;
	volatile int32_t t67 = 994579504;

	t67 = (x321|(x322+(x323+x324)));

	if (t67 != 601323) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x325 = INT8_MIN;
	static uint32_t x326 = UINT32_MAX;
	int8_t x327 = -1;
	uint16_t x328 = 1U;
	volatile uint32_t t68 = UINT32_MAX;

	t68 = (x325|(x326+(x327+x328)));

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x329 = 3682434U;
	uint8_t x330 = UINT8_MAX;
	uint16_t x331 = 730U;
	int32_t x332 = -1;
	uint32_t t69 = 7881495U;

	t69 = (x329|(x330+(x331+x332)));

	if (t69 != 3683290U) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x333 = UINT32_MAX;
	uint16_t x334 = 116U;
	uint64_t x335 = 9876667657680306LLU;
	static int64_t x336 = INT64_MIN;
	volatile uint64_t t70 = 194621032LLU;

	t70 = (x333|(x334+(x335+x336)));

	if (t70 != 9233248704993951743LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x337 = -1LL;
	static int64_t x338 = INT64_MAX;
	volatile int64_t t71 = 110571618LL;

	t71 = (x337|(x338+(x339+x340)));

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x341 = INT8_MAX;
	int8_t x342 = INT8_MIN;
	int8_t x343 = 59;
	int32_t x344 = -1;

	t72 = (x341|(x342+(x343+x344)));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x345 = UINT64_MAX;
	uint32_t x347 = UINT32_MAX;
	static int8_t x348 = INT8_MIN;

	t73 = (x345|(x346+(x347+x348)));

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x354 = UINT64_MAX;
	int32_t x355 = INT32_MIN;
	uint64_t x356 = 17357LLU;
	volatile uint64_t t74 = 29965998681615LLU;

	t74 = (x353|(x354+(x355+x356)));

	if (t74 != 18446744071562085324LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x357 = 56U;
	int32_t x358 = 231;
	static int16_t x360 = INT16_MIN;

	t75 = (x357|(x358+(x359+x360)));

	if (t75 != -31940) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x361 = 1;
	int8_t x362 = INT8_MIN;
	static volatile uint32_t x363 = 30034970U;
	uint8_t x364 = 74U;
	uint32_t t76 = 2U;

	t76 = (x361|(x362+(x363+x364)));

	if (t76 != 30034917U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x365 = INT8_MIN;
	int8_t x366 = -11;
	uint16_t x368 = UINT16_MAX;
	volatile int32_t t77 = -2625165;

	t77 = (x365|(x366+(x367+x368)));

	if (t77 != -13) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x369 = INT32_MAX;
	int8_t x370 = INT8_MIN;
	static uint64_t x371 = 2534729795LLU;
	int8_t x372 = -4;
	volatile uint64_t t78 = 205769LLU;

	t78 = (x369|(x370+(x371+x372)));

	if (t78 != 4294967295LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x373 = INT64_MIN;
	static int8_t x374 = INT8_MAX;
	static int32_t x375 = INT32_MIN;
	static uint8_t x376 = 1U;
	int64_t t79 = -1500689889843LL;

	t79 = (x373|(x374+(x375+x376)));

	if (t79 != -2147483520LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x377 = 66531483614LLU;
	uint8_t x379 = 1U;
	int32_t x380 = -62497224;

	t80 = (x377|(x378+(x379+x380)));

	if (t80 != 18446744073673367550LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x381 = INT16_MAX;
	static uint32_t x382 = 332981064U;
	int64_t x383 = -1LL;
	int16_t x384 = INT16_MAX;
	static int64_t t81 = 26579818268710547LL;

	t81 = (x381|(x382+(x383+x384)));

	if (t81 != 333021183LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x385 = 5U;
	int16_t x388 = INT16_MIN;
	volatile uint64_t t82 = 41336951526707LLU;

	t82 = (x385|(x386+(x387+x388)));

	if (t82 != 86263LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x401 = -1;
	uint16_t x402 = 2292U;
	int64_t x403 = -1LL;

	t83 = (x401|(x402+(x403+x404)));

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x405 = UINT64_MAX;
	uint32_t x406 = 562317U;
	volatile int16_t x407 = INT16_MIN;
	static int32_t x408 = 0;
	volatile uint64_t t84 = UINT64_MAX;

	t84 = (x405|(x406+(x407+x408)));

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x409 = 7937U;
	static volatile uint16_t x410 = 67U;
	uint32_t x411 = UINT32_MAX;
	int32_t x412 = INT32_MIN;
	volatile uint32_t t85 = 30U;

	t85 = (x409|(x410+(x411+x412)));

	if (t85 != 2147491651U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x414 = -1;
	int32_t x415 = INT32_MIN;
	static uint32_t x416 = 171U;

	t86 = (x413|(x414+(x415+x416)));

	if (t86 != 2147484906LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x417 = INT16_MIN;
	int32_t x418 = -17536769;
	int32_t x419 = INT32_MAX;
	uint64_t x420 = 2722458432LLU;
	volatile uint64_t t87 = 1771547125LLU;

	t87 = (x417|(x418+(x419+x420)));

	if (t87 != 18446744073709540414LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x421 = INT64_MAX;
	int32_t x422 = INT32_MIN;
	int32_t x423 = 939757350;
	static volatile int32_t x424 = 115;
	static int64_t t88 = -3606128LL;

	t88 = (x421|(x422+(x423+x424)));

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x425 = 0;
	int64_t x426 = INT64_MIN;
	volatile uint64_t x427 = 1161959977370956LLU;
	uint64_t t89 = 4LLU;

	t89 = (x425|(x426+(x427+x428)));

	if (t89 != 9224533996832146854LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x433 = -1;
	int16_t x435 = -4072;
	uint16_t x436 = UINT16_MAX;
	uint64_t t90 = UINT64_MAX;

	t90 = (x433|(x434+(x435+x436)));

	if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x438 = UINT16_MAX;
	static int32_t x439 = -1;
	uint32_t x440 = UINT32_MAX;
	uint64_t t91 = 374LLU;

	t91 = (x437|(x438+(x439+x440)));

	if (t91 != 65535LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x442 = 0U;
	volatile uint8_t x443 = UINT8_MAX;
	int64_t x444 = INT64_MIN;
	int64_t t92 = 83LL;

	t92 = (x441|(x442+(x443+x444)));

	if (t92 != -9223372036456978433LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x445 = INT16_MIN;
	volatile int8_t x446 = INT8_MIN;
	int8_t x447 = 2;
	static volatile uint32_t t93 = 14U;

	t93 = (x445|(x446+(x447+x448)));

	if (t93 != 4294967169U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x449 = -1LL;
	int64_t x450 = INT64_MIN;
	int32_t x451 = -175;
	int32_t x452 = INT32_MAX;

	t94 = (x449|(x450+(x451+x452)));

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x453 = 2;
	int8_t x454 = INT8_MAX;
	uint8_t x455 = 1U;
	int32_t x456 = -281;
	int32_t t95 = -308;

	t95 = (x453|(x454+(x455+x456)));

	if (t95 != -153) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x457 = INT8_MIN;
	int8_t x459 = 1;
	int8_t x460 = INT8_MIN;

	t96 = (x457|(x458+(x459+x460)));

	if (t96 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x461 = 0U;
	int16_t x462 = 0;
	static int8_t x464 = -1;
	int32_t t97 = 29067;

	t97 = (x461|(x462+(x463+x464)));

	if (t97 != -32769) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x466 = INT16_MAX;
	static volatile int16_t x467 = INT16_MIN;
	volatile int16_t x468 = -3814;

	t98 = (x465|(x466+(x467+x468)));

	if (t98 != -3813) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x473 = -194;
	uint32_t x474 = 439318U;
	uint32_t x475 = UINT32_MAX;
	static uint32_t t99 = 416839251U;

	t99 = (x473|(x474+(x475+x476)));

	if (t99 != 4294967103U) { NG(); } else { ; }
	
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

