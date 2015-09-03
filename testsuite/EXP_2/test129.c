#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x10 = INT16_MIN;
int64_t x14 = -1LL;
volatile int64_t x18 = 8198262149LL;
int8_t x22 = INT8_MIN;
static uint8_t x23 = UINT8_MAX;
uint32_t x24 = UINT32_MAX;
static uint8_t x27 = 1U;
volatile uint64_t x30 = UINT64_MAX;
volatile uint8_t x32 = 2U;
volatile uint32_t x42 = 2795861U;
int16_t x50 = -6966;
int64_t x54 = -1LL;
volatile uint16_t x67 = UINT16_MAX;
int8_t x71 = INT8_MAX;
int8_t x73 = -1;
volatile int32_t t16 = 0;
uint64_t x78 = 2918LLU;
static int64_t x89 = -1973172870LL;
int8_t x90 = INT8_MAX;
static int64_t x91 = -1LL;
int32_t x94 = 32;
uint32_t x95 = 5U;
volatile int32_t t20 = 1000709056;
static volatile int32_t t21 = 220;
static int64_t t22 = INT64_MIN;
int64_t x114 = INT64_MIN;
int32_t t24 = INT32_MIN;
int16_t x125 = INT16_MIN;
int16_t x128 = -1;
int32_t x136 = -1;
int16_t x137 = INT16_MAX;
volatile int32_t t31 = -43;
volatile int32_t t34 = INT32_MAX;
int16_t x175 = 2594;
volatile int64_t t36 = -390650788200LL;
volatile int32_t t37 = -23926800;
int32_t x181 = -1;
int32_t t38 = -18597834;
uint16_t x208 = 2U;
int8_t x209 = INT8_MIN;
int16_t x213 = 7756;
static int16_t x223 = -99;
volatile int64_t x229 = -667474614LL;
uint32_t x230 = UINT32_MAX;
volatile uint16_t x231 = 13U;
int8_t x233 = INT8_MIN;
int32_t t51 = 23427;
static int64_t x245 = -2024LL;
uint16_t x249 = UINT16_MAX;
volatile int32_t x258 = INT32_MAX;
int32_t t54 = 11;
static int64_t x268 = INT64_MAX;
volatile uint16_t x271 = 515U;
volatile int64_t t57 = 50LL;
uint32_t x275 = 298377U;
int16_t x276 = -1;
int8_t x277 = INT8_MIN;
uint16_t x278 = 19648U;
int8_t x284 = INT8_MAX;
int16_t x296 = INT16_MIN;
volatile int32_t t63 = -53625;
int16_t x298 = INT16_MIN;
volatile int8_t x308 = 2;
uint64_t x310 = UINT64_MAX;
uint8_t x341 = 76U;
static volatile int32_t t70 = -3;
int64_t x345 = INT64_MAX;
volatile int64_t x346 = INT64_MAX;
int8_t x351 = -1;
volatile int8_t x355 = INT8_MAX;
volatile int16_t x361 = 6;
static uint64_t x362 = 33334LLU;
int64_t x364 = INT64_MIN;
int16_t x367 = INT16_MAX;
int8_t x369 = -10;
int64_t x370 = 163785766466LL;
int64_t t77 = INT64_MAX;
int64_t x376 = INT64_MIN;
static int64_t t78 = 3072741736LL;
int16_t x386 = -1;
int32_t x387 = -1;
static uint64_t x388 = 24766447060203LLU;
uint8_t x392 = UINT8_MAX;
int16_t x395 = -1;
int8_t x402 = 0;
int64_t x403 = INT64_MIN;
int16_t x407 = -1;
volatile int32_t t86 = 69;
uint16_t x419 = UINT16_MAX;
int8_t x431 = INT8_MAX;
static uint8_t x439 = 48U;
int16_t x441 = -1;
volatile int32_t t94 = 2;
static volatile int16_t x454 = INT16_MAX;
static int16_t x455 = INT16_MAX;
volatile int16_t x469 = INT16_MIN;
volatile int32_t t98 = -52;
volatile int32_t t99 = 53;


void f0(void) {
	uint8_t x9 = 43U;
	static int8_t x11 = 6;
	static uint64_t x12 = 25044689017LLU;
	uint64_t t0 = 5LLU;

	t0 = ((x9<=(x10+x11))|x12);

	if (t0 != 25044689017LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x13 = INT32_MIN;
	int64_t x15 = 268979395129226LL;
	int64_t x16 = -122524322225839695LL;
	volatile int64_t t1 = 2781LL;

	t1 = ((x13<=(x14+x15))|x16);

	if (t1 != -122524322225839695LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x17 = -176;
	int8_t x19 = INT8_MIN;
	uint64_t x20 = UINT64_MAX;
	uint64_t t2 = UINT64_MAX;

	t2 = ((x17<=(x18+x19))|x20);

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x21 = INT8_MIN;
	volatile uint32_t t3 = UINT32_MAX;

	t3 = ((x21<=(x22+x23))|x24);

	if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int8_t x25 = INT8_MAX;
	volatile uint8_t x26 = 2U;
	uint64_t x28 = 0LLU;
	static volatile uint64_t t4 = 10742LLU;

	t4 = ((x25<=(x26+x27))|x28);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x29 = UINT16_MAX;
	static int16_t x31 = -1;
	int32_t t5 = 240;

	t5 = ((x29<=(x30+x31))|x32);

	if (t5 != 3) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x33 = 998062;
	int16_t x34 = INT16_MIN;
	static int8_t x35 = -1;
	static int8_t x36 = -1;
	volatile int32_t t6 = 512708136;

	t6 = ((x33<=(x34+x35))|x36);

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x37 = 2692228493825603290LL;
	volatile int16_t x38 = INT16_MIN;
	uint64_t x39 = UINT64_MAX;
	int32_t x40 = INT32_MIN;
	volatile int32_t t7 = -50;

	t7 = ((x37<=(x38+x39))|x40);

	if (t7 != -2147483647) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x41 = -3;
	static int8_t x43 = INT8_MAX;
	static int64_t x44 = 5LL;
	int64_t t8 = -8075LL;

	t8 = ((x41<=(x42+x43))|x44);

	if (t8 != 5LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x45 = 128044LLU;
	int8_t x46 = INT8_MIN;
	int32_t x47 = INT32_MAX;
	int32_t x48 = INT32_MAX;
	volatile int32_t t9 = INT32_MAX;

	t9 = ((x45<=(x46+x47))|x48);

	if (t9 != INT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x49 = -1;
	static int8_t x51 = INT8_MAX;
	int64_t x52 = INT64_MIN;
	int64_t t10 = INT64_MIN;

	t10 = ((x49<=(x50+x51))|x52);

	if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x53 = UINT32_MAX;
	uint32_t x55 = 329911U;
	uint8_t x56 = 44U;
	volatile int32_t t11 = -2844;

	t11 = ((x53<=(x54+x55))|x56);

	if (t11 != 44) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint8_t x57 = 11U;
	int32_t x58 = -1;
	volatile int16_t x59 = 81;
	int32_t x60 = -1034670;
	volatile int32_t t12 = -24235;

	t12 = ((x57<=(x58+x59))|x60);

	if (t12 != -1034669) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x61 = 10886U;
	int16_t x62 = INT16_MIN;
	volatile int16_t x63 = INT16_MAX;
	static uint32_t x64 = UINT32_MAX;
	static uint32_t t13 = UINT32_MAX;

	t13 = ((x61<=(x62+x63))|x64);

	if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x65 = 124437U;
	volatile uint64_t x66 = 1876413999981LLU;
	volatile int8_t x68 = INT8_MAX;
	static int32_t t14 = 117143;

	t14 = ((x65<=(x66+x67))|x68);

	if (t14 != 127) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x69 = 2238U;
	uint16_t x70 = 179U;
	int64_t x72 = -1LL;
	volatile int64_t t15 = -7305849556312299LL;

	t15 = ((x69<=(x70+x71))|x72);

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int32_t x74 = 5;
	int16_t x75 = -1;
	int16_t x76 = -1;

	t16 = ((x73<=(x74+x75))|x76);

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int8_t x77 = INT8_MIN;
	static uint8_t x79 = 99U;
	static int8_t x80 = -29;
	int32_t t17 = 1626;

	t17 = ((x77<=(x78+x79))|x80);

	if (t17 != -29) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int64_t x85 = INT64_MAX;
	static volatile int64_t x86 = INT64_MIN;
	uint16_t x87 = 2U;
	uint64_t x88 = 1607294391798411LLU;
	volatile uint64_t t18 = 16080895196LLU;

	t18 = ((x85<=(x86+x87))|x88);

	if (t18 != 1607294391798411LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x92 = -1;
	static int32_t t19 = -47;

	t19 = ((x89<=(x90+x91))|x92);

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x93 = 32958859999388LLU;
	static int8_t x96 = -1;

	t20 = ((x93<=(x94+x95))|x96);

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x101 = 113653138LLU;
	static int64_t x102 = -1LL;
	uint16_t x103 = UINT16_MAX;
	volatile uint8_t x104 = 1U;

	t21 = ((x101<=(x102+x103))|x104);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x105 = INT64_MAX;
	volatile uint8_t x106 = 1U;
	int16_t x107 = -1;
	int64_t x108 = INT64_MIN;

	t22 = ((x105<=(x106+x107))|x108);

	if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x109 = -1;
	static uint64_t x110 = UINT64_MAX;
	static int8_t x111 = -1;
	uint64_t x112 = UINT64_MAX;
	volatile uint64_t t23 = UINT64_MAX;

	t23 = ((x109<=(x110+x111))|x112);

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x113 = -1LL;
	uint8_t x115 = 0U;
	int32_t x116 = INT32_MIN;

	t24 = ((x113<=(x114+x115))|x116);

	if (t24 != INT32_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x121 = UINT64_MAX;
	int32_t x122 = INT32_MIN;
	int16_t x123 = INT16_MAX;
	uint64_t x124 = 169020643994094234LLU;
	volatile uint64_t t25 = 8864LLU;

	t25 = ((x121<=(x122+x123))|x124);

	if (t25 != 169020643994094234LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x126 = INT16_MIN;
	int16_t x127 = -105;
	volatile int32_t t26 = 151;

	t26 = ((x125<=(x126+x127))|x128);

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x129 = 21526U;
	static int8_t x130 = INT8_MIN;
	uint32_t x131 = 5927251U;
	int32_t x132 = INT32_MAX;
	volatile int32_t t27 = INT32_MAX;

	t27 = ((x129<=(x130+x131))|x132);

	if (t27 != INT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x133 = -1LL;
	int8_t x134 = 1;
	static int64_t x135 = 7073362459953LL;
	int32_t t28 = -63770;

	t28 = ((x133<=(x134+x135))|x136);

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x138 = 11;
	static uint64_t x139 = 509260LLU;
	int64_t x140 = -391LL;
	volatile int64_t t29 = -287168632LL;

	t29 = ((x137<=(x138+x139))|x140);

	if (t29 != -391LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x141 = 49U;
	int64_t x142 = -24616785678627180LL;
	static volatile int64_t x143 = 11074012LL;
	int64_t x144 = 8280781998LL;
	int64_t t30 = -143543175LL;

	t30 = ((x141<=(x142+x143))|x144);

	if (t30 != 8280781998LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x145 = -144513765171606003LL;
	int64_t x146 = -1LL;
	static uint32_t x147 = UINT32_MAX;
	volatile int16_t x148 = INT16_MIN;

	t31 = ((x145<=(x146+x147))|x148);

	if (t31 != -32767) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x157 = 1U;
	uint8_t x158 = 60U;
	volatile uint32_t x159 = UINT32_MAX;
	int8_t x160 = INT8_MIN;
	int32_t t32 = 10;

	t32 = ((x157<=(x158+x159))|x160);

	if (t32 != -127) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int16_t x161 = INT16_MIN;
	volatile int32_t x162 = 121271513;
	int8_t x163 = -1;
	uint32_t x164 = 103063U;
	static uint32_t t33 = 209994U;

	t33 = ((x161<=(x162+x163))|x164);

	if (t33 != 103063U) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x165 = INT64_MAX;
	int8_t x166 = INT8_MIN;
	static uint16_t x167 = 17262U;
	int32_t x168 = INT32_MAX;

	t34 = ((x165<=(x166+x167))|x168);

	if (t34 != INT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x169 = UINT32_MAX;
	static int32_t x170 = -1;
	int16_t x171 = -429;
	volatile uint16_t x172 = 4827U;
	volatile int32_t t35 = -1033771;

	t35 = ((x169<=(x170+x171))|x172);

	if (t35 != 4827) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x173 = 197U;
	int16_t x174 = -1;
	int64_t x176 = INT64_MIN;

	t36 = ((x173<=(x174+x175))|x176);

	if (t36 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x177 = INT16_MAX;
	static uint16_t x178 = 0U;
	static volatile int64_t x179 = -29791978212281LL;
	uint8_t x180 = 2U;

	t37 = ((x177<=(x178+x179))|x180);

	if (t37 != 2) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x182 = -54;
	int64_t x183 = -5LL;
	static uint16_t x184 = 1U;

	t38 = ((x181<=(x182+x183))|x184);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x185 = INT8_MIN;
	int32_t x186 = INT32_MAX;
	int8_t x187 = INT8_MIN;
	int8_t x188 = INT8_MIN;
	volatile int32_t t39 = -689653;

	t39 = ((x185<=(x186+x187))|x188);

	if (t39 != -127) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x189 = INT16_MIN;
	int8_t x190 = -1;
	int16_t x191 = INT16_MAX;
	volatile int8_t x192 = INT8_MAX;
	volatile int32_t t40 = -18;

	t40 = ((x189<=(x190+x191))|x192);

	if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x193 = UINT32_MAX;
	uint32_t x194 = UINT32_MAX;
	volatile uint64_t x195 = UINT64_MAX;
	volatile uint64_t x196 = 155644LLU;
	volatile uint64_t t41 = 16349LLU;

	t41 = ((x193<=(x194+x195))|x196);

	if (t41 != 155644LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x197 = -1;
	uint64_t x198 = 58LLU;
	int8_t x199 = -1;
	int32_t x200 = -1;
	static int32_t t42 = 1609;

	t42 = ((x197<=(x198+x199))|x200);

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x201 = -1;
	static volatile uint32_t x202 = UINT32_MAX;
	int32_t x203 = 10988;
	int16_t x204 = -1;
	int32_t t43 = 111828;

	t43 = ((x201<=(x202+x203))|x204);

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x205 = INT64_MIN;
	int16_t x206 = INT16_MIN;
	volatile uint8_t x207 = UINT8_MAX;
	int32_t t44 = 73599;

	t44 = ((x205<=(x206+x207))|x208);

	if (t44 != 3) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x210 = 1U;
	int64_t x211 = -1LL;
	int32_t x212 = INT32_MIN;
	volatile int32_t t45 = -110466;

	t45 = ((x209<=(x210+x211))|x212);

	if (t45 != -2147483647) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x214 = INT16_MIN;
	int64_t x215 = -1LL;
	volatile int32_t x216 = INT32_MAX;
	int32_t t46 = INT32_MAX;

	t46 = ((x213<=(x214+x215))|x216);

	if (t46 != INT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x221 = 0;
	volatile int32_t x222 = -1;
	int32_t x224 = INT32_MIN;
	int32_t t47 = INT32_MIN;

	t47 = ((x221<=(x222+x223))|x224);

	if (t47 != INT32_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x225 = INT8_MIN;
	static uint8_t x226 = UINT8_MAX;
	static uint8_t x227 = 3U;
	int64_t x228 = INT64_MAX;
	volatile int64_t t48 = INT64_MAX;

	t48 = ((x225<=(x226+x227))|x228);

	if (t48 != INT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x232 = 4U;
	uint32_t t49 = 36588U;

	t49 = ((x229<=(x230+x231))|x232);

	if (t49 != 5U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x234 = 41408U;
	volatile int32_t x235 = INT32_MIN;
	int8_t x236 = 24;
	int32_t t50 = -502981221;

	t50 = ((x233<=(x234+x235))|x236);

	if (t50 != 24) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x237 = -30;
	uint8_t x238 = 4U;
	int64_t x239 = INT64_MIN;
	int8_t x240 = -1;

	t51 = ((x237<=(x238+x239))|x240);

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x246 = INT32_MAX;
	int16_t x247 = INT16_MIN;
	int8_t x248 = INT8_MAX;
	volatile int32_t t52 = -7591;

	t52 = ((x245<=(x246+x247))|x248);

	if (t52 != 127) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x250 = 15U;
	static uint8_t x251 = 0U;
	static volatile int16_t x252 = 2684;
	volatile int32_t t53 = 5291;

	t53 = ((x249<=(x250+x251))|x252);

	if (t53 != 2684) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x257 = 69666842528249LLU;
	int8_t x259 = -1;
	volatile uint8_t x260 = 8U;

	t54 = ((x257<=(x258+x259))|x260);

	if (t54 != 8) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x261 = 45272U;
	int64_t x262 = -10LL;
	static int32_t x263 = INT32_MIN;
	volatile int32_t x264 = -1;
	static volatile int32_t t55 = 195;

	t55 = ((x261<=(x262+x263))|x264);

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x265 = UINT32_MAX;
	int64_t x266 = INT64_MAX;
	int16_t x267 = -147;
	volatile int64_t t56 = INT64_MAX;

	t56 = ((x265<=(x266+x267))|x268);

	if (t56 != INT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x269 = -1;
	int8_t x270 = INT8_MIN;
	volatile int64_t x272 = -1LL;

	t57 = ((x269<=(x270+x271))|x272);

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x273 = 5U;
	static uint64_t x274 = UINT64_MAX;
	volatile int32_t t58 = 1;

	t58 = ((x273<=(x274+x275))|x276);

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int64_t x279 = INT64_MIN;
	static int32_t x280 = -1;
	volatile int32_t t59 = -23;

	t59 = ((x277<=(x278+x279))|x280);

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x281 = 408U;
	static int16_t x282 = -1;
	static uint16_t x283 = 621U;
	volatile int32_t t60 = -3534;

	t60 = ((x281<=(x282+x283))|x284);

	if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x285 = INT8_MIN;
	int8_t x286 = INT8_MAX;
	int8_t x287 = -1;
	uint16_t x288 = 3480U;
	int32_t t61 = -3466431;

	t61 = ((x285<=(x286+x287))|x288);

	if (t61 != 3481) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x289 = -1;
	int16_t x290 = 0;
	int8_t x291 = INT8_MIN;
	int64_t x292 = INT64_MIN;
	int64_t t62 = INT64_MIN;

	t62 = ((x289<=(x290+x291))|x292);

	if (t62 != INT64_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x293 = 246U;
	static volatile int64_t x294 = 24277451921LL;
	int16_t x295 = -1;

	t63 = ((x293<=(x294+x295))|x296);

	if (t63 != -32767) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x297 = 4U;
	uint8_t x299 = 2U;
	static volatile uint16_t x300 = UINT16_MAX;
	int32_t t64 = 7593;

	t64 = ((x297<=(x298+x299))|x300);

	if (t64 != 65535) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x305 = -461;
	uint16_t x306 = 87U;
	volatile int32_t x307 = INT32_MIN;
	static volatile int32_t t65 = -165;

	t65 = ((x305<=(x306+x307))|x308);

	if (t65 != 2) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int16_t x309 = 8;
	static int32_t x311 = -1;
	int16_t x312 = INT16_MIN;
	static volatile int32_t t66 = -264;

	t66 = ((x309<=(x310+x311))|x312);

	if (t66 != -32767) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x317 = 21U;
	volatile int8_t x318 = -8;
	uint16_t x319 = 7194U;
	static volatile int8_t x320 = -13;
	int32_t t67 = 162;

	t67 = ((x317<=(x318+x319))|x320);

	if (t67 != -13) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x325 = -1LL;
	static uint64_t x326 = 17025LLU;
	uint8_t x327 = 17U;
	int8_t x328 = -1;
	volatile int32_t t68 = -280;

	t68 = ((x325<=(x326+x327))|x328);

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x329 = INT64_MIN;
	uint8_t x330 = UINT8_MAX;
	static uint8_t x331 = 1U;
	volatile int8_t x332 = INT8_MAX;
	volatile int32_t t69 = -20220;

	t69 = ((x329<=(x330+x331))|x332);

	if (t69 != 127) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x342 = INT32_MIN;
	uint64_t x343 = UINT64_MAX;
	volatile uint8_t x344 = 5U;

	t70 = ((x341<=(x342+x343))|x344);

	if (t70 != 5) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x347 = -21;
	uint64_t x348 = 24LLU;
	static volatile uint64_t t71 = 113425234342LLU;

	t71 = ((x345<=(x346+x347))|x348);

	if (t71 != 24LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x349 = -1;
	uint32_t x350 = UINT32_MAX;
	uint64_t x352 = UINT64_MAX;
	uint64_t t72 = UINT64_MAX;

	t72 = ((x349<=(x350+x351))|x352);

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x353 = INT64_MIN;
	uint64_t x354 = 512595308404861LLU;
	uint8_t x356 = UINT8_MAX;
	volatile int32_t t73 = 975816803;

	t73 = ((x353<=(x354+x355))|x356);

	if (t73 != 255) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x357 = INT32_MIN;
	static int8_t x358 = 1;
	int64_t x359 = 0LL;
	int16_t x360 = INT16_MIN;
	static volatile int32_t t74 = 742474;

	t74 = ((x357<=(x358+x359))|x360);

	if (t74 != -32767) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x363 = INT64_MIN;
	int64_t t75 = 8335LL;

	t75 = ((x361<=(x362+x363))|x364);

	if (t75 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x365 = INT64_MIN;
	uint8_t x366 = 1U;
	static int8_t x368 = 9;
	int32_t t76 = -3076;

	t76 = ((x365<=(x366+x367))|x368);

	if (t76 != 9) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x371 = INT16_MIN;
	int64_t x372 = INT64_MAX;

	t77 = ((x369<=(x370+x371))|x372);

	if (t77 != INT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x373 = -1LL;
	volatile uint8_t x374 = 0U;
	int8_t x375 = 0;

	t78 = ((x373<=(x374+x375))|x376);

	if (t78 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x385 = INT16_MIN;
	volatile uint64_t t79 = 1532829095LLU;

	t79 = ((x385<=(x386+x387))|x388);

	if (t79 != 24766447060203LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x389 = -22;
	uint16_t x390 = 14U;
	static volatile int8_t x391 = INT8_MAX;
	static volatile int32_t t80 = 81392;

	t80 = ((x389<=(x390+x391))|x392);

	if (t80 != 255) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x393 = -1LL;
	int16_t x394 = 50;
	int16_t x396 = -995;
	volatile int32_t t81 = -13973331;

	t81 = ((x393<=(x394+x395))|x396);

	if (t81 != -995) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x397 = INT32_MAX;
	volatile int8_t x398 = -1;
	int16_t x399 = INT16_MIN;
	volatile int8_t x400 = INT8_MIN;
	static int32_t t82 = -935323856;

	t82 = ((x397<=(x398+x399))|x400);

	if (t82 != -128) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint8_t x401 = 2U;
	int16_t x404 = -1;
	int32_t t83 = -18;

	t83 = ((x401<=(x402+x403))|x404);

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x405 = 4334;
	uint64_t x406 = 148040408LLU;
	int8_t x408 = INT8_MAX;
	volatile int32_t t84 = -61540;

	t84 = ((x405<=(x406+x407))|x408);

	if (t84 != 127) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x409 = 5;
	int32_t x410 = -159636;
	volatile int64_t x411 = -3551LL;
	volatile int32_t x412 = 498935;
	static volatile int32_t t85 = 15;

	t85 = ((x409<=(x410+x411))|x412);

	if (t85 != 498935) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x413 = INT16_MAX;
	static uint64_t x414 = 1899560053741LLU;
	int64_t x415 = INT64_MAX;
	volatile uint8_t x416 = 6U;

	t86 = ((x413<=(x414+x415))|x416);

	if (t86 != 7) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x417 = 7321U;
	uint16_t x418 = 94U;
	int8_t x420 = -1;
	volatile int32_t t87 = -5155120;

	t87 = ((x417<=(x418+x419))|x420);

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x425 = INT8_MAX;
	int64_t x426 = -1LL;
	int32_t x427 = INT32_MIN;
	uint64_t x428 = UINT64_MAX;
	static volatile uint64_t t88 = UINT64_MAX;

	t88 = ((x425<=(x426+x427))|x428);

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x429 = -1;
	int32_t x430 = INT32_MIN;
	uint64_t x432 = UINT64_MAX;
	uint64_t t89 = UINT64_MAX;

	t89 = ((x429<=(x430+x431))|x432);

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x433 = INT64_MAX;
	int64_t x434 = -733308643130199863LL;
	int8_t x435 = INT8_MIN;
	uint16_t x436 = UINT16_MAX;
	volatile int32_t t90 = 879142719;

	t90 = ((x433<=(x434+x435))|x436);

	if (t90 != 65535) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x437 = INT32_MIN;
	volatile int8_t x438 = INT8_MIN;
	int64_t x440 = -1LL;
	int64_t t91 = 73LL;

	t91 = ((x437<=(x438+x439))|x440);

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x442 = 8351;
	static volatile int64_t x443 = INT64_MIN;
	volatile int8_t x444 = INT8_MIN;
	volatile int32_t t92 = -215159270;

	t92 = ((x441<=(x442+x443))|x444);

	if (t92 != -128) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x445 = INT16_MIN;
	uint32_t x446 = 257800U;
	int32_t x447 = -4464213;
	int32_t x448 = INT32_MAX;
	static volatile int32_t t93 = INT32_MAX;

	t93 = ((x445<=(x446+x447))|x448);

	if (t93 != INT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x449 = -1LL;
	uint16_t x450 = UINT16_MAX;
	int8_t x451 = INT8_MIN;
	uint16_t x452 = 806U;

	t94 = ((x449<=(x450+x451))|x452);

	if (t94 != 807) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x453 = INT64_MIN;
	int8_t x456 = 13;
	int32_t t95 = -1;

	t95 = ((x453<=(x454+x455))|x456);

	if (t95 != 13) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x457 = INT64_MIN;
	int64_t x458 = -1LL;
	int16_t x459 = 110;
	static uint64_t x460 = 6777LLU;
	volatile uint64_t t96 = 2038472897528125LLU;

	t96 = ((x457<=(x458+x459))|x460);

	if (t96 != 6777LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x465 = 1686713356794LLU;
	int32_t x466 = 30800;
	int8_t x467 = INT8_MIN;
	volatile int64_t x468 = INT64_MIN;
	volatile int64_t t97 = INT64_MIN;

	t97 = ((x465<=(x466+x467))|x468);

	if (t97 != INT64_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x470 = 6U;
	int8_t x471 = -1;
	int16_t x472 = INT16_MIN;

	t98 = ((x469<=(x470+x471))|x472);

	if (t98 != -32767) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x473 = 465936097918LLU;
	int16_t x474 = -1;
	int16_t x475 = INT16_MIN;
	int32_t x476 = 602;

	t99 = ((x473<=(x474+x475))|x476);

	if (t99 != 603) { NG(); } else { ; }
	
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

