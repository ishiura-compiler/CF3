#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x1 = 232646U;
int64_t x13 = -1LL;
volatile int32_t t4 = 1;
volatile int32_t x24 = -1;
uint16_t x31 = 9265U;
static int32_t x36 = INT32_MAX;
static int16_t x37 = INT16_MIN;
static int16_t x46 = INT16_MIN;
int8_t x58 = -1;
volatile int8_t x64 = INT8_MAX;
static uint8_t x67 = 13U;
volatile int32_t t16 = -444;
int32_t x75 = INT32_MIN;
volatile int32_t t20 = 159180;
static int32_t t21 = -22445;
uint16_t x92 = UINT16_MAX;
int32_t x94 = INT32_MAX;
volatile int8_t x95 = INT8_MIN;
int16_t x105 = INT16_MIN;
volatile int32_t t26 = 5;
volatile uint64_t x110 = 73024276LLU;
static uint16_t x114 = 1937U;
uint32_t x124 = 27036U;
volatile int16_t x125 = INT16_MIN;
uint8_t x136 = UINT8_MAX;
int64_t x139 = INT64_MIN;
int16_t x145 = INT16_MIN;
uint8_t x146 = 5U;
uint8_t x153 = 107U;
static int32_t t40 = 19;
uint16_t x172 = 31U;
static int32_t x181 = 22;
uint8_t x182 = 12U;
volatile int8_t x184 = -1;
int8_t x185 = INT8_MIN;
int16_t x190 = INT16_MAX;
uint32_t x191 = 239025474U;
int32_t t47 = 2135;
static uint8_t x210 = 82U;
static int32_t t52 = 924;
uint8_t x214 = 1U;
volatile uint64_t x217 = UINT64_MAX;
volatile int32_t t56 = 73853;
int64_t x232 = INT64_MIN;
volatile int32_t t57 = -4337449;
int32_t x238 = INT32_MAX;
uint16_t x239 = 0U;
volatile int16_t x240 = -1;
static int32_t x242 = -12972162;
volatile int32_t t60 = -16234166;
uint8_t x246 = 5U;
volatile uint64_t x248 = 608594851069308LLU;
int64_t x254 = INT64_MIN;
static int32_t t63 = 12962;
int32_t t64 = 832;
static int32_t x267 = INT32_MIN;
volatile uint8_t x272 = 14U;
int8_t x277 = -1;
int8_t x278 = INT8_MAX;
int64_t x283 = -1LL;
uint64_t x286 = 7205582464337063547LLU;
int32_t x295 = 4808;
volatile int8_t x296 = INT8_MIN;
static uint8_t x297 = UINT8_MAX;
uint64_t x300 = 526704251049230282LLU;
static int64_t x306 = INT64_MIN;
uint32_t x318 = UINT32_MAX;
int32_t t79 = 109;
static int64_t x324 = INT64_MAX;
static int64_t x326 = -1LL;
volatile int32_t t81 = -5070;
static volatile int32_t x330 = -1;
volatile int16_t x338 = INT16_MAX;
int64_t x340 = INT64_MIN;
int8_t x346 = -1;
static volatile int32_t t86 = -62225;
uint8_t x354 = UINT8_MAX;
volatile int32_t t88 = -143381561;
uint64_t x359 = UINT64_MAX;
int16_t x363 = INT16_MAX;
uint32_t x364 = UINT32_MAX;
static volatile int32_t t90 = 2125;
int16_t x366 = INT16_MIN;
uint32_t x376 = 369305U;
int8_t x385 = -1;
volatile int32_t t96 = -4349144;
uint32_t x391 = 5U;
static volatile int8_t x395 = 5;
int32_t x396 = -4;
int16_t x397 = 3102;
int16_t x400 = -3249;
volatile int32_t t99 = -27;


void f0(void) {
	uint8_t x2 = UINT8_MAX;
	int64_t x3 = INT64_MIN;
	volatile uint64_t x4 = 17466728439402LLU;
	int32_t t0 = -1026784;

	t0 = ((x1==x2)<(x3|x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	int32_t x6 = INT32_MAX;
	int32_t x7 = 16363;
	int16_t x8 = -14;
	static int32_t t1 = 3638;

	t1 = ((x5==x6)<(x7|x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = 11;
	static int64_t x10 = INT64_MAX;
	int64_t x11 = INT64_MIN;
	static int8_t x12 = INT8_MIN;
	volatile int32_t t2 = -12693753;

	t2 = ((x9==x10)<(x11|x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x14 = INT16_MIN;
	static int8_t x15 = INT8_MIN;
	int64_t x16 = -1LL;
	int32_t t3 = -310066;

	t3 = ((x13==x14)<(x15|x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -139803667589678767LL;
	volatile int32_t x18 = 618;
	int8_t x19 = INT8_MIN;
	uint64_t x20 = 6738765613618796537LLU;

	t4 = ((x17==x18)<(x19|x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = UINT64_MAX;
	uint8_t x22 = UINT8_MAX;
	static volatile int32_t x23 = 0;
	static int32_t t5 = 5061;

	t5 = ((x21==x22)<(x23|x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	int16_t x26 = 3021;
	static int32_t x27 = INT32_MIN;
	uint32_t x28 = UINT32_MAX;
	volatile int32_t t6 = 0;

	t6 = ((x25==x26)<(x27|x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	int64_t x30 = 471590352230366LL;
	static int8_t x32 = -35;
	int32_t t7 = 8307366;

	t7 = ((x29==x30)<(x31|x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 222U;
	static int8_t x34 = INT8_MIN;
	static int16_t x35 = 0;
	volatile int32_t t8 = -83888;

	t8 = ((x33==x34)<(x35|x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x38 = INT8_MAX;
	int64_t x39 = 59624824LL;
	static volatile int32_t x40 = INT32_MAX;
	volatile int32_t t9 = -658;

	t9 = ((x37==x38)<(x39|x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = UINT64_MAX;
	int64_t x42 = -1LL;
	int16_t x43 = INT16_MIN;
	int8_t x44 = -1;
	int32_t t10 = 74;

	t10 = ((x41==x42)<(x43|x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -1;
	int8_t x47 = -1;
	int8_t x48 = INT8_MAX;
	volatile int32_t t11 = -1789;

	t11 = ((x45==x46)<(x47|x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 21U;
	static volatile int32_t x50 = INT32_MIN;
	uint8_t x51 = UINT8_MAX;
	int64_t x52 = -1LL;
	volatile int32_t t12 = 30367545;

	t12 = ((x49==x50)<(x51|x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x53 = INT32_MAX;
	uint8_t x54 = 39U;
	static int16_t x55 = INT16_MIN;
	uint32_t x56 = UINT32_MAX;
	int32_t t13 = 2007384;

	t13 = ((x53==x54)<(x55|x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 29658U;
	int32_t x59 = -13395077;
	int64_t x60 = INT64_MAX;
	int32_t t14 = 2363;

	t14 = ((x57==x58)<(x59|x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x61 = INT32_MIN;
	volatile int16_t x62 = INT16_MIN;
	int32_t x63 = INT32_MAX;
	int32_t t15 = 4310702;

	t15 = ((x61==x62)<(x63|x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = UINT8_MAX;
	int32_t x66 = INT32_MIN;
	int8_t x68 = 58;

	t16 = ((x65==x66)<(x67|x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x69 = -1LL;
	static uint32_t x70 = 27053436U;
	uint64_t x71 = 1106523LLU;
	int64_t x72 = -1LL;
	volatile int32_t t17 = -1;

	t17 = ((x69==x70)<(x71|x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = 8;
	int8_t x74 = INT8_MIN;
	uint8_t x76 = UINT8_MAX;
	volatile int32_t t18 = 119845666;

	t18 = ((x73==x74)<(x75|x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MIN;
	volatile uint16_t x78 = UINT16_MAX;
	static uint16_t x79 = UINT16_MAX;
	int32_t x80 = INT32_MIN;
	static volatile int32_t t19 = -422101;

	t19 = ((x77==x78)<(x79|x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MIN;
	static uint8_t x82 = 4U;
	static int32_t x83 = INT32_MIN;
	static uint32_t x84 = UINT32_MAX;

	t20 = ((x81==x82)<(x83|x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = 54;
	int64_t x86 = INT64_MIN;
	volatile int16_t x87 = INT16_MIN;
	int64_t x88 = INT64_MIN;

	t21 = ((x85==x86)<(x87|x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = 130U;
	uint32_t x90 = 166378U;
	static uint32_t x91 = UINT32_MAX;
	volatile int32_t t22 = -12;

	t22 = ((x89==x90)<(x91|x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MIN;
	uint16_t x96 = UINT16_MAX;
	volatile int32_t t23 = 1;

	t23 = ((x93==x94)<(x95|x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x97 = INT16_MIN;
	volatile int8_t x98 = INT8_MAX;
	static int16_t x99 = -1;
	int8_t x100 = -1;
	static volatile int32_t t24 = -76817773;

	t24 = ((x97==x98)<(x99|x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x101 = 56986584LLU;
	int64_t x102 = -122462638LL;
	int32_t x103 = INT32_MIN;
	static int64_t x104 = -1LL;
	int32_t t25 = -4493866;

	t25 = ((x101==x102)<(x103|x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x106 = UINT32_MAX;
	static uint32_t x107 = 1023U;
	int16_t x108 = INT16_MIN;

	t26 = ((x105==x106)<(x107|x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MAX;
	uint32_t x111 = 44625552U;
	volatile uint8_t x112 = UINT8_MAX;
	int32_t t27 = -1044902;

	t27 = ((x109==x110)<(x111|x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = 5U;
	static int64_t x115 = INT64_MAX;
	static uint8_t x116 = UINT8_MAX;
	volatile int32_t t28 = -118;

	t28 = ((x113==x114)<(x115|x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x117 = UINT16_MAX;
	static volatile int16_t x118 = INT16_MIN;
	static uint64_t x119 = 6207153945511065LLU;
	uint16_t x120 = 42U;
	int32_t t29 = 28;

	t29 = ((x117==x118)<(x119|x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = -395;
	uint8_t x122 = UINT8_MAX;
	int16_t x123 = -138;
	int32_t t30 = -3574;

	t30 = ((x121==x122)<(x123|x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x126 = 673U;
	int16_t x127 = 667;
	volatile uint64_t x128 = UINT64_MAX;
	int32_t t31 = -7;

	t31 = ((x125==x126)<(x127|x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x129 = -8LL;
	static int8_t x130 = -1;
	int8_t x131 = -1;
	volatile int32_t x132 = 28751;
	int32_t t32 = -88277;

	t32 = ((x129==x130)<(x131|x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = -235;
	int16_t x134 = -13380;
	static uint16_t x135 = 35U;
	static int32_t t33 = -189780;

	t33 = ((x133==x134)<(x135|x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x137 = INT64_MAX;
	static int8_t x138 = -1;
	int32_t x140 = INT32_MIN;
	volatile int32_t t34 = -26;

	t34 = ((x137==x138)<(x139|x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x141 = 25U;
	int32_t x142 = 8749501;
	int8_t x143 = -1;
	static uint64_t x144 = 1826399256918837313LLU;
	volatile int32_t t35 = -20971;

	t35 = ((x141==x142)<(x143|x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x147 = INT16_MIN;
	int32_t x148 = INT32_MIN;
	volatile int32_t t36 = 5;

	t36 = ((x145==x146)<(x147|x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int16_t x149 = INT16_MIN;
	static int64_t x150 = INT64_MAX;
	volatile int8_t x151 = INT8_MIN;
	static int8_t x152 = -1;
	volatile int32_t t37 = 0;

	t37 = ((x149==x150)<(x151|x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x154 = INT32_MAX;
	uint32_t x155 = 70896U;
	volatile int16_t x156 = INT16_MIN;
	static volatile int32_t t38 = 338;

	t38 = ((x153==x154)<(x155|x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MIN;
	uint64_t x158 = UINT64_MAX;
	int32_t x159 = -1;
	static uint16_t x160 = UINT16_MAX;
	int32_t t39 = 0;

	t39 = ((x157==x158)<(x159|x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint64_t x161 = UINT64_MAX;
	volatile int16_t x162 = INT16_MAX;
	int32_t x163 = -45;
	int32_t x164 = INT32_MIN;

	t40 = ((x161==x162)<(x163|x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x165 = UINT64_MAX;
	int32_t x166 = 130219;
	static volatile uint8_t x167 = 58U;
	volatile uint64_t x168 = 137017291890818225LLU;
	int32_t t41 = 22211023;

	t41 = ((x165==x166)<(x167|x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = -1LL;
	volatile int32_t x170 = INT32_MAX;
	int64_t x171 = INT64_MIN;
	static int32_t t42 = -9322;

	t42 = ((x169==x170)<(x171|x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x173 = INT16_MAX;
	uint8_t x174 = 18U;
	uint32_t x175 = 6227520U;
	int16_t x176 = 1;
	volatile int32_t t43 = 328978;

	t43 = ((x173==x174)<(x175|x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x177 = -370;
	int32_t x178 = INT32_MIN;
	volatile int32_t x179 = INT32_MIN;
	int8_t x180 = INT8_MIN;
	int32_t t44 = 1360;

	t44 = ((x177==x178)<(x179|x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x183 = -35;
	volatile int32_t t45 = 656;

	t45 = ((x181==x182)<(x183|x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x186 = -38683479107LL;
	int32_t x187 = INT32_MIN;
	int64_t x188 = -1LL;
	int32_t t46 = 2897;

	t46 = ((x185==x186)<(x187|x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int16_t x189 = INT16_MAX;
	volatile int8_t x192 = INT8_MIN;

	t47 = ((x189==x190)<(x191|x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x193 = -1;
	uint32_t x194 = UINT32_MAX;
	volatile int8_t x195 = -22;
	volatile int64_t x196 = INT64_MAX;
	static volatile int32_t t48 = 261;

	t48 = ((x193==x194)<(x195|x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x197 = INT8_MAX;
	int8_t x198 = INT8_MAX;
	int8_t x199 = INT8_MIN;
	int8_t x200 = INT8_MIN;
	volatile int32_t t49 = -6714;

	t49 = ((x197==x198)<(x199|x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x201 = 187U;
	uint32_t x202 = 2081230384U;
	int16_t x203 = INT16_MIN;
	uint32_t x204 = 810025797U;
	int32_t t50 = -46;

	t50 = ((x201==x202)<(x203|x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = -1LL;
	uint16_t x206 = 2U;
	uint32_t x207 = 3U;
	volatile int32_t x208 = -12138187;
	volatile int32_t t51 = -81;

	t51 = ((x205==x206)<(x207|x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x209 = INT8_MIN;
	uint8_t x211 = 6U;
	uint16_t x212 = 27U;

	t52 = ((x209==x210)<(x211|x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MIN;
	uint32_t x215 = 2626351U;
	uint16_t x216 = 857U;
	volatile int32_t t53 = -122289388;

	t53 = ((x213==x214)<(x215|x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x218 = 12572734051007LLU;
	int64_t x219 = INT64_MIN;
	int64_t x220 = INT64_MIN;
	int32_t t54 = -3379;

	t54 = ((x217==x218)<(x219|x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x221 = -1;
	uint8_t x222 = 50U;
	uint16_t x223 = 8058U;
	int16_t x224 = -1;
	static volatile int32_t t55 = 40889972;

	t55 = ((x221==x222)<(x223|x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x225 = INT8_MAX;
	static uint64_t x226 = 311259621040LLU;
	volatile uint32_t x227 = UINT32_MAX;
	volatile int64_t x228 = -1LL;

	t56 = ((x225==x226)<(x227|x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = 1;
	int8_t x230 = INT8_MIN;
	int16_t x231 = 121;

	t57 = ((x229==x230)<(x231|x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x233 = 1526;
	int16_t x234 = -1;
	uint8_t x235 = UINT8_MAX;
	uint64_t x236 = UINT64_MAX;
	volatile int32_t t58 = 49239;

	t58 = ((x233==x234)<(x235|x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = -34;
	static int32_t t59 = -5134;

	t59 = ((x237==x238)<(x239|x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = INT64_MIN;
	int8_t x243 = INT8_MIN;
	uint16_t x244 = 117U;

	t60 = ((x241==x242)<(x243|x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = 31U;
	int8_t x247 = -61;
	int32_t t61 = -53;

	t61 = ((x245==x246)<(x247|x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = INT16_MAX;
	static int32_t x250 = 328308287;
	uint64_t x251 = 696350802344707360LLU;
	static uint64_t x252 = UINT64_MAX;
	int32_t t62 = 0;

	t62 = ((x249==x250)<(x251|x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x253 = 124U;
	static int32_t x255 = INT32_MIN;
	int64_t x256 = INT64_MIN;

	t63 = ((x253==x254)<(x255|x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x257 = 4LLU;
	volatile int32_t x258 = -1;
	int32_t x259 = INT32_MAX;
	int64_t x260 = -1LL;

	t64 = ((x257==x258)<(x259|x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x261 = -104406791525522LL;
	int32_t x262 = INT32_MIN;
	volatile uint8_t x263 = UINT8_MAX;
	int16_t x264 = -1;
	volatile int32_t t65 = 2;

	t65 = ((x261==x262)<(x263|x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x265 = UINT8_MAX;
	uint16_t x266 = 32730U;
	volatile int32_t x268 = -1;
	int32_t t66 = 170366;

	t66 = ((x265==x266)<(x267|x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x269 = 14U;
	int64_t x270 = INT64_MIN;
	int64_t x271 = -3048LL;
	volatile int32_t t67 = -42297210;

	t67 = ((x269==x270)<(x271|x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = -1;
	volatile uint32_t x274 = 12171U;
	uint64_t x275 = 198535385091LLU;
	static uint8_t x276 = UINT8_MAX;
	volatile int32_t t68 = 375674;

	t68 = ((x273==x274)<(x275|x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x279 = -1;
	static int16_t x280 = -77;
	int32_t t69 = 172887582;

	t69 = ((x277==x278)<(x279|x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x281 = INT32_MAX;
	volatile uint8_t x282 = 1U;
	uint64_t x284 = 81905672736LLU;
	volatile int32_t t70 = 11484589;

	t70 = ((x281==x282)<(x283|x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = -34;
	volatile int64_t x287 = -123491LL;
	int32_t x288 = 1317062;
	int32_t t71 = -11;

	t71 = ((x285==x286)<(x287|x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x289 = UINT64_MAX;
	uint8_t x290 = 3U;
	static int32_t x291 = -11687034;
	static int8_t x292 = 0;
	int32_t t72 = 7035807;

	t72 = ((x289==x290)<(x291|x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = 249LL;
	int16_t x294 = -1;
	volatile int32_t t73 = 4089;

	t73 = ((x293==x294)<(x295|x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x298 = INT16_MIN;
	uint64_t x299 = 8981152467LLU;
	volatile int32_t t74 = 899853194;

	t74 = ((x297==x298)<(x299|x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x301 = 21U;
	int64_t x302 = 1861506178222685LL;
	int16_t x303 = INT16_MIN;
	int64_t x304 = INT64_MIN;
	volatile int32_t t75 = 119;

	t75 = ((x301==x302)<(x303|x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x305 = -65;
	static volatile uint64_t x307 = 3409309629499075LLU;
	static int16_t x308 = INT16_MIN;
	static int32_t t76 = -58;

	t76 = ((x305==x306)<(x307|x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x309 = 15LLU;
	uint16_t x310 = 30387U;
	int8_t x311 = -1;
	static uint8_t x312 = UINT8_MAX;
	int32_t t77 = -11;

	t77 = ((x309==x310)<(x311|x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = INT32_MAX;
	int16_t x314 = INT16_MIN;
	int8_t x315 = INT8_MIN;
	static int64_t x316 = -1LL;
	int32_t t78 = 11;

	t78 = ((x313==x314)<(x315|x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x317 = INT16_MIN;
	int8_t x319 = 1;
	uint64_t x320 = 444LLU;

	t79 = ((x317==x318)<(x319|x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = INT64_MAX;
	volatile uint16_t x322 = 0U;
	int64_t x323 = -1LL;
	int32_t t80 = 1978057;

	t80 = ((x321==x322)<(x323|x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x325 = 42U;
	volatile uint8_t x327 = 4U;
	int16_t x328 = -4;

	t81 = ((x325==x326)<(x327|x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x329 = 3U;
	int64_t x331 = INT64_MIN;
	int16_t x332 = INT16_MIN;
	volatile int32_t t82 = 162192;

	t82 = ((x329==x330)<(x331|x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x333 = -28;
	volatile int8_t x334 = INT8_MIN;
	volatile uint8_t x335 = 93U;
	int8_t x336 = -2;
	int32_t t83 = -2193879;

	t83 = ((x333==x334)<(x335|x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x337 = INT64_MIN;
	uint16_t x339 = UINT16_MAX;
	volatile int32_t t84 = 60789;

	t84 = ((x337==x338)<(x339|x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x341 = 51U;
	uint64_t x342 = 105586712LLU;
	int64_t x343 = -12808204383671904LL;
	volatile uint32_t x344 = 88943U;
	volatile int32_t t85 = -30707644;

	t85 = ((x341==x342)<(x343|x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = INT32_MIN;
	volatile uint32_t x347 = UINT32_MAX;
	volatile int64_t x348 = -1LL;

	t86 = ((x345==x346)<(x347|x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x349 = 25021445;
	int64_t x350 = -1LL;
	uint16_t x351 = 159U;
	uint16_t x352 = UINT16_MAX;
	static int32_t t87 = 12;

	t87 = ((x349==x350)<(x351|x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x353 = INT16_MIN;
	volatile uint8_t x355 = 3U;
	volatile int8_t x356 = 8;

	t88 = ((x353==x354)<(x355|x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x357 = 509318012LLU;
	static int64_t x358 = 818651LL;
	int16_t x360 = INT16_MIN;
	int32_t t89 = -1002424711;

	t89 = ((x357==x358)<(x359|x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = INT32_MAX;
	uint8_t x362 = 29U;

	t90 = ((x361==x362)<(x363|x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x365 = -1LL;
	int64_t x367 = -1LL;
	uint64_t x368 = 459919LLU;
	volatile int32_t t91 = -753;

	t91 = ((x365==x366)<(x367|x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = -1;
	uint64_t x370 = UINT64_MAX;
	static uint16_t x371 = UINT16_MAX;
	uint16_t x372 = 60U;
	static int32_t t92 = -571703650;

	t92 = ((x369==x370)<(x371|x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint8_t x373 = 36U;
	volatile uint16_t x374 = 4U;
	uint32_t x375 = 5724U;
	int32_t t93 = -292483;

	t93 = ((x373==x374)<(x375|x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int16_t x377 = INT16_MAX;
	static uint32_t x378 = UINT32_MAX;
	int8_t x379 = INT8_MIN;
	uint16_t x380 = 1U;
	static int32_t t94 = -206433;

	t94 = ((x377==x378)<(x379|x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = INT64_MIN;
	static uint32_t x382 = 273348U;
	int8_t x383 = INT8_MAX;
	static int32_t x384 = INT32_MIN;
	volatile int32_t t95 = -25446;

	t95 = ((x381==x382)<(x383|x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x386 = -1;
	int32_t x387 = INT32_MAX;
	int32_t x388 = -1;

	t96 = ((x385==x386)<(x387|x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = INT32_MIN;
	int32_t x390 = INT32_MAX;
	static volatile uint16_t x392 = 1337U;
	volatile int32_t t97 = 424808;

	t97 = ((x389==x390)<(x391|x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = 0;
	int64_t x394 = INT64_MAX;
	volatile int32_t t98 = 6;

	t98 = ((x393==x394)<(x395|x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x398 = -183LL;
	int64_t x399 = INT64_MAX;

	t99 = ((x397==x398)<(x399|x400));

	if (t99 != 0) { NG(); } else { ; }
	
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

