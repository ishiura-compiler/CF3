#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = INT8_MIN;
volatile int32_t t2 = 0;
volatile int8_t x16 = INT8_MAX;
volatile int32_t t3 = -243816;
static uint16_t x22 = 10U;
int8_t x23 = INT8_MAX;
int8_t x26 = INT8_MIN;
int64_t x28 = -1LL;
volatile int32_t t6 = -22;
int16_t x36 = -15;
int32_t x40 = INT32_MIN;
uint16_t x43 = 71U;
int32_t t10 = 25;
uint8_t x46 = UINT8_MAX;
int64_t x48 = -21495952LL;
volatile int16_t x54 = 1200;
uint64_t x60 = 63357LLU;
static int32_t x61 = INT32_MIN;
volatile int8_t x63 = INT8_MIN;
static int16_t x64 = 72;
int32_t t16 = -214;
uint8_t x70 = 1U;
static uint8_t x74 = 5U;
uint16_t x75 = UINT16_MAX;
static volatile int64_t x85 = -96783436526679213LL;
int8_t x91 = INT8_MAX;
int8_t x105 = -1;
int32_t t26 = -2;
int8_t x109 = -1;
volatile int64_t x110 = INT64_MAX;
int32_t x113 = 758666;
int16_t x114 = INT16_MIN;
int64_t x121 = INT64_MIN;
int8_t x122 = INT8_MAX;
int32_t t32 = 567443244;
uint8_t x133 = 71U;
int16_t x135 = 154;
int32_t x140 = -623707086;
static int32_t t34 = 102218;
volatile int8_t x143 = INT8_MIN;
uint32_t x148 = 49U;
int64_t x154 = INT64_MIN;
static uint64_t x163 = UINT64_MAX;
volatile int8_t x169 = 19;
static int64_t x172 = INT64_MIN;
int32_t t42 = -258448;
static int8_t x176 = INT8_MIN;
uint64_t x182 = 4946793481481169229LLU;
int64_t x184 = INT64_MIN;
int16_t x187 = 1;
static int32_t x191 = -1;
int64_t x193 = INT64_MIN;
static int32_t x194 = 14947129;
uint64_t x196 = UINT64_MAX;
static int64_t x199 = INT64_MIN;
int8_t x200 = -1;
int32_t t50 = -1;
int16_t x208 = INT16_MIN;
int64_t x209 = INT64_MIN;
uint64_t x218 = UINT64_MAX;
volatile int32_t x220 = -1;
uint64_t x222 = UINT64_MAX;
int32_t x226 = -2569702;
volatile int16_t x230 = INT16_MIN;
int32_t x233 = INT32_MAX;
volatile int32_t x248 = INT32_MIN;
static int64_t x252 = -1LL;
volatile int32_t t63 = -3;
uint32_t x257 = 1346847U;
uint8_t x276 = UINT8_MAX;
static int32_t x277 = INT32_MAX;
int16_t x278 = INT16_MAX;
int16_t x285 = -25;
uint8_t x286 = UINT8_MAX;
uint32_t x291 = UINT32_MAX;
uint32_t x301 = 95495U;
int32_t t75 = -821835159;
int16_t x306 = INT16_MAX;
static int8_t x307 = INT8_MAX;
int64_t x309 = INT64_MIN;
int32_t x311 = 62329608;
int32_t x317 = INT32_MAX;
int32_t x321 = INT32_MAX;
volatile int32_t t80 = 7664;
int64_t x325 = INT64_MAX;
static volatile int8_t x326 = -1;
volatile int8_t x329 = INT8_MIN;
int8_t x334 = 0;
uint8_t x336 = 35U;
uint32_t x337 = 96U;
int64_t x341 = -44252385256LL;
int64_t x375 = INT64_MIN;
int64_t x384 = -1LL;
int8_t x385 = -1;
int32_t x388 = INT32_MIN;
volatile int8_t x392 = INT8_MIN;
volatile int32_t t97 = 931421;
int32_t x395 = -1;


void f0(void) {
	static int64_t x2 = INT64_MIN;
	volatile int64_t x3 = 2924788852LL;
	int64_t x4 = 3836938524095322961LL;
	int32_t t0 = 0;

	t0 = (x1<=((x2&x3)|x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 331U;
	int64_t x6 = INT64_MAX;
	int32_t x7 = INT32_MIN;
	int8_t x8 = -1;
	static int32_t t1 = -33869221;

	t1 = (x5<=((x6&x7)|x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int64_t x9 = -1151731458341509LL;
	uint16_t x10 = 3U;
	static volatile uint32_t x11 = 21384U;
	int16_t x12 = 24;

	t2 = (x9<=((x10&x11)|x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 335201098U;
	static int32_t x14 = INT32_MIN;
	int16_t x15 = INT16_MIN;

	t3 = (x13<=((x14&x15)|x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = 5538;
	static volatile uint64_t x18 = 1631272548464376LLU;
	static int64_t x19 = INT64_MAX;
	volatile int64_t x20 = -1LL;
	int32_t t4 = -23023;

	t4 = (x17<=((x18&x19)|x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -3;
	volatile int16_t x24 = INT16_MAX;
	int32_t t5 = -1;

	t5 = (x21<=((x22&x23)|x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x25 = 1141874U;
	int16_t x27 = INT16_MIN;

	t6 = (x25<=((x26&x27)|x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	uint16_t x30 = 1U;
	uint32_t x31 = UINT32_MAX;
	volatile int64_t x32 = -1LL;
	volatile int32_t t7 = -4586579;

	t7 = (x29<=((x30&x31)|x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = 19;
	volatile int32_t x34 = INT32_MIN;
	int32_t x35 = INT32_MIN;
	int32_t t8 = 194885;

	t8 = (x33<=((x34&x35)|x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = 7899;
	volatile int8_t x38 = -1;
	int64_t x39 = INT64_MAX;
	int32_t t9 = -7251;

	t9 = (x37<=((x38&x39)|x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x41 = INT8_MIN;
	uint16_t x42 = UINT16_MAX;
	volatile int16_t x44 = INT16_MAX;

	t10 = (x41<=((x42&x43)|x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	int16_t x47 = -1;
	volatile int32_t t11 = 1709811;

	t11 = (x45<=((x46&x47)|x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x49 = -1;
	uint32_t x50 = 1673505254U;
	int64_t x51 = INT64_MIN;
	uint64_t x52 = 1302502266738425296LLU;
	int32_t t12 = -3775308;

	t12 = (x49<=((x50&x51)|x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x53 = INT8_MIN;
	int8_t x55 = INT8_MIN;
	int64_t x56 = INT64_MIN;
	volatile int32_t t13 = 630341674;

	t13 = (x53<=((x54&x55)|x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = UINT16_MAX;
	int8_t x58 = -1;
	uint16_t x59 = 2308U;
	int32_t t14 = 16;

	t14 = (x57<=((x58&x59)|x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x62 = -112;
	volatile int32_t t15 = 3172;

	t15 = (x61<=((x62&x63)|x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -426652LL;
	int8_t x66 = INT8_MAX;
	volatile uint16_t x67 = UINT16_MAX;
	static int16_t x68 = -1;

	t16 = (x65<=((x66&x67)|x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = UINT8_MAX;
	int64_t x71 = -1LL;
	static volatile int16_t x72 = -1;
	int32_t t17 = 1;

	t17 = (x69<=((x70&x71)|x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x73 = INT8_MAX;
	uint64_t x76 = 11447367668526719LLU;
	volatile int32_t t18 = 4199462;

	t18 = (x73<=((x74&x75)|x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x77 = -1;
	uint8_t x78 = 104U;
	static int8_t x79 = -1;
	static volatile int64_t x80 = INT64_MIN;
	volatile int32_t t19 = 485482906;

	t19 = (x77<=((x78&x79)|x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = 54U;
	int8_t x82 = -1;
	static uint8_t x83 = 0U;
	int16_t x84 = INT16_MAX;
	volatile int32_t t20 = 719;

	t20 = (x81<=((x82&x83)|x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x86 = -6761082358379LL;
	static int8_t x87 = 1;
	int16_t x88 = INT16_MIN;
	volatile int32_t t21 = 5;

	t21 = (x85<=((x86&x87)|x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint32_t x89 = 1841U;
	static int8_t x90 = INT8_MIN;
	int32_t x92 = -2889058;
	int32_t t22 = -1;

	t22 = (x89<=((x90&x91)|x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x93 = 56U;
	static uint64_t x94 = UINT64_MAX;
	int32_t x95 = -698713210;
	int16_t x96 = -1;
	volatile int32_t t23 = 334839;

	t23 = (x93<=((x94&x95)|x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = 3987U;
	int8_t x98 = INT8_MIN;
	int32_t x99 = 123;
	uint32_t x100 = 247309851U;
	volatile int32_t t24 = 0;

	t24 = (x97<=((x98&x99)|x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = INT32_MIN;
	static int32_t x102 = 45;
	volatile int16_t x103 = INT16_MIN;
	int16_t x104 = INT16_MIN;
	int32_t t25 = -26;

	t25 = (x101<=((x102&x103)|x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x106 = -1;
	uint32_t x107 = UINT32_MAX;
	int8_t x108 = INT8_MIN;

	t26 = (x105<=((x106&x107)|x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x111 = -14236223940797623LL;
	int64_t x112 = -8356653586LL;
	int32_t t27 = -1;

	t27 = (x109<=((x110&x111)|x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x115 = INT8_MAX;
	uint8_t x116 = 7U;
	int32_t t28 = -11678151;

	t28 = (x113<=((x114&x115)|x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x117 = UINT8_MAX;
	volatile int64_t x118 = INT64_MIN;
	volatile int32_t x119 = INT32_MIN;
	uint8_t x120 = 3U;
	volatile int32_t t29 = 365497586;

	t29 = (x117<=((x118&x119)|x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x123 = -11;
	volatile uint64_t x124 = 676303817597226LLU;
	int32_t t30 = -73849907;

	t30 = (x121<=((x122&x123)|x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MIN;
	uint64_t x126 = 1411973849LLU;
	volatile int8_t x127 = -1;
	uint32_t x128 = 1U;
	volatile int32_t t31 = -404344524;

	t31 = (x125<=((x126&x127)|x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x129 = INT8_MAX;
	uint8_t x130 = UINT8_MAX;
	int64_t x131 = -1LL;
	int64_t x132 = INT64_MIN;

	t32 = (x129<=((x130&x131)|x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x134 = INT64_MIN;
	uint64_t x136 = UINT64_MAX;
	int32_t t33 = 3590;

	t33 = (x133<=((x134&x135)|x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = UINT16_MAX;
	uint8_t x138 = 6U;
	int16_t x139 = INT16_MAX;

	t34 = (x137<=((x138&x139)|x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MIN;
	int16_t x142 = INT16_MAX;
	int64_t x144 = -1LL;
	int32_t t35 = -3;

	t35 = (x141<=((x142&x143)|x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x145 = -1;
	uint8_t x146 = 85U;
	volatile int16_t x147 = INT16_MAX;
	int32_t t36 = -17327100;

	t36 = (x145<=((x146&x147)|x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = -1;
	uint64_t x150 = 106332768330976LLU;
	volatile int64_t x151 = 225988616137765845LL;
	int16_t x152 = INT16_MIN;
	volatile int32_t t37 = 2029;

	t37 = (x149<=((x150&x151)|x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = 13647U;
	int32_t x155 = 89349483;
	volatile int8_t x156 = -1;
	volatile int32_t t38 = 50;

	t38 = (x153<=((x154&x155)|x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x157 = 7736U;
	uint16_t x158 = 389U;
	volatile int64_t x159 = INT64_MAX;
	uint16_t x160 = UINT16_MAX;
	int32_t t39 = 531975490;

	t39 = (x157<=((x158&x159)|x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MIN;
	int16_t x162 = INT16_MIN;
	volatile uint16_t x164 = 1U;
	volatile int32_t t40 = 91038;

	t40 = (x161<=((x162&x163)|x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x165 = -1;
	volatile uint64_t x166 = 4519705809LLU;
	int64_t x167 = INT64_MIN;
	uint32_t x168 = 108U;
	int32_t t41 = 59;

	t41 = (x165<=((x166&x167)|x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x170 = 15;
	uint32_t x171 = 28782U;

	t42 = (x169<=((x170&x171)|x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x173 = -1390;
	uint8_t x174 = 0U;
	static uint32_t x175 = UINT32_MAX;
	volatile int32_t t43 = 305984;

	t43 = (x173<=((x174&x175)|x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x177 = INT16_MAX;
	uint8_t x178 = 0U;
	int8_t x179 = -14;
	uint16_t x180 = 6192U;
	int32_t t44 = 131765530;

	t44 = (x177<=((x178&x179)|x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x181 = 9U;
	int8_t x183 = INT8_MIN;
	volatile int32_t t45 = -61;

	t45 = (x181<=((x182&x183)|x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x185 = INT8_MAX;
	volatile int64_t x186 = 5015631985LL;
	uint64_t x188 = UINT64_MAX;
	int32_t t46 = 1093;

	t46 = (x185<=((x186&x187)|x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x189 = 5718LLU;
	static int32_t x190 = 0;
	uint16_t x192 = 3582U;
	static int32_t t47 = -244;

	t47 = (x189<=((x190&x191)|x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x195 = -1;
	int32_t t48 = -46749566;

	t48 = (x193<=((x194&x195)|x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = INT32_MAX;
	int16_t x198 = -1;
	static volatile int32_t t49 = 1;

	t49 = (x197<=((x198&x199)|x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x201 = UINT16_MAX;
	int8_t x202 = INT8_MIN;
	int8_t x203 = INT8_MAX;
	int16_t x204 = -1;

	t50 = (x201<=((x202&x203)|x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x205 = UINT16_MAX;
	static volatile int16_t x206 = INT16_MIN;
	static volatile int32_t x207 = -486;
	volatile int32_t t51 = 16364227;

	t51 = (x205<=((x206&x207)|x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x210 = -1;
	int32_t x211 = -145987;
	volatile uint32_t x212 = 242412439U;
	static int32_t t52 = 1486033;

	t52 = (x209<=((x210&x211)|x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x213 = INT32_MIN;
	static int8_t x214 = INT8_MAX;
	uint32_t x215 = 26590U;
	volatile int64_t x216 = INT64_MIN;
	volatile int32_t t53 = 1;

	t53 = (x213<=((x214&x215)|x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = 0;
	static uint32_t x219 = 7U;
	static volatile int32_t t54 = -84735;

	t54 = (x217<=((x218&x219)|x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = 1807425;
	int64_t x223 = -1LL;
	volatile uint8_t x224 = 80U;
	int32_t t55 = -7;

	t55 = (x221<=((x222&x223)|x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = -1935110359279430LL;
	uint8_t x227 = 1U;
	volatile uint64_t x228 = 7LLU;
	volatile int32_t t56 = -52066466;

	t56 = (x225<=((x226&x227)|x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint16_t x229 = 40U;
	int8_t x231 = -1;
	int32_t x232 = INT32_MAX;
	volatile int32_t t57 = 0;

	t57 = (x229<=((x230&x231)|x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int32_t x234 = -229;
	volatile int16_t x235 = -1;
	int8_t x236 = 1;
	volatile int32_t t58 = 0;

	t58 = (x233<=((x234&x235)|x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = -50066566LL;
	volatile int64_t x238 = -1LL;
	int32_t x239 = -624273409;
	volatile uint16_t x240 = 15270U;
	volatile int32_t t59 = 15469;

	t59 = (x237<=((x238&x239)|x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = 0;
	int64_t x242 = INT64_MAX;
	int8_t x243 = 3;
	uint8_t x244 = 0U;
	static volatile int32_t t60 = 32;

	t60 = (x241<=((x242&x243)|x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MIN;
	uint8_t x246 = 100U;
	int32_t x247 = INT32_MIN;
	volatile int32_t t61 = -2;

	t61 = (x245<=((x246&x247)|x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = 9455896;
	volatile int64_t x250 = INT64_MAX;
	uint64_t x251 = 43952293516731LLU;
	volatile int32_t t62 = -262412006;

	t62 = (x249<=((x250&x251)|x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = INT8_MIN;
	int64_t x254 = INT64_MIN;
	int32_t x255 = -37363;
	volatile int64_t x256 = INT64_MAX;

	t63 = (x253<=((x254&x255)|x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x258 = INT32_MAX;
	int8_t x259 = -39;
	volatile int32_t x260 = -2670203;
	volatile int32_t t64 = -1362;

	t64 = (x257<=((x258&x259)|x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x261 = 1U;
	volatile int16_t x262 = -1;
	uint64_t x263 = 116761330184558157LLU;
	int8_t x264 = 1;
	volatile int32_t t65 = -77204073;

	t65 = (x261<=((x262&x263)|x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x265 = 24U;
	uint8_t x266 = UINT8_MAX;
	int64_t x267 = -1LL;
	int16_t x268 = 29;
	volatile int32_t t66 = 46;

	t66 = (x265<=((x266&x267)|x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x269 = 25U;
	uint32_t x270 = UINT32_MAX;
	volatile int8_t x271 = INT8_MIN;
	int32_t x272 = INT32_MAX;
	static int32_t t67 = 1430458;

	t67 = (x269<=((x270&x271)|x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = INT8_MIN;
	static volatile int64_t x274 = 13LL;
	volatile int16_t x275 = INT16_MIN;
	int32_t t68 = 4849;

	t68 = (x273<=((x274&x275)|x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x279 = 220536962445575028LLU;
	static int32_t x280 = -1;
	int32_t t69 = 0;

	t69 = (x277<=((x278&x279)|x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int16_t x281 = 0;
	uint8_t x282 = 0U;
	int32_t x283 = -1;
	int32_t x284 = INT32_MAX;
	int32_t t70 = 771929832;

	t70 = (x281<=((x282&x283)|x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x287 = INT32_MAX;
	static volatile int64_t x288 = -159794275004240LL;
	volatile int32_t t71 = 0;

	t71 = (x285<=((x286&x287)|x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = -126;
	int8_t x290 = INT8_MAX;
	uint32_t x292 = UINT32_MAX;
	volatile int32_t t72 = 7887221;

	t72 = (x289<=((x290&x291)|x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = -22;
	int32_t x294 = INT32_MIN;
	static int16_t x295 = -1;
	static uint16_t x296 = UINT16_MAX;
	static volatile int32_t t73 = -2079036;

	t73 = (x293<=((x294&x295)|x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = -1;
	static uint32_t x298 = 50U;
	int16_t x299 = INT16_MAX;
	int8_t x300 = INT8_MIN;
	int32_t t74 = 4760;

	t74 = (x297<=((x298&x299)|x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x302 = INT32_MIN;
	static int32_t x303 = -1;
	static int32_t x304 = INT32_MIN;

	t75 = (x301<=((x302&x303)|x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = INT8_MIN;
	int64_t x308 = -1LL;
	int32_t t76 = 391595250;

	t76 = (x305<=((x306&x307)|x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x310 = -1LL;
	volatile uint32_t x312 = UINT32_MAX;
	int32_t t77 = 0;

	t77 = (x309<=((x310&x311)|x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = -1;
	uint8_t x314 = 10U;
	int64_t x315 = -233278286091LL;
	volatile uint8_t x316 = 102U;
	int32_t t78 = 684;

	t78 = (x313<=((x314&x315)|x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x318 = 6U;
	uint64_t x319 = UINT64_MAX;
	int64_t x320 = INT64_MIN;
	volatile int32_t t79 = -125182771;

	t79 = (x317<=((x318&x319)|x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x322 = INT32_MIN;
	int16_t x323 = INT16_MIN;
	int16_t x324 = INT16_MIN;

	t80 = (x321<=((x322&x323)|x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x327 = -2;
	int8_t x328 = -1;
	volatile int32_t t81 = -68784515;

	t81 = (x325<=((x326&x327)|x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x330 = 1U;
	volatile int16_t x331 = 2;
	int32_t x332 = INT32_MIN;
	int32_t t82 = -5278;

	t82 = (x329<=((x330&x331)|x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x333 = 7823U;
	uint64_t x335 = UINT64_MAX;
	int32_t t83 = 166;

	t83 = (x333<=((x334&x335)|x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x338 = UINT64_MAX;
	uint16_t x339 = 9160U;
	static int32_t x340 = INT32_MIN;
	static volatile int32_t t84 = -6853841;

	t84 = (x337<=((x338&x339)|x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x342 = INT32_MAX;
	volatile int64_t x343 = INT64_MIN;
	int32_t x344 = INT32_MAX;
	static int32_t t85 = 418622219;

	t85 = (x341<=((x342&x343)|x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x345 = 1978U;
	static uint8_t x346 = 39U;
	static int32_t x347 = INT32_MAX;
	volatile uint8_t x348 = 0U;
	volatile int32_t t86 = -10362;

	t86 = (x345<=((x346&x347)|x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x349 = INT8_MAX;
	volatile int32_t x350 = INT32_MIN;
	volatile int32_t x351 = 0;
	volatile uint8_t x352 = 63U;
	static volatile int32_t t87 = -161;

	t87 = (x349<=((x350&x351)|x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x353 = 101U;
	int16_t x354 = -209;
	int8_t x355 = INT8_MIN;
	static int32_t x356 = -1;
	int32_t t88 = 1802;

	t88 = (x353<=((x354&x355)|x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x357 = UINT64_MAX;
	int32_t x358 = INT32_MAX;
	int16_t x359 = -1;
	uint16_t x360 = 1472U;
	volatile int32_t t89 = -11;

	t89 = (x357<=((x358&x359)|x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = INT64_MAX;
	volatile uint16_t x362 = UINT16_MAX;
	static int8_t x363 = INT8_MAX;
	static volatile int16_t x364 = INT16_MIN;
	volatile int32_t t90 = 518670055;

	t90 = (x361<=((x362&x363)|x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x365 = 72395U;
	uint16_t x366 = 3739U;
	uint8_t x367 = UINT8_MAX;
	uint8_t x368 = 59U;
	int32_t t91 = 1382800;

	t91 = (x365<=((x366&x367)|x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x369 = 1;
	static uint8_t x370 = 117U;
	volatile uint32_t x371 = UINT32_MAX;
	uint32_t x372 = 16005879U;
	volatile int32_t t92 = -8355994;

	t92 = (x369<=((x370&x371)|x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = -942176950872LL;
	volatile int16_t x374 = -7907;
	int32_t x376 = 22792558;
	volatile int32_t t93 = 286927721;

	t93 = (x373<=((x374&x375)|x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = INT16_MIN;
	int8_t x378 = INT8_MIN;
	int32_t x379 = -229747796;
	uint32_t x380 = 18U;
	volatile int32_t t94 = 19;

	t94 = (x377<=((x378&x379)|x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = INT8_MIN;
	static int64_t x382 = -2156181607412450795LL;
	int16_t x383 = INT16_MIN;
	static volatile int32_t t95 = -2;

	t95 = (x381<=((x382&x383)|x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int32_t x386 = INT32_MIN;
	int16_t x387 = 1;
	int32_t t96 = 11905;

	t96 = (x385<=((x386&x387)|x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = INT16_MIN;
	int64_t x390 = 23207585LL;
	uint32_t x391 = 168U;

	t97 = (x389<=((x390&x391)|x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = INT32_MIN;
	volatile uint16_t x394 = 921U;
	int16_t x396 = INT16_MIN;
	static int32_t t98 = -38140412;

	t98 = (x393<=((x394&x395)|x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x397 = INT32_MIN;
	volatile int8_t x398 = INT8_MIN;
	uint16_t x399 = 60U;
	int16_t x400 = INT16_MIN;
	int32_t t99 = -889;

	t99 = (x397<=((x398&x399)|x400));

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

