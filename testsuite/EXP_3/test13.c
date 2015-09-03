#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = INT32_MIN;
int8_t x7 = -46;
uint32_t x30 = UINT32_MAX;
static volatile int32_t x31 = INT32_MIN;
static int64_t x32 = -72LL;
int16_t x55 = -1;
volatile int64_t x67 = INT64_MIN;
int32_t x70 = INT32_MAX;
int64_t x71 = INT64_MAX;
int32_t x81 = -1;
static uint64_t x86 = UINT64_MAX;
uint8_t x87 = UINT8_MAX;
volatile uint64_t t15 = 13908775771057LLU;
volatile int32_t x89 = INT32_MIN;
static uint32_t x90 = UINT32_MAX;
int8_t x95 = -5;
uint64_t t17 = 440071LLU;
volatile uint8_t x103 = 0U;
int16_t x106 = -1;
static int32_t t20 = -57;
int32_t x111 = INT32_MAX;
uint16_t x119 = 11811U;
static uint8_t x130 = 4U;
uint64_t x133 = 1085456891573LLU;
static uint64_t x139 = 413307835943541LLU;
uint64_t t25 = 141519855117LLU;
static volatile int8_t x147 = INT8_MIN;
uint8_t x153 = UINT8_MAX;
static volatile int16_t x161 = INT16_MIN;
static int64_t x167 = INT64_MAX;
int8_t x169 = -1;
int16_t x170 = 569;
static volatile uint8_t x172 = 87U;
int64_t t35 = -179LL;
uint16_t x190 = UINT16_MAX;
volatile uint8_t x191 = 54U;
int64_t x192 = -138209821741486147LL;
int32_t x197 = INT32_MIN;
int64_t x220 = INT64_MIN;
static int16_t x226 = 0;
uint64_t t42 = 1938367021LLU;
int16_t x231 = INT16_MIN;
static int32_t x248 = INT32_MIN;
int8_t x261 = 1;
uint32_t x264 = 204096U;
int32_t x266 = -10399712;
uint32_t x267 = 114237007U;
int8_t x272 = 25;
volatile uint8_t x287 = UINT8_MAX;
int32_t x308 = INT32_MIN;
int8_t x318 = 33;
uint32_t t59 = UINT32_MAX;
int64_t t62 = -96LL;
static uint8_t x357 = 1U;
static uint8_t x361 = 106U;
int16_t x387 = INT16_MAX;
int32_t x388 = INT32_MIN;
int8_t x395 = -1;
int16_t x396 = INT16_MIN;
volatile uint8_t x399 = 0U;
int64_t x400 = -1LL;
int32_t t74 = 246;
int64_t t75 = -9130643LL;
int32_t x422 = -86219;
int64_t t79 = 8151141301LL;
int16_t x431 = INT16_MIN;
int32_t x432 = -1;
static volatile int64_t x437 = INT64_MIN;
int8_t x451 = 0;
volatile uint64_t t84 = 543946316281961202LLU;
uint32_t x458 = 50U;
static volatile int64_t t85 = -1260465077600LL;
volatile uint8_t x465 = 0U;
int32_t x467 = INT32_MIN;
int8_t x472 = INT8_MIN;
volatile uint64_t x480 = UINT64_MAX;
int8_t x482 = INT8_MIN;
volatile int32_t x485 = 372715;
int32_t x505 = 31645;
uint8_t x506 = 24U;
int16_t x509 = INT16_MAX;
uint32_t x513 = UINT32_MAX;
int8_t x515 = INT8_MIN;
uint8_t x516 = UINT8_MAX;
int64_t t96 = 45795121LL;
uint16_t x517 = UINT16_MAX;
uint32_t x522 = UINT32_MAX;
static int32_t x523 = -1;


void f0(void) {
	volatile int32_t x1 = INT32_MAX;
	int8_t x2 = -1;
	volatile uint32_t x4 = UINT32_MAX;
	volatile uint32_t t0 = 533604U;

	t0 = ((x1+x2)^(x3+x4));

	if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x5 = 5952U;
	int64_t x6 = -1LL;
	static volatile uint8_t x8 = 20U;
	int64_t t1 = 13601LL;

	t1 = ((x5+x6)^(x7+x8));

	if (t1 != -5927LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = UINT16_MAX;
	int64_t x10 = 8099760468122640LL;
	int32_t x11 = INT32_MIN;
	uint16_t x12 = 3562U;
	int64_t t2 = -90522063157904LL;

	t2 = ((x9+x10)^(x11+x12));

	if (t2 != -8099758808182299LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x21 = 8;
	int16_t x22 = INT16_MIN;
	static uint32_t x23 = 439U;
	int8_t x24 = INT8_MIN;
	uint32_t t3 = 479782U;

	t3 = ((x21+x22)^(x23+x24));

	if (t3 != 4294934847U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x29 = INT16_MAX;
	int64_t t4 = -1217949266810216095LL;

	t4 = ((x29+x30)^(x31+x32));

	if (t4 != -2147516346LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x37 = -1;
	static int32_t x38 = -61948;
	uint16_t x39 = 800U;
	uint8_t x40 = 70U;
	volatile int32_t t5 = 19;

	t5 = ((x37+x38)^(x39+x40));

	if (t5 != -62107) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x41 = -1;
	static uint32_t x42 = 1044U;
	uint16_t x43 = 14048U;
	static uint8_t x44 = 3U;
	volatile uint32_t t6 = 480U;

	t6 = ((x41+x42)^(x43+x44));

	if (t6 != 13040U) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x45 = INT16_MIN;
	uint16_t x46 = 14U;
	static int8_t x47 = INT8_MIN;
	static uint16_t x48 = 3U;
	volatile int32_t t7 = -6;

	t7 = ((x45+x46)^(x47+x48));

	if (t7 != 32653) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x53 = 1U;
	static volatile int16_t x54 = -1;
	int32_t x56 = 1245222;
	static volatile int32_t t8 = 14349;

	t8 = ((x53+x54)^(x55+x56));

	if (t8 != 1245221) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x57 = INT16_MAX;
	static volatile int32_t x58 = 985089916;
	static volatile int64_t x59 = -96514029181LL;
	int16_t x60 = INT16_MIN;
	volatile int64_t t9 = 1598635609043125559LL;

	t9 = ((x57+x58)^(x59+x60));

	if (t9 != -95598178568LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x61 = -3;
	uint32_t x62 = 620074290U;
	static int64_t x63 = -24548706909411840LL;
	volatile int8_t x64 = -1;
	int64_t t10 = -2053373187550829LL;

	t10 = ((x61+x62)^(x63+x64));

	if (t10 != -24548706455015216LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x65 = -1LL;
	static int32_t x66 = -1;
	int64_t x68 = 4613585LL;
	volatile int64_t t11 = -3679478986680569678LL;

	t11 = ((x65+x66)^(x67+x68));

	if (t11 != 9223372036850162223LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x69 = -60671204;
	int8_t x72 = INT8_MIN;
	static int64_t t12 = -41059316070376969LL;

	t12 = ((x69+x70)^(x71+x72));

	if (t12 != 9223372034767963236LL) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int8_t x77 = 13;
	static int8_t x78 = INT8_MIN;
	uint8_t x79 = 12U;
	int64_t x80 = -1LL;
	volatile int64_t t13 = 4290239994371120LL;

	t13 = ((x77+x78)^(x79+x80));

	if (t13 != -122LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x82 = -1LL;
	volatile int32_t x83 = -1;
	int16_t x84 = INT16_MIN;
	int64_t t14 = -6LL;

	t14 = ((x81+x82)^(x83+x84));

	if (t14 != 32769LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x85 = INT16_MIN;
	uint8_t x88 = 2U;

	t15 = ((x85+x86)^(x87+x88));

	if (t15 != 18446744073709518590LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x91 = 38;
	static uint64_t x92 = 12412070LLU;
	volatile uint64_t t16 = 7613755919620833LLU;

	t16 = ((x89+x90)^(x91+x92));

	if (t16 != 2135071539LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x93 = UINT16_MAX;
	int8_t x94 = -1;
	volatile uint64_t x96 = UINT64_MAX;

	t17 = ((x93+x94)^(x95+x96));

	if (t17 != 18446744073709486084LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x97 = INT8_MAX;
	uint64_t x98 = UINT64_MAX;
	uint32_t x99 = 326U;
	static uint16_t x100 = UINT16_MAX;
	uint64_t t18 = 32302LLU;

	t18 = ((x97+x98)^(x99+x100));

	if (t18 != 65851LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x101 = 110;
	int64_t x102 = INT64_MIN;
	int32_t x104 = -10;
	volatile int64_t t19 = 13818104LL;

	t19 = ((x101+x102)^(x103+x104));

	if (t19 != 9223372036854775704LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x105 = 3U;
	static int8_t x107 = 8;
	int8_t x108 = INT8_MAX;

	t20 = ((x105+x106)^(x107+x108));

	if (t20 != 133) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x109 = 28U;
	uint8_t x110 = 7U;
	static int32_t x112 = -92480688;
	volatile uint32_t t21 = 1391449U;

	t21 = ((x109+x110)^(x111+x112));

	if (t21 != 2055002988U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x117 = INT32_MIN;
	int16_t x118 = INT16_MAX;
	uint8_t x120 = 5U;
	int32_t t22 = 10;

	t22 = ((x117+x118)^(x119+x120));

	if (t22 != -2147462697) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x129 = INT16_MAX;
	static uint64_t x131 = 123148736935LLU;
	int32_t x132 = -1;
	static volatile uint64_t t23 = 38169LLU;

	t23 = ((x129+x130)^(x131+x132));

	if (t23 != 123148704165LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x134 = 3U;
	int8_t x135 = INT8_MAX;
	static int16_t x136 = 1;
	uint64_t t24 = 16133360236349204LLU;

	t24 = ((x133+x134)^(x135+x136));

	if (t24 != 1085456891448LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x137 = 161536LLU;
	uint16_t x138 = UINT16_MAX;
	uint32_t x140 = 166873156U;

	t25 = ((x137+x138)^(x139+x140));

	if (t25 != 413308003001414LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x145 = INT8_MAX;
	int16_t x146 = -3560;
	volatile uint8_t x148 = 3U;
	int32_t t26 = -1365914;

	t26 = ((x145+x146)^(x147+x148));

	if (t26 != 3348) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x149 = 27;
	static volatile int64_t x150 = INT64_MIN;
	uint16_t x151 = UINT16_MAX;
	uint16_t x152 = UINT16_MAX;
	static int64_t t27 = 1026597081448992LL;

	t27 = ((x149+x150)^(x151+x152));

	if (t27 != -9223372036854644763LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x154 = UINT16_MAX;
	int32_t x155 = INT32_MIN;
	static volatile int32_t x156 = 2174098;
	static int32_t t28 = 20;

	t28 = ((x153+x154)^(x155+x156));

	if (t28 != -2145375124) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x157 = -102;
	int16_t x158 = -22;
	int8_t x159 = -1;
	int16_t x160 = -1;
	static int32_t t29 = 63979;

	t29 = ((x157+x158)^(x159+x160));

	if (t29 != 122) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x162 = 26555814312284772LLU;
	int16_t x163 = -12205;
	int16_t x164 = INT16_MIN;
	uint64_t t30 = 3269229276655LLU;

	t30 = ((x161+x162)^(x163+x164));

	if (t30 != 18420188259397321271LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x165 = -1LL;
	static int8_t x166 = -1;
	int32_t x168 = INT32_MIN;
	int64_t t31 = 1LL;

	t31 = ((x165+x166)^(x167+x168));

	if (t31 != -9223372034707292159LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x171 = INT16_MIN;
	volatile int32_t t32 = 41642;

	t32 = ((x169+x170)^(x171+x172));

	if (t32 != -32145) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x173 = 10350;
	int8_t x174 = INT8_MIN;
	volatile int8_t x175 = INT8_MIN;
	static int8_t x176 = INT8_MIN;
	static volatile int32_t t33 = 1;

	t33 = ((x173+x174)^(x175+x176));

	if (t33 != -10002) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x177 = -1;
	volatile uint64_t x178 = 2LLU;
	uint64_t x179 = 626539408166936841LLU;
	int32_t x180 = -1;
	uint64_t t34 = 59575908241238493LLU;

	t34 = ((x177+x178)^(x179+x180));

	if (t34 != 626539408166936841LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x181 = 25LL;
	static int16_t x182 = -1;
	int64_t x183 = -1LL;
	int32_t x184 = -121815;

	t35 = ((x181+x182)^(x183+x184));

	if (t35 != -121808LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x189 = INT16_MAX;
	static int64_t t36 = -966688482091LL;

	t36 = ((x189+x190)^(x191+x192));

	if (t36 != -138209821741445107LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x193 = INT8_MIN;
	int32_t x194 = 280161;
	int32_t x195 = INT32_MIN;
	uint8_t x196 = UINT8_MAX;
	int32_t t37 = -15161170;

	t37 = ((x193+x194)^(x195+x196));

	if (t37 != -2147203810) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x198 = 627182596;
	uint8_t x199 = UINT8_MAX;
	int64_t x200 = 2498259231767306LL;
	volatile int64_t t38 = 1042617304LL;

	t38 = ((x197+x198)^(x199+x200));

	if (t38 != -2498258266820595LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x201 = UINT64_MAX;
	uint64_t x202 = UINT64_MAX;
	uint16_t x203 = UINT16_MAX;
	static int64_t x204 = 3762LL;
	volatile uint64_t t39 = 11226057250LLU;

	t39 = ((x201+x202)^(x203+x204));

	if (t39 != 18446744073709482319LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x205 = INT32_MIN;
	int64_t x206 = -1LL;
	static int32_t x207 = INT32_MIN;
	uint8_t x208 = 4U;
	volatile int64_t t40 = 7349LL;

	t40 = ((x205+x206)^(x207+x208));

	if (t40 != 4294967291LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x217 = UINT8_MAX;
	int16_t x218 = INT16_MIN;
	int16_t x219 = 1;
	int64_t t41 = 171452951LL;

	t41 = ((x217+x218)^(x219+x220));

	if (t41 != 9223372036854743294LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x225 = INT32_MIN;
	uint16_t x227 = UINT16_MAX;
	uint64_t x228 = 663315794186102LLU;

	t42 = ((x225+x226)^(x227+x228));

	if (t42 != 18446080757857931125LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x229 = 3473U;
	int64_t x230 = 131444691940354LL;
	volatile uint16_t x232 = 665U;
	int64_t t43 = 20LL;

	t43 = ((x229+x230)^(x231+x232));

	if (t43 != -131444691942646LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x237 = INT16_MAX;
	int32_t x238 = 14;
	volatile int32_t x239 = INT32_MIN;
	uint64_t x240 = 1LLU;
	static uint64_t t44 = 1LLU;

	t44 = ((x237+x238)^(x239+x240));

	if (t44 != 18446744071562100748LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x241 = -1;
	int64_t x242 = -21271999784LL;
	static int64_t x243 = 31LL;
	int32_t x244 = 193256654;
	int64_t t45 = 3073691LL;

	t45 = ((x241+x242)^(x243+x244));

	if (t45 != -21347707334LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x245 = 415823378878941LL;
	int8_t x246 = INT8_MIN;
	int16_t x247 = 11;
	volatile int64_t t46 = -17LL;

	t46 = ((x245+x246)^(x247+x248));

	if (t46 != -415821876063914LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x249 = INT8_MIN;
	int16_t x250 = INT16_MAX;
	uint16_t x251 = 0U;
	int64_t x252 = INT64_MIN;
	volatile int64_t t47 = -1473794035501952LL;

	t47 = ((x249+x250)^(x251+x252));

	if (t47 != -9223372036854743169LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x253 = 0;
	int8_t x254 = -1;
	volatile int32_t x255 = -1;
	int32_t x256 = -3437;
	int32_t t48 = 0;

	t48 = ((x253+x254)^(x255+x256));

	if (t48 != 3437) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x257 = 22U;
	int32_t x258 = -1237;
	int16_t x259 = INT16_MIN;
	uint64_t x260 = 7587676750765LLU;
	volatile uint64_t t49 = 59LLU;

	t49 = ((x257+x258)^(x259+x260));

	if (t49 != 18446736486032832748LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x262 = INT64_MIN;
	volatile int32_t x263 = INT32_MAX;
	static int64_t t50 = 0LL;

	t50 = ((x261+x262)^(x263+x264));

	if (t50 != -9223372034707088066LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x265 = INT32_MAX;
	volatile uint32_t x268 = UINT32_MAX;
	uint32_t t51 = 109385134U;

	t51 = ((x265+x266)^(x267+x268));

	if (t51 != 2041466449U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x269 = INT8_MIN;
	int8_t x270 = -1;
	int64_t x271 = -95137LL;
	static int64_t t52 = 7700149408490LL;

	t52 = ((x269+x270)^(x271+x272));

	if (t52 != 94983LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x281 = -5;
	int32_t x282 = -1746105;
	volatile uint32_t x283 = 484795U;
	uint64_t x284 = UINT64_MAX;
	uint64_t t53 = 6451389512316LLU;

	t53 = ((x281+x282)^(x283+x284));

	if (t53 != 18446744073707601656LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x285 = INT8_MAX;
	volatile uint64_t x286 = 183447LLU;
	int64_t x288 = -1LL;
	static uint64_t t54 = 380662804232998LLU;

	t54 = ((x285+x286)^(x287+x288));

	if (t54 != 183784LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x289 = INT64_MIN;
	int64_t x290 = 6749862575LL;
	volatile uint16_t x291 = 45U;
	int64_t x292 = INT64_MIN;
	static int64_t t55 = 22LL;

	t55 = ((x289+x290)^(x291+x292));

	if (t55 != 6749862530LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x301 = INT8_MIN;
	int64_t x302 = INT64_MAX;
	uint64_t x303 = 2023255955064424LLU;
	static volatile int32_t x304 = 1;
	uint64_t t56 = 13623024LLU;

	t56 = ((x301+x302)^(x303+x304));

	if (t56 != 9221348780899711254LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x305 = INT8_MIN;
	int8_t x306 = -1;
	volatile uint64_t x307 = 167LLU;
	static uint64_t t57 = 12508847LLU;

	t57 = ((x305+x306)^(x307+x308));

	if (t57 != 2147483608LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x317 = -1LL;
	uint8_t x319 = UINT8_MAX;
	uint32_t x320 = UINT32_MAX;
	int64_t t58 = -1591249077370838LL;

	t58 = ((x317+x318)^(x319+x320));

	if (t58 != 222LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x321 = INT16_MIN;
	int16_t x322 = INT16_MAX;
	uint8_t x323 = 1U;
	uint32_t x324 = UINT32_MAX;

	t59 = ((x321+x322)^(x323+x324));

	if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x337 = 437U;
	static int64_t x338 = 4245227463375446LL;
	int8_t x339 = -1;
	int32_t x340 = -118067;
	static volatile int64_t t60 = 411353189469037712LL;

	t60 = ((x337+x338)^(x339+x340));

	if (t60 != -4245227463258425LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x341 = -102;
	volatile int8_t x342 = INT8_MAX;
	volatile int16_t x343 = 1;
	uint8_t x344 = UINT8_MAX;
	volatile int32_t t61 = -127984;

	t61 = ((x341+x342)^(x343+x344));

	if (t61 != 281) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x349 = INT8_MAX;
	int32_t x350 = 46326;
	int8_t x351 = -59;
	int64_t x352 = -1LL;

	t62 = ((x349+x350)^(x351+x352));

	if (t62 != -46415LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x353 = 849436LL;
	int16_t x354 = -47;
	uint8_t x355 = 2U;
	uint64_t x356 = UINT64_MAX;
	volatile uint64_t t63 = 0LLU;

	t63 = ((x353+x354)^(x355+x356));

	if (t63 != 849388LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x358 = 6;
	int8_t x359 = INT8_MAX;
	int16_t x360 = -1;
	volatile int32_t t64 = -11;

	t64 = ((x357+x358)^(x359+x360));

	if (t64 != 121) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x362 = -778;
	volatile uint16_t x363 = 7U;
	int16_t x364 = -1;
	volatile int32_t t65 = 942;

	t65 = ((x361+x362)^(x363+x364));

	if (t65 != -666) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x365 = 1053198U;
	int32_t x366 = 368260868;
	int8_t x367 = 23;
	volatile uint8_t x368 = 39U;
	uint32_t t66 = 14372U;

	t66 = ((x365+x366)^(x367+x368));

	if (t66 != 369314092U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x369 = -15718757352LL;
	static uint16_t x370 = 5U;
	int16_t x371 = INT16_MIN;
	static uint64_t x372 = UINT64_MAX;
	static volatile uint64_t t67 = 23640LLU;

	t67 = ((x369+x370)^(x371+x372));

	if (t67 != 15718790114LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x373 = 766068U;
	int16_t x374 = INT16_MAX;
	int16_t x375 = -1;
	int64_t x376 = 1418248398723473LL;
	volatile int64_t t68 = 1LL;

	t68 = ((x373+x374)^(x375+x376));

	if (t68 != 1418248399514083LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x377 = UINT64_MAX;
	int8_t x378 = 1;
	int8_t x379 = INT8_MIN;
	volatile int16_t x380 = 229;
	static uint64_t t69 = 53995117108374LLU;

	t69 = ((x377+x378)^(x379+x380));

	if (t69 != 101LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int32_t x385 = INT32_MIN;
	volatile uint8_t x386 = 10U;
	int32_t t70 = -9;

	t70 = ((x385+x386)^(x387+x388));

	if (t70 != 32757) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x389 = -1;
	volatile int16_t x390 = 909;
	static int32_t x391 = -1;
	static uint64_t x392 = 211044735374399854LLU;
	static volatile uint64_t t71 = 2033401583146LLU;

	t71 = ((x389+x390)^(x391+x392));

	if (t71 != 211044735374400225LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x393 = -57;
	int32_t x394 = -12;
	volatile int32_t t72 = -5;

	t72 = ((x393+x394)^(x395+x396));

	if (t72 != 32836) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x397 = 5U;
	static int16_t x398 = -14;
	volatile int64_t t73 = 34962045022277430LL;

	t73 = ((x397+x398)^(x399+x400));

	if (t73 != -4294967288LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x401 = 237;
	int32_t x402 = 2362;
	int32_t x403 = INT32_MIN;
	uint16_t x404 = 111U;

	t74 = ((x401+x402)^(x403+x404));

	if (t74 != -2147481016) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x405 = 37084;
	uint8_t x406 = 2U;
	static int16_t x407 = INT16_MIN;
	int64_t x408 = 16616604169928LL;

	t75 = ((x405+x406)^(x407+x408));

	if (t75 != 16616604165654LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x413 = INT32_MAX;
	int8_t x414 = 0;
	int32_t x415 = INT32_MIN;
	static volatile uint8_t x416 = 48U;
	int32_t t76 = 153344820;

	t76 = ((x413+x414)^(x415+x416));

	if (t76 != -49) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int16_t x417 = INT16_MIN;
	int32_t x418 = -1;
	static int32_t x419 = INT32_MIN;
	uint32_t x420 = 4U;
	volatile uint32_t t77 = 85U;

	t77 = ((x417+x418)^(x419+x420));

	if (t77 != 2147450875U) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x421 = INT64_MAX;
	int16_t x423 = INT16_MAX;
	int8_t x424 = INT8_MAX;
	volatile int64_t t78 = -3581378816213LL;

	t78 = ((x421+x422)^(x423+x424));

	if (t78 != 9223372036854656842LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x425 = INT64_MAX;
	volatile int16_t x426 = INT16_MIN;
	uint32_t x427 = 1411831769U;
	volatile uint32_t x428 = 16023U;

	t79 = ((x425+x426)^(x427+x428));

	if (t79 != 9223372035442895247LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x429 = -168732653LL;
	int16_t x430 = INT16_MIN;
	int64_t t80 = 241LL;

	t80 = ((x429+x430)^(x431+x432));

	if (t80 != 168798188LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x438 = 3U;
	static volatile int8_t x439 = 0;
	int8_t x440 = -1;
	volatile int64_t t81 = 2546370630949181LL;

	t81 = ((x437+x438)^(x439+x440));

	if (t81 != 9223372036854775804LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x441 = 14259773801395171LLU;
	static uint64_t x442 = UINT64_MAX;
	static uint8_t x443 = 7U;
	static volatile int32_t x444 = INT32_MIN;
	uint64_t t82 = 10124209655LLU;

	t82 = ((x441+x442)^(x443+x444));

	if (t82 != 18432484300445348837LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x449 = INT16_MAX;
	uint16_t x450 = 6154U;
	uint8_t x452 = 1U;
	int32_t t83 = 18519;

	t83 = ((x449+x450)^(x451+x452));

	if (t83 != 38920) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x453 = INT64_MIN;
	uint16_t x454 = 61U;
	int64_t x455 = INT64_MAX;
	volatile uint64_t x456 = UINT64_MAX;

	t84 = ((x453+x454)^(x455+x456));

	if (t84 != 18446744073709551555LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x457 = -18500LL;
	volatile uint8_t x459 = 2U;
	static uint16_t x460 = 387U;

	t85 = ((x457+x458)^(x459+x460));

	if (t85 != -18837LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x461 = 122650U;
	uint32_t x462 = 561066U;
	uint16_t x463 = 30U;
	uint32_t x464 = 113588U;
	static uint32_t t86 = 27209U;

	t86 = ((x461+x462)^(x463+x464));

	if (t86 != 775446U) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x466 = UINT8_MAX;
	uint8_t x468 = 0U;
	volatile int32_t t87 = -58137;

	t87 = ((x465+x466)^(x467+x468));

	if (t87 != -2147483393) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x469 = -1LL;
	int16_t x470 = INT16_MAX;
	static volatile int16_t x471 = INT16_MAX;
	static volatile int64_t t88 = 4228205276437034570LL;

	t88 = ((x469+x470)^(x471+x472));

	if (t88 != 129LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x477 = INT32_MIN;
	volatile int32_t x478 = INT32_MAX;
	int16_t x479 = -20;
	volatile uint64_t t89 = 1072LLU;

	t89 = ((x477+x478)^(x479+x480));

	if (t89 != 20LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x481 = INT8_MIN;
	uint8_t x483 = 117U;
	static int64_t x484 = -1LL;
	volatile int64_t t90 = 1114461LL;

	t90 = ((x481+x482)^(x483+x484));

	if (t90 != -140LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x486 = 2U;
	int64_t x487 = -563073277LL;
	uint64_t x488 = 25941761847749LLU;
	volatile uint64_t t91 = 20603261154688318LLU;

	t91 = ((x485+x486)^(x487+x488));

	if (t91 != 25941199130405LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x489 = 84;
	int16_t x490 = 3877;
	volatile uint64_t x491 = 12272508760LLU;
	int32_t x492 = -1;
	uint64_t t92 = 50617992176LLU;

	t92 = ((x489+x490)^(x491+x492));

	if (t92 != 12272504878LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int16_t x493 = -1;
	uint64_t x494 = UINT64_MAX;
	uint8_t x495 = 0U;
	int16_t x496 = INT16_MIN;
	volatile uint64_t t93 = 1LLU;

	t93 = ((x493+x494)^(x495+x496));

	if (t93 != 32766LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x507 = UINT16_MAX;
	uint16_t x508 = 17971U;
	static int32_t t94 = 4945657;

	t94 = ((x505+x506)^(x507+x508));

	if (t94 != 81287) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x510 = UINT16_MAX;
	uint64_t x511 = UINT64_MAX;
	static int64_t x512 = 99LL;
	uint64_t t95 = 7010598553504LLU;

	t95 = ((x509+x510)^(x511+x512));

	if (t95 != 98204LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x514 = INT64_MIN;

	t96 = ((x513+x514)^(x515+x516));

	if (t96 != -9223372032559808640LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x518 = INT16_MIN;
	uint8_t x519 = UINT8_MAX;
	static int16_t x520 = INT16_MIN;
	int32_t t97 = 2164623;

	t97 = ((x517+x518)^(x519+x520));

	if (t97 != -256) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x521 = INT32_MIN;
	static volatile int64_t x524 = -18LL;
	static int64_t t98 = -3171131306LL;

	t98 = ((x521+x522)^(x523+x524));

	if (t98 != -2147483630LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x525 = 508441976046026260LLU;
	int8_t x526 = -1;
	int32_t x527 = 7476106;
	int32_t x528 = -1099372;
	volatile uint64_t t99 = 3471477972413459208LLU;

	t99 = ((x525+x526)^(x527+x528));

	if (t99 != 508441976052364045LLU) { NG(); } else { ; }
	
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

