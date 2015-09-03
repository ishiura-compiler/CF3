#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x3 = UINT32_MAX;
uint64_t x45 = UINT64_MAX;
int32_t x46 = 801;
volatile uint64_t t6 = 2610543539LLU;
uint32_t x50 = 1460U;
static volatile int16_t x56 = INT16_MIN;
static int64_t x63 = -3131LL;
uint64_t x66 = 539981916319145699LLU;
int16_t x68 = 0;
int32_t x69 = 94349;
int32_t x73 = -15066351;
volatile uint8_t x82 = UINT8_MAX;
static volatile int32_t t13 = 9169;
int32_t x93 = 1;
uint64_t t15 = 50LLU;
volatile int16_t x101 = INT16_MIN;
uint64_t x105 = 130276363592065064LLU;
uint8_t x107 = 40U;
int32_t x118 = 61267;
uint16_t x119 = 0U;
int16_t x123 = -1;
int8_t x124 = 0;
int32_t x131 = INT32_MIN;
int32_t x132 = -1;
int32_t t22 = INT32_MIN;
int8_t x139 = INT8_MAX;
volatile int16_t x140 = INT16_MAX;
static int16_t x143 = -1;
uint64_t t25 = 14LLU;
int32_t x160 = INT32_MIN;
volatile int64_t t27 = -4770289515LL;
static uint32_t t30 = 59965206U;
uint64_t t32 = 19325610658LLU;
uint32_t x191 = UINT32_MAX;
int8_t x200 = -1;
volatile uint32_t x204 = 754U;
int64_t x218 = INT64_MIN;
int32_t x219 = -2;
uint64_t x222 = 279567602292469772LLU;
int16_t x227 = -1;
int16_t x233 = -33;
int8_t x234 = INT8_MIN;
uint8_t x251 = 97U;
int8_t x252 = -1;
volatile uint64_t t46 = 7789297748964820LLU;
volatile int64_t x253 = -16822222882LL;
uint64_t x267 = 223719LLU;
volatile uint64_t t50 = 1575663LLU;
static int16_t x273 = INT16_MAX;
int32_t t52 = -516395;
uint32_t x315 = UINT32_MAX;
uint64_t x316 = 125875596259264316LLU;
static int32_t x321 = INT32_MIN;
int64_t x322 = 58610572485940095LL;
volatile int64_t t61 = 1129411LL;
int16_t x330 = -1;
uint64_t x332 = UINT64_MAX;
uint16_t x345 = UINT16_MAX;
int32_t x346 = INT32_MIN;
uint64_t t66 = 785849182LLU;
uint16_t x367 = UINT16_MAX;
int64_t x370 = INT64_MIN;
static int32_t x378 = 181738695;
int64_t x380 = INT64_MIN;
int8_t x385 = 1;
volatile uint64_t x387 = UINT64_MAX;
uint64_t t72 = 4195874679016808LLU;
int64_t x390 = -106789403LL;
int8_t x397 = INT8_MIN;
static uint64_t t74 = 1LLU;
static int64_t t76 = 1020LL;
volatile uint16_t x414 = 254U;
int64_t x417 = 6908262494LL;
int32_t x418 = 8024;
volatile uint32_t x419 = UINT32_MAX;
static uint8_t x430 = 84U;
volatile int64_t x443 = 1021856424180LL;
int64_t x453 = INT64_MIN;
static volatile int64_t t87 = 37380580745847420LL;
uint64_t x457 = UINT64_MAX;
static volatile int16_t x464 = INT16_MAX;
int8_t x467 = -1;
int16_t x475 = -1;
static int32_t x476 = -1;
volatile uint32_t t91 = 2057905U;
int64_t x483 = 42LL;
volatile int64_t t93 = -249LL;
volatile uint32_t x497 = 3U;
static int64_t x500 = INT64_MIN;
volatile int64_t t95 = 10847LL;
int64_t x512 = -469521558583LL;


void f0(void) {
	volatile int8_t x1 = 17;
	static uint8_t x2 = 1U;
	volatile uint16_t x4 = 2U;
	uint32_t t0 = 2468021U;

	t0 = ((x1+x2)&(x3-x4));

	if (t0 != 16U) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x9 = INT16_MIN;
	static int16_t x10 = INT16_MAX;
	static volatile int16_t x11 = INT16_MIN;
	static int32_t x12 = 1;
	volatile int32_t t1 = 0;

	t1 = ((x9+x10)&(x11-x12));

	if (t1 != -32769) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x13 = -114;
	int16_t x14 = INT16_MAX;
	int8_t x15 = -1;
	static volatile uint8_t x16 = 48U;
	static int32_t t2 = -22;

	t2 = ((x13+x14)&(x15-x16));

	if (t2 != 32653) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x21 = INT16_MAX;
	int64_t x22 = 759094LL;
	static uint32_t x23 = 60925941U;
	uint16_t x24 = UINT16_MAX;
	volatile int64_t t3 = 71LL;

	t3 = ((x21+x22)&(x23-x24));

	if (t3 != 1332LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x33 = INT16_MIN;
	int8_t x34 = INT8_MIN;
	int16_t x35 = INT16_MIN;
	static uint8_t x36 = UINT8_MAX;
	volatile int32_t t4 = -12399;

	t4 = ((x33+x34)&(x35-x36));

	if (t4 != -33024) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint8_t x41 = 1U;
	int16_t x42 = INT16_MIN;
	uint64_t x43 = 40658169LLU;
	volatile int8_t x44 = INT8_MAX;
	static volatile uint64_t t5 = 60931092209683498LLU;

	t5 = ((x41+x42)&(x43-x44));

	if (t5 != 40632320LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x47 = UINT16_MAX;
	static uint16_t x48 = 7U;

	t6 = ((x45+x46)&(x47-x48));

	if (t6 != 800LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x49 = -36985;
	static volatile int32_t x51 = 176416442;
	volatile uint64_t x52 = 474382282LLU;
	volatile uint64_t t7 = 117214893LLU;

	t7 = ((x49+x50)&(x51-x52));

	if (t7 != 3997000752LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x53 = UINT16_MAX;
	volatile int32_t x54 = -1;
	int8_t x55 = INT8_MIN;
	int32_t t8 = -70497;

	t8 = ((x53+x54)&(x55-x56));

	if (t8 != 32640) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x61 = -1;
	static int16_t x62 = INT16_MAX;
	int8_t x64 = 1;
	int64_t t9 = 45914649LL;

	t9 = ((x61+x62)&(x63-x64));

	if (t9 != 29636LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x65 = -7;
	int16_t x67 = INT16_MIN;
	uint64_t t10 = 0LLU;

	t10 = ((x65+x66)&(x67-x68));

	if (t10 != 539981916319121408LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x70 = -97;
	volatile int32_t x71 = -15693;
	uint64_t x72 = 10444068LLU;
	uint64_t t11 = 114LLU;

	t11 = ((x69+x70)&(x71-x72));

	if (t11 != 24588LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x74 = UINT64_MAX;
	uint64_t x75 = UINT64_MAX;
	int8_t x76 = 3;
	volatile uint64_t t12 = 153LLU;

	t12 = ((x73+x74)&(x75-x76));

	if (t12 != 18446744073694485264LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x81 = -184492263;
	int32_t x83 = INT32_MIN;
	int32_t x84 = INT32_MIN;

	t13 = ((x81+x82)&(x83-x84));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x89 = -1;
	uint64_t x90 = UINT64_MAX;
	uint8_t x91 = 0U;
	uint32_t x92 = UINT32_MAX;
	uint64_t t14 = 720LLU;

	t14 = ((x89+x90)&(x91-x92));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x94 = 55U;
	static uint64_t x95 = 0LLU;
	static int32_t x96 = -226227028;

	t15 = ((x93+x94)&(x95-x96));

	if (t15 != 16LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x102 = -40;
	int16_t x103 = 808;
	volatile int32_t x104 = -5167;
	int32_t t16 = -6;

	t16 = ((x101+x102)&(x103-x104));

	if (t16 != 5968) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x106 = UINT64_MAX;
	int64_t x108 = INT64_MAX;
	static volatile uint64_t t17 = 1144039LLU;

	t17 = ((x105+x106)&(x107-x108));

	if (t17 != 33LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x109 = INT64_MIN;
	int16_t x110 = 14;
	uint16_t x111 = UINT16_MAX;
	static volatile uint32_t x112 = 34863287U;
	volatile int64_t t18 = 128556367560516668LL;

	t18 = ((x109+x110)&(x111-x112));

	if (t18 != 8LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x113 = -221805;
	int8_t x114 = INT8_MIN;
	int8_t x115 = -8;
	int8_t x116 = INT8_MIN;
	static volatile int32_t t19 = 7;

	t19 = ((x113+x114)&(x115-x116));

	if (t19 != 16) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x117 = 719933726U;
	uint16_t x120 = 968U;
	uint32_t t20 = 5U;

	t20 = ((x117+x118)&(x119-x120));

	if (t20 != 719994928U) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x121 = 6437813054958590LLU;
	int16_t x122 = INT16_MIN;
	volatile uint64_t t21 = 63614090499LLU;

	t21 = ((x121+x122)&(x123-x124));

	if (t21 != 6437813054925822LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x129 = -59;
	uint8_t x130 = 1U;

	t22 = ((x129+x130)&(x131-x132));

	if (t22 != INT32_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x133 = INT8_MIN;
	static volatile uint64_t x134 = UINT64_MAX;
	static int32_t x135 = 262900762;
	volatile uint16_t x136 = 1334U;
	uint64_t t23 = 4075900087247LLU;

	t23 = ((x133+x134)&(x135-x136));

	if (t23 != 262899300LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x137 = 56U;
	static int32_t x138 = -884297448;
	int32_t t24 = 48949036;

	t24 = ((x137+x138)&(x139-x140));

	if (t24 != -884310016) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x141 = UINT32_MAX;
	uint8_t x142 = 6U;
	uint64_t x144 = 18120255069349584LLU;

	t25 = ((x141+x142)&(x143-x144));

	if (t25 != 5LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x145 = -88459914143597LL;
	int32_t x146 = 1268718;
	int8_t x147 = 4;
	uint16_t x148 = 1U;
	int64_t t26 = -601919287LL;

	t26 = ((x145+x146)&(x147-x148));

	if (t26 != 1LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x157 = 2762U;
	int32_t x158 = INT32_MIN;
	static int64_t x159 = 4174LL;

	t27 = ((x157+x158)&(x159-x160));

	if (t27 != 2147483722LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x161 = 189U;
	int16_t x162 = INT16_MIN;
	volatile uint8_t x163 = 5U;
	static int8_t x164 = -1;
	uint32_t t28 = 0U;

	t28 = ((x161+x162)&(x163-x164));

	if (t28 != 4U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x165 = -10;
	int8_t x166 = -1;
	uint32_t x167 = 610U;
	int16_t x168 = INT16_MIN;
	volatile uint32_t t29 = 4072U;

	t29 = ((x165+x166)&(x167-x168));

	if (t29 != 33376U) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x173 = UINT16_MAX;
	uint32_t x174 = 114377U;
	volatile int8_t x175 = -1;
	uint16_t x176 = 95U;

	t30 = ((x173+x174)&(x175-x176));

	if (t30 != 179840U) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x177 = INT32_MIN;
	int64_t x178 = -30174969771699760LL;
	uint32_t x179 = 14U;
	int8_t x180 = 2;
	volatile int64_t t31 = -123458405815414LL;

	t31 = ((x177+x178)&(x179-x180));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint64_t x181 = 2030945LLU;
	uint16_t x182 = 27U;
	uint16_t x183 = 4468U;
	uint8_t x184 = UINT8_MAX;

	t32 = ((x181+x182)&(x183-x184));

	if (t32 != 4212LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x185 = INT8_MIN;
	uint64_t x186 = 33341017840286583LLU;
	int16_t x187 = -1;
	int32_t x188 = INT32_MIN;
	uint64_t t33 = 557LLU;

	t33 = ((x185+x186)&(x187-x188));

	if (t33 != 617741047LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x189 = -40;
	int16_t x190 = -1;
	uint16_t x192 = 15266U;
	static uint32_t t34 = 1506805978U;

	t34 = ((x189+x190)&(x191-x192));

	if (t34 != 4294952021U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x197 = 13267LL;
	int64_t x198 = -3307624286LL;
	static uint16_t x199 = UINT16_MAX;
	volatile int64_t t35 = -27278033457674083LL;

	t35 = ((x197+x198)&(x199-x200));

	if (t35 != 65536LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x201 = 26U;
	volatile int16_t x202 = INT16_MIN;
	volatile int64_t x203 = INT64_MAX;
	int64_t t36 = -1658189LL;

	t36 = ((x201+x202)&(x203-x204));

	if (t36 != 9223372036854743048LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x205 = INT16_MAX;
	int64_t x206 = 326LL;
	volatile uint32_t x207 = 407497U;
	uint8_t x208 = UINT8_MAX;
	volatile int64_t t37 = -4LL;

	t37 = ((x205+x206)&(x207-x208));

	if (t37 != 64LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x209 = INT8_MAX;
	uint8_t x210 = 66U;
	uint32_t x211 = UINT32_MAX;
	uint64_t x212 = 10583104LLU;
	uint64_t t38 = 201513LLU;

	t38 = ((x209+x210)&(x211-x212));

	if (t38 != 129LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x213 = -1;
	int8_t x214 = INT8_MIN;
	int64_t x215 = -1LL;
	int16_t x216 = INT16_MAX;
	volatile int64_t t39 = -231617167007186406LL;

	t39 = ((x213+x214)&(x215-x216));

	if (t39 != -32768LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x217 = 45U;
	int64_t x220 = -1LL;
	volatile int64_t t40 = 4046430LL;

	t40 = ((x217+x218)&(x219-x220));

	if (t40 != -9223372036854775763LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x221 = UINT64_MAX;
	int8_t x223 = -1;
	static int8_t x224 = 0;
	static uint64_t t41 = 0LLU;

	t41 = ((x221+x222)&(x223-x224));

	if (t41 != 279567602292469771LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x225 = -4553;
	static volatile int16_t x226 = INT16_MIN;
	static uint32_t x228 = UINT32_MAX;
	volatile uint32_t t42 = 159U;

	t42 = ((x225+x226)&(x227-x228));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x235 = -4842;
	int8_t x236 = INT8_MIN;
	int32_t t43 = 2235212;

	t43 = ((x233+x234)&(x235-x236));

	if (t43 != -4842) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x241 = INT16_MIN;
	volatile uint32_t x242 = 843744U;
	int32_t x243 = INT32_MAX;
	volatile int32_t x244 = INT32_MAX;
	uint32_t t44 = 653636U;

	t44 = ((x241+x242)&(x243-x244));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x245 = INT64_MIN;
	static volatile uint8_t x246 = UINT8_MAX;
	volatile int8_t x247 = -3;
	uint8_t x248 = 100U;
	static int64_t t45 = -7LL;

	t45 = ((x245+x246)&(x247-x248));

	if (t45 != -9223372036854775655LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x249 = UINT64_MAX;
	int8_t x250 = 7;

	t46 = ((x249+x250)&(x251-x252));

	if (t46 != 2LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x254 = 0;
	int32_t x255 = INT32_MIN;
	int16_t x256 = INT16_MIN;
	volatile int64_t t47 = -25248254760900LL;

	t47 = ((x253+x254)&(x255-x256));

	if (t47 != -17179869184LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x257 = 0;
	int32_t x258 = -1;
	int16_t x259 = 6;
	int16_t x260 = -1;
	static int32_t t48 = 3;

	t48 = ((x257+x258)&(x259-x260));

	if (t48 != 7) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x261 = -2;
	int32_t x262 = -136379;
	int16_t x263 = 1;
	volatile int8_t x264 = -1;
	volatile int32_t t49 = -114;

	t49 = ((x261+x262)&(x263-x264));

	if (t49 != 2) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x265 = 76294717;
	uint64_t x266 = UINT64_MAX;
	int64_t x268 = 5LL;

	t50 = ((x265+x266)&(x267-x268));

	if (t50 != 10272LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x274 = 1469691U;
	volatile int8_t x275 = 16;
	volatile int32_t x276 = 1;
	uint32_t t51 = 9U;

	t51 = ((x273+x274)&(x275-x276));

	if (t51 != 10U) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x281 = 1U;
	static int32_t x282 = INT32_MIN;
	static volatile int16_t x283 = 15;
	int16_t x284 = -1;

	t52 = ((x281+x282)&(x283-x284));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x285 = 1760064;
	uint8_t x286 = 14U;
	volatile int16_t x287 = -45;
	uint64_t x288 = 124LLU;
	uint64_t t53 = 16720623349612029LLU;

	t53 = ((x285+x286)&(x287-x288));

	if (t53 != 1760070LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x289 = 251U;
	volatile int32_t x290 = INT32_MIN;
	static volatile int32_t x291 = -1;
	volatile int64_t x292 = 11759180LL;
	int64_t t54 = 37570816LL;

	t54 = ((x289+x290)&(x291-x292));

	if (t54 != 2147483827LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x293 = 20U;
	volatile int16_t x294 = -133;
	int32_t x295 = INT32_MIN;
	uint32_t x296 = UINT32_MAX;
	uint32_t t55 = 511018519U;

	t55 = ((x293+x294)&(x295-x296));

	if (t55 != 2147483649U) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x297 = UINT32_MAX;
	static uint8_t x298 = 3U;
	static int8_t x299 = INT8_MIN;
	volatile int8_t x300 = -1;
	uint32_t t56 = 63265858U;

	t56 = ((x297+x298)&(x299-x300));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x305 = INT16_MIN;
	static volatile uint16_t x306 = 18296U;
	volatile int64_t x307 = INT64_MIN;
	static int32_t x308 = INT32_MIN;
	int64_t t57 = 38012335LL;

	t57 = ((x305+x306)&(x307-x308));

	if (t57 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x309 = 2U;
	volatile int64_t x310 = INT64_MIN;
	uint32_t x311 = UINT32_MAX;
	static volatile int16_t x312 = INT16_MAX;
	int64_t t58 = 2675556LL;

	t58 = ((x309+x310)&(x311-x312));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x313 = 30984U;
	int8_t x314 = 1;
	volatile uint64_t t59 = 21175770LLU;

	t59 = ((x313+x314)&(x315-x316));

	if (t59 != 30721LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x317 = 14U;
	volatile uint16_t x318 = 0U;
	int8_t x319 = INT8_MIN;
	int8_t x320 = INT8_MIN;
	volatile uint32_t t60 = 20162901U;

	t60 = ((x317+x318)&(x319-x320));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x323 = -7;
	int32_t x324 = INT32_MIN;

	t61 = ((x321+x322)&(x323-x324));

	if (t61 != 1360745337LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x329 = -1;
	int64_t x331 = INT64_MIN;
	volatile uint64_t t62 = 12534LLU;

	t62 = ((x329+x330)&(x331-x332));

	if (t62 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x337 = 0LLU;
	int16_t x338 = INT16_MIN;
	static volatile int64_t x339 = 994367356351811LL;
	volatile uint64_t x340 = 68117845486767LLU;
	volatile uint64_t t63 = 12833792552658LLU;

	t63 = ((x337+x338)&(x339-x340));

	if (t63 != 926249510862848LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x341 = INT64_MIN;
	uint64_t x342 = UINT64_MAX;
	volatile int8_t x343 = -14;
	volatile int8_t x344 = INT8_MIN;
	static uint64_t t64 = 65193518706630LLU;

	t64 = ((x341+x342)&(x343-x344));

	if (t64 != 114LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x347 = 0U;
	int8_t x348 = -1;
	int32_t t65 = -924;

	t65 = ((x345+x346)&(x347-x348));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x349 = 14U;
	int16_t x350 = 3102;
	volatile uint64_t x351 = UINT64_MAX;
	uint32_t x352 = UINT32_MAX;

	t66 = ((x349+x350)&(x351-x352));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x353 = -1LL;
	int8_t x354 = -1;
	static int32_t x355 = INT32_MIN;
	int8_t x356 = INT8_MIN;
	static volatile int64_t t67 = 4275318187827665LL;

	t67 = ((x353+x354)&(x355-x356));

	if (t67 != -2147483520LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x361 = INT16_MAX;
	static int64_t x362 = -55740063LL;
	static volatile uint16_t x363 = 959U;
	uint8_t x364 = 8U;
	volatile int64_t t68 = 148052648093LL;

	t68 = ((x361+x362)&(x363-x364));

	if (t68 != 288LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x365 = INT64_MIN;
	uint16_t x366 = UINT16_MAX;
	int32_t x368 = INT32_MAX;
	volatile int64_t t69 = INT64_MIN;

	t69 = ((x365+x366)&(x367-x368));

	if (t69 != INT64_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x369 = INT64_MAX;
	int16_t x371 = INT16_MAX;
	static int32_t x372 = INT32_MAX;
	int64_t t70 = 19435LL;

	t70 = ((x369+x370)&(x371-x372));

	if (t70 != -2147450880LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x377 = 3U;
	int16_t x379 = -9;
	int64_t t71 = 16876400398292032LL;

	t71 = ((x377+x378)&(x379-x380));

	if (t71 != 181738690LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x386 = INT64_MIN;
	uint16_t x388 = 14U;

	t72 = ((x385+x386)&(x387-x388));

	if (t72 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x389 = 4U;
	static uint8_t x391 = UINT8_MAX;
	volatile uint32_t x392 = 16393U;
	volatile int64_t t73 = 6907869401LL;

	t73 = ((x389+x390)&(x391-x392));

	if (t73 != 4188176608LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x398 = INT16_MAX;
	volatile uint64_t x399 = 98284812809895525LLU;
	uint8_t x400 = UINT8_MAX;

	t74 = ((x397+x398)&(x399-x400));

	if (t74 != 32102LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x401 = UINT16_MAX;
	uint32_t x402 = 29U;
	int64_t x403 = -1LL;
	int64_t x404 = INT64_MIN;
	static int64_t t75 = 8632362507932278LL;

	t75 = ((x401+x402)&(x403-x404));

	if (t75 != 65564LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x405 = UINT8_MAX;
	volatile uint32_t x406 = 72568U;
	int8_t x407 = -1;
	int64_t x408 = 2434663LL;

	t76 = ((x405+x406)&(x407-x408));

	if (t76 != 6160LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x409 = 131;
	uint8_t x410 = 7U;
	int32_t x411 = INT32_MIN;
	volatile int64_t x412 = -1LL;
	volatile int64_t t77 = 3663134043745312592LL;

	t77 = ((x409+x410)&(x411-x412));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x413 = 4;
	static volatile uint32_t x415 = UINT32_MAX;
	uint8_t x416 = 0U;
	volatile uint32_t t78 = 39710U;

	t78 = ((x413+x414)&(x415-x416));

	if (t78 != 258U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x420 = -32;
	volatile int64_t t79 = -70LL;

	t79 = ((x417+x418)&(x419-x420));

	if (t79 != 22LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x421 = -1919542;
	int64_t x422 = 1738LL;
	int8_t x423 = INT8_MIN;
	volatile int8_t x424 = -30;
	int64_t t80 = 638LL;

	t80 = ((x421+x422)&(x423-x424));

	if (t80 != -1917804LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x425 = 13U;
	int64_t x426 = -1LL;
	uint8_t x427 = 4U;
	uint16_t x428 = 18U;
	volatile int64_t t81 = -202532447205624LL;

	t81 = ((x425+x426)&(x427-x428));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x429 = INT64_MIN;
	uint32_t x431 = 5151095U;
	int16_t x432 = INT16_MIN;
	volatile int64_t t82 = 23811019567359LL;

	t82 = ((x429+x430)&(x431-x432));

	if (t82 != 84LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x433 = UINT64_MAX;
	static int8_t x434 = INT8_MIN;
	int16_t x435 = INT16_MIN;
	int16_t x436 = INT16_MIN;
	volatile uint64_t t83 = 1328428636327396LLU;

	t83 = ((x433+x434)&(x435-x436));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x437 = INT16_MIN;
	volatile int16_t x438 = INT16_MAX;
	uint8_t x439 = 35U;
	uint16_t x440 = 2846U;
	static int32_t t84 = 47084705;

	t84 = ((x437+x438)&(x439-x440));

	if (t84 != -2811) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x441 = -1229122401301492LL;
	uint16_t x442 = 0U;
	volatile uint32_t x444 = 1784U;
	int64_t t85 = 58195710LL;

	t85 = ((x441+x442)&(x443-x444));

	if (t85 != 54280751116LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x449 = UINT8_MAX;
	int32_t x450 = INT32_MIN;
	uint8_t x451 = 3U;
	volatile uint64_t x452 = UINT64_MAX;
	static volatile uint64_t t86 = 3159884LLU;

	t86 = ((x449+x450)&(x451-x452));

	if (t86 != 4LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x454 = INT64_MAX;
	int8_t x455 = INT8_MIN;
	int16_t x456 = INT16_MIN;

	t87 = ((x453+x454)&(x455-x456));

	if (t87 != 32640LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x458 = 162LLU;
	volatile uint16_t x459 = UINT16_MAX;
	uint16_t x460 = 162U;
	volatile uint64_t t88 = 1796723LLU;

	t88 = ((x457+x458)&(x459-x460));

	if (t88 != 1LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x461 = -2202523;
	uint64_t x462 = UINT64_MAX;
	uint32_t x463 = 3877819U;
	uint64_t t89 = 402365611127LLU;

	t89 = ((x461+x462)&(x463-x464));

	if (t89 != 1712164LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x465 = UINT32_MAX;
	int8_t x466 = INT8_MIN;
	static volatile int16_t x468 = 441;
	uint32_t t90 = 1499342973U;

	t90 = ((x465+x466)&(x467-x468));

	if (t90 != 4294966854U) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x473 = 3963808U;
	int8_t x474 = 1;

	t91 = ((x473+x474)&(x475-x476));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x477 = INT16_MIN;
	int16_t x478 = INT16_MAX;
	int64_t x479 = INT64_MIN;
	uint64_t x480 = 2604534687616962LLU;
	static uint64_t t92 = 1LLU;

	t92 = ((x477+x478)&(x479-x480));

	if (t92 != 9220767502167158846LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x481 = 6318;
	volatile int64_t x482 = -1LL;
	int64_t x484 = INT64_MAX;

	t93 = ((x481+x482)&(x483-x484));

	if (t93 != 41LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x489 = -1;
	int8_t x490 = -1;
	uint32_t x491 = 190U;
	static int16_t x492 = -74;
	volatile uint32_t t94 = 1272410U;

	t94 = ((x489+x490)&(x491-x492));

	if (t94 != 264U) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x498 = 8U;
	static int8_t x499 = -16;

	t95 = ((x497+x498)&(x499-x500));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x501 = -9;
	uint32_t x502 = 21397U;
	static uint16_t x503 = UINT16_MAX;
	uint8_t x504 = 22U;
	uint32_t t96 = 22224480U;

	t96 = ((x501+x502)&(x503-x504));

	if (t96 != 21384U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x505 = -21638342LL;
	uint8_t x506 = 3U;
	int32_t x507 = INT32_MIN;
	uint64_t x508 = 198431LLU;
	volatile uint64_t t97 = 25106LLU;

	t97 = ((x505+x506)&(x507-x508));

	if (t97 != 18446744071540363297LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x509 = -1;
	uint32_t x510 = 4U;
	int64_t x511 = INT64_MIN;
	int64_t t98 = -1160977080024316LL;

	t98 = ((x509+x510)&(x511-x512));

	if (t98 != 3LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x517 = -1;
	int8_t x518 = INT8_MAX;
	int16_t x519 = INT16_MIN;
	int8_t x520 = -1;
	int32_t t99 = 125229;

	t99 = ((x517+x518)&(x519-x520));

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

