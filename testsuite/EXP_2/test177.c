#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x8 = INT32_MIN;
volatile int32_t x11 = INT32_MIN;
volatile int32_t t4 = -7735;
uint16_t x26 = 1552U;
int32_t x53 = -4396614;
static volatile int32_t t8 = 58;
uint8_t x62 = 4U;
static int32_t x67 = -1;
int32_t t13 = 2465333;
static int32_t x92 = INT32_MAX;
int32_t t17 = -30534;
static int8_t x102 = -1;
uint32_t x104 = 0U;
uint16_t x124 = 1705U;
int64_t x127 = INT64_MIN;
volatile int32_t t22 = -381;
volatile int32_t x142 = -11308;
static int16_t x155 = INT16_MAX;
int16_t x167 = INT16_MIN;
int8_t x173 = INT8_MIN;
uint16_t x175 = 58U;
int64_t x179 = -2164842312636LL;
int16_t x182 = -1240;
int16_t x187 = -5410;
int16_t x188 = INT16_MIN;
uint32_t x191 = 1775769U;
uint64_t x196 = UINT64_MAX;
static int8_t x207 = INT8_MIN;
int32_t t37 = -9798857;
static int8_t x224 = -45;
int64_t x226 = -1LL;
int64_t x229 = -2LL;
int64_t x246 = 3467637377902668049LL;
volatile int8_t x249 = INT8_MIN;
int16_t x250 = INT16_MIN;
int16_t x259 = INT16_MIN;
int32_t x261 = INT32_MIN;
int8_t x262 = -47;
int32_t x263 = INT32_MIN;
volatile uint8_t x265 = 4U;
static volatile int8_t x267 = -1;
int16_t x268 = 286;
int32_t t49 = -1293;
int8_t x270 = INT8_MIN;
static uint16_t x272 = UINT16_MAX;
int32_t t51 = -750184;
int16_t x280 = INT16_MIN;
uint64_t x286 = 14467240685980003LLU;
uint32_t x287 = 66U;
int32_t x292 = INT32_MAX;
int16_t x297 = INT16_MIN;
static int32_t t57 = -727502;
volatile int32_t x305 = -25160;
volatile uint8_t x307 = UINT8_MAX;
int64_t x313 = INT64_MIN;
volatile uint8_t x316 = 92U;
static uint32_t x325 = 971U;
uint16_t x326 = UINT16_MAX;
static int32_t t63 = -257555645;
static uint32_t x330 = 733565248U;
static int32_t t65 = 5537735;
volatile int32_t t66 = -78660;
volatile int32_t t67 = 6;
volatile int32_t t69 = -237335311;
volatile int32_t t70 = 227371066;
static uint64_t x371 = 2068LLU;
int32_t x381 = -1;
volatile int32_t t74 = -278;
static uint32_t x394 = UINT32_MAX;
int32_t x406 = INT32_MAX;
static volatile int64_t x411 = -1LL;
static int32_t t79 = 38801;
uint16_t x413 = 3167U;
int32_t x414 = -122883271;
static int16_t x425 = 0;
int32_t t81 = -18800;
static int64_t x438 = -1LL;
static int32_t x440 = 3340339;
int32_t t85 = 6885;
static uint16_t x449 = 4464U;
volatile uint8_t x454 = 1U;
static int32_t t87 = -23;
int8_t x458 = INT8_MAX;
volatile uint16_t x461 = UINT16_MAX;
int16_t x462 = -16022;
volatile int16_t x466 = INT16_MAX;
uint32_t x476 = 1U;
volatile int16_t x485 = -1;
uint32_t x486 = 6U;
static int16_t x493 = 0;
int64_t x494 = 7LL;
int32_t x500 = INT32_MIN;
int8_t x501 = -1;
int32_t t97 = 4360804;
uint8_t x509 = 7U;
volatile int32_t t99 = -44747867;


void f0(void) {
	int8_t x1 = 10;
	uint32_t x2 = 5990348U;
	uint64_t x3 = 5LLU;
	volatile uint16_t x4 = 55U;
	volatile int32_t t0 = -61762;

	t0 = ((x1+(x2-x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	uint64_t x6 = UINT64_MAX;
	int16_t x7 = -827;
	int32_t t1 = 3711700;

	t1 = ((x5+(x6-x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = INT32_MIN;
	static int16_t x10 = INT16_MIN;
	static uint8_t x12 = 0U;
	static int32_t t2 = 3820437;

	t2 = ((x9+(x10-x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = INT16_MIN;
	volatile int32_t x18 = INT32_MIN;
	static uint32_t x19 = 1063758558U;
	int32_t x20 = 7266;
	static int32_t t3 = -3419;

	t3 = ((x17+(x18-x19))==x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x21 = INT64_MIN;
	int8_t x22 = 17;
	volatile int8_t x23 = -1;
	volatile int32_t x24 = -1;

	t4 = ((x21+(x22-x23))==x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x25 = -1LL;
	static uint64_t x27 = 2621554160644647052LLU;
	int64_t x28 = 750641345039LL;
	volatile int32_t t5 = 3239552;

	t5 = ((x25+(x26-x27))==x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x33 = UINT64_MAX;
	int64_t x34 = INT64_MAX;
	int64_t x35 = INT64_MAX;
	int16_t x36 = -1;
	volatile int32_t t6 = 73999;

	t6 = ((x33+(x34-x35))==x36);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x37 = 255;
	int8_t x38 = -10;
	volatile int8_t x39 = INT8_MIN;
	volatile int64_t x40 = 1062178259328579LL;
	volatile int32_t t7 = 225488496;

	t7 = ((x37+(x38-x39))==x40);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x54 = -1;
	static uint8_t x55 = 63U;
	uint64_t x56 = UINT64_MAX;

	t8 = ((x53+(x54-x55))==x56);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x57 = INT8_MIN;
	uint8_t x58 = 78U;
	uint16_t x59 = UINT16_MAX;
	uint64_t x60 = 30194432859520711LLU;
	int32_t t9 = -30204274;

	t9 = ((x57+(x58-x59))==x60);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x61 = UINT32_MAX;
	static int8_t x63 = 0;
	uint8_t x64 = 1U;
	static volatile int32_t t10 = -591366;

	t10 = ((x61+(x62-x63))==x64);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x65 = 1655212718084326313LL;
	int64_t x66 = 1678LL;
	int64_t x68 = 363893LL;
	volatile int32_t t11 = -12250760;

	t11 = ((x65+(x66-x67))==x68);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x73 = UINT64_MAX;
	int32_t x74 = INT32_MIN;
	static int8_t x75 = -1;
	int8_t x76 = 3;
	static volatile int32_t t12 = -1;

	t12 = ((x73+(x74-x75))==x76);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x77 = UINT64_MAX;
	static int8_t x78 = INT8_MIN;
	int64_t x79 = INT64_MIN;
	uint64_t x80 = 119082LLU;

	t13 = ((x77+(x78-x79))==x80);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int32_t x81 = -9243;
	volatile int8_t x82 = INT8_MIN;
	uint16_t x83 = UINT16_MAX;
	int8_t x84 = 1;
	int32_t t14 = -89656;

	t14 = ((x81+(x82-x83))==x84);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x85 = -3741;
	int16_t x86 = INT16_MIN;
	int8_t x87 = -29;
	int8_t x88 = 45;
	static volatile int32_t t15 = 707651;

	t15 = ((x85+(x86-x87))==x88);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x89 = -6;
	int8_t x90 = -1;
	int32_t x91 = 6;
	volatile int32_t t16 = -187967;

	t16 = ((x89+(x90-x91))==x92);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x93 = 4U;
	int16_t x94 = INT16_MIN;
	volatile int8_t x95 = -1;
	int16_t x96 = 29;

	t17 = ((x93+(x94-x95))==x96);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x101 = 1U;
	int16_t x103 = INT16_MIN;
	int32_t t18 = 0;

	t18 = ((x101+(x102-x103))==x104);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x105 = 89906;
	volatile int8_t x106 = INT8_MIN;
	int8_t x107 = INT8_MIN;
	static uint16_t x108 = 6U;
	volatile int32_t t19 = 28928;

	t19 = ((x105+(x106-x107))==x108);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x121 = -528997711833LL;
	uint32_t x122 = UINT32_MAX;
	int16_t x123 = INT16_MIN;
	volatile int32_t t20 = -6208334;

	t20 = ((x121+(x122-x123))==x124);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x125 = -1;
	int8_t x126 = -1;
	uint8_t x128 = UINT8_MAX;
	static volatile int32_t t21 = 18407;

	t21 = ((x125+(x126-x127))==x128);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x133 = 18;
	volatile int16_t x134 = 600;
	int64_t x135 = INT64_MAX;
	volatile int8_t x136 = 3;

	t22 = ((x133+(x134-x135))==x136);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x137 = UINT64_MAX;
	int32_t x138 = -1;
	int64_t x139 = 949818003496LL;
	volatile uint8_t x140 = 4U;
	int32_t t23 = -6594;

	t23 = ((x137+(x138-x139))==x140);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x141 = INT16_MIN;
	static int32_t x143 = -2;
	volatile int16_t x144 = INT16_MIN;
	static int32_t t24 = -101362;

	t24 = ((x141+(x142-x143))==x144);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x149 = -1;
	int8_t x150 = INT8_MAX;
	volatile int64_t x151 = -1LL;
	int8_t x152 = -15;
	int32_t t25 = 37779;

	t25 = ((x149+(x150-x151))==x152);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x153 = UINT64_MAX;
	uint8_t x154 = UINT8_MAX;
	int8_t x156 = 17;
	static int32_t t26 = -3302;

	t26 = ((x153+(x154-x155))==x156);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x157 = UINT8_MAX;
	uint8_t x158 = UINT8_MAX;
	int32_t x159 = INT32_MAX;
	int16_t x160 = INT16_MIN;
	static volatile int32_t t27 = 924855870;

	t27 = ((x157+(x158-x159))==x160);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x161 = 21;
	static int8_t x162 = INT8_MIN;
	volatile int16_t x163 = INT16_MAX;
	int16_t x164 = -1;
	int32_t t28 = -2953;

	t28 = ((x161+(x162-x163))==x164);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x165 = INT64_MIN;
	volatile int16_t x166 = -176;
	uint16_t x168 = 395U;
	int32_t t29 = -5;

	t29 = ((x165+(x166-x167))==x168);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x174 = 92U;
	uint64_t x176 = UINT64_MAX;
	volatile int32_t t30 = -4612724;

	t30 = ((x173+(x174-x175))==x176);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x177 = -3082914;
	int64_t x178 = INT64_MIN;
	uint64_t x180 = UINT64_MAX;
	volatile int32_t t31 = -969534801;

	t31 = ((x177+(x178-x179))==x180);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int16_t x181 = INT16_MIN;
	int32_t x183 = -1741797;
	volatile int32_t x184 = -1;
	static int32_t t32 = -137606;

	t32 = ((x181+(x182-x183))==x184);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x185 = INT8_MIN;
	static uint32_t x186 = 3U;
	int32_t t33 = 122407098;

	t33 = ((x185+(x186-x187))==x188);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint8_t x189 = 1U;
	int64_t x190 = -1LL;
	int64_t x192 = -887925665786248LL;
	int32_t t34 = -8549172;

	t34 = ((x189+(x190-x191))==x192);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x193 = INT32_MIN;
	uint32_t x194 = 934735324U;
	int32_t x195 = INT32_MIN;
	int32_t t35 = 11;

	t35 = ((x193+(x194-x195))==x196);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x205 = INT8_MIN;
	uint64_t x206 = 564057744673LLU;
	static int64_t x208 = -10683804685LL;
	volatile int32_t t36 = -10;

	t36 = ((x205+(x206-x207))==x208);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x213 = 1427005127319767LL;
	int32_t x214 = 5870339;
	int32_t x215 = -331;
	int8_t x216 = -1;

	t37 = ((x213+(x214-x215))==x216);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x221 = 63739501994LLU;
	int64_t x222 = INT64_MIN;
	uint64_t x223 = 540LLU;
	static int32_t t38 = -266;

	t38 = ((x221+(x222-x223))==x224);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x225 = INT64_MAX;
	volatile uint16_t x227 = 4264U;
	static volatile uint8_t x228 = 86U;
	int32_t t39 = 830;

	t39 = ((x225+(x226-x227))==x228);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x230 = INT64_MIN;
	int32_t x231 = INT32_MIN;
	uint8_t x232 = 50U;
	volatile int32_t t40 = 657026;

	t40 = ((x229+(x230-x231))==x232);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x233 = INT8_MAX;
	static int32_t x234 = -1;
	int16_t x235 = INT16_MAX;
	uint64_t x236 = 7081184080LLU;
	int32_t t41 = -9;

	t41 = ((x233+(x234-x235))==x236);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x237 = -1;
	uint16_t x238 = 17U;
	int8_t x239 = INT8_MIN;
	int16_t x240 = -1;
	int32_t t42 = 957778;

	t42 = ((x237+(x238-x239))==x240);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x241 = -1;
	int8_t x242 = INT8_MIN;
	int32_t x243 = -1;
	uint32_t x244 = 663871U;
	volatile int32_t t43 = -28;

	t43 = ((x241+(x242-x243))==x244);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x245 = INT16_MAX;
	volatile int32_t x247 = -1;
	static int16_t x248 = -1;
	int32_t t44 = -2;

	t44 = ((x245+(x246-x247))==x248);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int16_t x251 = INT16_MIN;
	static uint8_t x252 = UINT8_MAX;
	volatile int32_t t45 = -904;

	t45 = ((x249+(x250-x251))==x252);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x253 = UINT64_MAX;
	volatile uint16_t x254 = UINT16_MAX;
	int32_t x255 = 59189;
	int32_t x256 = -1;
	volatile int32_t t46 = 3;

	t46 = ((x253+(x254-x255))==x256);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x257 = UINT16_MAX;
	int8_t x258 = INT8_MAX;
	int32_t x260 = -1;
	static volatile int32_t t47 = 295041;

	t47 = ((x257+(x258-x259))==x260);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x264 = 0U;
	int32_t t48 = -3;

	t48 = ((x261+(x262-x263))==x264);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x266 = INT8_MIN;

	t49 = ((x265+(x266-x267))==x268);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x269 = UINT8_MAX;
	uint64_t x271 = UINT64_MAX;
	volatile int32_t t50 = -3553672;

	t50 = ((x269+(x270-x271))==x272);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x273 = 23U;
	int64_t x274 = INT64_MIN;
	volatile int64_t x275 = -717593806425298LL;
	uint32_t x276 = 10748U;

	t51 = ((x273+(x274-x275))==x276);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x277 = -20;
	uint8_t x278 = 2U;
	uint8_t x279 = 114U;
	static volatile int32_t t52 = -78121779;

	t52 = ((x277+(x278-x279))==x280);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x281 = -1;
	static int32_t x282 = INT32_MAX;
	int32_t x283 = 286314287;
	volatile uint8_t x284 = 14U;
	static int32_t t53 = 3329062;

	t53 = ((x281+(x282-x283))==x284);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x285 = UINT8_MAX;
	uint8_t x288 = UINT8_MAX;
	volatile int32_t t54 = -70;

	t54 = ((x285+(x286-x287))==x288);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x289 = UINT16_MAX;
	int32_t x290 = INT32_MAX;
	static uint16_t x291 = UINT16_MAX;
	volatile int32_t t55 = 62;

	t55 = ((x289+(x290-x291))==x292);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x298 = UINT8_MAX;
	volatile int8_t x299 = 0;
	uint32_t x300 = 2963U;
	static volatile int32_t t56 = -1;

	t56 = ((x297+(x298-x299))==x300);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x301 = -1;
	uint8_t x302 = 0U;
	int8_t x303 = -3;
	volatile int16_t x304 = INT16_MIN;

	t57 = ((x301+(x302-x303))==x304);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x306 = 14038410LL;
	volatile uint32_t x308 = 956424U;
	static volatile int32_t t58 = 77;

	t58 = ((x305+(x306-x307))==x308);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x309 = -1LL;
	volatile int8_t x310 = INT8_MIN;
	int16_t x311 = -1;
	static uint64_t x312 = 328652866LLU;
	volatile int32_t t59 = -355369;

	t59 = ((x309+(x310-x311))==x312);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x314 = INT8_MAX;
	int8_t x315 = -31;
	volatile int32_t t60 = -264170216;

	t60 = ((x313+(x314-x315))==x316);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x317 = -1;
	int64_t x318 = -1LL;
	int8_t x319 = -1;
	static uint8_t x320 = UINT8_MAX;
	volatile int32_t t61 = 0;

	t61 = ((x317+(x318-x319))==x320);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x321 = INT8_MIN;
	int8_t x322 = -1;
	int64_t x323 = INT64_MIN;
	int8_t x324 = 1;
	int32_t t62 = -398;

	t62 = ((x321+(x322-x323))==x324);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x327 = 56344281LL;
	static int32_t x328 = INT32_MIN;

	t63 = ((x325+(x326-x327))==x328);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x329 = -1;
	volatile uint8_t x331 = 5U;
	int32_t x332 = INT32_MIN;
	volatile int32_t t64 = 1858;

	t64 = ((x329+(x330-x331))==x332);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x337 = UINT64_MAX;
	int16_t x338 = INT16_MAX;
	int8_t x339 = -1;
	uint16_t x340 = UINT16_MAX;

	t65 = ((x337+(x338-x339))==x340);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x341 = -4040;
	uint16_t x342 = 0U;
	static int64_t x343 = 967624193LL;
	uint8_t x344 = UINT8_MAX;

	t66 = ((x341+(x342-x343))==x344);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x345 = INT32_MAX;
	uint16_t x346 = 1U;
	volatile int8_t x347 = INT8_MAX;
	int64_t x348 = 13918704790LL;

	t67 = ((x345+(x346-x347))==x348);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x349 = INT32_MAX;
	int64_t x350 = -1LL;
	volatile uint8_t x351 = 0U;
	uint8_t x352 = UINT8_MAX;
	volatile int32_t t68 = 109;

	t68 = ((x349+(x350-x351))==x352);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x353 = UINT8_MAX;
	volatile int64_t x354 = 79622674302529LL;
	int16_t x355 = -3;
	static uint16_t x356 = 1U;

	t69 = ((x353+(x354-x355))==x356);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x365 = 66206205U;
	int16_t x366 = 0;
	int64_t x367 = -61LL;
	volatile int16_t x368 = INT16_MIN;

	t70 = ((x365+(x366-x367))==x368);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x369 = -1;
	static int16_t x370 = INT16_MAX;
	static int32_t x372 = INT32_MIN;
	static volatile int32_t t71 = -2385392;

	t71 = ((x369+(x370-x371))==x372);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x377 = 82674U;
	volatile uint32_t x378 = 11782U;
	uint8_t x379 = 30U;
	int64_t x380 = -1LL;
	volatile int32_t t72 = -1;

	t72 = ((x377+(x378-x379))==x380);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x382 = -191181391;
	static int32_t x383 = -106980224;
	int32_t x384 = INT32_MIN;
	volatile int32_t t73 = 12768595;

	t73 = ((x381+(x382-x383))==x384);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x385 = -943344484LL;
	uint32_t x386 = 3381U;
	static int16_t x387 = INT16_MIN;
	volatile uint32_t x388 = 37674513U;

	t74 = ((x385+(x386-x387))==x388);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x389 = 2269697LL;
	static int64_t x390 = -1LL;
	int8_t x391 = INT8_MIN;
	volatile int8_t x392 = 1;
	volatile int32_t t75 = -3744969;

	t75 = ((x389+(x390-x391))==x392);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x393 = UINT8_MAX;
	int16_t x395 = INT16_MAX;
	static uint32_t x396 = 138887U;
	volatile int32_t t76 = 61;

	t76 = ((x393+(x394-x395))==x396);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x397 = 66U;
	static int32_t x398 = INT32_MIN;
	int8_t x399 = -1;
	static int8_t x400 = INT8_MIN;
	volatile int32_t t77 = -342768200;

	t77 = ((x397+(x398-x399))==x400);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x405 = 9057512532LL;
	uint64_t x407 = 67464LLU;
	static int8_t x408 = INT8_MIN;
	int32_t t78 = 2252435;

	t78 = ((x405+(x406-x407))==x408);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x409 = INT32_MAX;
	int64_t x410 = INT64_MIN;
	int8_t x412 = -1;

	t79 = ((x409+(x410-x411))==x412);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x415 = INT8_MIN;
	uint16_t x416 = UINT16_MAX;
	volatile int32_t t80 = -18544741;

	t80 = ((x413+(x414-x415))==x416);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x426 = -790;
	uint16_t x427 = 93U;
	static int8_t x428 = INT8_MIN;

	t81 = ((x425+(x426-x427))==x428);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x429 = INT8_MIN;
	int8_t x430 = INT8_MAX;
	int8_t x431 = INT8_MIN;
	int64_t x432 = -93LL;
	static int32_t t82 = -2667832;

	t82 = ((x429+(x430-x431))==x432);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x433 = 53U;
	int16_t x434 = INT16_MAX;
	int16_t x435 = INT16_MIN;
	uint64_t x436 = 30728104822LLU;
	volatile int32_t t83 = -218018217;

	t83 = ((x433+(x434-x435))==x436);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x437 = 30724127U;
	uint16_t x439 = 3481U;
	int32_t t84 = 727070824;

	t84 = ((x437+(x438-x439))==x440);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x445 = 3618U;
	int8_t x446 = INT8_MIN;
	int32_t x447 = -410476;
	static int64_t x448 = -25LL;

	t85 = ((x445+(x446-x447))==x448);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x450 = 175196U;
	int32_t x451 = INT32_MAX;
	int16_t x452 = -1;
	volatile int32_t t86 = -1007797075;

	t86 = ((x449+(x450-x451))==x452);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x453 = UINT32_MAX;
	volatile int64_t x455 = -1LL;
	int8_t x456 = INT8_MIN;

	t87 = ((x453+(x454-x455))==x456);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x457 = 1LL;
	uint16_t x459 = UINT16_MAX;
	uint8_t x460 = UINT8_MAX;
	int32_t t88 = -8887913;

	t88 = ((x457+(x458-x459))==x460);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x463 = 9127U;
	int16_t x464 = INT16_MAX;
	volatile int32_t t89 = -26180270;

	t89 = ((x461+(x462-x463))==x464);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x465 = INT16_MIN;
	int16_t x467 = -986;
	uint32_t x468 = 53U;
	volatile int32_t t90 = 109;

	t90 = ((x465+(x466-x467))==x468);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x469 = 395LLU;
	int64_t x470 = INT64_MIN;
	int8_t x471 = INT8_MIN;
	static uint32_t x472 = 509916U;
	static int32_t t91 = -236;

	t91 = ((x469+(x470-x471))==x472);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x473 = 10286LLU;
	int16_t x474 = INT16_MAX;
	int32_t x475 = -16537047;
	volatile int32_t t92 = 16;

	t92 = ((x473+(x474-x475))==x476);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x487 = INT16_MIN;
	static uint8_t x488 = 62U;
	static volatile int32_t t93 = 0;

	t93 = ((x485+(x486-x487))==x488);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x489 = -1;
	static int16_t x490 = -1;
	volatile int64_t x491 = 310110348793426711LL;
	uint32_t x492 = UINT32_MAX;
	volatile int32_t t94 = -22014817;

	t94 = ((x489+(x490-x491))==x492);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x495 = INT32_MIN;
	static volatile int64_t x496 = INT64_MIN;
	volatile int32_t t95 = 264927161;

	t95 = ((x493+(x494-x495))==x496);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x497 = INT32_MIN;
	int8_t x498 = INT8_MIN;
	int32_t x499 = INT32_MIN;
	volatile int32_t t96 = 1570;

	t96 = ((x497+(x498-x499))==x500);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x502 = -1;
	static int32_t x503 = -1;
	volatile int64_t x504 = 9325270554867LL;

	t97 = ((x501+(x502-x503))==x504);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x505 = INT64_MIN;
	int64_t x506 = 45300003105481934LL;
	uint8_t x507 = 1U;
	uint8_t x508 = 33U;
	int32_t t98 = -49919;

	t98 = ((x505+(x506-x507))==x508);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x510 = -1;
	int64_t x511 = INT64_MAX;
	int32_t x512 = INT32_MIN;

	t99 = ((x509+(x510-x511))==x512);

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

