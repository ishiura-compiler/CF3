#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x3 = 21069U;
uint32_t x9 = 20528224U;
int16_t x14 = INT16_MIN;
uint32_t x15 = UINT32_MAX;
static uint8_t x17 = 6U;
volatile int32_t t4 = 3203197;
int32_t x22 = -1;
volatile int32_t t5 = 2263;
uint32_t x30 = UINT32_MAX;
int8_t x38 = INT8_MAX;
uint16_t x41 = 1U;
volatile uint16_t x42 = 1U;
int64_t x44 = -57014476LL;
uint32_t x48 = UINT32_MAX;
int32_t x58 = INT32_MAX;
uint8_t x60 = 3U;
static uint16_t x61 = 137U;
int8_t x62 = INT8_MAX;
volatile int32_t t17 = -1549109;
static uint64_t x74 = 118461276539468617LLU;
uint64_t x94 = 278814418264425010LLU;
volatile uint8_t x99 = UINT8_MAX;
volatile int32_t t26 = 13584;
int64_t x110 = INT64_MIN;
int16_t x112 = INT16_MAX;
static uint64_t x124 = UINT64_MAX;
volatile int8_t x128 = INT8_MIN;
int32_t t32 = 1286;
int16_t x136 = INT16_MAX;
volatile int16_t x139 = INT16_MIN;
int64_t x144 = 25398872953LL;
static uint16_t x161 = 271U;
int32_t t41 = 933465;
int8_t x173 = -1;
int32_t x175 = INT32_MIN;
int64_t x179 = INT64_MAX;
int32_t x182 = -70520532;
int32_t t45 = -56;
int8_t x191 = INT8_MIN;
int64_t x193 = 744595LL;
int64_t x195 = -1LL;
int16_t x201 = INT16_MAX;
int32_t x202 = -19;
int8_t x205 = INT8_MAX;
volatile uint16_t x208 = 5U;
uint32_t x209 = 3U;
volatile int32_t t53 = 3;
int32_t t57 = -4888;
int32_t x233 = -17126;
int32_t x237 = INT32_MIN;
uint32_t x244 = 53U;
int32_t t60 = -12759;
uint32_t x246 = UINT32_MAX;
uint64_t x247 = 126129252142LLU;
uint64_t x248 = 211276LLU;
volatile int32_t x249 = INT32_MIN;
static int32_t t62 = -880141826;
int64_t x253 = -3838596882009894261LL;
volatile int64_t x254 = -13978LL;
int64_t x255 = -220095LL;
volatile int16_t x259 = 1;
static uint16_t x260 = UINT16_MAX;
int32_t x265 = INT32_MIN;
int32_t t66 = -499788;
volatile int16_t x272 = -1;
int64_t x273 = INT64_MAX;
volatile int64_t x278 = INT64_MAX;
volatile int32_t t70 = -225;
volatile int32_t t71 = -5;
int32_t x292 = -56633434;
static volatile int32_t t72 = 452;
static int32_t x294 = 269522242;
uint16_t x297 = 381U;
volatile int64_t x301 = INT64_MIN;
uint32_t x310 = 450660995U;
int8_t x311 = INT8_MIN;
int32_t x316 = -1;
int32_t t79 = -26408;
static volatile uint64_t x321 = UINT64_MAX;
volatile uint32_t x332 = 1059399693U;
static int64_t x333 = -432753LL;
int32_t x346 = -1;
int32_t x348 = 9;
int32_t x351 = 34063;
volatile int32_t t87 = 7387706;
static int8_t x354 = 51;
int8_t x355 = -1;
static uint32_t x356 = 3981U;
int32_t t88 = 447454062;
volatile int32_t t91 = 21;
int16_t x379 = INT16_MAX;
volatile int32_t t94 = -626408313;
uint32_t x388 = UINT32_MAX;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	uint64_t x2 = UINT64_MAX;
	volatile uint64_t x4 = 20LLU;
	volatile int32_t t0 = 38;

	t0 = ((x1&x2)<=(x3|x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x5 = UINT16_MAX;
	static int64_t x6 = -315599117LL;
	int16_t x7 = -1;
	static int32_t x8 = INT32_MIN;
	static volatile int32_t t1 = 1;

	t1 = ((x5&x6)<=(x7|x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x10 = INT16_MAX;
	uint64_t x11 = 107065489115452244LLU;
	int64_t x12 = INT64_MIN;
	int32_t t2 = 1428;

	t2 = ((x9&x10)<=(x11|x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	int32_t x16 = -1;
	static volatile int32_t t3 = 347;

	t3 = ((x13&x14)<=(x15|x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = 0;
	int32_t x19 = INT32_MIN;
	volatile uint8_t x20 = 2U;

	t4 = ((x17&x18)<=(x19|x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	static int64_t x23 = INT64_MAX;
	int8_t x24 = -1;

	t5 = ((x21&x22)<=(x23|x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	static int32_t x26 = -1;
	int16_t x27 = -1;
	int64_t x28 = INT64_MAX;
	volatile int32_t t6 = -213184;

	t6 = ((x25&x26)<=(x27|x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MAX;
	int64_t x31 = INT64_MIN;
	static volatile int32_t x32 = -4116549;
	volatile int32_t t7 = -6;

	t7 = ((x29&x30)<=(x31|x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 3U;
	uint64_t x34 = 109641796LLU;
	uint8_t x35 = 89U;
	uint8_t x36 = 82U;
	volatile int32_t t8 = 5296;

	t8 = ((x33&x34)<=(x35|x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x37 = -1998;
	int8_t x39 = INT8_MAX;
	int32_t x40 = INT32_MIN;
	static int32_t t9 = -3743;

	t9 = ((x37&x38)<=(x39|x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x43 = INT16_MIN;
	int32_t t10 = 16514776;

	t10 = ((x41&x42)<=(x43|x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = 502;
	int32_t x46 = INT32_MIN;
	int64_t x47 = INT64_MAX;
	static volatile int32_t t11 = -85547755;

	t11 = ((x45&x46)<=(x47|x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MAX;
	static uint8_t x50 = 2U;
	static volatile uint32_t x51 = UINT32_MAX;
	static int8_t x52 = INT8_MAX;
	static int32_t t12 = 1;

	t12 = ((x49&x50)<=(x51|x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 48U;
	static int32_t x54 = INT32_MIN;
	int64_t x55 = INT64_MIN;
	int8_t x56 = INT8_MAX;
	volatile int32_t t13 = 3;

	t13 = ((x53&x54)<=(x55|x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int32_t x57 = INT32_MIN;
	static int64_t x59 = INT64_MAX;
	volatile int32_t t14 = -994352;

	t14 = ((x57&x58)<=(x59|x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x63 = -7;
	int64_t x64 = INT64_MIN;
	volatile int32_t t15 = 24;

	t15 = ((x61&x62)<=(x63|x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MIN;
	uint32_t x66 = UINT32_MAX;
	int64_t x67 = -6810967368599480LL;
	int8_t x68 = INT8_MIN;
	int32_t t16 = -29245;

	t16 = ((x65&x66)<=(x67|x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	int64_t x70 = -1LL;
	int32_t x71 = 33;
	uint64_t x72 = 507129174330LLU;

	t17 = ((x69&x70)<=(x71|x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MIN;
	uint16_t x75 = 1U;
	volatile uint32_t x76 = UINT32_MAX;
	int32_t t18 = 1;

	t18 = ((x73&x74)<=(x75|x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x77 = UINT16_MAX;
	static int32_t x78 = INT32_MAX;
	int32_t x79 = INT32_MIN;
	int32_t x80 = -1;
	volatile int32_t t19 = -264315;

	t19 = ((x77&x78)<=(x79|x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x81 = UINT64_MAX;
	volatile int32_t x82 = INT32_MIN;
	int16_t x83 = INT16_MAX;
	int64_t x84 = -1LL;
	static volatile int32_t t20 = -697;

	t20 = ((x81&x82)<=(x83|x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x85 = 356;
	int8_t x86 = 5;
	volatile int64_t x87 = -317363893LL;
	static int32_t x88 = -1;
	volatile int32_t t21 = 395;

	t21 = ((x85&x86)<=(x87|x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = 1009382637927014LL;
	uint32_t x90 = 2572U;
	volatile int32_t x91 = INT32_MAX;
	int64_t x92 = INT64_MAX;
	int32_t t22 = -96;

	t22 = ((x89&x90)<=(x91|x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	static int16_t x95 = 1655;
	int32_t x96 = INT32_MIN;
	static volatile int32_t t23 = -218493792;

	t23 = ((x93&x94)<=(x95|x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MAX;
	int8_t x98 = INT8_MIN;
	static volatile int8_t x100 = -28;
	int32_t t24 = -5;

	t24 = ((x97&x98)<=(x99|x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x101 = INT16_MIN;
	uint16_t x102 = 2846U;
	static uint64_t x103 = 1764606010754949LLU;
	int32_t x104 = INT32_MIN;
	int32_t t25 = -163;

	t25 = ((x101&x102)<=(x103|x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = UINT8_MAX;
	static uint16_t x106 = 564U;
	int32_t x107 = 508421635;
	int32_t x108 = INT32_MIN;

	t26 = ((x105&x106)<=(x107|x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x109 = 569834313;
	static int16_t x111 = -21;
	static volatile int32_t t27 = -119;

	t27 = ((x109&x110)<=(x111|x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x113 = 10706U;
	uint16_t x114 = 7350U;
	volatile int8_t x115 = -3;
	int64_t x116 = INT64_MIN;
	int32_t t28 = 14120;

	t28 = ((x113&x114)<=(x115|x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x117 = 3200U;
	static uint32_t x118 = 1845356610U;
	int32_t x119 = INT32_MIN;
	uint64_t x120 = 184467874LLU;
	volatile int32_t t29 = 121954203;

	t29 = ((x117&x118)<=(x119|x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x121 = 5864U;
	int8_t x122 = -1;
	static volatile int16_t x123 = INT16_MIN;
	static volatile int32_t t30 = 10210;

	t30 = ((x121&x122)<=(x123|x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = -125134845384LL;
	int16_t x126 = -1;
	volatile uint32_t x127 = 4256U;
	static volatile int32_t t31 = -261568090;

	t31 = ((x125&x126)<=(x127|x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MAX;
	int16_t x130 = -1;
	int32_t x131 = -1;
	int32_t x132 = -1;

	t32 = ((x129&x130)<=(x131|x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MAX;
	int16_t x134 = -1290;
	int64_t x135 = INT64_MAX;
	volatile int32_t t33 = 46;

	t33 = ((x133&x134)<=(x135|x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = UINT16_MAX;
	volatile int16_t x138 = -33;
	uint8_t x140 = 102U;
	volatile int32_t t34 = 1909;

	t34 = ((x137&x138)<=(x139|x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = 123182U;
	volatile int32_t x142 = INT32_MIN;
	static int8_t x143 = 16;
	int32_t t35 = 4393167;

	t35 = ((x141&x142)<=(x143|x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = INT8_MIN;
	static int32_t x146 = 70;
	static int8_t x147 = INT8_MAX;
	uint8_t x148 = 0U;
	int32_t t36 = 0;

	t36 = ((x145&x146)<=(x147|x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x149 = UINT64_MAX;
	static uint8_t x150 = 23U;
	int16_t x151 = 4;
	volatile uint8_t x152 = 0U;
	volatile int32_t t37 = -17706;

	t37 = ((x149&x150)<=(x151|x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x153 = 20855LL;
	static volatile int8_t x154 = -5;
	int32_t x155 = INT32_MIN;
	uint8_t x156 = 14U;
	static volatile int32_t t38 = 66152422;

	t38 = ((x153&x154)<=(x155|x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MAX;
	volatile uint16_t x158 = 250U;
	int8_t x159 = INT8_MIN;
	int64_t x160 = -1LL;
	volatile int32_t t39 = -3655987;

	t39 = ((x157&x158)<=(x159|x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x162 = -1LL;
	static int32_t x163 = INT32_MIN;
	volatile int8_t x164 = INT8_MAX;
	volatile int32_t t40 = 4;

	t40 = ((x161&x162)<=(x163|x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int8_t x165 = 3;
	uint32_t x166 = 235844U;
	volatile int64_t x167 = INT64_MIN;
	int32_t x168 = INT32_MIN;

	t41 = ((x165&x166)<=(x167|x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = -2;
	int64_t x170 = 24865688611608780LL;
	volatile int32_t x171 = INT32_MIN;
	static uint64_t x172 = 8588060196105LLU;
	int32_t t42 = -195041031;

	t42 = ((x169&x170)<=(x171|x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x174 = INT8_MAX;
	volatile int16_t x176 = INT16_MIN;
	volatile int32_t t43 = 1036;

	t43 = ((x173&x174)<=(x175|x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x177 = INT8_MIN;
	static int16_t x178 = INT16_MIN;
	int8_t x180 = -1;
	volatile int32_t t44 = -8200404;

	t44 = ((x177&x178)<=(x179|x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = INT16_MAX;
	uint16_t x183 = 22U;
	uint8_t x184 = 11U;

	t45 = ((x181&x182)<=(x183|x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x185 = 932659LLU;
	static int32_t x186 = 410396477;
	int64_t x187 = 1875280648781908632LL;
	int16_t x188 = 25;
	int32_t t46 = -434;

	t46 = ((x185&x186)<=(x187|x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MIN;
	int64_t x190 = -1LL;
	uint32_t x192 = 1298612U;
	volatile int32_t t47 = 186856;

	t47 = ((x189&x190)<=(x191|x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x194 = 48517615U;
	int16_t x196 = 0;
	static volatile int32_t t48 = 330121629;

	t48 = ((x193&x194)<=(x195|x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x197 = INT16_MIN;
	int64_t x198 = INT64_MIN;
	int64_t x199 = INT64_MIN;
	uint16_t x200 = UINT16_MAX;
	int32_t t49 = -704786014;

	t49 = ((x197&x198)<=(x199|x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x203 = INT64_MAX;
	uint8_t x204 = 45U;
	int32_t t50 = -54;

	t50 = ((x201&x202)<=(x203|x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x206 = -26;
	uint16_t x207 = 56U;
	volatile int32_t t51 = -17644;

	t51 = ((x205&x206)<=(x207|x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x210 = -1LL;
	int64_t x211 = -56275587672LL;
	static int32_t x212 = INT32_MIN;
	volatile int32_t t52 = 67429;

	t52 = ((x209&x210)<=(x211|x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = INT64_MIN;
	volatile int64_t x214 = -127LL;
	uint32_t x215 = 4002484U;
	volatile uint64_t x216 = 602691641501402LLU;

	t53 = ((x213&x214)<=(x215|x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int32_t x217 = -1;
	int8_t x218 = INT8_MAX;
	static uint64_t x219 = 6189960LLU;
	volatile int32_t x220 = -1;
	int32_t t54 = -21301;

	t54 = ((x217&x218)<=(x219|x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = 4030928;
	int16_t x222 = INT16_MIN;
	int16_t x223 = INT16_MIN;
	static int8_t x224 = 3;
	volatile int32_t t55 = 27;

	t55 = ((x221&x222)<=(x223|x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x225 = -153LL;
	uint32_t x226 = UINT32_MAX;
	uint16_t x227 = 146U;
	int16_t x228 = -1;
	volatile int32_t t56 = 451618;

	t56 = ((x225&x226)<=(x227|x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x229 = 0;
	static int32_t x230 = -1;
	volatile int64_t x231 = 108947470499964857LL;
	int8_t x232 = INT8_MIN;

	t57 = ((x229&x230)<=(x231|x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x234 = 67145621;
	static volatile int8_t x235 = INT8_MAX;
	static int8_t x236 = -7;
	volatile int32_t t58 = -144;

	t58 = ((x233&x234)<=(x235|x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x238 = INT32_MIN;
	int16_t x239 = -4995;
	int32_t x240 = INT32_MIN;
	volatile int32_t t59 = -106401240;

	t59 = ((x237&x238)<=(x239|x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x241 = 15U;
	int64_t x242 = INT64_MIN;
	int16_t x243 = INT16_MIN;

	t60 = ((x241&x242)<=(x243|x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = INT16_MAX;
	int32_t t61 = -811377;

	t61 = ((x245&x246)<=(x247|x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x250 = 4;
	int8_t x251 = -1;
	static int8_t x252 = -1;

	t62 = ((x249&x250)<=(x251|x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x256 = -58;
	static volatile int32_t t63 = -31970824;

	t63 = ((x253&x254)<=(x255|x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = 23369160;
	uint16_t x258 = 3U;
	volatile int32_t t64 = -1394;

	t64 = ((x257&x258)<=(x259|x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x261 = 3U;
	uint64_t x262 = 290464637399468LLU;
	static int64_t x263 = 1001857056447610LL;
	uint8_t x264 = 1U;
	int32_t t65 = -7173;

	t65 = ((x261&x262)<=(x263|x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x266 = -1;
	int64_t x267 = INT64_MIN;
	int64_t x268 = INT64_MIN;

	t66 = ((x265&x266)<=(x267|x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x269 = 70U;
	int64_t x270 = -1031075187LL;
	int32_t x271 = 1;
	int32_t t67 = -2350513;

	t67 = ((x269&x270)<=(x271|x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x274 = 264;
	volatile int32_t x275 = INT32_MIN;
	int8_t x276 = INT8_MAX;
	volatile int32_t t68 = 3386;

	t68 = ((x273&x274)<=(x275|x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint8_t x277 = UINT8_MAX;
	uint32_t x279 = 2U;
	static uint16_t x280 = UINT16_MAX;
	volatile int32_t t69 = 24;

	t69 = ((x277&x278)<=(x279|x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = INT8_MIN;
	uint8_t x282 = UINT8_MAX;
	volatile int16_t x283 = INT16_MIN;
	static uint16_t x284 = 13U;

	t70 = ((x281&x282)<=(x283|x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = INT32_MAX;
	static int32_t x286 = INT32_MIN;
	int16_t x287 = -1;
	int16_t x288 = INT16_MIN;

	t71 = ((x285&x286)<=(x287|x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = INT32_MAX;
	int32_t x290 = -1;
	int16_t x291 = INT16_MIN;

	t72 = ((x289&x290)<=(x291|x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x293 = INT32_MIN;
	int16_t x295 = -2497;
	uint32_t x296 = 14232714U;
	static volatile int32_t t73 = 46;

	t73 = ((x293&x294)<=(x295|x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x298 = INT32_MAX;
	int32_t x299 = INT32_MAX;
	uint8_t x300 = 0U;
	volatile int32_t t74 = 270856994;

	t74 = ((x297&x298)<=(x299|x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x302 = -5;
	uint8_t x303 = 15U;
	volatile int64_t x304 = -1LL;
	int32_t t75 = -1242153;

	t75 = ((x301&x302)<=(x303|x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x305 = 7581737U;
	uint64_t x306 = 442316921532543484LLU;
	int32_t x307 = INT32_MIN;
	int32_t x308 = INT32_MIN;
	static int32_t t76 = -929;

	t76 = ((x305&x306)<=(x307|x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = INT16_MAX;
	volatile uint32_t x312 = UINT32_MAX;
	volatile int32_t t77 = 351240055;

	t77 = ((x309&x310)<=(x311|x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = 27399U;
	int64_t x314 = INT64_MIN;
	int16_t x315 = INT16_MAX;
	int32_t t78 = 38925684;

	t78 = ((x313&x314)<=(x315|x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x317 = -1;
	static int8_t x318 = INT8_MAX;
	int8_t x319 = INT8_MIN;
	int8_t x320 = -6;

	t79 = ((x317&x318)<=(x319|x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x322 = -1;
	int16_t x323 = -1;
	int32_t x324 = INT32_MIN;
	volatile int32_t t80 = 189691165;

	t80 = ((x321&x322)<=(x323|x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x325 = UINT16_MAX;
	volatile uint16_t x326 = 26131U;
	int16_t x327 = -1;
	uint16_t x328 = UINT16_MAX;
	int32_t t81 = 13113;

	t81 = ((x325&x326)<=(x327|x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = INT32_MIN;
	uint32_t x330 = UINT32_MAX;
	static uint16_t x331 = 15U;
	static volatile int32_t t82 = -24945;

	t82 = ((x329&x330)<=(x331|x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x334 = 6450U;
	int32_t x335 = -1;
	static int64_t x336 = 460LL;
	int32_t t83 = 0;

	t83 = ((x333&x334)<=(x335|x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x337 = INT32_MIN;
	int16_t x338 = 2007;
	int8_t x339 = INT8_MAX;
	volatile int64_t x340 = INT64_MIN;
	volatile int32_t t84 = 102;

	t84 = ((x337&x338)<=(x339|x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x341 = -1;
	int32_t x342 = 0;
	volatile uint8_t x343 = UINT8_MAX;
	int64_t x344 = -606LL;
	int32_t t85 = 846487;

	t85 = ((x341&x342)<=(x343|x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x345 = 1U;
	uint16_t x347 = UINT16_MAX;
	static volatile int32_t t86 = 36634;

	t86 = ((x345&x346)<=(x347|x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x349 = -1;
	int8_t x350 = INT8_MIN;
	int16_t x352 = -38;

	t87 = ((x349&x350)<=(x351|x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = INT64_MIN;

	t88 = ((x353&x354)<=(x355|x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x357 = UINT32_MAX;
	volatile int32_t x358 = INT32_MIN;
	static volatile int8_t x359 = INT8_MIN;
	uint64_t x360 = UINT64_MAX;
	volatile int32_t t89 = -1209;

	t89 = ((x357&x358)<=(x359|x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = -121535LL;
	static int16_t x362 = INT16_MIN;
	int64_t x363 = INT64_MAX;
	int8_t x364 = -1;
	int32_t t90 = -681;

	t90 = ((x361&x362)<=(x363|x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x365 = INT16_MIN;
	uint32_t x366 = UINT32_MAX;
	static volatile int64_t x367 = 2LL;
	static int16_t x368 = INT16_MIN;

	t91 = ((x365&x366)<=(x367|x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x369 = 1U;
	uint8_t x370 = UINT8_MAX;
	volatile uint8_t x371 = 81U;
	volatile int8_t x372 = -1;
	volatile int32_t t92 = 32176453;

	t92 = ((x369&x370)<=(x371|x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x373 = UINT8_MAX;
	int8_t x374 = INT8_MAX;
	int16_t x375 = 270;
	uint8_t x376 = UINT8_MAX;
	static volatile int32_t t93 = -60;

	t93 = ((x373&x374)<=(x375|x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = 17;
	int8_t x378 = INT8_MIN;
	int32_t x380 = 9;

	t94 = ((x377&x378)<=(x379|x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = INT32_MIN;
	int8_t x382 = -1;
	uint16_t x383 = 1U;
	int64_t x384 = INT64_MIN;
	int32_t t95 = -208;

	t95 = ((x381&x382)<=(x383|x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x385 = 28U;
	volatile uint16_t x386 = 24U;
	int32_t x387 = -1;
	volatile int32_t t96 = 774;

	t96 = ((x385&x386)<=(x387|x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x389 = -148;
	volatile uint64_t x390 = 4421LLU;
	volatile int32_t x391 = INT32_MAX;
	static int64_t x392 = -13879390001359136LL;
	int32_t t97 = -703536;

	t97 = ((x389&x390)<=(x391|x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x393 = UINT32_MAX;
	static int64_t x394 = INT64_MIN;
	volatile uint64_t x395 = 7820010536102LLU;
	uint8_t x396 = 86U;
	int32_t t98 = 13033;

	t98 = ((x393&x394)<=(x395|x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x397 = UINT64_MAX;
	uint32_t x398 = UINT32_MAX;
	int64_t x399 = INT64_MIN;
	uint32_t x400 = UINT32_MAX;
	static int32_t t99 = 1;

	t99 = ((x397&x398)<=(x399|x400));

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

