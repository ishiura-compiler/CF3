#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x7 = INT8_MIN;
int64_t x10 = -1LL;
int16_t x11 = -1;
int8_t x14 = INT8_MAX;
int16_t x23 = 0;
uint8_t x26 = 1U;
int32_t x27 = 18448;
uint64_t t7 = 8279224LLU;
int16_t x33 = 10378;
int32_t x36 = -31980;
volatile int32_t t8 = -525523627;
volatile int32_t t9 = 783572672;
int64_t x46 = 3204LL;
volatile int32_t t12 = 3;
int8_t x53 = 10;
static uint64_t x54 = UINT64_MAX;
volatile int64_t t13 = 121175LL;
int32_t t14 = 413036;
static int16_t x61 = INT16_MIN;
static uint16_t x62 = 4071U;
volatile int64_t x63 = INT64_MAX;
int64_t x67 = -1LL;
int64_t x68 = INT64_MAX;
int64_t x72 = INT64_MIN;
int16_t x77 = INT16_MIN;
volatile int64_t x80 = INT64_MAX;
int8_t x82 = INT8_MIN;
uint32_t x83 = 122U;
static int32_t x86 = INT32_MIN;
uint32_t x102 = 26U;
int64_t x109 = INT64_MAX;
volatile int32_t x110 = -1;
int16_t x114 = INT16_MAX;
static int16_t x118 = 7158;
static int64_t x119 = 49556234037039976LL;
uint64_t x120 = UINT64_MAX;
volatile uint64_t t28 = 112954270937192646LLU;
uint64_t x123 = 1985509189145LLU;
volatile int16_t x124 = -1;
uint32_t x126 = 318U;
uint16_t x127 = UINT16_MAX;
uint16_t x129 = 26U;
int64_t x132 = -1LL;
volatile int8_t x139 = 22;
int32_t x143 = INT32_MIN;
int8_t x152 = INT8_MAX;
int32_t x155 = INT32_MAX;
int64_t x156 = -1LL;
static int64_t t37 = -237338LL;
volatile uint8_t x158 = 37U;
uint64_t t38 = 10593382LLU;
static uint8_t x161 = UINT8_MAX;
int8_t x167 = INT8_MIN;
volatile int64_t x176 = INT64_MIN;
volatile uint32_t x179 = UINT32_MAX;
volatile int32_t x183 = 50739;
uint32_t x186 = 5986359U;
int32_t x194 = INT32_MIN;
int16_t x195 = INT16_MIN;
static volatile int64_t x197 = INT64_MIN;
uint8_t x203 = 29U;
volatile int64_t t49 = -1LL;
int64_t t51 = 1672199818935LL;
int16_t x218 = INT16_MIN;
uint32_t x219 = 6552565U;
int16_t x222 = INT16_MIN;
uint8_t x234 = 4U;
uint16_t x236 = UINT16_MAX;
uint64_t x237 = 330864916091845LLU;
static int32_t x241 = -674526;
int32_t x242 = 2827027;
int16_t x243 = INT16_MIN;
uint8_t x244 = UINT8_MAX;
static volatile int64_t x247 = 0LL;
int16_t x249 = INT16_MIN;
volatile int16_t x250 = 949;
int64_t x252 = -1LL;
int16_t x255 = INT16_MIN;
volatile int16_t x262 = -63;
volatile int16_t x266 = INT16_MAX;
int64_t x270 = 14109LL;
int32_t x275 = INT32_MIN;
uint32_t x285 = UINT32_MAX;
int8_t x286 = -3;
int64_t x295 = INT64_MIN;
volatile int64_t t69 = 21153LL;
int64_t x300 = INT64_MIN;
int32_t x307 = -1;
int8_t x308 = INT8_MIN;
static int64_t x311 = INT64_MAX;
static volatile int64_t t73 = -16565844499LL;
int64_t x314 = INT64_MIN;
uint64_t t74 = 790LLU;
int8_t x317 = -1;
uint8_t x318 = 10U;
int32_t x328 = INT32_MAX;
static volatile uint32_t x329 = UINT32_MAX;
uint64_t x336 = UINT64_MAX;
int64_t t81 = 97563693706249737LL;
volatile uint8_t x351 = UINT8_MAX;
int32_t t87 = -386863040;
static int32_t x371 = INT32_MIN;
int8_t x376 = INT8_MIN;
volatile int16_t x386 = INT16_MIN;
int64_t x388 = -1LL;
volatile int64_t t94 = -3311547709426190LL;
uint8_t x397 = UINT8_MAX;
uint8_t x398 = 10U;
int8_t x400 = 1;
static int32_t x403 = INT32_MAX;
static uint64_t x408 = 243282LLU;
uint64_t t97 = 767188267742712LLU;
static int16_t x409 = INT16_MIN;
int8_t x413 = INT8_MIN;
int16_t x415 = INT16_MIN;
volatile uint64_t t99 = 65464228917143604LLU;


void f0(void) {
	int8_t x1 = -1;
	uint8_t x2 = 1U;
	int8_t x3 = INT8_MIN;
	volatile int64_t x4 = INT64_MIN;
	volatile int64_t t0 = 92053837783060026LL;

	t0 = (((x1<=x2)*x3)%x4);

	if (t0 != -128LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 26U;
	volatile int8_t x6 = INT8_MIN;
	volatile int64_t x8 = -8375377439127110LL;
	int64_t t1 = 3178398LL;

	t1 = (((x5<=x6)*x7)%x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x9 = 1;
	int64_t x12 = -1LL;
	volatile int64_t t2 = 14562137374225373LL;

	t2 = (((x9<=x10)*x11)%x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int16_t x13 = -1;
	int64_t x15 = INT64_MIN;
	uint8_t x16 = UINT8_MAX;
	volatile int64_t t3 = 87714653LL;

	t3 = (((x13<=x14)*x15)%x16);

	if (t3 != -128LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 10129U;
	int32_t x18 = 24;
	uint32_t x19 = UINT32_MAX;
	static uint8_t x20 = 1U;
	volatile uint32_t t4 = 11589U;

	t4 = (((x17<=x18)*x19)%x20);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = -1;
	int32_t x22 = INT32_MIN;
	static uint8_t x24 = UINT8_MAX;
	int32_t t5 = -917990;

	t5 = (((x21<=x22)*x23)%x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x25 = 1U;
	int8_t x28 = -1;
	volatile int32_t t6 = 0;

	t6 = (((x25<=x26)*x27)%x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = UINT64_MAX;
	int64_t x30 = INT64_MIN;
	static uint64_t x31 = 11LLU;
	uint16_t x32 = 199U;

	t7 = (((x29<=x30)*x31)%x32);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x34 = 64U;
	volatile int8_t x35 = -1;

	t8 = (((x33<=x34)*x35)%x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = -1;
	int32_t x38 = INT32_MAX;
	uint16_t x39 = 228U;
	volatile uint8_t x40 = 36U;

	t9 = (((x37<=x38)*x39)%x40);

	if (t9 != 12) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -1;
	int8_t x42 = INT8_MIN;
	int8_t x43 = 1;
	uint64_t x44 = 79457113306969LLU;
	volatile uint64_t t10 = 5427LLU;

	t10 = (((x41<=x42)*x43)%x44);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -897;
	int64_t x47 = 528571420LL;
	volatile uint16_t x48 = 27757U;
	static volatile int64_t t11 = -24LL;

	t11 = (((x45<=x46)*x47)%x48);

	if (t11 != 22626LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x49 = 1U;
	int8_t x50 = -32;
	volatile int8_t x51 = 39;
	uint16_t x52 = 9U;

	t12 = (((x49<=x50)*x51)%x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x55 = -1LL;
	static uint16_t x56 = 44U;

	t13 = (((x53<=x54)*x55)%x56);

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x57 = 1U;
	static volatile uint64_t x58 = 9405570098326LLU;
	volatile int16_t x59 = 7;
	static int16_t x60 = 25;

	t14 = (((x57<=x58)*x59)%x60);

	if (t14 != 7) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x64 = -1;
	static int64_t t15 = -3203322471266LL;

	t15 = (((x61<=x62)*x63)%x64);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = -1;
	int16_t x66 = 1;
	int64_t t16 = 86080168010466413LL;

	t16 = (((x65<=x66)*x67)%x68);

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x69 = -1;
	static int8_t x70 = -25;
	int64_t x71 = INT64_MAX;
	volatile int64_t t17 = 39675727LL;

	t17 = (((x69<=x70)*x71)%x72);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x78 = INT32_MAX;
	int64_t x79 = -24873910140LL;
	volatile int64_t t18 = 8074646198702LL;

	t18 = (((x77<=x78)*x79)%x80);

	if (t18 != -24873910140LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x81 = 1440LLU;
	volatile uint64_t x84 = 617413LLU;
	volatile uint64_t t19 = 3937853724672357LLU;

	t19 = (((x81<=x82)*x83)%x84);

	if (t19 != 122LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x85 = -1;
	static volatile int8_t x87 = INT8_MIN;
	volatile int16_t x88 = -1;
	static volatile int32_t t20 = 38000443;

	t20 = (((x85<=x86)*x87)%x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x89 = 111430;
	int16_t x90 = INT16_MIN;
	uint64_t x91 = UINT64_MAX;
	static int16_t x92 = INT16_MAX;
	uint64_t t21 = 99870LLU;

	t21 = (((x89<=x90)*x91)%x92);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = INT16_MIN;
	static int8_t x94 = -1;
	volatile int64_t x95 = INT64_MAX;
	volatile int8_t x96 = -1;
	volatile int64_t t22 = -145LL;

	t22 = (((x93<=x94)*x95)%x96);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x97 = -1;
	uint32_t x98 = 461029217U;
	int64_t x99 = 6321763458LL;
	static int64_t x100 = INT64_MIN;
	volatile int64_t t23 = -1694455932165LL;

	t23 = (((x97<=x98)*x99)%x100);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x101 = -12515;
	volatile int64_t x103 = INT64_MIN;
	uint8_t x104 = UINT8_MAX;
	static int64_t t24 = -427749644823840LL;

	t24 = (((x101<=x102)*x103)%x104);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x105 = 2;
	uint16_t x106 = UINT16_MAX;
	int32_t x107 = -1;
	uint8_t x108 = 101U;
	int32_t t25 = -2018;

	t25 = (((x105<=x106)*x107)%x108);

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x111 = INT16_MIN;
	static int64_t x112 = -1LL;
	int64_t t26 = 2579LL;

	t26 = (((x109<=x110)*x111)%x112);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = 853043LL;
	int16_t x115 = INT16_MAX;
	volatile int8_t x116 = -1;
	volatile int32_t t27 = -35;

	t27 = (((x113<=x114)*x115)%x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x117 = -1LL;

	t28 = (((x117<=x118)*x119)%x120);

	if (t28 != 49556234037039976LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x121 = UINT32_MAX;
	uint16_t x122 = UINT16_MAX;
	volatile uint64_t t29 = 10989675LLU;

	t29 = (((x121<=x122)*x123)%x124);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x125 = UINT32_MAX;
	volatile int64_t x128 = INT64_MAX;
	int64_t t30 = -3101951616207302480LL;

	t30 = (((x125<=x126)*x127)%x128);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x130 = 27;
	int8_t x131 = INT8_MIN;
	static int64_t t31 = -10035653657LL;

	t31 = (((x129<=x130)*x131)%x132);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x133 = 888;
	static uint64_t x134 = 4007655LLU;
	uint64_t x135 = 961794618868611LLU;
	int8_t x136 = INT8_MAX;
	volatile uint64_t t32 = 2651286774072LLU;

	t32 = (((x133<=x134)*x135)%x136);

	if (t32 != 50LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x137 = UINT32_MAX;
	uint8_t x138 = 8U;
	uint64_t x140 = UINT64_MAX;
	volatile uint64_t t33 = 6246596984500197LLU;

	t33 = (((x137<=x138)*x139)%x140);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x141 = UINT8_MAX;
	static int8_t x142 = 1;
	uint16_t x144 = 4945U;
	volatile int32_t t34 = 53622;

	t34 = (((x141<=x142)*x143)%x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x145 = UINT32_MAX;
	volatile uint16_t x146 = 788U;
	uint32_t x147 = 35497U;
	int8_t x148 = INT8_MIN;
	static uint32_t t35 = 46U;

	t35 = (((x145<=x146)*x147)%x148);

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x149 = INT32_MIN;
	uint32_t x150 = 500890U;
	int16_t x151 = -14272;
	static volatile int32_t t36 = -910;

	t36 = (((x149<=x150)*x151)%x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x153 = INT16_MAX;
	int32_t x154 = INT32_MAX;

	t37 = (((x153<=x154)*x155)%x156);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x157 = -1;
	uint64_t x159 = UINT64_MAX;
	uint16_t x160 = 5U;

	t38 = (((x157<=x158)*x159)%x160);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x162 = UINT64_MAX;
	uint32_t x163 = 576U;
	int32_t x164 = INT32_MIN;
	volatile uint32_t t39 = 585U;

	t39 = (((x161<=x162)*x163)%x164);

	if (t39 != 576U) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x165 = 20910U;
	static int32_t x166 = INT32_MIN;
	int64_t x168 = -172583203195219LL;
	static int64_t t40 = 112LL;

	t40 = (((x165<=x166)*x167)%x168);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x169 = -1LL;
	int64_t x170 = 14427117997LL;
	int64_t x171 = INT64_MIN;
	static int8_t x172 = INT8_MIN;
	int64_t t41 = -1043508LL;

	t41 = (((x169<=x170)*x171)%x172);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x173 = INT32_MIN;
	int8_t x174 = INT8_MAX;
	static volatile int8_t x175 = 1;
	static int64_t t42 = -398892LL;

	t42 = (((x173<=x174)*x175)%x176);

	if (t42 != 1LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x177 = -1;
	volatile int16_t x178 = 179;
	static uint16_t x180 = UINT16_MAX;
	uint32_t t43 = 97281715U;

	t43 = (((x177<=x178)*x179)%x180);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x181 = -1LL;
	static uint32_t x182 = 56U;
	int16_t x184 = INT16_MIN;
	volatile int32_t t44 = -267125679;

	t44 = (((x181<=x182)*x183)%x184);

	if (t44 != 17971) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x185 = INT8_MAX;
	uint8_t x187 = 28U;
	int16_t x188 = INT16_MIN;
	volatile int32_t t45 = -336;

	t45 = (((x185<=x186)*x187)%x188);

	if (t45 != 28) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x189 = -7334;
	int16_t x190 = INT16_MIN;
	int8_t x191 = INT8_MIN;
	static int8_t x192 = -1;
	volatile int32_t t46 = -1295;

	t46 = (((x189<=x190)*x191)%x192);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x193 = INT64_MAX;
	static volatile uint8_t x196 = UINT8_MAX;
	volatile int32_t t47 = 13962;

	t47 = (((x193<=x194)*x195)%x196);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x198 = 483U;
	uint8_t x199 = 1U;
	uint64_t x200 = 30965628913888951LLU;
	volatile uint64_t t48 = 3603LLU;

	t48 = (((x197<=x198)*x199)%x200);

	if (t48 != 1LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x201 = 1;
	uint32_t x202 = UINT32_MAX;
	int64_t x204 = INT64_MIN;

	t49 = (((x201<=x202)*x203)%x204);

	if (t49 != 29LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x205 = -1LL;
	int16_t x206 = INT16_MIN;
	static volatile uint32_t x207 = 408198U;
	int32_t x208 = INT32_MAX;
	volatile uint32_t t50 = 3U;

	t50 = (((x205<=x206)*x207)%x208);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int64_t x209 = INT64_MIN;
	static uint8_t x210 = 98U;
	volatile int8_t x211 = 0;
	volatile int64_t x212 = -1LL;

	t51 = (((x209<=x210)*x211)%x212);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x213 = UINT32_MAX;
	uint8_t x214 = 0U;
	int64_t x215 = -1LL;
	uint32_t x216 = 5334066U;
	volatile int64_t t52 = -241690485049LL;

	t52 = (((x213<=x214)*x215)%x216);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x217 = INT32_MIN;
	static uint16_t x220 = UINT16_MAX;
	uint32_t t53 = 4U;

	t53 = (((x217<=x218)*x219)%x220);

	if (t53 != 64600U) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x221 = UINT64_MAX;
	volatile uint16_t x223 = 5U;
	int32_t x224 = -52661742;
	int32_t t54 = -484611914;

	t54 = (((x221<=x222)*x223)%x224);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x233 = -380570771LL;
	static uint16_t x235 = 62U;
	int32_t t55 = 7;

	t55 = (((x233<=x234)*x235)%x236);

	if (t55 != 62) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x238 = 5U;
	volatile uint64_t x239 = UINT64_MAX;
	int64_t x240 = INT64_MIN;
	volatile uint64_t t56 = 47903477302793LLU;

	t56 = (((x237<=x238)*x239)%x240);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t t57 = 32;

	t57 = (((x241<=x242)*x243)%x244);

	if (t57 != -128) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x245 = 1068989;
	static int16_t x246 = -321;
	static int16_t x248 = -29;
	volatile int64_t t58 = -3785385276LL;

	t58 = (((x245<=x246)*x247)%x248);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x251 = UINT16_MAX;
	volatile int64_t t59 = 3834914498135LL;

	t59 = (((x249<=x250)*x251)%x252);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x253 = UINT64_MAX;
	static uint16_t x254 = 0U;
	volatile int32_t x256 = INT32_MAX;
	static volatile int32_t t60 = 435;

	t60 = (((x253<=x254)*x255)%x256);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x257 = INT64_MIN;
	uint32_t x258 = UINT32_MAX;
	int8_t x259 = INT8_MAX;
	uint32_t x260 = UINT32_MAX;
	volatile uint32_t t61 = 1U;

	t61 = (((x257<=x258)*x259)%x260);

	if (t61 != 127U) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x261 = INT64_MAX;
	uint64_t x263 = 383157736059LLU;
	int8_t x264 = INT8_MAX;
	uint64_t t62 = 11723883122LLU;

	t62 = (((x261<=x262)*x263)%x264);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x265 = -3533;
	int64_t x267 = -184760374LL;
	int8_t x268 = -1;
	int64_t t63 = -534LL;

	t63 = (((x265<=x266)*x267)%x268);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x269 = -1;
	uint16_t x271 = UINT16_MAX;
	int64_t x272 = INT64_MIN;
	int64_t t64 = -9LL;

	t64 = (((x269<=x270)*x271)%x272);

	if (t64 != 65535LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x273 = 197496002686416453LLU;
	int32_t x274 = INT32_MAX;
	int64_t x276 = INT64_MAX;
	volatile int64_t t65 = 8LL;

	t65 = (((x273<=x274)*x275)%x276);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x277 = -2075331304119744LL;
	static int64_t x278 = -1LL;
	static uint8_t x279 = UINT8_MAX;
	uint16_t x280 = 11U;
	static int32_t t66 = 202810388;

	t66 = (((x277<=x278)*x279)%x280);

	if (t66 != 2) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x287 = UINT8_MAX;
	volatile int16_t x288 = -54;
	volatile int32_t t67 = -207119518;

	t67 = (((x285<=x286)*x287)%x288);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x289 = -146;
	int16_t x290 = INT16_MIN;
	int32_t x291 = INT32_MIN;
	uint8_t x292 = 14U;
	int32_t t68 = 430;

	t68 = (((x289<=x290)*x291)%x292);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int64_t x293 = INT64_MAX;
	int8_t x294 = INT8_MAX;
	int32_t x296 = 6789;

	t69 = (((x293<=x294)*x295)%x296);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x297 = UINT8_MAX;
	int16_t x298 = 2;
	uint64_t x299 = 498405LLU;
	static uint64_t t70 = 0LLU;

	t70 = (((x297<=x298)*x299)%x300);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x301 = 137867449;
	static volatile int8_t x302 = INT8_MAX;
	uint8_t x303 = UINT8_MAX;
	static uint8_t x304 = UINT8_MAX;
	int32_t t71 = -10735788;

	t71 = (((x301<=x302)*x303)%x304);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x305 = 10976;
	int16_t x306 = INT16_MAX;
	static int32_t t72 = -850;

	t72 = (((x305<=x306)*x307)%x308);

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x309 = INT64_MIN;
	int8_t x310 = INT8_MAX;
	int8_t x312 = 14;

	t73 = (((x309<=x310)*x311)%x312);

	if (t73 != 7LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x313 = INT8_MAX;
	static int32_t x315 = 205869;
	uint64_t x316 = UINT64_MAX;

	t74 = (((x313<=x314)*x315)%x316);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x319 = 268U;
	uint32_t x320 = 1272052U;
	uint32_t t75 = 482133632U;

	t75 = (((x317<=x318)*x319)%x320);

	if (t75 != 268U) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x321 = 9U;
	uint16_t x322 = 79U;
	static uint16_t x323 = 893U;
	uint16_t x324 = 2U;
	int32_t t76 = 711307305;

	t76 = (((x321<=x322)*x323)%x324);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x325 = 117;
	int8_t x326 = -1;
	static int8_t x327 = -8;
	static volatile int32_t t77 = -352;

	t77 = (((x325<=x326)*x327)%x328);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x330 = INT64_MIN;
	int16_t x331 = INT16_MAX;
	int8_t x332 = 28;
	static volatile int32_t t78 = -307;

	t78 = (((x329<=x330)*x331)%x332);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x333 = 238;
	int32_t x334 = INT32_MIN;
	volatile int64_t x335 = 799558906336823090LL;
	uint64_t t79 = 1786177298LLU;

	t79 = (((x333<=x334)*x335)%x336);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x337 = 24;
	int64_t x338 = INT64_MIN;
	int16_t x339 = INT16_MIN;
	int64_t x340 = 2208157LL;
	int64_t t80 = -1756760273622773698LL;

	t80 = (((x337<=x338)*x339)%x340);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x341 = 5U;
	int64_t x342 = -2LL;
	volatile int64_t x343 = INT64_MAX;
	int16_t x344 = INT16_MIN;

	t81 = (((x341<=x342)*x343)%x344);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x345 = INT8_MAX;
	int16_t x346 = INT16_MIN;
	int16_t x347 = 41;
	static int8_t x348 = 1;
	static int32_t t82 = 416407107;

	t82 = (((x345<=x346)*x347)%x348);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x349 = -214789564LL;
	volatile uint16_t x350 = 5310U;
	volatile int64_t x352 = INT64_MAX;
	volatile int64_t t83 = 0LL;

	t83 = (((x349<=x350)*x351)%x352);

	if (t83 != 255LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x353 = -4006;
	static int32_t x354 = -1;
	static volatile uint32_t x355 = 13324060U;
	int16_t x356 = 167;
	volatile uint32_t t84 = 95339U;

	t84 = (((x353<=x354)*x355)%x356);

	if (t84 != 132U) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x357 = -1;
	volatile int64_t x358 = -1LL;
	uint64_t x359 = 17633333229510586LLU;
	int32_t x360 = -1;
	uint64_t t85 = 72322757467627LLU;

	t85 = (((x357<=x358)*x359)%x360);

	if (t85 != 17633333229510586LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x361 = UINT8_MAX;
	int16_t x362 = -1;
	int16_t x363 = INT16_MIN;
	int16_t x364 = INT16_MAX;
	static int32_t t86 = 210372;

	t86 = (((x361<=x362)*x363)%x364);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x365 = 1491578080667LLU;
	int64_t x366 = INT64_MIN;
	int32_t x367 = INT32_MAX;
	static int32_t x368 = 471112143;

	t87 = (((x365<=x366)*x367)%x368);

	if (t87 != 263035075) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x369 = INT32_MIN;
	int8_t x370 = INT8_MIN;
	int32_t x372 = 9689;
	static volatile int32_t t88 = 341676;

	t88 = (((x369<=x370)*x371)%x372);

	if (t88 != -3999) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x373 = 189531899615442LL;
	uint64_t x374 = 113950673571625LLU;
	int16_t x375 = 14237;
	volatile int32_t t89 = 667080;

	t89 = (((x373<=x374)*x375)%x376);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x377 = -1;
	int32_t x378 = -1;
	int8_t x379 = -3;
	int16_t x380 = INT16_MIN;
	volatile int32_t t90 = -5;

	t90 = (((x377<=x378)*x379)%x380);

	if (t90 != -3) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x381 = INT16_MIN;
	static uint8_t x382 = 2U;
	uint64_t x383 = 99LLU;
	int16_t x384 = -1;
	uint64_t t91 = 523249435309LLU;

	t91 = (((x381<=x382)*x383)%x384);

	if (t91 != 99LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x385 = INT64_MAX;
	static int64_t x387 = 38024808713LL;
	int64_t t92 = 1LL;

	t92 = (((x385<=x386)*x387)%x388);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x389 = 18;
	int64_t x390 = INT64_MIN;
	uint32_t x391 = 947635499U;
	uint8_t x392 = 3U;
	uint32_t t93 = 4584190U;

	t93 = (((x389<=x390)*x391)%x392);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int32_t x393 = -1;
	int64_t x394 = -1LL;
	int64_t x395 = INT64_MAX;
	static uint8_t x396 = UINT8_MAX;

	t94 = (((x393<=x394)*x395)%x396);

	if (t94 != 127LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x399 = INT64_MAX;
	volatile int64_t t95 = 45524387755927657LL;

	t95 = (((x397<=x398)*x399)%x400);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x401 = -1785432192057059133LL;
	static int8_t x402 = INT8_MAX;
	static int16_t x404 = INT16_MIN;
	int32_t t96 = -6850;

	t96 = (((x401<=x402)*x403)%x404);

	if (t96 != 32767) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x405 = -1;
	int8_t x406 = -27;
	static uint64_t x407 = 4599822LLU;

	t97 = (((x405<=x406)*x407)%x408);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x410 = -417;
	static uint64_t x411 = 19450161154974LLU;
	int16_t x412 = INT16_MIN;
	uint64_t t98 = 16655588018161169LLU;

	t98 = (((x409<=x410)*x411)%x412);

	if (t98 != 19450161154974LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x414 = 78U;
	uint64_t x416 = 636461883474177545LLU;

	t99 = (((x413<=x414)*x415)%x416);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

