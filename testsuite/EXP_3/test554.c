#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x2 = UINT8_MAX;
int8_t x5 = -1;
static int64_t x17 = 7468878016667049LL;
uint64_t x20 = 3LLU;
uint8_t x24 = UINT8_MAX;
int16_t x26 = -1877;
int16_t x34 = INT16_MIN;
int64_t x37 = INT64_MIN;
int32_t x38 = 138776;
static uint64_t x44 = 130986980104267379LLU;
static volatile int32_t t9 = 3;
static int32_t t10 = -185075;
int32_t t11 = -518652;
int32_t t13 = -6335702;
volatile int8_t x64 = -1;
uint64_t x65 = 107725878LLU;
int64_t x67 = INT64_MIN;
uint8_t x69 = UINT8_MAX;
int16_t x76 = INT16_MAX;
volatile uint64_t x81 = UINT64_MAX;
uint32_t x83 = 195U;
static int32_t x92 = -68160;
static uint64_t x104 = 2611542145717LLU;
int8_t x110 = 35;
int64_t x112 = 192515493707683LL;
static int64_t x113 = -4130408579517572155LL;
uint32_t x122 = 1323U;
uint64_t x128 = 92160LLU;
volatile int32_t t28 = 1805;
volatile int16_t x136 = INT16_MAX;
volatile int32_t x139 = INT32_MIN;
int32_t t34 = -1194680;
int32_t t35 = -60;
uint8_t x158 = 12U;
int8_t x163 = INT8_MAX;
int32_t t37 = 1861;
int64_t x170 = INT64_MIN;
uint8_t x171 = 0U;
volatile uint16_t x174 = UINT16_MAX;
volatile int64_t x175 = INT64_MIN;
int32_t x179 = 2887025;
int32_t t42 = -21023;
volatile uint16_t x192 = 40U;
int64_t x193 = -3707681176LL;
volatile int32_t t45 = 2747338;
static int16_t x201 = 5309;
uint32_t x205 = UINT32_MAX;
int16_t x224 = -24;
volatile int32_t t52 = -951874;
int32_t x228 = -254;
uint32_t x229 = 9631U;
volatile int32_t t54 = 1975;
int16_t x235 = -20;
volatile int32_t t55 = -1;
static int8_t x238 = INT8_MAX;
int8_t x243 = 1;
volatile int16_t x246 = INT16_MAX;
static uint8_t x247 = 4U;
int32_t x249 = -1;
uint32_t x257 = 0U;
int8_t x262 = 54;
uint32_t x284 = UINT32_MAX;
volatile int32_t t66 = -185;
volatile uint64_t x285 = UINT64_MAX;
int64_t x287 = INT64_MIN;
int32_t x289 = -1650770;
static volatile int16_t x300 = INT16_MIN;
static int16_t x301 = INT16_MIN;
uint8_t x304 = 1U;
volatile int32_t x305 = -1;
uint64_t x306 = 3959564833611484LLU;
static int32_t t72 = -6794;
uint8_t x310 = 1U;
int32_t x312 = -1;
int32_t x314 = INT32_MIN;
int16_t x317 = -1;
uint16_t x318 = UINT16_MAX;
int8_t x320 = INT8_MIN;
volatile uint16_t x322 = UINT16_MAX;
volatile uint8_t x333 = 1U;
static volatile int32_t t79 = 91;
int8_t x339 = INT8_MIN;
volatile int32_t x340 = -1;
volatile int32_t t81 = 2;
volatile uint16_t x345 = 928U;
static volatile int32_t t83 = -1425671;
uint8_t x354 = 29U;
int16_t x364 = INT16_MIN;
volatile int32_t t88 = 139597;
static int8_t x374 = INT8_MAX;
int32_t t89 = 40;
int32_t t90 = 2355489;
uint8_t x384 = UINT8_MAX;
int32_t t91 = -2;
volatile int8_t x390 = INT8_MIN;
volatile int32_t t92 = 353147956;
int32_t x396 = -1848127;
int16_t x398 = INT16_MIN;
uint8_t x400 = UINT8_MAX;
volatile int32_t x404 = INT32_MIN;
int64_t x408 = INT64_MIN;
uint64_t x416 = 325198193499635584LLU;


void f0(void) {
	static int32_t x1 = 114652385;
	static int64_t x3 = 4301710114413342827LL;
	static int16_t x4 = 807;
	volatile int32_t t0 = 126424270;

	t0 = ((x1/x2)==(x3/x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = INT32_MAX;
	int8_t x7 = -1;
	int16_t x8 = -85;
	int32_t t1 = 261978;

	t1 = ((x5/x6)==(x7/x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 0;
	uint32_t x10 = UINT32_MAX;
	int32_t x11 = INT32_MIN;
	static uint64_t x12 = UINT64_MAX;
	int32_t t2 = -91;

	t2 = ((x9/x10)==(x11/x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = -1;
	int64_t x14 = -96LL;
	volatile int64_t x15 = -1LL;
	volatile uint32_t x16 = UINT32_MAX;
	volatile int32_t t3 = -1008325;

	t3 = ((x13/x14)==(x15/x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x18 = 72U;
	int32_t x19 = INT32_MIN;
	int32_t t4 = -1;

	t4 = ((x17/x18)==(x19/x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x21 = 5695U;
	static uint64_t x22 = UINT64_MAX;
	int32_t x23 = -146;
	volatile int32_t t5 = -49305683;

	t5 = ((x21/x22)==(x23/x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = 1381430883488403922LL;
	int64_t x27 = 60398556256LL;
	volatile int64_t x28 = INT64_MAX;
	volatile int32_t t6 = -43757241;

	t6 = ((x25/x26)==(x27/x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int16_t x33 = -1;
	int32_t x35 = 7704769;
	int16_t x36 = 301;
	volatile int32_t t7 = 5246;

	t7 = ((x33/x34)==(x35/x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x39 = 8369175628LLU;
	int16_t x40 = -5;
	int32_t t8 = 6923714;

	t8 = ((x37/x38)==(x39/x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = INT64_MAX;
	uint8_t x42 = UINT8_MAX;
	int64_t x43 = INT64_MAX;

	t9 = ((x41/x42)==(x43/x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x45 = UINT16_MAX;
	int16_t x46 = -1;
	int32_t x47 = INT32_MAX;
	static int64_t x48 = 3528925585171LL;

	t10 = ((x45/x46)==(x47/x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = INT32_MAX;
	static int64_t x50 = INT64_MIN;
	int64_t x51 = 4872LL;
	static int8_t x52 = -1;

	t11 = ((x49/x50)==(x51/x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = INT64_MIN;
	uint64_t x54 = UINT64_MAX;
	static int32_t x55 = -1;
	static uint16_t x56 = UINT16_MAX;
	static int32_t t12 = -222460492;

	t12 = ((x53/x54)==(x55/x56));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x57 = -421;
	int64_t x58 = -388LL;
	int64_t x59 = INT64_MIN;
	static volatile uint32_t x60 = 3U;

	t13 = ((x57/x58)==(x59/x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = INT8_MIN;
	static int16_t x62 = INT16_MIN;
	static int32_t x63 = 979484;
	int32_t t14 = -236667;

	t14 = ((x61/x62)==(x63/x64));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x66 = -1;
	int64_t x68 = INT64_MAX;
	int32_t t15 = -35162260;

	t15 = ((x65/x66)==(x67/x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x70 = INT32_MIN;
	uint64_t x71 = UINT64_MAX;
	int64_t x72 = INT64_MAX;
	volatile int32_t t16 = -1;

	t16 = ((x69/x70)==(x71/x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x73 = INT64_MAX;
	static uint8_t x74 = UINT8_MAX;
	uint64_t x75 = 5165781143120LLU;
	volatile int32_t t17 = -8257;

	t17 = ((x73/x74)==(x75/x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = 11;
	static int16_t x78 = 19;
	static volatile int64_t x79 = INT64_MAX;
	static int16_t x80 = INT16_MAX;
	int32_t t18 = -4156;

	t18 = ((x77/x78)==(x79/x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x82 = 34942282LLU;
	volatile int64_t x84 = INT64_MIN;
	int32_t t19 = -1035162;

	t19 = ((x81/x82)==(x83/x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x85 = 1U;
	uint64_t x86 = 3060LLU;
	int16_t x87 = 0;
	uint32_t x88 = 9596556U;
	int32_t t20 = -951;

	t20 = ((x85/x86)==(x87/x88));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x89 = -1;
	volatile int16_t x90 = INT16_MIN;
	int16_t x91 = -1;
	int32_t t21 = 1;

	t21 = ((x89/x90)==(x91/x92));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x93 = 962293212U;
	int8_t x94 = -9;
	int16_t x95 = -1;
	int32_t x96 = INT32_MIN;
	int32_t t22 = -1932;

	t22 = ((x93/x94)==(x95/x96));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x101 = 6862708461770085LLU;
	volatile uint16_t x102 = UINT16_MAX;
	static int64_t x103 = INT64_MAX;
	volatile int32_t t23 = -114;

	t23 = ((x101/x102)==(x103/x104));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x109 = 59948210071969983LL;
	static volatile int64_t x111 = -437663473337322817LL;
	static volatile int32_t t24 = 74621164;

	t24 = ((x109/x110)==(x111/x112));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x114 = 65616262LL;
	static int64_t x115 = INT64_MAX;
	int8_t x116 = -8;
	volatile int32_t t25 = -406863770;

	t25 = ((x113/x114)==(x115/x116));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x117 = UINT16_MAX;
	static int8_t x118 = INT8_MIN;
	int8_t x119 = INT8_MAX;
	uint16_t x120 = UINT16_MAX;
	volatile int32_t t26 = -25908330;

	t26 = ((x117/x118)==(x119/x120));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x121 = INT64_MIN;
	int64_t x123 = -838LL;
	uint8_t x124 = 1U;
	static volatile int32_t t27 = 120857;

	t27 = ((x121/x122)==(x123/x124));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x125 = INT64_MIN;
	int8_t x126 = INT8_MAX;
	static int64_t x127 = -1LL;

	t28 = ((x125/x126)==(x127/x128));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x129 = 180;
	int64_t x130 = INT64_MIN;
	uint32_t x131 = 359395614U;
	uint32_t x132 = UINT32_MAX;
	volatile int32_t t29 = 38388168;

	t29 = ((x129/x130)==(x131/x132));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x133 = -1;
	int32_t x134 = INT32_MIN;
	volatile int8_t x135 = -1;
	static volatile int32_t t30 = 24;

	t30 = ((x133/x134)==(x135/x136));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x137 = INT32_MIN;
	static uint16_t x138 = 1U;
	uint32_t x140 = UINT32_MAX;
	int32_t t31 = 0;

	t31 = ((x137/x138)==(x139/x140));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x141 = INT8_MAX;
	static uint64_t x142 = 2307385148952655LLU;
	static int32_t x143 = -1;
	int64_t x144 = -375911961902152LL;
	int32_t t32 = -14;

	t32 = ((x141/x142)==(x143/x144));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x145 = -1;
	uint64_t x146 = 26157436LLU;
	static int32_t x147 = 53;
	int8_t x148 = -36;
	volatile int32_t t33 = 173;

	t33 = ((x145/x146)==(x147/x148));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x149 = 0;
	int8_t x150 = -1;
	uint32_t x151 = UINT32_MAX;
	int32_t x152 = INT32_MIN;

	t34 = ((x149/x150)==(x151/x152));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x153 = 29891728U;
	int64_t x154 = INT64_MAX;
	volatile int32_t x155 = INT32_MIN;
	static int64_t x156 = INT64_MIN;

	t35 = ((x153/x154)==(x155/x156));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int8_t x157 = -1;
	uint32_t x159 = 28403410U;
	int8_t x160 = INT8_MIN;
	static int32_t t36 = 2;

	t36 = ((x157/x158)==(x159/x160));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x161 = -1;
	uint32_t x162 = 3U;
	int32_t x164 = -1;

	t37 = ((x161/x162)==(x163/x164));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x165 = 1522464839LLU;
	int8_t x166 = INT8_MIN;
	static volatile uint16_t x167 = UINT16_MAX;
	static uint32_t x168 = 33032146U;
	int32_t t38 = 576;

	t38 = ((x165/x166)==(x167/x168));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x169 = 4859U;
	int8_t x172 = INT8_MIN;
	volatile int32_t t39 = 6904630;

	t39 = ((x169/x170)==(x171/x172));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x173 = INT32_MAX;
	static volatile uint64_t x176 = UINT64_MAX;
	int32_t t40 = 12862;

	t40 = ((x173/x174)==(x175/x176));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x177 = -88770;
	uint16_t x178 = 20318U;
	volatile uint32_t x180 = UINT32_MAX;
	static volatile int32_t t41 = -3861700;

	t41 = ((x177/x178)==(x179/x180));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x181 = INT32_MIN;
	uint64_t x182 = 12272032722002LLU;
	int32_t x183 = 12761;
	int64_t x184 = INT64_MAX;

	t42 = ((x181/x182)==(x183/x184));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x185 = INT32_MAX;
	static volatile int64_t x186 = -769663633207564LL;
	uint16_t x187 = UINT16_MAX;
	volatile uint64_t x188 = 4LLU;
	volatile int32_t t43 = -1;

	t43 = ((x185/x186)==(x187/x188));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x189 = 6;
	int16_t x190 = INT16_MIN;
	int64_t x191 = -1LL;
	volatile int32_t t44 = 305466914;

	t44 = ((x189/x190)==(x191/x192));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x194 = UINT16_MAX;
	uint64_t x195 = 13394LLU;
	int8_t x196 = -20;

	t45 = ((x193/x194)==(x195/x196));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x197 = INT64_MIN;
	int32_t x198 = INT32_MIN;
	volatile uint16_t x199 = 1U;
	int32_t x200 = INT32_MIN;
	volatile int32_t t46 = 26;

	t46 = ((x197/x198)==(x199/x200));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x202 = -57;
	uint16_t x203 = 6U;
	int32_t x204 = -1;
	volatile int32_t t47 = 606;

	t47 = ((x201/x202)==(x203/x204));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x206 = 1U;
	uint64_t x207 = 142LLU;
	uint64_t x208 = 127572LLU;
	static int32_t t48 = -158;

	t48 = ((x205/x206)==(x207/x208));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x209 = INT8_MIN;
	int16_t x210 = -12422;
	int16_t x211 = 19;
	int8_t x212 = INT8_MIN;
	volatile int32_t t49 = -43;

	t49 = ((x209/x210)==(x211/x212));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x213 = 828U;
	int16_t x214 = INT16_MIN;
	int32_t x215 = 2071;
	int16_t x216 = -1;
	int32_t t50 = 1897672;

	t50 = ((x213/x214)==(x215/x216));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x217 = INT64_MAX;
	volatile int8_t x218 = INT8_MAX;
	int64_t x219 = -1LL;
	int16_t x220 = INT16_MIN;
	int32_t t51 = 0;

	t51 = ((x217/x218)==(x219/x220));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x221 = 29U;
	int64_t x222 = 5497206360708919LL;
	static uint32_t x223 = 1428578U;

	t52 = ((x221/x222)==(x223/x224));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x225 = UINT16_MAX;
	int8_t x226 = 1;
	static int64_t x227 = 66177922126626LL;
	int32_t t53 = -1;

	t53 = ((x225/x226)==(x227/x228));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x230 = 1;
	static volatile uint32_t x231 = 239113U;
	static uint8_t x232 = 1U;

	t54 = ((x229/x230)==(x231/x232));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x233 = -1;
	static int16_t x234 = 52;
	int16_t x236 = INT16_MIN;

	t55 = ((x233/x234)==(x235/x236));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x237 = 46U;
	int8_t x239 = INT8_MIN;
	int32_t x240 = -630395217;
	static int32_t t56 = 50712;

	t56 = ((x237/x238)==(x239/x240));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x241 = INT64_MIN;
	uint64_t x242 = 6029252LLU;
	static int16_t x244 = INT16_MIN;
	static int32_t t57 = 0;

	t57 = ((x241/x242)==(x243/x244));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x245 = UINT64_MAX;
	int64_t x248 = -1LL;
	volatile int32_t t58 = -1541659;

	t58 = ((x245/x246)==(x247/x248));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x250 = -88166653821LL;
	static int16_t x251 = INT16_MIN;
	static int64_t x252 = INT64_MAX;
	int32_t t59 = -5402;

	t59 = ((x249/x250)==(x251/x252));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x253 = INT64_MIN;
	static volatile int32_t x254 = -261589;
	volatile int64_t x255 = -1LL;
	uint64_t x256 = UINT64_MAX;
	static volatile int32_t t60 = -1;

	t60 = ((x253/x254)==(x255/x256));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x258 = INT16_MIN;
	int8_t x259 = 4;
	int32_t x260 = INT32_MAX;
	volatile int32_t t61 = 182;

	t61 = ((x257/x258)==(x259/x260));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x261 = 196719U;
	volatile int64_t x263 = -1LL;
	int8_t x264 = 1;
	int32_t t62 = -10431;

	t62 = ((x261/x262)==(x263/x264));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x265 = 168393247954212LL;
	int64_t x266 = -1LL;
	volatile int64_t x267 = INT64_MAX;
	static uint64_t x268 = 849920282892455004LLU;
	int32_t t63 = -85;

	t63 = ((x265/x266)==(x267/x268));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x273 = 5921059165091274LL;
	int32_t x274 = INT32_MIN;
	int32_t x275 = INT32_MAX;
	int8_t x276 = INT8_MAX;
	int32_t t64 = 7648;

	t64 = ((x273/x274)==(x275/x276));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x277 = INT32_MAX;
	int16_t x278 = INT16_MIN;
	int64_t x279 = -247138656LL;
	int64_t x280 = INT64_MAX;
	static int32_t t65 = 1;

	t65 = ((x277/x278)==(x279/x280));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x281 = INT32_MAX;
	int16_t x282 = INT16_MAX;
	int32_t x283 = -3748;

	t66 = ((x281/x282)==(x283/x284));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x286 = INT32_MAX;
	volatile uint8_t x288 = UINT8_MAX;
	int32_t t67 = 186;

	t67 = ((x285/x286)==(x287/x288));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x290 = -1;
	uint16_t x291 = UINT16_MAX;
	int64_t x292 = 1741904347LL;
	static int32_t t68 = -198;

	t68 = ((x289/x290)==(x291/x292));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x293 = 20;
	int64_t x294 = -9219LL;
	uint64_t x295 = 470114682143033LLU;
	static volatile uint8_t x296 = UINT8_MAX;
	volatile int32_t t69 = -1;

	t69 = ((x293/x294)==(x295/x296));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x297 = 123872740344LL;
	uint64_t x298 = UINT64_MAX;
	static volatile int16_t x299 = 367;
	volatile int32_t t70 = 46976721;

	t70 = ((x297/x298)==(x299/x300));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x302 = -1;
	static int64_t x303 = -1LL;
	volatile int32_t t71 = -8;

	t71 = ((x301/x302)==(x303/x304));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x307 = 0U;
	int64_t x308 = INT64_MAX;

	t72 = ((x305/x306)==(x307/x308));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x309 = INT32_MAX;
	static uint64_t x311 = UINT64_MAX;
	volatile int32_t t73 = -24;

	t73 = ((x309/x310)==(x311/x312));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x313 = INT64_MIN;
	uint32_t x315 = UINT32_MAX;
	int8_t x316 = -12;
	int32_t t74 = 90231670;

	t74 = ((x313/x314)==(x315/x316));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x319 = -1;
	int32_t t75 = 26516324;

	t75 = ((x317/x318)==(x319/x320));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x321 = 3U;
	int64_t x323 = INT64_MAX;
	int16_t x324 = 491;
	volatile int32_t t76 = 1159164;

	t76 = ((x321/x322)==(x323/x324));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x325 = 2726375909239046273LLU;
	int16_t x326 = INT16_MAX;
	static int64_t x327 = INT64_MIN;
	static int64_t x328 = INT64_MIN;
	int32_t t77 = 0;

	t77 = ((x325/x326)==(x327/x328));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x329 = 865486903;
	int16_t x330 = INT16_MAX;
	int64_t x331 = -1LL;
	static uint64_t x332 = 126588LLU;
	int32_t t78 = -4138828;

	t78 = ((x329/x330)==(x331/x332));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x334 = INT64_MIN;
	volatile uint64_t x335 = 159245476372260LLU;
	volatile int8_t x336 = -1;

	t79 = ((x333/x334)==(x335/x336));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x337 = -1;
	int32_t x338 = INT32_MIN;
	int32_t t80 = -27;

	t80 = ((x337/x338)==(x339/x340));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x341 = 116LL;
	int8_t x342 = INT8_MIN;
	static volatile int64_t x343 = 117507705940LL;
	uint32_t x344 = 24U;

	t81 = ((x341/x342)==(x343/x344));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x346 = 97394442LLU;
	int64_t x347 = INT64_MAX;
	volatile int8_t x348 = -1;
	int32_t t82 = 1;

	t82 = ((x345/x346)==(x347/x348));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x349 = UINT16_MAX;
	uint32_t x350 = UINT32_MAX;
	uint64_t x351 = UINT64_MAX;
	int32_t x352 = -20875;

	t83 = ((x349/x350)==(x351/x352));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x353 = 6U;
	int64_t x355 = 847508LL;
	uint8_t x356 = 6U;
	int32_t t84 = 29083;

	t84 = ((x353/x354)==(x355/x356));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x357 = INT64_MIN;
	uint64_t x358 = 8066632875LLU;
	volatile int32_t x359 = -1;
	volatile uint16_t x360 = 1652U;
	int32_t t85 = -1356265;

	t85 = ((x357/x358)==(x359/x360));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x361 = INT16_MIN;
	int16_t x362 = INT16_MIN;
	int64_t x363 = INT64_MAX;
	static volatile int32_t t86 = -454397;

	t86 = ((x361/x362)==(x363/x364));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x365 = INT64_MIN;
	int64_t x366 = INT64_MAX;
	int8_t x367 = -1;
	volatile uint64_t x368 = 330097LLU;
	int32_t t87 = 61;

	t87 = ((x365/x366)==(x367/x368));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x369 = -4;
	int16_t x370 = INT16_MAX;
	int64_t x371 = -26617547645186927LL;
	uint32_t x372 = 156U;

	t88 = ((x369/x370)==(x371/x372));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x373 = INT64_MIN;
	uint16_t x375 = 14958U;
	int64_t x376 = -875769218243186740LL;

	t89 = ((x373/x374)==(x375/x376));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x377 = INT64_MIN;
	int64_t x378 = -24453LL;
	int32_t x379 = INT32_MAX;
	int32_t x380 = INT32_MAX;

	t90 = ((x377/x378)==(x379/x380));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x381 = -1;
	volatile uint16_t x382 = UINT16_MAX;
	uint64_t x383 = 595131616190370892LLU;

	t91 = ((x381/x382)==(x383/x384));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x389 = UINT32_MAX;
	int16_t x391 = 13576;
	int16_t x392 = INT16_MIN;

	t92 = ((x389/x390)==(x391/x392));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x393 = INT16_MIN;
	static uint32_t x394 = 116697U;
	int16_t x395 = INT16_MIN;
	int32_t t93 = 162;

	t93 = ((x393/x394)==(x395/x396));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x397 = -611622571LL;
	uint32_t x399 = 34837U;
	volatile int32_t t94 = 445409158;

	t94 = ((x397/x398)==(x399/x400));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x401 = INT8_MIN;
	static int8_t x402 = -58;
	volatile int16_t x403 = -1;
	static volatile int32_t t95 = 1;

	t95 = ((x401/x402)==(x403/x404));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x405 = 131902690753LL;
	uint32_t x406 = 7823U;
	volatile int16_t x407 = INT16_MIN;
	int32_t t96 = 23268;

	t96 = ((x405/x406)==(x407/x408));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x409 = 2U;
	static uint32_t x410 = 22499622U;
	static int64_t x411 = -632951963622562LL;
	int16_t x412 = INT16_MIN;
	int32_t t97 = -728324;

	t97 = ((x409/x410)==(x411/x412));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x413 = INT32_MIN;
	volatile int64_t x414 = INT64_MAX;
	int32_t x415 = 486;
	static volatile int32_t t98 = 1;

	t98 = ((x413/x414)==(x415/x416));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x417 = 672044U;
	int64_t x418 = -1LL;
	int16_t x419 = -1954;
	int16_t x420 = -113;
	static volatile int32_t t99 = 63765;

	t99 = ((x417/x418)==(x419/x420));

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

