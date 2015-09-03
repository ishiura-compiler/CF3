#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x6 = -1;
static int64_t t1 = INT64_MAX;
int8_t x16 = INT8_MAX;
static int32_t t3 = 1;
volatile int32_t t4 = INT32_MIN;
static int32_t x24 = INT32_MAX;
static uint16_t x28 = 20U;
int8_t x33 = -1;
volatile uint32_t x35 = 1U;
volatile int32_t t9 = -56069034;
static int64_t x41 = INT64_MAX;
uint64_t x47 = 4460725LLU;
volatile uint16_t x48 = UINT16_MAX;
uint8_t x50 = 8U;
uint32_t x52 = 31050637U;
int32_t t13 = INT32_MAX;
int32_t t14 = 112923889;
int8_t x69 = -48;
int32_t x71 = 3;
int32_t t15 = 2548821;
volatile int32_t t16 = 39280;
static uint8_t x78 = 1U;
static int8_t x80 = INT8_MIN;
volatile int32_t t17 = -21;
int64_t x88 = INT64_MAX;
static int32_t x91 = 111327;
volatile int8_t x98 = -2;
int8_t x109 = INT8_MAX;
volatile int32_t t23 = 1888;
static int64_t x126 = -1LL;
uint8_t x131 = 9U;
volatile uint16_t x133 = 6U;
volatile uint16_t x142 = 4U;
static uint64_t t30 = 207578LLU;
static int16_t x156 = -1;
int16_t x163 = INT16_MAX;
static int32_t x174 = -1;
static int64_t x178 = INT64_MAX;
uint32_t x190 = UINT32_MAX;
static uint32_t x195 = UINT32_MAX;
volatile uint32_t x196 = 7U;
volatile uint32_t t40 = 4U;
int64_t x213 = INT64_MIN;
int32_t t45 = 7748;
uint32_t x222 = UINT32_MAX;
int8_t x230 = 2;
volatile uint64_t x236 = 251334566207643258LLU;
volatile int64_t x237 = -1LL;
uint16_t x244 = 2743U;
uint16_t x247 = UINT16_MAX;
volatile int16_t x248 = 0;
static int32_t t53 = -6581365;
uint32_t x256 = 20391344U;
volatile int32_t x258 = 15975;
int8_t x260 = 0;
int64_t x267 = -691417LL;
volatile int64_t x271 = 13074223230421LL;
int64_t x273 = 1744LL;
static int16_t x274 = 117;
uint16_t x280 = UINT16_MAX;
int32_t t61 = -55;
int8_t x286 = -19;
volatile int64_t x308 = 50LL;
static int64_t t65 = 34011262864062LL;
int32_t x310 = INT32_MIN;
uint8_t x312 = 0U;
int8_t x322 = INT8_MAX;
int32_t t68 = -67;
int64_t x325 = -1LL;
static uint32_t x327 = UINT32_MAX;
int32_t x328 = INT32_MAX;
int32_t t69 = INT32_MAX;
int32_t x332 = -1;
int64_t x342 = -1LL;
static uint64_t x344 = UINT64_MAX;
int8_t x345 = 0;
uint32_t x353 = 31U;
int64_t x360 = INT64_MAX;
uint64_t x365 = 382232669033LLU;
static int8_t x378 = -1;
int8_t x380 = INT8_MAX;
int32_t t80 = 4835;
int64_t x381 = INT64_MAX;
uint32_t x384 = 7509898U;
volatile uint32_t t81 = 4960U;
int64_t x386 = INT64_MIN;
int16_t x391 = 557;
static int16_t x392 = 0;
uint16_t x394 = 111U;
uint8_t x395 = UINT8_MAX;
volatile int64_t x411 = -844182393107655LL;
int64_t t88 = INT64_MIN;
int8_t x417 = INT8_MAX;
uint16_t x421 = UINT16_MAX;
static int8_t x424 = INT8_MIN;
static int32_t x425 = -1;
uint32_t x432 = 39U;
volatile uint8_t x433 = UINT8_MAX;
int64_t x434 = -37746013LL;
static uint32_t x435 = 16182U;
static uint32_t x446 = UINT32_MAX;
int16_t x455 = INT16_MIN;


void f0(void) {
	int8_t x1 = INT8_MAX;
	int16_t x2 = INT16_MIN;
	int64_t x3 = -1LL;
	volatile uint64_t x4 = UINT64_MAX;
	uint64_t t0 = UINT64_MAX;

	t0 = ((x1==(x2+x3))+x4);

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	static int32_t x7 = -1;
	int64_t x8 = INT64_MAX;

	t1 = ((x5==(x6+x7))+x8);

	if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MAX;
	int16_t x10 = INT16_MIN;
	static uint64_t x11 = UINT64_MAX;
	int32_t x12 = INT32_MIN;
	int32_t t2 = INT32_MIN;

	t2 = ((x9==(x10+x11))+x12);

	if (t2 != INT32_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 7U;
	static volatile int32_t x14 = 206;
	int64_t x15 = INT64_MIN;

	t3 = ((x13==(x14+x15))+x16);

	if (t3 != 127) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = UINT8_MAX;
	int16_t x18 = -1;
	int32_t x19 = -1;
	static int32_t x20 = INT32_MIN;

	t4 = ((x17==(x18+x19))+x20);

	if (t4 != INT32_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = INT8_MIN;
	volatile uint32_t x22 = 59U;
	int32_t x23 = INT32_MAX;
	int32_t t5 = INT32_MAX;

	t5 = ((x21==(x22+x23))+x24);

	if (t5 != INT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -54;
	static volatile int8_t x26 = INT8_MIN;
	int16_t x27 = INT16_MAX;
	int32_t t6 = -1;

	t6 = ((x25==(x26+x27))+x28);

	if (t6 != 20) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x29 = INT32_MIN;
	int16_t x30 = -1;
	int64_t x31 = -1LL;
	int64_t x32 = INT64_MAX;
	int64_t t7 = INT64_MAX;

	t7 = ((x29==(x30+x31))+x32);

	if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x34 = 2;
	int16_t x36 = 0;
	volatile int32_t t8 = 6225;

	t8 = ((x33==(x34+x35))+x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = -1;
	uint16_t x38 = 1U;
	static int16_t x39 = INT16_MAX;
	int8_t x40 = -3;

	t9 = ((x37==(x38+x39))+x40);

	if (t9 != -3) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x42 = 134150LL;
	uint64_t x43 = 3354LLU;
	volatile int16_t x44 = INT16_MIN;
	int32_t t10 = 624;

	t10 = ((x41==(x42+x43))+x44);

	if (t10 != -32768) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = 7U;
	uint16_t x46 = 8526U;
	volatile int32_t t11 = 0;

	t11 = ((x45==(x46+x47))+x48);

	if (t11 != 65535) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = 6218;
	int16_t x51 = -1647;
	volatile uint32_t t12 = 4U;

	t12 = ((x49==(x50+x51))+x52);

	if (t12 != 31050637U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = 1;
	uint32_t x54 = UINT32_MAX;
	volatile int8_t x55 = -1;
	int32_t x56 = INT32_MAX;

	t13 = ((x53==(x54+x55))+x56);

	if (t13 != INT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x65 = INT32_MIN;
	uint32_t x66 = 209590210U;
	int16_t x67 = -1;
	static int8_t x68 = INT8_MIN;

	t14 = ((x65==(x66+x67))+x68);

	if (t14 != -128) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x70 = 6749U;
	int8_t x72 = INT8_MIN;

	t15 = ((x69==(x70+x71))+x72);

	if (t15 != -128) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x73 = -1LL;
	volatile uint16_t x74 = 1U;
	int16_t x75 = -266;
	static int32_t x76 = -1;

	t16 = ((x73==(x74+x75))+x76);

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int32_t x77 = 1;
	int32_t x79 = 523856440;

	t17 = ((x77==(x78+x79))+x80);

	if (t17 != -128) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x85 = INT8_MAX;
	volatile uint8_t x86 = 66U;
	volatile int64_t x87 = -1LL;
	int64_t t18 = INT64_MAX;

	t18 = ((x85==(x86+x87))+x88);

	if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x89 = INT16_MIN;
	uint64_t x90 = 15824465313LLU;
	volatile int16_t x92 = 90;
	int32_t t19 = 40365876;

	t19 = ((x89==(x90+x91))+x92);

	if (t19 != 90) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x93 = 99938213283598890LLU;
	static int8_t x94 = INT8_MIN;
	volatile int16_t x95 = 3;
	int64_t x96 = -1LL;
	int64_t t20 = -31861LL;

	t20 = ((x93==(x94+x95))+x96);

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x97 = 2718U;
	uint32_t x99 = 7595U;
	int8_t x100 = -1;
	int32_t t21 = 387056;

	t21 = ((x97==(x98+x99))+x100);

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x105 = 66398138U;
	uint32_t x106 = 1U;
	volatile int16_t x107 = -3524;
	int64_t x108 = INT64_MAX;
	volatile int64_t t22 = INT64_MAX;

	t22 = ((x105==(x106+x107))+x108);

	if (t22 != INT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x110 = 111021U;
	static int32_t x111 = INT32_MIN;
	uint16_t x112 = 1479U;

	t23 = ((x109==(x110+x111))+x112);

	if (t23 != 1479) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x113 = INT32_MAX;
	static volatile int64_t x114 = INT64_MIN;
	uint64_t x115 = 1776405111060LLU;
	int16_t x116 = INT16_MIN;
	static volatile int32_t t24 = -1;

	t24 = ((x113==(x114+x115))+x116);

	if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x125 = 13U;
	static int32_t x127 = -1;
	static int16_t x128 = -241;
	volatile int32_t t25 = -1;

	t25 = ((x125==(x126+x127))+x128);

	if (t25 != -241) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x129 = 4U;
	uint16_t x130 = 276U;
	static volatile uint8_t x132 = 38U;
	volatile int32_t t26 = 3;

	t26 = ((x129==(x130+x131))+x132);

	if (t26 != 38) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x134 = 43U;
	uint16_t x135 = 1435U;
	int32_t x136 = -1;
	int32_t t27 = 242156;

	t27 = ((x133==(x134+x135))+x136);

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x137 = INT16_MIN;
	int8_t x138 = 28;
	static volatile uint8_t x139 = 7U;
	uint8_t x140 = 37U;
	int32_t t28 = 53343435;

	t28 = ((x137==(x138+x139))+x140);

	if (t28 != 37) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x141 = -1;
	uint16_t x143 = 13U;
	int64_t x144 = 67852274706320LL;
	volatile int64_t t29 = 434323494962724LL;

	t29 = ((x141==(x142+x143))+x144);

	if (t29 != 67852274706320LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x145 = 2U;
	static uint8_t x146 = 0U;
	volatile int8_t x147 = 54;
	static uint64_t x148 = 114370842972LLU;

	t30 = ((x145==(x146+x147))+x148);

	if (t30 != 114370842972LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x153 = INT32_MIN;
	int32_t x154 = -1;
	volatile int64_t x155 = -1LL;
	int32_t t31 = -164977705;

	t31 = ((x153==(x154+x155))+x156);

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x157 = 139U;
	uint64_t x158 = UINT64_MAX;
	static uint32_t x159 = 1056827734U;
	uint32_t x160 = 62636U;
	uint32_t t32 = 34034U;

	t32 = ((x157==(x158+x159))+x160);

	if (t32 != 62636U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x161 = INT32_MAX;
	int64_t x162 = -218102216623977862LL;
	volatile int64_t x164 = -1LL;
	int64_t t33 = 13LL;

	t33 = ((x161==(x162+x163))+x164);

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x165 = INT16_MAX;
	uint64_t x166 = UINT64_MAX;
	int64_t x167 = -5199977645916231LL;
	uint64_t x168 = 2405LLU;
	uint64_t t34 = 191731269LLU;

	t34 = ((x165==(x166+x167))+x168);

	if (t34 != 2405LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x169 = INT64_MAX;
	uint32_t x170 = UINT32_MAX;
	int64_t x171 = -1LL;
	int8_t x172 = INT8_MIN;
	static int32_t t35 = -865599;

	t35 = ((x169==(x170+x171))+x172);

	if (t35 != -128) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x173 = INT32_MAX;
	int16_t x175 = INT16_MIN;
	static uint16_t x176 = 1059U;
	int32_t t36 = -54654287;

	t36 = ((x173==(x174+x175))+x176);

	if (t36 != 1059) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x177 = UINT64_MAX;
	static int16_t x179 = -1;
	int16_t x180 = -2;
	volatile int32_t t37 = -8;

	t37 = ((x177==(x178+x179))+x180);

	if (t37 != -2) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x181 = UINT32_MAX;
	int64_t x182 = INT64_MIN;
	int8_t x183 = 2;
	static uint16_t x184 = UINT16_MAX;
	volatile int32_t t38 = -1;

	t38 = ((x181==(x182+x183))+x184);

	if (t38 != 65535) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x189 = -1;
	volatile uint32_t x191 = 177345U;
	uint32_t x192 = 6U;
	uint32_t t39 = 1391666327U;

	t39 = ((x189==(x190+x191))+x192);

	if (t39 != 6U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x193 = INT32_MAX;
	int8_t x194 = -1;

	t40 = ((x193==(x194+x195))+x196);

	if (t40 != 7U) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x197 = -1;
	volatile int32_t x198 = INT32_MIN;
	static volatile int64_t x199 = -1LL;
	int32_t x200 = -1;
	volatile int32_t t41 = -18;

	t41 = ((x197==(x198+x199))+x200);

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x201 = 35U;
	int8_t x202 = INT8_MIN;
	int16_t x203 = INT16_MAX;
	int16_t x204 = INT16_MAX;
	static int32_t t42 = -78464;

	t42 = ((x201==(x202+x203))+x204);

	if (t42 != 32767) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x205 = INT8_MIN;
	static int16_t x206 = INT16_MIN;
	int16_t x207 = INT16_MIN;
	int64_t x208 = INT64_MAX;
	volatile int64_t t43 = INT64_MAX;

	t43 = ((x205==(x206+x207))+x208);

	if (t43 != INT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x214 = 8663910LL;
	int16_t x215 = -1;
	uint16_t x216 = 56U;
	volatile int32_t t44 = -15757668;

	t44 = ((x213==(x214+x215))+x216);

	if (t44 != 56) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x217 = INT8_MIN;
	uint16_t x218 = 2560U;
	int8_t x219 = -1;
	int16_t x220 = -1;

	t45 = ((x217==(x218+x219))+x220);

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x221 = INT64_MAX;
	int16_t x223 = INT16_MIN;
	static uint16_t x224 = UINT16_MAX;
	int32_t t46 = 1;

	t46 = ((x221==(x222+x223))+x224);

	if (t46 != 65535) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int64_t x225 = 321551791693985LL;
	uint8_t x226 = 42U;
	static int16_t x227 = -12949;
	int16_t x228 = INT16_MIN;
	volatile int32_t t47 = -868;

	t47 = ((x225==(x226+x227))+x228);

	if (t47 != -32768) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x229 = 6LL;
	uint32_t x231 = 752808895U;
	static volatile int8_t x232 = -31;
	int32_t t48 = -461;

	t48 = ((x229==(x230+x231))+x232);

	if (t48 != -31) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x233 = 80133U;
	uint16_t x234 = 44U;
	int16_t x235 = INT16_MIN;
	uint64_t t49 = 287LLU;

	t49 = ((x233==(x234+x235))+x236);

	if (t49 != 251334566207643258LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x238 = UINT32_MAX;
	int16_t x239 = 12;
	int16_t x240 = -1;
	int32_t t50 = 81953;

	t50 = ((x237==(x238+x239))+x240);

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x241 = -1;
	volatile int32_t x242 = INT32_MIN;
	int16_t x243 = INT16_MAX;
	int32_t t51 = 28312;

	t51 = ((x241==(x242+x243))+x244);

	if (t51 != 2743) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x245 = INT32_MIN;
	int32_t x246 = -8944;
	int32_t t52 = -92133297;

	t52 = ((x245==(x246+x247))+x248);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x249 = UINT32_MAX;
	static int32_t x250 = -1;
	static int16_t x251 = -13;
	static volatile int8_t x252 = INT8_MIN;

	t53 = ((x249==(x250+x251))+x252);

	if (t53 != -128) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x253 = 0LLU;
	int8_t x254 = -7;
	static int16_t x255 = INT16_MIN;
	uint32_t t54 = 244198028U;

	t54 = ((x253==(x254+x255))+x256);

	if (t54 != 20391344U) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x257 = 0U;
	int64_t x259 = -3600632429019738118LL;
	volatile int32_t t55 = -399191044;

	t55 = ((x257==(x258+x259))+x260);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x261 = 241231;
	static uint32_t x262 = 75744557U;
	static int16_t x263 = -1;
	static int64_t x264 = INT64_MAX;
	volatile int64_t t56 = INT64_MAX;

	t56 = ((x261==(x262+x263))+x264);

	if (t56 != INT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x265 = 13;
	uint64_t x266 = UINT64_MAX;
	int32_t x268 = 28;
	volatile int32_t t57 = -841516;

	t57 = ((x265==(x266+x267))+x268);

	if (t57 != 28) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x269 = 3;
	uint8_t x270 = UINT8_MAX;
	int16_t x272 = 1281;
	int32_t t58 = 56729;

	t58 = ((x269==(x270+x271))+x272);

	if (t58 != 1281) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x275 = UINT64_MAX;
	int64_t x276 = 90145634999LL;
	static volatile int64_t t59 = 0LL;

	t59 = ((x273==(x274+x275))+x276);

	if (t59 != 90145634999LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x277 = UINT8_MAX;
	static volatile int16_t x278 = 4970;
	int32_t x279 = 433477;
	volatile int32_t t60 = 0;

	t60 = ((x277==(x278+x279))+x280);

	if (t60 != 65535) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x281 = 10U;
	static int8_t x282 = INT8_MIN;
	int16_t x283 = INT16_MIN;
	int8_t x284 = 13;

	t61 = ((x281==(x282+x283))+x284);

	if (t61 != 13) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x285 = INT64_MAX;
	uint64_t x287 = UINT64_MAX;
	uint64_t x288 = 5246808LLU;
	static volatile uint64_t t62 = 1402677329040468892LLU;

	t62 = ((x285==(x286+x287))+x288);

	if (t62 != 5246808LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x289 = -4759;
	static volatile int16_t x290 = INT16_MIN;
	uint16_t x291 = 40U;
	uint64_t x292 = 2796832084908306045LLU;
	static uint64_t t63 = 29353182671198103LLU;

	t63 = ((x289==(x290+x291))+x292);

	if (t63 != 2796832084908306045LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x297 = 1U;
	int64_t x298 = INT64_MAX;
	int32_t x299 = -1;
	uint8_t x300 = 16U;
	int32_t t64 = -63378;

	t64 = ((x297==(x298+x299))+x300);

	if (t64 != 16) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x305 = -1;
	int32_t x306 = INT32_MIN;
	static int8_t x307 = INT8_MAX;

	t65 = ((x305==(x306+x307))+x308);

	if (t65 != 50LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x309 = 6074U;
	int64_t x311 = -1LL;
	static volatile int32_t t66 = 2181393;

	t66 = ((x309==(x310+x311))+x312);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x313 = -14930632590647LL;
	volatile int16_t x314 = INT16_MAX;
	volatile int16_t x315 = -1;
	int32_t x316 = INT32_MAX;
	static volatile int32_t t67 = INT32_MAX;

	t67 = ((x313==(x314+x315))+x316);

	if (t67 != INT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x321 = INT64_MAX;
	int16_t x323 = INT16_MIN;
	static volatile int8_t x324 = -3;

	t68 = ((x321==(x322+x323))+x324);

	if (t68 != -3) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x326 = INT32_MAX;

	t69 = ((x325==(x326+x327))+x328);

	if (t69 != INT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x329 = 0;
	static uint16_t x330 = UINT16_MAX;
	int32_t x331 = -1;
	int32_t t70 = -10;

	t70 = ((x329==(x330+x331))+x332);

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x333 = UINT8_MAX;
	volatile int64_t x334 = INT64_MAX;
	int8_t x335 = INT8_MIN;
	uint16_t x336 = UINT16_MAX;
	volatile int32_t t71 = -3;

	t71 = ((x333==(x334+x335))+x336);

	if (t71 != 65535) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x337 = INT16_MIN;
	volatile uint8_t x338 = 3U;
	uint8_t x339 = 12U;
	int32_t x340 = INT32_MIN;
	int32_t t72 = INT32_MIN;

	t72 = ((x337==(x338+x339))+x340);

	if (t72 != INT32_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x341 = 29442660LLU;
	uint16_t x343 = 157U;
	volatile uint64_t t73 = UINT64_MAX;

	t73 = ((x341==(x342+x343))+x344);

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x346 = 49U;
	static int32_t x347 = -1;
	int8_t x348 = -2;
	volatile int32_t t74 = 2856;

	t74 = ((x345==(x346+x347))+x348);

	if (t74 != -2) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x349 = UINT16_MAX;
	int8_t x350 = -1;
	uint64_t x351 = UINT64_MAX;
	static int64_t x352 = -1LL;
	int64_t t75 = -6726LL;

	t75 = ((x349==(x350+x351))+x352);

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x354 = -1;
	static int64_t x355 = 269LL;
	int16_t x356 = 135;
	int32_t t76 = 1386884;

	t76 = ((x353==(x354+x355))+x356);

	if (t76 != 135) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x357 = -278;
	int16_t x358 = -1;
	static uint8_t x359 = 3U;
	volatile int64_t t77 = INT64_MAX;

	t77 = ((x357==(x358+x359))+x360);

	if (t77 != INT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x361 = INT8_MIN;
	uint64_t x362 = 265992575LLU;
	static volatile int64_t x363 = 5LL;
	uint32_t x364 = UINT32_MAX;
	volatile uint32_t t78 = UINT32_MAX;

	t78 = ((x361==(x362+x363))+x364);

	if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x366 = 180369;
	int16_t x367 = INT16_MIN;
	static int16_t x368 = INT16_MIN;
	volatile int32_t t79 = 1;

	t79 = ((x365==(x366+x367))+x368);

	if (t79 != -32768) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x377 = 688871518804696802LL;
	int32_t x379 = 2855989;

	t80 = ((x377==(x378+x379))+x380);

	if (t80 != 127) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x382 = 281;
	int32_t x383 = -487;

	t81 = ((x381==(x382+x383))+x384);

	if (t81 != 7509898U) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x385 = INT16_MAX;
	static volatile int16_t x387 = 125;
	int64_t x388 = INT64_MIN;
	volatile int64_t t82 = INT64_MIN;

	t82 = ((x385==(x386+x387))+x388);

	if (t82 != INT64_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x389 = INT8_MAX;
	uint16_t x390 = UINT16_MAX;
	volatile int32_t t83 = -2038;

	t83 = ((x389==(x390+x391))+x392);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x393 = -154513722385LL;
	int16_t x396 = -1;
	int32_t t84 = 59816863;

	t84 = ((x393==(x394+x395))+x396);

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x397 = -1;
	volatile int32_t x398 = -237122;
	volatile int16_t x399 = 156;
	static int16_t x400 = INT16_MIN;
	int32_t t85 = -37234534;

	t85 = ((x397==(x398+x399))+x400);

	if (t85 != -32768) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int32_t x401 = INT32_MIN;
	uint8_t x402 = 74U;
	int32_t x403 = INT32_MIN;
	int8_t x404 = INT8_MAX;
	int32_t t86 = -3;

	t86 = ((x401==(x402+x403))+x404);

	if (t86 != 127) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x409 = 27270681U;
	int32_t x410 = 21410173;
	volatile int16_t x412 = INT16_MIN;
	volatile int32_t t87 = 432186705;

	t87 = ((x409==(x410+x411))+x412);

	if (t87 != -32768) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x413 = INT64_MIN;
	uint32_t x414 = 378130736U;
	uint64_t x415 = 0LLU;
	int64_t x416 = INT64_MIN;

	t88 = ((x413==(x414+x415))+x416);

	if (t88 != INT64_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x418 = UINT8_MAX;
	static int64_t x419 = -362642194194948041LL;
	uint8_t x420 = 23U;
	volatile int32_t t89 = 6711;

	t89 = ((x417==(x418+x419))+x420);

	if (t89 != 23) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x422 = 148740018;
	static uint16_t x423 = 48U;
	int32_t t90 = 754;

	t90 = ((x421==(x422+x423))+x424);

	if (t90 != -128) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x426 = INT16_MAX;
	int16_t x427 = INT16_MIN;
	int16_t x428 = INT16_MIN;
	int32_t t91 = -949;

	t91 = ((x425==(x426+x427))+x428);

	if (t91 != -32767) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int16_t x429 = INT16_MIN;
	volatile uint32_t x430 = UINT32_MAX;
	int64_t x431 = -323274663495LL;
	uint32_t t92 = 0U;

	t92 = ((x429==(x430+x431))+x432);

	if (t92 != 39U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x436 = INT64_MAX;
	volatile int64_t t93 = INT64_MAX;

	t93 = ((x433==(x434+x435))+x436);

	if (t93 != INT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x437 = 2;
	volatile int32_t x438 = 660;
	int32_t x439 = INT32_MIN;
	int16_t x440 = INT16_MIN;
	int32_t t94 = -8;

	t94 = ((x437==(x438+x439))+x440);

	if (t94 != -32768) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x441 = -62;
	int32_t x442 = INT32_MAX;
	uint32_t x443 = 2U;
	static uint32_t x444 = 30813U;
	static volatile uint32_t t95 = 2U;

	t95 = ((x441==(x442+x443))+x444);

	if (t95 != 30813U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x445 = INT16_MIN;
	static volatile int32_t x447 = INT32_MIN;
	static int64_t x448 = -1LL;
	static volatile int64_t t96 = -145345597163248200LL;

	t96 = ((x445==(x446+x447))+x448);

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int64_t x449 = -1LL;
	int32_t x450 = -1;
	uint16_t x451 = UINT16_MAX;
	int16_t x452 = -1;
	int32_t t97 = -367866064;

	t97 = ((x449==(x450+x451))+x452);

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x453 = -6;
	uint64_t x454 = 780420976020947828LLU;
	static volatile int32_t x456 = -1;
	static int32_t t98 = -131;

	t98 = ((x453==(x454+x455))+x456);

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x457 = 0U;
	uint64_t x458 = 76616LLU;
	volatile int8_t x459 = -1;
	uint64_t x460 = UINT64_MAX;
	volatile uint64_t t99 = UINT64_MAX;

	t99 = ((x457==(x458+x459))+x460);

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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

