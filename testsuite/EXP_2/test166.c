#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t t0 = -101796;
uint32_t x9 = 22U;
volatile int16_t x16 = -1;
int32_t t3 = 1;
uint32_t x29 = 105225U;
static int32_t t7 = -2302750;
int16_t x50 = INT16_MIN;
static uint32_t x54 = UINT32_MAX;
volatile int32_t t10 = -46836;
volatile uint64_t x67 = UINT64_MAX;
volatile int32_t t15 = 49;
uint32_t x88 = 5U;
uint16_t x90 = 18U;
volatile int32_t t19 = -287593883;
int8_t x98 = -1;
int32_t t20 = 6013;
volatile int16_t x102 = INT16_MIN;
int8_t x108 = INT8_MAX;
static volatile int32_t t23 = -951;
static int16_t x114 = -1;
int32_t t27 = 230324122;
static int16_t x137 = 0;
int32_t t29 = -341452;
static int8_t x144 = INT8_MAX;
int32_t t32 = 77026;
int8_t x161 = INT8_MIN;
static int64_t x176 = -100563275286631LL;
int32_t t37 = -1;
int32_t x177 = INT32_MIN;
int8_t x180 = 1;
volatile int8_t x184 = INT8_MIN;
int64_t x189 = INT64_MAX;
uint64_t x190 = 52LLU;
int8_t x203 = INT8_MAX;
int8_t x205 = -1;
uint16_t x220 = 6568U;
uint32_t x233 = UINT32_MAX;
int32_t x237 = 16213599;
int32_t x238 = INT32_MAX;
static int8_t x241 = INT8_MAX;
int8_t x251 = INT8_MIN;
volatile uint16_t x254 = 0U;
int16_t x257 = 11164;
static int8_t x258 = -8;
uint64_t x263 = UINT64_MAX;
int16_t x265 = -7;
volatile uint64_t x272 = 350677584136LLU;
uint8_t x275 = UINT8_MAX;
static volatile int32_t x276 = INT32_MIN;
int8_t x284 = -1;
int32_t x285 = INT32_MIN;
uint64_t x293 = UINT64_MAX;
volatile int32_t t63 = -672946;
static int32_t t64 = -45;
int16_t x303 = -1;
uint64_t x309 = 46377527067905383LLU;
int32_t x316 = INT32_MIN;
volatile uint16_t x325 = 438U;
volatile int32_t t70 = 123549336;
static int32_t t71 = -106780341;
int64_t x338 = -1LL;
uint8_t x339 = 2U;
static volatile int8_t x348 = INT8_MIN;
int16_t x351 = -1;
uint64_t x354 = 2936218301LLU;
volatile int32_t x360 = INT32_MIN;
static int8_t x363 = 56;
int32_t t79 = 1541;
volatile uint16_t x377 = UINT16_MAX;
int8_t x380 = -21;
static int32_t x381 = INT32_MIN;
static int32_t x383 = -3584812;
static uint16_t x386 = 556U;
static uint32_t x401 = 1763843U;
uint64_t x404 = 5384534LLU;
int32_t x405 = -1;
int64_t x411 = INT64_MAX;
int32_t x418 = INT32_MAX;
int32_t x434 = -702000;
int32_t x437 = -167;
static int8_t x444 = -1;
volatile int16_t x447 = 1;
volatile int32_t x451 = -1;
int32_t t98 = -64262;
int64_t x455 = -829397LL;


void f0(void) {
	int8_t x1 = INT8_MIN;
	static int8_t x2 = INT8_MIN;
	volatile int16_t x3 = 14;
	int32_t x4 = -19;

	t0 = ((x1^(x2+x3))<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x10 = 6581U;
	int64_t x11 = 603334748333087639LL;
	uint64_t x12 = UINT64_MAX;
	static int32_t t1 = -245390;

	t1 = ((x9^(x10+x11))<=x12);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = INT64_MIN;
	uint16_t x14 = 157U;
	int16_t x15 = INT16_MIN;
	static volatile int32_t t2 = -688;

	t2 = ((x13^(x14+x15))<=x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x25 = INT64_MAX;
	uint64_t x26 = UINT64_MAX;
	uint32_t x27 = 260983087U;
	static int64_t x28 = INT64_MAX;

	t3 = ((x25^(x26+x27))<=x28);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x30 = 461790296U;
	int64_t x31 = -402953878842975LL;
	int32_t x32 = INT32_MIN;
	int32_t t4 = 70;

	t4 = ((x29^(x30+x31))<=x32);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x33 = 13699LL;
	uint64_t x34 = 249460251477LLU;
	int64_t x35 = -1LL;
	static volatile uint32_t x36 = 453U;
	static int32_t t5 = -91324;

	t5 = ((x33^(x34+x35))<=x36);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x37 = 47310077LL;
	int16_t x38 = -6912;
	volatile uint32_t x39 = UINT32_MAX;
	int16_t x40 = INT16_MIN;
	static int32_t t6 = -861512;

	t6 = ((x37^(x38+x39))<=x40);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x41 = -1LL;
	int16_t x42 = -1;
	volatile int8_t x43 = INT8_MIN;
	int64_t x44 = -84219470251LL;

	t7 = ((x41^(x42+x43))<=x44);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x45 = UINT64_MAX;
	int8_t x46 = -36;
	int32_t x47 = -26543904;
	uint32_t x48 = 1148980U;
	static volatile int32_t t8 = 26393933;

	t8 = ((x45^(x46+x47))<=x48);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x49 = UINT32_MAX;
	int16_t x51 = INT16_MAX;
	uint16_t x52 = 0U;
	volatile int32_t t9 = 31;

	t9 = ((x49^(x50+x51))<=x52);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x53 = INT8_MAX;
	int32_t x55 = -1;
	uint64_t x56 = UINT64_MAX;

	t10 = ((x53^(x54+x55))<=x56);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x57 = 29U;
	uint16_t x58 = 27959U;
	uint64_t x59 = 30845658797134LLU;
	volatile uint32_t x60 = UINT32_MAX;
	int32_t t11 = 695924;

	t11 = ((x57^(x58+x59))<=x60);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x61 = INT32_MIN;
	volatile int32_t x62 = INT32_MIN;
	static uint16_t x63 = UINT16_MAX;
	int64_t x64 = INT64_MAX;
	volatile int32_t t12 = 1609679;

	t12 = ((x61^(x62+x63))<=x64);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x65 = INT32_MIN;
	uint64_t x66 = UINT64_MAX;
	int16_t x68 = INT16_MIN;
	volatile int32_t t13 = 58229415;

	t13 = ((x65^(x66+x67))<=x68);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x69 = UINT64_MAX;
	int64_t x70 = INT64_MIN;
	volatile int16_t x71 = 3039;
	uint64_t x72 = 0LLU;
	static int32_t t14 = 344627;

	t14 = ((x69^(x70+x71))<=x72);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x73 = 274U;
	int16_t x74 = INT16_MAX;
	int64_t x75 = 10657LL;
	uint8_t x76 = 26U;

	t15 = ((x73^(x74+x75))<=x76);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x77 = 4;
	volatile int8_t x78 = 3;
	int64_t x79 = 999432652LL;
	int8_t x80 = INT8_MIN;
	volatile int32_t t16 = 14765167;

	t16 = ((x77^(x78+x79))<=x80);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x85 = UINT64_MAX;
	int8_t x86 = -13;
	int64_t x87 = 5667LL;
	int32_t t17 = 63581;

	t17 = ((x85^(x86+x87))<=x88);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x89 = INT64_MIN;
	volatile int32_t x91 = -1;
	int8_t x92 = -3;
	static int32_t t18 = -3452;

	t18 = ((x89^(x90+x91))<=x92);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x93 = INT16_MIN;
	static int32_t x94 = -1;
	volatile uint32_t x95 = UINT32_MAX;
	uint16_t x96 = 2768U;

	t19 = ((x93^(x94+x95))<=x96);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x97 = 242157426LLU;
	int16_t x99 = -1;
	int32_t x100 = INT32_MIN;

	t20 = ((x97^(x98+x99))<=x100);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x101 = INT64_MIN;
	volatile int64_t x103 = INT64_MAX;
	uint16_t x104 = 55U;
	int32_t t21 = 188;

	t21 = ((x101^(x102+x103))<=x104);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int32_t x105 = 481;
	volatile int64_t x106 = 108545453LL;
	static uint64_t x107 = UINT64_MAX;
	static volatile int32_t t22 = 0;

	t22 = ((x105^(x106+x107))<=x108);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x109 = -365;
	static uint64_t x110 = 0LLU;
	static int8_t x111 = INT8_MIN;
	uint16_t x112 = 49U;

	t23 = ((x109^(x110+x111))<=x112);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int32_t x113 = 345;
	volatile int32_t x115 = -1;
	int16_t x116 = 341;
	volatile int32_t t24 = -131128172;

	t24 = ((x113^(x114+x115))<=x116);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x121 = INT8_MIN;
	int32_t x122 = -1;
	static uint8_t x123 = 9U;
	int8_t x124 = INT8_MAX;
	volatile int32_t t25 = 9;

	t25 = ((x121^(x122+x123))<=x124);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x125 = 31372107LL;
	uint64_t x126 = 2842816395369LLU;
	int64_t x127 = 1116291LL;
	volatile int8_t x128 = INT8_MIN;
	static int32_t t26 = 53709;

	t26 = ((x125^(x126+x127))<=x128);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x129 = -124939132641870381LL;
	static int32_t x130 = INT32_MIN;
	int16_t x131 = INT16_MAX;
	int64_t x132 = -116081272454043144LL;

	t27 = ((x129^(x130+x131))<=x132);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x133 = UINT16_MAX;
	int16_t x134 = INT16_MIN;
	static volatile uint16_t x135 = UINT16_MAX;
	uint8_t x136 = UINT8_MAX;
	volatile int32_t t28 = -3;

	t28 = ((x133^(x134+x135))<=x136);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x138 = -1LL;
	uint32_t x139 = UINT32_MAX;
	uint64_t x140 = 44739LLU;

	t29 = ((x137^(x138+x139))<=x140);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x141 = -1;
	static int64_t x142 = -34384519LL;
	int16_t x143 = -164;
	static volatile int32_t t30 = -118;

	t30 = ((x141^(x142+x143))<=x144);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x145 = 1;
	static int8_t x146 = INT8_MIN;
	int16_t x147 = -112;
	int32_t x148 = -1;
	volatile int32_t t31 = 0;

	t31 = ((x145^(x146+x147))<=x148);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x149 = UINT64_MAX;
	uint32_t x150 = 320861U;
	int32_t x151 = 27;
	int32_t x152 = INT32_MAX;

	t32 = ((x149^(x150+x151))<=x152);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x153 = INT16_MIN;
	volatile int32_t x154 = -1;
	int64_t x155 = -213281659330651LL;
	static uint16_t x156 = 6U;
	int32_t t33 = 1;

	t33 = ((x153^(x154+x155))<=x156);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x157 = INT16_MIN;
	uint64_t x158 = UINT64_MAX;
	uint32_t x159 = 1893U;
	int64_t x160 = INT64_MIN;
	int32_t t34 = 0;

	t34 = ((x157^(x158+x159))<=x160);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x162 = 610673420422798125LL;
	static uint32_t x163 = 7705U;
	int64_t x164 = INT64_MAX;
	volatile int32_t t35 = 0;

	t35 = ((x161^(x162+x163))<=x164);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x169 = -1;
	int16_t x170 = 5635;
	int32_t x171 = -1;
	volatile int32_t x172 = INT32_MAX;
	volatile int32_t t36 = -7973;

	t36 = ((x169^(x170+x171))<=x172);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x173 = 0U;
	static int16_t x174 = INT16_MAX;
	volatile int8_t x175 = INT8_MIN;

	t37 = ((x173^(x174+x175))<=x176);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x178 = 1;
	static int8_t x179 = -1;
	static volatile int32_t t38 = 1243;

	t38 = ((x177^(x178+x179))<=x180);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x181 = INT8_MAX;
	int64_t x182 = 4231482186LL;
	int8_t x183 = INT8_MIN;
	int32_t t39 = -860426732;

	t39 = ((x181^(x182+x183))<=x184);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x185 = 25U;
	int32_t x186 = INT32_MIN;
	volatile int32_t x187 = INT32_MAX;
	int64_t x188 = INT64_MIN;
	volatile int32_t t40 = -1;

	t40 = ((x185^(x186+x187))<=x188);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x191 = 0U;
	volatile int64_t x192 = -1LL;
	int32_t t41 = 6289147;

	t41 = ((x189^(x190+x191))<=x192);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x197 = INT16_MIN;
	int16_t x198 = INT16_MIN;
	static int32_t x199 = INT32_MAX;
	uint64_t x200 = UINT64_MAX;
	int32_t t42 = -1925083;

	t42 = ((x197^(x198+x199))<=x200);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int32_t x201 = -941455;
	int32_t x202 = INT32_MIN;
	static int8_t x204 = INT8_MIN;
	int32_t t43 = -146;

	t43 = ((x201^(x202+x203))<=x204);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x206 = 1U;
	static uint8_t x207 = 0U;
	int64_t x208 = -1LL;
	volatile int32_t t44 = 54942593;

	t44 = ((x205^(x206+x207))<=x208);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x209 = INT64_MIN;
	volatile uint8_t x210 = 11U;
	int32_t x211 = 1009646;
	static uint8_t x212 = 3U;
	int32_t t45 = 0;

	t45 = ((x209^(x210+x211))<=x212);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x213 = -23000268250LL;
	int8_t x214 = INT8_MIN;
	int8_t x215 = 7;
	volatile int64_t x216 = -1LL;
	int32_t t46 = 5083640;

	t46 = ((x213^(x214+x215))<=x216);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x217 = INT64_MAX;
	int8_t x218 = INT8_MAX;
	uint32_t x219 = 7105573U;
	volatile int32_t t47 = -13756;

	t47 = ((x217^(x218+x219))<=x220);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x225 = INT16_MAX;
	static int16_t x226 = INT16_MIN;
	int16_t x227 = -723;
	int32_t x228 = INT32_MIN;
	static volatile int32_t t48 = 885304776;

	t48 = ((x225^(x226+x227))<=x228);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x229 = 11441U;
	int32_t x230 = 5505;
	volatile int64_t x231 = -287779LL;
	uint64_t x232 = 8687095566671LLU;
	static volatile int32_t t49 = 33855137;

	t49 = ((x229^(x230+x231))<=x232);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x234 = -4103136578586LL;
	volatile uint32_t x235 = 28U;
	volatile uint16_t x236 = UINT16_MAX;
	int32_t t50 = -229314;

	t50 = ((x233^(x234+x235))<=x236);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x239 = -1LL;
	int64_t x240 = -28039735547852312LL;
	int32_t t51 = -995196;

	t51 = ((x237^(x238+x239))<=x240);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x242 = UINT8_MAX;
	static uint16_t x243 = 6439U;
	static uint32_t x244 = UINT32_MAX;
	int32_t t52 = 4789;

	t52 = ((x241^(x242+x243))<=x244);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x249 = INT32_MAX;
	uint64_t x250 = 93980019981LLU;
	volatile uint8_t x252 = 33U;
	int32_t t53 = -34;

	t53 = ((x249^(x250+x251))<=x252);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x253 = 3890;
	int32_t x255 = 182;
	static int16_t x256 = -81;
	volatile int32_t t54 = 458493;

	t54 = ((x253^(x254+x255))<=x256);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x259 = UINT32_MAX;
	volatile uint32_t x260 = 1U;
	volatile int32_t t55 = -462857;

	t55 = ((x257^(x258+x259))<=x260);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x261 = UINT8_MAX;
	uint32_t x262 = UINT32_MAX;
	static uint32_t x264 = 3U;
	static volatile int32_t t56 = 494537300;

	t56 = ((x261^(x262+x263))<=x264);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x266 = 1U;
	static uint64_t x267 = UINT64_MAX;
	int8_t x268 = -1;
	static int32_t t57 = -7834379;

	t57 = ((x265^(x266+x267))<=x268);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x269 = INT64_MAX;
	int64_t x270 = 1550480671LL;
	int32_t x271 = INT32_MIN;
	static volatile int32_t t58 = -394432;

	t58 = ((x269^(x270+x271))<=x272);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x273 = UINT64_MAX;
	volatile int64_t x274 = 2672601859LL;
	int32_t t59 = 124463;

	t59 = ((x273^(x274+x275))<=x276);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x277 = UINT32_MAX;
	volatile int64_t x278 = -1LL;
	static int64_t x279 = -41142271471LL;
	int8_t x280 = INT8_MIN;
	volatile int32_t t60 = 3745522;

	t60 = ((x277^(x278+x279))<=x280);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x281 = 36249593U;
	volatile uint8_t x282 = UINT8_MAX;
	uint8_t x283 = 125U;
	volatile int32_t t61 = -635260369;

	t61 = ((x281^(x282+x283))<=x284);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x286 = -1;
	static int64_t x287 = 9069047237LL;
	int16_t x288 = -6;
	static volatile int32_t t62 = -259516;

	t62 = ((x285^(x286+x287))<=x288);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x294 = 1660699483U;
	static int8_t x295 = INT8_MIN;
	static uint32_t x296 = 2U;

	t63 = ((x293^(x294+x295))<=x296);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x297 = INT64_MIN;
	uint8_t x298 = UINT8_MAX;
	int8_t x299 = INT8_MIN;
	volatile int64_t x300 = 53421372422865LL;

	t64 = ((x297^(x298+x299))<=x300);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x301 = INT32_MIN;
	int64_t x302 = INT64_MAX;
	int8_t x304 = -2;
	volatile int32_t t65 = 103592070;

	t65 = ((x301^(x302+x303))<=x304);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x305 = UINT16_MAX;
	int64_t x306 = -1865034206986LL;
	int16_t x307 = INT16_MIN;
	int32_t x308 = INT32_MIN;
	int32_t t66 = -18;

	t66 = ((x305^(x306+x307))<=x308);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x310 = UINT16_MAX;
	int64_t x311 = -1LL;
	int32_t x312 = -1;
	volatile int32_t t67 = -471757;

	t67 = ((x309^(x310+x311))<=x312);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x313 = INT32_MIN;
	volatile int8_t x314 = INT8_MIN;
	int16_t x315 = INT16_MAX;
	static int32_t t68 = -4807709;

	t68 = ((x313^(x314+x315))<=x316);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x317 = INT16_MIN;
	int64_t x318 = INT64_MIN;
	int16_t x319 = 14;
	int32_t x320 = -1;
	static int32_t t69 = -37547;

	t69 = ((x317^(x318+x319))<=x320);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x326 = 6;
	volatile int64_t x327 = -1LL;
	static int64_t x328 = -1LL;

	t70 = ((x325^(x326+x327))<=x328);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x329 = UINT32_MAX;
	int8_t x330 = INT8_MIN;
	uint16_t x331 = 17U;
	int64_t x332 = INT64_MIN;

	t71 = ((x329^(x330+x331))<=x332);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x333 = 2952LLU;
	uint16_t x334 = 5U;
	int64_t x335 = INT64_MIN;
	volatile int8_t x336 = INT8_MIN;
	static int32_t t72 = 209;

	t72 = ((x333^(x334+x335))<=x336);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x337 = 62U;
	volatile int8_t x340 = -5;
	int32_t t73 = -72;

	t73 = ((x337^(x338+x339))<=x340);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x345 = INT16_MAX;
	uint16_t x346 = 4674U;
	uint64_t x347 = 248818697438632LLU;
	int32_t t74 = 853690;

	t74 = ((x345^(x346+x347))<=x348);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x349 = 10U;
	uint8_t x350 = UINT8_MAX;
	uint8_t x352 = 103U;
	volatile int32_t t75 = 2;

	t75 = ((x349^(x350+x351))<=x352);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x353 = -1;
	static int32_t x355 = -1;
	int32_t x356 = -1;
	volatile int32_t t76 = 3953812;

	t76 = ((x353^(x354+x355))<=x356);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x357 = -1;
	uint64_t x358 = 23832408671004008LLU;
	int8_t x359 = INT8_MIN;
	int32_t t77 = -1;

	t77 = ((x357^(x358+x359))<=x360);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x361 = INT32_MIN;
	int32_t x362 = -6694;
	int8_t x364 = INT8_MAX;
	volatile int32_t t78 = -7476099;

	t78 = ((x361^(x362+x363))<=x364);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x365 = -1;
	int32_t x366 = 52133;
	static volatile uint32_t x367 = 3594U;
	int8_t x368 = INT8_MIN;

	t79 = ((x365^(x366+x367))<=x368);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x369 = UINT64_MAX;
	volatile int32_t x370 = INT32_MAX;
	static volatile int16_t x371 = INT16_MIN;
	static int8_t x372 = INT8_MIN;
	int32_t t80 = -1126;

	t80 = ((x369^(x370+x371))<=x372);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x373 = 105U;
	static volatile int64_t x374 = 1076112543789LL;
	uint16_t x375 = 16U;
	uint8_t x376 = 3U;
	volatile int32_t t81 = -4143598;

	t81 = ((x373^(x374+x375))<=x376);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x378 = -5;
	int16_t x379 = -1;
	int32_t t82 = -197;

	t82 = ((x377^(x378+x379))<=x380);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x382 = -1LL;
	int32_t x384 = INT32_MAX;
	volatile int32_t t83 = -626146;

	t83 = ((x381^(x382+x383))<=x384);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x385 = 9696;
	uint32_t x387 = 72658580U;
	uint64_t x388 = 127595862407411543LLU;
	int32_t t84 = -6838315;

	t84 = ((x385^(x386+x387))<=x388);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x389 = INT32_MIN;
	uint64_t x390 = 62079LLU;
	static volatile int16_t x391 = -753;
	volatile int8_t x392 = 0;
	static volatile int32_t t85 = -88253096;

	t85 = ((x389^(x390+x391))<=x392);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x393 = 337268344827272217LL;
	int16_t x394 = -1;
	static uint64_t x395 = 193654835843685935LLU;
	int16_t x396 = INT16_MIN;
	int32_t t86 = 32762682;

	t86 = ((x393^(x394+x395))<=x396);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint64_t x397 = UINT64_MAX;
	int8_t x398 = INT8_MIN;
	static uint64_t x399 = UINT64_MAX;
	volatile uint64_t x400 = 24812550LLU;
	int32_t t87 = 158;

	t87 = ((x397^(x398+x399))<=x400);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x402 = 121U;
	uint16_t x403 = 10U;
	volatile int32_t t88 = 342;

	t88 = ((x401^(x402+x403))<=x404);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x406 = 6197976496219LLU;
	uint8_t x407 = 67U;
	int8_t x408 = INT8_MAX;
	int32_t t89 = -747285;

	t89 = ((x405^(x406+x407))<=x408);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x409 = INT16_MIN;
	volatile uint64_t x410 = UINT64_MAX;
	uint8_t x412 = 1U;
	int32_t t90 = 2;

	t90 = ((x409^(x410+x411))<=x412);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x417 = INT16_MAX;
	int16_t x419 = INT16_MIN;
	uint32_t x420 = 4U;
	volatile int32_t t91 = 1;

	t91 = ((x417^(x418+x419))<=x420);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x421 = 7U;
	uint64_t x422 = 7389054166507828151LLU;
	int64_t x423 = 534030692720905600LL;
	uint8_t x424 = 10U;
	int32_t t92 = 4018;

	t92 = ((x421^(x422+x423))<=x424);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x425 = 10U;
	volatile uint32_t x426 = 48766U;
	int32_t x427 = -1;
	int8_t x428 = 0;
	int32_t t93 = 1;

	t93 = ((x425^(x426+x427))<=x428);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x433 = INT16_MIN;
	uint32_t x435 = UINT32_MAX;
	uint64_t x436 = 279988979372981496LLU;
	int32_t t94 = 153;

	t94 = ((x433^(x434+x435))<=x436);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x438 = 9509U;
	uint64_t x439 = UINT64_MAX;
	int32_t x440 = INT32_MIN;
	volatile int32_t t95 = 212;

	t95 = ((x437^(x438+x439))<=x440);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x441 = 31670906LL;
	int8_t x442 = INT8_MIN;
	uint32_t x443 = 4839U;
	int32_t t96 = -1667;

	t96 = ((x441^(x442+x443))<=x444);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x445 = 214127U;
	static int32_t x446 = 2286;
	static int16_t x448 = -1;
	int32_t t97 = 239487320;

	t97 = ((x445^(x446+x447))<=x448);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x449 = 3;
	volatile int16_t x450 = 116;
	static int8_t x452 = INT8_MIN;

	t98 = ((x449^(x450+x451))<=x452);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x453 = 3U;
	static int16_t x454 = 23;
	int32_t x456 = 2310050;
	volatile int32_t t99 = 1854597;

	t99 = ((x453^(x454+x455))<=x456);

	if (t99 != 1) { NG(); } else { ; }
	
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

