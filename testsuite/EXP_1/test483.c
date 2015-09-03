#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x10 = INT8_MIN;
int32_t x15 = INT32_MIN;
uint32_t x21 = 12U;
int8_t x22 = -1;
static volatile uint32_t t2 = 2157457U;
uint32_t x25 = 297U;
uint8_t x28 = UINT8_MAX;
uint16_t x38 = 702U;
int64_t x39 = INT64_MIN;
int64_t x52 = INT64_MIN;
uint64_t t7 = 35393455083LLU;
volatile int64_t x72 = -8350499LL;
int64_t x83 = 295552LL;
static uint32_t t13 = 32174214U;
static uint8_t x98 = UINT8_MAX;
int64_t t16 = 3999563045536718212LL;
int64_t x121 = -3LL;
int64_t x123 = INT64_MIN;
int64_t t19 = 1179244295LL;
int16_t x140 = INT16_MAX;
int16_t x143 = INT16_MAX;
uint64_t t22 = 2235LLU;
volatile uint64_t t23 = 23359238625976LLU;
uint32_t x175 = 394904316U;
int8_t x180 = INT8_MIN;
volatile uint64_t t25 = 390200LLU;
volatile uint32_t x185 = 6481U;
static uint64_t x200 = UINT64_MAX;
static volatile uint32_t x204 = 1123704U;
volatile int16_t x220 = 165;
static volatile int16_t x222 = -1;
uint8_t x224 = UINT8_MAX;
uint16_t x226 = UINT16_MAX;
volatile int32_t x236 = 59339;
volatile int64_t x238 = 78591LL;
static int16_t x246 = INT16_MIN;
volatile int32_t t40 = 1;
int8_t x252 = INT8_MAX;
static int8_t x253 = 44;
uint64_t x255 = UINT64_MAX;
volatile uint64_t t42 = 3196LLU;
volatile int64_t x267 = -1LL;
static uint16_t x292 = 156U;
uint64_t x294 = 2939882437308285LLU;
uint32_t t48 = 0U;
static int16_t x304 = INT16_MAX;
int32_t t50 = -229750048;
static volatile uint16_t x317 = 10388U;
uint8_t x320 = UINT8_MAX;
uint8_t x355 = 3U;
volatile int64_t t58 = -3641LL;
static int16_t x365 = INT16_MIN;
static uint64_t x367 = UINT64_MAX;
uint8_t x368 = 18U;
uint64_t t59 = 6612357471699LLU;
volatile uint64_t t61 = 143270LLU;
int16_t x383 = 4;
int8_t x384 = INT8_MIN;
int8_t x386 = INT8_MIN;
int32_t x415 = INT32_MIN;
int8_t x416 = -1;
int32_t x424 = INT32_MIN;
uint64_t x431 = UINT64_MAX;
static volatile uint64_t x453 = 182241423850731LLU;
static int64_t x455 = -1LL;
volatile uint64_t t74 = 118455LLU;
int64_t t75 = 66321152032096172LL;
static int32_t x462 = -3;
int16_t x464 = INT16_MAX;
static volatile uint64_t t77 = 45372511042725829LLU;
static volatile int8_t x473 = -2;
uint8_t x478 = UINT8_MAX;
int64_t x481 = -1LL;
static int64_t x484 = -1LL;
volatile uint64_t x486 = UINT64_MAX;
uint32_t x487 = 4767U;
uint64_t t81 = 127903930071538591LLU;
uint64_t x497 = 53104LLU;
int16_t x501 = INT16_MIN;
uint64_t t84 = 1LLU;
int64_t x508 = 2177661248113182879LL;
static int8_t x512 = INT8_MAX;
uint32_t x516 = 412479U;
int8_t x522 = INT8_MAX;
int32_t x529 = 1951410;
static int32_t x533 = INT32_MAX;
static int16_t x552 = INT16_MIN;
int64_t x565 = -1LL;
volatile int16_t x574 = INT16_MAX;
static volatile int64_t t97 = -1013557LL;
static int64_t x579 = INT64_MIN;
uint8_t x580 = UINT8_MAX;
int64_t t98 = -108842LL;
volatile uint64_t t99 = 5LLU;


void f0(void) {
	uint64_t x9 = UINT64_MAX;
	static uint64_t x11 = 836064309742516LLU;
	int8_t x12 = -1;
	volatile uint64_t t0 = 3LLU;

	t0 = (((x9*x10)|x11)-x12);

	if (t0 != 836064309742517LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint32_t x13 = 44U;
	uint8_t x14 = 2U;
	static uint8_t x16 = 32U;
	static volatile uint32_t t1 = 2U;

	t1 = (((x13*x14)|x15)-x16);

	if (t1 != 2147483704U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x23 = INT32_MAX;
	int32_t x24 = INT32_MAX;

	t2 = (((x21*x22)|x23)-x24);

	if (t2 != 2147483648U) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x26 = UINT16_MAX;
	static uint64_t x27 = 1802LLU;
	volatile uint64_t t3 = 48376485LLU;

	t3 = (((x25*x26)|x27)-x28);

	if (t3 != 19463904LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x37 = 2241LLU;
	uint32_t x40 = UINT32_MAX;
	uint64_t t4 = 5LLU;

	t4 = (((x37*x38)|x39)-x40);

	if (t4 != 9223372032561381695LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x41 = 4094314LL;
	static int32_t x42 = -1;
	int16_t x43 = INT16_MIN;
	volatile uint8_t x44 = 12U;
	volatile int64_t t5 = -51808198678138541LL;

	t5 = (((x41*x42)|x43)-x44);

	if (t5 != -31094LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x45 = 54U;
	int16_t x46 = INT16_MIN;
	uint8_t x47 = 7U;
	int64_t x48 = -20924872250967LL;
	volatile int64_t t6 = 6423375713LL;

	t6 = (((x45*x46)|x47)-x48);

	if (t6 != 20924870481502LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x49 = -1;
	static uint64_t x50 = 105545LLU;
	volatile uint16_t x51 = 1U;

	t7 = (((x49*x50)|x51)-x52);

	if (t7 != 9223372036854670263LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x53 = INT16_MAX;
	int8_t x54 = 4;
	uint16_t x55 = 9011U;
	int16_t x56 = INT16_MIN;
	int32_t t8 = -368103;

	t8 = (((x53*x54)|x55)-x56);

	if (t8 != 163839) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint16_t x57 = 623U;
	static int8_t x58 = -1;
	uint16_t x59 = 27993U;
	uint8_t x60 = 3U;
	int32_t t9 = 482203504;

	t9 = (((x57*x58)|x59)-x60);

	if (t9 != -554) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x61 = UINT64_MAX;
	static int32_t x62 = -772046;
	uint16_t x63 = 21076U;
	int64_t x64 = -10665LL;
	volatile uint64_t t10 = 22993032635095735LLU;

	t10 = (((x61*x62)|x63)-x64);

	if (t10 != 786823LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x69 = -1;
	static int64_t x70 = INT64_MAX;
	static int64_t x71 = INT64_MIN;
	static volatile int64_t t11 = 354062LL;

	t11 = (((x69*x70)|x71)-x72);

	if (t11 != -9223372036846425308LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x81 = 1;
	int32_t x82 = -1;
	int32_t x84 = INT32_MIN;
	int64_t t12 = -240043LL;

	t12 = (((x81*x82)|x83)-x84);

	if (t12 != 2147483647LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x89 = INT8_MIN;
	int32_t x90 = -1;
	volatile int16_t x91 = -1;
	uint32_t x92 = 1749U;

	t13 = (((x89*x90)|x91)-x92);

	if (t13 != 4294965546U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x93 = INT16_MIN;
	static int8_t x94 = INT8_MIN;
	int32_t x95 = INT32_MIN;
	int8_t x96 = 3;
	int32_t t14 = 5070372;

	t14 = (((x93*x94)|x95)-x96);

	if (t14 != -2143289347) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x97 = -1;
	int32_t x99 = INT32_MAX;
	uint16_t x100 = UINT16_MAX;
	static volatile int32_t t15 = 8504;

	t15 = (((x97*x98)|x99)-x100);

	if (t15 != -65536) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x105 = 0;
	static int64_t x106 = INT64_MAX;
	int32_t x107 = 0;
	int16_t x108 = -1;

	t16 = (((x105*x106)|x107)-x108);

	if (t16 != 1LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x117 = -2;
	uint64_t x118 = 34086700LLU;
	static int16_t x119 = INT16_MAX;
	volatile int16_t x120 = INT16_MIN;
	uint64_t t17 = 987721333392860LLU;

	t17 = (((x117*x118)|x119)-x120);

	if (t17 != 18446744073641426943LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x122 = INT32_MIN;
	volatile uint8_t x124 = UINT8_MAX;
	int64_t t18 = -1589349641LL;

	t18 = (((x121*x122)|x123)-x124);

	if (t18 != -9223372030412325119LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x125 = INT8_MIN;
	volatile int32_t x126 = -109861;
	int16_t x127 = INT16_MIN;
	volatile int64_t x128 = INT64_MIN;

	t19 = (((x125*x126)|x127)-x128);

	if (t19 != 9223372036854747776LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x137 = -1;
	int32_t x138 = -189928882;
	int16_t x139 = INT16_MIN;
	int32_t t20 = -1130874;

	t20 = (((x137*x138)|x139)-x140);

	if (t20 != -59981) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x141 = UINT32_MAX;
	uint8_t x142 = UINT8_MAX;
	volatile uint16_t x144 = UINT16_MAX;
	uint32_t t21 = 7U;

	t21 = (((x141*x142)|x143)-x144);

	if (t21 != 4294901760U) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x157 = INT8_MIN;
	uint16_t x158 = UINT16_MAX;
	uint16_t x159 = 342U;
	uint64_t x160 = 1LLU;

	t22 = (((x157*x158)|x159)-x160);

	if (t22 != 18446744073701163477LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x165 = UINT64_MAX;
	int8_t x166 = INT8_MAX;
	uint32_t x167 = UINT32_MAX;
	int16_t x168 = INT16_MIN;

	t23 = (((x165*x166)|x167)-x168);

	if (t23 != 32767LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x173 = 6U;
	int16_t x174 = 21;
	int8_t x176 = -1;
	static volatile uint32_t t24 = 14U;

	t24 = (((x173*x174)|x175)-x176);

	if (t24 != 394904319U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x177 = 45865935500268LLU;
	volatile uint8_t x178 = 56U;
	uint64_t x179 = 80LLU;

	t25 = (((x177*x178)|x179)-x180);

	if (t25 != 2568492388015216LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x181 = INT8_MIN;
	int8_t x182 = INT8_MAX;
	uint16_t x183 = 3618U;
	static int8_t x184 = -12;
	int32_t t26 = 10677717;

	t26 = (((x181*x182)|x183)-x184);

	if (t26 != -12626) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x186 = INT16_MAX;
	uint64_t x187 = 47LLU;
	static uint32_t x188 = UINT32_MAX;
	uint64_t t27 = 0LLU;

	t27 = (((x185*x186)|x187)-x188);

	if (t27 != 18446744069626947248LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x189 = 0;
	static int32_t x190 = -1;
	static volatile uint8_t x191 = UINT8_MAX;
	int16_t x192 = 0;
	static int32_t t28 = 607203;

	t28 = (((x189*x190)|x191)-x192);

	if (t28 != 255) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x193 = 895U;
	uint64_t x194 = 3916156725083LLU;
	int8_t x195 = -1;
	static uint64_t x196 = 520LLU;
	uint64_t t29 = 22021370896586145LLU;

	t29 = (((x193*x194)|x195)-x196);

	if (t29 != 18446744073709551095LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x197 = -461272;
	int64_t x198 = -1LL;
	uint32_t x199 = UINT32_MAX;
	uint64_t t30 = 25966600564213LLU;

	t30 = (((x197*x198)|x199)-x200);

	if (t30 != 4294967296LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x201 = -72358635901498LL;
	int8_t x202 = -3;
	uint64_t x203 = 33400LLU;
	volatile uint64_t t31 = 473LLU;

	t31 = (((x201*x202)|x203)-x204);

	if (t31 != 217075906613638LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x205 = 29203U;
	int8_t x206 = -1;
	int64_t x207 = -75755182LL;
	volatile int32_t x208 = 66;
	static volatile int64_t t32 = 14339438648370LL;

	t32 = (((x205*x206)|x207)-x208);

	if (t32 != -25155LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x213 = UINT64_MAX;
	int16_t x214 = -1;
	static int8_t x215 = INT8_MAX;
	uint16_t x216 = 1U;
	volatile uint64_t t33 = 954279900788576LLU;

	t33 = (((x213*x214)|x215)-x216);

	if (t33 != 126LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x217 = -142999;
	volatile uint16_t x218 = 1U;
	static int32_t x219 = INT32_MIN;
	volatile int32_t t34 = -3;

	t34 = (((x217*x218)|x219)-x220);

	if (t34 != -143164) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x221 = 28U;
	int16_t x223 = -2299;
	int32_t t35 = 100;

	t35 = (((x221*x222)|x223)-x224);

	if (t35 != -282) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x225 = -1;
	int8_t x227 = INT8_MAX;
	static int16_t x228 = INT16_MIN;
	int32_t t36 = -3;

	t36 = (((x225*x226)|x227)-x228);

	if (t36 != -32641) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x233 = INT16_MIN;
	uint16_t x234 = 9152U;
	uint32_t x235 = 10U;
	static uint32_t t37 = 6539U;

	t37 = (((x233*x234)|x235)-x236);

	if (t37 != 3995015231U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x237 = INT8_MAX;
	volatile uint64_t x239 = 186385894276663LLU;
	uint32_t x240 = UINT32_MAX;
	volatile uint64_t t38 = 4LLU;

	t38 = (((x237*x238)|x239)-x240);

	if (t38 != 186381609270968LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x241 = 110U;
	volatile int16_t x242 = -1;
	int8_t x243 = 28;
	int32_t x244 = INT32_MIN;
	static volatile int32_t t39 = -61;

	t39 = (((x241*x242)|x243)-x244);

	if (t39 != 2147483550) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x245 = 120;
	uint16_t x247 = 127U;
	int16_t x248 = INT16_MAX;

	t40 = (((x245*x246)|x247)-x248);

	if (t40 != -3964800) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x249 = INT16_MIN;
	volatile uint8_t x250 = 14U;
	int64_t x251 = -71LL;
	volatile int64_t t41 = 68946893741LL;

	t41 = (((x249*x250)|x251)-x252);

	if (t41 != -198LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x254 = INT16_MAX;
	int32_t x256 = INT32_MIN;

	t42 = (((x253*x254)|x255)-x256);

	if (t42 != 2147483647LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x265 = 139;
	static uint64_t x266 = UINT64_MAX;
	static int16_t x268 = INT16_MAX;
	uint64_t t43 = 500471LLU;

	t43 = (((x265*x266)|x267)-x268);

	if (t43 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x269 = INT64_MIN;
	uint64_t x270 = 6LLU;
	int32_t x271 = INT32_MIN;
	int8_t x272 = 23;
	volatile uint64_t t44 = 3956888113LLU;

	t44 = (((x269*x270)|x271)-x272);

	if (t44 != 18446744071562067945LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x285 = -12;
	uint64_t x286 = 836LLU;
	uint8_t x287 = UINT8_MAX;
	int16_t x288 = INT16_MIN;
	uint64_t t45 = 14776028LLU;

	t45 = (((x285*x286)|x287)-x288);

	if (t45 != 22783LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x289 = 7U;
	volatile uint64_t x290 = 201905LLU;
	int8_t x291 = -2;
	volatile uint64_t t46 = 1304327LLU;

	t46 = (((x289*x290)|x291)-x292);

	if (t46 != 18446744073709551459LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x293 = INT8_MAX;
	int8_t x295 = -1;
	int8_t x296 = INT8_MIN;
	static uint64_t t47 = 363088703628130149LLU;

	t47 = (((x293*x294)|x295)-x296);

	if (t47 != 127LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x297 = -94;
	uint32_t x298 = 6991904U;
	volatile int8_t x299 = INT8_MAX;
	static int32_t x300 = INT32_MIN;

	t48 = (((x297*x298)|x299)-x300);

	if (t48 != 1490244735U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x301 = 55341LLU;
	uint8_t x302 = UINT8_MAX;
	volatile uint32_t x303 = 26605U;
	volatile uint64_t t49 = 2590590632783051LLU;

	t49 = (((x301*x302)|x303)-x304);

	if (t49 != 14088192LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x305 = 82;
	volatile uint8_t x306 = 2U;
	volatile int8_t x307 = 14;
	int32_t x308 = 5;

	t50 = (((x305*x306)|x307)-x308);

	if (t50 != 169) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x309 = 2896096U;
	volatile uint16_t x310 = UINT16_MAX;
	int16_t x311 = INT16_MIN;
	uint32_t x312 = 20U;
	volatile uint32_t t51 = 9775U;

	t51 = (((x309*x310)|x311)-x312);

	if (t51 != 4294954764U) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x313 = -1;
	int32_t x314 = INT32_MAX;
	volatile int8_t x315 = -1;
	volatile int32_t x316 = -8588;
	int32_t t52 = -46101585;

	t52 = (((x313*x314)|x315)-x316);

	if (t52 != 8587) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x318 = INT8_MAX;
	int8_t x319 = INT8_MIN;
	volatile int32_t t53 = 3;

	t53 = (((x317*x318)|x319)-x320);

	if (t53 != -275) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x325 = UINT64_MAX;
	int32_t x326 = 1;
	static uint16_t x327 = UINT16_MAX;
	int64_t x328 = -1LL;
	volatile uint64_t t54 = 86752612LLU;

	t54 = (((x325*x326)|x327)-x328);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x329 = 28;
	volatile uint8_t x330 = UINT8_MAX;
	static volatile uint16_t x331 = UINT16_MAX;
	int16_t x332 = -1;
	int32_t t55 = 37763;

	t55 = (((x329*x330)|x331)-x332);

	if (t55 != 65536) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x341 = UINT64_MAX;
	static volatile int32_t x342 = INT32_MIN;
	uint16_t x343 = 157U;
	uint8_t x344 = 5U;
	uint64_t t56 = 108LLU;

	t56 = (((x341*x342)|x343)-x344);

	if (t56 != 2147483800LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x353 = 1518624522650LLU;
	static volatile int64_t x354 = INT64_MAX;
	static int8_t x356 = INT8_MIN;
	static uint64_t t57 = 11916610LLU;

	t57 = (((x353*x354)|x355)-x356);

	if (t57 != 18446742555085029095LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x357 = INT8_MAX;
	int64_t x358 = 207778246163LL;
	int8_t x359 = INT8_MIN;
	static int64_t x360 = 4828LL;

	t58 = (((x357*x358)|x359)-x360);

	if (t58 != -4847LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x366 = 7;

	t59 = (((x365*x366)|x367)-x368);

	if (t59 != 18446744073709551597LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x369 = 12;
	uint32_t x370 = 13768U;
	uint64_t x371 = UINT64_MAX;
	uint64_t x372 = 3700271198146413LLU;
	volatile uint64_t t60 = 32056963290LLU;

	t60 = (((x369*x370)|x371)-x372);

	if (t60 != 18443043802511405202LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x373 = 19516231831311LLU;
	static int32_t x374 = 448590;
	int16_t x375 = -1;
	volatile int64_t x376 = INT64_MIN;

	t61 = (((x373*x374)|x375)-x376);

	if (t61 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x381 = 195081067440182190LLU;
	uint8_t x382 = UINT8_MAX;
	static volatile uint64_t t62 = 9LLU;

	t62 = (((x381*x382)|x383)-x384);

	if (t62 != 12852184049827355350LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x385 = 5;
	int64_t x387 = INT64_MIN;
	volatile int32_t x388 = 75;
	int64_t t63 = 2568LL;

	t63 = (((x385*x386)|x387)-x388);

	if (t63 != -715LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x389 = UINT32_MAX;
	uint8_t x390 = 24U;
	int64_t x391 = -1LL;
	int64_t x392 = INT64_MIN;
	int64_t t64 = INT64_MAX;

	t64 = (((x389*x390)|x391)-x392);

	if (t64 != INT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int16_t x397 = INT16_MAX;
	volatile int8_t x398 = 9;
	int32_t x399 = INT32_MIN;
	uint64_t x400 = UINT64_MAX;
	uint64_t t65 = 8780825679847152605LLU;

	t65 = (((x397*x398)|x399)-x400);

	if (t65 != 18446744071562362872LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x401 = INT8_MIN;
	int64_t x402 = 31509LL;
	int64_t x403 = INT64_MIN;
	int16_t x404 = 0;
	volatile int64_t t66 = -1525696089577980716LL;

	t66 = (((x401*x402)|x403)-x404);

	if (t66 != -4033152LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x413 = INT32_MIN;
	uint32_t x414 = 6959U;
	volatile uint32_t t67 = 1986U;

	t67 = (((x413*x414)|x415)-x416);

	if (t67 != 2147483649U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x421 = INT16_MIN;
	int8_t x422 = 12;
	int8_t x423 = INT8_MIN;
	volatile int32_t t68 = 3;

	t68 = (((x421*x422)|x423)-x424);

	if (t68 != 2147483520) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x425 = INT8_MAX;
	int64_t x426 = -2LL;
	uint32_t x427 = 18943U;
	static int8_t x428 = INT8_MIN;
	volatile int64_t t69 = -8056207035810LL;

	t69 = (((x425*x426)|x427)-x428);

	if (t69 != 127LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x429 = 113711669114938915LLU;
	int8_t x430 = INT8_MAX;
	int8_t x432 = 0;
	static volatile uint64_t t70 = UINT64_MAX;

	t70 = (((x429*x430)|x431)-x432);

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x433 = -62;
	int8_t x434 = INT8_MIN;
	int64_t x435 = -28482685008745571LL;
	int8_t x436 = 0;
	static int64_t t71 = 22933211LL;

	t71 = (((x433*x434)|x435)-x436);

	if (t71 != -28482685008740451LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x441 = -3;
	int8_t x442 = 24;
	int64_t x443 = INT64_MAX;
	uint16_t x444 = UINT16_MAX;
	volatile int64_t t72 = 1086310697920497229LL;

	t72 = (((x441*x442)|x443)-x444);

	if (t72 != -65536LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x449 = 90;
	int16_t x450 = INT16_MIN;
	int64_t x451 = INT64_MIN;
	uint8_t x452 = 60U;
	int64_t t73 = 5712602LL;

	t73 = (((x449*x450)|x451)-x452);

	if (t73 != -2949180LL) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int32_t x454 = INT32_MAX;
	static volatile int16_t x456 = 3972;

	t74 = (((x453*x454)|x455)-x456);

	if (t74 != 18446744073709547643LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x457 = UINT32_MAX;
	int32_t x458 = INT32_MIN;
	int16_t x459 = INT16_MAX;
	int64_t x460 = 4LL;

	t75 = (((x457*x458)|x459)-x460);

	if (t75 != 2147516411LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x461 = -24;
	volatile uint64_t x463 = 7293748307LLU;
	uint64_t t76 = 26862LLU;

	t76 = (((x461*x462)|x463)-x464);

	if (t76 != 7293715548LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x465 = 271586784441981668LLU;
	static uint8_t x466 = 1U;
	int32_t x467 = INT32_MIN;
	static int16_t x468 = -1;

	t77 = (((x465*x466)|x467)-x468);

	if (t77 != 18446744072977308389LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x474 = -1;
	int16_t x475 = -39;
	int8_t x476 = INT8_MIN;
	int32_t t78 = -4;

	t78 = (((x473*x474)|x475)-x476);

	if (t78 != 91) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x477 = 1U;
	static uint64_t x479 = 208127276256241112LLU;
	int32_t x480 = -1035990427;
	uint64_t t79 = 7850545564033443755LLU;

	t79 = (((x477*x478)|x479)-x480);

	if (t79 != 208127277292231578LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x482 = -221025909LL;
	int8_t x483 = INT8_MAX;
	static volatile int64_t t80 = -3308645367LL;

	t80 = (((x481*x482)|x483)-x484);

	if (t80 != 221025920LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x485 = -1;
	int16_t x488 = -132;

	t81 = (((x485*x486)|x487)-x488);

	if (t81 != 4899LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint32_t x493 = 641U;
	uint64_t x494 = 253242434846406LLU;
	int64_t x495 = 89196361074669LL;
	int16_t x496 = -3;
	volatile uint64_t t82 = 25019802861577LLU;

	t82 = (((x493*x494)|x495)-x496);

	if (t82 != 162399927530156018LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x498 = INT8_MIN;
	int64_t x499 = INT64_MAX;
	uint16_t x500 = UINT16_MAX;
	uint64_t t83 = 49020LLU;

	t83 = (((x497*x498)|x499)-x500);

	if (t83 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x502 = 1654LLU;
	int32_t x503 = 0;
	volatile int8_t x504 = -7;

	t84 = (((x501*x502)|x503)-x504);

	if (t84 != 18446744073655353351LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x505 = INT8_MAX;
	static int64_t x506 = -1LL;
	int32_t x507 = -1;
	static volatile int64_t t85 = -35582523295LL;

	t85 = (((x505*x506)|x507)-x508);

	if (t85 != -2177661248113182880LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x509 = 53U;
	int8_t x510 = -25;
	static int16_t x511 = INT16_MIN;
	volatile uint32_t t86 = 318U;

	t86 = (((x509*x510)|x511)-x512);

	if (t86 != 4294965844U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x513 = INT8_MAX;
	static uint32_t x514 = 20044353U;
	int32_t x515 = INT32_MAX;
	uint32_t t87 = 708052U;

	t87 = (((x513*x514)|x515)-x516);

	if (t87 != 4294554816U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x521 = 16034523;
	static volatile int32_t x523 = -1;
	int8_t x524 = INT8_MAX;
	int32_t t88 = 7560;

	t88 = (((x521*x522)|x523)-x524);

	if (t88 != -128) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x530 = -45;
	volatile uint64_t x531 = 81554LLU;
	volatile int32_t x532 = INT32_MIN;
	static volatile uint64_t t89 = 164683663434649264LLU;

	t89 = (((x529*x530)|x531)-x532);

	if (t89 != 2059746998LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x534 = -1;
	static uint8_t x535 = 54U;
	volatile int64_t x536 = -1LL;
	volatile int64_t t90 = 13LL;

	t90 = (((x533*x534)|x535)-x536);

	if (t90 != -2147483592LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x537 = 81190455683219043LLU;
	volatile int64_t x538 = -1LL;
	int16_t x539 = INT16_MIN;
	static int8_t x540 = 17;
	uint64_t t91 = 92297464LLU;

	t91 = (((x537*x538)|x539)-x540);

	if (t91 != 18446744073709519244LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x545 = 13622U;
	static int16_t x546 = INT16_MIN;
	int16_t x547 = INT16_MIN;
	int8_t x548 = -1;
	volatile uint32_t t92 = 42893750U;

	t92 = (((x545*x546)|x547)-x548);

	if (t92 != 4294934529U) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x549 = UINT64_MAX;
	int64_t x550 = -7450785787096LL;
	static int16_t x551 = 21;
	volatile uint64_t t93 = 403619LLU;

	t93 = (((x549*x550)|x551)-x552);

	if (t93 != 7450785819869LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x553 = INT8_MAX;
	int64_t x554 = -3974133LL;
	uint16_t x555 = 5400U;
	volatile int64_t x556 = INT64_MIN;
	volatile int64_t t94 = -1LL;

	t94 = (((x553*x554)|x555)-x556);

	if (t94 != 9223372036350066045LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x557 = -1;
	static uint64_t x558 = 66966222120031736LLU;
	uint8_t x559 = UINT8_MAX;
	uint8_t x560 = 3U;
	volatile uint64_t t95 = 8016300820948131521LLU;

	t95 = (((x557*x558)|x559)-x560);

	if (t95 != 18379777851589520124LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x566 = INT32_MIN;
	volatile uint16_t x567 = UINT16_MAX;
	int8_t x568 = -1;
	int64_t t96 = 80130031091LL;

	t96 = (((x565*x566)|x567)-x568);

	if (t96 != 2147549184LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x573 = 609U;
	static int64_t x575 = INT64_MIN;
	uint16_t x576 = UINT16_MAX;

	t97 = (((x573*x574)|x575)-x576);

	if (t97 != -9223372036834886240LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x577 = INT16_MIN;
	int16_t x578 = -1111;

	t98 = (((x577*x578)|x579)-x580);

	if (t98 != -9223372036818370815LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x585 = INT8_MAX;
	int64_t x586 = -1LL;
	int64_t x587 = -1LL;
	uint64_t x588 = 4565299878LLU;

	t99 = (((x585*x586)|x587)-x588);

	if (t99 != 18446744069144251737LLU) { NG(); } else { ; }
	
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

