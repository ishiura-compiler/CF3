#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x5 = 13U;
volatile uint32_t t3 = 1U;
volatile int16_t x17 = -1;
int16_t x25 = -1;
int64_t x26 = -3471251462LL;
static int32_t x27 = INT32_MAX;
uint64_t x28 = UINT64_MAX;
int16_t x29 = -53;
int16_t x39 = -1;
int32_t t9 = -123217901;
static int32_t t10 = -486345657;
uint32_t x49 = 2U;
static uint32_t x50 = 109882373U;
uint32_t x51 = 5198410U;
int8_t x61 = 33;
static int8_t x63 = INT8_MIN;
volatile int64_t t14 = INT64_MIN;
static int16_t x66 = -78;
int32_t x67 = INT32_MIN;
static int64_t x70 = -12235928988102LL;
static uint8_t x74 = 2U;
volatile int16_t x80 = INT16_MIN;
uint32_t x84 = 187106U;
uint16_t x86 = 3U;
static volatile int32_t t22 = -21602;
int64_t x104 = 637752032208599LL;
int32_t x105 = INT32_MIN;
volatile int32_t x106 = INT32_MIN;
volatile uint32_t x113 = 37U;
int32_t x116 = INT32_MIN;
int16_t x122 = 17;
int32_t t32 = INT32_MAX;
uint32_t x139 = 1U;
int8_t x149 = INT8_MIN;
uint32_t x151 = UINT32_MAX;
static uint16_t x158 = 1U;
static uint64_t x159 = UINT64_MAX;
int64_t x166 = -264266736766366937LL;
int16_t x173 = INT16_MAX;
int16_t x175 = INT16_MAX;
int16_t x176 = INT16_MIN;
int32_t t41 = 0;
int64_t x184 = INT64_MIN;
volatile uint64_t x185 = 551747203812527248LLU;
int32_t x192 = -11684938;
volatile int32_t t45 = -215470;
int32_t x196 = 1;
uint64_t x201 = 28298961LLU;
int16_t x203 = 415;
int64_t x217 = INT64_MAX;
int16_t x218 = INT16_MIN;
volatile int8_t x220 = INT8_MAX;
static uint64_t x221 = 201246139009856LLU;
uint8_t x223 = 26U;
int8_t x232 = -1;
int32_t x244 = -1;
static int16_t x246 = -1;
int8_t x248 = -6;
int16_t x254 = INT16_MIN;
volatile int64_t x255 = INT64_MAX;
int64_t x256 = INT64_MIN;
static uint32_t x257 = UINT32_MAX;
static int64_t x258 = INT64_MAX;
volatile uint32_t x260 = 36U;
static int64_t x261 = INT64_MIN;
static volatile int16_t x268 = INT16_MIN;
volatile uint32_t t69 = 533799575U;
uint32_t x296 = UINT32_MAX;
uint32_t t70 = UINT32_MAX;
int64_t x297 = 726067398843971LL;
volatile uint32_t x303 = 774965U;
int32_t t72 = -40714985;
uint64_t x306 = UINT64_MAX;
volatile uint32_t x309 = 96U;
int64_t t74 = 18185731LL;
volatile int16_t x313 = INT16_MIN;
static int16_t x315 = INT16_MAX;
uint32_t x316 = 733497399U;
uint32_t t76 = 55U;
static volatile uint8_t x323 = UINT8_MAX;
static volatile int32_t x331 = 143617424;
int64_t x335 = -1LL;
volatile int64_t t80 = 3LL;
static int16_t x344 = -1;
int64_t x350 = 3897502890188LL;
static int8_t x353 = -1;
int64_t x357 = 1824LL;
volatile int32_t t85 = 369049012;
static volatile int64_t x368 = 41LL;
volatile uint16_t x369 = 15880U;
static int32_t x372 = -64800;
uint16_t x387 = 26U;
volatile int32_t t91 = -240;
volatile int32_t t92 = -675219;
volatile int32_t t93 = -7295496;
volatile int16_t x399 = INT16_MIN;
int8_t x408 = INT8_MIN;
static int32_t x410 = INT32_MIN;
int16_t x411 = -1;
uint64_t x415 = UINT64_MAX;
static int16_t x417 = INT16_MIN;
volatile uint8_t x420 = 10U;


void f0(void) {
	int8_t x1 = INT8_MAX;
	uint16_t x2 = 41U;
	int32_t x3 = INT32_MAX;
	volatile int8_t x4 = INT8_MIN;
	static volatile int32_t t0 = 480;

	t0 = ((x1==(x2%x3))^x4);

	if (t0 != -128) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x6 = -11896072874010LL;
	int16_t x7 = INT16_MIN;
	static uint64_t x8 = 6185999512LLU;
	volatile uint64_t t1 = 3366LLU;

	t1 = ((x5==(x6%x7))^x8);

	if (t1 != 6185999512LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x9 = UINT16_MAX;
	uint64_t x10 = 264430958509LLU;
	int32_t x11 = INT32_MIN;
	int8_t x12 = 1;
	volatile int32_t t2 = 614667022;

	t2 = ((x9==(x10%x11))^x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = UINT64_MAX;
	int8_t x14 = INT8_MIN;
	static int16_t x15 = INT16_MAX;
	uint32_t x16 = 33U;

	t3 = ((x13==(x14%x15))^x16);

	if (t3 != 33U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x18 = -1LL;
	int16_t x19 = INT16_MIN;
	int16_t x20 = -1;
	static volatile int32_t t4 = 0;

	t4 = ((x17==(x18%x19))^x20);

	if (t4 != -2) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MAX;
	static int32_t x22 = 2815;
	static volatile uint16_t x23 = 1414U;
	uint64_t x24 = 402467LLU;
	uint64_t t5 = 1643828381274043471LLU;

	t5 = ((x21==(x22%x23))^x24);

	if (t5 != 402467LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint64_t t6 = UINT64_MAX;

	t6 = ((x25==(x26%x27))^x28);

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x30 = UINT32_MAX;
	int32_t x31 = 31;
	static int64_t x32 = INT64_MIN;
	int64_t t7 = INT64_MIN;

	t7 = ((x29==(x30%x31))^x32);

	if (t7 != INT64_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = 0;
	static int8_t x34 = 2;
	uint64_t x35 = 22LLU;
	volatile int64_t x36 = -46317133510465LL;
	int64_t t8 = 9146532174408LL;

	t8 = ((x33==(x34%x35))^x36);

	if (t8 != -46317133510465LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 1055905135500454LLU;
	static int8_t x38 = -1;
	int16_t x40 = -10;

	t9 = ((x37==(x38%x39))^x40);

	if (t9 != -10) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x45 = -1LL;
	static int64_t x46 = INT64_MAX;
	int32_t x47 = 41006413;
	static int8_t x48 = INT8_MIN;

	t10 = ((x45==(x46%x47))^x48);

	if (t10 != -128) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x52 = 1523147788074LLU;
	uint64_t t11 = 870882350088496820LLU;

	t11 = ((x49==(x50%x51))^x52);

	if (t11 != 1523147788074LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x53 = UINT64_MAX;
	int32_t x54 = INT32_MIN;
	uint16_t x55 = 1649U;
	uint64_t x56 = UINT64_MAX;
	uint64_t t12 = UINT64_MAX;

	t12 = ((x53==(x54%x55))^x56);

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x57 = -6;
	static int64_t x58 = -1LL;
	int8_t x59 = INT8_MAX;
	volatile int16_t x60 = INT16_MAX;
	int32_t t13 = -96211;

	t13 = ((x57==(x58%x59))^x60);

	if (t13 != 32767) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x62 = INT8_MIN;
	static volatile int64_t x64 = INT64_MIN;

	t14 = ((x61==(x62%x63))^x64);

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = 38499LL;
	int64_t x68 = 18810LL;
	volatile int64_t t15 = -14744892202827805LL;

	t15 = ((x65==(x66%x67))^x68);

	if (t15 != 18810LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = INT64_MIN;
	volatile uint16_t x71 = 80U;
	int32_t x72 = 171;
	int32_t t16 = 263429057;

	t16 = ((x69==(x70%x71))^x72);

	if (t16 != 171) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x73 = 15U;
	int32_t x75 = -126;
	static int64_t x76 = -1LL;
	static volatile int64_t t17 = 161389204172553759LL;

	t17 = ((x73==(x74%x75))^x76);

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x77 = INT16_MIN;
	uint32_t x78 = 9U;
	uint32_t x79 = 2372U;
	volatile int32_t t18 = 499745;

	t18 = ((x77==(x78%x79))^x80);

	if (t18 != -32768) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x81 = UINT16_MAX;
	int8_t x82 = INT8_MIN;
	int16_t x83 = -1;
	static volatile uint32_t t19 = 333529706U;

	t19 = ((x81==(x82%x83))^x84);

	if (t19 != 187106U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x85 = 119U;
	static int8_t x87 = -1;
	int16_t x88 = 1;
	static volatile int32_t t20 = 144542816;

	t20 = ((x85==(x86%x87))^x88);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x89 = -2139070718008705183LL;
	uint64_t x90 = 1LLU;
	int32_t x91 = 239;
	int64_t x92 = 349680994LL;
	int64_t t21 = -50LL;

	t21 = ((x89==(x90%x91))^x92);

	if (t21 != 349680994LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x93 = 63U;
	static int16_t x94 = INT16_MAX;
	int8_t x95 = -1;
	static uint8_t x96 = 55U;

	t22 = ((x93==(x94%x95))^x96);

	if (t22 != 55) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x97 = UINT16_MAX;
	int16_t x98 = INT16_MAX;
	volatile int64_t x99 = INT64_MAX;
	uint16_t x100 = 1U;
	static int32_t t23 = 3969109;

	t23 = ((x97==(x98%x99))^x100);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = 31804465761LL;
	static int32_t x102 = INT32_MIN;
	uint64_t x103 = UINT64_MAX;
	int64_t t24 = 9007LL;

	t24 = ((x101==(x102%x103))^x104);

	if (t24 != 637752032208599LL) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint8_t x107 = UINT8_MAX;
	int64_t x108 = -1LL;
	int64_t t25 = -4218659245284178LL;

	t25 = ((x105==(x106%x107))^x108);

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x109 = INT8_MAX;
	uint16_t x110 = UINT16_MAX;
	int64_t x111 = INT64_MIN;
	volatile int16_t x112 = 15283;
	static int32_t t26 = 349648419;

	t26 = ((x109==(x110%x111))^x112);

	if (t26 != 15283) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x114 = INT8_MIN;
	volatile int32_t x115 = -2;
	int32_t t27 = INT32_MIN;

	t27 = ((x113==(x114%x115))^x116);

	if (t27 != INT32_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x117 = 25301U;
	int32_t x118 = -1;
	static volatile uint32_t x119 = 795U;
	uint32_t x120 = 1299051094U;
	static uint32_t t28 = 365249714U;

	t28 = ((x117==(x118%x119))^x120);

	if (t28 != 1299051094U) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x121 = 33;
	int64_t x123 = INT64_MAX;
	volatile int8_t x124 = -16;
	int32_t t29 = -26400;

	t29 = ((x121==(x122%x123))^x124);

	if (t29 != -16) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x125 = -1;
	int64_t x126 = INT64_MIN;
	int32_t x127 = -1;
	uint16_t x128 = 0U;
	int32_t t30 = -341;

	t30 = ((x125==(x126%x127))^x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x129 = 13U;
	uint8_t x130 = 8U;
	int16_t x131 = -16;
	int64_t x132 = INT64_MAX;
	int64_t t31 = INT64_MAX;

	t31 = ((x129==(x130%x131))^x132);

	if (t31 != INT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x133 = 10099;
	int32_t x134 = 295;
	int32_t x135 = INT32_MIN;
	volatile int32_t x136 = INT32_MAX;

	t32 = ((x133==(x134%x135))^x136);

	if (t32 != INT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x137 = -1;
	int32_t x138 = INT32_MIN;
	static int16_t x140 = INT16_MIN;
	int32_t t33 = 0;

	t33 = ((x137==(x138%x139))^x140);

	if (t33 != -32768) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x141 = 12U;
	int16_t x142 = INT16_MIN;
	int16_t x143 = 272;
	static int16_t x144 = 2;
	int32_t t34 = 2064615;

	t34 = ((x141==(x142%x143))^x144);

	if (t34 != 2) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int8_t x145 = 1;
	int16_t x146 = INT16_MIN;
	volatile uint16_t x147 = 12U;
	int32_t x148 = INT32_MAX;
	int32_t t35 = INT32_MAX;

	t35 = ((x145==(x146%x147))^x148);

	if (t35 != INT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x150 = INT16_MIN;
	volatile int8_t x152 = -27;
	volatile int32_t t36 = 3;

	t36 = ((x149==(x150%x151))^x152);

	if (t36 != -27) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x157 = INT32_MIN;
	int32_t x160 = INT32_MIN;
	int32_t t37 = INT32_MIN;

	t37 = ((x157==(x158%x159))^x160);

	if (t37 != INT32_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x161 = INT8_MAX;
	int16_t x162 = 103;
	int64_t x163 = INT64_MAX;
	uint64_t x164 = 50781LLU;
	uint64_t t38 = 5559137722726LLU;

	t38 = ((x161==(x162%x163))^x164);

	if (t38 != 50781LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x165 = INT16_MIN;
	uint64_t x167 = UINT64_MAX;
	static int8_t x168 = INT8_MAX;
	int32_t t39 = 1320;

	t39 = ((x165==(x166%x167))^x168);

	if (t39 != 127) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x169 = UINT16_MAX;
	uint8_t x170 = UINT8_MAX;
	int8_t x171 = -1;
	static uint32_t x172 = 135959U;
	volatile uint32_t t40 = 7U;

	t40 = ((x169==(x170%x171))^x172);

	if (t40 != 135959U) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x174 = UINT16_MAX;

	t41 = ((x173==(x174%x175))^x176);

	if (t41 != -32768) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x177 = UINT64_MAX;
	static volatile uint64_t x178 = 455783087LLU;
	int16_t x179 = -7;
	static int32_t x180 = -1002;
	int32_t t42 = -3;

	t42 = ((x177==(x178%x179))^x180);

	if (t42 != -1002) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x181 = INT16_MIN;
	volatile int16_t x182 = 1;
	int8_t x183 = INT8_MIN;
	int64_t t43 = INT64_MIN;

	t43 = ((x181==(x182%x183))^x184);

	if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x186 = -1;
	int8_t x187 = INT8_MAX;
	int8_t x188 = INT8_MAX;
	int32_t t44 = 4;

	t44 = ((x185==(x186%x187))^x188);

	if (t44 != 127) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x189 = INT8_MIN;
	static int64_t x190 = INT64_MIN;
	int64_t x191 = -62001250LL;

	t45 = ((x189==(x190%x191))^x192);

	if (t45 != -11684938) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x193 = INT8_MIN;
	volatile uint32_t x194 = UINT32_MAX;
	int64_t x195 = -115LL;
	volatile int32_t t46 = 11486202;

	t46 = ((x193==(x194%x195))^x196);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x197 = -1;
	int64_t x198 = -26LL;
	static int64_t x199 = INT64_MAX;
	volatile int16_t x200 = INT16_MIN;
	static int32_t t47 = 115083286;

	t47 = ((x197==(x198%x199))^x200);

	if (t47 != -32768) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x202 = INT32_MIN;
	static int32_t x204 = INT32_MIN;
	volatile int32_t t48 = INT32_MIN;

	t48 = ((x201==(x202%x203))^x204);

	if (t48 != INT32_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x205 = INT64_MIN;
	volatile int64_t x206 = -1LL;
	uint8_t x207 = UINT8_MAX;
	int32_t x208 = -32269587;
	static volatile int32_t t49 = -295;

	t49 = ((x205==(x206%x207))^x208);

	if (t49 != -32269587) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x209 = INT16_MAX;
	volatile uint16_t x210 = UINT16_MAX;
	int32_t x211 = -391;
	int64_t x212 = INT64_MIN;
	int64_t t50 = INT64_MIN;

	t50 = ((x209==(x210%x211))^x212);

	if (t50 != INT64_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x213 = INT16_MIN;
	int32_t x214 = INT32_MAX;
	int8_t x215 = -1;
	static volatile uint8_t x216 = 15U;
	int32_t t51 = 0;

	t51 = ((x213==(x214%x215))^x216);

	if (t51 != 15) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x219 = -1;
	int32_t t52 = 226824525;

	t52 = ((x217==(x218%x219))^x220);

	if (t52 != 127) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x222 = INT16_MIN;
	uint16_t x224 = 23U;
	int32_t t53 = 1;

	t53 = ((x221==(x222%x223))^x224);

	if (t53 != 23) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x225 = 18;
	int64_t x226 = INT64_MIN;
	volatile uint32_t x227 = UINT32_MAX;
	int64_t x228 = -199663LL;
	volatile int64_t t54 = 3663LL;

	t54 = ((x225==(x226%x227))^x228);

	if (t54 != -199663LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x229 = 660U;
	int8_t x230 = INT8_MIN;
	int32_t x231 = INT32_MAX;
	int32_t t55 = 33;

	t55 = ((x229==(x230%x231))^x232);

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x233 = 68155121602065LLU;
	static int64_t x234 = -1LL;
	int64_t x235 = 1409790647LL;
	int32_t x236 = INT32_MIN;
	int32_t t56 = INT32_MIN;

	t56 = ((x233==(x234%x235))^x236);

	if (t56 != INT32_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x237 = INT64_MIN;
	uint8_t x238 = 8U;
	volatile int8_t x239 = INT8_MAX;
	uint32_t x240 = 5036000U;
	static uint32_t t57 = 244679227U;

	t57 = ((x237==(x238%x239))^x240);

	if (t57 != 5036000U) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x241 = INT8_MIN;
	static uint16_t x242 = UINT16_MAX;
	int32_t x243 = INT32_MAX;
	static volatile int32_t t58 = -172;

	t58 = ((x241==(x242%x243))^x244);

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x245 = INT8_MIN;
	int8_t x247 = 1;
	int32_t t59 = -129916;

	t59 = ((x245==(x246%x247))^x248);

	if (t59 != -6) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x249 = -563706;
	uint32_t x250 = 2133U;
	volatile int32_t x251 = -1;
	int32_t x252 = -1;
	volatile int32_t t60 = 2;

	t60 = ((x249==(x250%x251))^x252);

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x253 = 54;
	volatile int64_t t61 = INT64_MIN;

	t61 = ((x253==(x254%x255))^x256);

	if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x259 = 49U;
	static volatile uint32_t t62 = 66U;

	t62 = ((x257==(x258%x259))^x260);

	if (t62 != 36U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x262 = 1;
	static int64_t x263 = 941LL;
	int32_t x264 = -1;
	int32_t t63 = 10593;

	t63 = ((x261==(x262%x263))^x264);

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x265 = UINT16_MAX;
	volatile int16_t x266 = -762;
	uint32_t x267 = UINT32_MAX;
	int32_t t64 = -10;

	t64 = ((x265==(x266%x267))^x268);

	if (t64 != -32768) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x269 = 211924LL;
	static int8_t x270 = INT8_MIN;
	int64_t x271 = INT64_MIN;
	int64_t x272 = 227744978558086386LL;
	volatile int64_t t65 = -1825360819LL;

	t65 = ((x269==(x270%x271))^x272);

	if (t65 != 227744978558086386LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x273 = 143517328421340LL;
	volatile uint8_t x274 = 16U;
	static int8_t x275 = -1;
	uint64_t x276 = 1340571878105418LLU;
	uint64_t t66 = 457540067549LLU;

	t66 = ((x273==(x274%x275))^x276);

	if (t66 != 1340571878105418LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x277 = 0;
	int8_t x278 = -2;
	uint16_t x279 = 14923U;
	int8_t x280 = INT8_MIN;
	int32_t t67 = -1;

	t67 = ((x277==(x278%x279))^x280);

	if (t67 != -128) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x285 = INT32_MIN;
	volatile uint8_t x286 = 9U;
	int8_t x287 = 8;
	volatile int16_t x288 = INT16_MIN;
	static int32_t t68 = 1034400697;

	t68 = ((x285==(x286%x287))^x288);

	if (t68 != -32768) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x289 = 12599;
	uint16_t x290 = 2161U;
	static int8_t x291 = -2;
	uint32_t x292 = 23U;

	t69 = ((x289==(x290%x291))^x292);

	if (t69 != 23U) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x293 = -1;
	static uint64_t x294 = 31925307LLU;
	int8_t x295 = -22;

	t70 = ((x293==(x294%x295))^x296);

	if (t70 != UINT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x298 = INT16_MAX;
	uint8_t x299 = 9U;
	int64_t x300 = INT64_MIN;
	int64_t t71 = INT64_MIN;

	t71 = ((x297==(x298%x299))^x300);

	if (t71 != INT64_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x301 = INT32_MIN;
	int16_t x302 = INT16_MIN;
	int32_t x304 = 330051;

	t72 = ((x301==(x302%x303))^x304);

	if (t72 != 330051) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x305 = 0;
	int64_t x307 = 4884822LL;
	uint64_t x308 = 32390654274LLU;
	uint64_t t73 = 4767010524073LLU;

	t73 = ((x305==(x306%x307))^x308);

	if (t73 != 32390654274LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x310 = 3U;
	static int8_t x311 = INT8_MAX;
	int64_t x312 = -1LL;

	t74 = ((x309==(x310%x311))^x312);

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x314 = UINT8_MAX;
	volatile uint32_t t75 = 30809594U;

	t75 = ((x313==(x314%x315))^x316);

	if (t75 != 733497399U) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int64_t x317 = -697280LL;
	uint64_t x318 = 17303513228378LLU;
	int64_t x319 = INT64_MIN;
	uint32_t x320 = 0U;

	t76 = ((x317==(x318%x319))^x320);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x321 = -1;
	static int64_t x322 = -1LL;
	static int8_t x324 = INT8_MIN;
	int32_t t77 = 48910093;

	t77 = ((x321==(x322%x323))^x324);

	if (t77 != -127) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x325 = INT64_MIN;
	int64_t x326 = -1LL;
	volatile int8_t x327 = INT8_MAX;
	int64_t x328 = INT64_MIN;
	volatile int64_t t78 = INT64_MIN;

	t78 = ((x325==(x326%x327))^x328);

	if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x329 = 23U;
	uint16_t x330 = 30U;
	int16_t x332 = INT16_MIN;
	int32_t t79 = -104;

	t79 = ((x329==(x330%x331))^x332);

	if (t79 != -32768) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x333 = 1;
	uint32_t x334 = 7091249U;
	int64_t x336 = 93516775568715LL;

	t80 = ((x333==(x334%x335))^x336);

	if (t80 != 93516775568715LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x341 = INT32_MIN;
	int8_t x342 = INT8_MAX;
	uint8_t x343 = UINT8_MAX;
	volatile int32_t t81 = -6;

	t81 = ((x341==(x342%x343))^x344);

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x349 = INT8_MIN;
	int8_t x351 = INT8_MIN;
	static uint8_t x352 = UINT8_MAX;
	volatile int32_t t82 = 1;

	t82 = ((x349==(x350%x351))^x352);

	if (t82 != 255) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x354 = 11695709U;
	int16_t x355 = INT16_MAX;
	static volatile int8_t x356 = 2;
	int32_t t83 = 1;

	t83 = ((x353==(x354%x355))^x356);

	if (t83 != 2) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x358 = -1;
	volatile uint16_t x359 = 192U;
	int64_t x360 = 1LL;
	int64_t t84 = 1239503166LL;

	t84 = ((x357==(x358%x359))^x360);

	if (t84 != 1LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x361 = -1;
	int16_t x362 = INT16_MAX;
	int8_t x363 = -1;
	int8_t x364 = -1;

	t85 = ((x361==(x362%x363))^x364);

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x365 = UINT16_MAX;
	uint16_t x366 = 13403U;
	static int8_t x367 = INT8_MIN;
	volatile int64_t t86 = -26033885LL;

	t86 = ((x365==(x366%x367))^x368);

	if (t86 != 41LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x370 = INT16_MIN;
	static volatile uint64_t x371 = UINT64_MAX;
	volatile int32_t t87 = -974338051;

	t87 = ((x369==(x370%x371))^x372);

	if (t87 != -64800) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x373 = 30257110723577247LLU;
	volatile uint16_t x374 = 203U;
	uint64_t x375 = 108144468926LLU;
	int8_t x376 = INT8_MIN;
	int32_t t88 = 0;

	t88 = ((x373==(x374%x375))^x376);

	if (t88 != -128) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x377 = 6U;
	int8_t x378 = INT8_MAX;
	int8_t x379 = -1;
	int32_t x380 = -1;
	static int32_t t89 = 123;

	t89 = ((x377==(x378%x379))^x380);

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x381 = UINT64_MAX;
	static int16_t x382 = 1;
	volatile int16_t x383 = -1;
	static int16_t x384 = INT16_MAX;
	int32_t t90 = -75698142;

	t90 = ((x381==(x382%x383))^x384);

	if (t90 != 32767) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x385 = INT8_MIN;
	int8_t x386 = -1;
	static volatile uint16_t x388 = UINT16_MAX;

	t91 = ((x385==(x386%x387))^x388);

	if (t91 != 65535) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x389 = 4U;
	uint16_t x390 = UINT16_MAX;
	volatile int64_t x391 = 57267456442932624LL;
	int8_t x392 = -12;

	t92 = ((x389==(x390%x391))^x392);

	if (t92 != -12) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x393 = 1;
	int8_t x394 = 48;
	static volatile int32_t x395 = INT32_MIN;
	uint16_t x396 = 79U;

	t93 = ((x393==(x394%x395))^x396);

	if (t93 != 79) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x397 = INT32_MIN;
	int8_t x398 = -1;
	uint8_t x400 = UINT8_MAX;
	static volatile int32_t t94 = 388086;

	t94 = ((x397==(x398%x399))^x400);

	if (t94 != 255) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x405 = 40126355982399757LLU;
	int16_t x406 = INT16_MIN;
	static uint32_t x407 = UINT32_MAX;
	int32_t t95 = -3182887;

	t95 = ((x405==(x406%x407))^x408);

	if (t95 != -128) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x409 = INT16_MAX;
	uint8_t x412 = 1U;
	volatile int32_t t96 = -149;

	t96 = ((x409==(x410%x411))^x412);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x413 = 30U;
	static int32_t x414 = INT32_MIN;
	int8_t x416 = -1;
	int32_t t97 = -464317;

	t97 = ((x413==(x414%x415))^x416);

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x418 = 7;
	volatile int64_t x419 = -1LL;
	int32_t t98 = 95802756;

	t98 = ((x417==(x418%x419))^x420);

	if (t98 != 10) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x421 = UINT32_MAX;
	int32_t x422 = INT32_MIN;
	int64_t x423 = INT64_MAX;
	int32_t x424 = INT32_MAX;
	volatile int32_t t99 = INT32_MAX;

	t99 = ((x421==(x422%x423))^x424);

	if (t99 != INT32_MAX) { NG(); } else { ; }
	
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

