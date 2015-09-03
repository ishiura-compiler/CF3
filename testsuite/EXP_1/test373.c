#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x10 = -1;
int16_t x18 = INT16_MIN;
int8_t x19 = INT8_MAX;
volatile int16_t x21 = 1229;
uint32_t x24 = 1123802944U;
static volatile uint64_t x27 = 82943600091LLU;
static int8_t x42 = -1;
volatile uint64_t x76 = UINT64_MAX;
static int32_t t10 = 144;
volatile int8_t x85 = INT8_MIN;
uint64_t x91 = 74507647397087701LLU;
uint16_t x102 = 55U;
volatile int32_t t14 = -149693;
volatile int32_t t16 = -1612444;
uint8_t x118 = 2U;
int8_t x124 = INT8_MIN;
int32_t t18 = -227;
uint16_t x133 = 129U;
int8_t x135 = INT8_MIN;
uint8_t x138 = 85U;
int32_t x140 = INT32_MIN;
static int8_t x146 = -1;
int16_t x148 = INT16_MIN;
volatile int32_t t22 = 30480416;
volatile int64_t x165 = -1LL;
int8_t x166 = INT8_MAX;
static int32_t t23 = 271;
int8_t x175 = -1;
volatile int64_t x196 = -1LL;
volatile int32_t t29 = 0;
volatile uint64_t x201 = 7298429918LLU;
volatile int32_t t32 = -111793502;
uint8_t x216 = UINT8_MAX;
static int16_t x217 = -1;
int16_t x233 = -1;
static volatile int8_t x239 = INT8_MIN;
int64_t x249 = -1LL;
int32_t x250 = INT32_MAX;
uint8_t x255 = 36U;
volatile int8_t x260 = 2;
int16_t x262 = INT16_MIN;
volatile int16_t x269 = INT16_MAX;
int32_t x286 = -1;
static int32_t t44 = -159256;
static int64_t x296 = INT64_MIN;
uint8_t x300 = UINT8_MAX;
uint16_t x301 = 1416U;
static int8_t x302 = INT8_MIN;
volatile int16_t x303 = -1;
uint8_t x305 = UINT8_MAX;
int32_t t53 = -8193465;
int8_t x342 = -1;
int64_t x352 = -2343484LL;
volatile int64_t x378 = 624LL;
volatile int32_t t57 = 13474786;
uint64_t x381 = 31804983LLU;
static volatile uint32_t x384 = 51268136U;
volatile uint64_t x393 = 1856480840107363956LLU;
uint64_t x396 = UINT64_MAX;
int8_t x404 = -5;
int32_t t62 = 214;
static volatile int32_t x409 = 13519;
uint64_t x412 = UINT64_MAX;
volatile int16_t x423 = -1634;
static int64_t x435 = INT64_MIN;
volatile int32_t x437 = INT32_MAX;
volatile uint8_t x440 = 2U;
uint16_t x463 = UINT16_MAX;
uint64_t x464 = 2121039073LLU;
volatile int32_t t70 = 0;
int8_t x466 = -1;
volatile int8_t x470 = INT8_MAX;
int16_t x482 = INT16_MIN;
volatile uint64_t x495 = 102068716565627LLU;
int8_t x499 = INT8_MIN;
uint16_t x500 = UINT16_MAX;
volatile int32_t t76 = -2;
uint64_t x502 = 122LLU;
volatile int32_t t77 = -1;
uint32_t x512 = UINT32_MAX;
int8_t x513 = INT8_MIN;
int64_t x514 = -1LL;
volatile int8_t x515 = -1;
static int8_t x522 = INT8_MIN;
int8_t x523 = INT8_MIN;
static int32_t x531 = -1;
static volatile int32_t t82 = 15807489;
static int64_t x533 = -1LL;
int8_t x534 = INT8_MIN;
int32_t x536 = -1;
static volatile int32_t t85 = 5;
volatile uint32_t x560 = UINT32_MAX;
int32_t t87 = -720;
int8_t x563 = INT8_MIN;
volatile int32_t t88 = -18616;
uint64_t x574 = UINT64_MAX;
static int8_t x583 = 2;
static volatile int32_t t90 = -15;
int16_t x588 = -120;
int32_t t91 = -23;
volatile int32_t t94 = 4814585;
volatile uint8_t x613 = UINT8_MAX;
int32_t t97 = 16153784;
int16_t x633 = -1;
uint64_t x635 = UINT64_MAX;


void f0(void) {
	int8_t x9 = INT8_MIN;
	int8_t x11 = 11;
	int8_t x12 = INT8_MAX;
	volatile int32_t t0 = 13695066;

	t0 = (((x9*x10)*x11)<x12);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x13 = UINT64_MAX;
	int64_t x14 = -133465177041636652LL;
	int64_t x15 = INT64_MAX;
	uint32_t x16 = 515U;
	volatile int32_t t1 = 195890612;

	t1 = (((x13*x14)*x15)<x16);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x17 = -1;
	int16_t x20 = -4297;
	int32_t t2 = 18999025;

	t2 = (((x17*x18)*x19)<x20);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint32_t x22 = UINT32_MAX;
	volatile int8_t x23 = INT8_MIN;
	volatile int32_t t3 = -1740;

	t3 = (((x21*x22)*x23)<x24);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x25 = 5U;
	static uint32_t x26 = UINT32_MAX;
	uint16_t x28 = 5501U;
	int32_t t4 = 163720675;

	t4 = (((x25*x26)*x27)<x28);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x29 = UINT16_MAX;
	static int8_t x30 = -1;
	volatile int16_t x31 = INT16_MAX;
	static int64_t x32 = -1LL;
	int32_t t5 = 383;

	t5 = (((x29*x30)*x31)<x32);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x41 = 95697U;
	uint16_t x43 = 1116U;
	static int32_t x44 = INT32_MIN;
	int32_t t6 = -1;

	t6 = (((x41*x42)*x43)<x44);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x49 = -349;
	int16_t x50 = INT16_MAX;
	static uint8_t x51 = 5U;
	uint64_t x52 = 174084797836LLU;
	static volatile int32_t t7 = 502;

	t7 = (((x49*x50)*x51)<x52);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x65 = INT8_MIN;
	int8_t x66 = INT8_MAX;
	uint64_t x67 = 707008565LLU;
	int16_t x68 = INT16_MAX;
	int32_t t8 = 40816;

	t8 = (((x65*x66)*x67)<x68);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x73 = 14;
	static volatile uint16_t x74 = 2U;
	uint64_t x75 = UINT64_MAX;
	static int32_t t9 = -3;

	t9 = (((x73*x74)*x75)<x76);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x81 = 5033011702003447LLU;
	int32_t x82 = 56;
	int8_t x83 = 0;
	int32_t x84 = -16775;

	t10 = (((x81*x82)*x83)<x84);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x86 = -1LL;
	static int16_t x87 = -1;
	int64_t x88 = INT64_MIN;
	volatile int32_t t11 = 195493521;

	t11 = (((x85*x86)*x87)<x88);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x89 = -4522;
	int8_t x90 = INT8_MIN;
	static int8_t x92 = INT8_MIN;
	int32_t t12 = 0;

	t12 = (((x89*x90)*x91)<x92);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x101 = 19;
	int64_t x103 = -1LL;
	static volatile int8_t x104 = 1;
	volatile int32_t t13 = -607;

	t13 = (((x101*x102)*x103)<x104);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x105 = INT16_MIN;
	int64_t x106 = -1LL;
	int8_t x107 = INT8_MIN;
	int8_t x108 = INT8_MAX;

	t14 = (((x105*x106)*x107)<x108);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x109 = 30153U;
	int16_t x110 = 0;
	int16_t x111 = INT16_MIN;
	volatile int8_t x112 = -1;
	volatile int32_t t15 = 1501023;

	t15 = (((x109*x110)*x111)<x112);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x113 = 2085878U;
	int32_t x114 = 125421585;
	int8_t x115 = INT8_MIN;
	uint16_t x116 = 20608U;

	t16 = (((x113*x114)*x115)<x116);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x117 = 215U;
	int32_t x119 = -1;
	volatile int8_t x120 = INT8_MIN;
	int32_t t17 = 80001229;

	t17 = (((x117*x118)*x119)<x120);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int16_t x121 = 0;
	volatile uint64_t x122 = 4073417642434578LLU;
	int32_t x123 = 1;

	t18 = (((x121*x122)*x123)<x124);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x134 = 10714;
	volatile int32_t x136 = INT32_MAX;
	volatile int32_t t19 = 7362;

	t19 = (((x133*x134)*x135)<x136);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x137 = -1LL;
	static int16_t x139 = 1023;
	int32_t t20 = -48243484;

	t20 = (((x137*x138)*x139)<x140);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint32_t x145 = 20423025U;
	int8_t x147 = INT8_MIN;
	volatile int32_t t21 = -2;

	t21 = (((x145*x146)*x147)<x148);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x149 = 0U;
	uint64_t x150 = 20821842LLU;
	volatile int32_t x151 = INT32_MIN;
	int8_t x152 = -41;

	t22 = (((x149*x150)*x151)<x152);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint32_t x167 = 130884707U;
	volatile int8_t x168 = 1;

	t23 = (((x165*x166)*x167)<x168);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x169 = 7U;
	volatile int64_t x170 = 23283345081910LL;
	uint64_t x171 = UINT64_MAX;
	static uint16_t x172 = UINT16_MAX;
	int32_t t24 = -13165184;

	t24 = (((x169*x170)*x171)<x172);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x173 = 648U;
	uint64_t x174 = 4687168853877LLU;
	volatile int16_t x176 = -1;
	int32_t t25 = 61110903;

	t25 = (((x173*x174)*x175)<x176);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x177 = 558U;
	int8_t x178 = 1;
	uint32_t x179 = 257762U;
	volatile int16_t x180 = INT16_MIN;
	volatile int32_t t26 = 0;

	t26 = (((x177*x178)*x179)<x180);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x185 = -6;
	static volatile int16_t x186 = INT16_MAX;
	int8_t x187 = -1;
	volatile uint64_t x188 = 1361719236829069LLU;
	volatile int32_t t27 = -206150;

	t27 = (((x185*x186)*x187)<x188);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x189 = INT8_MAX;
	int16_t x190 = 5;
	volatile int16_t x191 = -587;
	volatile int16_t x192 = INT16_MIN;
	static int32_t t28 = 2959909;

	t28 = (((x189*x190)*x191)<x192);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x193 = INT64_MAX;
	volatile int8_t x194 = 1;
	volatile uint64_t x195 = 147434279LLU;

	t29 = (((x193*x194)*x195)<x196);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x202 = 1U;
	int32_t x203 = INT32_MAX;
	uint32_t x204 = 471039331U;
	volatile int32_t t30 = 5;

	t30 = (((x201*x202)*x203)<x204);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x205 = 60LLU;
	int32_t x206 = -1395;
	int16_t x207 = INT16_MIN;
	int64_t x208 = -98LL;
	static volatile int32_t t31 = -1;

	t31 = (((x205*x206)*x207)<x208);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x209 = INT32_MIN;
	int8_t x210 = 0;
	volatile int64_t x211 = INT64_MIN;
	volatile int16_t x212 = INT16_MIN;

	t32 = (((x209*x210)*x211)<x212);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x213 = 4U;
	uint32_t x214 = UINT32_MAX;
	uint32_t x215 = 2476U;
	static int32_t t33 = -798;

	t33 = (((x213*x214)*x215)<x216);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x218 = 308679U;
	uint64_t x219 = 119025842616LLU;
	int32_t x220 = INT32_MIN;
	int32_t t34 = 737102201;

	t34 = (((x217*x218)*x219)<x220);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x234 = -6;
	uint8_t x235 = UINT8_MAX;
	volatile int32_t x236 = INT32_MAX;
	int32_t t35 = 0;

	t35 = (((x233*x234)*x235)<x236);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x237 = -1LL;
	static uint32_t x238 = 931U;
	static uint32_t x240 = UINT32_MAX;
	int32_t t36 = -645499;

	t36 = (((x237*x238)*x239)<x240);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x241 = -2404911803646LL;
	uint16_t x242 = 7U;
	int8_t x243 = INT8_MIN;
	int16_t x244 = -1;
	static int32_t t37 = 52301;

	t37 = (((x241*x242)*x243)<x244);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x251 = 907U;
	uint64_t x252 = 20208622LLU;
	volatile int32_t t38 = 1;

	t38 = (((x249*x250)*x251)<x252);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x253 = -1LL;
	static volatile uint32_t x254 = 12U;
	uint64_t x256 = 1490477046813LLU;
	volatile int32_t t39 = 6421;

	t39 = (((x253*x254)*x255)<x256);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x257 = 13;
	uint64_t x258 = 6961224628243346LLU;
	uint64_t x259 = UINT64_MAX;
	volatile int32_t t40 = 132411685;

	t40 = (((x257*x258)*x259)<x260);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x261 = 11142610061LLU;
	volatile int32_t x263 = INT32_MAX;
	int8_t x264 = INT8_MAX;
	int32_t t41 = 9189766;

	t41 = (((x261*x262)*x263)<x264);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x270 = 262043U;
	int16_t x271 = 3396;
	int16_t x272 = -1;
	volatile int32_t t42 = -4;

	t42 = (((x269*x270)*x271)<x272);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int64_t x273 = -942054113LL;
	uint8_t x274 = 58U;
	int8_t x275 = INT8_MIN;
	int64_t x276 = -1LL;
	int32_t t43 = 1;

	t43 = (((x273*x274)*x275)<x276);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x285 = UINT32_MAX;
	int32_t x287 = 14661680;
	volatile uint32_t x288 = 236697728U;

	t44 = (((x285*x286)*x287)<x288);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x289 = 2U;
	uint64_t x290 = UINT64_MAX;
	int32_t x291 = 30;
	static uint32_t x292 = 17596830U;
	int32_t t45 = 4;

	t45 = (((x289*x290)*x291)<x292);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x293 = 5U;
	int8_t x294 = -1;
	static int16_t x295 = -1;
	static int32_t t46 = 74965755;

	t46 = (((x293*x294)*x295)<x296);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x297 = 1U;
	static uint8_t x298 = 0U;
	int32_t x299 = INT32_MAX;
	static int32_t t47 = 7;

	t47 = (((x297*x298)*x299)<x300);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x304 = 72920943260211LLU;
	int32_t t48 = 3279;

	t48 = (((x301*x302)*x303)<x304);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x306 = INT16_MIN;
	int64_t x307 = -122621202546LL;
	int32_t x308 = INT32_MIN;
	int32_t t49 = -63477;

	t49 = (((x305*x306)*x307)<x308);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x309 = -1323;
	int64_t x310 = -1LL;
	volatile int8_t x311 = INT8_MIN;
	int64_t x312 = INT64_MIN;
	static volatile int32_t t50 = 7616968;

	t50 = (((x309*x310)*x311)<x312);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x313 = UINT64_MAX;
	static uint8_t x314 = UINT8_MAX;
	int32_t x315 = 1;
	int64_t x316 = -1LL;
	volatile int32_t t51 = -341732640;

	t51 = (((x313*x314)*x315)<x316);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x317 = 21160LLU;
	int64_t x318 = -3LL;
	uint64_t x319 = 17292087621LLU;
	uint64_t x320 = 0LLU;
	volatile int32_t t52 = 1;

	t52 = (((x317*x318)*x319)<x320);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x333 = -26;
	uint64_t x334 = 3LLU;
	int32_t x335 = INT32_MIN;
	int16_t x336 = -771;

	t53 = (((x333*x334)*x335)<x336);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x341 = UINT8_MAX;
	int16_t x343 = -1;
	volatile int8_t x344 = -30;
	volatile int32_t t54 = 75403;

	t54 = (((x341*x342)*x343)<x344);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x349 = 2;
	volatile int16_t x350 = INT16_MIN;
	static int8_t x351 = INT8_MIN;
	volatile int32_t t55 = 1;

	t55 = (((x349*x350)*x351)<x352);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x373 = -1;
	int8_t x374 = 32;
	volatile uint32_t x375 = 57176U;
	uint8_t x376 = 2U;
	volatile int32_t t56 = 40;

	t56 = (((x373*x374)*x375)<x376);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x377 = 112121831LLU;
	uint8_t x379 = 0U;
	uint64_t x380 = 8832529836602806LLU;

	t57 = (((x377*x378)*x379)<x380);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x382 = 44;
	volatile uint32_t x383 = UINT32_MAX;
	int32_t t58 = -2508780;

	t58 = (((x381*x382)*x383)<x384);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x385 = INT8_MAX;
	uint8_t x386 = UINT8_MAX;
	int8_t x387 = INT8_MAX;
	volatile int32_t x388 = 1;
	volatile int32_t t59 = 30904425;

	t59 = (((x385*x386)*x387)<x388);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x389 = INT32_MIN;
	static uint64_t x390 = 7128625601910LLU;
	static int64_t x391 = INT64_MIN;
	static int32_t x392 = -1;
	volatile int32_t t60 = 1630322;

	t60 = (((x389*x390)*x391)<x392);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x394 = UINT16_MAX;
	uint64_t x395 = 104813763LLU;
	static int32_t t61 = 352694554;

	t61 = (((x393*x394)*x395)<x396);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x401 = -1;
	static int64_t x402 = INT64_MAX;
	int8_t x403 = -1;

	t62 = (((x401*x402)*x403)<x404);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x405 = 18U;
	uint8_t x406 = 93U;
	int16_t x407 = INT16_MAX;
	int16_t x408 = INT16_MIN;
	int32_t t63 = 2;

	t63 = (((x405*x406)*x407)<x408);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x410 = UINT8_MAX;
	static int64_t x411 = -1LL;
	int32_t t64 = -32234;

	t64 = (((x409*x410)*x411)<x412);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x413 = 303323774LL;
	uint8_t x414 = 101U;
	int8_t x415 = 1;
	static volatile int32_t x416 = INT32_MIN;
	int32_t t65 = 36136915;

	t65 = (((x413*x414)*x415)<x416);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x421 = 466U;
	int64_t x422 = -1LL;
	uint64_t x424 = UINT64_MAX;
	int32_t t66 = 2279542;

	t66 = (((x421*x422)*x423)<x424);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x433 = 1233270087152LLU;
	uint16_t x434 = 1U;
	static int64_t x436 = INT64_MIN;
	int32_t t67 = -88;

	t67 = (((x433*x434)*x435)<x436);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x438 = 2894474U;
	int16_t x439 = -7;
	int32_t t68 = -90460;

	t68 = (((x437*x438)*x439)<x440);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x441 = 674827LLU;
	volatile uint16_t x442 = 3U;
	volatile uint16_t x443 = 0U;
	uint32_t x444 = UINT32_MAX;
	volatile int32_t t69 = -52;

	t69 = (((x441*x442)*x443)<x444);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x461 = -1;
	static int64_t x462 = -1LL;

	t70 = (((x461*x462)*x463)<x464);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x465 = 51U;
	uint8_t x467 = 87U;
	volatile int8_t x468 = INT8_MAX;
	static int32_t t71 = -6551846;

	t71 = (((x465*x466)*x467)<x468);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x469 = 481258U;
	int16_t x471 = -3;
	static uint64_t x472 = 2829889579584956296LLU;
	int32_t t72 = 34653;

	t72 = (((x469*x470)*x471)<x472);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x477 = UINT8_MAX;
	int64_t x478 = 410008009669LL;
	volatile int16_t x479 = INT16_MIN;
	int16_t x480 = -1;
	int32_t t73 = -1;

	t73 = (((x477*x478)*x479)<x480);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x481 = UINT32_MAX;
	int32_t x483 = -408596;
	int32_t x484 = INT32_MIN;
	int32_t t74 = 261397727;

	t74 = (((x481*x482)*x483)<x484);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int16_t x493 = 23;
	static int16_t x494 = 5;
	uint16_t x496 = 510U;
	volatile int32_t t75 = 3956;

	t75 = (((x493*x494)*x495)<x496);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x497 = -1;
	int8_t x498 = INT8_MAX;

	t76 = (((x497*x498)*x499)<x500);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x501 = INT64_MIN;
	int64_t x503 = INT64_MAX;
	volatile int16_t x504 = INT16_MIN;

	t77 = (((x501*x502)*x503)<x504);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x509 = INT8_MIN;
	uint32_t x510 = 55423898U;
	uint8_t x511 = UINT8_MAX;
	static volatile int32_t t78 = 2050781;

	t78 = (((x509*x510)*x511)<x512);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x516 = 108759432143590LLU;
	int32_t t79 = -209042180;

	t79 = (((x513*x514)*x515)<x516);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x517 = 128LL;
	uint64_t x518 = 49492937110676LLU;
	static int8_t x519 = INT8_MAX;
	int32_t x520 = -1;
	volatile int32_t t80 = 1;

	t80 = (((x517*x518)*x519)<x520);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x521 = INT8_MIN;
	uint32_t x524 = 4U;
	int32_t t81 = -3;

	t81 = (((x521*x522)*x523)<x524);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint8_t x529 = UINT8_MAX;
	int8_t x530 = INT8_MIN;
	int64_t x532 = -1LL;

	t82 = (((x529*x530)*x531)<x532);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x535 = 3766036838LL;
	int32_t t83 = -30134397;

	t83 = (((x533*x534)*x535)<x536);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x537 = INT16_MIN;
	uint16_t x538 = 7U;
	uint8_t x539 = UINT8_MAX;
	volatile int16_t x540 = -6;
	int32_t t84 = 2666692;

	t84 = (((x537*x538)*x539)<x540);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x545 = -510;
	int32_t x546 = -1;
	uint16_t x547 = 2U;
	uint16_t x548 = UINT16_MAX;

	t85 = (((x545*x546)*x547)<x548);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x553 = 1LLU;
	int8_t x554 = INT8_MAX;
	static int16_t x555 = -1;
	volatile uint64_t x556 = UINT64_MAX;
	static volatile int32_t t86 = -1017252;

	t86 = (((x553*x554)*x555)<x556);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x557 = UINT32_MAX;
	volatile uint32_t x558 = 62U;
	static int8_t x559 = -1;

	t87 = (((x557*x558)*x559)<x560);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x561 = -1LL;
	uint32_t x562 = 57U;
	int8_t x564 = INT8_MIN;

	t88 = (((x561*x562)*x563)<x564);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x573 = INT64_MIN;
	int8_t x575 = 0;
	uint16_t x576 = UINT16_MAX;
	int32_t t89 = 3;

	t89 = (((x573*x574)*x575)<x576);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x581 = -1;
	static uint16_t x582 = 1U;
	uint32_t x584 = UINT32_MAX;

	t90 = (((x581*x582)*x583)<x584);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x585 = 0U;
	int32_t x586 = INT32_MIN;
	int16_t x587 = 13;

	t91 = (((x585*x586)*x587)<x588);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x597 = -1LL;
	static int16_t x598 = -1;
	static uint16_t x599 = UINT16_MAX;
	int32_t x600 = -252575086;
	volatile int32_t t92 = -6498158;

	t92 = (((x597*x598)*x599)<x600);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x601 = 35;
	uint8_t x602 = UINT8_MAX;
	static uint32_t x603 = 155159651U;
	volatile uint16_t x604 = UINT16_MAX;
	static int32_t t93 = 50;

	t93 = (((x601*x602)*x603)<x604);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x605 = 540U;
	int8_t x606 = INT8_MIN;
	int32_t x607 = -1;
	int8_t x608 = INT8_MIN;

	t94 = (((x605*x606)*x607)<x608);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x609 = 446323U;
	uint64_t x610 = UINT64_MAX;
	int8_t x611 = -1;
	int16_t x612 = 1;
	static volatile int32_t t95 = -253532629;

	t95 = (((x609*x610)*x611)<x612);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x614 = INT8_MIN;
	static int16_t x615 = INT16_MIN;
	volatile int16_t x616 = INT16_MAX;
	static volatile int32_t t96 = -1120392;

	t96 = (((x613*x614)*x615)<x616);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x617 = UINT32_MAX;
	int16_t x618 = 55;
	volatile uint8_t x619 = 2U;
	volatile int8_t x620 = INT8_MAX;

	t97 = (((x617*x618)*x619)<x620);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x629 = 7781U;
	volatile int8_t x630 = -1;
	int16_t x631 = -1;
	volatile uint16_t x632 = 11520U;
	volatile int32_t t98 = 24;

	t98 = (((x629*x630)*x631)<x632);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x634 = 1U;
	static uint8_t x636 = 7U;
	int32_t t99 = -916111;

	t99 = (((x633*x634)*x635)<x636);

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

