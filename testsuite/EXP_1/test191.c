#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x12 = INT32_MIN;
int32_t t2 = 1;
int64_t x20 = INT64_MIN;
static uint8_t x31 = UINT8_MAX;
int32_t x32 = INT32_MAX;
static int16_t x57 = INT16_MAX;
uint16_t x59 = UINT16_MAX;
uint8_t x64 = 0U;
int16_t x79 = -1;
int64_t x80 = INT64_MAX;
static int8_t x84 = INT8_MIN;
int8_t x89 = -29;
static int8_t x94 = -1;
volatile int64_t x100 = -1LL;
int32_t x102 = -155;
int32_t t22 = 689;
volatile int32_t x105 = 149;
int32_t x107 = INT32_MAX;
int16_t x117 = -1;
int64_t x118 = 91917986649348LL;
int16_t x122 = -28;
volatile int64_t x127 = INT64_MIN;
int16_t x128 = -1;
uint32_t x138 = 4171U;
int32_t x152 = INT32_MIN;
static volatile int32_t x154 = INT32_MIN;
int8_t x157 = INT8_MIN;
volatile int32_t t32 = -4040;
int8_t x167 = INT8_MIN;
int16_t x168 = INT16_MAX;
uint64_t x171 = 2044196499364LLU;
volatile int8_t x178 = INT8_MAX;
int8_t x179 = 4;
uint16_t x181 = UINT16_MAX;
uint16_t x182 = 9988U;
static int32_t t36 = -248344;
volatile int64_t x189 = INT64_MIN;
uint16_t x192 = 9988U;
int64_t x197 = INT64_MAX;
static uint16_t x199 = 1U;
volatile uint64_t x203 = 10948LLU;
int16_t x217 = -31;
int16_t x233 = INT16_MAX;
static int64_t x240 = -1LL;
int64_t x252 = 40673LL;
static int16_t x254 = INT16_MIN;
int32_t x255 = INT32_MAX;
volatile int8_t x256 = INT8_MIN;
int8_t x259 = 1;
static int64_t x260 = 296756245834LL;
volatile int64_t x285 = -1LL;
int16_t x288 = -643;
static volatile int32_t t58 = -87;
static volatile int32_t t59 = 98;
uint64_t x309 = 213217233035522LLU;
static int32_t x318 = -1;
int64_t x327 = -1LL;
int64_t x335 = -568307041913529LL;
int8_t x336 = 1;
uint8_t x338 = 22U;
uint64_t x354 = UINT64_MAX;
int8_t x358 = INT8_MIN;
static int8_t x363 = -23;
int16_t x370 = -1;
uint16_t x372 = 18U;
static volatile int64_t x380 = 559032018049020LL;
uint16_t x381 = 315U;
int32_t t81 = 1569;
volatile int64_t x388 = INT64_MAX;
uint64_t x394 = 7122LLU;
uint8_t x402 = 2U;
uint16_t x405 = UINT16_MAX;
volatile int16_t x419 = INT16_MIN;
uint64_t x429 = 195916311283735LLU;
int16_t x442 = 0;
static int8_t x444 = INT8_MIN;
volatile int32_t t95 = -1413;
static uint16_t x458 = UINT16_MAX;
int8_t x462 = INT8_MAX;
static uint64_t x463 = 62732716289LLU;
int32_t t97 = -932206;
uint32_t x465 = 4669U;
uint8_t x468 = 26U;
static volatile int32_t t98 = -19;
volatile int16_t x471 = INT16_MIN;


void f0(void) {
	static uint32_t x1 = 26523U;
	volatile int32_t x2 = INT32_MAX;
	volatile int8_t x3 = INT8_MAX;
	int8_t x4 = INT8_MIN;
	volatile int32_t t0 = -41649;

	t0 = (((x1-x2)-x3)<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = 11648;
	int32_t x6 = 153123;
	int16_t x7 = -426;
	int8_t x8 = INT8_MAX;
	volatile int32_t t1 = 1437424;

	t1 = (((x5-x6)-x7)<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = -2;
	static uint16_t x10 = 251U;
	int16_t x11 = INT16_MIN;

	t2 = (((x9-x10)-x11)<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	int16_t x14 = INT16_MIN;
	static volatile uint32_t x15 = 5700U;
	static int32_t x16 = 1;
	volatile int32_t t3 = 482;

	t3 = (((x13-x14)-x15)<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = -22709833879613034LL;
	int32_t x18 = -1;
	volatile int64_t x19 = INT64_MIN;
	int32_t t4 = -395331373;

	t4 = (((x17-x18)-x19)<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = -563800;
	int8_t x22 = 0;
	static int32_t x23 = 246488;
	int32_t x24 = -1;
	int32_t t5 = -10015;

	t5 = (((x21-x22)-x23)<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x29 = 966U;
	int8_t x30 = INT8_MIN;
	static volatile int32_t t6 = 247;

	t6 = (((x29-x30)-x31)<x32);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int64_t x33 = -1LL;
	uint32_t x34 = UINT32_MAX;
	static int8_t x35 = INT8_MAX;
	uint8_t x36 = UINT8_MAX;
	int32_t t7 = 470971;

	t7 = (((x33-x34)-x35)<x36);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x37 = 1LLU;
	int8_t x38 = INT8_MIN;
	int16_t x39 = -1;
	volatile uint8_t x40 = UINT8_MAX;
	int32_t t8 = -21530068;

	t8 = (((x37-x38)-x39)<x40);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x41 = 13U;
	int16_t x42 = -1;
	volatile uint64_t x43 = UINT64_MAX;
	volatile int8_t x44 = INT8_MAX;
	int32_t t9 = 1;

	t9 = (((x41-x42)-x43)<x44);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x45 = -1;
	static int32_t x46 = INT32_MAX;
	uint64_t x47 = UINT64_MAX;
	int64_t x48 = INT64_MIN;
	static int32_t t10 = 65492020;

	t10 = (((x45-x46)-x47)<x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = INT8_MIN;
	volatile uint32_t x50 = 1U;
	static int16_t x51 = 2;
	int16_t x52 = -1;
	volatile int32_t t11 = 1;

	t11 = (((x49-x50)-x51)<x52);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x58 = 21;
	volatile int16_t x60 = INT16_MIN;
	int32_t t12 = -14286;

	t12 = (((x57-x58)-x59)<x60);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x61 = -1;
	uint16_t x62 = 14U;
	uint16_t x63 = UINT16_MAX;
	volatile int32_t t13 = -18024124;

	t13 = (((x61-x62)-x63)<x64);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint32_t x65 = 80177U;
	int16_t x66 = 3881;
	volatile int16_t x67 = -1;
	static uint16_t x68 = 6U;
	volatile int32_t t14 = -1994;

	t14 = (((x65-x66)-x67)<x68);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x73 = INT64_MIN;
	int32_t x74 = INT32_MIN;
	int32_t x75 = -118489660;
	uint64_t x76 = 2LLU;
	volatile int32_t t15 = -14672629;

	t15 = (((x73-x74)-x75)<x76);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x77 = UINT8_MAX;
	static int16_t x78 = 4;
	volatile int32_t t16 = 495484;

	t16 = (((x77-x78)-x79)<x80);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x81 = 589U;
	static volatile int8_t x82 = -1;
	int8_t x83 = INT8_MIN;
	static int32_t t17 = -2181;

	t17 = (((x81-x82)-x83)<x84);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x85 = -1;
	volatile int16_t x86 = 52;
	volatile int64_t x87 = INT64_MIN;
	int8_t x88 = INT8_MIN;
	int32_t t18 = 2033449;

	t18 = (((x85-x86)-x87)<x88);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x90 = 11U;
	volatile int16_t x91 = -1;
	int8_t x92 = 27;
	volatile int32_t t19 = -173046;

	t19 = (((x89-x90)-x91)<x92);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x93 = 12;
	int64_t x95 = INT64_MAX;
	static int64_t x96 = INT64_MIN;
	static volatile int32_t t20 = -326503331;

	t20 = (((x93-x94)-x95)<x96);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x97 = -459615552944LL;
	uint64_t x98 = 27941172790LLU;
	static uint64_t x99 = 20660997734LLU;
	volatile int32_t t21 = -797711;

	t21 = (((x97-x98)-x99)<x100);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x101 = INT8_MAX;
	uint64_t x103 = 108818596163LLU;
	int8_t x104 = INT8_MIN;

	t22 = (((x101-x102)-x103)<x104);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x106 = -1LL;
	volatile int32_t x108 = 24402;
	volatile int32_t t23 = 15;

	t23 = (((x105-x106)-x107)<x108);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x109 = INT16_MIN;
	int32_t x110 = -881224569;
	volatile int64_t x111 = -422203801353373LL;
	int16_t x112 = INT16_MAX;
	volatile int32_t t24 = -203904373;

	t24 = (((x109-x110)-x111)<x112);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x119 = -1;
	static volatile int8_t x120 = INT8_MAX;
	volatile int32_t t25 = -116287613;

	t25 = (((x117-x118)-x119)<x120);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x121 = INT32_MIN;
	int8_t x123 = -1;
	volatile uint64_t x124 = 410552LLU;
	int32_t t26 = -2985030;

	t26 = (((x121-x122)-x123)<x124);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x125 = -438573LL;
	int32_t x126 = INT32_MAX;
	volatile int32_t t27 = -71956652;

	t27 = (((x125-x126)-x127)<x128);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x133 = INT16_MAX;
	volatile int64_t x134 = -10668724648LL;
	static int32_t x135 = INT32_MIN;
	volatile int32_t x136 = -378414425;
	volatile int32_t t28 = 3612;

	t28 = (((x133-x134)-x135)<x136);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x137 = 13;
	int16_t x139 = -2495;
	uint16_t x140 = 3863U;
	volatile int32_t t29 = -4678;

	t29 = (((x137-x138)-x139)<x140);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x149 = INT16_MAX;
	volatile uint8_t x150 = 2U;
	static int8_t x151 = INT8_MAX;
	static int32_t t30 = 10;

	t30 = (((x149-x150)-x151)<x152);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x153 = -3306206LL;
	static int64_t x155 = -115186LL;
	int64_t x156 = -1LL;
	int32_t t31 = 2;

	t31 = (((x153-x154)-x155)<x156);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x158 = INT16_MIN;
	int32_t x159 = -1;
	uint32_t x160 = 370433U;

	t32 = (((x157-x158)-x159)<x160);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x165 = UINT32_MAX;
	uint32_t x166 = UINT32_MAX;
	int32_t t33 = -317916;

	t33 = (((x165-x166)-x167)<x168);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x169 = UINT32_MAX;
	int8_t x170 = -13;
	uint8_t x172 = 7U;
	volatile int32_t t34 = -1;

	t34 = (((x169-x170)-x171)<x172);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint16_t x177 = UINT16_MAX;
	uint8_t x180 = 2U;
	static volatile int32_t t35 = 223794750;

	t35 = (((x177-x178)-x179)<x180);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x183 = -1LL;
	static volatile uint16_t x184 = 493U;

	t36 = (((x181-x182)-x183)<x184);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x185 = INT32_MIN;
	volatile int8_t x186 = -1;
	static int64_t x187 = INT64_MIN;
	int32_t x188 = INT32_MAX;
	int32_t t37 = 56222691;

	t37 = (((x185-x186)-x187)<x188);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x190 = INT16_MIN;
	static volatile uint8_t x191 = 57U;
	volatile int32_t t38 = 1;

	t38 = (((x189-x190)-x191)<x192);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x193 = INT16_MIN;
	int16_t x194 = -1;
	volatile int64_t x195 = 7052674131310LL;
	uint16_t x196 = 734U;
	int32_t t39 = -26118443;

	t39 = (((x193-x194)-x195)<x196);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x198 = 6545995773597LL;
	int16_t x200 = -1;
	int32_t t40 = -827096178;

	t40 = (((x197-x198)-x199)<x200);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x201 = INT16_MIN;
	uint64_t x202 = UINT64_MAX;
	static uint32_t x204 = 472U;
	static int32_t t41 = -34815;

	t41 = (((x201-x202)-x203)<x204);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x205 = INT16_MAX;
	uint32_t x206 = 418847954U;
	int32_t x207 = INT32_MIN;
	uint32_t x208 = 41774U;
	volatile int32_t t42 = 6886;

	t42 = (((x205-x206)-x207)<x208);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x209 = UINT16_MAX;
	uint64_t x210 = 41183148627009509LLU;
	volatile uint32_t x211 = 241U;
	static int32_t x212 = INT32_MIN;
	int32_t t43 = -61;

	t43 = (((x209-x210)-x211)<x212);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x213 = INT16_MAX;
	int16_t x214 = INT16_MAX;
	int16_t x215 = -79;
	int16_t x216 = -24;
	volatile int32_t t44 = -8587;

	t44 = (((x213-x214)-x215)<x216);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x218 = 134U;
	volatile uint32_t x219 = UINT32_MAX;
	uint16_t x220 = UINT16_MAX;
	static int32_t t45 = 88;

	t45 = (((x217-x218)-x219)<x220);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x234 = INT64_MAX;
	int32_t x235 = -1;
	int8_t x236 = INT8_MIN;
	volatile int32_t t46 = 57070365;

	t46 = (((x233-x234)-x235)<x236);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x237 = -1;
	int8_t x238 = -1;
	uint64_t x239 = UINT64_MAX;
	static int32_t t47 = 2900156;

	t47 = (((x237-x238)-x239)<x240);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x241 = -1;
	int8_t x242 = -1;
	int16_t x243 = INT16_MIN;
	uint16_t x244 = 13U;
	int32_t t48 = 474946563;

	t48 = (((x241-x242)-x243)<x244);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x245 = 3U;
	volatile uint64_t x246 = 87434LLU;
	volatile int64_t x247 = -1LL;
	int16_t x248 = INT16_MIN;
	int32_t t49 = 36004;

	t49 = (((x245-x246)-x247)<x248);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x249 = INT64_MIN;
	int32_t x250 = INT32_MIN;
	int64_t x251 = INT64_MIN;
	volatile int32_t t50 = 1498280;

	t50 = (((x249-x250)-x251)<x252);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x253 = UINT16_MAX;
	volatile int32_t t51 = 1576137;

	t51 = (((x253-x254)-x255)<x256);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x257 = 1743952838861923824LLU;
	int8_t x258 = -1;
	volatile int32_t t52 = 3079;

	t52 = (((x257-x258)-x259)<x260);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x261 = UINT16_MAX;
	uint32_t x262 = UINT32_MAX;
	volatile int32_t x263 = -1;
	int16_t x264 = INT16_MIN;
	int32_t t53 = 96;

	t53 = (((x261-x262)-x263)<x264);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x269 = -1;
	uint8_t x270 = 31U;
	int32_t x271 = -1;
	static uint8_t x272 = 8U;
	int32_t t54 = 6758;

	t54 = (((x269-x270)-x271)<x272);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int16_t x273 = 3;
	int16_t x274 = 1;
	int32_t x275 = -1;
	static int8_t x276 = -1;
	volatile int32_t t55 = -871781015;

	t55 = (((x273-x274)-x275)<x276);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x277 = -1;
	static uint32_t x278 = 124245U;
	int8_t x279 = 1;
	int32_t x280 = INT32_MIN;
	int32_t t56 = -288;

	t56 = (((x277-x278)-x279)<x280);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x281 = 1U;
	int8_t x282 = -1;
	static int32_t x283 = INT32_MIN;
	volatile int8_t x284 = INT8_MIN;
	int32_t t57 = 680;

	t57 = (((x281-x282)-x283)<x284);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x286 = INT64_MIN;
	uint32_t x287 = UINT32_MAX;

	t58 = (((x285-x286)-x287)<x288);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x289 = UINT16_MAX;
	uint16_t x290 = 23U;
	int16_t x291 = 7415;
	int8_t x292 = INT8_MIN;

	t59 = (((x289-x290)-x291)<x292);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x293 = 12U;
	volatile int16_t x294 = INT16_MIN;
	static volatile uint32_t x295 = 5695181U;
	int64_t x296 = 11033262714809686LL;
	int32_t t60 = -120;

	t60 = (((x293-x294)-x295)<x296);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int64_t x297 = -6LL;
	uint16_t x298 = UINT16_MAX;
	volatile uint8_t x299 = UINT8_MAX;
	int8_t x300 = -1;
	volatile int32_t t61 = -977;

	t61 = (((x297-x298)-x299)<x300);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x305 = INT32_MIN;
	static uint64_t x306 = 1639LLU;
	volatile int64_t x307 = INT64_MAX;
	static uint8_t x308 = UINT8_MAX;
	int32_t t62 = 120557355;

	t62 = (((x305-x306)-x307)<x308);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x310 = INT32_MIN;
	uint64_t x311 = UINT64_MAX;
	static int8_t x312 = -1;
	volatile int32_t t63 = 31;

	t63 = (((x309-x310)-x311)<x312);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x313 = INT8_MIN;
	static int16_t x314 = INT16_MAX;
	int64_t x315 = -85894745013LL;
	uint8_t x316 = UINT8_MAX;
	volatile int32_t t64 = -89;

	t64 = (((x313-x314)-x315)<x316);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x317 = INT16_MIN;
	uint32_t x319 = 100128U;
	int16_t x320 = INT16_MIN;
	volatile int32_t t65 = -12;

	t65 = (((x317-x318)-x319)<x320);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int8_t x321 = INT8_MIN;
	volatile int16_t x322 = INT16_MIN;
	volatile uint16_t x323 = 855U;
	volatile uint8_t x324 = UINT8_MAX;
	static volatile int32_t t66 = 141853134;

	t66 = (((x321-x322)-x323)<x324);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x325 = INT16_MIN;
	static uint8_t x326 = UINT8_MAX;
	int16_t x328 = INT16_MIN;
	volatile int32_t t67 = 23466231;

	t67 = (((x325-x326)-x327)<x328);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x329 = 5;
	static uint16_t x330 = 64U;
	volatile int32_t x331 = -1;
	volatile int64_t x332 = -1LL;
	volatile int32_t t68 = 18;

	t68 = (((x329-x330)-x331)<x332);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x333 = INT16_MIN;
	volatile uint8_t x334 = 1U;
	static volatile int32_t t69 = -217;

	t69 = (((x333-x334)-x335)<x336);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x337 = -1;
	uint8_t x339 = 28U;
	int8_t x340 = INT8_MIN;
	volatile int32_t t70 = 6090390;

	t70 = (((x337-x338)-x339)<x340);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x341 = UINT32_MAX;
	static int32_t x342 = INT32_MIN;
	int16_t x343 = -56;
	int8_t x344 = -1;
	volatile int32_t t71 = 12007130;

	t71 = (((x341-x342)-x343)<x344);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x345 = -1;
	volatile int8_t x346 = INT8_MIN;
	volatile int32_t x347 = -1;
	uint64_t x348 = UINT64_MAX;
	int32_t t72 = -14384833;

	t72 = (((x345-x346)-x347)<x348);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x349 = INT8_MIN;
	uint8_t x350 = 1U;
	int8_t x351 = INT8_MIN;
	uint16_t x352 = UINT16_MAX;
	int32_t t73 = 1;

	t73 = (((x349-x350)-x351)<x352);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x353 = -2;
	uint8_t x355 = 9U;
	uint8_t x356 = 2U;
	volatile int32_t t74 = -386929452;

	t74 = (((x353-x354)-x355)<x356);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x357 = INT64_MIN;
	static int16_t x359 = -244;
	volatile uint16_t x360 = 0U;
	volatile int32_t t75 = 333511538;

	t75 = (((x357-x358)-x359)<x360);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x361 = -1;
	int16_t x362 = INT16_MAX;
	int64_t x364 = INT64_MIN;
	int32_t t76 = -8770888;

	t76 = (((x361-x362)-x363)<x364);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x365 = -1LL;
	int16_t x366 = INT16_MIN;
	int16_t x367 = -1;
	int8_t x368 = INT8_MIN;
	volatile int32_t t77 = 28;

	t77 = (((x365-x366)-x367)<x368);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x369 = INT8_MIN;
	int16_t x371 = INT16_MIN;
	int32_t t78 = 261955;

	t78 = (((x369-x370)-x371)<x372);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x373 = 4;
	int16_t x374 = 23;
	volatile int32_t x375 = -1;
	int16_t x376 = INT16_MIN;
	volatile int32_t t79 = 223822;

	t79 = (((x373-x374)-x375)<x376);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x377 = UINT16_MAX;
	static int16_t x378 = INT16_MIN;
	int64_t x379 = -1LL;
	volatile int32_t t80 = 2066364;

	t80 = (((x377-x378)-x379)<x380);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x382 = 1U;
	uint16_t x383 = 1337U;
	int32_t x384 = INT32_MIN;

	t81 = (((x381-x382)-x383)<x384);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x385 = INT8_MIN;
	static int64_t x386 = INT64_MIN;
	static uint16_t x387 = UINT16_MAX;
	volatile int32_t t82 = 0;

	t82 = (((x385-x386)-x387)<x388);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x389 = -23502LL;
	int8_t x390 = INT8_MIN;
	int8_t x391 = INT8_MIN;
	int8_t x392 = 0;
	volatile int32_t t83 = -1;

	t83 = (((x389-x390)-x391)<x392);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x393 = UINT8_MAX;
	uint64_t x395 = UINT64_MAX;
	static volatile uint32_t x396 = 1850042362U;
	int32_t t84 = 7130906;

	t84 = (((x393-x394)-x395)<x396);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x397 = 196U;
	int16_t x398 = INT16_MAX;
	int64_t x399 = -1LL;
	int16_t x400 = INT16_MIN;
	volatile int32_t t85 = -219043171;

	t85 = (((x397-x398)-x399)<x400);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x401 = -57561LL;
	uint8_t x403 = UINT8_MAX;
	int8_t x404 = INT8_MIN;
	int32_t t86 = 7;

	t86 = (((x401-x402)-x403)<x404);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x406 = 41;
	uint64_t x407 = 87560842914LLU;
	static volatile uint8_t x408 = 12U;
	int32_t t87 = 8241947;

	t87 = (((x405-x406)-x407)<x408);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x409 = INT8_MIN;
	int64_t x410 = INT64_MIN;
	uint32_t x411 = 8809U;
	int8_t x412 = INT8_MAX;
	volatile int32_t t88 = 229941969;

	t88 = (((x409-x410)-x411)<x412);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x413 = 47;
	uint64_t x414 = 1386626048586LLU;
	volatile int16_t x415 = INT16_MIN;
	int16_t x416 = -1;
	volatile int32_t t89 = 0;

	t89 = (((x413-x414)-x415)<x416);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x417 = -1LL;
	int64_t x418 = INT64_MAX;
	int32_t x420 = INT32_MAX;
	int32_t t90 = 234;

	t90 = (((x417-x418)-x419)<x420);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x421 = 15U;
	uint8_t x422 = UINT8_MAX;
	volatile uint8_t x423 = 28U;
	int64_t x424 = INT64_MAX;
	static int32_t t91 = 2110;

	t91 = (((x421-x422)-x423)<x424);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x425 = -1LL;
	volatile int8_t x426 = -3;
	int64_t x427 = INT64_MAX;
	int16_t x428 = INT16_MAX;
	int32_t t92 = 100;

	t92 = (((x425-x426)-x427)<x428);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x430 = -1;
	int32_t x431 = INT32_MIN;
	int16_t x432 = INT16_MAX;
	volatile int32_t t93 = 73657375;

	t93 = (((x429-x430)-x431)<x432);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x433 = 3758761711430LL;
	int16_t x434 = INT16_MIN;
	uint8_t x435 = 9U;
	int8_t x436 = -9;
	volatile int32_t t94 = -270235;

	t94 = (((x433-x434)-x435)<x436);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x441 = 47592512774426065LLU;
	static volatile int32_t x443 = -5253;

	t95 = (((x441-x442)-x443)<x444);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x457 = -1LL;
	int8_t x459 = -1;
	static int16_t x460 = -15;
	int32_t t96 = 11902;

	t96 = (((x457-x458)-x459)<x460);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x461 = 479464977U;
	volatile int64_t x464 = INT64_MIN;

	t97 = (((x461-x462)-x463)<x464);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x466 = INT8_MAX;
	int16_t x467 = -5975;

	t98 = (((x465-x466)-x467)<x468);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x469 = INT8_MIN;
	int16_t x470 = -4546;
	static int16_t x472 = INT16_MIN;
	volatile int32_t t99 = 20;

	t99 = (((x469-x470)-x471)<x472);

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

