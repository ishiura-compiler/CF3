#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = 0LL;
int16_t x9 = -19;
static int64_t x28 = INT64_MIN;
static uint16_t x34 = 486U;
int32_t t8 = 1;
int16_t x48 = -1;
int32_t x54 = INT32_MIN;
static uint16_t x55 = 4773U;
uint8_t x56 = UINT8_MAX;
static int32_t t11 = -655;
uint8_t x59 = 13U;
int8_t x60 = -1;
static uint8_t x66 = UINT8_MAX;
uint32_t x67 = UINT32_MAX;
int8_t x71 = INT8_MAX;
int64_t x73 = INT64_MAX;
volatile int64_t x74 = 8539LL;
int8_t x77 = INT8_MAX;
uint8_t x78 = 2U;
volatile int8_t x87 = INT8_MAX;
int16_t x88 = INT16_MAX;
static int16_t x89 = INT16_MIN;
int32_t t19 = 467706506;
volatile int32_t t21 = -99561110;
uint16_t x101 = UINT16_MAX;
volatile int32_t x105 = -128511;
int16_t x112 = -1;
static uint16_t x115 = 28171U;
uint8_t x126 = 50U;
int32_t x128 = -3299;
uint64_t x138 = 12203359LLU;
int16_t x141 = -1;
int32_t x144 = INT32_MIN;
int64_t x146 = -1LL;
volatile int64_t x147 = -8086547399LL;
int8_t x151 = INT8_MIN;
static volatile int32_t t32 = -6836522;
volatile uint8_t x170 = 10U;
int16_t x176 = INT16_MAX;
static volatile uint32_t x182 = 157U;
uint8_t x184 = 125U;
static volatile int32_t t38 = 306;
int8_t x191 = 0;
volatile int32_t x196 = -1;
int32_t x197 = INT32_MIN;
int16_t x201 = INT16_MIN;
static int64_t x220 = -3LL;
int32_t t45 = -63291;
uint32_t x226 = 2305697U;
volatile int32_t x227 = INT32_MIN;
uint16_t x229 = 12U;
volatile int16_t x230 = -1;
int32_t x232 = INT32_MIN;
int8_t x244 = -14;
int32_t x245 = -19;
int64_t x253 = -3424215780765774386LL;
int8_t x258 = -1;
int16_t x279 = 2;
uint8_t x280 = 64U;
static int8_t x281 = -5;
static volatile int64_t x285 = -1LL;
uint8_t x286 = 0U;
volatile int32_t t61 = -8998;
static uint32_t x289 = 209430145U;
volatile uint8_t x291 = UINT8_MAX;
static int32_t t62 = 1828;
static int64_t x294 = 4413LL;
int64_t x296 = INT64_MIN;
int16_t x299 = 1244;
volatile uint32_t x305 = 535928979U;
volatile int32_t t67 = -1143;
volatile int8_t x331 = INT8_MIN;
int32_t x342 = -1;
int8_t x344 = INT8_MIN;
int64_t x355 = 30LL;
volatile int32_t t74 = 0;
volatile int32_t t75 = -81686260;
int16_t x363 = 2;
int8_t x364 = INT8_MIN;
volatile int32_t t78 = 7220;
int16_t x375 = -1;
int8_t x380 = -1;
uint16_t x382 = 16U;
uint32_t x383 = UINT32_MAX;
static int8_t x389 = INT8_MIN;
static uint8_t x390 = 25U;
int16_t x391 = INT16_MAX;
uint8_t x410 = UINT8_MAX;
uint32_t x411 = UINT32_MAX;
static int8_t x415 = -4;
uint8_t x418 = UINT8_MAX;
volatile int8_t x420 = 2;
static int64_t x425 = INT64_MAX;
int64_t x427 = -1LL;
int16_t x428 = -1;
volatile int32_t t89 = 4882978;
int64_t x436 = INT64_MIN;
int32_t t90 = 96882;
int8_t x439 = -1;
volatile int32_t t91 = 2;
volatile int16_t x447 = 12424;
volatile int32_t t94 = 6;
int32_t x460 = INT32_MIN;
int16_t x461 = INT16_MAX;
int8_t x462 = -1;
int64_t x463 = INT64_MAX;
int16_t x464 = INT16_MIN;
volatile int32_t t97 = 0;


void f0(void) {
	static uint8_t x1 = 7U;
	volatile int16_t x3 = 866;
	static volatile int32_t x4 = INT32_MIN;
	volatile int32_t t0 = -610310787;

	t0 = ((x1-(x2+x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	static uint16_t x6 = 8984U;
	uint32_t x7 = 93147U;
	static uint64_t x8 = 105106928LLU;
	volatile int32_t t1 = -709691061;

	t1 = ((x5-(x6+x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x10 = INT8_MIN;
	uint64_t x11 = UINT64_MAX;
	uint32_t x12 = 2549619U;
	static volatile int32_t t2 = -261491832;

	t2 = ((x9-(x10+x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	uint64_t x14 = UINT64_MAX;
	int8_t x15 = INT8_MAX;
	volatile uint8_t x16 = UINT8_MAX;
	int32_t t3 = -14;

	t3 = ((x13-(x14+x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -1;
	static int64_t x18 = INT64_MAX;
	static int16_t x19 = INT16_MIN;
	volatile int32_t x20 = INT32_MAX;
	int32_t t4 = 1068131547;

	t4 = ((x17-(x18+x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = UINT8_MAX;
	volatile uint16_t x22 = 3258U;
	static int64_t x23 = -4429639LL;
	int8_t x24 = INT8_MIN;
	int32_t t5 = -2820063;

	t5 = ((x21-(x22+x23))==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x25 = 211153189872332198LLU;
	static volatile int64_t x26 = 28253420LL;
	static uint8_t x27 = 5U;
	static int32_t t6 = -965948;

	t6 = ((x25-(x26+x27))==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 17550038U;
	int32_t x30 = INT32_MAX;
	static int64_t x31 = -510590723LL;
	int16_t x32 = -193;
	volatile int32_t t7 = -10969;

	t7 = ((x29-(x30+x31))==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = INT32_MIN;
	volatile uint32_t x35 = UINT32_MAX;
	int16_t x36 = INT16_MIN;

	t8 = ((x33-(x34+x35))==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = INT16_MIN;
	uint8_t x42 = 1U;
	volatile int16_t x43 = 6631;
	static int8_t x44 = 0;
	volatile int32_t t9 = 73984737;

	t9 = ((x41-(x42+x43))==x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = 7;
	int32_t x46 = -2020046;
	uint16_t x47 = UINT16_MAX;
	int32_t t10 = 6372336;

	t10 = ((x45-(x46+x47))==x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int8_t x53 = -1;

	t11 = ((x53-(x54+x55))==x56);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x57 = INT64_MIN;
	int32_t x58 = -9674137;
	static volatile int32_t t12 = 7;

	t12 = ((x57-(x58+x59))==x60);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x65 = INT16_MIN;
	static int16_t x68 = INT16_MIN;
	int32_t t13 = -55402749;

	t13 = ((x65-(x66+x67))==x68);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int32_t x69 = INT32_MIN;
	static int64_t x70 = -1LL;
	int16_t x72 = 836;
	volatile int32_t t14 = 1;

	t14 = ((x69-(x70+x71))==x72);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x75 = -1;
	int8_t x76 = 0;
	volatile int32_t t15 = 4138;

	t15 = ((x73-(x74+x75))==x76);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x79 = 49;
	static int64_t x80 = -53941770874803329LL;
	int32_t t16 = 1907596;

	t16 = ((x77-(x78+x79))==x80);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x81 = 180083378657LLU;
	int8_t x82 = INT8_MAX;
	static volatile int64_t x83 = INT64_MIN;
	volatile int16_t x84 = INT16_MAX;
	volatile int32_t t17 = -17;

	t17 = ((x81-(x82+x83))==x84);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x85 = 4;
	static int64_t x86 = 28LL;
	volatile int32_t t18 = -1269;

	t18 = ((x85-(x86+x87))==x88);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x90 = 65244007LLU;
	uint16_t x91 = UINT16_MAX;
	uint32_t x92 = 10003322U;

	t19 = ((x89-(x90+x91))==x92);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x93 = UINT64_MAX;
	static int8_t x94 = -1;
	static int64_t x95 = -12851898LL;
	int16_t x96 = INT16_MAX;
	volatile int32_t t20 = -1299;

	t20 = ((x93-(x94+x95))==x96);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int8_t x97 = INT8_MIN;
	int32_t x98 = -110686328;
	int16_t x99 = -1074;
	int16_t x100 = INT16_MIN;

	t21 = ((x97-(x98+x99))==x100);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x102 = 2LLU;
	uint32_t x103 = 1160728U;
	static volatile int32_t x104 = INT32_MAX;
	int32_t t22 = -38;

	t22 = ((x101-(x102+x103))==x104);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x106 = UINT64_MAX;
	static int8_t x107 = 56;
	uint64_t x108 = 262465042803260LLU;
	volatile int32_t t23 = -37789281;

	t23 = ((x105-(x106+x107))==x108);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x109 = 14U;
	int32_t x110 = -5398486;
	uint16_t x111 = 6U;
	volatile int32_t t24 = 113688;

	t24 = ((x109-(x110+x111))==x112);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x113 = 0;
	uint64_t x114 = 4985985390LLU;
	uint16_t x116 = UINT16_MAX;
	volatile int32_t t25 = -30174;

	t25 = ((x113-(x114+x115))==x116);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x117 = 73U;
	static volatile uint32_t x118 = 126908591U;
	static int8_t x119 = -1;
	int64_t x120 = INT64_MAX;
	volatile int32_t t26 = 3;

	t26 = ((x117-(x118+x119))==x120);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x125 = -20;
	static int16_t x127 = 18;
	volatile int32_t t27 = 214;

	t27 = ((x125-(x126+x127))==x128);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x133 = INT16_MAX;
	int8_t x134 = INT8_MAX;
	uint64_t x135 = 22674LLU;
	volatile int8_t x136 = 1;
	int32_t t28 = -20244051;

	t28 = ((x133-(x134+x135))==x136);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x137 = 1U;
	static int8_t x139 = -1;
	uint32_t x140 = 28261U;
	volatile int32_t t29 = 25026;

	t29 = ((x137-(x138+x139))==x140);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x142 = 499884U;
	uint32_t x143 = UINT32_MAX;
	volatile int32_t t30 = 77869948;

	t30 = ((x141-(x142+x143))==x144);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x145 = INT16_MAX;
	int64_t x148 = INT64_MIN;
	int32_t t31 = -316;

	t31 = ((x145-(x146+x147))==x148);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x149 = INT32_MIN;
	static int8_t x150 = -23;
	static int8_t x152 = -11;

	t32 = ((x149-(x150+x151))==x152);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x153 = UINT8_MAX;
	int64_t x154 = -45040973128304LL;
	static volatile uint32_t x155 = 370866U;
	int32_t x156 = 12;
	int32_t t33 = -51704202;

	t33 = ((x153-(x154+x155))==x156);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x165 = INT8_MIN;
	static int16_t x166 = 1604;
	int64_t x167 = 5759927850336LL;
	int32_t x168 = INT32_MIN;
	int32_t t34 = -40625;

	t34 = ((x165-(x166+x167))==x168);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x169 = 1;
	int16_t x171 = -1143;
	int32_t x172 = INT32_MIN;
	int32_t t35 = 29;

	t35 = ((x169-(x170+x171))==x172);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x173 = 12351LLU;
	int16_t x174 = -16183;
	volatile uint64_t x175 = UINT64_MAX;
	volatile int32_t t36 = 0;

	t36 = ((x173-(x174+x175))==x176);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x177 = INT8_MAX;
	volatile int64_t x178 = -1LL;
	int8_t x179 = INT8_MIN;
	int32_t x180 = -1954;
	volatile int32_t t37 = 29;

	t37 = ((x177-(x178+x179))==x180);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x181 = 24U;
	static uint64_t x183 = 37855642520LLU;

	t38 = ((x181-(x182+x183))==x184);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x189 = 62U;
	uint32_t x190 = 105958U;
	uint64_t x192 = 0LLU;
	volatile int32_t t39 = -70217;

	t39 = ((x189-(x190+x191))==x192);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x193 = 4U;
	static volatile uint32_t x194 = 416722U;
	int16_t x195 = -83;
	volatile int32_t t40 = -5354;

	t40 = ((x193-(x194+x195))==x196);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x198 = UINT64_MAX;
	uint64_t x199 = UINT64_MAX;
	static int64_t x200 = INT64_MIN;
	volatile int32_t t41 = -13994201;

	t41 = ((x197-(x198+x199))==x200);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x202 = 17;
	volatile int64_t x203 = INT64_MIN;
	volatile int8_t x204 = INT8_MIN;
	static volatile int32_t t42 = 0;

	t42 = ((x201-(x202+x203))==x204);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x213 = INT16_MIN;
	uint64_t x214 = 70641974134576LLU;
	static int8_t x215 = INT8_MAX;
	int8_t x216 = -1;
	int32_t t43 = 62;

	t43 = ((x213-(x214+x215))==x216);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x217 = INT16_MAX;
	volatile uint32_t x218 = 3887724U;
	volatile uint16_t x219 = UINT16_MAX;
	volatile int32_t t44 = 49;

	t44 = ((x217-(x218+x219))==x220);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x221 = UINT8_MAX;
	static uint64_t x222 = 14908652929700LLU;
	int16_t x223 = INT16_MIN;
	volatile int64_t x224 = -59432642665LL;

	t45 = ((x221-(x222+x223))==x224);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x225 = UINT64_MAX;
	int32_t x228 = -1;
	int32_t t46 = -108;

	t46 = ((x225-(x226+x227))==x228);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x231 = INT8_MIN;
	int32_t t47 = 103;

	t47 = ((x229-(x230+x231))==x232);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x233 = 5LLU;
	int64_t x234 = 89372LL;
	static int16_t x235 = INT16_MIN;
	int16_t x236 = -57;
	int32_t t48 = 6295;

	t48 = ((x233-(x234+x235))==x236);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x237 = INT16_MIN;
	int64_t x238 = INT64_MIN;
	uint16_t x239 = 9U;
	int8_t x240 = INT8_MIN;
	int32_t t49 = 349165;

	t49 = ((x237-(x238+x239))==x240);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x241 = INT32_MIN;
	int32_t x242 = INT32_MIN;
	uint64_t x243 = 251289514301268LLU;
	static int32_t t50 = 307592;

	t50 = ((x241-(x242+x243))==x244);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x246 = 14620135U;
	int8_t x247 = INT8_MIN;
	uint64_t x248 = UINT64_MAX;
	volatile int32_t t51 = 31901076;

	t51 = ((x245-(x246+x247))==x248);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x249 = 0;
	int16_t x250 = 0;
	int16_t x251 = INT16_MIN;
	int64_t x252 = INT64_MIN;
	volatile int32_t t52 = -458660;

	t52 = ((x249-(x250+x251))==x252);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x254 = INT16_MAX;
	int32_t x255 = INT32_MIN;
	int16_t x256 = -1;
	volatile int32_t t53 = -51943;

	t53 = ((x253-(x254+x255))==x256);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x257 = -97465;
	static int32_t x259 = -1;
	int8_t x260 = -1;
	volatile int32_t t54 = 11893730;

	t54 = ((x257-(x258+x259))==x260);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x261 = 9U;
	uint64_t x262 = UINT64_MAX;
	uint32_t x263 = 130U;
	static int32_t x264 = INT32_MAX;
	volatile int32_t t55 = -13;

	t55 = ((x261-(x262+x263))==x264);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x265 = 28002458245781359LLU;
	int16_t x266 = INT16_MAX;
	int8_t x267 = INT8_MIN;
	int64_t x268 = -1LL;
	static int32_t t56 = 0;

	t56 = ((x265-(x266+x267))==x268);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x269 = -1LL;
	int64_t x270 = INT64_MAX;
	int16_t x271 = -293;
	int32_t x272 = 690344778;
	int32_t t57 = 24329;

	t57 = ((x269-(x270+x271))==x272);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x273 = 385;
	uint32_t x274 = 1198744528U;
	int8_t x275 = INT8_MIN;
	int32_t x276 = 308160204;
	volatile int32_t t58 = -2427899;

	t58 = ((x273-(x274+x275))==x276);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x277 = 7;
	int8_t x278 = 23;
	static int32_t t59 = 0;

	t59 = ((x277-(x278+x279))==x280);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x282 = 196319693LLU;
	uint16_t x283 = UINT16_MAX;
	uint8_t x284 = 111U;
	volatile int32_t t60 = -179120180;

	t60 = ((x281-(x282+x283))==x284);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x287 = 29082U;
	int64_t x288 = 6009029LL;

	t61 = ((x285-(x286+x287))==x288);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x290 = -1LL;
	volatile uint8_t x292 = 13U;

	t62 = ((x289-(x290+x291))==x292);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x293 = -10508;
	int8_t x295 = INT8_MIN;
	volatile int32_t t63 = 440513658;

	t63 = ((x293-(x294+x295))==x296);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x297 = -3157;
	int16_t x298 = 1509;
	int32_t x300 = INT32_MAX;
	static int32_t t64 = -390630;

	t64 = ((x297-(x298+x299))==x300);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x306 = 5057440412755LLU;
	uint64_t x307 = UINT64_MAX;
	static int32_t x308 = INT32_MIN;
	static int32_t t65 = -3;

	t65 = ((x305-(x306+x307))==x308);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x313 = -1;
	static int32_t x314 = INT32_MAX;
	uint32_t x315 = UINT32_MAX;
	int16_t x316 = INT16_MIN;
	volatile int32_t t66 = 54098342;

	t66 = ((x313-(x314+x315))==x316);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x325 = 2276LLU;
	static volatile uint8_t x326 = UINT8_MAX;
	static volatile int64_t x327 = INT64_MIN;
	int32_t x328 = INT32_MAX;

	t67 = ((x325-(x326+x327))==x328);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x329 = 798033391933457LLU;
	volatile int16_t x330 = 113;
	int16_t x332 = 453;
	static volatile int32_t t68 = -3852515;

	t68 = ((x329-(x330+x331))==x332);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x333 = INT8_MIN;
	int8_t x334 = 17;
	static int16_t x335 = 50;
	int16_t x336 = -1;
	volatile int32_t t69 = -4991;

	t69 = ((x333-(x334+x335))==x336);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x337 = 498620766;
	int16_t x338 = INT16_MAX;
	uint16_t x339 = 544U;
	uint16_t x340 = UINT16_MAX;
	volatile int32_t t70 = -7;

	t70 = ((x337-(x338+x339))==x340);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x341 = -1;
	volatile uint16_t x343 = 101U;
	volatile int32_t t71 = 112103;

	t71 = ((x341-(x342+x343))==x344);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x345 = INT16_MIN;
	uint8_t x346 = UINT8_MAX;
	int64_t x347 = 481782413LL;
	int32_t x348 = INT32_MIN;
	volatile int32_t t72 = 7364177;

	t72 = ((x345-(x346+x347))==x348);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x349 = 599740U;
	int16_t x350 = 1;
	int8_t x351 = INT8_MIN;
	static int32_t x352 = 561677;
	int32_t t73 = 1;

	t73 = ((x349-(x350+x351))==x352);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x353 = UINT16_MAX;
	uint8_t x354 = UINT8_MAX;
	volatile int8_t x356 = INT8_MIN;

	t74 = ((x353-(x354+x355))==x356);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x357 = -1LL;
	int16_t x358 = -1;
	int8_t x359 = INT8_MIN;
	uint64_t x360 = 128173674376LLU;

	t75 = ((x357-(x358+x359))==x360);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x361 = UINT16_MAX;
	int64_t x362 = -3312304033LL;
	volatile int32_t t76 = 2;

	t76 = ((x361-(x362+x363))==x364);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x365 = 9U;
	int16_t x366 = INT16_MIN;
	uint64_t x367 = 12720954LLU;
	int8_t x368 = -13;
	volatile int32_t t77 = -672587024;

	t77 = ((x365-(x366+x367))==x368);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x369 = INT8_MIN;
	int64_t x370 = -1LL;
	int16_t x371 = -7984;
	volatile int64_t x372 = 987206948171LL;

	t78 = ((x369-(x370+x371))==x372);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x373 = INT16_MIN;
	uint8_t x374 = 70U;
	static volatile uint8_t x376 = UINT8_MAX;
	int32_t t79 = -3;

	t79 = ((x373-(x374+x375))==x376);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x377 = UINT8_MAX;
	uint8_t x378 = UINT8_MAX;
	uint64_t x379 = 29521424302LLU;
	volatile int32_t t80 = 1;

	t80 = ((x377-(x378+x379))==x380);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x381 = INT32_MIN;
	int16_t x384 = INT16_MIN;
	int32_t t81 = -483;

	t81 = ((x381-(x382+x383))==x384);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x385 = INT16_MIN;
	int32_t x386 = 382838481;
	int8_t x387 = -2;
	int8_t x388 = 4;
	static volatile int32_t t82 = -46573;

	t82 = ((x385-(x386+x387))==x388);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x392 = INT16_MIN;
	int32_t t83 = 38;

	t83 = ((x389-(x390+x391))==x392);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x397 = 1958;
	int8_t x398 = INT8_MAX;
	uint64_t x399 = UINT64_MAX;
	int64_t x400 = 408567402899587285LL;
	static volatile int32_t t84 = -4895;

	t84 = ((x397-(x398+x399))==x400);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x409 = 0U;
	static int64_t x412 = -218741577219LL;
	volatile int32_t t85 = 21684;

	t85 = ((x409-(x410+x411))==x412);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x413 = 433018735156233429LLU;
	int64_t x414 = 7702256371LL;
	int16_t x416 = INT16_MIN;
	int32_t t86 = 63;

	t86 = ((x413-(x414+x415))==x416);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x417 = UINT32_MAX;
	static volatile int16_t x419 = -1;
	int32_t t87 = 16240295;

	t87 = ((x417-(x418+x419))==x420);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x426 = 56600951U;
	volatile int32_t t88 = 56;

	t88 = ((x425-(x426+x427))==x428);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x429 = INT8_MIN;
	int32_t x430 = 15;
	uint16_t x431 = UINT16_MAX;
	uint32_t x432 = UINT32_MAX;

	t89 = ((x429-(x430+x431))==x432);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x433 = 1;
	int16_t x434 = 2339;
	int64_t x435 = INT64_MIN;

	t90 = ((x433-(x434+x435))==x436);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x437 = UINT64_MAX;
	int16_t x438 = INT16_MIN;
	int8_t x440 = -30;

	t91 = ((x437-(x438+x439))==x440);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x441 = -1;
	int8_t x442 = -1;
	volatile int8_t x443 = INT8_MAX;
	int8_t x444 = INT8_MIN;
	volatile int32_t t92 = 0;

	t92 = ((x441-(x442+x443))==x444);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x445 = INT8_MIN;
	uint8_t x446 = 28U;
	uint64_t x448 = UINT64_MAX;
	int32_t t93 = -18545215;

	t93 = ((x445-(x446+x447))==x448);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x449 = 127U;
	uint64_t x450 = 203864LLU;
	uint16_t x451 = UINT16_MAX;
	int32_t x452 = -1;

	t94 = ((x449-(x450+x451))==x452);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x453 = UINT8_MAX;
	static uint64_t x454 = UINT64_MAX;
	uint32_t x455 = 4U;
	volatile int16_t x456 = INT16_MIN;
	int32_t t95 = 96442;

	t95 = ((x453-(x454+x455))==x456);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x457 = 62925LLU;
	int64_t x458 = -1LL;
	uint64_t x459 = 6880884746367LLU;
	int32_t t96 = -89744369;

	t96 = ((x457-(x458+x459))==x460);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {


	t97 = ((x461-(x462+x463))==x464);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x465 = 299894;
	uint16_t x466 = UINT16_MAX;
	int64_t x467 = -1LL;
	int64_t x468 = INT64_MIN;
	int32_t t98 = -38;

	t98 = ((x465-(x466+x467))==x468);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x469 = INT32_MIN;
	uint16_t x470 = 3U;
	int16_t x471 = INT16_MIN;
	static int64_t x472 = -1LL;
	int32_t t99 = 225;

	t99 = ((x469-(x470+x471))==x472);

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

