#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x7 = INT8_MIN;
uint8_t x28 = 40U;
uint64_t t4 = UINT64_MAX;
static volatile uint64_t x34 = UINT64_MAX;
volatile uint32_t t8 = 48208U;
static uint16_t x61 = 180U;
uint64_t x93 = 1833273241039694LLU;
uint64_t t10 = 17741537923370281LLU;
uint32_t x108 = 2575U;
int16_t x118 = INT16_MIN;
uint64_t t13 = 1321361LLU;
int16_t x122 = -25;
int32_t x124 = INT32_MAX;
uint64_t t18 = 19716025971LLU;
volatile int16_t x153 = -495;
uint64_t x156 = 953079797LLU;
uint64_t t21 = 8179238LLU;
volatile int64_t t22 = 2509313LL;
int8_t x161 = -1;
volatile uint64_t t23 = 188LLU;
uint32_t x178 = UINT32_MAX;
volatile int8_t x181 = -1;
static volatile uint64_t x183 = 1337569675LLU;
static int8_t x189 = INT8_MIN;
int32_t x192 = INT32_MIN;
int32_t x193 = -1;
uint64_t t29 = 27LLU;
static volatile uint32_t t30 = 385U;
int8_t x201 = 6;
int64_t x207 = 8LL;
uint32_t t33 = 8322386U;
int32_t x214 = -1;
int64_t x215 = 8044487LL;
int64_t x220 = INT64_MIN;
int8_t x225 = 2;
int8_t x226 = -8;
int32_t x240 = INT32_MIN;
volatile int16_t x243 = INT16_MAX;
volatile int16_t x244 = 16;
volatile uint64_t x246 = 5602129098529365LLU;
volatile uint64_t t40 = 266957728960764138LLU;
static volatile int32_t x254 = INT32_MAX;
int64_t t41 = 49503891480390739LL;
int64_t x266 = -1LL;
static int32_t x268 = -932365170;
int64_t t42 = 15741321LL;
int32_t t44 = -897;
volatile uint64_t x281 = 7740120640LLU;
static int32_t x286 = -1304;
uint16_t x288 = UINT16_MAX;
static int32_t x292 = INT32_MIN;
int8_t x300 = -1;
volatile int64_t x308 = INT64_MAX;
uint32_t x309 = 7901U;
int64_t t51 = -91565350LL;
uint16_t x322 = UINT16_MAX;
static int32_t x325 = INT32_MIN;
int32_t x328 = -8234768;
volatile uint64_t t53 = 99186633474460318LLU;
int64_t x333 = INT64_MIN;
volatile int64_t t54 = -1596118336448LL;
int16_t x346 = INT16_MAX;
int32_t x348 = -3679891;
static volatile int64_t t58 = -1LL;
volatile int32_t x373 = INT32_MIN;
volatile int32_t x374 = 0;
volatile int64_t x386 = -1918270LL;
int32_t x387 = INT32_MAX;
uint16_t x392 = 2983U;
uint32_t t63 = 6773U;
volatile int16_t x414 = 15;
int32_t x428 = INT32_MIN;
static int64_t t68 = 1279077214718LL;
static uint16_t x437 = 234U;
int16_t x438 = INT16_MIN;
volatile int64_t t70 = 29LL;
int32_t x443 = -1852920;
int8_t x448 = -6;
int32_t x451 = INT32_MAX;
static int8_t x454 = INT8_MIN;
uint8_t x465 = 8U;
uint32_t t77 = 102U;
int8_t x476 = INT8_MIN;
uint32_t x480 = 1749018398U;
volatile uint32_t t79 = 1778U;
int16_t x485 = 3;
uint8_t x511 = 123U;
int32_t x512 = INT32_MIN;
uint32_t x525 = 23U;
uint32_t x539 = 29848616U;
volatile uint32_t t88 = 9U;
uint16_t x561 = UINT16_MAX;
volatile int8_t x574 = 12;
uint32_t x576 = UINT32_MAX;
static uint32_t t92 = 306U;
uint32_t x590 = UINT32_MAX;
int16_t x593 = -1;
volatile int64_t x595 = -1LL;
static int32_t x596 = INT32_MIN;
uint16_t x609 = UINT16_MAX;
int32_t x611 = INT32_MIN;
int16_t x613 = -1;
int16_t x618 = INT16_MAX;
int64_t x624 = 143LL;


void f0(void) {
	static int8_t x5 = -1;
	uint32_t x6 = 57U;
	int16_t x8 = INT16_MAX;
	uint32_t t0 = 15U;

	t0 = (x5*(x6/(x7%x8)));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = INT8_MIN;
	uint8_t x10 = 5U;
	uint8_t x11 = UINT8_MAX;
	static int8_t x12 = INT8_MIN;
	volatile int32_t t1 = -11085740;

	t1 = (x9*(x10/(x11%x12)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x13 = 42U;
	int16_t x14 = INT16_MIN;
	volatile int8_t x15 = 1;
	volatile uint16_t x16 = 27U;
	volatile int32_t t2 = -12;

	t2 = (x13*(x14/(x15%x16)));

	if (t2 != -1376256) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x21 = -1;
	static int8_t x22 = 1;
	uint32_t x23 = 3914U;
	static int32_t x24 = 7515170;
	volatile uint32_t t3 = 1U;

	t3 = (x21*(x22/(x23%x24)));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x25 = -1;
	volatile uint64_t x26 = UINT64_MAX;
	volatile int64_t x27 = -54757061456146LL;

	t4 = (x25*(x26/(x27%x28)));

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x29 = INT64_MAX;
	int16_t x30 = INT16_MIN;
	volatile int16_t x31 = INT16_MAX;
	int16_t x32 = INT16_MIN;
	int64_t t5 = 122070803386LL;

	t5 = (x29*(x30/(x31%x32)));

	if (t5 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x33 = INT16_MIN;
	int64_t x35 = INT64_MIN;
	static uint16_t x36 = 1464U;
	volatile uint64_t t6 = 12071326701LLU;

	t6 = (x33*(x34/(x35%x36)));

	if (t6 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x53 = -1;
	int8_t x54 = INT8_MIN;
	static uint32_t x55 = 6340813U;
	uint32_t x56 = 653U;
	static volatile uint32_t t7 = 45456322U;

	t7 = (x53*(x54/(x55%x56)));

	if (t7 != 4271497531U) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x57 = 6U;
	uint32_t x58 = 81357U;
	static int8_t x59 = -1;
	uint32_t x60 = 97362U;

	t8 = (x57*(x58/(x59%x60)));

	if (t8 != 12U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x62 = 1244085;
	int32_t x63 = INT32_MAX;
	int32_t x64 = INT32_MIN;
	int32_t t9 = 40;

	t9 = (x61*(x62/(x63%x64)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x94 = -3;
	static int16_t x95 = INT16_MIN;
	static int64_t x96 = INT64_MAX;

	t10 = (x93*(x94/(x95%x96)));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x105 = 20U;
	int8_t x106 = 9;
	static int32_t x107 = INT32_MAX;
	static volatile uint32_t t11 = 14820109U;

	t11 = (x105*(x106/(x107%x108)));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x113 = UINT8_MAX;
	int16_t x114 = INT16_MIN;
	int64_t x115 = -5254488LL;
	int8_t x116 = 47;
	int64_t t12 = 6058LL;

	t12 = (x113*(x114/(x115%x116)));

	if (t12 != 287895LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x117 = UINT8_MAX;
	uint64_t x119 = 7222094930960660LLU;
	int64_t x120 = INT64_MIN;

	t13 = (x117*(x118/(x119%x120)));

	if (t13 != 651270LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint8_t x121 = UINT8_MAX;
	uint8_t x123 = UINT8_MAX;
	static int32_t t14 = 50226876;

	t14 = (x121*(x122/(x123%x124)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x129 = 0;
	volatile int64_t x130 = INT64_MAX;
	volatile int32_t x131 = 340133;
	static int16_t x132 = 28;
	volatile int64_t t15 = 1190703114462LL;

	t15 = (x129*(x130/(x131%x132)));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x133 = UINT16_MAX;
	volatile uint16_t x134 = 3505U;
	int16_t x135 = 1411;
	int32_t x136 = 442496906;
	int32_t t16 = 26201233;

	t16 = (x133*(x134/(x135%x136)));

	if (t16 != 131070) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x137 = 72506109U;
	int32_t x138 = -1;
	uint8_t x139 = 2U;
	volatile int32_t x140 = INT32_MAX;
	uint32_t t17 = 39U;

	t17 = (x137*(x138/(x139%x140)));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x141 = INT32_MAX;
	int8_t x142 = INT8_MAX;
	int8_t x143 = INT8_MAX;
	uint64_t x144 = UINT64_MAX;

	t18 = (x141*(x142/(x143%x144)));

	if (t18 != 2147483647LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x145 = -1LL;
	uint16_t x146 = 1402U;
	int16_t x147 = 26;
	int16_t x148 = INT16_MAX;
	int64_t t19 = -110878LL;

	t19 = (x145*(x146/(x147%x148)));

	if (t19 != -53LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x149 = UINT32_MAX;
	uint32_t x150 = UINT32_MAX;
	volatile int8_t x151 = INT8_MAX;
	int8_t x152 = 11;
	volatile uint32_t t20 = 554U;

	t20 = (x149*(x150/(x151%x152)));

	if (t20 != 3579139414U) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x154 = -1;
	volatile int32_t x155 = 9;

	t21 = (x153*(x154/(x155%x156)));

	if (t21 != 385LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x157 = 0;
	uint32_t x158 = 21U;
	int8_t x159 = INT8_MAX;
	int64_t x160 = 2870266LL;

	t22 = (x157*(x158/(x159%x160)));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x162 = INT8_MIN;
	uint64_t x163 = 43803607356475258LLU;
	int64_t x164 = INT64_MAX;

	t23 = (x161*(x162/(x163%x164)));

	if (t23 != 18446744073709551195LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x165 = 12422599638104LLU;
	int64_t x166 = INT64_MIN;
	volatile int64_t x167 = -1665781167LL;
	int64_t x168 = INT64_MAX;
	static uint64_t t24 = 86725147LLU;

	t24 = (x165*(x166/(x167%x168)));

	if (t24 != 14037622631302316592LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x169 = UINT8_MAX;
	int16_t x170 = -1;
	volatile uint32_t x171 = 9145U;
	volatile uint64_t x172 = UINT64_MAX;
	uint64_t t25 = 18158LLU;

	t25 = (x169*(x170/(x171%x172)));

	if (t25 != 514370665806007050LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x177 = -15LL;
	int32_t x179 = -1;
	int8_t x180 = -2;
	static volatile int64_t t26 = 3032266801005251LL;

	t26 = (x177*(x178/(x179%x180)));

	if (t26 != -15LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x182 = 0;
	int64_t x184 = -1LL;
	uint64_t t27 = 3143217LLU;

	t27 = (x181*(x182/(x183%x184)));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x190 = INT64_MIN;
	int64_t x191 = -7488359LL;
	static int64_t t28 = 0LL;

	t28 = (x189*(x190/(x191%x192)));

	if (t28 != -157656920657408LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x194 = 826648060LLU;
	int64_t x195 = INT64_MIN;
	static volatile int64_t x196 = INT64_MAX;

	t29 = (x193*(x194/(x195%x196)));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x197 = INT16_MIN;
	uint32_t x198 = 1907U;
	volatile uint8_t x199 = 5U;
	uint16_t x200 = UINT16_MAX;

	t30 = (x197*(x198/(x199%x200)));

	if (t30 != 4282482688U) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x202 = UINT64_MAX;
	static volatile int32_t x203 = -1333;
	volatile int32_t x204 = 241718008;
	uint64_t t31 = 183383434519103LLU;

	t31 = (x201*(x202/(x203%x204)));

	if (t31 != 6LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x205 = INT32_MIN;
	static uint16_t x206 = 8436U;
	int64_t x208 = INT64_MIN;
	int64_t t32 = 7922042031LL;

	t32 = (x205*(x206/(x207%x208)));

	if (t32 != -2263447764992LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x209 = -1176;
	int8_t x210 = 7;
	static uint32_t x211 = UINT32_MAX;
	uint16_t x212 = 26360U;

	t33 = (x209*(x210/(x211%x212)));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x213 = 1917076157101LLU;
	uint16_t x216 = 140U;
	static volatile uint64_t t34 = 39984669590744LLU;

	t34 = (x213*(x214/(x215%x216)));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x217 = -1LL;
	static volatile int8_t x218 = INT8_MAX;
	uint16_t x219 = UINT16_MAX;
	int64_t t35 = 949842LL;

	t35 = (x217*(x218/(x219%x220)));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x227 = -1;
	uint8_t x228 = UINT8_MAX;
	int32_t t36 = 2683519;

	t36 = (x225*(x226/(x227%x228)));

	if (t36 != 16) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x229 = -1;
	uint64_t x230 = 4LLU;
	int16_t x231 = 2;
	uint32_t x232 = 210823U;
	uint64_t t37 = 120696250758560613LLU;

	t37 = (x229*(x230/(x231%x232)));

	if (t37 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x237 = UINT32_MAX;
	uint16_t x238 = 8705U;
	int32_t x239 = INT32_MAX;
	uint32_t t38 = 86242556U;

	t38 = (x237*(x238/(x239%x240)));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x241 = -42;
	int32_t x242 = 3857050;
	static int32_t t39 = -1002695;

	t39 = (x241*(x242/(x243%x244)));

	if (t39 != -10799712) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x245 = 39337;
	int8_t x247 = INT8_MAX;
	int32_t x248 = INT32_MIN;

	t40 = (x245*(x246/(x247%x248)));

	if (t40 != 1735204349203512525LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x253 = INT8_MIN;
	static uint16_t x255 = 67U;
	int64_t x256 = INT64_MAX;

	t41 = (x253*(x254/(x255%x256)));

	if (t41 != -4102655232LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x265 = 99U;
	volatile int64_t x267 = -1LL;

	t42 = (x265*(x266/(x267%x268)));

	if (t42 != 99LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x269 = -380294;
	int8_t x270 = INT8_MIN;
	uint32_t x271 = 696U;
	int64_t x272 = INT64_MIN;
	static volatile int64_t t43 = 96LL;

	t43 = (x269*(x270/(x271%x272)));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x277 = -1;
	uint16_t x278 = 2U;
	uint16_t x279 = 20267U;
	volatile int32_t x280 = INT32_MIN;

	t44 = (x277*(x278/(x279%x280)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x282 = -4;
	int32_t x283 = -1;
	uint16_t x284 = 15U;
	volatile uint64_t t45 = 36099LLU;

	t45 = (x281*(x282/(x283%x284)));

	if (t45 != 30960482560LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x285 = 2885;
	static volatile int16_t x287 = INT16_MAX;
	volatile int32_t t46 = -1360378;

	t46 = (x285*(x286/(x287%x288)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x289 = -1;
	static uint32_t x290 = UINT32_MAX;
	int64_t x291 = 10109790788LL;
	volatile int64_t t47 = 7LL;

	t47 = (x289*(x290/(x291%x292)));

	if (t47 != -2LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x297 = 913417912U;
	static int16_t x298 = -1;
	volatile uint64_t x299 = 580911043LLU;
	volatile uint64_t t48 = 1414212157LLU;

	t48 = (x297*(x298/(x299%x300)));

	if (t48 != 10558706344181710864LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x301 = -1;
	uint16_t x302 = 1723U;
	int64_t x303 = -1LL;
	int16_t x304 = INT16_MAX;
	volatile int64_t t49 = -85LL;

	t49 = (x301*(x302/(x303%x304)));

	if (t49 != 1723LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x305 = INT8_MIN;
	int16_t x306 = 1;
	int64_t x307 = -1LL;
	volatile int64_t t50 = -1781038952224869234LL;

	t50 = (x305*(x306/(x307%x308)));

	if (t50 != 128LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x310 = INT64_MIN;
	static uint32_t x311 = 36673U;
	int64_t x312 = INT64_MIN;

	t51 = (x309*(x310/(x311%x312)));

	if (t51 != -1987125745458222207LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x321 = -1;
	int64_t x323 = INT64_MAX;
	int32_t x324 = INT32_MAX;
	static int64_t t52 = 3406344794763LL;

	t52 = (x321*(x322/(x323%x324)));

	if (t52 != -65535LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x326 = UINT64_MAX;
	int16_t x327 = -1;

	t53 = (x325*(x326/(x327%x328)));

	if (t53 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x334 = 6U;
	int32_t x335 = INT32_MIN;
	int64_t x336 = 8128LL;

	t54 = (x333*(x334/(x335%x336)));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int16_t x345 = 0;
	uint32_t x347 = 1058170U;
	uint32_t t55 = 23861651U;

	t55 = (x345*(x346/(x347%x348)));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x349 = INT16_MIN;
	static int64_t x350 = -100797LL;
	int8_t x351 = -11;
	int16_t x352 = 469;
	int64_t t56 = 3683525495LL;

	t56 = (x349*(x350/(x351%x352)));

	if (t56 != -300253184LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x353 = -364;
	static uint8_t x354 = UINT8_MAX;
	int64_t x355 = -1240194463277LL;
	int32_t x356 = INT32_MAX;
	static int64_t t57 = -314525075785659928LL;

	t57 = (x353*(x354/(x355%x356)));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x365 = -1;
	int16_t x366 = INT16_MAX;
	int8_t x367 = INT8_MIN;
	int64_t x368 = INT64_MAX;

	t58 = (x365*(x366/(x367%x368)));

	if (t58 != 255LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x375 = UINT64_MAX;
	volatile int64_t x376 = 184669894645LL;
	static uint64_t t59 = 158244539779634097LLU;

	t59 = (x373*(x374/(x375%x376)));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x385 = INT8_MIN;
	int32_t x388 = 391647;
	volatile int64_t t60 = -1605LL;

	t60 = (x385*(x386/(x387%x388)));

	if (t60 != 2944LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x389 = INT16_MIN;
	volatile uint16_t x390 = 3U;
	uint32_t x391 = UINT32_MAX;
	static uint32_t t61 = 21324U;

	t61 = (x389*(x390/(x391%x392)));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x393 = UINT8_MAX;
	uint8_t x394 = 2U;
	int16_t x395 = INT16_MIN;
	int16_t x396 = 145;
	int32_t t62 = -7642;

	t62 = (x393*(x394/(x395%x396)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x397 = INT8_MAX;
	uint32_t x398 = 13265298U;
	int16_t x399 = INT16_MAX;
	int8_t x400 = INT8_MIN;

	t63 = (x397*(x398/(x399%x400)));

	if (t63 != 13265277U) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x405 = 1U;
	int16_t x406 = -50;
	static uint64_t x407 = UINT64_MAX;
	int32_t x408 = INT32_MIN;
	uint64_t t64 = 7985556683496869LLU;

	t64 = (x405*(x406/(x407%x408)));

	if (t64 != 8589934595LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x409 = -1;
	static int8_t x410 = INT8_MIN;
	static int8_t x411 = INT8_MIN;
	int8_t x412 = INT8_MAX;
	volatile int32_t t65 = -167;

	t65 = (x409*(x410/(x411%x412)));

	if (t65 != -128) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x413 = INT32_MIN;
	volatile uint64_t x415 = 41LLU;
	volatile int16_t x416 = -1;
	volatile uint64_t t66 = 96LLU;

	t66 = (x413*(x414/(x415%x416)));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x417 = UINT16_MAX;
	volatile uint16_t x418 = 1U;
	volatile int64_t x419 = INT64_MAX;
	volatile int8_t x420 = INT8_MIN;
	static volatile int64_t t67 = 15480LL;

	t67 = (x417*(x418/(x419%x420)));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x425 = -1;
	static int64_t x426 = -1108206506595571LL;
	volatile int16_t x427 = 4;

	t68 = (x425*(x426/(x427%x428)));

	if (t68 != 277051626648892LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x429 = 242;
	int8_t x430 = INT8_MIN;
	static volatile uint8_t x431 = 37U;
	int32_t x432 = 2387574;
	static volatile int32_t t69 = 446;

	t69 = (x429*(x430/(x431%x432)));

	if (t69 != -726) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x439 = -23753268364LL;
	volatile uint32_t x440 = 142639800U;

	t70 = (x437*(x438/(x439%x440)));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x441 = 15U;
	int8_t x442 = INT8_MIN;
	uint16_t x444 = 11083U;
	static volatile uint32_t t71 = 60690376U;

	t71 = (x441*(x442/(x443%x444)));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x445 = 1U;
	static int32_t x446 = 10715897;
	int32_t x447 = -1;
	volatile int32_t t72 = 12262;

	t72 = (x445*(x446/(x447%x448)));

	if (t72 != -10715897) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x449 = INT16_MIN;
	volatile int32_t x450 = -1;
	uint64_t x452 = 27880524947474LLU;
	volatile uint64_t t73 = 262992407835841565LLU;

	t73 = (x449*(x450/(x451%x452)));

	if (t73 != 18446462598732709888LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x453 = UINT32_MAX;
	int64_t x455 = INT64_MAX;
	uint64_t x456 = 3265LLU;
	static volatile uint64_t t74 = 1561579715567LLU;

	t74 = (x453*(x454/(x455%x456)));

	if (t74 != 8830888117864627295LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x457 = -71967411129927LL;
	int16_t x458 = 3765;
	int64_t x459 = INT64_MIN;
	volatile int32_t x460 = -90;
	int64_t t75 = 307180540019059LL;

	t75 = (x457*(x458/(x459%x460)));

	if (t75 != 33824683231065690LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x466 = INT8_MAX;
	uint8_t x467 = 2U;
	uint16_t x468 = 38U;
	volatile int32_t t76 = -528619;

	t76 = (x465*(x466/(x467%x468)));

	if (t76 != 504) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x469 = 9U;
	int16_t x470 = INT16_MAX;
	static volatile int16_t x471 = INT16_MAX;
	volatile uint32_t x472 = UINT32_MAX;

	t77 = (x469*(x470/(x471%x472)));

	if (t77 != 9U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x473 = -1;
	int8_t x474 = INT8_MAX;
	volatile int32_t x475 = -1;
	static volatile int32_t t78 = 1;

	t78 = (x473*(x474/(x475%x476)));

	if (t78 != 127) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x477 = INT8_MIN;
	int32_t x478 = INT32_MIN;
	int32_t x479 = INT32_MIN;

	t79 = (x477*(x478/(x479%x480)));

	if (t79 != 4294966656U) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x486 = INT16_MIN;
	int16_t x487 = INT16_MIN;
	int32_t x488 = INT32_MAX;
	volatile int32_t t80 = -86271819;

	t80 = (x485*(x486/(x487%x488)));

	if (t80 != 3) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x497 = -1;
	static int64_t x498 = INT64_MIN;
	static volatile int32_t x499 = -1;
	uint64_t x500 = 1887774463824LLU;
	volatile uint64_t t81 = 1901458LLU;

	t81 = (x497*(x498/(x499%x500)));

	if (t81 != 18446744073700317664LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x501 = 26U;
	uint64_t x502 = UINT64_MAX;
	uint32_t x503 = 66302139U;
	uint16_t x504 = UINT16_MAX;
	uint64_t t82 = 1203LLU;

	t82 = (x501*(x502/(x503%x504)));

	if (t82 != 10369164740702378LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x509 = 959197572188LLU;
	int8_t x510 = -1;
	volatile uint64_t t83 = 33316063231705037LLU;

	t83 = (x509*(x510/(x511%x512)));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x517 = INT16_MIN;
	int32_t x518 = INT32_MIN;
	int8_t x519 = INT8_MAX;
	volatile int64_t x520 = 42820956LL;
	int64_t t84 = 10078518LL;

	t84 = (x517*(x518/(x519%x520)));

	if (t84 != 554084597760LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x526 = INT8_MIN;
	int8_t x527 = INT8_MIN;
	volatile uint32_t x528 = 196743530U;
	volatile uint32_t t85 = 749540146U;

	t85 = (x525*(x526/(x527%x528)));

	if (t85 != 598U) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x537 = INT8_MIN;
	uint8_t x538 = UINT8_MAX;
	int16_t x540 = INT16_MIN;
	uint32_t t86 = 111U;

	t86 = (x537*(x538/(x539%x540)));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x541 = INT16_MAX;
	uint32_t x542 = UINT32_MAX;
	static volatile int32_t x543 = 51798466;
	static int16_t x544 = INT16_MIN;
	uint32_t t87 = 1260U;

	t87 = (x541*(x542/(x543%x544)));

	if (t87 != 1328505244U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x557 = 229U;
	int16_t x558 = -1;
	int16_t x559 = 71;
	uint8_t x560 = UINT8_MAX;

	t88 = (x557*(x558/(x559%x560)));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint16_t x562 = 0U;
	volatile uint8_t x563 = 24U;
	uint64_t x564 = 1740481946LLU;
	volatile uint64_t t89 = 73704819LLU;

	t89 = (x561*(x562/(x563%x564)));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x565 = 15U;
	int64_t x566 = INT64_MIN;
	uint64_t x567 = UINT64_MAX;
	int8_t x568 = INT8_MAX;
	static uint64_t t90 = 3556LLU;

	t90 = (x565*(x566/(x567%x568)));

	if (t90 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x569 = UINT32_MAX;
	volatile int32_t x570 = -171972;
	int32_t x571 = -4;
	uint64_t x572 = 485546960099LLU;
	uint64_t t91 = 1330515788890586653LLU;

	t91 = (x569*(x570/(x571%x572)));

	if (t91 != 254140464749943960LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x573 = -97;
	int16_t x575 = 2558;

	t92 = (x573*(x574/(x575%x576)));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x589 = INT16_MAX;
	int8_t x591 = INT8_MIN;
	static uint16_t x592 = 9U;
	uint32_t t93 = 9536U;

	t93 = (x589*(x590/(x591%x592)));

	if (t93 != 32767U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x594 = UINT16_MAX;
	static int64_t t94 = -961656677518LL;

	t94 = (x593*(x594/(x595%x596)));

	if (t94 != 65535LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x605 = 6798383635595485598LLU;
	uint8_t x606 = 4U;
	uint8_t x607 = UINT8_MAX;
	volatile int32_t x608 = -1834;
	uint64_t t95 = 1910974LLU;

	t95 = (x605*(x606/(x607%x608)));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x610 = INT8_MIN;
	int8_t x612 = 9;
	volatile int32_t t96 = -5445;

	t96 = (x609*(x610/(x611%x612)));

	if (t96 != 4194240) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x614 = 7757;
	int16_t x615 = INT16_MAX;
	int16_t x616 = INT16_MIN;
	int32_t t97 = -8;

	t97 = (x613*(x614/(x615%x616)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x617 = -3174;
	static int32_t x619 = 1;
	int16_t x620 = -438;
	int32_t t98 = -1023;

	t98 = (x617*(x618/(x619%x620)));

	if (t98 != -104002458) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x621 = INT16_MIN;
	volatile uint64_t x622 = 18LLU;
	volatile int64_t x623 = INT64_MAX;
	volatile uint64_t t99 = 908524LLU;

	t99 = (x621*(x622/(x623%x624)));

	if (t99 != 18446744073709486080LLU) { NG(); } else { ; }
	
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

