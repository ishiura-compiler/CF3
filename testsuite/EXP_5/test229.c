#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x1 = -1;
int8_t x4 = INT8_MIN;
static uint8_t x18 = UINT8_MAX;
int64_t x19 = INT64_MAX;
uint8_t x20 = 1U;
static volatile int32_t t4 = 4756987;
static volatile int32_t x28 = INT32_MAX;
int8_t x32 = 51;
uint32_t x33 = 39U;
uint32_t x34 = 765U;
int8_t x48 = INT8_MIN;
int16_t x53 = -1;
static uint16_t x55 = 2U;
volatile int64_t x56 = 21806943182257633LL;
int32_t t10 = -28247281;
static int32_t x58 = INT32_MAX;
uint16_t x60 = 4U;
static int64_t x61 = -76764798LL;
int16_t x74 = 493;
uint16_t x81 = 1184U;
volatile int32_t t15 = -1057842137;
int8_t x88 = INT8_MAX;
volatile uint32_t x91 = UINT32_MAX;
int64_t x100 = INT64_MIN;
int32_t x101 = 1441;
int32_t x104 = -16;
uint32_t x110 = UINT32_MAX;
static uint64_t x115 = 6003LLU;
uint32_t x117 = 1482680U;
int16_t x124 = -121;
int32_t t25 = 13;
uint64_t x129 = 1969566LLU;
int32_t x140 = INT32_MIN;
uint16_t x143 = 1U;
static int16_t x144 = -1;
static int64_t x161 = 529334LL;
int64_t x164 = -1LL;
static int8_t x170 = INT8_MIN;
uint64_t x171 = 1LLU;
uint32_t x175 = 62822U;
volatile int32_t t36 = -40;
static volatile int64_t x178 = -18LL;
int16_t x183 = INT16_MAX;
int16_t x195 = INT16_MAX;
uint8_t x215 = 2U;
int32_t x216 = INT32_MAX;
int32_t t44 = -96;
int64_t x236 = -1LL;
int32_t x240 = INT32_MIN;
static volatile int32_t x244 = -47;
int32_t x249 = 180;
int32_t t52 = 0;
static int8_t x261 = INT8_MIN;
volatile int32_t t53 = 1792;
int32_t t54 = 41;
int8_t x269 = -1;
volatile int32_t x278 = -1;
volatile int16_t x279 = -1;
static volatile int32_t t57 = -34512;
uint8_t x301 = 6U;
uint8_t x312 = UINT8_MAX;
uint64_t x317 = 520255508213688LLU;
volatile int16_t x318 = INT16_MIN;
int32_t x322 = -1;
static uint64_t x330 = 1390582434LLU;
uint8_t x342 = 21U;
uint64_t x347 = UINT64_MAX;
static int32_t x348 = -12;
uint32_t x352 = 2U;
volatile int64_t x355 = 296654LL;
int64_t x367 = -1LL;
volatile int64_t x374 = INT64_MIN;
volatile uint64_t x376 = 12011920511LLU;
volatile int32_t t75 = 25;
int32_t t76 = 5825;
volatile int32_t t77 = 11941;
volatile int32_t x386 = INT32_MIN;
int32_t x387 = INT32_MIN;
volatile int64_t x394 = -1LL;
uint8_t x401 = UINT8_MAX;
int8_t x403 = INT8_MIN;
int32_t t82 = 956247;
uint64_t x405 = 3820002LLU;
static int8_t x410 = -27;
static uint32_t x424 = 64308U;
static int8_t x429 = -5;
int8_t x430 = INT8_MIN;
volatile int16_t x431 = -1;
int16_t x432 = INT16_MAX;
static int64_t x440 = 436261968548LL;
int16_t x452 = -330;
volatile uint64_t x463 = 27437796855LLU;
int8_t x468 = 55;
int64_t x474 = 2199159889903407411LL;
int32_t t98 = 376;
volatile int32_t t99 = 699229;


void f0(void) {
	int8_t x2 = -30;
	static int32_t x3 = -16329;
	volatile int32_t t0 = -22309469;

	t0 = (x1==((x2-x3)%x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x9 = INT32_MAX;
	static int16_t x10 = INT16_MIN;
	uint32_t x11 = 483525576U;
	volatile int8_t x12 = -1;
	int32_t t1 = 13;

	t1 = (x9==((x10-x11)%x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = 128505595;
	int8_t x14 = -1;
	static int16_t x15 = INT16_MIN;
	int16_t x16 = -1;
	static volatile int32_t t2 = 580853895;

	t2 = (x13==((x14-x15)%x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x17 = 9980U;
	static volatile int32_t t3 = 60;

	t3 = (x17==((x18-x19)%x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x21 = 5U;
	volatile uint64_t x22 = UINT64_MAX;
	static volatile int32_t x23 = 51755532;
	int32_t x24 = 128773;

	t4 = (x21==((x22-x23)%x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x25 = INT64_MIN;
	int16_t x26 = INT16_MIN;
	int16_t x27 = INT16_MIN;
	static int32_t t5 = -3;

	t5 = (x25==((x26-x27)%x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = 49;
	static uint16_t x30 = 7U;
	uint8_t x31 = UINT8_MAX;
	volatile int32_t t6 = 3444209;

	t6 = (x29==((x30-x31)%x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int8_t x35 = INT8_MIN;
	int16_t x36 = INT16_MIN;
	static int32_t t7 = 57278;

	t7 = (x33==((x34-x35)%x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = INT8_MIN;
	volatile int8_t x38 = -46;
	int64_t x39 = INT64_MIN;
	static int32_t x40 = 2;
	int32_t t8 = -73815;

	t8 = (x37==((x38-x39)%x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x45 = -1;
	int32_t x46 = 369;
	int16_t x47 = -1;
	int32_t t9 = -3;

	t9 = (x45==((x46-x47)%x48));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x54 = INT16_MIN;

	t10 = (x53==((x54-x55)%x56));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x57 = 16U;
	static uint16_t x59 = UINT16_MAX;
	volatile int32_t t11 = -3;

	t11 = (x57==((x58-x59)%x60));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x62 = 1LL;
	uint32_t x63 = 217636871U;
	uint32_t x64 = 32164449U;
	int32_t t12 = 1157;

	t12 = (x61==((x62-x63)%x64));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x65 = 656366;
	int16_t x66 = INT16_MIN;
	int32_t x67 = 44;
	int16_t x68 = INT16_MIN;
	int32_t t13 = 133426969;

	t13 = (x65==((x66-x67)%x68));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x73 = -49LL;
	int8_t x75 = -1;
	uint64_t x76 = 1321541LLU;
	int32_t t14 = 28;

	t14 = (x73==((x74-x75)%x76));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x82 = 57396066508LL;
	int64_t x83 = -1582936439062LL;
	int32_t x84 = INT32_MAX;

	t15 = (x81==((x82-x83)%x84));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x85 = -27547LL;
	uint16_t x86 = 12369U;
	uint8_t x87 = UINT8_MAX;
	int32_t t16 = -2;

	t16 = (x85==((x86-x87)%x88));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x89 = INT16_MIN;
	static int64_t x90 = INT64_MAX;
	volatile int32_t x92 = INT32_MIN;
	static int32_t t17 = -7787;

	t17 = (x89==((x90-x91)%x92));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x93 = -1LL;
	int8_t x94 = 1;
	static uint32_t x95 = 210644U;
	volatile int32_t x96 = INT32_MIN;
	volatile int32_t t18 = 170;

	t18 = (x93==((x94-x95)%x96));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x97 = -46;
	int8_t x98 = -1;
	int16_t x99 = -1;
	volatile int32_t t19 = 0;

	t19 = (x97==((x98-x99)%x100));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x102 = INT8_MIN;
	int32_t x103 = -1;
	volatile int32_t t20 = -527837481;

	t20 = (x101==((x102-x103)%x104));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x105 = 1U;
	static int64_t x106 = -2024LL;
	uint32_t x107 = 264240014U;
	int64_t x108 = 733691LL;
	volatile int32_t t21 = 35;

	t21 = (x105==((x106-x107)%x108));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint64_t x109 = 240299598LLU;
	static volatile int8_t x111 = INT8_MIN;
	volatile int8_t x112 = INT8_MIN;
	volatile int32_t t22 = 2446;

	t22 = (x109==((x110-x111)%x112));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x113 = INT64_MAX;
	static uint32_t x114 = 19147530U;
	volatile uint32_t x116 = 166U;
	volatile int32_t t23 = 7449615;

	t23 = (x113==((x114-x115)%x116));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x118 = -1;
	volatile int16_t x119 = INT16_MAX;
	int64_t x120 = 385LL;
	int32_t t24 = -127318693;

	t24 = (x117==((x118-x119)%x120));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x121 = 16729U;
	int32_t x122 = INT32_MIN;
	volatile int64_t x123 = 1595LL;

	t25 = (x121==((x122-x123)%x124));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x125 = UINT64_MAX;
	int64_t x126 = INT64_MIN;
	int8_t x127 = -6;
	static int16_t x128 = -5;
	int32_t t26 = 3248;

	t26 = (x125==((x126-x127)%x128));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x130 = -1482;
	int8_t x131 = -4;
	int32_t x132 = INT32_MAX;
	volatile int32_t t27 = 0;

	t27 = (x129==((x130-x131)%x132));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x133 = -68862059LL;
	volatile int16_t x134 = -1;
	int8_t x135 = INT8_MAX;
	int8_t x136 = -1;
	int32_t t28 = 1;

	t28 = (x133==((x134-x135)%x136));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int64_t x137 = -1LL;
	int64_t x138 = 1645068880615760964LL;
	int32_t x139 = INT32_MIN;
	int32_t t29 = 43;

	t29 = (x137==((x138-x139)%x140));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x141 = 139762082613942265LL;
	int32_t x142 = 22088731;
	volatile int32_t t30 = -1;

	t30 = (x141==((x142-x143)%x144));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x149 = -7575LL;
	uint8_t x150 = 0U;
	static int16_t x151 = INT16_MIN;
	static uint32_t x152 = 18311759U;
	volatile int32_t t31 = 774305;

	t31 = (x149==((x150-x151)%x152));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x153 = 1934084223269168727LLU;
	int64_t x154 = INT64_MIN;
	int64_t x155 = -5792824941192922LL;
	int64_t x156 = INT64_MIN;
	int32_t t32 = -57155;

	t32 = (x153==((x154-x155)%x156));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x162 = -1LL;
	volatile uint16_t x163 = 297U;
	volatile int32_t t33 = -41381;

	t33 = (x161==((x162-x163)%x164));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x165 = UINT8_MAX;
	int16_t x166 = -1729;
	volatile int32_t x167 = 11351;
	static uint8_t x168 = 30U;
	volatile int32_t t34 = 1299808;

	t34 = (x165==((x166-x167)%x168));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x169 = -1;
	static int8_t x172 = 41;
	static int32_t t35 = -1927;

	t35 = (x169==((x170-x171)%x172));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x173 = 1165U;
	static int8_t x174 = 1;
	static volatile int8_t x176 = INT8_MIN;

	t36 = (x173==((x174-x175)%x176));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x177 = -5;
	uint32_t x179 = 224540U;
	int16_t x180 = INT16_MIN;
	volatile int32_t t37 = 438048281;

	t37 = (x177==((x178-x179)%x180));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x181 = -1;
	static volatile int16_t x182 = -1;
	static int8_t x184 = INT8_MIN;
	volatile int32_t t38 = -27;

	t38 = (x181==((x182-x183)%x184));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x185 = INT32_MIN;
	int64_t x186 = INT64_MIN;
	static volatile int32_t x187 = INT32_MIN;
	static int32_t x188 = -18;
	int32_t t39 = 3;

	t39 = (x185==((x186-x187)%x188));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x189 = INT16_MIN;
	int8_t x190 = -3;
	static uint64_t x191 = UINT64_MAX;
	uint64_t x192 = 27307971LLU;
	int32_t t40 = -7731062;

	t40 = (x189==((x190-x191)%x192));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x193 = INT64_MAX;
	uint16_t x194 = UINT16_MAX;
	uint32_t x196 = UINT32_MAX;
	volatile int32_t t41 = -20737;

	t41 = (x193==((x194-x195)%x196));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x197 = INT16_MIN;
	volatile int64_t x198 = 1495LL;
	int16_t x199 = -1;
	static int16_t x200 = INT16_MIN;
	volatile int32_t t42 = -9467;

	t42 = (x197==((x198-x199)%x200));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x201 = INT64_MAX;
	static volatile uint16_t x202 = 1U;
	volatile int16_t x203 = INT16_MAX;
	int64_t x204 = -1LL;
	static volatile int32_t t43 = -2246469;

	t43 = (x201==((x202-x203)%x204));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint16_t x213 = 2368U;
	uint32_t x214 = UINT32_MAX;

	t44 = (x213==((x214-x215)%x216));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x217 = -16;
	uint8_t x218 = 6U;
	static int16_t x219 = 158;
	uint16_t x220 = 33U;
	volatile int32_t t45 = -1931838;

	t45 = (x217==((x218-x219)%x220));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x225 = UINT8_MAX;
	static uint8_t x226 = 0U;
	static int64_t x227 = -1LL;
	static int16_t x228 = INT16_MAX;
	int32_t t46 = -3;

	t46 = (x225==((x226-x227)%x228));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x229 = 49739;
	volatile int8_t x230 = -1;
	static volatile int64_t x231 = -609875LL;
	uint64_t x232 = 1772756LLU;
	int32_t t47 = -872639604;

	t47 = (x229==((x230-x231)%x232));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x233 = 1426506075LL;
	uint16_t x234 = UINT16_MAX;
	int32_t x235 = -3294;
	volatile int32_t t48 = 332;

	t48 = (x233==((x234-x235)%x236));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x237 = 15704876;
	uint32_t x238 = 217415666U;
	uint16_t x239 = UINT16_MAX;
	int32_t t49 = -2;

	t49 = (x237==((x238-x239)%x240));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x241 = -17;
	volatile uint64_t x242 = 20190223843251419LLU;
	int64_t x243 = 1LL;
	int32_t t50 = -56027;

	t50 = (x241==((x242-x243)%x244));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x250 = INT32_MAX;
	static volatile int8_t x251 = INT8_MAX;
	static int32_t x252 = INT32_MIN;
	volatile int32_t t51 = 39090551;

	t51 = (x249==((x250-x251)%x252));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x253 = 32458933U;
	static int32_t x254 = 0;
	static uint32_t x255 = 98U;
	uint8_t x256 = 29U;

	t52 = (x253==((x254-x255)%x256));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x262 = 7004710234979358LL;
	volatile uint32_t x263 = UINT32_MAX;
	volatile uint32_t x264 = UINT32_MAX;

	t53 = (x261==((x262-x263)%x264));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint32_t x265 = 1U;
	static int16_t x266 = INT16_MAX;
	uint64_t x267 = 312208509LLU;
	volatile int64_t x268 = 73577198844888796LL;

	t54 = (x265==((x266-x267)%x268));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x270 = INT8_MIN;
	int32_t x271 = INT32_MIN;
	uint64_t x272 = 22LLU;
	int32_t t55 = -94144296;

	t55 = (x269==((x270-x271)%x272));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x273 = INT64_MAX;
	uint8_t x274 = 15U;
	uint64_t x275 = UINT64_MAX;
	static int32_t x276 = -1;
	int32_t t56 = 32304973;

	t56 = (x273==((x274-x275)%x276));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x277 = INT64_MIN;
	uint16_t x280 = UINT16_MAX;

	t57 = (x277==((x278-x279)%x280));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x281 = INT16_MIN;
	static int32_t x282 = -5541;
	int16_t x283 = -11393;
	int32_t x284 = -6979;
	int32_t t58 = 59;

	t58 = (x281==((x282-x283)%x284));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x285 = -1;
	uint32_t x286 = 75978409U;
	int16_t x287 = 39;
	volatile int32_t x288 = -1;
	int32_t t59 = 1447;

	t59 = (x285==((x286-x287)%x288));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x289 = INT8_MIN;
	static volatile int32_t x290 = 521334200;
	static uint8_t x291 = UINT8_MAX;
	static int64_t x292 = INT64_MIN;
	static int32_t t60 = -1928;

	t60 = (x289==((x290-x291)%x292));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x302 = 53917LLU;
	int64_t x303 = INT64_MAX;
	int32_t x304 = 7711;
	volatile int32_t t61 = 643;

	t61 = (x301==((x302-x303)%x304));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x305 = INT16_MAX;
	static int16_t x306 = 2;
	uint16_t x307 = 50U;
	int64_t x308 = INT64_MIN;
	volatile int32_t t62 = 1020791043;

	t62 = (x305==((x306-x307)%x308));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x309 = INT64_MIN;
	uint32_t x310 = 2071288073U;
	int64_t x311 = -456411451LL;
	int32_t t63 = -2649138;

	t63 = (x309==((x310-x311)%x312));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x313 = -500;
	int64_t x314 = -1LL;
	int64_t x315 = INT64_MIN;
	static int64_t x316 = INT64_MIN;
	int32_t t64 = -3690427;

	t64 = (x313==((x314-x315)%x316));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x319 = INT8_MIN;
	int32_t x320 = INT32_MIN;
	volatile int32_t t65 = -98895212;

	t65 = (x317==((x318-x319)%x320));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x321 = UINT64_MAX;
	static uint64_t x323 = 6974114103LLU;
	int64_t x324 = INT64_MIN;
	int32_t t66 = -5928;

	t66 = (x321==((x322-x323)%x324));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x329 = -15904918LL;
	volatile int64_t x331 = INT64_MIN;
	int64_t x332 = -966718801LL;
	int32_t t67 = 9;

	t67 = (x329==((x330-x331)%x332));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x333 = 59U;
	volatile int32_t x334 = -1;
	volatile int64_t x335 = INT64_MIN;
	static volatile int8_t x336 = INT8_MIN;
	int32_t t68 = 124829666;

	t68 = (x333==((x334-x335)%x336));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x341 = INT8_MIN;
	volatile int32_t x343 = -1;
	static uint8_t x344 = 23U;
	volatile int32_t t69 = 248693;

	t69 = (x341==((x342-x343)%x344));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x345 = INT16_MIN;
	uint8_t x346 = UINT8_MAX;
	volatile int32_t t70 = -439809637;

	t70 = (x345==((x346-x347)%x348));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x349 = INT8_MAX;
	int8_t x350 = INT8_MIN;
	volatile int16_t x351 = 147;
	volatile int32_t t71 = 2674543;

	t71 = (x349==((x350-x351)%x352));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x353 = -15266544;
	int64_t x354 = 1056922316362825860LL;
	int32_t x356 = -41;
	volatile int32_t t72 = 48664582;

	t72 = (x353==((x354-x355)%x356));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x365 = INT16_MIN;
	int64_t x366 = 115616170LL;
	volatile uint8_t x368 = UINT8_MAX;
	int32_t t73 = 4;

	t73 = (x365==((x366-x367)%x368));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int8_t x369 = -1;
	volatile int64_t x370 = INT64_MIN;
	static int8_t x371 = -6;
	static volatile uint32_t x372 = 101202U;
	volatile int32_t t74 = -1;

	t74 = (x369==((x370-x371)%x372));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x373 = -46;
	static volatile int8_t x375 = INT8_MIN;

	t75 = (x373==((x374-x375)%x376));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x377 = INT8_MAX;
	volatile int16_t x378 = INT16_MIN;
	static uint32_t x379 = 29U;
	static int8_t x380 = INT8_MAX;

	t76 = (x377==((x378-x379)%x380));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x381 = -1;
	int16_t x382 = INT16_MIN;
	uint8_t x383 = 101U;
	int16_t x384 = INT16_MIN;

	t77 = (x381==((x382-x383)%x384));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x385 = 887U;
	uint32_t x388 = 1365185U;
	int32_t t78 = 1042825;

	t78 = (x385==((x386-x387)%x388));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x389 = INT16_MIN;
	int8_t x390 = -1;
	uint32_t x391 = UINT32_MAX;
	volatile uint32_t x392 = 104U;
	static int32_t t79 = 14750;

	t79 = (x389==((x390-x391)%x392));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x393 = 710;
	volatile uint32_t x395 = 3634150U;
	static volatile int8_t x396 = 3;
	volatile int32_t t80 = -861774573;

	t80 = (x393==((x394-x395)%x396));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x397 = 31570LL;
	static uint64_t x398 = 6787LLU;
	uint64_t x399 = 64LLU;
	uint16_t x400 = UINT16_MAX;
	int32_t t81 = -57553;

	t81 = (x397==((x398-x399)%x400));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x402 = 4U;
	int64_t x404 = INT64_MIN;

	t82 = (x401==((x402-x403)%x404));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x406 = 9LL;
	uint32_t x407 = UINT32_MAX;
	volatile int64_t x408 = -112398681035404927LL;
	volatile int32_t t83 = 0;

	t83 = (x405==((x406-x407)%x408));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x409 = INT16_MAX;
	volatile int8_t x411 = -1;
	int64_t x412 = INT64_MAX;
	static volatile int32_t t84 = -1;

	t84 = (x409==((x410-x411)%x412));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x413 = INT8_MIN;
	static int64_t x414 = INT64_MIN;
	uint64_t x415 = UINT64_MAX;
	static uint8_t x416 = UINT8_MAX;
	volatile int32_t t85 = 9497;

	t85 = (x413==((x414-x415)%x416));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x421 = 12372U;
	int16_t x422 = 0;
	static uint16_t x423 = UINT16_MAX;
	volatile int32_t t86 = 763;

	t86 = (x421==((x422-x423)%x424));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x425 = UINT32_MAX;
	int64_t x426 = INT64_MIN;
	static int64_t x427 = -1LL;
	int32_t x428 = -1;
	static volatile int32_t t87 = -10260004;

	t87 = (x425==((x426-x427)%x428));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t t88 = -1169;

	t88 = (x429==((x430-x431)%x432));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x433 = 0U;
	volatile int8_t x434 = INT8_MIN;
	uint32_t x435 = UINT32_MAX;
	int64_t x436 = INT64_MIN;
	int32_t t89 = -18267708;

	t89 = (x433==((x434-x435)%x436));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x437 = 12168LLU;
	int64_t x438 = INT64_MAX;
	uint32_t x439 = 239965U;
	volatile int32_t t90 = 1;

	t90 = (x437==((x438-x439)%x440));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x441 = -1127589527166049LL;
	volatile uint8_t x442 = 39U;
	int64_t x443 = -9758263196706LL;
	static int64_t x444 = INT64_MIN;
	int32_t t91 = 63653;

	t91 = (x441==((x442-x443)%x444));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x449 = INT8_MIN;
	static uint8_t x450 = 8U;
	volatile uint64_t x451 = 0LLU;
	int32_t t92 = -1;

	t92 = (x449==((x450-x451)%x452));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x453 = INT64_MAX;
	int8_t x454 = INT8_MAX;
	static int8_t x455 = -1;
	uint64_t x456 = UINT64_MAX;
	static int32_t t93 = -917389976;

	t93 = (x453==((x454-x455)%x456));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x457 = 101;
	int64_t x458 = INT64_MIN;
	int8_t x459 = INT8_MIN;
	uint8_t x460 = 6U;
	int32_t t94 = 46;

	t94 = (x457==((x458-x459)%x460));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x461 = 63U;
	uint16_t x462 = 2U;
	int16_t x464 = INT16_MIN;
	static int32_t t95 = 69;

	t95 = (x461==((x462-x463)%x464));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x465 = INT32_MAX;
	volatile uint32_t x466 = 1896U;
	int8_t x467 = -1;
	int32_t t96 = 21174;

	t96 = (x465==((x466-x467)%x468));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x469 = 2886123U;
	int8_t x470 = INT8_MIN;
	int16_t x471 = INT16_MIN;
	int8_t x472 = INT8_MAX;
	int32_t t97 = -485;

	t97 = (x469==((x470-x471)%x472));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x473 = 249363U;
	static uint16_t x475 = 7U;
	static int8_t x476 = INT8_MIN;

	t98 = (x473==((x474-x475)%x476));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x477 = 1U;
	uint16_t x478 = 702U;
	int8_t x479 = INT8_MIN;
	uint64_t x480 = 13959505LLU;

	t99 = (x477==((x478-x479)%x480));

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

