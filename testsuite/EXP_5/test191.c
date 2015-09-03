#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x5 = 1U;
uint32_t x6 = 1354U;
int64_t x7 = -313946949468LL;
volatile int32_t t1 = -105;
int32_t t2 = -12;
int64_t x17 = 55621566478158857LL;
uint64_t x20 = UINT64_MAX;
int64_t x27 = INT64_MIN;
int32_t t6 = 338475;
static uint16_t x39 = 4473U;
uint16_t x41 = 2693U;
volatile int32_t t9 = 645905583;
volatile uint8_t x50 = 1U;
int8_t x51 = 37;
int8_t x58 = INT8_MIN;
static volatile int32_t t12 = -44;
uint16_t x64 = 97U;
uint16_t x65 = UINT16_MAX;
static volatile int32_t t14 = 3272487;
int32_t x75 = INT32_MIN;
volatile int8_t x77 = INT8_MAX;
int64_t x86 = 1LL;
uint8_t x87 = UINT8_MAX;
volatile int32_t t20 = 2;
static volatile int32_t t21 = 8047;
int8_t x132 = INT8_MIN;
volatile int16_t x143 = INT16_MIN;
volatile int32_t t27 = -731;
static volatile uint16_t x150 = UINT16_MAX;
uint16_t x152 = UINT16_MAX;
int8_t x156 = 0;
volatile int32_t t31 = 600686;
int8_t x165 = -1;
static uint16_t x176 = 881U;
static int32_t t33 = 0;
uint16_t x180 = 479U;
volatile int64_t x183 = INT64_MIN;
volatile int16_t x192 = -225;
int32_t t37 = 2;
uint8_t x207 = UINT8_MAX;
static int32_t t39 = 15806;
static int8_t x225 = INT8_MIN;
volatile int32_t t43 = 105112962;
int64_t x229 = INT64_MAX;
uint8_t x230 = 19U;
int8_t x233 = 2;
int8_t x234 = INT8_MIN;
volatile int8_t x238 = -1;
uint32_t x243 = UINT32_MAX;
uint64_t x244 = 7LLU;
volatile int16_t x265 = INT16_MIN;
volatile int16_t x267 = INT16_MIN;
static volatile int32_t t50 = -1;
static int64_t x269 = INT64_MAX;
int64_t x271 = 835055619712567LL;
uint8_t x273 = 56U;
int16_t x277 = INT16_MIN;
int64_t x279 = -5971875183634LL;
uint64_t x280 = 1LLU;
volatile int32_t t53 = -22901650;
int64_t x288 = INT64_MAX;
static int64_t x295 = INT64_MIN;
int8_t x296 = 0;
static volatile int32_t t58 = -20;
uint32_t x313 = 496387203U;
static int8_t x319 = INT8_MIN;
volatile int32_t t61 = -1903;
uint64_t x336 = UINT64_MAX;
static volatile int8_t x350 = 0;
int64_t x354 = -1731977885388217LL;
volatile uint8_t x356 = UINT8_MAX;
int16_t x361 = INT16_MIN;
static int32_t x371 = -1;
uint16_t x375 = 10U;
volatile int32_t x387 = INT32_MIN;
int32_t t72 = -446;
uint64_t x401 = 9516062881379LLU;
uint8_t x403 = 20U;
volatile int8_t x416 = INT8_MIN;
volatile int32_t t78 = 82993086;
int32_t x419 = INT32_MIN;
volatile int64_t x422 = 23206703466646521LL;
static int16_t x438 = -2181;
volatile uint32_t x440 = UINT32_MAX;
static uint64_t x441 = 4051689LLU;
int32_t t84 = 6;
int32_t x453 = -1;
uint32_t x475 = 1U;
int64_t x477 = 183LL;
static volatile uint32_t x486 = 448U;
int8_t x493 = 6;
int8_t x496 = INT8_MIN;
static int8_t x500 = INT8_MIN;
int32_t x505 = INT32_MAX;
volatile int32_t t96 = -232;
static uint16_t x522 = 1U;
int8_t x523 = INT8_MIN;
int32_t t98 = 1;


void f0(void) {
	int8_t x1 = INT8_MIN;
	volatile int32_t x2 = -1;
	static int32_t x3 = 936779;
	int64_t x4 = -35427LL;
	volatile int32_t t0 = -28988;

	t0 = (x1<((x2-x3)-x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x8 = 9050783U;

	t1 = (x5<((x6-x7)-x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	int16_t x10 = 4350;
	int8_t x11 = INT8_MAX;
	static uint64_t x12 = UINT64_MAX;

	t2 = (x9<((x10-x11)-x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -1LL;
	uint64_t x14 = UINT64_MAX;
	volatile int8_t x15 = INT8_MAX;
	int16_t x16 = -1;
	static volatile int32_t t3 = -1;

	t3 = (x13<((x14-x15)-x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = 1;
	int8_t x19 = INT8_MAX;
	int32_t t4 = -253;

	t4 = (x17<((x18-x19)-x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = 12;
	volatile int32_t x22 = INT32_MIN;
	int64_t x23 = -350934LL;
	int32_t x24 = -1;
	static volatile int32_t t5 = 7;

	t5 = (x21<((x22-x23)-x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	uint64_t x26 = 22119524LLU;
	int8_t x28 = -1;

	t6 = (x25<((x26-x27)-x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = INT32_MIN;
	uint16_t x34 = UINT16_MAX;
	static uint8_t x35 = 4U;
	int64_t x36 = -1LL;
	volatile int32_t t7 = 394972;

	t7 = (x33<((x34-x35)-x36));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x37 = UINT32_MAX;
	static int32_t x38 = -1;
	uint32_t x40 = UINT32_MAX;
	volatile int32_t t8 = 58;

	t8 = (x37<((x38-x39)-x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x42 = -975507912751LL;
	int8_t x43 = INT8_MIN;
	static uint8_t x44 = 109U;

	t9 = (x41<((x42-x43)-x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x45 = 9968341U;
	int64_t x46 = -27716162LL;
	volatile uint64_t x47 = 5063LLU;
	static int8_t x48 = 1;
	volatile int32_t t10 = 5290;

	t10 = (x45<((x46-x47)-x48));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x49 = INT8_MAX;
	int64_t x52 = INT64_MIN;
	volatile int32_t t11 = 0;

	t11 = (x49<((x50-x51)-x52));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x57 = 368U;
	uint8_t x59 = UINT8_MAX;
	volatile int8_t x60 = INT8_MIN;

	t12 = (x57<((x58-x59)-x60));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x61 = -1LL;
	volatile int8_t x62 = -2;
	volatile uint64_t x63 = UINT64_MAX;
	volatile int32_t t13 = -1;

	t13 = (x61<((x62-x63)-x64));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x66 = 27U;
	volatile int8_t x67 = 7;
	int16_t x68 = -3;

	t14 = (x65<((x66-x67)-x68));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x73 = 2714038U;
	int64_t x74 = -1LL;
	int32_t x76 = -1;
	int32_t t15 = -47731;

	t15 = (x73<((x74-x75)-x76));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int16_t x78 = INT16_MIN;
	int32_t x79 = INT32_MIN;
	static int64_t x80 = 1LL;
	volatile int32_t t16 = -5;

	t16 = (x77<((x78-x79)-x80));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x81 = INT64_MIN;
	volatile uint16_t x82 = 8690U;
	static uint64_t x83 = 21681537LLU;
	volatile int8_t x84 = -22;
	int32_t t17 = 3;

	t17 = (x81<((x82-x83)-x84));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x85 = INT32_MIN;
	int16_t x88 = INT16_MAX;
	volatile int32_t t18 = 6;

	t18 = (x85<((x86-x87)-x88));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x97 = INT32_MAX;
	static int32_t x98 = INT32_MAX;
	uint64_t x99 = 24632330LLU;
	volatile uint16_t x100 = UINT16_MAX;
	volatile int32_t t19 = 12569;

	t19 = (x97<((x98-x99)-x100));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x101 = 130126210U;
	int64_t x102 = -1LL;
	volatile uint64_t x103 = 5LLU;
	int64_t x104 = INT64_MIN;

	t20 = (x101<((x102-x103)-x104));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x113 = INT8_MAX;
	int64_t x114 = -238421979LL;
	int8_t x115 = 53;
	int16_t x116 = INT16_MAX;

	t21 = (x113<((x114-x115)-x116));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x125 = 10;
	int32_t x126 = -2174;
	int32_t x127 = INT32_MIN;
	int16_t x128 = -1;
	volatile int32_t t22 = 30595167;

	t22 = (x125<((x126-x127)-x128));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x129 = 10197639U;
	uint16_t x130 = 21U;
	volatile int64_t x131 = -316447044LL;
	volatile int32_t t23 = -808083560;

	t23 = (x129<((x130-x131)-x132));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x133 = -1;
	static int64_t x134 = -1LL;
	static uint16_t x135 = 55U;
	int32_t x136 = -1;
	volatile int32_t t24 = 922;

	t24 = (x133<((x134-x135)-x136));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x137 = UINT32_MAX;
	int16_t x138 = 76;
	static uint16_t x139 = 0U;
	int64_t x140 = -95586111376LL;
	int32_t t25 = 433;

	t25 = (x137<((x138-x139)-x140));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x141 = 7U;
	int32_t x142 = INT32_MIN;
	int32_t x144 = INT32_MIN;
	int32_t t26 = 474580518;

	t26 = (x141<((x142-x143)-x144));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x145 = 1;
	volatile int64_t x146 = 4391823371257LL;
	int8_t x147 = 63;
	static uint64_t x148 = 5115624081721023LLU;

	t27 = (x145<((x146-x147)-x148));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x149 = INT64_MAX;
	uint64_t x151 = 3845011260LLU;
	volatile int32_t t28 = -13;

	t28 = (x149<((x150-x151)-x152));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x153 = -47557328050LL;
	int32_t x154 = 99465;
	int32_t x155 = INT32_MAX;
	int32_t t29 = -13;

	t29 = (x153<((x154-x155)-x156));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int64_t x157 = INT64_MIN;
	uint64_t x158 = UINT64_MAX;
	static volatile uint16_t x159 = UINT16_MAX;
	int64_t x160 = -1LL;
	int32_t t30 = 145710;

	t30 = (x157<((x158-x159)-x160));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x161 = 10U;
	static volatile int8_t x162 = -1;
	static volatile uint64_t x163 = 1LLU;
	int64_t x164 = -111875474LL;

	t31 = (x161<((x162-x163)-x164));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x166 = 2U;
	uint16_t x167 = 3U;
	int32_t x168 = 112135;
	volatile int32_t t32 = -83143;

	t32 = (x165<((x166-x167)-x168));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x173 = 2U;
	static volatile int32_t x174 = INT32_MIN;
	int64_t x175 = INT64_MIN;

	t33 = (x173<((x174-x175)-x176));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x177 = UINT16_MAX;
	int32_t x178 = -1;
	uint64_t x179 = UINT64_MAX;
	volatile int32_t t34 = 35334;

	t34 = (x177<((x178-x179)-x180));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x181 = 5LLU;
	int64_t x182 = -13306160871084LL;
	int16_t x184 = -1;
	volatile int32_t t35 = 4922280;

	t35 = (x181<((x182-x183)-x184));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x185 = UINT8_MAX;
	uint16_t x186 = UINT16_MAX;
	int32_t x187 = INT32_MAX;
	int64_t x188 = INT64_MIN;
	volatile int32_t t36 = -127;

	t36 = (x185<((x186-x187)-x188));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x189 = -1LL;
	uint16_t x190 = 4U;
	int8_t x191 = -1;

	t37 = (x189<((x190-x191)-x192));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x201 = 43LLU;
	int32_t x202 = -51716;
	static uint64_t x203 = 1LLU;
	volatile int32_t x204 = INT32_MAX;
	volatile int32_t t38 = -2031065;

	t38 = (x201<((x202-x203)-x204));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x205 = INT8_MIN;
	volatile int8_t x206 = -17;
	static int64_t x208 = 5647546LL;

	t39 = (x205<((x206-x207)-x208));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x213 = 13U;
	int32_t x214 = -1;
	uint8_t x215 = 0U;
	uint64_t x216 = UINT64_MAX;
	volatile int32_t t40 = -23140953;

	t40 = (x213<((x214-x215)-x216));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint64_t x217 = UINT64_MAX;
	volatile int16_t x218 = INT16_MIN;
	int16_t x219 = INT16_MIN;
	uint8_t x220 = 38U;
	volatile int32_t t41 = -3492;

	t41 = (x217<((x218-x219)-x220));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x221 = UINT64_MAX;
	uint64_t x222 = 35LLU;
	volatile int32_t x223 = -2160;
	uint32_t x224 = 170U;
	int32_t t42 = 3;

	t42 = (x221<((x222-x223)-x224));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x226 = UINT16_MAX;
	static uint32_t x227 = UINT32_MAX;
	uint32_t x228 = 172U;

	t43 = (x225<((x226-x227)-x228));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x231 = 3064U;
	int8_t x232 = 0;
	int32_t t44 = -52532;

	t44 = (x229<((x230-x231)-x232));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x235 = UINT16_MAX;
	uint32_t x236 = UINT32_MAX;
	int32_t t45 = 17930454;

	t45 = (x233<((x234-x235)-x236));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x237 = 10U;
	uint32_t x239 = 659020U;
	uint32_t x240 = UINT32_MAX;
	volatile int32_t t46 = -242334;

	t46 = (x237<((x238-x239)-x240));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x241 = -1118939600599584053LL;
	static int16_t x242 = 890;
	volatile int32_t t47 = -418530;

	t47 = (x241<((x242-x243)-x244));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x257 = -1;
	uint64_t x258 = 167448LLU;
	int16_t x259 = -1;
	int32_t x260 = -8572;
	int32_t t48 = 1362;

	t48 = (x257<((x258-x259)-x260));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x261 = 15U;
	int64_t x262 = -1LL;
	static int16_t x263 = -441;
	static volatile uint16_t x264 = UINT16_MAX;
	volatile int32_t t49 = 10;

	t49 = (x261<((x262-x263)-x264));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x266 = -1;
	int8_t x268 = INT8_MAX;

	t50 = (x265<((x266-x267)-x268));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int8_t x270 = -58;
	volatile int64_t x272 = INT64_MIN;
	int32_t t51 = -16126;

	t51 = (x269<((x270-x271)-x272));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x274 = 1;
	static volatile uint32_t x275 = 63400U;
	int32_t x276 = -69344;
	int32_t t52 = -255041454;

	t52 = (x273<((x274-x275)-x276));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x278 = INT32_MIN;

	t53 = (x277<((x278-x279)-x280));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x285 = INT32_MAX;
	int64_t x286 = -1LL;
	int8_t x287 = -6;
	volatile int32_t t54 = -41157786;

	t54 = (x285<((x286-x287)-x288));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x293 = UINT8_MAX;
	int8_t x294 = -1;
	int32_t t55 = -74493589;

	t55 = (x293<((x294-x295)-x296));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x301 = UINT32_MAX;
	volatile int64_t x302 = 0LL;
	uint64_t x303 = 4816322790037153LLU;
	uint32_t x304 = 648U;
	volatile int32_t t56 = 0;

	t56 = (x301<((x302-x303)-x304));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x305 = 60U;
	int32_t x306 = INT32_MIN;
	int16_t x307 = INT16_MIN;
	uint16_t x308 = 10527U;
	volatile int32_t t57 = -9144728;

	t57 = (x305<((x306-x307)-x308));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int16_t x309 = INT16_MIN;
	uint8_t x310 = 39U;
	int32_t x311 = -1;
	int8_t x312 = INT8_MAX;

	t58 = (x309<((x310-x311)-x312));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x314 = 1184448U;
	volatile uint8_t x315 = 80U;
	int64_t x316 = 100997346417012362LL;
	volatile int32_t t59 = -1829;

	t59 = (x313<((x314-x315)-x316));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x317 = 1360;
	int16_t x318 = INT16_MAX;
	int16_t x320 = INT16_MAX;
	int32_t t60 = -240391864;

	t60 = (x317<((x318-x319)-x320));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x329 = -1;
	int16_t x330 = -86;
	int64_t x331 = INT64_MIN;
	uint16_t x332 = 4224U;

	t61 = (x329<((x330-x331)-x332));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x333 = 56U;
	uint64_t x334 = 67893750305114LLU;
	volatile int16_t x335 = INT16_MAX;
	int32_t t62 = -9;

	t62 = (x333<((x334-x335)-x336));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x337 = UINT16_MAX;
	int32_t x338 = INT32_MIN;
	int32_t x339 = -15053;
	int16_t x340 = -1;
	int32_t t63 = -7311;

	t63 = (x337<((x338-x339)-x340));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x349 = 1U;
	int8_t x351 = INT8_MIN;
	int64_t x352 = 1022091LL;
	volatile int32_t t64 = 5;

	t64 = (x349<((x350-x351)-x352));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x353 = -1;
	volatile int16_t x355 = -1785;
	volatile int32_t t65 = -298;

	t65 = (x353<((x354-x355)-x356));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x357 = INT64_MIN;
	uint32_t x358 = 371U;
	static int32_t x359 = INT32_MIN;
	uint16_t x360 = 215U;
	volatile int32_t t66 = 43;

	t66 = (x357<((x358-x359)-x360));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x362 = INT32_MIN;
	int8_t x363 = INT8_MIN;
	static int8_t x364 = INT8_MIN;
	int32_t t67 = 211865859;

	t67 = (x361<((x362-x363)-x364));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x369 = INT8_MAX;
	uint8_t x370 = 13U;
	volatile int64_t x372 = INT64_MAX;
	int32_t t68 = -26534;

	t68 = (x369<((x370-x371)-x372));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x373 = 1U;
	uint8_t x374 = 95U;
	volatile int16_t x376 = -1;
	int32_t t69 = 29583;

	t69 = (x373<((x374-x375)-x376));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x377 = 5573LLU;
	int32_t x378 = -1;
	static uint64_t x379 = 1988LLU;
	int8_t x380 = INT8_MAX;
	volatile int32_t t70 = 365;

	t70 = (x377<((x378-x379)-x380));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x381 = 102287U;
	uint32_t x382 = 43U;
	uint32_t x383 = 1009136556U;
	uint16_t x384 = 415U;
	volatile int32_t t71 = -165;

	t71 = (x381<((x382-x383)-x384));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x385 = UINT8_MAX;
	uint32_t x386 = 304233883U;
	static int32_t x388 = INT32_MIN;

	t72 = (x385<((x386-x387)-x388));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x389 = UINT64_MAX;
	int8_t x390 = -8;
	int8_t x391 = 1;
	int16_t x392 = INT16_MIN;
	volatile int32_t t73 = 882199;

	t73 = (x389<((x390-x391)-x392));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x393 = INT16_MAX;
	uint32_t x394 = 14U;
	int64_t x395 = 1746309370169LL;
	uint8_t x396 = 1U;
	volatile int32_t t74 = -1794149;

	t74 = (x393<((x394-x395)-x396));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x397 = UINT8_MAX;
	int16_t x398 = INT16_MIN;
	int16_t x399 = INT16_MIN;
	int16_t x400 = INT16_MIN;
	volatile int32_t t75 = 4158;

	t75 = (x397<((x398-x399)-x400));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x402 = -1LL;
	int64_t x404 = INT64_MIN;
	volatile int32_t t76 = -145756;

	t76 = (x401<((x402-x403)-x404));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x409 = 1686U;
	int8_t x410 = INT8_MAX;
	int8_t x411 = -14;
	int8_t x412 = -3;
	int32_t t77 = 25453;

	t77 = (x409<((x410-x411)-x412));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x413 = UINT8_MAX;
	static uint8_t x414 = 125U;
	uint16_t x415 = 2U;

	t78 = (x413<((x414-x415)-x416));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x417 = -2;
	volatile int8_t x418 = INT8_MIN;
	uint32_t x420 = 1074661U;
	int32_t t79 = -25;

	t79 = (x417<((x418-x419)-x420));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x421 = INT64_MAX;
	int8_t x423 = INT8_MAX;
	int64_t x424 = 1LL;
	volatile int32_t t80 = -167159;

	t80 = (x421<((x422-x423)-x424));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x429 = -822;
	int32_t x430 = 55403908;
	int32_t x431 = -1;
	int8_t x432 = 0;
	int32_t t81 = 214351;

	t81 = (x429<((x430-x431)-x432));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x433 = 17037U;
	int64_t x434 = INT64_MAX;
	int16_t x435 = 0;
	int32_t x436 = 52;
	volatile int32_t t82 = 4703;

	t82 = (x433<((x434-x435)-x436));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x437 = 4;
	int32_t x439 = INT32_MIN;
	volatile int32_t t83 = 3565733;

	t83 = (x437<((x438-x439)-x440));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x442 = INT64_MIN;
	uint64_t x443 = UINT64_MAX;
	uint16_t x444 = 1478U;

	t84 = (x441<((x442-x443)-x444));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x445 = INT8_MIN;
	int16_t x446 = INT16_MIN;
	uint32_t x447 = UINT32_MAX;
	int8_t x448 = INT8_MAX;
	static volatile int32_t t85 = -123;

	t85 = (x445<((x446-x447)-x448));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x454 = -709667LL;
	volatile uint64_t x455 = 125LLU;
	uint8_t x456 = 1U;
	int32_t t86 = -895852059;

	t86 = (x453<((x454-x455)-x456));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x465 = INT64_MIN;
	static int8_t x466 = INT8_MIN;
	int8_t x467 = -31;
	int32_t x468 = INT32_MIN;
	volatile int32_t t87 = -56320;

	t87 = (x465<((x466-x467)-x468));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x473 = INT8_MAX;
	uint32_t x474 = UINT32_MAX;
	static uint16_t x476 = 14673U;
	volatile int32_t t88 = 52486357;

	t88 = (x473<((x474-x475)-x476));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x478 = INT32_MIN;
	int16_t x479 = -55;
	uint16_t x480 = 29U;
	int32_t t89 = 392362;

	t89 = (x477<((x478-x479)-x480));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x485 = UINT64_MAX;
	int8_t x487 = 0;
	uint32_t x488 = 13971U;
	int32_t t90 = -97475;

	t90 = (x485<((x486-x487)-x488));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x489 = 0;
	uint8_t x490 = 28U;
	static volatile uint32_t x491 = 5339058U;
	int8_t x492 = -3;
	int32_t t91 = 101;

	t91 = (x489<((x490-x491)-x492));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x494 = INT32_MIN;
	int16_t x495 = INT16_MIN;
	static int32_t t92 = 4570917;

	t92 = (x493<((x494-x495)-x496));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x497 = 1270;
	int16_t x498 = INT16_MAX;
	uint32_t x499 = UINT32_MAX;
	volatile int32_t t93 = 5141;

	t93 = (x497<((x498-x499)-x500));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x501 = 688;
	int8_t x502 = INT8_MIN;
	uint64_t x503 = 107260177457LLU;
	int16_t x504 = -1;
	static volatile int32_t t94 = -2574782;

	t94 = (x501<((x502-x503)-x504));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x506 = 1971090U;
	static volatile int8_t x507 = -1;
	int8_t x508 = 0;
	static int32_t t95 = -15;

	t95 = (x505<((x506-x507)-x508));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x509 = -1;
	uint16_t x510 = UINT16_MAX;
	int8_t x511 = -14;
	int64_t x512 = 361892LL;

	t96 = (x509<((x510-x511)-x512));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x513 = INT64_MAX;
	int64_t x514 = INT64_MIN;
	int64_t x515 = INT64_MIN;
	static int8_t x516 = -1;
	int32_t t97 = -1;

	t97 = (x513<((x514-x515)-x516));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x521 = INT8_MIN;
	volatile uint32_t x524 = UINT32_MAX;

	t98 = (x521<((x522-x523)-x524));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int16_t x525 = -1;
	uint32_t x526 = 1744U;
	uint64_t x527 = 472675LLU;
	int16_t x528 = INT16_MIN;
	static int32_t t99 = 257175;

	t99 = (x525<((x526-x527)-x528));

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

