#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x8 = INT64_MIN;
int16_t x25 = INT16_MAX;
volatile int32_t t5 = -117989149;
uint32_t x29 = UINT32_MAX;
uint64_t x31 = 27880164LLU;
int16_t x34 = INT16_MIN;
int32_t x36 = INT32_MIN;
static volatile int64_t x57 = INT64_MIN;
volatile int16_t x58 = INT16_MIN;
volatile int64_t t11 = 66641LL;
int8_t x61 = INT8_MIN;
volatile int32_t x62 = INT32_MIN;
uint32_t x64 = UINT32_MAX;
int8_t x65 = -1;
uint16_t x66 = UINT16_MAX;
int8_t x67 = 39;
int32_t x70 = INT32_MIN;
int64_t t14 = -78606LL;
uint8_t x74 = 12U;
static int16_t x77 = INT16_MAX;
int32_t t16 = -10488;
static volatile int64_t x89 = INT64_MIN;
volatile uint8_t x92 = UINT8_MAX;
volatile uint64_t t20 = UINT64_MAX;
int8_t x102 = 32;
uint8_t x104 = UINT8_MAX;
static int64_t x105 = INT64_MIN;
volatile int8_t x110 = -1;
volatile int16_t x113 = -5611;
int32_t x114 = INT32_MAX;
static uint8_t x118 = UINT8_MAX;
int64_t x122 = -35960LL;
int16_t x131 = -29;
int64_t t28 = -31959895362784LL;
uint32_t t29 = UINT32_MAX;
static int8_t x140 = INT8_MIN;
volatile int64_t t31 = INT64_MAX;
int32_t x145 = -559192;
uint64_t t34 = UINT64_MAX;
uint16_t x160 = 29U;
int8_t x165 = 3;
int16_t x170 = INT16_MIN;
static uint8_t x172 = UINT8_MAX;
volatile uint32_t t37 = 99697581U;
int32_t x175 = INT32_MAX;
int32_t x177 = -5063957;
int32_t x183 = INT32_MIN;
int32_t x188 = -122320359;
volatile int32_t x194 = 418998469;
volatile int16_t x201 = 0;
int64_t x202 = 112768202542876062LL;
int32_t x204 = 166949207;
static volatile int64_t t45 = 170707LL;
static int8_t x220 = INT8_MIN;
uint16_t x222 = UINT16_MAX;
static int64_t x223 = INT64_MAX;
int64_t x225 = -1LL;
uint8_t x226 = 72U;
static int64_t t50 = 1052037776964977LL;
static uint64_t t51 = 71259531074LLU;
int8_t x239 = 3;
int16_t x243 = INT16_MIN;
int64_t x249 = INT64_MIN;
uint64_t x252 = 2361141LLU;
static uint64_t t56 = 3217999644761700LLU;
uint8_t x253 = UINT8_MAX;
volatile uint16_t x257 = 227U;
uint32_t x282 = 698532U;
int32_t x284 = -1;
static int64_t x287 = INT64_MIN;
volatile int64_t t66 = 90558578200618611LL;
static int32_t x295 = INT32_MIN;
volatile int32_t t67 = -524;
uint64_t x297 = 41LLU;
int8_t x305 = INT8_MAX;
int64_t t70 = -3667156LL;
volatile int64_t t71 = 353LL;
static int8_t x317 = INT8_MIN;
uint64_t x322 = 15042658595423731LLU;
int16_t x324 = 2318;
uint64_t t74 = 418198LLU;
static uint8_t x326 = 3U;
volatile int32_t t75 = 28604466;
int8_t x336 = -18;
volatile uint64_t t78 = 176336690417442310LLU;
static int32_t x357 = INT32_MIN;
int32_t x370 = INT32_MIN;
volatile uint8_t x379 = 0U;
int64_t t86 = 3152184611088LL;
int64_t x385 = -517347532LL;
static int16_t x387 = -1;
int16_t x394 = INT16_MIN;
volatile int32_t x396 = -1;
static volatile uint64_t t91 = 62668LLU;
static volatile int32_t x402 = INT32_MIN;
volatile int8_t x404 = INT8_MAX;
int8_t x410 = -1;
volatile int16_t x411 = INT16_MAX;
int32_t x423 = -37585;
static int64_t x432 = INT64_MAX;
volatile int64_t t98 = INT64_MAX;
int8_t x435 = INT8_MIN;


void f0(void) {
	int32_t x1 = -25385;
	int64_t x2 = -1LL;
	static int16_t x3 = INT16_MIN;
	int64_t x4 = INT64_MIN;
	volatile int64_t t0 = 4228457LL;

	t0 = (((x1/x2)+x3)|x4);

	if (t0 != -7383LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 261U;
	int32_t x6 = INT32_MAX;
	int16_t x7 = INT16_MAX;
	volatile int64_t t1 = 1184LL;

	t1 = (((x5/x6)+x7)|x8);

	if (t1 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = INT8_MAX;
	int64_t x10 = INT64_MAX;
	int16_t x11 = INT16_MIN;
	volatile int64_t x12 = INT64_MIN;
	int64_t t2 = -1366118131806678642LL;

	t2 = (((x9/x10)+x11)|x12);

	if (t2 != -32768LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = INT8_MIN;
	static int32_t x14 = 56;
	volatile int8_t x15 = INT8_MIN;
	volatile uint64_t x16 = UINT64_MAX;
	uint64_t t3 = UINT64_MAX;

	t3 = (((x13/x14)+x15)|x16);

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x21 = 114U;
	uint32_t x22 = 342211U;
	uint16_t x23 = 0U;
	int8_t x24 = INT8_MAX;
	static uint32_t t4 = 2U;

	t4 = (((x21/x22)+x23)|x24);

	if (t4 != 127U) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x26 = 3;
	int8_t x27 = -1;
	volatile uint16_t x28 = 5U;

	t5 = (((x25/x26)+x27)|x28);

	if (t5 != 10925) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x30 = 1U;
	int64_t x32 = 426LL;
	static volatile uint64_t t6 = 249790759LLU;

	t6 = (((x29/x30)+x31)|x32);

	if (t6 != 4322847723LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = INT16_MAX;
	int64_t x35 = -1LL;
	volatile int64_t t7 = -1577614084981583151LL;

	t7 = (((x33/x34)+x35)|x36);

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x37 = 231232U;
	uint64_t x38 = 19LLU;
	int32_t x39 = INT32_MIN;
	int64_t x40 = -488443141LL;
	volatile uint64_t t8 = 781LLU;

	t8 = (((x37/x38)+x39)|x40);

	if (t8 != 18446744073221111803LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x45 = -41;
	int8_t x46 = INT8_MIN;
	uint16_t x47 = 8546U;
	uint64_t x48 = 53564953655115382LLU;
	uint64_t t9 = 4039101708LLU;

	t9 = (((x45/x46)+x47)|x48);

	if (t9 != 53564953655115638LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x53 = INT32_MAX;
	volatile uint32_t x54 = 3U;
	int32_t x55 = 0;
	volatile int64_t x56 = -7198298631447755LL;
	int64_t t10 = -1495268224752LL;

	t10 = (((x53/x54)+x55)|x56);

	if (t10 != -7198298620298305LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x59 = UINT16_MAX;
	static volatile int16_t x60 = INT16_MIN;

	t11 = (((x57/x58)+x59)|x60);

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x63 = UINT64_MAX;
	static volatile uint64_t t12 = UINT64_MAX;

	t12 = (((x61/x62)+x63)|x64);

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x68 = 41U;
	int32_t t13 = 14404;

	t13 = (((x65/x66)+x67)|x68);

	if (t13 != 47) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x69 = INT64_MAX;
	int16_t x71 = INT16_MIN;
	int64_t x72 = INT64_MIN;

	t14 = (((x69/x70)+x71)|x72);

	if (t14 != -4295000063LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x73 = INT32_MIN;
	volatile int64_t x75 = -1LL;
	static int16_t x76 = 11;
	volatile int64_t t15 = -111772704283907LL;

	t15 = (((x73/x74)+x75)|x76);

	if (t15 != -178956961LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x78 = INT16_MIN;
	uint8_t x79 = UINT8_MAX;
	volatile uint8_t x80 = UINT8_MAX;

	t16 = (((x77/x78)+x79)|x80);

	if (t16 != 255) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x81 = INT8_MIN;
	static volatile uint32_t x82 = UINT32_MAX;
	volatile uint32_t x83 = UINT32_MAX;
	int64_t x84 = -1LL;
	volatile int64_t t17 = -999927980999411LL;

	t17 = (((x81/x82)+x83)|x84);

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x85 = INT8_MIN;
	int32_t x86 = 10601;
	volatile int16_t x87 = -1;
	int32_t x88 = INT32_MIN;
	volatile int32_t t18 = 1727;

	t18 = (((x85/x86)+x87)|x88);

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x90 = -64228;
	uint8_t x91 = UINT8_MAX;
	static int64_t t19 = 502313LL;

	t19 = (((x89/x90)+x91)|x92);

	if (t19 != 143603600250367LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x93 = UINT64_MAX;
	volatile int32_t x94 = -1;
	static int8_t x95 = INT8_MAX;
	int8_t x96 = -1;

	t20 = (((x93/x94)+x95)|x96);

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x101 = 279U;
	uint32_t x103 = UINT32_MAX;
	volatile uint32_t t21 = 244539U;

	t21 = (((x101/x102)+x103)|x104);

	if (t21 != 255U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x106 = UINT32_MAX;
	volatile uint8_t x107 = UINT8_MAX;
	uint64_t x108 = 1930076259LLU;
	uint64_t t22 = 305LLU;

	t22 = (((x105/x106)+x107)|x108);

	if (t22 != 18446744073492144383LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x109 = 3635494755500852498LLU;
	volatile int16_t x111 = -1;
	int64_t x112 = 5371923899768231LL;
	volatile uint64_t t23 = UINT64_MAX;

	t23 = (((x109/x110)+x111)|x112);

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x115 = UINT64_MAX;
	static volatile uint16_t x116 = 1395U;
	static uint64_t t24 = UINT64_MAX;

	t24 = (((x113/x114)+x115)|x116);

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x117 = 0;
	static volatile uint16_t x119 = 2U;
	volatile int64_t x120 = INT64_MAX;
	volatile int64_t t25 = INT64_MAX;

	t25 = (((x117/x118)+x119)|x120);

	if (t25 != INT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x121 = UINT64_MAX;
	uint64_t x123 = 237528387518366LLU;
	int8_t x124 = 0;
	uint64_t t26 = 130872719114147932LLU;

	t26 = (((x121/x122)+x123)|x124);

	if (t26 != 237528387518367LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x125 = UINT64_MAX;
	static int32_t x126 = INT32_MIN;
	int32_t x127 = -1;
	static int8_t x128 = INT8_MIN;
	uint64_t t27 = 950171874205631876LLU;

	t27 = (((x125/x126)+x127)|x128);

	if (t27 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x129 = 0;
	int64_t x130 = INT64_MAX;
	int8_t x132 = INT8_MIN;

	t28 = (((x129/x130)+x131)|x132);

	if (t28 != -29LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x133 = UINT8_MAX;
	uint32_t x134 = UINT32_MAX;
	int16_t x135 = -1;
	int8_t x136 = INT8_MIN;

	t29 = (((x133/x134)+x135)|x136);

	if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x137 = INT32_MAX;
	volatile int8_t x138 = INT8_MIN;
	static int8_t x139 = -1;
	int32_t t30 = 181188;

	t30 = (((x137/x138)+x139)|x140);

	if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x141 = 34U;
	volatile int8_t x142 = -23;
	volatile int8_t x143 = -1;
	int64_t x144 = INT64_MAX;

	t31 = (((x141/x142)+x143)|x144);

	if (t31 != INT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x146 = 9;
	int16_t x147 = INT16_MIN;
	uint16_t x148 = UINT16_MAX;
	static int32_t t32 = 13003;

	t32 = (((x145/x146)+x147)|x148);

	if (t32 != -65537) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x149 = -1LL;
	int16_t x150 = INT16_MIN;
	int16_t x151 = 26;
	uint8_t x152 = UINT8_MAX;
	int64_t t33 = 795506589LL;

	t33 = (((x149/x150)+x151)|x152);

	if (t33 != 255LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x153 = -6LL;
	uint16_t x154 = 175U;
	uint64_t x155 = 4721905572257181287LLU;
	int16_t x156 = -1;

	t34 = (((x153/x154)+x155)|x156);

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x157 = 1;
	int64_t x158 = INT64_MIN;
	static volatile int32_t x159 = 180145;
	int64_t t35 = 13862001487597839LL;

	t35 = (((x157/x158)+x159)|x160);

	if (t35 != 180157LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x166 = 3U;
	int8_t x167 = -5;
	volatile uint32_t x168 = UINT32_MAX;
	static volatile uint32_t t36 = UINT32_MAX;

	t36 = (((x165/x166)+x167)|x168);

	if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x169 = 21853431U;
	uint32_t x171 = 4572719U;

	t37 = (((x169/x170)+x171)|x172);

	if (t37 != 4572927U) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x173 = 9551U;
	int32_t x174 = INT32_MIN;
	int8_t x176 = -1;
	int32_t t38 = -166065528;

	t38 = (((x173/x174)+x175)|x176);

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x178 = INT32_MIN;
	int64_t x179 = INT64_MIN;
	int16_t x180 = -10;
	int64_t t39 = 321LL;

	t39 = (((x177/x178)+x179)|x180);

	if (t39 != -10LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x181 = 125757638;
	int32_t x182 = INT32_MIN;
	volatile int32_t x184 = INT32_MIN;
	volatile int32_t t40 = INT32_MIN;

	t40 = (((x181/x182)+x183)|x184);

	if (t40 != INT32_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x185 = UINT64_MAX;
	int32_t x186 = 196;
	int32_t x187 = 184715920;
	volatile uint64_t t41 = 70677682588402335LLU;

	t41 = (((x185/x186)+x187)|x188);

	if (t41 != 18446744073675464255LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint64_t x189 = 1078628613LLU;
	int32_t x190 = -597474;
	static uint64_t x191 = 77161021LLU;
	int64_t x192 = -404644074956282970LL;
	volatile uint64_t t42 = 782720459406103LLU;

	t42 = (((x189/x190)+x191)|x192);

	if (t42 != 18042099998821966783LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x193 = 1U;
	uint16_t x195 = 153U;
	int8_t x196 = INT8_MIN;
	static int32_t t43 = -30949;

	t43 = (((x193/x194)+x195)|x196);

	if (t43 != -103) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x197 = INT8_MIN;
	static int16_t x198 = INT16_MAX;
	volatile int32_t x199 = -1;
	int64_t x200 = INT64_MIN;
	int64_t t44 = 1802076445405843430LL;

	t44 = (((x197/x198)+x199)|x200);

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x203 = 17U;

	t45 = (((x201/x202)+x203)|x204);

	if (t45 != 166949207LL) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int32_t x205 = INT32_MIN;
	uint8_t x206 = UINT8_MAX;
	uint32_t x207 = 52142U;
	volatile int32_t x208 = INT32_MIN;
	uint32_t t46 = 77U;

	t46 = (((x205/x206)+x207)|x208);

	if (t46 != 4286597934U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x209 = 0;
	volatile int8_t x210 = -1;
	uint64_t x211 = UINT64_MAX;
	static int8_t x212 = INT8_MAX;
	volatile uint64_t t47 = UINT64_MAX;

	t47 = (((x209/x210)+x211)|x212);

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x217 = UINT16_MAX;
	static uint32_t x218 = 1U;
	static uint32_t x219 = 0U;
	uint32_t t48 = UINT32_MAX;

	t48 = (((x217/x218)+x219)|x220);

	if (t48 != UINT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x221 = 1;
	int64_t x224 = INT64_MIN;
	int64_t t49 = -48102LL;

	t49 = (((x221/x222)+x223)|x224);

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x227 = INT64_MAX;
	static volatile int8_t x228 = INT8_MIN;

	t50 = (((x225/x226)+x227)|x228);

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x229 = INT32_MIN;
	uint32_t x230 = 3402802U;
	static int64_t x231 = INT64_MIN;
	uint64_t x232 = 1765886LLU;

	t51 = (((x229/x230)+x231)|x232);

	if (t51 != 9223372036856542207LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x233 = INT32_MIN;
	static int32_t x234 = INT32_MAX;
	uint32_t x235 = 11U;
	int8_t x236 = INT8_MAX;
	static volatile uint32_t t52 = 367101U;

	t52 = (((x233/x234)+x235)|x236);

	if (t52 != 127U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x237 = 0;
	static int64_t x238 = -8001520813LL;
	static int32_t x240 = -1;
	int64_t t53 = 457LL;

	t53 = (((x237/x238)+x239)|x240);

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x241 = -7561LL;
	int32_t x242 = -1;
	static int32_t x244 = -250170315;
	int64_t t54 = -38073315LL;

	t54 = (((x241/x242)+x243)|x244);

	if (t54 != -16963LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x245 = 5409U;
	int32_t x246 = INT32_MIN;
	static int8_t x247 = INT8_MAX;
	int8_t x248 = -1;
	volatile int32_t t55 = -889383147;

	t55 = (((x245/x246)+x247)|x248);

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x250 = -28;
	volatile uint8_t x251 = UINT8_MAX;

	t56 = (((x249/x250)+x251)|x252);

	if (t56 != 329406144175744949LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x254 = INT16_MAX;
	volatile uint64_t x255 = UINT64_MAX;
	static uint16_t x256 = 557U;
	uint64_t t57 = UINT64_MAX;

	t57 = (((x253/x254)+x255)|x256);

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x258 = INT64_MAX;
	int16_t x259 = INT16_MIN;
	volatile uint32_t x260 = 1986U;
	volatile int64_t t58 = -18051529119LL;

	t58 = (((x257/x258)+x259)|x260);

	if (t58 != -30782LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x261 = -184;
	volatile uint32_t x262 = 13152U;
	int64_t x263 = -128330LL;
	int16_t x264 = 9;
	volatile int64_t t59 = 408869001721076301LL;

	t59 = (((x261/x262)+x263)|x264);

	if (t59 != 198233LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x265 = INT16_MAX;
	uint32_t x266 = 192U;
	static int8_t x267 = INT8_MAX;
	static int64_t x268 = 7492138011LL;
	int64_t t60 = 911711535158LL;

	t60 = (((x265/x266)+x267)|x268);

	if (t60 != 7492138299LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x269 = INT8_MIN;
	static int64_t x270 = INT64_MIN;
	int64_t x271 = 64954LL;
	int64_t x272 = INT64_MIN;
	volatile int64_t t61 = 131362450200557909LL;

	t61 = (((x269/x270)+x271)|x272);

	if (t61 != -9223372036854710854LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x273 = INT8_MIN;
	volatile uint32_t x274 = 720U;
	static volatile int32_t x275 = 717833;
	int32_t x276 = INT32_MIN;
	static volatile uint32_t t62 = 120474U;

	t62 = (((x273/x274)+x275)|x276);

	if (t62 != 2154166713U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x277 = 14605;
	int8_t x278 = INT8_MAX;
	static volatile int8_t x279 = 12;
	static int16_t x280 = INT16_MIN;
	int32_t t63 = -30756;

	t63 = (((x277/x278)+x279)|x280);

	if (t63 != -32641) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x281 = INT32_MAX;
	int16_t x283 = INT16_MIN;
	uint32_t t64 = UINT32_MAX;

	t64 = (((x281/x282)+x283)|x284);

	if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x285 = 6715220U;
	int64_t x286 = INT64_MIN;
	static int8_t x288 = INT8_MIN;
	static int64_t t65 = 0LL;

	t65 = (((x285/x286)+x287)|x288);

	if (t65 != -128LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x289 = INT16_MIN;
	volatile int64_t x290 = 133819117991481455LL;
	int8_t x291 = -12;
	int64_t x292 = INT64_MAX;

	t66 = (((x289/x290)+x291)|x292);

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x293 = INT16_MAX;
	static int8_t x294 = INT8_MAX;
	int8_t x296 = -2;

	t67 = (((x293/x294)+x295)|x296);

	if (t67 != -2) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x298 = -1LL;
	int64_t x299 = INT64_MIN;
	int64_t x300 = -1LL;
	volatile uint64_t t68 = UINT64_MAX;

	t68 = (((x297/x298)+x299)|x300);

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x301 = -11976696LL;
	int64_t x302 = INT64_MIN;
	int16_t x303 = INT16_MIN;
	int64_t x304 = 25LL;
	volatile int64_t t69 = 264101247601LL;

	t69 = (((x301/x302)+x303)|x304);

	if (t69 != -32743LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x306 = -1LL;
	int64_t x307 = -243176234545347616LL;
	static int16_t x308 = 16;

	t70 = (((x305/x306)+x307)|x308);

	if (t70 != -243176234545347727LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x309 = -1;
	int32_t x310 = 132;
	volatile uint32_t x311 = 110089U;
	static volatile int64_t x312 = -1LL;

	t71 = (((x309/x310)+x311)|x312);

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int64_t x313 = 794LL;
	volatile int16_t x314 = -1;
	uint16_t x315 = 10U;
	volatile int16_t x316 = -14548;
	int64_t t72 = 3389LL;

	t72 = (((x313/x314)+x315)|x316);

	if (t72 != -4LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x318 = 237LLU;
	uint16_t x319 = 190U;
	static int16_t x320 = INT16_MAX;
	uint64_t t73 = 40974899434LLU;

	t73 = (((x317/x318)+x319)|x320);

	if (t73 != 77834363180220415LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x321 = INT32_MIN;
	int64_t x323 = INT64_MAX;

	t74 = (((x321/x322)+x323)|x324);

	if (t74 != 9223372036854779343LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x325 = -1;
	int16_t x327 = -1;
	int8_t x328 = 0;

	t75 = (((x325/x326)+x327)|x328);

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x329 = 3U;
	int64_t x330 = INT64_MIN;
	int16_t x331 = -2680;
	uint32_t x332 = UINT32_MAX;
	volatile int64_t t76 = 1645228772171171681LL;

	t76 = (((x329/x330)+x331)|x332);

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x333 = INT64_MIN;
	int8_t x334 = INT8_MIN;
	int8_t x335 = INT8_MIN;
	int64_t t77 = 39217195432LL;

	t77 = (((x333/x334)+x335)|x336);

	if (t77 != -18LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x337 = UINT64_MAX;
	int8_t x338 = INT8_MAX;
	uint16_t x339 = 588U;
	int32_t x340 = INT32_MAX;

	t78 = (((x337/x338)+x339)|x340);

	if (t78 != 145249954942681087LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int8_t x341 = -1;
	static int64_t x342 = INT64_MIN;
	volatile int16_t x343 = INT16_MIN;
	int64_t x344 = 1LL;
	int64_t t79 = 80193091871057LL;

	t79 = (((x341/x342)+x343)|x344);

	if (t79 != -32767LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x345 = UINT8_MAX;
	volatile int32_t x346 = INT32_MIN;
	int64_t x347 = INT64_MAX;
	int64_t x348 = 14848496790LL;
	int64_t t80 = INT64_MAX;

	t80 = (((x345/x346)+x347)|x348);

	if (t80 != INT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x349 = -1061248307452179LL;
	volatile int16_t x350 = 100;
	static uint8_t x351 = 15U;
	int8_t x352 = 28;
	volatile int64_t t81 = 260LL;

	t81 = (((x349/x350)+x351)|x352);

	if (t81 != -10612483074498LL) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int16_t x353 = INT16_MIN;
	volatile int8_t x354 = INT8_MIN;
	int8_t x355 = -1;
	int8_t x356 = -1;
	int32_t t82 = -3018248;

	t82 = (((x353/x354)+x355)|x356);

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x358 = 1889U;
	int16_t x359 = INT16_MAX;
	uint64_t x360 = 208241843LLU;
	uint64_t t83 = 530362047329LLU;

	t83 = (((x357/x358)+x359)|x360);

	if (t83 != 18446744073708480443LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x365 = UINT32_MAX;
	uint32_t x366 = UINT32_MAX;
	static int32_t x367 = INT32_MIN;
	volatile uint8_t x368 = UINT8_MAX;
	volatile uint32_t t84 = 10323U;

	t84 = (((x365/x366)+x367)|x368);

	if (t84 != 2147483903U) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x369 = -1;
	int8_t x371 = INT8_MIN;
	int64_t x372 = -510751418790897LL;
	static volatile int64_t t85 = -139553434637889LL;

	t85 = (((x369/x370)+x371)|x372);

	if (t85 != -113LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x377 = -1LL;
	int32_t x378 = 8990405;
	static int64_t x380 = 12669327LL;

	t86 = (((x377/x378)+x379)|x380);

	if (t86 != 12669327LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x381 = INT16_MAX;
	int16_t x382 = 7;
	int64_t x383 = 14213008776521886LL;
	static int64_t x384 = -21490507397LL;
	volatile int64_t t87 = -13LL;

	t87 = (((x381/x382)+x383)|x384);

	if (t87 != -11469825LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x386 = INT32_MAX;
	volatile int16_t x388 = INT16_MIN;
	volatile int64_t t88 = 43855LL;

	t88 = (((x385/x386)+x387)|x388);

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x389 = INT64_MAX;
	static volatile int32_t x390 = INT32_MAX;
	int8_t x391 = -48;
	int16_t x392 = INT16_MIN;
	int64_t t89 = -1953116351062972LL;

	t89 = (((x389/x390)+x391)|x392);

	if (t89 != -46LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x393 = -1LL;
	int16_t x395 = -5;
	volatile int64_t t90 = -8599062031793LL;

	t90 = (((x393/x394)+x395)|x396);

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x397 = UINT64_MAX;
	volatile int32_t x398 = -888457;
	int32_t x399 = 456;
	uint64_t x400 = 437821901610183LLU;

	t91 = (((x397/x398)+x399)|x400);

	if (t91 != 437821901610447LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x401 = INT8_MAX;
	int16_t x403 = INT16_MAX;
	int32_t t92 = -38;

	t92 = (((x401/x402)+x403)|x404);

	if (t92 != 32767) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x405 = INT16_MIN;
	volatile int32_t x406 = 4141;
	int16_t x407 = 1;
	volatile int16_t x408 = INT16_MAX;
	volatile int32_t t93 = 267;

	t93 = (((x405/x406)+x407)|x408);

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x409 = INT16_MIN;
	uint16_t x412 = 5U;
	static int32_t t94 = -2011;

	t94 = (((x409/x410)+x411)|x412);

	if (t94 != 65535) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x417 = -1;
	int32_t x418 = INT32_MIN;
	int32_t x419 = INT32_MAX;
	int32_t x420 = INT32_MIN;
	volatile int32_t t95 = 10028574;

	t95 = (((x417/x418)+x419)|x420);

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x421 = INT8_MAX;
	int64_t x422 = INT64_MIN;
	static uint64_t x424 = 1001729LLU;
	volatile uint64_t t96 = 1047772728LLU;

	t96 = (((x421/x422)+x423)|x424);

	if (t96 != 18446744073709514031LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x425 = INT64_MIN;
	int32_t x426 = INT32_MAX;
	int16_t x427 = 2736;
	int8_t x428 = -15;
	volatile int64_t t97 = 91490LL;

	t97 = (((x425/x426)+x427)|x428);

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x429 = UINT32_MAX;
	int64_t x430 = 3645LL;
	int16_t x431 = 107;

	t98 = (((x429/x430)+x431)|x432);

	if (t98 != INT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int16_t x433 = 298;
	uint8_t x434 = 20U;
	static volatile int8_t x436 = -1;
	volatile int32_t t99 = 1013188;

	t99 = (((x433/x434)+x435)|x436);

	if (t99 != -1) { NG(); } else { ; }
	
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

