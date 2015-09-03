#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = INT8_MIN;
int8_t x4 = INT8_MIN;
int8_t x15 = -7;
uint64_t x29 = 7480053736146856470LLU;
uint32_t x31 = 377U;
int32_t x34 = -38400;
int64_t x36 = INT64_MIN;
uint16_t x39 = 24166U;
static volatile int64_t x43 = -312175493138LL;
int32_t t11 = -10;
volatile uint32_t x51 = 342U;
uint32_t x53 = 12U;
int64_t x61 = INT64_MAX;
uint64_t x67 = UINT64_MAX;
int32_t t16 = -1;
int32_t x76 = -127680;
int32_t x78 = INT32_MAX;
int32_t x93 = 13855;
uint32_t x97 = 23387U;
volatile uint8_t x98 = UINT8_MAX;
int64_t x100 = INT64_MIN;
int16_t x110 = -210;
uint32_t x112 = 671103845U;
static int8_t x121 = INT8_MIN;
int16_t x122 = -1;
static uint64_t x125 = 68977047459478799LLU;
uint16_t x129 = 104U;
uint8_t x130 = 1U;
int32_t x133 = 307926;
int32_t x136 = -54456;
uint64_t x142 = 9194826903311665368LLU;
int16_t x143 = -1;
int64_t x145 = -1LL;
uint64_t x146 = UINT64_MAX;
volatile uint64_t x149 = 3118600768098LLU;
volatile uint16_t x150 = UINT16_MAX;
volatile int8_t x153 = -1;
static int16_t x163 = INT16_MIN;
static volatile int32_t t40 = -2180650;
int32_t t41 = 11547;
int64_t x171 = INT64_MIN;
volatile int64_t x172 = 2LL;
volatile int32_t t42 = 0;
static volatile int32_t x173 = INT32_MIN;
int16_t x181 = INT16_MIN;
int8_t x183 = -2;
uint64_t x186 = 235674121746719500LLU;
uint16_t x192 = 1U;
static uint64_t x200 = 479978LLU;
int16_t x201 = INT16_MIN;
int16_t x202 = INT16_MAX;
static int64_t x204 = INT64_MIN;
int16_t x206 = INT16_MAX;
static int32_t x207 = 87327520;
volatile int64_t x216 = INT64_MIN;
int64_t x220 = -1LL;
int16_t x228 = INT16_MAX;
volatile int16_t x234 = -5;
int16_t x236 = INT16_MIN;
int8_t x238 = INT8_MAX;
uint32_t x239 = 56U;
volatile int32_t x240 = -1;
uint32_t x255 = 118U;
uint32_t x258 = UINT32_MAX;
static int16_t x259 = -1;
volatile uint16_t x261 = 1420U;
uint8_t x262 = 30U;
volatile int32_t x266 = INT32_MIN;
int64_t x276 = 4315LL;
uint32_t x281 = 4650662U;
int16_t x282 = 325;
int64_t x285 = 1748145427650924LL;
volatile int16_t x286 = INT16_MIN;
int32_t t73 = 32669505;
volatile int32_t t74 = -800898;
static int64_t x304 = INT64_MIN;
static volatile int32_t t76 = -15;
int32_t x312 = INT32_MIN;
static int8_t x317 = INT8_MAX;
volatile uint8_t x320 = 0U;
static uint32_t x322 = 5U;
uint64_t x325 = 422802LLU;
int64_t x326 = INT64_MAX;
int64_t x332 = 56817305642439LL;
volatile uint64_t x335 = 245529593LLU;
static volatile int32_t t83 = 13;
uint8_t x337 = UINT8_MAX;
volatile int32_t x339 = 95761598;
int64_t x345 = 21LL;
volatile int32_t t86 = -823303830;
int32_t x349 = -246;
uint16_t x351 = 1434U;
volatile int32_t t87 = -76825;
volatile int8_t x353 = 1;
int64_t x355 = INT64_MAX;
volatile uint8_t x363 = 1U;
int8_t x366 = INT8_MIN;
uint32_t x370 = 129569965U;
static int32_t x374 = -1;
static uint32_t x376 = UINT32_MAX;
static int32_t t93 = 2;
int32_t x378 = INT32_MIN;
int8_t x386 = INT8_MIN;
int64_t x387 = -486662077252629071LL;
int8_t x391 = -15;
int8_t x397 = -1;


void f0(void) {
	static int32_t x1 = INT32_MIN;
	volatile uint32_t x3 = 14429U;
	volatile int32_t t0 = -6451;

	t0 = ((x1==x2)<=(x3<=x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = 1;
	int64_t x6 = -1LL;
	volatile int32_t x7 = INT32_MAX;
	uint32_t x8 = UINT32_MAX;
	volatile int32_t t1 = -15909;

	t1 = ((x5==x6)<=(x7<=x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = 14789896599LL;
	volatile uint8_t x10 = 6U;
	static int32_t x11 = INT32_MIN;
	static uint16_t x12 = 178U;
	static volatile int32_t t2 = 28;

	t2 = ((x9==x10)<=(x11<=x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x13 = -103894;
	int8_t x14 = INT8_MAX;
	volatile uint64_t x16 = UINT64_MAX;
	int32_t t3 = -1000078167;

	t3 = ((x13==x14)<=(x15<=x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1;
	uint64_t x18 = 10384LLU;
	int64_t x19 = -1LL;
	uint8_t x20 = 5U;
	volatile int32_t t4 = -13736;

	t4 = ((x17==x18)<=(x19<=x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = 0;
	int16_t x22 = INT16_MIN;
	uint16_t x23 = UINT16_MAX;
	int16_t x24 = INT16_MIN;
	volatile int32_t t5 = -568312;

	t5 = ((x21==x22)<=(x23<=x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x25 = -8;
	uint64_t x26 = UINT64_MAX;
	uint8_t x27 = 38U;
	volatile int64_t x28 = INT64_MIN;
	volatile int32_t t6 = 35;

	t6 = ((x25==x26)<=(x27<=x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int32_t x30 = 4;
	int64_t x32 = 282881761135505993LL;
	volatile int32_t t7 = 156446;

	t7 = ((x29==x30)<=(x31<=x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 3931U;
	static int64_t x35 = INT64_MIN;
	int32_t t8 = -6024707;

	t8 = ((x33==x34)<=(x35<=x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	uint32_t x38 = UINT32_MAX;
	uint64_t x40 = 6LLU;
	volatile int32_t t9 = -5316;

	t9 = ((x37==x38)<=(x39<=x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 55138712LLU;
	uint16_t x42 = UINT16_MAX;
	volatile uint8_t x44 = UINT8_MAX;
	volatile int32_t t10 = 369;

	t10 = ((x41==x42)<=(x43<=x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int8_t x45 = 0;
	static int32_t x46 = 5;
	int32_t x47 = INT32_MIN;
	int64_t x48 = 1960LL;

	t11 = ((x45==x46)<=(x47<=x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	volatile int32_t x50 = -1;
	uint8_t x52 = UINT8_MAX;
	static volatile int32_t t12 = 33345703;

	t12 = ((x49==x50)<=(x51<=x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x54 = -331;
	static volatile int64_t x55 = INT64_MIN;
	uint64_t x56 = UINT64_MAX;
	volatile int32_t t13 = 8062;

	t13 = ((x53==x54)<=(x55<=x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = 28;
	uint32_t x58 = 1U;
	uint64_t x59 = 34870249434651LLU;
	int32_t x60 = INT32_MAX;
	volatile int32_t t14 = 334708;

	t14 = ((x57==x58)<=(x59<=x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint16_t x62 = 3U;
	int32_t x63 = -1;
	uint32_t x64 = UINT32_MAX;
	int32_t t15 = -116932303;

	t15 = ((x61==x62)<=(x63<=x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint8_t x65 = 10U;
	int16_t x66 = 7;
	uint32_t x68 = 2U;

	t16 = ((x65==x66)<=(x67<=x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = 987U;
	int8_t x70 = 2;
	volatile uint64_t x71 = UINT64_MAX;
	volatile int16_t x72 = INT16_MIN;
	static int32_t t17 = -57303;

	t17 = ((x69==x70)<=(x71<=x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint8_t x73 = 0U;
	int16_t x74 = -1;
	static uint32_t x75 = 119769U;
	int32_t t18 = 87049;

	t18 = ((x73==x74)<=(x75<=x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = UINT8_MAX;
	static int32_t x79 = INT32_MIN;
	volatile int8_t x80 = INT8_MIN;
	volatile int32_t t19 = 2003;

	t19 = ((x77==x78)<=(x79<=x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x81 = -1;
	uint32_t x82 = 584343412U;
	uint8_t x83 = 1U;
	int8_t x84 = -1;
	volatile int32_t t20 = -433;

	t20 = ((x81==x82)<=(x83<=x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = 6977409780LLU;
	volatile int64_t x86 = INT64_MIN;
	int8_t x87 = INT8_MIN;
	volatile int16_t x88 = -2;
	int32_t t21 = -208722847;

	t21 = ((x85==x86)<=(x87<=x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x89 = INT32_MAX;
	int16_t x90 = -1;
	int16_t x91 = -1;
	uint32_t x92 = 223U;
	int32_t t22 = 4;

	t22 = ((x89==x90)<=(x91<=x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x94 = 50444U;
	int32_t x95 = -460883;
	uint16_t x96 = 11002U;
	int32_t t23 = -116068838;

	t23 = ((x93==x94)<=(x95<=x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x99 = -13;
	int32_t t24 = 5655886;

	t24 = ((x97==x98)<=(x99<=x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = UINT64_MAX;
	static uint64_t x102 = 953LLU;
	int16_t x103 = INT16_MIN;
	static uint16_t x104 = UINT16_MAX;
	int32_t t25 = 206914;

	t25 = ((x101==x102)<=(x103<=x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x105 = UINT16_MAX;
	int64_t x106 = INT64_MIN;
	int32_t x107 = -1;
	static int8_t x108 = INT8_MAX;
	volatile int32_t t26 = -49;

	t26 = ((x105==x106)<=(x107<=x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = -2582888872081LL;
	uint64_t x111 = UINT64_MAX;
	volatile int32_t t27 = -78;

	t27 = ((x109==x110)<=(x111<=x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x113 = UINT32_MAX;
	static int16_t x114 = INT16_MAX;
	int64_t x115 = INT64_MAX;
	static volatile int32_t x116 = -11053315;
	static int32_t t28 = -589591;

	t28 = ((x113==x114)<=(x115<=x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MIN;
	static int16_t x118 = INT16_MIN;
	int8_t x119 = INT8_MIN;
	uint32_t x120 = UINT32_MAX;
	volatile int32_t t29 = 14857502;

	t29 = ((x117==x118)<=(x119<=x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x123 = INT8_MAX;
	static uint8_t x124 = 12U;
	static int32_t t30 = 6;

	t30 = ((x121==x122)<=(x123<=x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x126 = UINT16_MAX;
	uint16_t x127 = 6889U;
	static int16_t x128 = INT16_MIN;
	static int32_t t31 = 0;

	t31 = ((x125==x126)<=(x127<=x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x131 = INT64_MIN;
	int8_t x132 = INT8_MIN;
	int32_t t32 = -528230;

	t32 = ((x129==x130)<=(x131<=x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x134 = INT8_MAX;
	static volatile int64_t x135 = INT64_MIN;
	int32_t t33 = -130896517;

	t33 = ((x133==x134)<=(x135<=x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x137 = 727542;
	uint16_t x138 = UINT16_MAX;
	uint8_t x139 = UINT8_MAX;
	uint32_t x140 = 349651U;
	volatile int32_t t34 = 0;

	t34 = ((x137==x138)<=(x139<=x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MAX;
	int64_t x144 = -1LL;
	volatile int32_t t35 = 237306212;

	t35 = ((x141==x142)<=(x143<=x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x147 = -1;
	uint8_t x148 = UINT8_MAX;
	static volatile int32_t t36 = -11280;

	t36 = ((x145==x146)<=(x147<=x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x151 = 2053U;
	volatile uint16_t x152 = UINT16_MAX;
	static int32_t t37 = 1;

	t37 = ((x149==x150)<=(x151<=x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x154 = -1;
	int64_t x155 = -1LL;
	static int16_t x156 = -1;
	int32_t t38 = 0;

	t38 = ((x153==x154)<=(x155<=x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = INT16_MAX;
	int8_t x158 = -40;
	int32_t x159 = INT32_MIN;
	uint16_t x160 = UINT16_MAX;
	volatile int32_t t39 = 28811882;

	t39 = ((x157==x158)<=(x159<=x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x161 = -17;
	uint32_t x162 = 472277U;
	uint8_t x164 = 7U;

	t40 = ((x161==x162)<=(x163<=x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x165 = 0;
	static int16_t x166 = INT16_MIN;
	int16_t x167 = INT16_MAX;
	int32_t x168 = INT32_MAX;

	t41 = ((x165==x166)<=(x167<=x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x169 = INT64_MIN;
	int64_t x170 = INT64_MAX;

	t42 = ((x169==x170)<=(x171<=x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x174 = UINT16_MAX;
	volatile uint64_t x175 = 0LLU;
	static uint32_t x176 = 744795U;
	volatile int32_t t43 = 128;

	t43 = ((x173==x174)<=(x175<=x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = 973133944LLU;
	uint8_t x178 = 8U;
	int16_t x179 = INT16_MIN;
	uint16_t x180 = 564U;
	int32_t t44 = -241799792;

	t44 = ((x177==x178)<=(x179<=x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x182 = INT64_MIN;
	int8_t x184 = INT8_MIN;
	volatile int32_t t45 = -1;

	t45 = ((x181==x182)<=(x183<=x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x185 = INT8_MAX;
	volatile uint16_t x187 = 313U;
	uint16_t x188 = 1U;
	int32_t t46 = 4357;

	t46 = ((x185==x186)<=(x187<=x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = UINT16_MAX;
	uint32_t x190 = 2253U;
	static uint64_t x191 = UINT64_MAX;
	static volatile int32_t t47 = 122536337;

	t47 = ((x189==x190)<=(x191<=x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x193 = UINT8_MAX;
	int64_t x194 = INT64_MAX;
	uint64_t x195 = UINT64_MAX;
	uint8_t x196 = UINT8_MAX;
	static int32_t t48 = 253960;

	t48 = ((x193==x194)<=(x195<=x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x197 = 457149315498587731LL;
	uint16_t x198 = 11468U;
	int8_t x199 = INT8_MIN;
	int32_t t49 = 3;

	t49 = ((x197==x198)<=(x199<=x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x203 = INT32_MAX;
	int32_t t50 = -2;

	t50 = ((x201==x202)<=(x203<=x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = -37;
	uint16_t x208 = 1864U;
	volatile int32_t t51 = -15;

	t51 = ((x205==x206)<=(x207<=x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x209 = 63861144U;
	int8_t x210 = 6;
	uint64_t x211 = UINT64_MAX;
	uint16_t x212 = 2U;
	volatile int32_t t52 = 705595020;

	t52 = ((x209==x210)<=(x211<=x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x213 = 4U;
	static uint16_t x214 = 3486U;
	uint16_t x215 = 2955U;
	volatile int32_t t53 = -33305360;

	t53 = ((x213==x214)<=(x215<=x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = -45;
	int64_t x218 = 193053756334LL;
	int16_t x219 = INT16_MAX;
	static volatile int32_t t54 = -250668;

	t54 = ((x217==x218)<=(x219<=x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x221 = 232U;
	int8_t x222 = INT8_MAX;
	int16_t x223 = -1;
	uint8_t x224 = UINT8_MAX;
	int32_t t55 = 14439;

	t55 = ((x221==x222)<=(x223<=x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x225 = 127U;
	uint64_t x226 = 2352437957LLU;
	static int8_t x227 = INT8_MIN;
	volatile int32_t t56 = 629;

	t56 = ((x225==x226)<=(x227<=x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = 53;
	int64_t x230 = INT64_MAX;
	volatile int16_t x231 = INT16_MIN;
	volatile int8_t x232 = 62;
	int32_t t57 = -2;

	t57 = ((x229==x230)<=(x231<=x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x233 = 0U;
	int16_t x235 = INT16_MIN;
	int32_t t58 = 91;

	t58 = ((x233==x234)<=(x235<=x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x237 = 918U;
	static volatile int32_t t59 = 125;

	t59 = ((x237==x238)<=(x239<=x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x241 = 15398087;
	volatile int64_t x242 = -3280771411LL;
	static int16_t x243 = -5;
	static volatile uint8_t x244 = UINT8_MAX;
	volatile int32_t t60 = 1486;

	t60 = ((x241==x242)<=(x243<=x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = UINT8_MAX;
	volatile uint64_t x246 = 9LLU;
	static int64_t x247 = 999921668319868LL;
	int8_t x248 = 10;
	int32_t t61 = 165761735;

	t61 = ((x245==x246)<=(x247<=x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x249 = INT32_MIN;
	uint16_t x250 = 1926U;
	volatile int32_t x251 = INT32_MIN;
	int8_t x252 = INT8_MIN;
	volatile int32_t t62 = 3566450;

	t62 = ((x249==x250)<=(x251<=x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x253 = 2937U;
	volatile int64_t x254 = INT64_MAX;
	static volatile uint16_t x256 = 0U;
	int32_t t63 = 132526618;

	t63 = ((x253==x254)<=(x255<=x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x257 = 747484LLU;
	static volatile int8_t x260 = INT8_MIN;
	volatile int32_t t64 = 0;

	t64 = ((x257==x258)<=(x259<=x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x263 = 615651U;
	int64_t x264 = 14738165756643096LL;
	volatile int32_t t65 = 97017;

	t65 = ((x261==x262)<=(x263<=x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x265 = UINT32_MAX;
	uint64_t x267 = 3430152612257225413LLU;
	volatile int16_t x268 = -1;
	volatile int32_t t66 = 178819976;

	t66 = ((x265==x266)<=(x267<=x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x269 = 8919728U;
	int8_t x270 = -1;
	int16_t x271 = -15778;
	uint64_t x272 = 80143507995LLU;
	static volatile int32_t t67 = 368501021;

	t67 = ((x269==x270)<=(x271<=x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = -92658376;
	volatile int8_t x274 = INT8_MIN;
	int16_t x275 = -282;
	static int32_t t68 = -58;

	t68 = ((x273==x274)<=(x275<=x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = 1764;
	int64_t x278 = -3944122575676915LL;
	static int64_t x279 = INT64_MIN;
	int32_t x280 = 14;
	volatile int32_t t69 = -855918171;

	t69 = ((x277==x278)<=(x279<=x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x283 = -3705;
	volatile int64_t x284 = 72263666LL;
	int32_t t70 = -541;

	t70 = ((x281==x282)<=(x283<=x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x287 = -1;
	int8_t x288 = -14;
	volatile int32_t t71 = 12;

	t71 = ((x285==x286)<=(x287<=x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = 0;
	int16_t x290 = -6867;
	static int8_t x291 = -1;
	volatile int32_t x292 = INT32_MIN;
	static int32_t t72 = -16252;

	t72 = ((x289==x290)<=(x291<=x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = INT32_MAX;
	int8_t x294 = INT8_MAX;
	static int16_t x295 = 1;
	volatile uint16_t x296 = 717U;

	t73 = ((x293==x294)<=(x295<=x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x297 = 212692636U;
	int32_t x298 = 12;
	int16_t x299 = INT16_MIN;
	uint16_t x300 = UINT16_MAX;

	t74 = ((x297==x298)<=(x299<=x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x301 = 49U;
	int8_t x302 = INT8_MIN;
	int64_t x303 = INT64_MIN;
	volatile int32_t t75 = -3970116;

	t75 = ((x301==x302)<=(x303<=x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x305 = -532132;
	volatile int64_t x306 = INT64_MIN;
	uint32_t x307 = UINT32_MAX;
	uint64_t x308 = 23195275259LLU;

	t76 = ((x305==x306)<=(x307<=x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = -14;
	static uint32_t x310 = 722174815U;
	int32_t x311 = INT32_MAX;
	int32_t t77 = 1840;

	t77 = ((x309==x310)<=(x311<=x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = 6;
	uint16_t x314 = 24316U;
	static volatile int8_t x315 = -3;
	int32_t x316 = -3404975;
	volatile int32_t t78 = -48112;

	t78 = ((x313==x314)<=(x315<=x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x318 = -1;
	static int32_t x319 = INT32_MIN;
	volatile int32_t t79 = 30618544;

	t79 = ((x317==x318)<=(x319<=x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x321 = 13832161750912890LLU;
	volatile int8_t x323 = INT8_MAX;
	static volatile int32_t x324 = INT32_MAX;
	static int32_t t80 = 6287;

	t80 = ((x321==x322)<=(x323<=x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x327 = UINT16_MAX;
	int16_t x328 = 4393;
	volatile int32_t t81 = 33349252;

	t81 = ((x325==x326)<=(x327<=x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x329 = 30U;
	int16_t x330 = INT16_MAX;
	int16_t x331 = INT16_MIN;
	int32_t t82 = 201;

	t82 = ((x329==x330)<=(x331<=x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x333 = 18U;
	static int16_t x334 = INT16_MAX;
	static int8_t x336 = INT8_MIN;

	t83 = ((x333==x334)<=(x335<=x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int8_t x338 = -30;
	static int8_t x340 = INT8_MIN;
	int32_t t84 = 807;

	t84 = ((x337==x338)<=(x339<=x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x341 = 58U;
	int16_t x342 = -1;
	static volatile int16_t x343 = -1;
	uint32_t x344 = UINT32_MAX;
	volatile int32_t t85 = -9;

	t85 = ((x341==x342)<=(x343<=x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x346 = INT16_MIN;
	uint16_t x347 = 32737U;
	static uint8_t x348 = 0U;

	t86 = ((x345==x346)<=(x347<=x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x350 = -232999036138971LL;
	static volatile int16_t x352 = -1;

	t87 = ((x349==x350)<=(x351<=x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x354 = INT8_MIN;
	int64_t x356 = INT64_MAX;
	static int32_t t88 = -2608;

	t88 = ((x353==x354)<=(x355<=x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x357 = 0U;
	uint64_t x358 = 224LLU;
	volatile uint8_t x359 = 5U;
	uint16_t x360 = 506U;
	int32_t t89 = -2304;

	t89 = ((x357==x358)<=(x359<=x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = INT32_MIN;
	int16_t x362 = -1;
	int64_t x364 = INT64_MIN;
	static int32_t t90 = 1;

	t90 = ((x361==x362)<=(x363<=x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = INT64_MIN;
	volatile int64_t x367 = 3LL;
	uint64_t x368 = 11115744570LLU;
	int32_t t91 = -7594207;

	t91 = ((x365==x366)<=(x367<=x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = INT16_MAX;
	int16_t x371 = INT16_MAX;
	int32_t x372 = INT32_MAX;
	volatile int32_t t92 = -13334049;

	t92 = ((x369==x370)<=(x371<=x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = -3;
	uint32_t x375 = 5365U;

	t93 = ((x373==x374)<=(x375<=x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = 39;
	uint16_t x379 = 318U;
	int64_t x380 = -1LL;
	static volatile int32_t t94 = -63822;

	t94 = ((x377==x378)<=(x379<=x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x381 = 749U;
	static int32_t x382 = 447047046;
	int8_t x383 = 55;
	static int64_t x384 = -931980701551LL;
	int32_t t95 = -1014;

	t95 = ((x381==x382)<=(x383<=x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x385 = UINT32_MAX;
	int64_t x388 = INT64_MIN;
	volatile int32_t t96 = 0;

	t96 = ((x385==x386)<=(x387<=x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x389 = 2U;
	static int64_t x390 = -1LL;
	uint16_t x392 = 654U;
	volatile int32_t t97 = -24784329;

	t97 = ((x389==x390)<=(x391<=x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int16_t x393 = INT16_MAX;
	static int64_t x394 = -3682426113677LL;
	volatile int64_t x395 = INT64_MIN;
	uint16_t x396 = UINT16_MAX;
	volatile int32_t t98 = 248;

	t98 = ((x393==x394)<=(x395<=x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x398 = INT16_MIN;
	uint32_t x399 = 30324530U;
	static uint16_t x400 = 102U;
	int32_t t99 = -529806703;

	t99 = ((x397==x398)<=(x399<=x400));

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

