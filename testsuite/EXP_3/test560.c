#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x14 = 3489;
int32_t t2 = 22180;
static uint64_t x17 = UINT64_MAX;
int64_t x18 = -1LL;
uint64_t x21 = 21LLU;
uint64_t x29 = 6459434192435LLU;
int16_t x35 = INT16_MIN;
static volatile uint32_t x39 = 18U;
uint64_t x41 = 3031747LLU;
volatile int8_t x49 = INT8_MIN;
volatile int32_t t11 = 534;
int16_t x53 = INT16_MIN;
volatile int32_t t13 = -28597146;
int16_t x65 = -794;
uint8_t x68 = UINT8_MAX;
static int16_t x70 = 212;
int64_t x72 = INT64_MIN;
int8_t x74 = -1;
volatile uint16_t x77 = 1U;
int64_t x80 = -1LL;
int8_t x82 = 1;
volatile int64_t x85 = -1LL;
volatile int8_t x86 = -3;
volatile int64_t x89 = -1LL;
static uint32_t x106 = 1U;
int16_t x107 = INT16_MIN;
int16_t x109 = -1;
volatile int64_t x130 = INT64_MIN;
static volatile uint32_t x131 = 548084U;
int16_t x132 = -734;
int16_t x137 = -1;
int64_t x144 = 82299979LL;
volatile uint8_t x147 = 2U;
volatile int8_t x158 = INT8_MAX;
int16_t x164 = 26;
static uint64_t x165 = UINT64_MAX;
uint64_t t37 = 133668LLU;
volatile int16_t x169 = 2483;
int8_t x172 = 1;
int32_t x173 = 10573;
int32_t x180 = INT32_MIN;
int32_t x187 = 129321;
uint8_t x192 = UINT8_MAX;
int64_t x197 = INT64_MIN;
uint16_t x206 = UINT16_MAX;
volatile uint32_t x208 = UINT32_MAX;
volatile uint32_t x216 = UINT32_MAX;
uint16_t x224 = 4760U;
static volatile int32_t t48 = -881971;
static uint16_t x229 = UINT16_MAX;
int64_t x237 = -1LL;
int64_t x238 = INT64_MIN;
uint64_t t52 = 12LLU;
int16_t x241 = INT16_MIN;
uint64_t x242 = 10984181779368LLU;
uint16_t x249 = UINT16_MAX;
int32_t x255 = INT32_MIN;
static uint32_t x256 = UINT32_MAX;
static volatile int32_t x260 = INT32_MAX;
int32_t x261 = -1;
uint8_t x262 = 23U;
volatile uint32_t x266 = UINT32_MAX;
uint32_t t59 = 2038510U;
int16_t x273 = -1;
static volatile uint32_t t61 = UINT32_MAX;
int64_t x278 = -279882LL;
volatile int16_t x280 = INT16_MIN;
uint32_t x291 = 20U;
int16_t x292 = INT16_MIN;
int16_t x294 = -1;
int16_t x303 = -1;
uint8_t x318 = 1U;
int64_t x319 = INT64_MAX;
int32_t t71 = 0;
int32_t x325 = INT32_MAX;
int32_t x328 = INT32_MAX;
uint8_t x330 = UINT8_MAX;
int16_t x331 = -1;
int8_t x336 = INT8_MIN;
static volatile uint64_t t77 = 124123027120708239LLU;
volatile int16_t x358 = INT16_MAX;
int8_t x362 = -1;
int32_t x364 = 17629057;
uint8_t x372 = 30U;
volatile uint64_t t83 = 0LLU;
uint32_t x384 = 243835U;
volatile uint64_t t87 = 2754697LLU;
volatile uint8_t x393 = 7U;
int8_t x394 = -1;
int16_t x409 = -1;
volatile uint32_t x410 = UINT32_MAX;
volatile uint32_t t93 = 4424U;
volatile uint32_t x415 = 178162U;
int32_t x418 = -145065;
static volatile int16_t x429 = -1;
static int32_t x432 = INT32_MIN;
volatile int16_t x435 = INT16_MIN;
uint64_t x436 = UINT64_MAX;


void f0(void) {
	volatile uint32_t x5 = 228975U;
	int64_t x6 = INT64_MAX;
	int64_t x7 = -31049571028941672LL;
	int8_t x8 = INT8_MIN;
	volatile int64_t t0 = 22LL;

	t0 = ((x5%x6)+(x7/x8));

	if (t0 != 242574773892581LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x9 = -1LL;
	int64_t x10 = INT64_MAX;
	int8_t x11 = INT8_MAX;
	int64_t x12 = INT64_MIN;
	int64_t t1 = -4LL;

	t1 = ((x9%x10)+(x11/x12));

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = -1;
	static uint8_t x15 = UINT8_MAX;
	int32_t x16 = INT32_MIN;

	t2 = ((x13%x14)+(x15/x16));

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x19 = 23LLU;
	uint16_t x20 = 7U;
	uint64_t t3 = 2565LLU;

	t3 = ((x17%x18)+(x19/x20));

	if (t3 != 3LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x22 = 1U;
	int64_t x23 = 15397386606LL;
	int64_t x24 = 61LL;
	uint64_t t4 = 1067443777100992344LLU;

	t4 = ((x21%x22)+(x23/x24));

	if (t4 != 252416173LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x25 = INT16_MAX;
	volatile int8_t x26 = INT8_MIN;
	volatile int16_t x27 = INT16_MIN;
	int32_t x28 = INT32_MIN;
	int32_t t5 = 211027951;

	t5 = ((x25%x26)+(x27/x28));

	if (t5 != 127) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x30 = 1134102736064774718LL;
	volatile uint64_t x31 = 63809399627999152LLU;
	volatile int32_t x32 = -5419;
	uint64_t t6 = 25846770LLU;

	t6 = ((x29%x30)+(x31/x32));

	if (t6 != 6459434192435LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x33 = 210U;
	volatile int32_t x34 = INT32_MIN;
	uint8_t x36 = UINT8_MAX;
	uint32_t t7 = 0U;

	t7 = ((x33%x34)+(x35/x36));

	if (t7 != 82U) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = 1;
	int8_t x38 = INT8_MIN;
	uint8_t x40 = UINT8_MAX;
	uint32_t t8 = 93U;

	t8 = ((x37%x38)+(x39/x40));

	if (t8 != 1U) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x42 = 2684;
	uint64_t x43 = 5LLU;
	int32_t x44 = INT32_MAX;
	uint64_t t9 = 1272145453530LLU;

	t9 = ((x41%x42)+(x43/x44));

	if (t9 != 1511LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x45 = 9U;
	int64_t x46 = -102LL;
	static int64_t x47 = INT64_MAX;
	int64_t x48 = INT64_MIN;
	static int64_t t10 = -115043981373697685LL;

	t10 = ((x45%x46)+(x47/x48));

	if (t10 != 9LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x50 = INT8_MIN;
	uint16_t x51 = 15U;
	static uint16_t x52 = 433U;

	t11 = ((x49%x50)+(x51/x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x54 = 730;
	static volatile int32_t x55 = 3475397;
	static volatile int32_t x56 = INT32_MIN;
	int32_t t12 = 762377;

	t12 = ((x53%x54)+(x55/x56));

	if (t12 != -648) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = INT16_MIN;
	int16_t x58 = INT16_MIN;
	int32_t x59 = INT32_MAX;
	static volatile uint16_t x60 = 216U;

	t13 = ((x57%x58)+(x59/x60));

	if (t13 != 9942053) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x66 = 7618U;
	volatile int64_t x67 = 11LL;
	volatile int64_t t14 = 87LL;

	t14 = ((x65%x66)+(x67/x68));

	if (t14 != 6664LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x69 = UINT16_MAX;
	uint64_t x71 = UINT64_MAX;
	uint64_t t15 = 8720471864014864035LLU;

	t15 = ((x69%x70)+(x71/x72));

	if (t15 != 28LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x73 = UINT64_MAX;
	uint64_t x75 = 2172759403016082LLU;
	int8_t x76 = -51;
	uint64_t t16 = 11LLU;

	t16 = ((x73%x74)+(x75/x76));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x78 = -1;
	int16_t x79 = 440;
	int64_t t17 = 5LL;

	t17 = ((x77%x78)+(x79/x80));

	if (t17 != -440LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x81 = INT16_MIN;
	static int16_t x83 = -1;
	int64_t x84 = -1784036457173453LL;
	static volatile int64_t t18 = -22LL;

	t18 = ((x81%x82)+(x83/x84));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x87 = -35;
	static int32_t x88 = -1;
	int64_t t19 = 6191LL;

	t19 = ((x85%x86)+(x87/x88));

	if (t19 != 34LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x90 = 75;
	static int16_t x91 = INT16_MIN;
	static int16_t x92 = -39;
	static volatile int64_t t20 = -742568LL;

	t20 = ((x89%x90)+(x91/x92));

	if (t20 != 839LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x97 = -39894026751602LL;
	uint8_t x98 = UINT8_MAX;
	int32_t x99 = INT32_MIN;
	static int64_t x100 = INT64_MIN;
	int64_t t21 = -40064000210322263LL;

	t21 = ((x97%x98)+(x99/x100));

	if (t21 != -197LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x101 = -1LL;
	uint64_t x102 = 9757036003700LLU;
	static int16_t x103 = -1;
	static uint16_t x104 = UINT16_MAX;
	volatile uint64_t t22 = 7809219LLU;

	t22 = ((x101%x102)+(x103/x104));

	if (t22 != 3991790298315LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x105 = -1;
	static uint32_t x108 = 14204408U;
	volatile uint32_t t23 = 128510991U;

	t23 = ((x105%x106)+(x107/x108));

	if (t23 != 302U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x110 = INT32_MAX;
	static uint16_t x111 = UINT16_MAX;
	uint16_t x112 = 215U;
	static int32_t t24 = -773;

	t24 = ((x109%x110)+(x111/x112));

	if (t24 != 303) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x113 = INT64_MIN;
	volatile int16_t x114 = -1;
	static volatile int64_t x115 = INT64_MAX;
	int16_t x116 = INT16_MAX;
	volatile int64_t t25 = 386539221171597806LL;

	t25 = ((x113%x114)+(x115/x116));

	if (t25 != 281483566907400LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x117 = -390361;
	int8_t x118 = -1;
	uint64_t x119 = 16214173813495919LLU;
	uint64_t x120 = UINT64_MAX;
	volatile uint64_t t26 = 305424440307LLU;

	t26 = ((x117%x118)+(x119/x120));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x125 = -1;
	int16_t x126 = -13201;
	static int64_t x127 = INT64_MAX;
	int16_t x128 = INT16_MIN;
	volatile int64_t t27 = 27923121012LL;

	t27 = ((x125%x126)+(x127/x128));

	if (t27 != -281474976710656LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x129 = 15975U;
	int64_t t28 = -10189020803687050LL;

	t28 = ((x129%x130)+(x131/x132));

	if (t28 != 15975LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x133 = 895147708LL;
	volatile int16_t x134 = -1;
	uint8_t x135 = 110U;
	int32_t x136 = 254192661;
	volatile int64_t t29 = -3LL;

	t29 = ((x133%x134)+(x135/x136));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x138 = -1;
	static volatile uint64_t x139 = UINT64_MAX;
	volatile uint32_t x140 = 1U;
	uint64_t t30 = UINT64_MAX;

	t30 = ((x137%x138)+(x139/x140));

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x141 = 5406LL;
	int16_t x142 = INT16_MIN;
	int16_t x143 = 16349;
	int64_t t31 = 248803866799206LL;

	t31 = ((x141%x142)+(x143/x144));

	if (t31 != 5406LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x145 = 975744571U;
	static uint8_t x146 = 15U;
	int32_t x148 = INT32_MIN;
	uint32_t t32 = 23435U;

	t32 = ((x145%x146)+(x147/x148));

	if (t32 != 1U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x149 = -1;
	int32_t x150 = 68311;
	volatile int8_t x151 = INT8_MIN;
	int64_t x152 = INT64_MIN;
	int64_t t33 = -28884380LL;

	t33 = ((x149%x150)+(x151/x152));

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x153 = 0U;
	int8_t x154 = -1;
	uint16_t x155 = 511U;
	static int32_t x156 = INT32_MAX;
	volatile int32_t t34 = 418962;

	t34 = ((x153%x154)+(x155/x156));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x157 = UINT64_MAX;
	uint64_t x159 = 364261469533804943LLU;
	uint16_t x160 = UINT16_MAX;
	uint64_t t35 = 1332693015450LLU;

	t35 = ((x157%x158)+(x159/x160));

	if (t35 != 5558273739740LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x161 = INT8_MIN;
	int16_t x162 = -1;
	static int32_t x163 = 390940527;
	int32_t t36 = 388;

	t36 = ((x161%x162)+(x163/x164));

	if (t36 != 15036174) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x166 = -1;
	volatile uint8_t x167 = 1U;
	volatile int16_t x168 = 2403;

	t37 = ((x165%x166)+(x167/x168));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x170 = 1199076554LL;
	int16_t x171 = 1;
	int64_t t38 = -687826751LL;

	t38 = ((x169%x170)+(x171/x172));

	if (t38 != 2484LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x174 = 64LLU;
	volatile int16_t x175 = INT16_MIN;
	static int16_t x176 = 11345;
	volatile uint64_t t39 = 6523711946LLU;

	t39 = ((x173%x174)+(x175/x176));

	if (t39 != 11LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x177 = -4;
	uint16_t x178 = UINT16_MAX;
	static volatile int16_t x179 = INT16_MAX;
	int32_t t40 = -1105999;

	t40 = ((x177%x178)+(x179/x180));

	if (t40 != -4) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x185 = 0LL;
	int8_t x186 = INT8_MIN;
	volatile int64_t x188 = -93931382LL;
	static int64_t t41 = 4193262LL;

	t41 = ((x185%x186)+(x187/x188));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x189 = INT32_MIN;
	int32_t x190 = INT32_MIN;
	static int16_t x191 = 328;
	volatile int32_t t42 = -12386058;

	t42 = ((x189%x190)+(x191/x192));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x198 = -1;
	int16_t x199 = INT16_MAX;
	volatile int8_t x200 = INT8_MAX;
	int64_t t43 = -46658718197LL;

	t43 = ((x197%x198)+(x199/x200));

	if (t43 != 258LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x201 = INT32_MAX;
	uint32_t x202 = 1U;
	int64_t x203 = INT64_MIN;
	static int8_t x204 = INT8_MIN;
	int64_t t44 = 25565433LL;

	t44 = ((x201%x202)+(x203/x204));

	if (t44 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x205 = -5;
	uint32_t x207 = UINT32_MAX;
	volatile uint32_t t45 = 21U;

	t45 = ((x205%x206)+(x207/x208));

	if (t45 != 4294967292U) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x213 = -1;
	int16_t x214 = -12;
	uint32_t x215 = UINT32_MAX;
	volatile uint32_t t46 = 4U;

	t46 = ((x213%x214)+(x215/x216));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x217 = 42U;
	int64_t x218 = 134294LL;
	static uint16_t x219 = 681U;
	volatile int32_t x220 = 31146;
	volatile int64_t t47 = 568161229LL;

	t47 = ((x217%x218)+(x219/x220));

	if (t47 != 42LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x221 = 7881U;
	int16_t x222 = -1;
	int32_t x223 = INT32_MIN;

	t48 = ((x221%x222)+(x223/x224));

	if (t48 != -451152) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x225 = UINT32_MAX;
	int16_t x226 = -3;
	static int64_t x227 = INT64_MAX;
	static int64_t x228 = INT64_MIN;
	volatile int64_t t49 = -420622399LL;

	t49 = ((x225%x226)+(x227/x228));

	if (t49 != 2LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x230 = 375U;
	static uint32_t x231 = 781035U;
	int8_t x232 = INT8_MAX;
	volatile uint32_t t50 = 10882101U;

	t50 = ((x229%x230)+(x231/x232));

	if (t50 != 6434U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x233 = 29U;
	uint32_t x234 = UINT32_MAX;
	uint16_t x235 = 8U;
	volatile int64_t x236 = INT64_MAX;
	static volatile int64_t t51 = -108172604917188596LL;

	t51 = ((x233%x234)+(x235/x236));

	if (t51 != 29LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x239 = UINT64_MAX;
	int32_t x240 = INT32_MIN;

	t52 = ((x237%x238)+(x239/x240));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x243 = INT32_MAX;
	int16_t x244 = INT16_MIN;
	volatile uint64_t t53 = 25746LLU;

	t53 = ((x241%x242)+(x243/x244));

	if (t53 != 8051074848425LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x245 = UINT16_MAX;
	int8_t x246 = -1;
	int8_t x247 = INT8_MIN;
	static uint16_t x248 = 7264U;
	static int32_t t54 = -21;

	t54 = ((x245%x246)+(x247/x248));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x250 = INT16_MIN;
	static uint32_t x251 = UINT32_MAX;
	int32_t x252 = INT32_MIN;
	static volatile uint32_t t55 = 18506092U;

	t55 = ((x249%x250)+(x251/x252));

	if (t55 != 32768U) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x253 = INT16_MAX;
	int32_t x254 = 134112272;
	volatile uint32_t t56 = 51208800U;

	t56 = ((x253%x254)+(x255/x256));

	if (t56 != 32767U) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x257 = INT32_MAX;
	int32_t x258 = 13627;
	uint32_t x259 = 0U;
	static uint32_t t57 = 25U;

	t57 = ((x257%x258)+(x259/x260));

	if (t57 != 4717U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x263 = UINT64_MAX;
	int8_t x264 = -1;
	uint64_t t58 = 3735567LLU;

	t58 = ((x261%x262)+(x263/x264));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x265 = UINT32_MAX;
	volatile uint8_t x267 = 30U;
	int16_t x268 = -118;

	t59 = ((x265%x266)+(x267/x268));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x269 = 185;
	int16_t x270 = -1;
	static uint32_t x271 = UINT32_MAX;
	uint8_t x272 = UINT8_MAX;
	static volatile uint32_t t60 = 328016U;

	t60 = ((x269%x270)+(x271/x272));

	if (t60 != 16843009U) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x274 = INT8_MAX;
	int16_t x275 = 1317;
	uint32_t x276 = 156607U;

	t61 = ((x273%x274)+(x275/x276));

	if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x277 = -1;
	uint64_t x279 = 289363756LLU;
	uint64_t t62 = UINT64_MAX;

	t62 = ((x277%x278)+(x279/x280));

	if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x281 = 320U;
	int16_t x282 = -1;
	int16_t x283 = INT16_MIN;
	int8_t x284 = INT8_MIN;
	int32_t t63 = 0;

	t63 = ((x281%x282)+(x283/x284));

	if (t63 != 256) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x285 = 0;
	volatile uint64_t x286 = 994144641548163LLU;
	static int16_t x287 = 5659;
	volatile uint32_t x288 = UINT32_MAX;
	uint64_t t64 = 6663417LLU;

	t64 = ((x285%x286)+(x287/x288));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x289 = INT64_MIN;
	uint32_t x290 = 174977U;
	volatile int64_t t65 = 4856656715308029LL;

	t65 = ((x289%x290)+(x291/x292));

	if (t65 != -160278LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x293 = 7U;
	uint16_t x295 = UINT16_MAX;
	static int8_t x296 = 18;
	volatile int32_t t66 = -15846;

	t66 = ((x293%x294)+(x295/x296));

	if (t66 != 3640) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x297 = 183806LLU;
	volatile int32_t x298 = INT32_MAX;
	int8_t x299 = INT8_MIN;
	static volatile uint32_t x300 = 1755501656U;
	volatile uint64_t t67 = 5927262382LLU;

	t67 = ((x297%x298)+(x299/x300));

	if (t67 != 183808LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x301 = UINT16_MAX;
	int32_t x302 = INT32_MAX;
	volatile int16_t x304 = INT16_MIN;
	static int32_t t68 = 66;

	t68 = ((x301%x302)+(x303/x304));

	if (t68 != 65535) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x313 = 1U;
	uint64_t x314 = 32LLU;
	int16_t x315 = INT16_MIN;
	uint64_t x316 = 13713096LLU;
	uint64_t t69 = 3212656LLU;

	t69 = ((x313%x314)+(x315/x316));

	if (t69 != 1345191784096LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x317 = 1088246;
	int8_t x320 = 62;
	volatile int64_t t70 = 1694820339827729541LL;

	t70 = ((x317%x318)+(x319/x320));

	if (t70 != 148764065110560900LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x321 = 1U;
	int16_t x322 = -136;
	static int16_t x323 = -1;
	static volatile uint16_t x324 = 161U;

	t71 = ((x321%x322)+(x323/x324));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x326 = INT32_MAX;
	int8_t x327 = -1;
	static int32_t t72 = -21551;

	t72 = ((x325%x326)+(x327/x328));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint8_t x329 = 87U;
	static uint64_t x332 = 44980765712714868LLU;
	static uint64_t t73 = 51LLU;

	t73 = ((x329%x330)+(x331/x332));

	if (t73 != 497LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x333 = INT32_MIN;
	int64_t x334 = -76414941LL;
	uint8_t x335 = UINT8_MAX;
	int64_t t74 = 3526155500LL;

	t74 = ((x333%x334)+(x335/x336));

	if (t74 != -7865301LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x337 = INT8_MIN;
	static uint8_t x338 = UINT8_MAX;
	volatile int64_t x339 = INT64_MIN;
	volatile int16_t x340 = -3640;
	int64_t t75 = -17681687LL;

	t75 = ((x337%x338)+(x339/x340));

	if (t75 != 2533893416718217LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x341 = INT64_MIN;
	static volatile uint16_t x342 = UINT16_MAX;
	int32_t x343 = 433;
	volatile int8_t x344 = -28;
	int64_t t76 = 3072533999356503158LL;

	t76 = ((x341%x342)+(x343/x344));

	if (t76 != -32783LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x345 = 46047371LLU;
	static int16_t x346 = INT16_MIN;
	uint8_t x347 = UINT8_MAX;
	static uint64_t x348 = 24312343511491LLU;

	t77 = ((x345%x346)+(x347/x348));

	if (t77 != 46047371LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x349 = 0U;
	int16_t x350 = INT16_MIN;
	static int8_t x351 = INT8_MIN;
	int32_t x352 = -984650634;
	int32_t t78 = -3;

	t78 = ((x349%x350)+(x351/x352));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x353 = 46U;
	static int32_t x354 = INT32_MIN;
	int8_t x355 = -14;
	uint32_t x356 = 8103287U;
	static uint32_t t79 = 26366U;

	t79 = ((x353%x354)+(x355/x356));

	if (t79 != 576U) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x357 = 1362028984085567719LLU;
	int32_t x359 = INT32_MIN;
	int8_t x360 = INT8_MIN;
	volatile uint64_t t80 = 6316187469303926148LLU;

	t80 = ((x357%x358)+(x359/x360));

	if (t80 != 16784669LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int32_t x361 = 53994766;
	static volatile int64_t x363 = INT64_MIN;
	int64_t t81 = -30LL;

	t81 = ((x361%x362)+(x363/x364));

	if (t81 != -523191458105LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x365 = 1518490U;
	static int16_t x366 = INT16_MIN;
	static int64_t x367 = INT64_MAX;
	int16_t x368 = INT16_MIN;
	volatile int64_t t82 = -53923619935304LL;

	t82 = ((x365%x366)+(x367/x368));

	if (t82 != -281474975192165LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x369 = INT32_MAX;
	static volatile uint64_t x370 = 14576LLU;
	uint64_t x371 = 70838196LLU;

	t83 = ((x369%x370)+(x371/x372));

	if (t83 != 2362840LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x373 = 3;
	static volatile int64_t x374 = -35994LL;
	int16_t x375 = INT16_MIN;
	int8_t x376 = INT8_MIN;
	volatile int64_t t84 = -11935008464873151LL;

	t84 = ((x373%x374)+(x375/x376));

	if (t84 != 259LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x377 = 104720136U;
	int16_t x378 = INT16_MIN;
	int16_t x379 = INT16_MIN;
	static volatile int16_t x380 = INT16_MAX;
	volatile uint32_t t85 = 1685039U;

	t85 = ((x377%x378)+(x379/x380));

	if (t85 != 104720135U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x381 = INT8_MAX;
	static uint16_t x382 = 25088U;
	static uint16_t x383 = 25U;
	uint32_t t86 = 105U;

	t86 = ((x381%x382)+(x383/x384));

	if (t86 != 127U) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x385 = 2291175671044LLU;
	volatile uint8_t x386 = 14U;
	static int8_t x387 = INT8_MIN;
	int16_t x388 = INT16_MAX;

	t87 = ((x385%x386)+(x387/x388));

	if (t87 != 8LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x389 = 5555;
	static uint64_t x390 = UINT64_MAX;
	int32_t x391 = INT32_MAX;
	uint16_t x392 = 1U;
	uint64_t t88 = 31244LLU;

	t88 = ((x389%x390)+(x391/x392));

	if (t88 != 2147489202LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x395 = 3U;
	volatile int64_t x396 = INT64_MIN;
	static volatile int64_t t89 = 72124902607601532LL;

	t89 = ((x393%x394)+(x395/x396));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x397 = -1LL;
	int64_t x398 = INT64_MIN;
	int8_t x399 = INT8_MIN;
	uint32_t x400 = UINT32_MAX;
	int64_t t90 = -197207LL;

	t90 = ((x397%x398)+(x399/x400));

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int32_t x401 = INT32_MAX;
	static int8_t x402 = INT8_MIN;
	int16_t x403 = INT16_MIN;
	int64_t x404 = INT64_MIN;
	volatile int64_t t91 = 0LL;

	t91 = ((x401%x402)+(x403/x404));

	if (t91 != 127LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x405 = -2LL;
	static uint32_t x406 = 643921U;
	int32_t x407 = 5175;
	int8_t x408 = INT8_MAX;
	static int64_t t92 = 3089251975371LL;

	t92 = ((x405%x406)+(x407/x408));

	if (t92 != 38LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x411 = INT8_MIN;
	int16_t x412 = INT16_MIN;

	t93 = ((x409%x410)+(x411/x412));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x413 = -1;
	uint8_t x414 = 16U;
	int16_t x416 = -2424;
	volatile uint32_t t94 = UINT32_MAX;

	t94 = ((x413%x414)+(x415/x416));

	if (t94 != UINT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x417 = INT32_MAX;
	volatile int16_t x419 = INT16_MIN;
	uint32_t x420 = 6318U;
	volatile uint32_t t95 = 111U;

	t95 = ((x417%x418)+(x419/x420));

	if (t95 != 766245U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x421 = 1;
	int16_t x422 = INT16_MAX;
	int8_t x423 = INT8_MIN;
	int32_t x424 = -372;
	int32_t t96 = -4;

	t96 = ((x421%x422)+(x423/x424));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x425 = 919;
	volatile uint64_t x426 = 1577494LLU;
	uint8_t x427 = 3U;
	static uint64_t x428 = UINT64_MAX;
	volatile uint64_t t97 = 1061188965012LLU;

	t97 = ((x425%x426)+(x427/x428));

	if (t97 != 919LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x430 = INT32_MAX;
	int16_t x431 = INT16_MIN;
	int32_t t98 = 0;

	t98 = ((x429%x430)+(x431/x432));

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x433 = -101;
	static volatile int8_t x434 = 1;
	static uint64_t t99 = 23401LLU;

	t99 = ((x433%x434)+(x435/x436));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

