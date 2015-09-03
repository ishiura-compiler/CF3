#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x1 = INT32_MAX;
uint16_t x2 = 324U;
int8_t x9 = INT8_MAX;
int32_t x11 = -1;
static int8_t x14 = INT8_MAX;
int8_t x16 = INT8_MIN;
volatile uint64_t x23 = 2843134614794LLU;
int32_t x27 = INT32_MAX;
volatile int8_t x32 = INT8_MAX;
int64_t x42 = 13LL;
static int16_t x44 = 326;
int32_t x48 = INT32_MAX;
uint16_t x50 = UINT16_MAX;
uint8_t x51 = 1U;
uint32_t x53 = 3003749U;
volatile int16_t x55 = 7729;
uint16_t x56 = 6050U;
int32_t t13 = -4;
int64_t x60 = INT64_MIN;
static volatile int32_t t14 = -1;
volatile int32_t x70 = INT32_MAX;
volatile int16_t x74 = -1;
static int8_t x80 = -1;
volatile int32_t t19 = -230156;
volatile int32_t t20 = 495562;
int64_t x85 = INT64_MAX;
volatile int32_t t21 = 53;
volatile uint8_t x102 = 1U;
volatile uint64_t x107 = UINT64_MAX;
int32_t x108 = 111;
int64_t x114 = 31768413LL;
int8_t x116 = INT8_MAX;
int64_t x117 = -1LL;
int32_t x118 = INT32_MIN;
uint64_t x123 = 25844LLU;
int32_t t30 = 3440;
int16_t x128 = -3;
static int32_t t32 = 1033972417;
int64_t x137 = INT64_MAX;
uint32_t x144 = 138U;
int8_t x145 = INT8_MAX;
volatile int32_t t36 = 23611;
int16_t x156 = -214;
static int16_t x158 = -31;
static volatile int32_t t40 = -1;
volatile int16_t x166 = 0;
uint16_t x171 = 9U;
static int8_t x173 = 1;
static volatile uint64_t x177 = 1898770LLU;
int16_t x184 = 0;
volatile int32_t t46 = 372721153;
volatile int64_t x189 = -39719539914825LL;
int8_t x196 = INT8_MAX;
static int32_t t48 = -4476187;
int32_t x198 = INT32_MAX;
int64_t x201 = INT64_MIN;
int32_t x208 = -1;
volatile int32_t t51 = -167880;
int16_t x209 = INT16_MIN;
static int64_t x210 = 2LL;
volatile int32_t x214 = 63;
static int32_t t54 = -10253393;
int8_t x221 = INT8_MAX;
volatile int8_t x222 = 4;
int64_t x224 = INT64_MIN;
volatile int32_t x225 = 26;
static int32_t t58 = 51583425;
int64_t x248 = 0LL;
volatile int16_t x252 = INT16_MAX;
volatile int64_t x256 = INT64_MIN;
volatile int32_t t63 = 7336;
volatile int32_t t64 = 949055;
volatile int32_t t65 = 1002935668;
uint8_t x271 = 0U;
volatile int32_t t67 = 1264013;
int64_t x275 = -1LL;
int64_t x278 = -15224LL;
volatile int32_t x281 = INT32_MIN;
uint32_t x292 = 20765U;
static int32_t x296 = INT32_MAX;
uint8_t x297 = 0U;
uint32_t x299 = 1020888U;
volatile int64_t x309 = INT64_MIN;
uint16_t x314 = 704U;
static volatile int32_t t79 = 7371810;
volatile uint16_t x321 = 2837U;
int8_t x333 = -62;
uint32_t x334 = UINT32_MAX;
int32_t t83 = -895370116;
uint8_t x343 = UINT8_MAX;
int64_t x349 = INT64_MAX;
volatile int32_t t87 = 707;
int32_t x360 = INT32_MIN;
int32_t t89 = 17947;
int16_t x366 = INT16_MIN;
volatile uint32_t x367 = UINT32_MAX;
int8_t x369 = -1;
int8_t x373 = 24;
uint32_t x377 = UINT32_MAX;
int64_t x383 = INT64_MIN;
int32_t t95 = 352666844;
int64_t x388 = 11809582197687543LL;
int32_t t98 = 1161166;
int16_t x398 = -365;


void f0(void) {
	uint8_t x3 = UINT8_MAX;
	static int64_t x4 = -1LL;
	static int32_t t0 = 8092;

	t0 = ((x1<=x2)==(x3<=x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	uint64_t x6 = UINT64_MAX;
	int64_t x7 = 2LL;
	volatile int32_t x8 = INT32_MIN;
	static int32_t t1 = 46785;

	t1 = ((x5<=x6)==(x7<=x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x10 = -1;
	int8_t x12 = INT8_MAX;
	int32_t t2 = -570762151;

	t2 = ((x9<=x10)==(x11<=x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = 285;
	volatile int32_t x15 = -7;
	volatile int32_t t3 = -2;

	t3 = ((x13<=x14)==(x15<=x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = UINT8_MAX;
	int64_t x18 = 1LL;
	uint8_t x19 = 41U;
	static volatile int8_t x20 = 0;
	static int32_t t4 = 77;

	t4 = ((x17<=x18)==(x19<=x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = 16043753306070LL;
	int32_t x22 = -1;
	int8_t x24 = 9;
	int32_t t5 = -311;

	t5 = ((x21<=x22)==(x23<=x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 850642677433574552LLU;
	int32_t x26 = INT32_MAX;
	uint8_t x28 = 104U;
	int32_t t6 = 150505;

	t6 = ((x25<=x26)==(x27<=x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x29 = 16U;
	int8_t x30 = -27;
	static uint32_t x31 = 1431U;
	volatile int32_t t7 = 1;

	t7 = ((x29<=x30)==(x31<=x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 39U;
	volatile int32_t x34 = INT32_MIN;
	int32_t x35 = INT32_MIN;
	int16_t x36 = INT16_MIN;
	int32_t t8 = 428794;

	t8 = ((x33<=x34)==(x35<=x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x37 = 2435LLU;
	int32_t x38 = -7633;
	int32_t x39 = INT32_MAX;
	int64_t x40 = -1LL;
	int32_t t9 = 20385;

	t9 = ((x37<=x38)==(x39<=x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x41 = 37;
	volatile int8_t x43 = INT8_MAX;
	volatile int32_t t10 = -1001126;

	t10 = ((x41<=x42)==(x43<=x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MAX;
	uint64_t x46 = UINT64_MAX;
	volatile int64_t x47 = INT64_MIN;
	static int32_t t11 = 1428658;

	t11 = ((x45<=x46)==(x47<=x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = -9;
	int32_t x52 = 7926;
	int32_t t12 = 29;

	t12 = ((x49<=x50)==(x51<=x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x54 = -1;

	t13 = ((x53<=x54)==(x55<=x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x57 = INT64_MIN;
	int64_t x58 = INT64_MIN;
	int64_t x59 = -2449LL;

	t14 = ((x57<=x58)==(x59<=x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x61 = 39301U;
	int16_t x62 = -1;
	uint8_t x63 = 23U;
	uint64_t x64 = UINT64_MAX;
	int32_t t15 = -128758;

	t15 = ((x61<=x62)==(x63<=x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x65 = 553713705073703LL;
	static volatile uint32_t x66 = 57264U;
	static uint8_t x67 = 9U;
	uint16_t x68 = 600U;
	int32_t t16 = 3563250;

	t16 = ((x65<=x66)==(x67<=x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = 0;
	volatile uint8_t x71 = UINT8_MAX;
	int32_t x72 = INT32_MIN;
	int32_t t17 = -436060635;

	t17 = ((x69<=x70)==(x71<=x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MIN;
	int32_t x75 = INT32_MIN;
	uint8_t x76 = 83U;
	volatile int32_t t18 = 16300953;

	t18 = ((x73<=x74)==(x75<=x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = 440LLU;
	int16_t x78 = -1;
	static int32_t x79 = INT32_MIN;

	t19 = ((x77<=x78)==(x79<=x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MIN;
	static uint16_t x82 = 3084U;
	volatile uint32_t x83 = 10690U;
	int64_t x84 = 180993632029LL;

	t20 = ((x81<=x82)==(x83<=x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x86 = 63437105147LLU;
	int16_t x87 = 181;
	int8_t x88 = -5;

	t21 = ((x85<=x86)==(x87<=x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = -1LL;
	int32_t x90 = 1223;
	static int16_t x91 = INT16_MIN;
	int8_t x92 = 4;
	static volatile int32_t t22 = -753622;

	t22 = ((x89<=x90)==(x91<=x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = INT32_MIN;
	int32_t x94 = INT32_MAX;
	int64_t x95 = -1LL;
	uint32_t x96 = 691999U;
	int32_t t23 = 506754;

	t23 = ((x93<=x94)==(x95<=x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = 7243;
	int64_t x98 = INT64_MIN;
	int64_t x99 = -1LL;
	int64_t x100 = 487903112700LL;
	int32_t t24 = -9797;

	t24 = ((x97<=x98)==(x99<=x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = -1;
	int64_t x103 = INT64_MAX;
	int64_t x104 = INT64_MIN;
	int32_t t25 = 1708;

	t25 = ((x101<=x102)==(x103<=x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = 33U;
	static int64_t x106 = 242928262019LL;
	static int32_t t26 = 7;

	t26 = ((x105<=x106)==(x107<=x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = UINT64_MAX;
	int64_t x110 = INT64_MIN;
	int16_t x111 = -15;
	volatile uint32_t x112 = 21466U;
	volatile int32_t t27 = -101297;

	t27 = ((x109<=x110)==(x111<=x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x113 = INT64_MIN;
	static volatile uint8_t x115 = 111U;
	volatile int32_t t28 = 803;

	t28 = ((x113<=x114)==(x115<=x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x119 = INT8_MAX;
	int8_t x120 = 4;
	volatile int32_t t29 = -3;

	t29 = ((x117<=x118)==(x119<=x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint64_t x121 = 74771128203LLU;
	static uint16_t x122 = UINT16_MAX;
	int32_t x124 = INT32_MIN;

	t30 = ((x121<=x122)==(x123<=x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = UINT8_MAX;
	int32_t x126 = -20210424;
	volatile int64_t x127 = 60633268061615LL;
	volatile int32_t t31 = -2615462;

	t31 = ((x125<=x126)==(x127<=x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x129 = -1;
	static int64_t x130 = INT64_MIN;
	int8_t x131 = -1;
	volatile uint64_t x132 = 8007597426964576048LLU;

	t32 = ((x129<=x130)==(x131<=x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x133 = 28U;
	int32_t x134 = INT32_MIN;
	volatile uint64_t x135 = UINT64_MAX;
	int8_t x136 = -1;
	volatile int32_t t33 = 0;

	t33 = ((x133<=x134)==(x135<=x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x138 = -1;
	static int8_t x139 = -3;
	int32_t x140 = INT32_MIN;
	volatile int32_t t34 = 236972487;

	t34 = ((x137<=x138)==(x139<=x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MAX;
	int16_t x142 = INT16_MIN;
	int32_t x143 = INT32_MAX;
	volatile int32_t t35 = 521603;

	t35 = ((x141<=x142)==(x143<=x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x146 = -1;
	static volatile int64_t x147 = INT64_MIN;
	static int64_t x148 = -11821LL;

	t36 = ((x145<=x146)==(x147<=x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MIN;
	int8_t x150 = -1;
	int64_t x151 = INT64_MAX;
	volatile uint8_t x152 = UINT8_MAX;
	volatile int32_t t37 = 3552928;

	t37 = ((x149<=x150)==(x151<=x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = -1;
	int64_t x154 = -1LL;
	volatile int64_t x155 = 1415410LL;
	int32_t t38 = 119;

	t38 = ((x153<=x154)==(x155<=x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = 989820LLU;
	int8_t x159 = -1;
	uint32_t x160 = 161U;
	volatile int32_t t39 = 1301;

	t39 = ((x157<=x158)==(x159<=x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = 110412866U;
	volatile uint16_t x162 = 1324U;
	uint16_t x163 = 7U;
	uint8_t x164 = 0U;

	t40 = ((x161<=x162)==(x163<=x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = -1LL;
	uint64_t x167 = 75192656305LLU;
	uint64_t x168 = 50536LLU;
	volatile int32_t t41 = 1;

	t41 = ((x165<=x166)==(x167<=x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = INT8_MAX;
	int8_t x170 = -1;
	uint8_t x172 = UINT8_MAX;
	static int32_t t42 = -389467;

	t42 = ((x169<=x170)==(x171<=x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x174 = -1LL;
	int8_t x175 = 8;
	int16_t x176 = INT16_MIN;
	int32_t t43 = 191360;

	t43 = ((x173<=x174)==(x175<=x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x178 = INT16_MIN;
	int32_t x179 = INT32_MIN;
	static int8_t x180 = INT8_MIN;
	int32_t t44 = 5180742;

	t44 = ((x177<=x178)==(x179<=x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = -1;
	int8_t x182 = INT8_MAX;
	int32_t x183 = INT32_MIN;
	int32_t t45 = 0;

	t45 = ((x181<=x182)==(x183<=x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = -1;
	uint16_t x186 = 0U;
	int16_t x187 = INT16_MIN;
	int32_t x188 = INT32_MIN;

	t46 = ((x185<=x186)==(x187<=x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x190 = 3U;
	int32_t x191 = 56522;
	uint32_t x192 = UINT32_MAX;
	int32_t t47 = -774208;

	t47 = ((x189<=x190)==(x191<=x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x193 = 490341861998006997LLU;
	uint8_t x194 = UINT8_MAX;
	int16_t x195 = INT16_MIN;

	t48 = ((x193<=x194)==(x195<=x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x197 = 2U;
	int8_t x199 = INT8_MAX;
	volatile int32_t x200 = -1;
	volatile int32_t t49 = 226;

	t49 = ((x197<=x198)==(x199<=x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x202 = INT8_MIN;
	uint32_t x203 = 3635U;
	uint16_t x204 = 3290U;
	int32_t t50 = -91;

	t50 = ((x201<=x202)==(x203<=x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = INT8_MIN;
	int32_t x206 = INT32_MAX;
	int64_t x207 = 3586086LL;

	t51 = ((x205<=x206)==(x207<=x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x211 = 38522U;
	volatile int16_t x212 = -351;
	volatile int32_t t52 = -70682;

	t52 = ((x209<=x210)==(x211<=x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = -29;
	static uint16_t x215 = 1842U;
	uint16_t x216 = 27607U;
	volatile int32_t t53 = -265;

	t53 = ((x213<=x214)==(x215<=x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x217 = -26;
	volatile uint32_t x218 = 84687U;
	int64_t x219 = INT64_MIN;
	uint32_t x220 = 44740968U;

	t54 = ((x217<=x218)==(x219<=x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x223 = 173228;
	static volatile int32_t t55 = 4670;

	t55 = ((x221<=x222)==(x223<=x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x226 = UINT64_MAX;
	int64_t x227 = INT64_MIN;
	uint64_t x228 = 4984850LLU;
	volatile int32_t t56 = -5;

	t56 = ((x225<=x226)==(x227<=x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = 75060LLU;
	uint64_t x230 = UINT64_MAX;
	int32_t x231 = INT32_MIN;
	static uint64_t x232 = UINT64_MAX;
	int32_t t57 = -3;

	t57 = ((x229<=x230)==(x231<=x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = INT64_MIN;
	static uint64_t x234 = 38558399168050LLU;
	static uint16_t x235 = 0U;
	int32_t x236 = INT32_MIN;

	t58 = ((x233<=x234)==(x235<=x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x237 = 451245810U;
	volatile uint8_t x238 = 1U;
	uint64_t x239 = UINT64_MAX;
	int32_t x240 = -1;
	volatile int32_t t59 = 265958;

	t59 = ((x237<=x238)==(x239<=x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x241 = UINT16_MAX;
	int64_t x242 = -2250LL;
	volatile int16_t x243 = -178;
	int16_t x244 = INT16_MIN;
	int32_t t60 = 3786445;

	t60 = ((x241<=x242)==(x243<=x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x245 = 72U;
	uint8_t x246 = 1U;
	volatile int16_t x247 = -1;
	int32_t t61 = 3297147;

	t61 = ((x245<=x246)==(x247<=x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x249 = INT32_MIN;
	int32_t x250 = -15173764;
	volatile int16_t x251 = -1;
	int32_t t62 = 12346;

	t62 = ((x249<=x250)==(x251<=x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = -1;
	static int16_t x254 = INT16_MAX;
	static uint32_t x255 = 103U;

	t63 = ((x253<=x254)==(x255<=x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x257 = UINT16_MAX;
	int16_t x258 = -4;
	int8_t x259 = -1;
	static int16_t x260 = -1;

	t64 = ((x257<=x258)==(x259<=x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x261 = INT32_MAX;
	static uint64_t x262 = 3473978292732915LLU;
	int16_t x263 = -1;
	int16_t x264 = 1380;

	t65 = ((x261<=x262)==(x263<=x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x265 = 1018U;
	int16_t x266 = INT16_MIN;
	int8_t x267 = INT8_MAX;
	static int8_t x268 = -1;
	volatile int32_t t66 = -768196165;

	t66 = ((x265<=x266)==(x267<=x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x269 = 10297899247LLU;
	static volatile int8_t x270 = INT8_MIN;
	int16_t x272 = 51;

	t67 = ((x269<=x270)==(x271<=x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x273 = -2;
	int16_t x274 = INT16_MIN;
	volatile int32_t x276 = INT32_MIN;
	static volatile int32_t t68 = 26;

	t68 = ((x273<=x274)==(x275<=x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = INT32_MIN;
	int16_t x279 = INT16_MAX;
	static volatile uint64_t x280 = 5942774161LLU;
	static volatile int32_t t69 = 93820013;

	t69 = ((x277<=x278)==(x279<=x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x282 = -1;
	volatile int64_t x283 = -629626764429728LL;
	static uint16_t x284 = UINT16_MAX;
	int32_t t70 = 118578;

	t70 = ((x281<=x282)==(x283<=x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x285 = 1985092564919407117LLU;
	static int16_t x286 = -1600;
	int16_t x287 = -1;
	volatile int32_t x288 = INT32_MAX;
	volatile int32_t t71 = -948;

	t71 = ((x285<=x286)==(x287<=x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x289 = -42102;
	uint16_t x290 = 1556U;
	int32_t x291 = -1;
	int32_t t72 = 16443599;

	t72 = ((x289<=x290)==(x291<=x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int16_t x293 = -1;
	int16_t x294 = -1;
	uint32_t x295 = UINT32_MAX;
	static int32_t t73 = 118;

	t73 = ((x293<=x294)==(x295<=x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x298 = INT32_MIN;
	static int64_t x300 = INT64_MAX;
	volatile int32_t t74 = -7587;

	t74 = ((x297<=x298)==(x299<=x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x301 = 10784LLU;
	int64_t x302 = INT64_MAX;
	volatile int64_t x303 = INT64_MAX;
	static uint16_t x304 = 2495U;
	volatile int32_t t75 = -9;

	t75 = ((x301<=x302)==(x303<=x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x305 = INT8_MIN;
	uint32_t x306 = 23U;
	uint8_t x307 = UINT8_MAX;
	int16_t x308 = INT16_MIN;
	int32_t t76 = 77705663;

	t76 = ((x305<=x306)==(x307<=x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x310 = 3;
	int16_t x311 = INT16_MIN;
	volatile uint32_t x312 = 8U;
	int32_t t77 = 1174643;

	t77 = ((x309<=x310)==(x311<=x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = 20141LL;
	static int16_t x315 = INT16_MAX;
	int8_t x316 = INT8_MIN;
	volatile int32_t t78 = -7615;

	t78 = ((x313<=x314)==(x315<=x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x317 = 17439U;
	uint16_t x318 = UINT16_MAX;
	volatile uint16_t x319 = 740U;
	int32_t x320 = INT32_MIN;

	t79 = ((x317<=x318)==(x319<=x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x322 = 1324709237U;
	uint32_t x323 = UINT32_MAX;
	int16_t x324 = INT16_MIN;
	volatile int32_t t80 = 528976598;

	t80 = ((x321<=x322)==(x323<=x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x325 = -100146907619568LL;
	uint32_t x326 = UINT32_MAX;
	static volatile int16_t x327 = -1033;
	static int8_t x328 = -14;
	int32_t t81 = -1848;

	t81 = ((x325<=x326)==(x327<=x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x329 = -96;
	volatile uint32_t x330 = 363U;
	uint16_t x331 = 107U;
	volatile int64_t x332 = 334939422LL;
	static volatile int32_t t82 = -189;

	t82 = ((x329<=x330)==(x331<=x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x335 = -2;
	static int32_t x336 = INT32_MAX;

	t83 = ((x333<=x334)==(x335<=x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = -41;
	static uint8_t x338 = 10U;
	int16_t x339 = INT16_MIN;
	volatile int16_t x340 = INT16_MIN;
	static volatile int32_t t84 = 820510;

	t84 = ((x337<=x338)==(x339<=x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x341 = -1LL;
	uint64_t x342 = 103910021337029LLU;
	int32_t x344 = 2;
	int32_t t85 = -31306;

	t85 = ((x341<=x342)==(x343<=x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x345 = UINT8_MAX;
	int64_t x346 = -93LL;
	volatile int16_t x347 = INT16_MAX;
	int8_t x348 = -5;
	volatile int32_t t86 = 543516570;

	t86 = ((x345<=x346)==(x347<=x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x350 = INT32_MAX;
	static uint32_t x351 = 15111U;
	volatile uint16_t x352 = 7U;

	t87 = ((x349<=x350)==(x351<=x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x353 = 23;
	int8_t x354 = -1;
	uint32_t x355 = 106928072U;
	volatile int8_t x356 = 43;
	static int32_t t88 = -5839236;

	t88 = ((x353<=x354)==(x355<=x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x357 = -1;
	uint8_t x358 = UINT8_MAX;
	uint8_t x359 = 0U;

	t89 = ((x357<=x358)==(x359<=x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = -5490LL;
	static int8_t x362 = INT8_MIN;
	int8_t x363 = -1;
	static int32_t x364 = INT32_MAX;
	int32_t t90 = 33402;

	t90 = ((x361<=x362)==(x363<=x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x365 = 11U;
	uint8_t x368 = UINT8_MAX;
	volatile int32_t t91 = 346093053;

	t91 = ((x365<=x366)==(x367<=x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x370 = UINT8_MAX;
	static int32_t x371 = INT32_MIN;
	uint8_t x372 = UINT8_MAX;
	static int32_t t92 = -447;

	t92 = ((x369<=x370)==(x371<=x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x374 = 0U;
	int32_t x375 = INT32_MIN;
	int32_t x376 = -1;
	volatile int32_t t93 = 204764359;

	t93 = ((x373<=x374)==(x375<=x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x378 = 31757U;
	int16_t x379 = INT16_MAX;
	int32_t x380 = INT32_MIN;
	static int32_t t94 = 301011204;

	t94 = ((x377<=x378)==(x379<=x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = 1;
	uint16_t x382 = UINT16_MAX;
	uint64_t x384 = UINT64_MAX;

	t95 = ((x381<=x382)==(x383<=x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = UINT64_MAX;
	volatile uint16_t x386 = 2U;
	uint64_t x387 = 1039065424972897435LLU;
	int32_t t96 = -41141177;

	t96 = ((x385<=x386)==(x387<=x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = 257623017563362LL;
	int8_t x390 = -1;
	int32_t x391 = -1;
	static uint32_t x392 = UINT32_MAX;
	volatile int32_t t97 = -1205178;

	t97 = ((x389<=x390)==(x391<=x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint8_t x393 = 31U;
	uint8_t x394 = UINT8_MAX;
	int8_t x395 = -1;
	uint32_t x396 = UINT32_MAX;

	t98 = ((x393<=x394)==(x395<=x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = INT16_MIN;
	int64_t x399 = -1LL;
	int32_t x400 = -1;
	volatile int32_t t99 = -161339;

	t99 = ((x397<=x398)==(x399<=x400));

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

