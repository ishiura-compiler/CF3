#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x3 = 19U;
volatile uint8_t x4 = 8U;
int64_t x9 = -1LL;
volatile uint16_t x13 = 63U;
uint64_t x14 = 54996354LLU;
volatile uint64_t t3 = UINT64_MAX;
int64_t x17 = 0LL;
volatile uint32_t x19 = UINT32_MAX;
uint64_t x20 = 15470929975023LLU;
volatile int64_t x24 = -1LL;
volatile uint64_t t5 = UINT64_MAX;
uint8_t x26 = UINT8_MAX;
int8_t x27 = INT8_MIN;
int8_t x31 = INT8_MIN;
uint32_t x35 = UINT32_MAX;
volatile uint32_t x42 = 7187070U;
int16_t x44 = INT16_MIN;
int64_t t10 = 1761LL;
int32_t x46 = -229192;
uint32_t x50 = UINT32_MAX;
static int16_t x52 = 1376;
static int32_t x56 = 44;
uint8_t x59 = 125U;
volatile uint32_t x69 = UINT32_MAX;
static volatile int16_t x76 = -1;
static uint64_t x83 = 15242452LLU;
int32_t x92 = 4868;
static volatile int16_t x94 = -1;
uint16_t x97 = UINT16_MAX;
volatile int32_t t24 = -14435;
int16_t x109 = INT16_MIN;
int32_t x115 = INT32_MAX;
volatile int8_t x123 = 18;
volatile uint64_t t32 = 6477996693833563821LLU;
volatile uint32_t x139 = UINT32_MAX;
volatile int16_t x140 = -13361;
int64_t x144 = 73449775634893207LL;
uint64_t x149 = 1118652LLU;
static uint32_t x151 = 1564870U;
int16_t x154 = -1;
uint32_t t39 = 49202U;
int64_t x161 = 1174452393LL;
int64_t t40 = -89689LL;
static int8_t x166 = 0;
uint16_t x175 = UINT16_MAX;
int16_t x178 = -1;
static uint32_t x180 = 1788009U;
volatile int64_t t44 = -57792063897466435LL;
int8_t x184 = -1;
uint8_t x189 = 0U;
int32_t x195 = INT32_MIN;
int32_t x196 = -1;
uint32_t x198 = 2151U;
int64_t x202 = -1LL;
static int8_t x203 = INT8_MIN;
static uint32_t x208 = 159U;
int64_t t51 = 89241518860393356LL;
int64_t x212 = 79LL;
int8_t x213 = -1;
int8_t x214 = INT8_MIN;
static int8_t x217 = 1;
int32_t x219 = 72;
static int32_t x223 = -6459362;
volatile int64_t x226 = INT64_MIN;
volatile int64_t t56 = 13775978621853759LL;
int64_t x229 = -1LL;
static int64_t t57 = 1753785849495790874LL;
uint16_t x234 = 1U;
int16_t x240 = INT16_MIN;
static int64_t t60 = -3681405929930348183LL;
static volatile uint32_t t61 = 2U;
static int64_t x251 = INT64_MIN;
int64_t x252 = INT64_MIN;
uint64_t t62 = 38687LLU;
uint32_t x263 = UINT32_MAX;
int64_t x266 = INT64_MIN;
uint64_t x275 = 20649154LLU;
static int64_t x278 = INT64_MIN;
static int32_t x279 = -1;
static uint8_t x282 = 1U;
int32_t x283 = 1257;
volatile uint64_t t71 = UINT64_MAX;
volatile uint8_t x294 = UINT8_MAX;
int64_t x299 = INT64_MAX;
int64_t t74 = INT64_MAX;
static int8_t x312 = -3;
int32_t x315 = -17;
static volatile uint64_t x321 = UINT64_MAX;
volatile uint64_t t80 = UINT64_MAX;
static int8_t x328 = -1;
int32_t x330 = -1;
int32_t t82 = 21807110;
volatile uint64_t x335 = UINT64_MAX;
int32_t x337 = INT32_MIN;
uint32_t x339 = 0U;
volatile uint16_t x342 = 3613U;
int32_t x347 = -1;
static volatile int64_t t86 = -529348218642942LL;
volatile int64_t x349 = INT64_MIN;
int64_t t87 = -465LL;
uint8_t x353 = 27U;
volatile int16_t x354 = -1;
uint64_t t88 = 51585016LLU;
static volatile int32_t x361 = INT32_MAX;
static uint32_t x366 = 48077U;
uint32_t t91 = 5U;
int64_t x376 = 638548329690331LL;
uint64_t x379 = 6220925538588089LLU;
uint64_t t94 = 252079074164LLU;
uint16_t x383 = 111U;
int8_t x385 = INT8_MAX;
int16_t x386 = INT16_MAX;
int32_t t96 = -40;
static volatile int16_t x393 = INT16_MIN;
int8_t x395 = INT8_MIN;
uint32_t x396 = UINT32_MAX;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	int64_t x2 = INT64_MIN;
	uint64_t t0 = 172312156622582LLU;

	t0 = (((x1&x2)|x3)|x4);

	if (t0 != 9223372036854775835LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	uint16_t x6 = 722U;
	static int64_t x7 = -1LL;
	volatile int64_t x8 = INT64_MIN;
	volatile int64_t t1 = -996399322320781082LL;

	t1 = (((x5&x6)|x7)|x8);

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x10 = -255210033993LL;
	volatile uint64_t x11 = 22715150LLU;
	static uint64_t x12 = 379049744230834053LLU;
	volatile uint64_t t2 = 783LLU;

	t2 = (((x9&x10)|x11)|x12);

	if (t2 != 18446744073665511359LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x15 = INT64_MAX;
	int8_t x16 = -1;

	t3 = (((x13&x14)|x15)|x16);

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x18 = UINT16_MAX;
	volatile uint64_t t4 = 12333673118303986LLU;

	t4 = (((x17&x18)|x19)|x20);

	if (t4 != 15474767167487LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int64_t x21 = -1267LL;
	uint64_t x22 = 12026432301941LLU;
	static uint16_t x23 = 10U;

	t5 = (((x21&x22)|x23)|x24);

	if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MAX;
	int64_t x28 = INT64_MIN;
	int64_t t6 = 0LL;

	t6 = (((x25&x26)|x27)|x28);

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -984031935;
	uint64_t x30 = UINT64_MAX;
	int64_t x32 = 305055053LL;
	volatile uint64_t t7 = 185089306314655931LLU;

	t7 = (((x29&x30)|x31)|x32);

	if (t7 != 18446744073709551565LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 106U;
	static volatile uint8_t x34 = UINT8_MAX;
	static uint32_t x36 = 77U;
	uint32_t t8 = UINT32_MAX;

	t8 = (((x33&x34)|x35)|x36);

	if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = -112406571;
	int16_t x38 = -1;
	int8_t x39 = INT8_MIN;
	int32_t x40 = -48495642;
	volatile int32_t t9 = -328152;

	t9 = (((x37&x38)|x39)|x40);

	if (t9 != -9) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = 3332786193638096LL;
	int32_t x43 = 102604;

	t10 = (((x41&x42)|x43)|x44);

	if (t10 != -19748LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -1;
	uint16_t x47 = UINT16_MAX;
	static uint8_t x48 = 6U;
	int32_t t11 = 1;

	t11 = (((x45&x46)|x47)|x48);

	if (t11 != -196609) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = -201;
	volatile uint8_t x51 = 3U;
	uint32_t t12 = 15223156U;

	t12 = (((x49&x50)|x51)|x52);

	if (t12 != 4294967159U) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 753969340174672776LLU;
	int32_t x54 = -441834;
	uint16_t x55 = UINT16_MAX;
	volatile uint64_t t13 = 4372360493324775665LLU;

	t13 = (((x53&x54)|x55)|x56);

	if (t13 != 753969340174434303LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = 3746832;
	int16_t x58 = 6707;
	int8_t x60 = INT8_MIN;
	volatile int32_t t14 = 8;

	t14 = (((x57&x58)|x59)|x60);

	if (t14 != -3) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = -1;
	static int64_t x62 = -1LL;
	int32_t x63 = 1460615;
	int8_t x64 = INT8_MIN;
	static int64_t t15 = -1527LL;

	t15 = (((x61&x62)|x63)|x64);

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x65 = -1;
	uint64_t x66 = UINT64_MAX;
	static volatile uint8_t x67 = UINT8_MAX;
	static int8_t x68 = INT8_MIN;
	uint64_t t16 = UINT64_MAX;

	t16 = (((x65&x66)|x67)|x68);

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x70 = 21;
	uint16_t x71 = 813U;
	int32_t x72 = -169278969;
	volatile uint32_t t17 = 449139321U;

	t17 = (((x69&x70)|x71)|x72);

	if (t17 != 4125688639U) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = -1;
	int32_t x74 = INT32_MIN;
	uint32_t x75 = 63544U;
	uint32_t t18 = UINT32_MAX;

	t18 = (((x73&x74)|x75)|x76);

	if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = 280411075LL;
	int64_t x78 = INT64_MIN;
	int64_t x79 = INT64_MIN;
	int32_t x80 = -1;
	static int64_t t19 = 132583176013LL;

	t19 = (((x77&x78)|x79)|x80);

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = -1;
	int8_t x82 = -1;
	uint64_t x84 = 3203948039674LLU;
	volatile uint64_t t20 = UINT64_MAX;

	t20 = (((x81&x82)|x83)|x84);

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = 136961023LLU;
	int8_t x86 = -1;
	uint16_t x87 = 29U;
	volatile uint8_t x88 = 4U;
	uint64_t t21 = 277595782857LLU;

	t21 = (((x85&x86)|x87)|x88);

	if (t21 != 136961023LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = 2U;
	int64_t x90 = -55051550159791464LL;
	static int8_t x91 = -1;
	volatile int64_t t22 = -851339LL;

	t22 = (((x89&x90)|x91)|x92);

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x93 = INT16_MIN;
	int64_t x95 = 504700299129993235LL;
	static int8_t x96 = INT8_MIN;
	int64_t t23 = -1LL;

	t23 = (((x93&x94)|x95)|x96);

	if (t23 != -109LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x98 = INT16_MAX;
	int16_t x99 = INT16_MIN;
	static int16_t x100 = INT16_MIN;

	t24 = (((x97&x98)|x99)|x100);

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = 534997559LLU;
	static volatile int32_t x102 = INT32_MIN;
	int64_t x103 = -56304LL;
	uint8_t x104 = 1U;
	volatile uint64_t t25 = 2535129206LLU;

	t25 = (((x101&x102)|x103)|x104);

	if (t25 != 18446744073709495313LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x105 = 6308319U;
	volatile uint64_t x106 = UINT64_MAX;
	uint16_t x107 = 2U;
	volatile uint16_t x108 = 8765U;
	uint64_t t26 = 915371715764984LLU;

	t26 = (((x105&x106)|x107)|x108);

	if (t26 != 6317055LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x110 = -1;
	int32_t x111 = 165;
	int16_t x112 = -1;
	int32_t t27 = 4760;

	t27 = (((x109&x110)|x111)|x112);

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x113 = INT16_MAX;
	static uint16_t x114 = 122U;
	int8_t x116 = 0;
	volatile int32_t t28 = INT32_MAX;

	t28 = (((x113&x114)|x115)|x116);

	if (t28 != INT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x117 = 15U;
	int64_t x118 = -1LL;
	int16_t x119 = 25;
	volatile int16_t x120 = INT16_MAX;
	static volatile int64_t t29 = 902818318220708LL;

	t29 = (((x117&x118)|x119)|x120);

	if (t29 != 32767LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x121 = INT64_MIN;
	static int8_t x122 = INT8_MIN;
	int32_t x124 = INT32_MIN;
	int64_t t30 = -1507544853266LL;

	t30 = (((x121&x122)|x123)|x124);

	if (t30 != -2147483630LL) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int32_t x125 = 655318;
	int32_t x126 = INT32_MAX;
	static volatile uint64_t x127 = 3LLU;
	volatile uint16_t x128 = 150U;
	static volatile uint64_t t31 = 33LLU;

	t31 = (((x125&x126)|x127)|x128);

	if (t31 != 655319LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MIN;
	uint8_t x130 = UINT8_MAX;
	int8_t x131 = INT8_MIN;
	uint64_t x132 = 5458361803018238LLU;

	t32 = (((x129&x130)|x131)|x132);

	if (t32 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x133 = INT8_MIN;
	int32_t x134 = INT32_MAX;
	int64_t x135 = -110LL;
	static volatile int8_t x136 = INT8_MIN;
	int64_t t33 = 3098988893930723917LL;

	t33 = (((x133&x134)|x135)|x136);

	if (t33 != -110LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = 14367857203527214LL;
	static uint64_t x138 = UINT64_MAX;
	uint64_t t34 = UINT64_MAX;

	t34 = (((x137&x138)|x139)|x140);

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MIN;
	int8_t x142 = INT8_MIN;
	int8_t x143 = -8;
	int64_t t35 = -26016471008498LL;

	t35 = (((x141&x142)|x143)|x144);

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x145 = 13517638;
	static int8_t x146 = 3;
	int64_t x147 = INT64_MIN;
	uint64_t x148 = 98LLU;
	volatile uint64_t t36 = 102LLU;

	t36 = (((x145&x146)|x147)|x148);

	if (t36 != 9223372036854775906LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x150 = -1LL;
	uint32_t x152 = 24508U;
	volatile uint64_t t37 = 7LLU;

	t37 = (((x149&x150)|x151)|x152);

	if (t37 != 1572862LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x153 = INT64_MIN;
	static int16_t x155 = INT16_MIN;
	static volatile int32_t x156 = INT32_MAX;
	int64_t t38 = 116385438655379158LL;

	t38 = (((x153&x154)|x155)|x156);

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = -1;
	int16_t x158 = INT16_MAX;
	uint32_t x159 = 2714U;
	uint16_t x160 = 2040U;

	t39 = (((x157&x158)|x159)|x160);

	if (t39 != 32767U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x162 = 1372;
	static int8_t x163 = -1;
	volatile int16_t x164 = INT16_MIN;

	t40 = (((x161&x162)|x163)|x164);

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = -1;
	int8_t x167 = INT8_MAX;
	int16_t x168 = INT16_MIN;
	volatile int32_t t41 = -15;

	t41 = (((x165&x166)|x167)|x168);

	if (t41 != -32641) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = -13;
	uint16_t x170 = 2U;
	uint32_t x171 = UINT32_MAX;
	static int8_t x172 = INT8_MIN;
	volatile uint32_t t42 = UINT32_MAX;

	t42 = (((x169&x170)|x171)|x172);

	if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = 113076U;
	uint32_t x174 = 41799U;
	int32_t x176 = -2466264;
	static uint32_t t43 = 116956U;

	t43 = (((x173&x174)|x175)|x176);

	if (t43 != 4292542463U) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int8_t x177 = -18;
	int64_t x179 = -977167671LL;

	t44 = (((x177&x178)|x179)|x180);

	if (t44 != -17LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x181 = 88326U;
	int16_t x182 = INT16_MAX;
	volatile int32_t x183 = 233874638;
	static uint32_t t45 = UINT32_MAX;

	t45 = (((x181&x182)|x183)|x184);

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = -1;
	int64_t x186 = 5865359864642452LL;
	int32_t x187 = 1;
	uint8_t x188 = UINT8_MAX;
	int64_t t46 = 519769399067LL;

	t46 = (((x185&x186)|x187)|x188);

	if (t46 != 5865359864642559LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x190 = UINT32_MAX;
	int16_t x191 = 24;
	uint64_t x192 = UINT64_MAX;
	static uint64_t t47 = UINT64_MAX;

	t47 = (((x189&x190)|x191)|x192);

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x193 = -1LL;
	int16_t x194 = INT16_MAX;
	static volatile int64_t t48 = -2309937LL;

	t48 = (((x193&x194)|x195)|x196);

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = INT32_MIN;
	volatile int8_t x199 = INT8_MIN;
	int64_t x200 = INT64_MAX;
	int64_t t49 = INT64_MAX;

	t49 = (((x197&x198)|x199)|x200);

	if (t49 != INT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = 958;
	int32_t x204 = -650821778;
	volatile int64_t t50 = 209387711041315982LL;

	t50 = (((x201&x202)|x203)|x204);

	if (t50 != -2LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = 2721568220LL;
	uint16_t x206 = UINT16_MAX;
	uint32_t x207 = 3U;

	t51 = (((x205&x206)|x207)|x208);

	if (t51 != 54751LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = 215576;
	uint32_t x210 = UINT32_MAX;
	int8_t x211 = 63;
	static int64_t t52 = -201267243071032LL;

	t52 = (((x209&x210)|x211)|x212);

	if (t52 != 215679LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x215 = UINT16_MAX;
	int32_t x216 = INT32_MIN;
	volatile int32_t t53 = -1;

	t53 = (((x213&x214)|x215)|x216);

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x218 = INT32_MIN;
	uint8_t x220 = 2U;
	int32_t t54 = 79283;

	t54 = (((x217&x218)|x219)|x220);

	if (t54 != 74) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = INT8_MIN;
	uint64_t x222 = 3475LLU;
	int64_t x224 = -20LL;
	volatile uint64_t t55 = 62820053LLU;

	t55 = (((x221&x222)|x223)|x224);

	if (t55 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x225 = UINT16_MAX;
	volatile int64_t x227 = 3280757310408821989LL;
	int8_t x228 = -40;

	t56 = (((x225&x226)|x227)|x228);

	if (t56 != -3LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x230 = 16443161LL;
	int64_t x231 = INT64_MIN;
	int64_t x232 = -1LL;

	t57 = (((x229&x230)|x231)|x232);

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MAX;
	static int8_t x235 = 0;
	static int64_t x236 = -339812711LL;
	volatile int64_t t58 = 6357630501LL;

	t58 = (((x233&x234)|x235)|x236);

	if (t58 != -339812711LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x237 = -1;
	volatile int32_t x238 = 4;
	int32_t x239 = -1;
	volatile int32_t t59 = 24173001;

	t59 = (((x237&x238)|x239)|x240);

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x241 = INT64_MIN;
	static uint16_t x242 = UINT16_MAX;
	int16_t x243 = -32;
	int64_t x244 = INT64_MAX;

	t60 = (((x241&x242)|x243)|x244);

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = 0U;
	static uint8_t x246 = 3U;
	static volatile int16_t x247 = INT16_MIN;
	uint32_t x248 = 54187U;

	t61 = (((x245&x246)|x247)|x248);

	if (t61 != 4294955947U) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x249 = 285LLU;
	uint32_t x250 = 6U;

	t62 = (((x249&x250)|x251)|x252);

	if (t62 != 9223372036854775812LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint8_t x253 = 15U;
	uint64_t x254 = UINT64_MAX;
	uint16_t x255 = 788U;
	static int8_t x256 = -1;
	uint64_t t63 = UINT64_MAX;

	t63 = (((x253&x254)|x255)|x256);

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x257 = 12792U;
	volatile int16_t x258 = 27;
	static int64_t x259 = INT64_MIN;
	int16_t x260 = INT16_MAX;
	int64_t t64 = -124849LL;

	t64 = (((x257&x258)|x259)|x260);

	if (t64 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = INT8_MIN;
	int64_t x262 = -24399464012964200LL;
	volatile uint8_t x264 = 0U;
	int64_t t65 = -12403554158LL;

	t65 = (((x261&x262)|x263)|x264);

	if (t65 != -24399460100472833LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x265 = 1U;
	int16_t x267 = INT16_MAX;
	static uint64_t x268 = 1448204970872LLU;
	static uint64_t t66 = 17906412867538424LLU;

	t66 = (((x265&x266)|x267)|x268);

	if (t66 != 1448204992511LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x269 = INT8_MIN;
	int32_t x270 = INT32_MAX;
	int32_t x271 = INT32_MAX;
	int32_t x272 = 3445;
	int32_t t67 = INT32_MAX;

	t67 = (((x269&x270)|x271)|x272);

	if (t67 != INT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x273 = UINT64_MAX;
	static uint64_t x274 = UINT64_MAX;
	int64_t x276 = INT64_MAX;
	volatile uint64_t t68 = UINT64_MAX;

	t68 = (((x273&x274)|x275)|x276);

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x277 = 162746766049039LLU;
	static uint16_t x280 = 201U;
	uint64_t t69 = UINT64_MAX;

	t69 = (((x277&x278)|x279)|x280);

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = 841;
	uint64_t x284 = 6890148807490412LLU;
	uint64_t t70 = 41167352LLU;

	t70 = (((x281&x282)|x283)|x284);

	if (t70 != 6890148807491565LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = -1LL;
	volatile int16_t x286 = -113;
	static uint64_t x287 = 15329087659420237LLU;
	static uint16_t x288 = UINT16_MAX;

	t71 = (((x285&x286)|x287)|x288);

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MIN;
	int16_t x290 = -1;
	int32_t x291 = -1;
	static uint64_t x292 = 118745097LLU;
	uint64_t t72 = UINT64_MAX;

	t72 = (((x289&x290)|x291)|x292);

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = UINT64_MAX;
	static int64_t x295 = -33821857LL;
	static uint32_t x296 = 33788494U;
	volatile uint64_t t73 = 2087780803593109LLU;

	t73 = (((x293&x294)|x295)|x296);

	if (t73 != 18446744073709288447LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x297 = INT8_MIN;
	uint32_t x298 = 460U;
	int16_t x300 = INT16_MAX;

	t74 = (((x297&x298)|x299)|x300);

	if (t74 != INT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x301 = UINT64_MAX;
	int8_t x302 = INT8_MAX;
	int64_t x303 = INT64_MAX;
	int32_t x304 = -1;
	uint64_t t75 = UINT64_MAX;

	t75 = (((x301&x302)|x303)|x304);

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint64_t x305 = 98438LLU;
	int64_t x306 = INT64_MIN;
	uint64_t x307 = 105043704LLU;
	int16_t x308 = 2;
	volatile uint64_t t76 = 5036048823LLU;

	t76 = (((x305&x306)|x307)|x308);

	if (t76 != 105043706LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MIN;
	int8_t x310 = INT8_MIN;
	uint16_t x311 = 134U;
	int32_t t77 = -6;

	t77 = (((x309&x310)|x311)|x312);

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MIN;
	static volatile int8_t x314 = INT8_MAX;
	int8_t x316 = -10;
	static int64_t t78 = 2226730849131898LL;

	t78 = (((x313&x314)|x315)|x316);

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x317 = 5158U;
	volatile int32_t x318 = INT32_MIN;
	uint16_t x319 = 0U;
	int32_t x320 = INT32_MAX;
	volatile uint32_t t79 = 161117U;

	t79 = (((x317&x318)|x319)|x320);

	if (t79 != 2147483647U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x322 = -1LL;
	static volatile uint32_t x323 = 53U;
	int16_t x324 = -1;

	t80 = (((x321&x322)|x323)|x324);

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x325 = INT8_MIN;
	int32_t x326 = -28121040;
	static uint32_t x327 = 242958U;
	volatile uint32_t t81 = UINT32_MAX;

	t81 = (((x325&x326)|x327)|x328);

	if (t81 != UINT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = -26;
	int8_t x331 = INT8_MAX;
	volatile int8_t x332 = -1;

	t82 = (((x329&x330)|x331)|x332);

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x333 = 437799407U;
	uint64_t x334 = 2507637910LLU;
	int32_t x336 = INT32_MIN;
	volatile uint64_t t83 = UINT64_MAX;

	t83 = (((x333&x334)|x335)|x336);

	if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x338 = UINT64_MAX;
	uint8_t x340 = 6U;
	volatile uint64_t t84 = 2533719381968LLU;

	t84 = (((x337&x338)|x339)|x340);

	if (t84 != 18446744071562067974LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x341 = 11293565LLU;
	int8_t x343 = -13;
	volatile int8_t x344 = -1;
	volatile uint64_t t85 = UINT64_MAX;

	t85 = (((x341&x342)|x343)|x344);

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x345 = UINT32_MAX;
	static uint32_t x346 = UINT32_MAX;
	int64_t x348 = INT64_MIN;

	t86 = (((x345&x346)|x347)|x348);

	if (t86 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x350 = INT8_MIN;
	int32_t x351 = 256575398;
	int64_t x352 = 6816289LL;

	t87 = (((x349&x350)|x351)|x352);

	if (t87 != -9223372036596103257LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x355 = INT8_MAX;
	static volatile uint64_t x356 = 1597LLU;

	t88 = (((x353&x354)|x355)|x356);

	if (t88 != 1663LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x357 = 15U;
	int64_t x358 = INT64_MAX;
	int16_t x359 = INT16_MIN;
	int16_t x360 = -1;
	int64_t t89 = 9574459972LL;

	t89 = (((x357&x358)|x359)|x360);

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x362 = UINT64_MAX;
	int64_t x363 = INT64_MIN;
	volatile int16_t x364 = 429;
	uint64_t t90 = 1282104LLU;

	t90 = (((x361&x362)|x363)|x364);

	if (t90 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = 0;
	int16_t x367 = INT16_MIN;
	int16_t x368 = INT16_MIN;

	t91 = (((x365&x366)|x367)|x368);

	if (t91 != 4294934528U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MAX;
	volatile uint8_t x370 = UINT8_MAX;
	uint32_t x371 = 383073U;
	static volatile int64_t x372 = INT64_MIN;
	int64_t t92 = 467144777285LL;

	t92 = (((x369&x370)|x371)|x372);

	if (t92 != -9223372036854392705LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = -2;
	uint64_t x374 = 523LLU;
	volatile uint16_t x375 = UINT16_MAX;
	uint64_t t93 = 17159421200971395LLU;

	t93 = (((x373&x374)|x375)|x376);

	if (t93 != 638548329693183LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = INT64_MIN;
	uint16_t x378 = UINT16_MAX;
	uint16_t x380 = UINT16_MAX;

	t94 = (((x377&x378)|x379)|x380);

	if (t94 != 6220925538598911LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x381 = UINT32_MAX;
	uint8_t x382 = 7U;
	static uint8_t x384 = 0U;
	volatile uint32_t t95 = 107849576U;

	t95 = (((x381&x382)|x383)|x384);

	if (t95 != 111U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x387 = -56;
	int16_t x388 = -1;

	t96 = (((x385&x386)|x387)|x388);

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x389 = 15604LL;
	int16_t x390 = INT16_MIN;
	uint32_t x391 = UINT32_MAX;
	uint64_t x392 = 4101518954LLU;
	uint64_t t97 = 3271301291982566LLU;

	t97 = (((x389&x390)|x391)|x392);

	if (t97 != 4294967295LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint16_t x394 = 40U;
	volatile uint32_t t98 = UINT32_MAX;

	t98 = (((x393&x394)|x395)|x396);

	if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = 110;
	int64_t x398 = INT64_MAX;
	int32_t x399 = -1;
	volatile int8_t x400 = -18;
	volatile int64_t t99 = -111538LL;

	t99 = (((x397&x398)|x399)|x400);

	if (t99 != -1LL) { NG(); } else { ; }
	
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

