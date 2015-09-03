#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x3 = 1313;
int8_t x4 = INT8_MAX;
int64_t x8 = INT64_MIN;
uint32_t x19 = 756910986U;
int64_t x20 = -1LL;
volatile int32_t t3 = 34998;
static int8_t x21 = -1;
static volatile uint64_t x37 = UINT64_MAX;
volatile int32_t t7 = 25;
static volatile int32_t t8 = 1;
static volatile int32_t x49 = 494367;
volatile int16_t x52 = INT16_MIN;
uint64_t x61 = UINT64_MAX;
int8_t x93 = 7;
uint64_t x95 = 847020LLU;
int32_t x96 = -1;
int8_t x101 = -1;
volatile int64_t x111 = -462LL;
int32_t t17 = 522147;
uint16_t x114 = 155U;
int8_t x115 = -1;
uint8_t x116 = 45U;
int32_t t24 = 2;
static uint16_t x159 = 1245U;
volatile int8_t x160 = 1;
int64_t x161 = -1LL;
int64_t x164 = -5016LL;
volatile int32_t t26 = -5221;
uint16_t x166 = 3U;
int64_t x167 = -1LL;
int64_t x170 = -7635LL;
int32_t x178 = -1;
int64_t x179 = INT64_MAX;
volatile int32_t t30 = 9;
volatile uint8_t x182 = 6U;
int32_t x184 = -3937;
volatile int32_t t32 = -158254833;
volatile int64_t x208 = INT64_MIN;
volatile int16_t x220 = INT16_MIN;
uint16_t x225 = 4U;
int64_t x228 = -2387161967620LL;
volatile int32_t x229 = INT32_MIN;
volatile uint8_t x231 = 3U;
static uint16_t x232 = UINT16_MAX;
uint16_t x236 = UINT16_MAX;
static volatile int32_t t41 = 27378;
volatile int8_t x242 = INT8_MAX;
volatile int64_t x256 = -1481287226189664LL;
uint32_t x275 = 1U;
int32_t x280 = -133862828;
int64_t x282 = -9706237169607203LL;
int32_t t52 = -3948;
int32_t x302 = 12298;
uint64_t x303 = 13645038555LLU;
static int8_t x306 = INT8_MIN;
static volatile int16_t x307 = -1;
static uint8_t x308 = 1U;
static int32_t x309 = -151440;
uint64_t x310 = UINT64_MAX;
int8_t x323 = 5;
static int64_t x330 = -1LL;
volatile int32_t t59 = 1;
int64_t x337 = -6400661318LL;
volatile uint32_t x338 = UINT32_MAX;
static int8_t x339 = -1;
int32_t t60 = 0;
static uint8_t x357 = 7U;
int64_t x364 = -1LL;
uint32_t x369 = 52U;
static int16_t x383 = INT16_MIN;
int32_t x384 = -6;
static uint64_t x389 = UINT64_MAX;
uint8_t x401 = 27U;
volatile int8_t x404 = 9;
int32_t t69 = -1406597;
uint64_t x406 = 821325878675683LLU;
int32_t t71 = -69679214;
volatile int32_t t72 = 1;
volatile int16_t x432 = INT16_MAX;
volatile int64_t x433 = INT64_MAX;
static int32_t x435 = -19;
static volatile uint8_t x437 = UINT8_MAX;
int64_t x440 = INT64_MIN;
uint32_t x443 = 1671345855U;
uint32_t x453 = 0U;
volatile int16_t x456 = INT16_MIN;
int32_t x457 = -1;
int32_t x472 = -28;
int16_t x476 = 7;
volatile int32_t x477 = INT32_MIN;
uint64_t x478 = 333440886228872498LLU;
int64_t x479 = 297787822557469LL;
static uint32_t x484 = 41U;
static int16_t x492 = INT16_MIN;
uint16_t x505 = 45U;
volatile int8_t x511 = -1;
uint16_t x533 = 2850U;
static uint8_t x538 = 14U;
static int8_t x553 = 11;
uint64_t x555 = 742964420765LLU;
uint32_t x557 = 8U;
int32_t t95 = -1;
static uint8_t x564 = 1U;
volatile uint32_t x565 = 86U;
uint32_t x567 = 1022U;
static volatile uint64_t x568 = UINT64_MAX;
int32_t x576 = INT32_MIN;


void f0(void) {
	int32_t x1 = INT32_MIN;
	int16_t x2 = INT16_MIN;
	int32_t t0 = 1;

	t0 = ((x1%(x2*x3))<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 0U;
	volatile int64_t x6 = -1LL;
	int32_t x7 = INT32_MIN;
	volatile int32_t t1 = 92284;

	t1 = ((x5%(x6*x7))<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = -6571;
	volatile int32_t x10 = INT32_MIN;
	int64_t x11 = -1LL;
	static int8_t x12 = INT8_MAX;
	int32_t t2 = -21875478;

	t2 = ((x9%(x10*x11))<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x17 = 12U;
	uint32_t x18 = 28U;

	t3 = ((x17%(x18*x19))<=x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x22 = INT32_MAX;
	int16_t x23 = -1;
	int8_t x24 = 29;
	int32_t t4 = -1;

	t4 = ((x21%(x22*x23))<=x24);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x25 = -1LL;
	int16_t x26 = 3813;
	int16_t x27 = INT16_MAX;
	static int16_t x28 = -1;
	int32_t t5 = 602785121;

	t5 = ((x25%(x26*x27))<=x28);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x33 = INT8_MIN;
	int64_t x34 = INT64_MIN;
	static uint64_t x35 = 116513LLU;
	uint64_t x36 = UINT64_MAX;
	volatile int32_t t6 = -347987;

	t6 = ((x33%(x34*x35))<=x36);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x38 = INT8_MAX;
	int8_t x39 = -3;
	int16_t x40 = INT16_MAX;

	t7 = ((x37%(x38*x39))<=x40);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x45 = 1;
	uint8_t x46 = 1U;
	static uint8_t x47 = 1U;
	uint32_t x48 = 11979U;

	t8 = ((x45%(x46*x47))<=x48);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x50 = 1;
	uint64_t x51 = UINT64_MAX;
	static volatile int32_t t9 = -13;

	t9 = ((x49%(x50*x51))<=x52);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x53 = -1LL;
	volatile int8_t x54 = INT8_MIN;
	int64_t x55 = -1LL;
	volatile uint8_t x56 = 0U;
	int32_t t10 = -114550801;

	t10 = ((x53%(x54*x55))<=x56);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x62 = UINT64_MAX;
	uint8_t x63 = UINT8_MAX;
	int64_t x64 = -1LL;
	static volatile int32_t t11 = 19370054;

	t11 = ((x61%(x62*x63))<=x64);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x69 = INT16_MAX;
	uint64_t x70 = 32194LLU;
	volatile int8_t x71 = -10;
	int64_t x72 = -1LL;
	volatile int32_t t12 = -4265;

	t12 = ((x69%(x70*x71))<=x72);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x73 = 1U;
	uint16_t x74 = UINT16_MAX;
	int8_t x75 = INT8_MIN;
	volatile uint64_t x76 = UINT64_MAX;
	static volatile int32_t t13 = 8;

	t13 = ((x73%(x74*x75))<=x76);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x85 = INT64_MAX;
	uint32_t x86 = 4570945U;
	int32_t x87 = INT32_MAX;
	int32_t x88 = 376;
	volatile int32_t t14 = -144402943;

	t14 = ((x85%(x86*x87))<=x88);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x94 = 1420U;
	volatile int32_t t15 = 150;

	t15 = ((x93%(x94*x95))<=x96);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x102 = -34918520785943LL;
	int16_t x103 = INT16_MIN;
	uint32_t x104 = 19196U;
	volatile int32_t t16 = -953023;

	t16 = ((x101%(x102*x103))<=x104);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x109 = 627;
	volatile int64_t x110 = -1LL;
	static int32_t x112 = INT32_MAX;

	t17 = ((x109%(x110*x111))<=x112);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x113 = 5U;
	static volatile int32_t t18 = -153593288;

	t18 = ((x113%(x114*x115))<=x116);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x121 = INT8_MIN;
	int16_t x122 = -1;
	uint64_t x123 = UINT64_MAX;
	volatile int32_t x124 = INT32_MAX;
	volatile int32_t t19 = 981954;

	t19 = ((x121%(x122*x123))<=x124);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x125 = 1U;
	uint8_t x126 = 28U;
	static uint64_t x127 = 10095LLU;
	int16_t x128 = INT16_MAX;
	volatile int32_t t20 = 34;

	t20 = ((x125%(x126*x127))<=x128);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x133 = 420271152719265LL;
	uint32_t x134 = 1414955430U;
	uint64_t x135 = 1092LLU;
	uint16_t x136 = 5087U;
	volatile int32_t t21 = 10158957;

	t21 = ((x133%(x134*x135))<=x136);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x137 = INT32_MIN;
	int32_t x138 = -1;
	volatile int8_t x139 = -1;
	static int64_t x140 = INT64_MIN;
	static int32_t t22 = 1;

	t22 = ((x137%(x138*x139))<=x140);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x141 = INT16_MIN;
	int16_t x142 = INT16_MAX;
	int16_t x143 = INT16_MIN;
	uint64_t x144 = 5LLU;
	volatile int32_t t23 = -342376;

	t23 = ((x141%(x142*x143))<=x144);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x153 = INT16_MIN;
	int8_t x154 = 3;
	int8_t x155 = 23;
	volatile int16_t x156 = INT16_MAX;

	t24 = ((x153%(x154*x155))<=x156);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x157 = 482U;
	volatile uint16_t x158 = 963U;
	volatile int32_t t25 = -1140;

	t25 = ((x157%(x158*x159))<=x160);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x162 = -1;
	int8_t x163 = INT8_MAX;

	t26 = ((x161%(x162*x163))<=x164);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x165 = -34;
	uint16_t x168 = UINT16_MAX;
	int32_t t27 = 480072963;

	t27 = ((x165%(x166*x167))<=x168);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x169 = 346U;
	int32_t x171 = INT32_MIN;
	static int64_t x172 = 1LL;
	volatile int32_t t28 = 0;

	t28 = ((x169%(x170*x171))<=x172);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x173 = -11689;
	int8_t x174 = INT8_MIN;
	int32_t x175 = 359071;
	int32_t x176 = -1;
	int32_t t29 = 48624567;

	t29 = ((x173%(x174*x175))<=x176);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x177 = 902186U;
	int64_t x180 = INT64_MIN;

	t30 = ((x177%(x178*x179))<=x180);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x181 = -645;
	volatile uint64_t x183 = 1141662701LLU;
	volatile int32_t t31 = 0;

	t31 = ((x181%(x182*x183))<=x184);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x201 = -154855750;
	uint64_t x202 = UINT64_MAX;
	int8_t x203 = INT8_MIN;
	int32_t x204 = INT32_MAX;

	t32 = ((x201%(x202*x203))<=x204);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x205 = 0;
	uint32_t x206 = UINT32_MAX;
	uint64_t x207 = UINT64_MAX;
	volatile int32_t t33 = -97676;

	t33 = ((x205%(x206*x207))<=x208);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x209 = -1LL;
	int32_t x210 = -1;
	uint32_t x211 = UINT32_MAX;
	int16_t x212 = 593;
	int32_t t34 = -65805249;

	t34 = ((x209%(x210*x211))<=x212);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x213 = INT8_MIN;
	uint32_t x214 = UINT32_MAX;
	uint64_t x215 = UINT64_MAX;
	volatile int8_t x216 = -1;
	volatile int32_t t35 = 198416544;

	t35 = ((x213%(x214*x215))<=x216);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x217 = 306LLU;
	uint32_t x218 = UINT32_MAX;
	uint16_t x219 = 346U;
	volatile int32_t t36 = -8;

	t36 = ((x217%(x218*x219))<=x220);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x221 = INT64_MIN;
	static int64_t x222 = 263658863LL;
	int8_t x223 = INT8_MAX;
	int16_t x224 = INT16_MIN;
	volatile int32_t t37 = -213276;

	t37 = ((x221%(x222*x223))<=x224);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x226 = 2790878674208487474LLU;
	int32_t x227 = 29891;
	int32_t t38 = -792978;

	t38 = ((x225%(x226*x227))<=x228);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x230 = INT16_MIN;
	volatile int32_t t39 = 1;

	t39 = ((x229%(x230*x231))<=x232);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x233 = 26393908621493LLU;
	volatile uint64_t x234 = UINT64_MAX;
	volatile uint16_t x235 = 10U;
	static volatile int32_t t40 = -1;

	t40 = ((x233%(x234*x235))<=x236);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x237 = 3U;
	int16_t x238 = -1;
	static volatile int8_t x239 = -52;
	int16_t x240 = -4043;

	t41 = ((x237%(x238*x239))<=x240);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x241 = -1;
	static uint64_t x243 = 2067779595LLU;
	uint8_t x244 = 1U;
	volatile int32_t t42 = -8930;

	t42 = ((x241%(x242*x243))<=x244);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x245 = -278964LL;
	uint8_t x246 = UINT8_MAX;
	static volatile uint8_t x247 = 74U;
	int8_t x248 = -1;
	volatile int32_t t43 = 50117;

	t43 = ((x245%(x246*x247))<=x248);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x249 = -1;
	int8_t x250 = INT8_MIN;
	uint16_t x251 = 9U;
	uint64_t x252 = 356673LLU;
	volatile int32_t t44 = -26230;

	t44 = ((x249%(x250*x251))<=x252);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x253 = -1;
	int32_t x254 = INT32_MIN;
	int64_t x255 = 69184815LL;
	static int32_t t45 = 7216052;

	t45 = ((x253%(x254*x255))<=x256);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x261 = -1LL;
	int16_t x262 = 83;
	int8_t x263 = INT8_MIN;
	volatile uint32_t x264 = 59299346U;
	volatile int32_t t46 = -27;

	t46 = ((x261%(x262*x263))<=x264);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x269 = 2579;
	int16_t x270 = -1;
	int32_t x271 = 9;
	int64_t x272 = -1LL;
	int32_t t47 = -51328089;

	t47 = ((x269%(x270*x271))<=x272);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x273 = UINT32_MAX;
	static volatile int32_t x274 = INT32_MAX;
	uint16_t x276 = 1158U;
	volatile int32_t t48 = 154790;

	t48 = ((x273%(x274*x275))<=x276);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x277 = 1U;
	volatile uint16_t x278 = 7U;
	int16_t x279 = 5036;
	int32_t t49 = -116322962;

	t49 = ((x277%(x278*x279))<=x280);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x281 = -1;
	static volatile int8_t x283 = INT8_MIN;
	volatile int32_t x284 = INT32_MIN;
	int32_t t50 = 102;

	t50 = ((x281%(x282*x283))<=x284);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x285 = 11;
	volatile int64_t x286 = 215164LL;
	int32_t x287 = INT32_MIN;
	static int8_t x288 = INT8_MIN;
	volatile int32_t t51 = -316;

	t51 = ((x285%(x286*x287))<=x288);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int8_t x289 = -1;
	uint16_t x290 = 4533U;
	int8_t x291 = -1;
	int64_t x292 = INT64_MAX;

	t52 = ((x289%(x290*x291))<=x292);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x297 = -49;
	static uint32_t x298 = UINT32_MAX;
	volatile uint16_t x299 = 42U;
	static int8_t x300 = INT8_MIN;
	volatile int32_t t53 = -5773;

	t53 = ((x297%(x298*x299))<=x300);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x301 = INT8_MIN;
	int32_t x304 = INT32_MIN;
	static int32_t t54 = -14470;

	t54 = ((x301%(x302*x303))<=x304);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x305 = 7U;
	int32_t t55 = -8;

	t55 = ((x305%(x306*x307))<=x308);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x311 = -1;
	int32_t x312 = INT32_MIN;
	static int32_t t56 = -266569716;

	t56 = ((x309%(x310*x311))<=x312);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x321 = 208;
	static volatile int16_t x322 = -1;
	static int32_t x324 = INT32_MIN;
	int32_t t57 = -555918;

	t57 = ((x321%(x322*x323))<=x324);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x325 = -1;
	uint64_t x326 = 619668LLU;
	volatile int32_t x327 = INT32_MAX;
	static int8_t x328 = -1;
	static int32_t t58 = -428931;

	t58 = ((x325%(x326*x327))<=x328);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x329 = 247U;
	int64_t x331 = INT64_MAX;
	int16_t x332 = INT16_MIN;

	t59 = ((x329%(x330*x331))<=x332);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x340 = -1;

	t60 = ((x337%(x338*x339))<=x340);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x345 = 4158531;
	int8_t x346 = INT8_MIN;
	int64_t x347 = -1LL;
	int64_t x348 = INT64_MIN;
	int32_t t61 = -992509541;

	t61 = ((x345%(x346*x347))<=x348);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x358 = UINT8_MAX;
	volatile int64_t x359 = -1LL;
	static int64_t x360 = 10LL;
	int32_t t62 = 2416602;

	t62 = ((x357%(x358*x359))<=x360);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x361 = INT16_MAX;
	int8_t x362 = INT8_MIN;
	static volatile uint8_t x363 = 105U;
	int32_t t63 = 5998;

	t63 = ((x361%(x362*x363))<=x364);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x365 = 4645544U;
	int16_t x366 = -114;
	int8_t x367 = 10;
	uint8_t x368 = 6U;
	int32_t t64 = 158;

	t64 = ((x365%(x366*x367))<=x368);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x370 = 92U;
	uint16_t x371 = 506U;
	int8_t x372 = INT8_MIN;
	volatile int32_t t65 = -21;

	t65 = ((x369%(x370*x371))<=x372);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int64_t x377 = -21LL;
	volatile uint8_t x378 = 12U;
	static int32_t x379 = -75;
	int8_t x380 = INT8_MIN;
	static volatile int32_t t66 = 15559162;

	t66 = ((x377%(x378*x379))<=x380);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x381 = INT16_MAX;
	static uint64_t x382 = UINT64_MAX;
	static int32_t t67 = -24357268;

	t67 = ((x381%(x382*x383))<=x384);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x390 = INT32_MIN;
	uint32_t x391 = 68504009U;
	int16_t x392 = INT16_MIN;
	volatile int32_t t68 = 705516937;

	t68 = ((x389%(x390*x391))<=x392);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x402 = -1154080523LL;
	int8_t x403 = INT8_MIN;

	t69 = ((x401%(x402*x403))<=x404);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x405 = INT16_MAX;
	int32_t x407 = INT32_MIN;
	uint16_t x408 = 1918U;
	volatile int32_t t70 = -130;

	t70 = ((x405%(x406*x407))<=x408);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x409 = INT8_MIN;
	static volatile int8_t x410 = -1;
	int32_t x411 = -195998638;
	int16_t x412 = -37;

	t71 = ((x409%(x410*x411))<=x412);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x421 = INT64_MIN;
	uint32_t x422 = 19U;
	int8_t x423 = -1;
	int8_t x424 = 1;

	t72 = ((x421%(x422*x423))<=x424);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x425 = INT16_MIN;
	uint32_t x426 = 969723U;
	int16_t x427 = INT16_MIN;
	volatile uint32_t x428 = 39997677U;
	static int32_t t73 = -1;

	t73 = ((x425%(x426*x427))<=x428);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x429 = -3;
	int8_t x430 = -1;
	static uint16_t x431 = 63U;
	volatile int32_t t74 = 16456695;

	t74 = ((x429%(x430*x431))<=x432);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x434 = INT16_MIN;
	int64_t x436 = -1LL;
	int32_t t75 = -113959857;

	t75 = ((x433%(x434*x435))<=x436);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x438 = -326993936304LL;
	uint32_t x439 = 683U;
	int32_t t76 = 26547788;

	t76 = ((x437%(x438*x439))<=x440);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x441 = 510120U;
	static uint8_t x442 = 6U;
	uint16_t x444 = 14225U;
	int32_t t77 = -17099526;

	t77 = ((x441%(x442*x443))<=x444);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x454 = -1;
	static uint16_t x455 = 7U;
	int32_t t78 = 378831127;

	t78 = ((x453%(x454*x455))<=x456);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x458 = INT16_MIN;
	static uint64_t x459 = UINT64_MAX;
	static volatile int16_t x460 = INT16_MIN;
	volatile int32_t t79 = -19234172;

	t79 = ((x457%(x458*x459))<=x460);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x461 = UINT64_MAX;
	int8_t x462 = -1;
	uint8_t x463 = 11U;
	int16_t x464 = INT16_MIN;
	int32_t t80 = 207786506;

	t80 = ((x461%(x462*x463))<=x464);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x465 = -23;
	uint64_t x466 = 4033LLU;
	uint16_t x467 = 8U;
	int64_t x468 = INT64_MIN;
	static int32_t t81 = 339578;

	t81 = ((x465%(x466*x467))<=x468);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x469 = -1;
	int8_t x470 = -1;
	int32_t x471 = INT32_MAX;
	int32_t t82 = -1813;

	t82 = ((x469%(x470*x471))<=x472);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x473 = INT32_MAX;
	uint32_t x474 = 3704U;
	uint16_t x475 = 15U;
	int32_t t83 = 399967;

	t83 = ((x473%(x474*x475))<=x476);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x480 = UINT16_MAX;
	static int32_t t84 = 6450;

	t84 = ((x477%(x478*x479))<=x480);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint32_t x481 = UINT32_MAX;
	uint64_t x482 = UINT64_MAX;
	volatile int64_t x483 = 551106637536LL;
	volatile int32_t t85 = 58140205;

	t85 = ((x481%(x482*x483))<=x484);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x489 = 57U;
	uint32_t x490 = 4642568U;
	uint8_t x491 = UINT8_MAX;
	int32_t t86 = 279419;

	t86 = ((x489%(x490*x491))<=x492);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int16_t x506 = -984;
	static uint16_t x507 = UINT16_MAX;
	int8_t x508 = -21;
	int32_t t87 = 203016;

	t87 = ((x505%(x506*x507))<=x508);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x509 = -1LL;
	volatile int16_t x510 = INT16_MIN;
	uint64_t x512 = 5414080065LLU;
	int32_t t88 = -29507651;

	t88 = ((x509%(x510*x511))<=x512);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x513 = INT32_MIN;
	int8_t x514 = INT8_MIN;
	uint32_t x515 = 6375569U;
	static uint64_t x516 = 112962530352035LLU;
	volatile int32_t t89 = 0;

	t89 = ((x513%(x514*x515))<=x516);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x517 = INT16_MAX;
	static uint64_t x518 = 52091LLU;
	volatile uint64_t x519 = 311626547753354LLU;
	uint64_t x520 = 3782LLU;
	int32_t t90 = 958468;

	t90 = ((x517%(x518*x519))<=x520);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x534 = -1207;
	int16_t x535 = INT16_MIN;
	int8_t x536 = -1;
	int32_t t91 = -258805;

	t91 = ((x533%(x534*x535))<=x536);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x537 = INT8_MIN;
	static int16_t x539 = INT16_MAX;
	static volatile uint64_t x540 = UINT64_MAX;
	int32_t t92 = -1440799;

	t92 = ((x537%(x538*x539))<=x540);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x549 = 4521929386LLU;
	int16_t x550 = INT16_MIN;
	uint64_t x551 = UINT64_MAX;
	volatile int16_t x552 = 30;
	volatile int32_t t93 = -427365;

	t93 = ((x549%(x550*x551))<=x552);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x554 = INT64_MIN;
	volatile int32_t x556 = INT32_MAX;
	int32_t t94 = 28;

	t94 = ((x553%(x554*x555))<=x556);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x558 = 21214LL;
	static int32_t x559 = 11769476;
	uint64_t x560 = 20LLU;

	t95 = ((x557%(x558*x559))<=x560);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x561 = 461853774LLU;
	uint32_t x562 = UINT32_MAX;
	volatile uint32_t x563 = 69379U;
	int32_t t96 = -243;

	t96 = ((x561%(x562*x563))<=x564);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x566 = INT8_MAX;
	static volatile int32_t t97 = 221813;

	t97 = ((x565%(x566*x567))<=x568);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int32_t x569 = INT32_MIN;
	int64_t x570 = -1LL;
	volatile uint32_t x571 = UINT32_MAX;
	uint32_t x572 = 3U;
	volatile int32_t t98 = 5664511;

	t98 = ((x569%(x570*x571))<=x572);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x573 = 2140U;
	int8_t x574 = 1;
	int32_t x575 = -1;
	volatile int32_t t99 = -29;

	t99 = ((x573%(x574*x575))<=x576);

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

