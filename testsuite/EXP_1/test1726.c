#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = INT8_MIN;
int16_t x6 = INT16_MIN;
volatile uint32_t x10 = UINT32_MAX;
int64_t x13 = 8713508485LL;
static uint64_t x18 = UINT64_MAX;
int64_t x37 = INT64_MIN;
int64_t x41 = INT64_MIN;
volatile int16_t x66 = -1;
uint64_t x67 = UINT64_MAX;
int64_t x69 = 3263LL;
int16_t x71 = 2813;
int32_t t14 = 235256;
static int16_t x80 = INT16_MIN;
uint16_t x81 = 3U;
static int16_t x83 = INT16_MIN;
int16_t x84 = INT16_MIN;
static volatile int16_t x86 = INT16_MAX;
static int64_t x87 = INT64_MIN;
static int64_t x97 = INT64_MAX;
static int32_t x107 = 4080;
volatile int64_t x108 = 15629368079LL;
int32_t t20 = 218910670;
uint64_t x123 = 59400342466537LLU;
int8_t x130 = INT8_MIN;
int16_t x133 = -386;
uint32_t x136 = 796740U;
int64_t x142 = -1LL;
int32_t x153 = -1;
uint64_t x154 = UINT64_MAX;
int32_t x155 = INT32_MIN;
static int8_t x159 = 0;
int16_t x164 = INT16_MAX;
static int32_t t32 = -260098;
int64_t x173 = INT64_MAX;
int32_t x178 = 734123;
int32_t x186 = -4224327;
uint16_t x189 = UINT16_MAX;
static uint16_t x200 = UINT16_MAX;
int16_t x203 = 61;
static volatile int8_t x204 = -1;
uint64_t x209 = UINT64_MAX;
volatile int64_t x215 = -1LL;
uint64_t x217 = 40LLU;
volatile int32_t t44 = 21;
uint8_t x228 = 1U;
static int16_t x238 = 95;
uint16_t x254 = UINT16_MAX;
volatile int32_t t50 = -8419765;
static volatile uint32_t x270 = 51U;
uint8_t x273 = UINT8_MAX;
int32_t t53 = 10009998;
uint32_t x282 = 28186U;
int8_t x283 = INT8_MIN;
int32_t t56 = 13805099;
uint64_t x292 = 56858LLU;
int32_t t57 = 25;
int32_t t58 = 190360;
int32_t x301 = -1;
volatile uint64_t x302 = UINT64_MAX;
int16_t x303 = 196;
static volatile uint32_t x324 = UINT32_MAX;
static int32_t x325 = -1;
volatile int32_t t65 = -2;
int64_t x343 = INT64_MIN;
uint8_t x346 = UINT8_MAX;
int16_t x351 = 572;
static uint64_t x358 = 177503LLU;
static volatile int32_t t70 = -530724;
uint8_t x364 = UINT8_MAX;
uint8_t x365 = UINT8_MAX;
int8_t x376 = INT8_MIN;
static volatile int32_t t73 = 1942;
uint8_t x378 = UINT8_MAX;
int32_t x379 = INT32_MAX;
uint64_t x383 = UINT64_MAX;
uint8_t x389 = 1U;
uint8_t x390 = UINT8_MAX;
volatile uint64_t x399 = 662021LLU;
uint8_t x400 = 84U;
int8_t x406 = INT8_MIN;
static uint16_t x410 = 21U;
int8_t x418 = -1;
volatile int32_t t82 = 414;
volatile int8_t x428 = 0;
volatile int32_t t84 = -325;
static volatile int32_t t86 = -1;
volatile int16_t x450 = -1;
uint16_t x452 = 1U;
uint32_t x458 = UINT32_MAX;
int32_t t89 = 193860343;
int8_t x461 = INT8_MAX;
int32_t x466 = -1;
int8_t x475 = INT8_MIN;
int8_t x476 = INT8_MIN;
int8_t x490 = INT8_MIN;
volatile int16_t x493 = 89;
int8_t x499 = 4;


void f0(void) {
	int8_t x1 = -1;
	int16_t x3 = INT16_MIN;
	volatile int8_t x4 = -1;
	int32_t t0 = 433220482;

	t0 = (((x1&x2)*x3)<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 938639U;
	volatile uint32_t x7 = 7189139U;
	volatile int16_t x8 = INT16_MIN;
	volatile int32_t t1 = 3;

	t1 = (((x5&x6)*x7)<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	int16_t x11 = 8;
	int32_t x12 = -1;
	volatile int32_t t2 = -1;

	t2 = (((x9&x10)*x11)<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x14 = INT64_MAX;
	uint16_t x15 = 5994U;
	static int64_t x16 = 2662802LL;
	static int32_t t3 = 69497;

	t3 = (((x13&x14)*x15)<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -1260;
	int16_t x19 = INT16_MAX;
	volatile uint32_t x20 = 465385U;
	static int32_t t4 = -3;

	t4 = (((x17&x18)*x19)<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -21;
	static volatile int16_t x22 = -1;
	int64_t x23 = -588114LL;
	static int16_t x24 = 0;
	int32_t t5 = 1252220;

	t5 = (((x21&x22)*x23)<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = INT8_MIN;
	int16_t x26 = -7083;
	int8_t x27 = 0;
	int64_t x28 = -1LL;
	int32_t t6 = -11;

	t6 = (((x25&x26)*x27)<=x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = INT32_MIN;
	int8_t x34 = -1;
	uint32_t x35 = 8233U;
	volatile int16_t x36 = INT16_MIN;
	static volatile int32_t t7 = -22639466;

	t7 = (((x33&x34)*x35)<=x36);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x38 = 83U;
	static uint32_t x39 = 4828949U;
	int8_t x40 = -1;
	static int32_t t8 = 1;

	t8 = (((x37&x38)*x39)<=x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x42 = 434344U;
	uint16_t x43 = 7U;
	int64_t x44 = INT64_MIN;
	static int32_t t9 = -2580734;

	t9 = (((x41&x42)*x43)<=x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = -1LL;
	uint8_t x46 = 0U;
	static int16_t x47 = INT16_MIN;
	static int64_t x48 = 5465452246LL;
	int32_t t10 = 57728341;

	t10 = (((x45&x46)*x47)<=x48);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x61 = -1;
	int8_t x62 = INT8_MIN;
	int16_t x63 = -2;
	uint64_t x64 = UINT64_MAX;
	int32_t t11 = 1120492;

	t11 = (((x61&x62)*x63)<=x64);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x65 = UINT8_MAX;
	static int32_t x68 = INT32_MIN;
	volatile int32_t t12 = 251412809;

	t12 = (((x65&x66)*x67)<=x68);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x70 = 61641210395LLU;
	int64_t x72 = INT64_MIN;
	static int32_t t13 = 6607779;

	t13 = (((x69&x70)*x71)<=x72);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x73 = 5190017U;
	static int32_t x74 = INT32_MIN;
	int16_t x75 = INT16_MAX;
	int16_t x76 = -3;

	t14 = (((x73&x74)*x75)<=x76);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x77 = UINT8_MAX;
	int64_t x78 = INT64_MIN;
	int32_t x79 = INT32_MIN;
	volatile int32_t t15 = 8;

	t15 = (((x77&x78)*x79)<=x80);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x82 = 6731055223437191LL;
	static volatile int32_t t16 = 2972317;

	t16 = (((x81&x82)*x83)<=x84);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x85 = INT64_MIN;
	int8_t x88 = INT8_MIN;
	volatile int32_t t17 = -37261923;

	t17 = (((x85&x86)*x87)<=x88);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x93 = INT32_MIN;
	uint8_t x94 = 26U;
	int8_t x95 = -1;
	uint32_t x96 = 7U;
	int32_t t18 = 73;

	t18 = (((x93&x94)*x95)<=x96);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x98 = 13U;
	uint8_t x99 = UINT8_MAX;
	static volatile int32_t x100 = 133369;
	int32_t t19 = 54782679;

	t19 = (((x97&x98)*x99)<=x100);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x105 = INT8_MIN;
	int32_t x106 = -1;

	t20 = (((x105&x106)*x107)<=x108);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x109 = INT32_MAX;
	int64_t x110 = INT64_MIN;
	int8_t x111 = INT8_MIN;
	int32_t x112 = INT32_MAX;
	int32_t t21 = -1;

	t21 = (((x109&x110)*x111)<=x112);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x121 = 27090030;
	int16_t x122 = INT16_MIN;
	uint32_t x124 = 530175U;
	static int32_t t22 = -1;

	t22 = (((x121&x122)*x123)<=x124);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x125 = 21U;
	static volatile int16_t x126 = INT16_MIN;
	static volatile uint32_t x127 = 1U;
	int8_t x128 = -2;
	int32_t t23 = 90309;

	t23 = (((x125&x126)*x127)<=x128);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x129 = 42049;
	uint8_t x131 = 118U;
	int32_t x132 = INT32_MAX;
	int32_t t24 = 42705935;

	t24 = (((x129&x130)*x131)<=x132);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x134 = 2329958437490040431LL;
	uint8_t x135 = 3U;
	volatile int32_t t25 = -1;

	t25 = (((x133&x134)*x135)<=x136);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x137 = -1;
	int8_t x138 = INT8_MIN;
	uint64_t x139 = UINT64_MAX;
	int8_t x140 = -19;
	volatile int32_t t26 = 75;

	t26 = (((x137&x138)*x139)<=x140);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x141 = 123U;
	uint16_t x143 = UINT16_MAX;
	int32_t x144 = INT32_MAX;
	volatile int32_t t27 = 1;

	t27 = (((x141&x142)*x143)<=x144);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x145 = 23;
	int16_t x146 = INT16_MAX;
	static uint32_t x147 = UINT32_MAX;
	int8_t x148 = INT8_MIN;
	static int32_t t28 = 963974;

	t28 = (((x145&x146)*x147)<=x148);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x149 = UINT8_MAX;
	static int64_t x150 = 30606230849LL;
	int8_t x151 = INT8_MIN;
	int8_t x152 = -1;
	int32_t t29 = -116907;

	t29 = (((x149&x150)*x151)<=x152);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x156 = UINT8_MAX;
	static volatile int32_t t30 = 1;

	t30 = (((x153&x154)*x155)<=x156);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x157 = UINT8_MAX;
	volatile int8_t x158 = INT8_MAX;
	uint8_t x160 = 2U;
	int32_t t31 = 1953;

	t31 = (((x157&x158)*x159)<=x160);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint32_t x161 = UINT32_MAX;
	uint32_t x162 = 591617481U;
	volatile uint8_t x163 = 0U;

	t32 = (((x161&x162)*x163)<=x164);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x169 = -1;
	volatile int64_t x170 = -1LL;
	uint8_t x171 = 70U;
	int64_t x172 = INT64_MIN;
	volatile int32_t t33 = -210178809;

	t33 = (((x169&x170)*x171)<=x172);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x174 = INT64_MIN;
	uint32_t x175 = UINT32_MAX;
	int32_t x176 = 100839194;
	volatile int32_t t34 = 16190;

	t34 = (((x173&x174)*x175)<=x176);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x177 = INT32_MAX;
	volatile uint16_t x179 = 35U;
	static int16_t x180 = INT16_MAX;
	static volatile int32_t t35 = 31825218;

	t35 = (((x177&x178)*x179)<=x180);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x181 = UINT16_MAX;
	int32_t x182 = INT32_MAX;
	int8_t x183 = INT8_MIN;
	uint32_t x184 = UINT32_MAX;
	int32_t t36 = 25166;

	t36 = (((x181&x182)*x183)<=x184);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x185 = -2133736821LL;
	uint32_t x187 = 16118217U;
	static int16_t x188 = INT16_MIN;
	static int32_t t37 = 330591;

	t37 = (((x185&x186)*x187)<=x188);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x190 = 1522537U;
	uint64_t x191 = 215483LLU;
	uint16_t x192 = 59U;
	static int32_t t38 = 8058295;

	t38 = (((x189&x190)*x191)<=x192);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x193 = UINT32_MAX;
	uint32_t x194 = UINT32_MAX;
	uint16_t x195 = 7U;
	static uint8_t x196 = 20U;
	int32_t t39 = -865;

	t39 = (((x193&x194)*x195)<=x196);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x197 = 3845739447801LLU;
	int32_t x198 = -47294248;
	static int32_t x199 = -241402183;
	int32_t t40 = 283790;

	t40 = (((x197&x198)*x199)<=x200);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x201 = 27U;
	static volatile int16_t x202 = 104;
	static int32_t t41 = -61;

	t41 = (((x201&x202)*x203)<=x204);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x210 = 10316LL;
	int32_t x211 = -1;
	volatile int64_t x212 = -1LL;
	int32_t t42 = -29268809;

	t42 = (((x209&x210)*x211)<=x212);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x213 = UINT32_MAX;
	uint16_t x214 = UINT16_MAX;
	int64_t x216 = -1LL;
	int32_t t43 = -538498411;

	t43 = (((x213&x214)*x215)<=x216);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x218 = 1U;
	uint8_t x219 = 16U;
	int32_t x220 = INT32_MIN;

	t44 = (((x217&x218)*x219)<=x220);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x225 = -1;
	static int16_t x226 = 2060;
	int16_t x227 = INT16_MIN;
	volatile int32_t t45 = 1042726869;

	t45 = (((x225&x226)*x227)<=x228);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x229 = INT64_MIN;
	uint64_t x230 = 128679825LLU;
	int64_t x231 = -33652966LL;
	uint8_t x232 = 14U;
	volatile int32_t t46 = 3;

	t46 = (((x229&x230)*x231)<=x232);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x233 = INT16_MAX;
	uint8_t x234 = 0U;
	int8_t x235 = -1;
	int8_t x236 = INT8_MAX;
	int32_t t47 = 9;

	t47 = (((x233&x234)*x235)<=x236);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x237 = INT8_MAX;
	int16_t x239 = INT16_MIN;
	int16_t x240 = INT16_MIN;
	int32_t t48 = -29715236;

	t48 = (((x237&x238)*x239)<=x240);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x249 = UINT32_MAX;
	uint64_t x250 = UINT64_MAX;
	int32_t x251 = -175698;
	uint32_t x252 = 193415909U;
	volatile int32_t t49 = -1639;

	t49 = (((x249&x250)*x251)<=x252);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x253 = INT32_MIN;
	static uint32_t x255 = 2U;
	uint16_t x256 = 719U;

	t50 = (((x253&x254)*x255)<=x256);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x265 = 23U;
	int16_t x266 = -1;
	static volatile uint16_t x267 = 5979U;
	static int8_t x268 = INT8_MIN;
	static volatile int32_t t51 = 962343;

	t51 = (((x265&x266)*x267)<=x268);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x269 = 6;
	uint32_t x271 = UINT32_MAX;
	int16_t x272 = 207;
	int32_t t52 = -123435553;

	t52 = (((x269&x270)*x271)<=x272);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x274 = INT32_MIN;
	int16_t x275 = INT16_MIN;
	volatile int16_t x276 = INT16_MIN;

	t53 = (((x273&x274)*x275)<=x276);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x277 = UINT16_MAX;
	uint64_t x278 = 31748068698728047LLU;
	uint8_t x279 = 104U;
	volatile int32_t x280 = INT32_MIN;
	volatile int32_t t54 = 6;

	t54 = (((x277&x278)*x279)<=x280);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x281 = 45742844LL;
	volatile int8_t x284 = -1;
	static int32_t t55 = -4;

	t55 = (((x281&x282)*x283)<=x284);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x285 = -1;
	uint32_t x286 = 349863U;
	int8_t x287 = INT8_MAX;
	volatile uint8_t x288 = 6U;

	t56 = (((x285&x286)*x287)<=x288);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x289 = 1LL;
	static uint8_t x290 = UINT8_MAX;
	int8_t x291 = 53;

	t57 = (((x289&x290)*x291)<=x292);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x297 = -33;
	int16_t x298 = INT16_MIN;
	int16_t x299 = -69;
	int16_t x300 = INT16_MIN;

	t58 = (((x297&x298)*x299)<=x300);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x304 = INT8_MAX;
	volatile int32_t t59 = 1;

	t59 = (((x301&x302)*x303)<=x304);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x305 = -1;
	static volatile uint8_t x306 = 3U;
	uint16_t x307 = 1183U;
	uint16_t x308 = 0U;
	volatile int32_t t60 = -33821304;

	t60 = (((x305&x306)*x307)<=x308);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x309 = INT8_MAX;
	uint8_t x310 = UINT8_MAX;
	uint8_t x311 = 0U;
	uint16_t x312 = 118U;
	static volatile int32_t t61 = 82;

	t61 = (((x309&x310)*x311)<=x312);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x313 = -26;
	int32_t x314 = -5;
	uint32_t x315 = 61U;
	static volatile int64_t x316 = INT64_MIN;
	static int32_t t62 = -123;

	t62 = (((x313&x314)*x315)<=x316);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x317 = 2;
	uint64_t x318 = 1009046LLU;
	int64_t x319 = 1503627LL;
	volatile int16_t x320 = INT16_MIN;
	volatile int32_t t63 = 1063262955;

	t63 = (((x317&x318)*x319)<=x320);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x321 = -1290;
	int32_t x322 = -1;
	int32_t x323 = -1;
	volatile int32_t t64 = -237628;

	t64 = (((x321&x322)*x323)<=x324);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x326 = -1;
	static uint16_t x327 = 30U;
	volatile int32_t x328 = INT32_MIN;

	t65 = (((x325&x326)*x327)<=x328);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x337 = 0U;
	volatile uint16_t x338 = 38U;
	volatile int32_t x339 = -56635;
	int32_t x340 = -1;
	static int32_t t66 = -3;

	t66 = (((x337&x338)*x339)<=x340);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x341 = INT16_MIN;
	uint64_t x342 = 59178268996683LLU;
	int16_t x344 = -14845;
	int32_t t67 = 184;

	t67 = (((x341&x342)*x343)<=x344);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x345 = INT8_MAX;
	uint32_t x347 = 1409359376U;
	int32_t x348 = -34882;
	int32_t t68 = 63590;

	t68 = (((x345&x346)*x347)<=x348);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x349 = 249U;
	volatile int16_t x350 = INT16_MAX;
	static int16_t x352 = INT16_MIN;
	int32_t t69 = 0;

	t69 = (((x349&x350)*x351)<=x352);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x357 = INT8_MAX;
	volatile uint32_t x359 = UINT32_MAX;
	static int64_t x360 = INT64_MIN;

	t70 = (((x357&x358)*x359)<=x360);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x361 = INT8_MIN;
	int16_t x362 = INT16_MIN;
	uint8_t x363 = 1U;
	int32_t t71 = -31184501;

	t71 = (((x361&x362)*x363)<=x364);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x366 = INT64_MIN;
	int16_t x367 = -1;
	int32_t x368 = INT32_MIN;
	int32_t t72 = -44371619;

	t72 = (((x365&x366)*x367)<=x368);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x373 = INT32_MIN;
	static int8_t x374 = INT8_MAX;
	int16_t x375 = INT16_MIN;

	t73 = (((x373&x374)*x375)<=x376);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x377 = INT64_MIN;
	volatile int64_t x380 = INT64_MIN;
	int32_t t74 = 34;

	t74 = (((x377&x378)*x379)<=x380);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x381 = INT32_MIN;
	uint64_t x382 = 14736554851967193LLU;
	uint32_t x384 = 187873676U;
	int32_t t75 = -944074;

	t75 = (((x381&x382)*x383)<=x384);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x385 = -1;
	int8_t x386 = -1;
	uint32_t x387 = 3U;
	uint64_t x388 = 1298323LLU;
	volatile int32_t t76 = -7143557;

	t76 = (((x385&x386)*x387)<=x388);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint8_t x391 = UINT8_MAX;
	int64_t x392 = INT64_MAX;
	volatile int32_t t77 = 64214384;

	t77 = (((x389&x390)*x391)<=x392);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x397 = -1;
	int64_t x398 = INT64_MAX;
	int32_t t78 = -1;

	t78 = (((x397&x398)*x399)<=x400);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x401 = INT16_MIN;
	int16_t x402 = INT16_MIN;
	int64_t x403 = 2729161264LL;
	int32_t x404 = INT32_MIN;
	static int32_t t79 = 80367;

	t79 = (((x401&x402)*x403)<=x404);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x405 = -1;
	int16_t x407 = INT16_MIN;
	int8_t x408 = INT8_MAX;
	int32_t t80 = -3458432;

	t80 = (((x405&x406)*x407)<=x408);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x409 = 0;
	uint8_t x411 = 9U;
	volatile uint64_t x412 = UINT64_MAX;
	volatile int32_t t81 = -35573;

	t81 = (((x409&x410)*x411)<=x412);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x417 = UINT8_MAX;
	int16_t x419 = INT16_MIN;
	int64_t x420 = INT64_MAX;

	t82 = (((x417&x418)*x419)<=x420);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x425 = UINT16_MAX;
	volatile int32_t x426 = INT32_MAX;
	int16_t x427 = 917;
	int32_t t83 = 245986;

	t83 = (((x425&x426)*x427)<=x428);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x429 = 25U;
	uint8_t x430 = 1U;
	uint64_t x431 = 73299510LLU;
	int16_t x432 = 1;

	t84 = (((x429&x430)*x431)<=x432);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x437 = UINT64_MAX;
	uint8_t x438 = 91U;
	volatile int16_t x439 = -2;
	uint8_t x440 = 9U;
	volatile int32_t t85 = -5;

	t85 = (((x437&x438)*x439)<=x440);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x445 = 31164U;
	uint16_t x446 = 2U;
	static int8_t x447 = 2;
	int64_t x448 = INT64_MAX;

	t86 = (((x445&x446)*x447)<=x448);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x449 = -1;
	volatile int8_t x451 = -1;
	volatile int32_t t87 = -118107;

	t87 = (((x449&x450)*x451)<=x452);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x453 = INT64_MIN;
	int16_t x454 = INT16_MAX;
	volatile int8_t x455 = -37;
	static int8_t x456 = INT8_MIN;
	int32_t t88 = 44146;

	t88 = (((x453&x454)*x455)<=x456);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x457 = UINT8_MAX;
	static volatile int32_t x459 = INT32_MIN;
	static int8_t x460 = INT8_MAX;

	t89 = (((x457&x458)*x459)<=x460);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x462 = INT16_MAX;
	int64_t x463 = 327LL;
	uint64_t x464 = 844377424651238LLU;
	volatile int32_t t90 = -11315786;

	t90 = (((x461&x462)*x463)<=x464);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x465 = -3140158;
	int32_t x467 = -6;
	int8_t x468 = INT8_MAX;
	volatile int32_t t91 = 222040;

	t91 = (((x465&x466)*x467)<=x468);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x469 = 7;
	uint8_t x470 = UINT8_MAX;
	int16_t x471 = INT16_MAX;
	int16_t x472 = 10231;
	int32_t t92 = 4721;

	t92 = (((x469&x470)*x471)<=x472);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x473 = -1652;
	volatile int16_t x474 = INT16_MIN;
	int32_t t93 = -70;

	t93 = (((x473&x474)*x475)<=x476);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x477 = INT8_MAX;
	uint32_t x478 = 415803029U;
	int64_t x479 = -95LL;
	uint8_t x480 = 13U;
	int32_t t94 = 0;

	t94 = (((x477&x478)*x479)<=x480);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x481 = 235416036;
	uint8_t x482 = 14U;
	uint32_t x483 = 5646810U;
	uint8_t x484 = 12U;
	int32_t t95 = -2407;

	t95 = (((x481&x482)*x483)<=x484);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x485 = INT16_MAX;
	uint8_t x486 = 3U;
	int8_t x487 = INT8_MIN;
	uint64_t x488 = 16815583527LLU;
	volatile int32_t t96 = 1624413;

	t96 = (((x485&x486)*x487)<=x488);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x489 = INT8_MAX;
	static uint16_t x491 = UINT16_MAX;
	static int32_t x492 = INT32_MAX;
	int32_t t97 = 13409;

	t97 = (((x489&x490)*x491)<=x492);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x494 = INT16_MIN;
	uint64_t x495 = 51521464697189997LLU;
	int32_t x496 = -1;
	int32_t t98 = 3;

	t98 = (((x493&x494)*x495)<=x496);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x497 = INT16_MIN;
	uint32_t x498 = 4081U;
	uint64_t x500 = UINT64_MAX;
	int32_t t99 = 513807;

	t99 = (((x497&x498)*x499)<=x500);

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

