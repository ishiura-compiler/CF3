#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x8 = INT32_MIN;
volatile int32_t t0 = -6890685;
uint16_t x17 = UINT16_MAX;
int16_t x20 = INT16_MIN;
volatile uint16_t x26 = 571U;
int64_t t4 = -961019009LL;
static volatile uint8_t x29 = 1U;
volatile int64_t x41 = -7843LL;
static int8_t x42 = -1;
int64_t x46 = INT64_MAX;
static int64_t x54 = INT64_MIN;
volatile uint8_t x56 = 2U;
int8_t x59 = 1;
int64_t x69 = -37943975768573687LL;
volatile uint32_t x72 = 2U;
volatile int8_t x83 = 52;
volatile int64_t x85 = INT64_MIN;
static uint16_t x88 = 329U;
uint16_t x92 = 7299U;
int8_t x96 = -44;
static uint16_t x102 = UINT16_MAX;
static int32_t x104 = -1;
volatile int32_t x105 = INT32_MIN;
int32_t x118 = 107;
volatile int64_t x119 = INT64_MIN;
volatile int16_t x120 = -1;
int8_t x123 = INT8_MIN;
static int64_t x126 = -1LL;
int64_t x127 = -1LL;
static int16_t x141 = INT16_MIN;
int32_t x145 = -108305;
uint32_t t31 = UINT32_MAX;
static int64_t x153 = INT64_MAX;
volatile uint16_t x154 = UINT16_MAX;
uint64_t x158 = 543200307LLU;
volatile int32_t t33 = -1;
int16_t x176 = INT16_MIN;
uint64_t x182 = UINT64_MAX;
volatile uint16_t x185 = 2437U;
uint8_t x187 = 3U;
volatile uint8_t x191 = UINT8_MAX;
int8_t x197 = INT8_MAX;
static int16_t x201 = INT16_MAX;
static uint64_t x204 = 285073612142575LLU;
int64_t x207 = INT64_MIN;
int16_t x209 = -903;
static int32_t x210 = 45564;
static uint32_t x213 = 37143925U;
volatile uint32_t t46 = 25728U;
volatile uint8_t x221 = UINT8_MAX;
int16_t x224 = INT16_MAX;
int32_t t48 = -1;
int8_t x229 = INT8_MAX;
uint64_t x230 = 12068369941LLU;
static int32_t x232 = INT32_MIN;
volatile uint32_t x252 = UINT32_MAX;
int64_t x259 = -1LL;
int32_t t55 = -1008638;
static volatile uint16_t x263 = 24092U;
int32_t x264 = INT32_MIN;
int16_t x268 = INT16_MAX;
int16_t x274 = INT16_MIN;
static uint64_t x280 = UINT64_MAX;
int16_t x293 = 53;
volatile uint16_t x295 = 1U;
static volatile int32_t t62 = 1004;
volatile uint16_t x302 = UINT16_MAX;
volatile int32_t t63 = 23;
static volatile int32_t x313 = INT32_MAX;
uint64_t x315 = UINT64_MAX;
static volatile int16_t x316 = INT16_MAX;
volatile int32_t t65 = 24451;
uint8_t x317 = 0U;
int32_t t66 = -15749;
int8_t x323 = -1;
volatile int64_t x326 = -1LL;
volatile uint64_t t68 = 55855691461808995LLU;
volatile uint16_t x331 = 193U;
int16_t x334 = INT16_MIN;
volatile int64_t x335 = 3LL;
uint8_t x337 = UINT8_MAX;
int8_t x346 = INT8_MIN;
static int32_t x348 = 4;
static int16_t x351 = INT16_MIN;
int32_t t75 = 43085;
uint32_t x369 = UINT32_MAX;
volatile int32_t x372 = -1;
uint32_t t76 = UINT32_MAX;
volatile int8_t x380 = -11;
int32_t t77 = -9376;
volatile int64_t x384 = -13813911255063LL;
static int32_t t78 = 18931968;
int8_t x387 = INT8_MAX;
uint8_t x389 = 0U;
int16_t x399 = 28;
uint8_t x400 = UINT8_MAX;
int16_t x404 = -1;
volatile int64_t t82 = 2837352LL;
int64_t x407 = INT64_MIN;
int32_t x414 = -2154933;
volatile uint16_t x419 = 254U;
int8_t x424 = INT8_MAX;
int32_t x427 = -1;
uint8_t x429 = 2U;
int64_t x435 = INT64_MIN;
uint32_t x436 = UINT32_MAX;
uint16_t x454 = UINT16_MAX;
volatile int64_t t93 = -1LL;
uint8_t x468 = 103U;
volatile int64_t x471 = -980673174988LL;
int32_t x473 = -1;


void f0(void) {
	uint16_t x5 = 10312U;
	uint64_t x6 = 36034147148LLU;
	int32_t x7 = INT32_MIN;

	t0 = (x5*((x6+x7)<=x8));

	if (t0 != 10312) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x9 = 3U;
	int32_t x10 = -1;
	int16_t x11 = INT16_MAX;
	int32_t x12 = INT32_MIN;
	static int32_t t1 = 12212029;

	t1 = (x9*((x10+x11)<=x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x18 = INT32_MIN;
	static int64_t x19 = 1LL;
	int32_t t2 = 637136;

	t2 = (x17*((x18+x19)<=x20));

	if (t2 != 65535) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x21 = UINT16_MAX;
	static uint64_t x22 = 737108477870191601LLU;
	volatile uint32_t x23 = 26U;
	int8_t x24 = 0;
	int32_t t3 = -17993;

	t3 = (x21*((x22+x23)<=x24));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x25 = -1LL;
	volatile int64_t x27 = -433665306LL;
	int64_t x28 = -1LL;

	t4 = (x25*((x26+x27)<=x28));

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x30 = 6811875LL;
	int16_t x31 = INT16_MAX;
	static int32_t x32 = INT32_MAX;
	static int32_t t5 = 3618;

	t5 = (x29*((x30+x31)<=x32));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x33 = 33U;
	int8_t x34 = -3;
	static volatile uint16_t x35 = 18229U;
	int16_t x36 = INT16_MAX;
	volatile int32_t t6 = -219037627;

	t6 = (x33*((x34+x35)<=x36));

	if (t6 != 33) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x43 = -1;
	int8_t x44 = INT8_MIN;
	int64_t t7 = 1201857488655576944LL;

	t7 = (x41*((x42+x43)<=x44));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x45 = -1;
	volatile int16_t x47 = -1;
	int8_t x48 = INT8_MIN;
	volatile int32_t t8 = -20129;

	t8 = (x45*((x46+x47)<=x48));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x49 = -1;
	int16_t x50 = -33;
	int8_t x51 = INT8_MIN;
	static volatile uint32_t x52 = 6490U;
	volatile int32_t t9 = 29853;

	t9 = (x49*((x50+x51)<=x52));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x53 = -1;
	uint16_t x55 = 1717U;
	int32_t t10 = 18;

	t10 = (x53*((x54+x55)<=x56));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x57 = INT16_MIN;
	int32_t x58 = 187136856;
	static int8_t x60 = INT8_MIN;
	int32_t t11 = -222;

	t11 = (x57*((x58+x59)<=x60));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int8_t x65 = INT8_MIN;
	uint32_t x66 = UINT32_MAX;
	int64_t x67 = -234811722LL;
	int8_t x68 = -4;
	int32_t t12 = 1042759;

	t12 = (x65*((x66+x67)<=x68));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x70 = UINT32_MAX;
	static volatile int32_t x71 = -1;
	volatile int64_t t13 = 541017892299799LL;

	t13 = (x69*((x70+x71)<=x72));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x73 = -1;
	uint8_t x74 = UINT8_MAX;
	static volatile int8_t x75 = -1;
	int64_t x76 = 2206108113591742863LL;
	static int32_t t14 = -433;

	t14 = (x73*((x74+x75)<=x76));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x77 = -1;
	int8_t x78 = INT8_MAX;
	int32_t x79 = -1;
	volatile int32_t x80 = -1;
	static volatile int32_t t15 = -16758762;

	t15 = (x77*((x78+x79)<=x80));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x81 = 1384065U;
	static int32_t x82 = INT32_MIN;
	uint64_t x84 = UINT64_MAX;
	static uint32_t t16 = 1842997077U;

	t16 = (x81*((x82+x83)<=x84));

	if (t16 != 1384065U) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x86 = UINT64_MAX;
	uint64_t x87 = 15456873876405LLU;
	int64_t t17 = -975828LL;

	t17 = (x85*((x86+x87)<=x88));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x89 = INT8_MIN;
	uint64_t x90 = 967804580339858753LLU;
	static volatile int8_t x91 = -6;
	int32_t t18 = 0;

	t18 = (x89*((x90+x91)<=x92));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x93 = INT32_MIN;
	int16_t x94 = INT16_MAX;
	uint32_t x95 = 0U;
	int32_t t19 = INT32_MIN;

	t19 = (x93*((x94+x95)<=x96));

	if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x97 = -1;
	volatile int32_t x98 = INT32_MIN;
	uint32_t x99 = UINT32_MAX;
	uint32_t x100 = 5963007U;
	int32_t t20 = -16;

	t20 = (x97*((x98+x99)<=x100));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x101 = INT32_MIN;
	int16_t x103 = INT16_MAX;
	volatile int32_t t21 = -446253327;

	t21 = (x101*((x102+x103)<=x104));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x106 = INT16_MIN;
	uint16_t x107 = 0U;
	uint8_t x108 = 10U;
	int32_t t22 = INT32_MIN;

	t22 = (x105*((x106+x107)<=x108));

	if (t22 != INT32_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x109 = -1;
	static int16_t x110 = INT16_MIN;
	int16_t x111 = -92;
	uint32_t x112 = 12062U;
	volatile int32_t t23 = 1;

	t23 = (x109*((x110+x111)<=x112));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x117 = UINT8_MAX;
	int32_t t24 = 24;

	t24 = (x117*((x118+x119)<=x120));

	if (t24 != 255) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x121 = INT16_MAX;
	static int8_t x122 = INT8_MAX;
	int64_t x124 = INT64_MIN;
	volatile int32_t t25 = 1;

	t25 = (x121*((x122+x123)<=x124));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x125 = 6937U;
	int64_t x128 = INT64_MAX;
	volatile int32_t t26 = 2052232;

	t26 = (x125*((x126+x127)<=x128));

	if (t26 != 6937) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x129 = -465643244535LL;
	uint64_t x130 = 107835090149217LLU;
	uint16_t x131 = UINT16_MAX;
	int32_t x132 = INT32_MAX;
	int64_t t27 = -1820193393556037657LL;

	t27 = (x129*((x130+x131)<=x132));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x137 = 295673;
	static int8_t x138 = 12;
	static volatile uint64_t x139 = 259483LLU;
	uint32_t x140 = 1895U;
	volatile int32_t t28 = 487301318;

	t28 = (x137*((x138+x139)<=x140));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x142 = 122U;
	int8_t x143 = 0;
	int8_t x144 = -6;
	int32_t t29 = -715839944;

	t29 = (x141*((x142+x143)<=x144));

	if (t29 != -32768) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x146 = INT8_MAX;
	static int32_t x147 = 97;
	int64_t x148 = INT64_MIN;
	volatile int32_t t30 = 60;

	t30 = (x145*((x146+x147)<=x148));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x149 = UINT32_MAX;
	static uint32_t x150 = UINT32_MAX;
	static int16_t x151 = INT16_MAX;
	uint64_t x152 = 364873LLU;

	t31 = (x149*((x150+x151)<=x152));

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x155 = -1;
	uint32_t x156 = 6460U;
	volatile int64_t t32 = -4796723288975LL;

	t32 = (x153*((x154+x155)<=x156));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x157 = INT16_MAX;
	static uint64_t x159 = UINT64_MAX;
	static uint64_t x160 = 5821728772LLU;

	t33 = (x157*((x158+x159)<=x160));

	if (t33 != 32767) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x161 = 6;
	volatile int64_t x162 = INT64_MIN;
	uint8_t x163 = UINT8_MAX;
	static uint32_t x164 = 7854U;
	volatile int32_t t34 = -2645;

	t34 = (x161*((x162+x163)<=x164));

	if (t34 != 6) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x165 = 868U;
	static int64_t x166 = -1LL;
	static int32_t x167 = INT32_MIN;
	static volatile uint32_t x168 = 1262U;
	volatile int32_t t35 = -4524242;

	t35 = (x165*((x166+x167)<=x168));

	if (t35 != 868) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x169 = -1;
	uint32_t x170 = UINT32_MAX;
	int8_t x171 = -1;
	int16_t x172 = -191;
	volatile int32_t t36 = -665970;

	t36 = (x169*((x170+x171)<=x172));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x173 = -19;
	int8_t x174 = INT8_MIN;
	uint32_t x175 = 66382U;
	static int32_t t37 = -10957117;

	t37 = (x173*((x174+x175)<=x176));

	if (t37 != -19) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x181 = INT64_MAX;
	int64_t x183 = INT64_MIN;
	static int8_t x184 = INT8_MIN;
	volatile int64_t t38 = INT64_MAX;

	t38 = (x181*((x182+x183)<=x184));

	if (t38 != INT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x186 = 3U;
	uint16_t x188 = UINT16_MAX;
	int32_t t39 = -48;

	t39 = (x185*((x186+x187)<=x188));

	if (t39 != 2437) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x189 = UINT8_MAX;
	uint64_t x190 = UINT64_MAX;
	uint16_t x192 = 998U;
	volatile int32_t t40 = 8152;

	t40 = (x189*((x190+x191)<=x192));

	if (t40 != 255) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x193 = -1LL;
	static volatile uint32_t x194 = UINT32_MAX;
	uint32_t x195 = UINT32_MAX;
	int64_t x196 = 3851501LL;
	int64_t t41 = -24483905LL;

	t41 = (x193*((x194+x195)<=x196));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x198 = 978698;
	static int16_t x199 = INT16_MIN;
	uint16_t x200 = UINT16_MAX;
	int32_t t42 = 11084;

	t42 = (x197*((x198+x199)<=x200));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x202 = -53;
	static int16_t x203 = 709;
	volatile int32_t t43 = 71;

	t43 = (x201*((x202+x203)<=x204));

	if (t43 != 32767) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x205 = 1;
	int32_t x206 = INT32_MAX;
	uint16_t x208 = UINT16_MAX;
	static volatile int32_t t44 = -43640;

	t44 = (x205*((x206+x207)<=x208));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x211 = INT16_MAX;
	volatile uint8_t x212 = 1U;
	int32_t t45 = 1;

	t45 = (x209*((x210+x211)<=x212));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x214 = 175208601;
	volatile uint64_t x215 = 21050827464502LLU;
	int16_t x216 = -1;

	t46 = (x213*((x214+x215)<=x216));

	if (t46 != 37143925U) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x217 = INT16_MIN;
	int32_t x218 = INT32_MIN;
	static uint64_t x219 = 1261139415394LLU;
	int8_t x220 = INT8_MIN;
	static int32_t t47 = 28693;

	t47 = (x217*((x218+x219)<=x220));

	if (t47 != -32768) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x222 = INT8_MIN;
	volatile int16_t x223 = 0;

	t48 = (x221*((x222+x223)<=x224));

	if (t48 != 255) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x231 = 42LLU;
	static volatile int32_t t49 = -491556734;

	t49 = (x229*((x230+x231)<=x232));

	if (t49 != 127) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x233 = 61U;
	static uint32_t x234 = UINT32_MAX;
	volatile int32_t x235 = INT32_MIN;
	uint64_t x236 = 8317656LLU;
	int32_t t50 = -1676455;

	t50 = (x233*((x234+x235)<=x236));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x237 = -1;
	uint64_t x238 = UINT64_MAX;
	int16_t x239 = INT16_MIN;
	int8_t x240 = -15;
	volatile int32_t t51 = 30314899;

	t51 = (x237*((x238+x239)<=x240));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x241 = 40U;
	static int8_t x242 = -1;
	int64_t x243 = 345980584057991LL;
	static volatile int64_t x244 = -4696LL;
	volatile int32_t t52 = -333860;

	t52 = (x241*((x242+x243)<=x244));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x245 = INT32_MIN;
	static int32_t x246 = 2589833;
	int32_t x247 = INT32_MIN;
	uint16_t x248 = UINT16_MAX;
	int32_t t53 = INT32_MIN;

	t53 = (x245*((x246+x247)<=x248));

	if (t53 != INT32_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x249 = 2U;
	static int16_t x250 = 4;
	uint64_t x251 = 27LLU;
	int32_t t54 = 3282077;

	t54 = (x249*((x250+x251)<=x252));

	if (t54 != 2) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x257 = UINT16_MAX;
	volatile uint16_t x258 = 2U;
	int8_t x260 = 1;

	t55 = (x257*((x258+x259)<=x260));

	if (t55 != 65535) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x261 = 2814;
	static int16_t x262 = INT16_MIN;
	volatile int32_t t56 = -5743;

	t56 = (x261*((x262+x263)<=x264));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x265 = 18U;
	static volatile int16_t x266 = INT16_MAX;
	uint64_t x267 = UINT64_MAX;
	volatile int32_t t57 = 341757180;

	t57 = (x265*((x266+x267)<=x268));

	if (t57 != 18) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x269 = 1;
	int64_t x270 = -6751958750LL;
	volatile int8_t x271 = INT8_MIN;
	uint8_t x272 = UINT8_MAX;
	static int32_t t58 = -173715336;

	t58 = (x269*((x270+x271)<=x272));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x273 = INT8_MIN;
	uint64_t x275 = UINT64_MAX;
	static uint16_t x276 = 341U;
	static int32_t t59 = 279742;

	t59 = (x273*((x274+x275)<=x276));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x277 = -1LL;
	volatile uint16_t x278 = 27386U;
	uint16_t x279 = 0U;
	static volatile int64_t t60 = 471864810165LL;

	t60 = (x277*((x278+x279)<=x280));

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x294 = -1;
	int8_t x296 = INT8_MIN;
	volatile int32_t t61 = 9774;

	t61 = (x293*((x294+x295)<=x296));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x297 = 69412548;
	uint64_t x298 = 213985094162LLU;
	int64_t x299 = 125531707314135101LL;
	uint8_t x300 = 6U;

	t62 = (x297*((x298+x299)<=x300));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x301 = INT16_MIN;
	int32_t x303 = -1;
	int8_t x304 = -16;

	t63 = (x301*((x302+x303)<=x304));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x309 = -1;
	static uint32_t x310 = UINT32_MAX;
	int32_t x311 = -41481;
	uint64_t x312 = UINT64_MAX;
	volatile int32_t t64 = -350;

	t64 = (x309*((x310+x311)<=x312));

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x314 = -1;

	t65 = (x313*((x314+x315)<=x316));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x318 = INT32_MIN;
	int32_t x319 = 47;
	int64_t x320 = INT64_MAX;

	t66 = (x317*((x318+x319)<=x320));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x321 = 1571;
	int8_t x322 = -1;
	uint16_t x324 = UINT16_MAX;
	int32_t t67 = 19;

	t67 = (x321*((x322+x323)<=x324));

	if (t67 != 1571) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x325 = 1LLU;
	int32_t x327 = INT32_MIN;
	int64_t x328 = INT64_MIN;

	t68 = (x325*((x326+x327)<=x328));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x329 = INT64_MIN;
	uint32_t x330 = 44845881U;
	int16_t x332 = 100;
	volatile int64_t t69 = 233LL;

	t69 = (x329*((x330+x331)<=x332));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x333 = 1;
	uint16_t x336 = 7101U;
	int32_t t70 = 1133526;

	t70 = (x333*((x334+x335)<=x336));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x338 = INT8_MIN;
	volatile uint64_t x339 = 10337164768228LLU;
	static volatile int8_t x340 = 0;
	int32_t t71 = -38;

	t71 = (x337*((x338+x339)<=x340));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x345 = INT16_MIN;
	uint32_t x347 = UINT32_MAX;
	int32_t t72 = 10913;

	t72 = (x345*((x346+x347)<=x348));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x349 = -1;
	uint32_t x350 = UINT32_MAX;
	uint32_t x352 = 1U;
	int32_t t73 = -16;

	t73 = (x349*((x350+x351)<=x352));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x361 = UINT16_MAX;
	int64_t x362 = -453283LL;
	int32_t x363 = -22595979;
	static int64_t x364 = 264891797340026LL;
	int32_t t74 = 2;

	t74 = (x361*((x362+x363)<=x364));

	if (t74 != 65535) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x365 = 18U;
	volatile int8_t x366 = -1;
	static volatile int64_t x367 = INT64_MAX;
	volatile int16_t x368 = 3583;

	t75 = (x365*((x366+x367)<=x368));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x370 = INT64_MIN;
	int32_t x371 = 28415510;

	t76 = (x369*((x370+x371)<=x372));

	if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x377 = -1;
	int64_t x378 = -1LL;
	uint16_t x379 = 175U;

	t77 = (x377*((x378+x379)<=x380));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x381 = 0;
	int16_t x382 = INT16_MIN;
	int32_t x383 = INT32_MAX;

	t78 = (x381*((x382+x383)<=x384));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x385 = -1LL;
	static uint64_t x386 = 3743129LLU;
	int16_t x388 = INT16_MIN;
	volatile int64_t t79 = -1800761LL;

	t79 = (x385*((x386+x387)<=x388));

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x390 = INT32_MIN;
	volatile int32_t x391 = INT32_MAX;
	uint32_t x392 = 7296687U;
	volatile int32_t t80 = 869972;

	t80 = (x389*((x390+x391)<=x392));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x397 = UINT64_MAX;
	static int32_t x398 = 55;
	volatile uint64_t t81 = UINT64_MAX;

	t81 = (x397*((x398+x399)<=x400));

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x401 = -1LL;
	int32_t x402 = 62;
	volatile int32_t x403 = 58628;

	t82 = (x401*((x402+x403)<=x404));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x405 = INT8_MIN;
	static volatile uint32_t x406 = 1U;
	uint64_t x408 = 239457LLU;
	static volatile int32_t t83 = 483345733;

	t83 = (x405*((x406+x407)<=x408));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x409 = INT16_MIN;
	int16_t x410 = INT16_MIN;
	uint16_t x411 = UINT16_MAX;
	volatile int16_t x412 = 63;
	volatile int32_t t84 = 100;

	t84 = (x409*((x410+x411)<=x412));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x413 = 0U;
	static volatile uint64_t x415 = UINT64_MAX;
	int64_t x416 = -193077193237387LL;
	volatile int32_t t85 = 22;

	t85 = (x413*((x414+x415)<=x416));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x417 = 42U;
	static uint64_t x418 = 6021LLU;
	static int8_t x420 = INT8_MIN;
	int32_t t86 = 1;

	t86 = (x417*((x418+x419)<=x420));

	if (t86 != 42) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x421 = INT8_MIN;
	int32_t x422 = INT32_MAX;
	int16_t x423 = INT16_MIN;
	static int32_t t87 = 22235;

	t87 = (x421*((x422+x423)<=x424));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x425 = INT64_MAX;
	volatile int64_t x426 = -1LL;
	uint16_t x428 = UINT16_MAX;
	volatile int64_t t88 = INT64_MAX;

	t88 = (x425*((x426+x427)<=x428));

	if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x430 = 422009309U;
	int64_t x431 = INT64_MIN;
	int32_t x432 = INT32_MAX;
	static int32_t t89 = 294358949;

	t89 = (x429*((x430+x431)<=x432));

	if (t89 != 2) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x433 = 40U;
	uint64_t x434 = UINT64_MAX;
	volatile int32_t t90 = -57439107;

	t90 = (x433*((x434+x435)<=x436));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x441 = -4;
	volatile uint64_t x442 = UINT64_MAX;
	volatile int64_t x443 = 611310401145534749LL;
	int32_t x444 = -2661329;
	int32_t t91 = -7686;

	t91 = (x441*((x442+x443)<=x444));

	if (t91 != -4) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x445 = 15309U;
	uint32_t x446 = UINT32_MAX;
	int32_t x447 = 1;
	volatile uint16_t x448 = UINT16_MAX;
	uint32_t t92 = 0U;

	t92 = (x445*((x446+x447)<=x448));

	if (t92 != 15309U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x453 = -145LL;
	int16_t x455 = 1667;
	volatile uint64_t x456 = 2LLU;

	t93 = (x453*((x454+x455)<=x456));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x457 = 3819U;
	int64_t x458 = INT64_MIN;
	uint16_t x459 = 10U;
	int16_t x460 = INT16_MAX;
	uint32_t t94 = 254U;

	t94 = (x457*((x458+x459)<=x460));

	if (t94 != 3819U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x461 = 0;
	int64_t x462 = INT64_MIN;
	int32_t x463 = 6;
	static uint16_t x464 = UINT16_MAX;
	int32_t t95 = -231;

	t95 = (x461*((x462+x463)<=x464));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x465 = UINT8_MAX;
	uint16_t x466 = 3U;
	volatile uint16_t x467 = UINT16_MAX;
	int32_t t96 = 882143;

	t96 = (x465*((x466+x467)<=x468));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x469 = 5573287919016LLU;
	int8_t x470 = 0;
	int64_t x472 = -1366835992254880296LL;
	volatile uint64_t t97 = 102327816LLU;

	t97 = (x469*((x470+x471)<=x472));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x474 = 2464LL;
	uint32_t x475 = 8542206U;
	int64_t x476 = INT64_MIN;
	volatile int32_t t98 = -265197369;

	t98 = (x473*((x474+x475)<=x476));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x481 = 47LLU;
	uint8_t x482 = 5U;
	volatile int32_t x483 = 159408;
	int16_t x484 = INT16_MIN;
	volatile uint64_t t99 = 13378LLU;

	t99 = (x481*((x482+x483)<=x484));

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

