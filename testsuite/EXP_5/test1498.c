#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x9 = 86U;
int32_t x11 = 3804313;
volatile int16_t x16 = 25;
int32_t t2 = -550939737;
int8_t x20 = INT8_MIN;
volatile uint32_t x45 = 5708U;
int16_t x48 = -12;
int8_t x51 = INT8_MIN;
int8_t x52 = -1;
volatile int32_t t9 = -3810;
uint8_t x58 = 47U;
volatile int64_t x67 = INT64_MIN;
static int16_t x70 = -1;
int16_t x72 = INT16_MIN;
uint64_t t13 = 57150358531986255LLU;
volatile int64_t t16 = INT64_MAX;
static uint32_t t17 = 21973U;
uint8_t x103 = UINT8_MAX;
uint32_t x111 = 6U;
int32_t t20 = 876;
uint16_t x123 = 144U;
int32_t t23 = 245365992;
static int32_t x131 = -81333;
int8_t x132 = INT8_MIN;
volatile int16_t x143 = INT16_MAX;
int16_t x147 = INT16_MAX;
uint16_t x149 = 7604U;
int16_t x159 = 9;
int64_t x160 = -1LL;
uint64_t x162 = 848420538LLU;
int32_t x163 = INT32_MIN;
int32_t t31 = -4848;
uint16_t x174 = 14382U;
int64_t x188 = 3260289063373LL;
int16_t x191 = -1;
static volatile int8_t x203 = -1;
volatile int32_t t37 = 3;
uint8_t x207 = 30U;
int16_t x240 = 1993;
static volatile int32_t t43 = 1618;
int32_t t44 = 3600950;
static int8_t x264 = INT8_MIN;
volatile int64_t x275 = INT64_MIN;
uint64_t x285 = 1334916166LLU;
uint8_t x289 = 0U;
int8_t x299 = -1;
volatile int32_t x303 = INT32_MAX;
volatile int8_t x304 = -1;
volatile int8_t x305 = -1;
int16_t x315 = INT16_MIN;
int32_t x317 = -1;
static uint32_t x325 = UINT32_MAX;
volatile int32_t t62 = 215955670;
uint16_t x338 = 368U;
uint8_t x339 = 2U;
int8_t x344 = 1;
volatile int32_t t64 = 3409;
int64_t x346 = INT64_MAX;
volatile int32_t t66 = 5144;
int64_t x365 = 520764133947LL;
volatile int8_t x367 = INT8_MAX;
int8_t x369 = -1;
int32_t x373 = INT32_MIN;
static volatile uint64_t t69 = 411LLU;
int32_t x386 = 152691;
static int16_t x390 = INT16_MIN;
int64_t x400 = -1LL;
int32_t t75 = 300;
volatile int64_t t77 = -27LL;
static int64_t x413 = -1LL;
int32_t x418 = INT32_MAX;
static int64_t t80 = -14154468505825408LL;
volatile int16_t x431 = INT16_MAX;
uint32_t t81 = 6U;
static uint64_t x441 = 65118371LLU;
uint16_t x450 = 179U;
uint16_t x451 = 66U;
int16_t x452 = INT16_MIN;
int8_t x455 = INT8_MIN;
static int32_t x458 = -1;
int16_t x459 = 578;
int8_t x478 = -1;
volatile int8_t x485 = -51;
int32_t x493 = -1;
static uint16_t x499 = 2U;


void f0(void) {
	int8_t x5 = -1;
	static int64_t x6 = -1LL;
	int8_t x7 = -1;
	int32_t x8 = -1;
	volatile int32_t t0 = 184;

	t0 = (x5*((x6<x7)|x8));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x10 = UINT16_MAX;
	int16_t x12 = INT16_MAX;
	int32_t t1 = -697944819;

	t1 = (x9*((x10<x11)|x12));

	if (t1 != 2817962) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = INT8_MAX;
	static volatile int16_t x14 = INT16_MAX;
	static int16_t x15 = -1;

	t2 = (x13*((x14<x15)|x16));

	if (t2 != 3175) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x17 = UINT8_MAX;
	int16_t x18 = INT16_MIN;
	volatile int8_t x19 = -1;
	int32_t t3 = -22973;

	t3 = (x17*((x18<x19)|x20));

	if (t3 != -32385) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x21 = 31U;
	volatile int32_t x22 = -1;
	int16_t x23 = INT16_MIN;
	int8_t x24 = INT8_MIN;
	static volatile int32_t t4 = 776673;

	t4 = (x21*((x22<x23)|x24));

	if (t4 != -3968) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x25 = UINT64_MAX;
	int8_t x26 = INT8_MIN;
	int64_t x27 = 227777429LL;
	uint32_t x28 = 423070U;
	uint64_t t5 = 35683189324LLU;

	t5 = (x25*((x26<x27)|x28));

	if (t5 != 18446744073709128545LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x29 = 58163U;
	static uint8_t x30 = 5U;
	int32_t x31 = 256794;
	volatile int32_t x32 = 4442;
	static uint32_t t6 = 97U;

	t6 = (x29*((x30<x31)|x32));

	if (t6 != 258418209U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = INT8_MAX;
	static uint16_t x34 = 6U;
	uint64_t x35 = UINT64_MAX;
	volatile int32_t x36 = -1;
	int32_t t7 = -1815;

	t7 = (x33*((x34<x35)|x36));

	if (t7 != -127) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x46 = INT16_MIN;
	int64_t x47 = INT64_MAX;
	uint32_t t8 = 5368031U;

	t8 = (x45*((x46<x47)|x48));

	if (t8 != 4294904508U) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x49 = INT16_MAX;
	int8_t x50 = INT8_MAX;

	t9 = (x49*((x50<x51)|x52));

	if (t9 != -32767) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x57 = 1U;
	uint32_t x59 = UINT32_MAX;
	uint64_t x60 = 5827576LLU;
	volatile uint64_t t10 = 12020994545159LLU;

	t10 = (x57*((x58<x59)|x60));

	if (t10 != 5827577LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x65 = -1;
	uint32_t x66 = 52830U;
	int16_t x68 = INT16_MIN;
	int32_t t11 = 999201294;

	t11 = (x65*((x66<x67)|x68));

	if (t11 != 32768) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x69 = -1LL;
	int8_t x71 = -1;
	static int64_t t12 = 75063443LL;

	t12 = (x69*((x70<x71)|x72));

	if (t12 != 32768LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x73 = UINT64_MAX;
	int64_t x74 = -4LL;
	volatile int32_t x75 = INT32_MIN;
	int64_t x76 = INT64_MIN;

	t13 = (x73*((x74<x75)|x76));

	if (t13 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x81 = INT16_MAX;
	uint16_t x82 = UINT16_MAX;
	static volatile uint32_t x83 = UINT32_MAX;
	int16_t x84 = -89;
	int32_t t14 = 121;

	t14 = (x81*((x82<x83)|x84));

	if (t14 != -2916263) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x85 = -323;
	int32_t x86 = 59909963;
	int64_t x87 = INT64_MIN;
	int32_t x88 = -1;
	int32_t t15 = -15507;

	t15 = (x85*((x86<x87)|x88));

	if (t15 != 323) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x93 = INT64_MAX;
	int64_t x94 = -17150915829LL;
	volatile uint64_t x95 = UINT64_MAX;
	uint8_t x96 = 0U;

	t16 = (x93*((x94<x95)|x96));

	if (t16 != INT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x97 = 62;
	static volatile int32_t x98 = -500;
	static int64_t x99 = 1180975041157475LL;
	uint32_t x100 = UINT32_MAX;

	t17 = (x97*((x98<x99)|x100));

	if (t17 != 4294967234U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x101 = INT16_MIN;
	int16_t x102 = -1002;
	volatile uint8_t x104 = UINT8_MAX;
	static volatile int32_t t18 = 51337325;

	t18 = (x101*((x102<x103)|x104));

	if (t18 != -8355840) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x105 = INT32_MIN;
	volatile uint64_t x106 = 1042189014LLU;
	int32_t x107 = INT32_MIN;
	uint64_t x108 = UINT64_MAX;
	static volatile uint64_t t19 = 0LLU;

	t19 = (x105*((x106<x107)|x108));

	if (t19 != 2147483648LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x109 = 29U;
	int32_t x110 = 384418182;
	int16_t x112 = INT16_MIN;

	t20 = (x109*((x110<x111)|x112));

	if (t20 != -950272) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int16_t x113 = INT16_MIN;
	uint16_t x114 = UINT16_MAX;
	static volatile uint32_t x115 = 344165U;
	volatile uint32_t x116 = 480419243U;
	uint32_t t21 = 1547U;

	t21 = (x113*((x114<x115)|x116));

	if (t21 != 2972352512U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x117 = -1;
	uint8_t x118 = UINT8_MAX;
	static uint32_t x119 = 5387U;
	int32_t x120 = -1;
	static volatile int32_t t22 = 37130;

	t22 = (x117*((x118<x119)|x120));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x121 = INT16_MIN;
	uint32_t x122 = 2481821U;
	uint8_t x124 = UINT8_MAX;

	t23 = (x121*((x122<x123)|x124));

	if (t23 != -8355840) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x129 = 16022833958485LL;
	static uint64_t x130 = 3607781617338LLU;
	volatile int64_t t24 = -1LL;

	t24 = (x129*((x130<x131)|x132));

	if (t24 != -2034899912727595LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x133 = UINT16_MAX;
	int16_t x134 = -371;
	uint64_t x135 = UINT64_MAX;
	static uint16_t x136 = 44U;
	int32_t t25 = -160;

	t25 = (x133*((x134<x135)|x136));

	if (t25 != 2949075) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x137 = -37407217127999LL;
	static uint16_t x138 = 6802U;
	int8_t x139 = INT8_MIN;
	volatile uint64_t x140 = 1783566319416385LLU;
	uint64_t t26 = 155728LLU;

	t26 = (x137*((x138<x139)|x140));

	if (t26 != 15085928114757947905LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x141 = INT64_MAX;
	uint32_t x142 = 9372235U;
	static int16_t x144 = -1;
	int64_t t27 = 11705LL;

	t27 = (x141*((x142<x143)|x144));

	if (t27 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x145 = -1;
	int16_t x146 = INT16_MIN;
	uint8_t x148 = UINT8_MAX;
	volatile int32_t t28 = -4412;

	t28 = (x145*((x146<x147)|x148));

	if (t28 != -255) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x150 = UINT16_MAX;
	int16_t x151 = -1;
	uint16_t x152 = 6575U;
	static volatile int32_t t29 = 48;

	t29 = (x149*((x150<x151)|x152));

	if (t29 != 49996300) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x157 = UINT64_MAX;
	int32_t x158 = -1;
	uint64_t t30 = 97528166276LLU;

	t30 = (x157*((x158<x159)|x160));

	if (t30 != 1LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x161 = INT8_MIN;
	int8_t x164 = -1;

	t31 = (x161*((x162<x163)|x164));

	if (t31 != 128) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x165 = UINT64_MAX;
	volatile int64_t x166 = 1022820888560405LL;
	volatile int32_t x167 = INT32_MIN;
	int32_t x168 = 11407077;
	volatile uint64_t t32 = 523507520277647841LLU;

	t32 = (x165*((x166<x167)|x168));

	if (t32 != 18446744073698144539LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x173 = -1LL;
	int32_t x175 = INT32_MAX;
	volatile int8_t x176 = -1;
	int64_t t33 = 84477LL;

	t33 = (x173*((x174<x175)|x176));

	if (t33 != 1LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x185 = INT16_MIN;
	int16_t x186 = 3352;
	volatile uint32_t x187 = 39U;
	int64_t t34 = -161LL;

	t34 = (x185*((x186<x187)|x188));

	if (t34 != -106833152028606464LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x189 = -1LL;
	int16_t x190 = 238;
	volatile int8_t x192 = -1;
	int64_t t35 = 15532755564LL;

	t35 = (x189*((x190<x191)|x192));

	if (t35 != 1LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x193 = INT16_MIN;
	int16_t x194 = -3;
	static uint64_t x195 = UINT64_MAX;
	int8_t x196 = 1;
	volatile int32_t t36 = 1;

	t36 = (x193*((x194<x195)|x196));

	if (t36 != -32768) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x201 = -1;
	int32_t x202 = INT32_MIN;
	int16_t x204 = INT16_MAX;

	t37 = (x201*((x202<x203)|x204));

	if (t37 != -32767) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x205 = 5349825719LLU;
	int64_t x206 = INT64_MAX;
	int64_t x208 = INT64_MAX;
	uint64_t t38 = 3537677103105420LLU;

	t38 = (x205*((x206<x207)|x208));

	if (t38 != 9223372031504950089LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x217 = -1LL;
	static int32_t x218 = INT32_MIN;
	uint32_t x219 = UINT32_MAX;
	int16_t x220 = -1;
	int64_t t39 = -85631718003614LL;

	t39 = (x217*((x218<x219)|x220));

	if (t39 != 1LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x221 = -1LL;
	int64_t x222 = 97LL;
	uint8_t x223 = 59U;
	int16_t x224 = INT16_MIN;
	volatile int64_t t40 = -127LL;

	t40 = (x221*((x222<x223)|x224));

	if (t40 != 32768LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x225 = INT16_MAX;
	int16_t x226 = 32;
	static int16_t x227 = -1;
	volatile uint32_t x228 = UINT32_MAX;
	volatile uint32_t t41 = 3628U;

	t41 = (x225*((x226<x227)|x228));

	if (t41 != 4294934529U) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x237 = UINT32_MAX;
	int64_t x238 = INT64_MAX;
	int8_t x239 = 7;
	volatile uint32_t t42 = 1666836U;

	t42 = (x237*((x238<x239)|x240));

	if (t42 != 4294965303U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x249 = -11;
	volatile int8_t x250 = -1;
	volatile int32_t x251 = -1;
	uint16_t x252 = 25646U;

	t43 = (x249*((x250<x251)|x252));

	if (t43 != -282106) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x257 = -1;
	int32_t x258 = INT32_MAX;
	uint64_t x259 = UINT64_MAX;
	volatile uint8_t x260 = 12U;

	t44 = (x257*((x258<x259)|x260));

	if (t44 != -13) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x261 = UINT64_MAX;
	uint16_t x262 = 2373U;
	uint16_t x263 = 1U;
	static uint64_t t45 = 128579835378LLU;

	t45 = (x261*((x262<x263)|x264));

	if (t45 != 128LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x265 = -4343041592LL;
	volatile uint8_t x266 = UINT8_MAX;
	static int64_t x267 = -1LL;
	uint8_t x268 = 96U;
	int64_t t46 = 754254LL;

	t46 = (x265*((x266<x267)|x268));

	if (t46 != -416931992832LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x269 = 1;
	static uint16_t x270 = 48U;
	volatile uint8_t x271 = 101U;
	int32_t x272 = INT32_MAX;
	int32_t t47 = INT32_MAX;

	t47 = (x269*((x270<x271)|x272));

	if (t47 != INT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x273 = INT16_MIN;
	int32_t x274 = 329834314;
	static int8_t x276 = 0;
	volatile int32_t t48 = 119;

	t48 = (x273*((x274<x275)|x276));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x277 = 1;
	volatile uint8_t x278 = 58U;
	static volatile int32_t x279 = INT32_MAX;
	static int32_t x280 = -1;
	int32_t t49 = 14389;

	t49 = (x277*((x278<x279)|x280));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x281 = INT8_MIN;
	int8_t x282 = INT8_MIN;
	int64_t x283 = INT64_MIN;
	uint32_t x284 = UINT32_MAX;
	uint32_t t50 = 5U;

	t50 = (x281*((x282<x283)|x284));

	if (t50 != 128U) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x286 = 521936369LLU;
	uint8_t x287 = 11U;
	static uint8_t x288 = 12U;
	uint64_t t51 = 154028196LLU;

	t51 = (x285*((x286<x287)|x288));

	if (t51 != 16018993992LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x290 = -1;
	static int8_t x291 = -1;
	uint64_t x292 = UINT64_MAX;
	volatile uint64_t t52 = 49651718104LLU;

	t52 = (x289*((x290<x291)|x292));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x293 = 2;
	int64_t x294 = INT64_MIN;
	int64_t x295 = INT64_MAX;
	int16_t x296 = -1;
	volatile int32_t t53 = -1;

	t53 = (x293*((x294<x295)|x296));

	if (t53 != -2) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x297 = 2715LL;
	volatile uint32_t x298 = UINT32_MAX;
	uint32_t x300 = 412U;
	int64_t t54 = 4LL;

	t54 = (x297*((x298<x299)|x300));

	if (t54 != 1118580LL) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint8_t x301 = 3U;
	uint32_t x302 = UINT32_MAX;
	int32_t t55 = 0;

	t55 = (x301*((x302<x303)|x304));

	if (t55 != -3) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int64_t x306 = -1LL;
	int8_t x307 = INT8_MIN;
	static int16_t x308 = -629;
	int32_t t56 = -1590293;

	t56 = (x305*((x306<x307)|x308));

	if (t56 != 629) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x309 = INT64_MAX;
	static int32_t x310 = -8;
	uint8_t x311 = 0U;
	int64_t x312 = -1LL;
	volatile int64_t t57 = -9435650877LL;

	t57 = (x309*((x310<x311)|x312));

	if (t57 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x313 = INT16_MAX;
	uint16_t x314 = 7U;
	volatile int16_t x316 = -1;
	volatile int32_t t58 = 592;

	t58 = (x313*((x314<x315)|x316));

	if (t58 != -32767) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x318 = INT32_MAX;
	uint64_t x319 = 779661LLU;
	int8_t x320 = INT8_MAX;
	volatile int32_t t59 = 122;

	t59 = (x317*((x318<x319)|x320));

	if (t59 != -127) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x321 = -1;
	volatile int64_t x322 = INT64_MIN;
	static int8_t x323 = -6;
	int16_t x324 = 20;
	static volatile int32_t t60 = -1543151;

	t60 = (x321*((x322<x323)|x324));

	if (t60 != -21) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x326 = -11;
	int8_t x327 = INT8_MAX;
	volatile uint32_t x328 = UINT32_MAX;
	uint32_t t61 = 0U;

	t61 = (x325*((x326<x327)|x328));

	if (t61 != 1U) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x329 = -1;
	int32_t x330 = 81857905;
	uint64_t x331 = UINT64_MAX;
	int8_t x332 = INT8_MIN;

	t62 = (x329*((x330<x331)|x332));

	if (t62 != 127) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x337 = 2100165897303511LLU;
	uint16_t x340 = 1U;
	static volatile uint64_t t63 = 1736LLU;

	t63 = (x337*((x338<x339)|x340));

	if (t63 != 2100165897303511LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x341 = -4;
	uint64_t x342 = UINT64_MAX;
	uint32_t x343 = UINT32_MAX;

	t64 = (x341*((x342<x343)|x344));

	if (t64 != -4) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x345 = -1LL;
	int32_t x347 = 25;
	int64_t x348 = INT64_MAX;
	volatile int64_t t65 = 459586703721LL;

	t65 = (x345*((x346<x347)|x348));

	if (t65 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x357 = -1;
	uint8_t x358 = 92U;
	uint64_t x359 = 19809LLU;
	int32_t x360 = -1;

	t66 = (x357*((x358<x359)|x360));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x366 = INT16_MIN;
	int64_t x368 = 12750LL;
	volatile int64_t t67 = 5283997890202780LL;

	t67 = (x365*((x366<x367)|x368));

	if (t67 != 6640263471958197LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x370 = INT16_MAX;
	int64_t x371 = INT64_MIN;
	uint32_t x372 = 147U;
	volatile uint32_t t68 = 1150U;

	t68 = (x369*((x370<x371)|x372));

	if (t68 != 4294967149U) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x374 = 144741;
	int64_t x375 = INT64_MIN;
	uint64_t x376 = 134484905722LLU;

	t69 = (x373*((x374<x375)|x376));

	if (t69 != 6343769238536192000LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x377 = 39669659U;
	static int8_t x378 = INT8_MIN;
	int16_t x379 = INT16_MIN;
	int8_t x380 = -1;
	volatile uint32_t t70 = 2U;

	t70 = (x377*((x378<x379)|x380));

	if (t70 != 4255297637U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x381 = -1;
	uint16_t x382 = 5488U;
	volatile int8_t x383 = -1;
	volatile uint64_t x384 = 4680729837187LLU;
	uint64_t t71 = 424088630942329LLU;

	t71 = (x381*((x382<x383)|x384));

	if (t71 != 18446739392979714429LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x385 = UINT64_MAX;
	int64_t x387 = -1LL;
	static uint64_t x388 = UINT64_MAX;
	static uint64_t t72 = 4719591895900952LLU;

	t72 = (x385*((x386<x387)|x388));

	if (t72 != 1LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint32_t x389 = UINT32_MAX;
	uint32_t x391 = 1U;
	volatile uint8_t x392 = 3U;
	volatile uint32_t t73 = 18047U;

	t73 = (x389*((x390<x391)|x392));

	if (t73 != 4294967293U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x397 = -60;
	int64_t x398 = INT64_MIN;
	int64_t x399 = -401035LL;
	int64_t t74 = 1LL;

	t74 = (x397*((x398<x399)|x400));

	if (t74 != 60LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x401 = 1;
	uint32_t x402 = 30U;
	uint64_t x403 = 14125837722299LLU;
	uint16_t x404 = 11U;

	t75 = (x401*((x402<x403)|x404));

	if (t75 != 11) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x405 = INT32_MIN;
	int64_t x406 = INT64_MIN;
	uint64_t x407 = 256987137LLU;
	int32_t x408 = 0;
	int32_t t76 = 27346495;

	t76 = (x405*((x406<x407)|x408));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x409 = INT16_MIN;
	uint64_t x410 = 0LLU;
	static int64_t x411 = INT64_MIN;
	int64_t x412 = -1LL;

	t77 = (x409*((x410<x411)|x412));

	if (t77 != 32768LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x414 = UINT8_MAX;
	int16_t x415 = INT16_MAX;
	static int8_t x416 = INT8_MIN;
	volatile int64_t t78 = -102141810172LL;

	t78 = (x413*((x414<x415)|x416));

	if (t78 != 127LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x417 = -29;
	static int32_t x419 = INT32_MAX;
	int8_t x420 = 3;
	volatile int32_t t79 = 7;

	t79 = (x417*((x418<x419)|x420));

	if (t79 != -87) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x421 = 1043905872U;
	static uint16_t x422 = 7U;
	volatile int8_t x423 = INT8_MIN;
	volatile int64_t x424 = -1713LL;

	t80 = (x421*((x422<x423)|x424));

	if (t80 != -1788210758736LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x429 = INT32_MIN;
	uint64_t x430 = 2944529LLU;
	uint32_t x432 = 64257905U;

	t81 = (x429*((x430<x431)|x432));

	if (t81 != 2147483648U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x433 = INT64_MIN;
	volatile int8_t x434 = 20;
	int16_t x435 = INT16_MAX;
	int16_t x436 = 0;
	int64_t t82 = INT64_MIN;

	t82 = (x433*((x434<x435)|x436));

	if (t82 != INT64_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x437 = INT8_MIN;
	uint8_t x438 = 4U;
	volatile uint8_t x439 = 1U;
	static int32_t x440 = -1;
	volatile int32_t t83 = -48;

	t83 = (x437*((x438<x439)|x440));

	if (t83 != 128) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x442 = 10693998;
	static uint8_t x443 = 5U;
	uint8_t x444 = 2U;
	uint64_t t84 = 432290LLU;

	t84 = (x441*((x442<x443)|x444));

	if (t84 != 130236742LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x449 = -1;
	static volatile int32_t t85 = -2;

	t85 = (x449*((x450<x451)|x452));

	if (t85 != 32768) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x453 = INT16_MIN;
	static volatile int16_t x454 = INT16_MAX;
	uint16_t x456 = 31970U;
	volatile int32_t t86 = 102886440;

	t86 = (x453*((x454<x455)|x456));

	if (t86 != -1047592960) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x457 = INT16_MIN;
	static volatile int16_t x460 = 121;
	int32_t t87 = 8327401;

	t87 = (x457*((x458<x459)|x460));

	if (t87 != -3964928) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x461 = INT8_MIN;
	static int8_t x462 = -1;
	uint32_t x463 = UINT32_MAX;
	volatile int16_t x464 = 1;
	volatile int32_t t88 = -2215;

	t88 = (x461*((x462<x463)|x464));

	if (t88 != -128) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x473 = 224U;
	volatile int8_t x474 = -2;
	int32_t x475 = -1;
	volatile uint16_t x476 = 1U;
	volatile uint32_t t89 = 32U;

	t89 = (x473*((x474<x475)|x476));

	if (t89 != 224U) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x477 = UINT32_MAX;
	int16_t x479 = INT16_MAX;
	static uint8_t x480 = 24U;
	uint32_t t90 = 0U;

	t90 = (x477*((x478<x479)|x480));

	if (t90 != 4294967271U) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int8_t x486 = INT8_MAX;
	uint32_t x487 = 201087U;
	int16_t x488 = INT16_MAX;
	int32_t t91 = -1103494;

	t91 = (x485*((x486<x487)|x488));

	if (t91 != -1671117) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x489 = UINT32_MAX;
	int32_t x490 = 37286;
	int16_t x491 = -1;
	int16_t x492 = 1;
	volatile uint32_t t92 = UINT32_MAX;

	t92 = (x489*((x490<x491)|x492));

	if (t92 != UINT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x494 = INT32_MAX;
	int64_t x495 = -1LL;
	int16_t x496 = INT16_MIN;
	int32_t t93 = -32354;

	t93 = (x493*((x494<x495)|x496));

	if (t93 != 32768) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int8_t x497 = -1;
	static int64_t x498 = -3063566755LL;
	volatile uint8_t x500 = 36U;
	int32_t t94 = 0;

	t94 = (x497*((x498<x499)|x500));

	if (t94 != -37) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x513 = INT16_MIN;
	int8_t x514 = INT8_MIN;
	static volatile int32_t x515 = INT32_MIN;
	int16_t x516 = -1;
	int32_t t95 = -3660121;

	t95 = (x513*((x514<x515)|x516));

	if (t95 != 32768) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x517 = -1;
	int32_t x518 = -1;
	int64_t x519 = 47LL;
	int32_t x520 = INT32_MIN;
	static int32_t t96 = INT32_MAX;

	t96 = (x517*((x518<x519)|x520));

	if (t96 != INT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x521 = -1;
	volatile uint8_t x522 = 122U;
	int32_t x523 = INT32_MAX;
	uint8_t x524 = 68U;
	int32_t t97 = -23120;

	t97 = (x521*((x522<x523)|x524));

	if (t97 != -69) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x525 = 21U;
	int64_t x526 = -1LL;
	volatile uint8_t x527 = 6U;
	volatile int32_t x528 = -1;
	volatile int32_t t98 = -1;

	t98 = (x525*((x526<x527)|x528));

	if (t98 != -21) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x533 = UINT16_MAX;
	int8_t x534 = INT8_MIN;
	int64_t x535 = INT64_MIN;
	int32_t x536 = -1;
	volatile int32_t t99 = -85;

	t99 = (x533*((x534<x535)|x536));

	if (t99 != -65535) { NG(); } else { ; }
	
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

