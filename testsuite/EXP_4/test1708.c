#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x8 = 5;
int32_t x23 = -1;
volatile uint32_t t5 = 106U;
int32_t x30 = INT32_MIN;
static volatile int64_t t7 = 27513715040337LL;
volatile uint32_t x38 = 49550U;
volatile uint32_t t9 = 130U;
static int32_t x41 = -752039262;
int8_t x42 = INT8_MIN;
volatile int64_t t12 = 133569505647400LL;
uint8_t x65 = UINT8_MAX;
volatile int64_t x80 = INT64_MAX;
volatile int8_t x83 = -2;
volatile int32_t t19 = -20459974;
uint32_t x90 = UINT32_MAX;
int16_t x96 = 8331;
static int64_t x98 = INT64_MAX;
int16_t x99 = INT16_MIN;
uint64_t x103 = UINT64_MAX;
static volatile uint64_t t23 = 24545981423243323LLU;
int8_t x111 = 1;
int64_t x113 = 278905037697349LL;
static int16_t x116 = INT16_MAX;
int8_t x117 = 0;
static uint8_t x121 = UINT8_MAX;
int64_t x122 = -228887165971919LL;
int32_t x123 = 4452;
int32_t x128 = -7;
uint32_t t29 = 647292U;
uint64_t t30 = 4444917492LLU;
volatile int32_t x136 = -1;
int64_t x137 = INT64_MIN;
static uint32_t x138 = 703237U;
int32_t x139 = -185416221;
int16_t x153 = INT16_MIN;
uint16_t x157 = 0U;
volatile uint8_t x158 = 106U;
static uint64_t x159 = 431039936803247390LLU;
int16_t x160 = -66;
int64_t x163 = -1LL;
int32_t x167 = -1691;
volatile int64_t x169 = INT64_MIN;
volatile uint8_t x181 = 0U;
int16_t x182 = -1;
uint8_t x185 = 9U;
static int8_t x190 = INT8_MIN;
int8_t x193 = INT8_MIN;
uint16_t x195 = UINT16_MAX;
int64_t x198 = INT64_MIN;
int32_t x204 = -1;
volatile uint64_t t48 = 8474782393LLU;
static volatile int64_t x210 = INT64_MIN;
int16_t x211 = -18;
static volatile int64_t t49 = 1103104LL;
static volatile uint8_t x213 = UINT8_MAX;
uint8_t x216 = 27U;
int32_t x219 = -67994508;
int32_t x229 = -10;
int16_t x232 = 2;
int64_t x243 = 1358631506989650294LL;
static volatile int16_t x250 = -1;
static int32_t x252 = INT32_MIN;
volatile int64_t t55 = 12051071728LL;
uint32_t x256 = UINT32_MAX;
static int8_t x257 = 1;
uint16_t x259 = 53U;
int64_t t58 = 9816031LL;
volatile int16_t x271 = -1;
volatile int32_t x274 = INT32_MIN;
uint32_t x283 = 8U;
uint8_t x289 = 1U;
int32_t x292 = INT32_MAX;
int32_t x301 = -1;
static int32_t t68 = 253914;
int8_t x313 = INT8_MAX;
int32_t x314 = -2707;
volatile int32_t t70 = -1;
int32_t x327 = INT32_MIN;
volatile int32_t t73 = -59624;
static volatile uint32_t t74 = 801U;
int32_t x335 = INT32_MAX;
int32_t x345 = -503243;
volatile int16_t x351 = -1;
int8_t x359 = 29;
uint8_t x362 = UINT8_MAX;
volatile int32_t x367 = -1;
volatile int64_t t81 = -3951913849LL;
int32_t x371 = -4;
int16_t x373 = INT16_MIN;
int8_t x380 = INT8_MIN;
static volatile uint64_t t86 = 4047037622875863LLU;
volatile int64_t t87 = 11720224069373405LL;
static int64_t x394 = -1LL;
volatile int64_t x396 = 795LL;
static volatile uint64_t t88 = 29833LLU;
int8_t x403 = -7;
static int64_t x405 = INT64_MIN;
static volatile int32_t x410 = -1;
int32_t x419 = -1;
int8_t x421 = INT8_MIN;
static int64_t t94 = 749LL;
volatile int64_t t95 = 2982639LL;
static uint32_t x436 = UINT32_MAX;
static uint8_t x439 = 0U;
volatile int64_t t98 = -1548991104LL;


void f0(void) {
	uint64_t x1 = 195944568388129LLU;
	static int16_t x2 = 1;
	int16_t x3 = INT16_MAX;
	static int64_t x4 = -1LL;
	uint64_t t0 = 1520226604LLU;

	t0 = (x1%(x2-(x3&x4)));

	if (t0 != 195944568388129LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	uint32_t x6 = 175823U;
	static int8_t x7 = -1;
	static uint64_t t1 = 3LLU;

	t1 = (x5%(x6-(x7&x8)));

	if (t1 != 85641LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = 470621929160247451LL;
	int32_t x10 = INT32_MIN;
	int8_t x11 = 22;
	volatile int8_t x12 = 0;
	static volatile int64_t t2 = -5816LL;

	t2 = (x9%(x10-(x11&x12)));

	if (t2 != 790300827LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x13 = INT32_MAX;
	int16_t x14 = 184;
	uint16_t x15 = 104U;
	uint64_t x16 = UINT64_MAX;
	uint64_t t3 = 9161055953032368656LLU;

	t3 = (x13%(x14-(x15&x16)));

	if (t3 != 47LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 14U;
	static uint64_t x18 = UINT64_MAX;
	uint64_t x19 = 1729037977933542LLU;
	uint32_t x20 = 845U;
	volatile uint64_t t4 = 33199671962147013LLU;

	t4 = (x17%(x18-(x19&x20)));

	if (t4 != 14LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x21 = 49U;
	int16_t x22 = -1;
	int32_t x24 = 59449297;

	t5 = (x21%(x22-(x23&x24)));

	if (t5 != 49U) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 1U;
	uint16_t x26 = 2U;
	static int32_t x27 = INT32_MAX;
	volatile uint16_t x28 = UINT16_MAX;
	volatile uint32_t t6 = 5U;

	t6 = (x25%(x26-(x27&x28)));

	if (t6 != 1U) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint16_t x29 = 15U;
	int64_t x31 = INT64_MIN;
	int32_t x32 = 826;

	t7 = (x29%(x30-(x31&x32)));

	if (t7 != 15LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = UINT64_MAX;
	uint32_t x34 = UINT32_MAX;
	int64_t x35 = INT64_MIN;
	volatile uint16_t x36 = 4U;
	uint64_t t8 = 494209466944609686LLU;

	t8 = (x33%(x34-(x35&x36)));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x37 = -935;
	uint8_t x39 = 2U;
	int32_t x40 = -1;

	t9 = (x37%(x38-(x39&x40)));

	if (t9 != 46625U) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x43 = 108U;
	int32_t x44 = 5;
	volatile int32_t t10 = 177680083;

	t10 = (x41%(x42-(x43&x44)));

	if (t10 != -18) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x45 = 8;
	uint16_t x46 = UINT16_MAX;
	int64_t x47 = -1LL;
	int32_t x48 = INT32_MIN;
	volatile int64_t t11 = 27133816765LL;

	t11 = (x45%(x46-(x47&x48)));

	if (t11 != 8LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 4U;
	volatile int32_t x50 = -8;
	int64_t x51 = INT64_MIN;
	static uint8_t x52 = 8U;

	t12 = (x49%(x50-(x51&x52)));

	if (t12 != 4LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = -1;
	int8_t x54 = INT8_MAX;
	uint16_t x55 = 1U;
	uint64_t x56 = 106260703LLU;
	uint64_t t13 = 427692LLU;

	t13 = (x53%(x54-(x55&x56)));

	if (t13 != 15LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x57 = 117;
	int16_t x58 = -1;
	uint16_t x59 = UINT16_MAX;
	uint64_t x60 = 33724873399131605LLU;
	volatile uint64_t t14 = 97384929LLU;

	t14 = (x57%(x58-(x59&x60)));

	if (t14 != 117LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 62U;
	int16_t x62 = INT16_MIN;
	uint16_t x63 = 246U;
	int32_t x64 = 1;
	volatile int32_t t15 = 95203;

	t15 = (x61%(x62-(x63&x64)));

	if (t15 != 62) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x66 = -1;
	int8_t x67 = INT8_MIN;
	int16_t x68 = -1;
	int32_t t16 = 28820015;

	t16 = (x65%(x66-(x67&x68)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = -13;
	static uint8_t x70 = 26U;
	static int64_t x71 = -1LL;
	uint16_t x72 = 296U;
	int64_t t17 = -16771LL;

	t17 = (x69%(x70-(x71&x72)));

	if (t17 != -13LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = INT64_MIN;
	int64_t x78 = 7279263LL;
	uint8_t x79 = UINT8_MAX;
	volatile int64_t t18 = -5558LL;

	t18 = (x77%(x78-(x79&x80)));

	if (t18 != -6747584LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x81 = INT8_MAX;
	uint8_t x82 = 7U;
	int16_t x84 = INT16_MAX;

	t19 = (x81%(x82-(x83&x84)));

	if (t19 != 127) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x89 = 1647LLU;
	static uint16_t x91 = 0U;
	uint64_t x92 = 824832LLU;
	static uint64_t t20 = 339371486414683LLU;

	t20 = (x89%(x90-(x91&x92)));

	if (t20 != 1647LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x93 = -9;
	int8_t x94 = INT8_MIN;
	int16_t x95 = -104;
	volatile int32_t t21 = 4;

	t21 = (x93%(x94-(x95&x96)));

	if (t21 != -9) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x97 = -411;
	int8_t x100 = 2;
	volatile int64_t t22 = 15354698761LL;

	t22 = (x97%(x98-(x99&x100)));

	if (t22 != -411LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int32_t x101 = -1;
	int64_t x102 = INT64_MIN;
	uint16_t x104 = 1U;

	t23 = (x101%(x102-(x103&x104)));

	if (t23 != 1LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x105 = -1;
	volatile int16_t x106 = INT16_MIN;
	int8_t x107 = INT8_MIN;
	uint32_t x108 = 230779417U;
	volatile uint32_t t24 = 3516495U;

	t24 = (x105%(x106-(x107&x108)));

	if (t24 != 230812159U) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x109 = UINT32_MAX;
	uint8_t x110 = UINT8_MAX;
	volatile uint32_t x112 = 231611841U;
	static volatile uint32_t t25 = 7760224U;

	t25 = (x109%(x110-(x111&x112)));

	if (t25 != 15U) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x114 = UINT16_MAX;
	static uint32_t x115 = UINT32_MAX;
	static volatile int64_t t26 = 476780004997689LL;

	t26 = (x113%(x114-(x115&x116)));

	if (t26 != 12613LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x118 = -1;
	uint32_t x119 = 85230895U;
	int64_t x120 = INT64_MAX;
	volatile int64_t t27 = -5LL;

	t27 = (x117%(x118-(x119&x120)));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x124 = UINT64_MAX;
	uint64_t t28 = 86LLU;

	t28 = (x121%(x122-(x123&x124)));

	if (t28 != 255LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x125 = INT16_MIN;
	static uint32_t x126 = 20U;
	uint16_t x127 = 1U;

	t29 = (x125%(x126-(x127&x128)));

	if (t29 != 13U) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint64_t x129 = 879LLU;
	uint8_t x130 = UINT8_MAX;
	int8_t x131 = INT8_MIN;
	uint16_t x132 = UINT16_MAX;

	t30 = (x129%(x130-(x131&x132)));

	if (t30 != 879LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x133 = INT64_MAX;
	int8_t x134 = INT8_MAX;
	static volatile int16_t x135 = -1;
	int64_t t31 = 470LL;

	t31 = (x133%(x134-(x135&x136)));

	if (t31 != 127LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x140 = INT8_MIN;
	static volatile int64_t t32 = -2955772811836516225LL;

	t32 = (x137%(x138-(x139&x140)));

	if (t32 != -29884681LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x141 = INT64_MIN;
	int32_t x142 = INT32_MIN;
	uint32_t x143 = UINT32_MAX;
	int8_t x144 = -22;
	volatile int64_t t33 = -3859906956660LL;

	t33 = (x141%(x142-(x143&x144)));

	if (t33 != -968LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x145 = INT16_MIN;
	uint64_t x146 = 425556214LLU;
	volatile int16_t x147 = -1;
	int32_t x148 = 113;
	volatile uint64_t t34 = 1165256131881898131LLU;

	t34 = (x145%(x146-(x147&x148)));

	if (t34 != 312619826LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x149 = -1;
	uint8_t x150 = 6U;
	int32_t x151 = 158061;
	volatile int32_t x152 = -134093815;
	static int32_t t35 = 1;

	t35 = (x149%(x150-(x151&x152)));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x154 = 1;
	uint32_t x155 = 46U;
	int8_t x156 = INT8_MIN;
	static volatile uint32_t t36 = 15119979U;

	t36 = (x153%(x154-(x155&x156)));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t t37 = 5006742838519LLU;

	t37 = (x157%(x158-(x159&x160)));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x161 = INT16_MIN;
	static int8_t x162 = -1;
	uint16_t x164 = 1333U;
	volatile int64_t t38 = -502139478LL;

	t38 = (x161%(x162-(x163&x164)));

	if (t38 != -752LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x165 = INT64_MIN;
	int16_t x166 = 1;
	volatile int8_t x168 = -1;
	volatile int64_t t39 = 6636256436226246LL;

	t39 = (x165%(x166-(x167&x168)));

	if (t39 != -224LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x170 = INT64_MIN;
	uint64_t x171 = 1869362813LLU;
	static volatile int32_t x172 = INT32_MIN;
	uint64_t t40 = 707132307LLU;

	t40 = (x169%(x170-(x171&x172)));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x173 = -7;
	int16_t x174 = -4746;
	int64_t x175 = INT64_MIN;
	static volatile uint32_t x176 = 10240U;
	volatile int64_t t41 = -1760025441343110482LL;

	t41 = (x173%(x174-(x175&x176)));

	if (t41 != -7LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x183 = 5278U;
	volatile uint8_t x184 = UINT8_MAX;
	volatile int32_t t42 = 0;

	t42 = (x181%(x182-(x183&x184)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x186 = 8;
	volatile int32_t x187 = INT32_MAX;
	volatile int8_t x188 = INT8_MIN;
	static int32_t t43 = -1012;

	t43 = (x185%(x186-(x187&x188)));

	if (t43 != 9) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x189 = 2U;
	int32_t x191 = -1;
	int16_t x192 = 1;
	volatile int32_t t44 = 72320015;

	t44 = (x189%(x190-(x191&x192)));

	if (t44 != 2) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x194 = 28;
	volatile int64_t x196 = 23914157777204LL;
	int64_t t45 = -146476320649LL;

	t45 = (x193%(x194-(x195&x196)));

	if (t45 != -128LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x197 = INT64_MIN;
	static uint8_t x199 = 15U;
	int8_t x200 = INT8_MIN;
	static volatile int64_t t46 = -920508327353310790LL;

	t46 = (x197%(x198-(x199&x200)));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x201 = INT32_MIN;
	int16_t x202 = INT16_MIN;
	uint8_t x203 = UINT8_MAX;
	static int32_t t47 = -390283607;

	t47 = (x201%(x202-(x203&x204)));

	if (t47 != -30981) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x205 = -1;
	uint64_t x206 = UINT64_MAX;
	int16_t x207 = INT16_MIN;
	volatile uint16_t x208 = 11U;

	t48 = (x205%(x206-(x207&x208)));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x209 = 664360081U;
	int16_t x212 = INT16_MIN;

	t49 = (x209%(x210-(x211&x212)));

	if (t49 != 664360081LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x214 = INT8_MIN;
	int16_t x215 = -452;
	int32_t t50 = 43550;

	t50 = (x213%(x214-(x215&x216)));

	if (t50 != 103) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x217 = -1;
	uint64_t x218 = 34453787996LLU;
	int16_t x220 = INT16_MAX;
	uint64_t t51 = 0LLU;

	t51 = (x217%(x218-(x219&x220)));

	if (t51 != 2510242167LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x230 = INT32_MIN;
	int32_t x231 = INT32_MIN;
	volatile int32_t t52 = -42;

	t52 = (x229%(x230-(x231&x232)));

	if (t52 != -10) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x241 = -1LL;
	volatile int8_t x242 = INT8_MIN;
	int32_t x244 = INT32_MIN;
	int64_t t53 = 3507318961978007LL;

	t53 = (x241%(x242-(x243&x244)));

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x245 = 0U;
	uint64_t x246 = 248LLU;
	uint32_t x247 = UINT32_MAX;
	static int32_t x248 = -1;
	volatile uint64_t t54 = 110975696919LLU;

	t54 = (x245%(x246-(x247&x248)));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x249 = INT64_MAX;
	int32_t x251 = INT32_MIN;

	t55 = (x249%(x250-(x251&x252)));

	if (t55 != 1LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x253 = -12;
	static volatile int64_t x254 = -816783337227348067LL;
	int64_t x255 = INT64_MIN;
	int64_t t56 = 90629012499LL;

	t56 = (x253%(x254-(x255&x256)));

	if (t56 != -12LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x258 = 1U;
	static int16_t x260 = INT16_MAX;
	volatile uint32_t t57 = 902973954U;

	t57 = (x257%(x258-(x259&x260)));

	if (t57 != 1U) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x261 = INT32_MIN;
	volatile int8_t x262 = INT8_MAX;
	int64_t x263 = INT64_MIN;
	volatile uint8_t x264 = 1U;

	t58 = (x261%(x262-(x263&x264)));

	if (t58 != -8LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x265 = INT32_MIN;
	volatile int8_t x266 = 12;
	uint16_t x267 = 20U;
	uint32_t x268 = 8621U;
	volatile uint32_t t59 = 108U;

	t59 = (x265%(x266-(x267&x268)));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x269 = 479235LLU;
	int16_t x270 = 1;
	volatile int64_t x272 = 38234134778516136LL;
	volatile uint64_t t60 = 540851822702871LLU;

	t60 = (x269%(x270-(x271&x272)));

	if (t60 != 479235LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x273 = INT8_MIN;
	int8_t x275 = INT8_MIN;
	uint32_t x276 = UINT32_MAX;
	volatile uint32_t t61 = 72853066U;

	t61 = (x273%(x274-(x275&x276)));

	if (t61 != 2147483392U) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x277 = 287756;
	volatile int32_t x278 = INT32_MIN;
	volatile int32_t x279 = -1;
	static int32_t x280 = -1;
	volatile int32_t t62 = 0;

	t62 = (x277%(x278-(x279&x280)));

	if (t62 != 287756) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x281 = UINT16_MAX;
	uint16_t x282 = 770U;
	static int16_t x284 = -1;
	volatile uint32_t t63 = 25769979U;

	t63 = (x281%(x282-(x283&x284)));

	if (t63 != 3U) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x285 = -1;
	uint8_t x286 = 0U;
	int16_t x287 = -3304;
	volatile int8_t x288 = 50;
	volatile int32_t t64 = 23;

	t64 = (x285%(x286-(x287&x288)));

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x290 = 219U;
	volatile int64_t x291 = -13934721807117LL;
	volatile int64_t t65 = 31LL;

	t65 = (x289%(x290-(x291&x292)));

	if (t65 != 1LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x293 = INT64_MIN;
	uint16_t x294 = 43U;
	static volatile uint64_t x295 = 14036867331LLU;
	uint16_t x296 = 25U;
	volatile uint64_t t66 = 1005254656434LLU;

	t66 = (x293%(x294-(x295&x296)));

	if (t66 != 8LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x302 = UINT8_MAX;
	static uint16_t x303 = 576U;
	int32_t x304 = -1;
	volatile int32_t t67 = -3868494;

	t67 = (x301%(x302-(x303&x304)));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x305 = INT32_MIN;
	int8_t x306 = INT8_MIN;
	uint8_t x307 = 1U;
	int16_t x308 = INT16_MAX;

	t68 = (x305%(x306-(x307&x308)));

	if (t68 != -8) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x309 = -1;
	volatile int8_t x310 = -1;
	uint32_t x311 = 3246U;
	int8_t x312 = INT8_MIN;
	volatile uint32_t t69 = 654844U;

	t69 = (x309%(x310-(x311&x312)));

	if (t69 != 3200U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x315 = -7;
	int32_t x316 = -2823;

	t70 = (x313%(x314-(x315&x316)));

	if (t70 != 11) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x317 = 56U;
	static volatile int16_t x318 = 75;
	volatile int8_t x319 = INT8_MIN;
	static uint16_t x320 = 1U;
	volatile uint32_t t71 = 3432986U;

	t71 = (x317%(x318-(x319&x320)));

	if (t71 != 56U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x321 = 88;
	int16_t x322 = -12683;
	static int32_t x323 = -323261;
	int8_t x324 = INT8_MIN;
	volatile int32_t t72 = 654;

	t72 = (x321%(x322-(x323&x324)));

	if (t72 != 88) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x325 = -20083;
	int8_t x326 = -1;
	static int8_t x328 = INT8_MIN;

	t73 = (x325%(x326-(x327&x328)));

	if (t73 != -20083) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x329 = 326330U;
	int8_t x330 = INT8_MAX;
	volatile int32_t x331 = 2961541;
	int16_t x332 = INT16_MAX;

	t74 = (x329%(x330-(x331&x332)));

	if (t74 != 326330U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x333 = 3U;
	uint32_t x334 = UINT32_MAX;
	int64_t x336 = -24LL;
	int64_t t75 = 1561LL;

	t75 = (x333%(x334-(x335&x336)));

	if (t75 != 3LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x341 = -43;
	uint16_t x342 = 829U;
	volatile int16_t x343 = 450;
	int8_t x344 = -1;
	volatile int32_t t76 = -3;

	t76 = (x341%(x342-(x343&x344)));

	if (t76 != -43) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x346 = 0LL;
	uint32_t x347 = UINT32_MAX;
	static int16_t x348 = INT16_MIN;
	volatile int64_t t77 = -531055761399529LL;

	t77 = (x345%(x346-(x347&x348)));

	if (t77 != -503243LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x349 = INT8_MAX;
	static int8_t x350 = -1;
	int32_t x352 = INT32_MIN;
	static volatile int32_t t78 = 31647278;

	t78 = (x349%(x350-(x351&x352)));

	if (t78 != 127) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x357 = 0;
	int8_t x358 = INT8_MIN;
	uint16_t x360 = 832U;
	int32_t t79 = 60779003;

	t79 = (x357%(x358-(x359&x360)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x361 = 1U;
	static uint8_t x363 = UINT8_MAX;
	uint8_t x364 = 0U;
	volatile int32_t t80 = -484632;

	t80 = (x361%(x362-(x363&x364)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x365 = 3958144;
	volatile int8_t x366 = -1;
	int64_t x368 = INT64_MIN;

	t81 = (x365%(x366-(x367&x368)));

	if (t81 != 3958144LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x369 = INT16_MIN;
	int16_t x370 = INT16_MIN;
	int32_t x372 = INT32_MIN;
	int32_t t82 = 41160641;

	t82 = (x369%(x370-(x371&x372)));

	if (t82 != -32768) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x374 = 83953295;
	volatile int16_t x375 = 358;
	int64_t x376 = -1LL;
	static int64_t t83 = -640209LL;

	t83 = (x373%(x374-(x375&x376)));

	if (t83 != -32768LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x377 = -50562LL;
	int64_t x378 = -1LL;
	int16_t x379 = -1;
	volatile int64_t t84 = 594LL;

	t84 = (x377%(x378-(x379&x380)));

	if (t84 != -16LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x381 = INT32_MIN;
	int8_t x382 = INT8_MIN;
	volatile int32_t x383 = INT32_MIN;
	int64_t x384 = INT64_MAX;
	volatile int64_t t85 = 31334076364LL;

	t85 = (x381%(x382-(x383&x384)));

	if (t85 != -2147483648LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x385 = 104039LLU;
	volatile int16_t x386 = -72;
	uint8_t x387 = 0U;
	int8_t x388 = INT8_MIN;

	t86 = (x385%(x386-(x387&x388)));

	if (t86 != 104039LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x389 = 102U;
	int32_t x390 = INT32_MIN;
	int64_t x391 = INT64_MAX;
	int16_t x392 = INT16_MAX;

	t87 = (x389%(x390-(x391&x392)));

	if (t87 != 102LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x393 = 7U;
	uint64_t x395 = 2133264426LLU;

	t88 = (x393%(x394-(x395&x396)));

	if (t88 != 7LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x401 = UINT8_MAX;
	static int64_t x402 = -1LL;
	uint16_t x404 = 539U;
	int64_t t89 = -15970928LL;

	t89 = (x401%(x402-(x403&x404)));

	if (t89 != 255LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x406 = 2859642;
	int16_t x407 = 1;
	volatile uint8_t x408 = 8U;
	int64_t t90 = -2085210LL;

	t90 = (x405%(x406-(x407&x408)));

	if (t90 != -1153070LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x409 = 1U;
	static int8_t x411 = -1;
	int64_t x412 = 494647812127LL;
	int64_t t91 = -30807LL;

	t91 = (x409%(x410-(x411&x412)));

	if (t91 != 1LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x413 = -1LL;
	uint64_t x414 = 27833966114907209LLU;
	int32_t x415 = -1;
	volatile int64_t x416 = INT64_MAX;
	uint64_t t92 = 228751320324293293LLU;

	t92 = (x413%(x414-(x415&x416)));

	if (t92 != 9195538070739868597LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x417 = UINT8_MAX;
	int8_t x418 = 0;
	int8_t x420 = INT8_MIN;
	volatile int32_t t93 = -382172;

	t93 = (x417%(x418-(x419&x420)));

	if (t93 != 127) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x422 = -512595739LL;
	uint32_t x423 = 1760722833U;
	uint8_t x424 = UINT8_MAX;

	t94 = (x421%(x422-(x423&x424)));

	if (t94 != -128LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x425 = -1LL;
	uint32_t x426 = 30318792U;
	int8_t x427 = 1;
	int16_t x428 = INT16_MIN;

	t95 = (x425%(x426-(x427&x428)));

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x429 = 341393114LLU;
	int64_t x430 = -1LL;
	int32_t x431 = INT32_MIN;
	volatile uint64_t x432 = 2093892638LLU;
	static uint64_t t96 = 960168910170904LLU;

	t96 = (x429%(x430-(x431&x432)));

	if (t96 != 341393114LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x433 = INT64_MIN;
	static uint64_t x434 = 7628248000811096LLU;
	int64_t x435 = INT64_MIN;
	static volatile uint64_t t97 = 8459953761LLU;

	t97 = (x433%(x434-(x435&x436)));

	if (t97 != 820203874160744LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x437 = INT64_MIN;
	int64_t x438 = INT64_MIN;
	int8_t x440 = -1;

	t98 = (x437%(x438-(x439&x440)));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x441 = INT64_MIN;
	volatile uint16_t x442 = 0U;
	volatile int16_t x443 = INT16_MIN;
	int8_t x444 = INT8_MIN;
	volatile int64_t t99 = 434011167036591LL;

	t99 = (x441%(x442-(x443&x444)));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

