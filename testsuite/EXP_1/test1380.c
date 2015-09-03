#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x2 = INT32_MIN;
static int16_t x4 = INT16_MIN;
static uint16_t x10 = 8135U;
volatile int32_t x15 = -1;
static int32_t t2 = -1659;
volatile uint32_t t5 = 991398U;
uint8_t x30 = 116U;
int64_t t6 = 3456512530003LL;
int64_t x33 = -1LL;
int8_t x34 = -1;
static int8_t x44 = -24;
volatile int8_t x47 = INT8_MIN;
int32_t t11 = -96523362;
int16_t x58 = INT16_MAX;
uint16_t x60 = 14750U;
int32_t t17 = 2297930;
uint64_t x81 = 1847989LLU;
static volatile int32_t x82 = -1;
int8_t x83 = INT8_MIN;
int32_t x91 = INT32_MIN;
int32_t x92 = -1;
volatile int32_t t20 = -16711;
static int32_t t21 = -419935;
int16_t x106 = 0;
volatile uint32_t t25 = 59153740U;
static uint64_t t26 = 59LLU;
int32_t x117 = INT32_MIN;
volatile int32_t x119 = -1;
int8_t x136 = -1;
static int8_t x137 = 50;
int8_t x146 = INT8_MAX;
int32_t t36 = 20;
static uint32_t x157 = UINT32_MAX;
int8_t x167 = 1;
int32_t x168 = INT32_MAX;
volatile uint32_t x176 = 837U;
volatile int64_t x177 = -1LL;
int8_t x182 = INT8_MAX;
int64_t x185 = -1977571717970272009LL;
volatile int32_t t43 = -261;
uint16_t x190 = UINT16_MAX;
volatile int32_t x194 = INT32_MAX;
int16_t x195 = INT16_MIN;
uint16_t x197 = 760U;
static int32_t x198 = -66;
static int32_t x199 = -714215;
static int64_t x200 = -399008399LL;
volatile int64_t t47 = 25LL;
int8_t x207 = INT8_MAX;
int16_t x208 = -5203;
static int16_t x209 = INT16_MAX;
uint16_t x210 = 1U;
volatile int8_t x211 = -16;
static int8_t x213 = -19;
int8_t x214 = 1;
int64_t x218 = -1LL;
uint64_t x223 = 7LLU;
volatile int32_t t53 = -174940;
static int16_t x233 = INT16_MAX;
int64_t x238 = INT64_MIN;
int32_t x243 = INT32_MIN;
static uint64_t x251 = 2731590576LLU;
volatile int32_t x252 = -1;
int64_t x255 = -1470LL;
int64_t x257 = -1LL;
uint64_t x261 = UINT64_MAX;
uint64_t x270 = UINT64_MAX;
uint16_t x273 = UINT16_MAX;
volatile uint64_t t64 = 82531226906601LLU;
int32_t x287 = -1088034;
uint16_t x296 = 2790U;
volatile uint64_t x298 = 174593LLU;
int64_t t70 = -2197970549631936LL;
static uint64_t x310 = 123952211574186LLU;
volatile int16_t x311 = -1;
int64_t x316 = 59863418LL;
int8_t x322 = INT8_MIN;
static int32_t x330 = INT32_MAX;
int64_t x331 = 139859687164247LL;
static uint16_t x332 = 5123U;
volatile int16_t x335 = INT16_MAX;
int32_t t76 = -20;
uint32_t x339 = UINT32_MAX;
volatile uint32_t t77 = 37U;
volatile int64_t x346 = INT64_MIN;
int64_t x348 = INT64_MAX;
uint16_t x363 = 17865U;
int16_t x364 = 58;
int8_t x365 = INT8_MAX;
int8_t x367 = -15;
int64_t x372 = -55736205LL;
volatile int32_t x375 = -1;
int32_t t85 = 57;
int8_t x381 = 28;
volatile int64_t x382 = -1LL;
static int8_t x386 = -1;
volatile uint32_t t90 = UINT32_MAX;
int64_t x398 = INT64_MIN;
static int32_t t91 = -3;
int64_t x403 = INT64_MIN;
static int64_t x404 = INT64_MIN;
int64_t t93 = -712LL;
int64_t x409 = 2002192790718276LL;
static volatile int64_t x413 = INT64_MIN;
int64_t t95 = 19889743996LL;
uint16_t x424 = UINT16_MAX;
int8_t x438 = INT8_MAX;
int8_t x440 = -1;


void f0(void) {
	int8_t x1 = -11;
	int64_t x3 = 24798642730LL;
	int64_t t0 = -47LL;

	t0 = (((x1<x2)*x3)-x4);

	if (t0 != 32768LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x9 = 414208LLU;
	uint16_t x11 = 12U;
	uint8_t x12 = 96U;
	int32_t t1 = 8769;

	t1 = (((x9<x10)*x11)-x12);

	if (t1 != -96) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x13 = -1;
	uint8_t x14 = UINT8_MAX;
	static int8_t x16 = -1;

	t2 = (((x13<x14)*x15)-x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x17 = 25680U;
	volatile int16_t x18 = INT16_MAX;
	int64_t x19 = INT64_MAX;
	static uint16_t x20 = 32414U;
	volatile int64_t t3 = 239665287182017472LL;

	t3 = (((x17<x18)*x19)-x20);

	if (t3 != 9223372036854743393LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = INT32_MIN;
	int16_t x22 = 9;
	volatile int16_t x23 = INT16_MAX;
	uint64_t x24 = 2326062279565795764LLU;
	static uint64_t t4 = 511863LLU;

	t4 = (((x21<x22)*x23)-x24);

	if (t4 != 16120681794143788619LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = INT32_MAX;
	static uint64_t x26 = 1LLU;
	static uint32_t x27 = UINT32_MAX;
	volatile int8_t x28 = INT8_MIN;

	t5 = (((x25<x26)*x27)-x28);

	if (t5 != 128U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x29 = INT64_MIN;
	static int64_t x31 = -1LL;
	static int8_t x32 = 23;

	t6 = (((x29<x30)*x31)-x32);

	if (t6 != -24LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x35 = 3482853;
	int16_t x36 = -1;
	int32_t t7 = -459;

	t7 = (((x33<x34)*x35)-x36);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = -5789347408808099LL;
	int64_t x38 = -1LL;
	uint8_t x39 = 117U;
	volatile int64_t x40 = -1LL;
	int64_t t8 = -32374LL;

	t8 = (((x37<x38)*x39)-x40);

	if (t8 != 118LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x41 = 322U;
	int16_t x42 = -3;
	int8_t x43 = INT8_MIN;
	int32_t t9 = -7;

	t9 = (((x41<x42)*x43)-x44);

	if (t9 != 24) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x45 = 2256951U;
	volatile uint16_t x46 = UINT16_MAX;
	int8_t x48 = INT8_MAX;
	static volatile int32_t t10 = 21215410;

	t10 = (((x45<x46)*x47)-x48);

	if (t10 != -127) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = -619;
	volatile int32_t x50 = -446550795;
	static int32_t x51 = -37811;
	static int32_t x52 = 47891;

	t11 = (((x49<x50)*x51)-x52);

	if (t11 != -47891) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = 1;
	int32_t x54 = 3;
	int32_t x55 = -1;
	int8_t x56 = -1;
	int32_t t12 = -2035368;

	t12 = (((x53<x54)*x55)-x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x57 = 3U;
	int32_t x59 = -1;
	volatile int32_t t13 = 101280;

	t13 = (((x57<x58)*x59)-x60);

	if (t13 != -14751) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = -98;
	int64_t x62 = INT64_MAX;
	static int64_t x63 = -1LL;
	uint8_t x64 = 0U;
	int64_t t14 = -50LL;

	t14 = (((x61<x62)*x63)-x64);

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = -1;
	static uint32_t x66 = 6U;
	static int32_t x67 = INT32_MAX;
	int16_t x68 = INT16_MIN;
	int32_t t15 = 847339324;

	t15 = (((x65<x66)*x67)-x68);

	if (t15 != 32768) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x69 = INT64_MAX;
	int32_t x70 = -26;
	uint16_t x71 = UINT16_MAX;
	int8_t x72 = INT8_MAX;
	volatile int32_t t16 = 38;

	t16 = (((x69<x70)*x71)-x72);

	if (t16 != -127) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x77 = 99U;
	int16_t x78 = INT16_MIN;
	int8_t x79 = INT8_MIN;
	int32_t x80 = INT32_MAX;

	t17 = (((x77<x78)*x79)-x80);

	if (t17 != -2147483647) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x84 = INT16_MIN;
	int32_t t18 = -403;

	t18 = (((x81<x82)*x83)-x84);

	if (t18 != 32640) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x85 = 2;
	static uint8_t x86 = 3U;
	int32_t x87 = 2947328;
	uint16_t x88 = 292U;
	int32_t t19 = 224;

	t19 = (((x85<x86)*x87)-x88);

	if (t19 != 2947036) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x89 = INT16_MIN;
	int32_t x90 = 120952357;

	t20 = (((x89<x90)*x91)-x92);

	if (t20 != -2147483647) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x93 = UINT16_MAX;
	volatile uint8_t x94 = 1U;
	static volatile int32_t x95 = 9;
	uint16_t x96 = 18U;

	t21 = (((x93<x94)*x95)-x96);

	if (t21 != -18) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x97 = -2520269LL;
	int8_t x98 = INT8_MIN;
	int8_t x99 = INT8_MIN;
	static int64_t x100 = INT64_MIN;
	volatile int64_t t22 = 183LL;

	t22 = (((x97<x98)*x99)-x100);

	if (t22 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x101 = 2;
	volatile int8_t x102 = INT8_MAX;
	int32_t x103 = 168;
	uint64_t x104 = 3305449LLU;
	volatile uint64_t t23 = 9971934092278513LLU;

	t23 = (((x101<x102)*x103)-x104);

	if (t23 != 18446744073706246335LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x105 = -1LL;
	static volatile uint64_t x107 = 25817LLU;
	int16_t x108 = INT16_MIN;
	static volatile uint64_t t24 = 26753974802184359LLU;

	t24 = (((x105<x106)*x107)-x108);

	if (t24 != 58585LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x109 = INT64_MAX;
	volatile int16_t x110 = INT16_MIN;
	static int32_t x111 = 5429547;
	static uint32_t x112 = 56U;

	t25 = (((x109<x110)*x111)-x112);

	if (t25 != 4294967240U) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x113 = 276U;
	int16_t x114 = 42;
	static uint64_t x115 = 8140746699LLU;
	int32_t x116 = INT32_MIN;

	t26 = (((x113<x114)*x115)-x116);

	if (t26 != 2147483648LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x118 = 60U;
	int64_t x120 = INT64_MAX;
	int64_t t27 = INT64_MIN;

	t27 = (((x117<x118)*x119)-x120);

	if (t27 != INT64_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x121 = -607656LL;
	int16_t x122 = -1;
	volatile int64_t x123 = 3508967986391LL;
	uint64_t x124 = UINT64_MAX;
	uint64_t t28 = 37782109LLU;

	t28 = (((x121<x122)*x123)-x124);

	if (t28 != 3508967986392LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x125 = INT8_MAX;
	volatile int8_t x126 = INT8_MIN;
	static int32_t x127 = -1;
	int8_t x128 = INT8_MIN;
	volatile int32_t t29 = -7;

	t29 = (((x125<x126)*x127)-x128);

	if (t29 != 128) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x129 = -38229814;
	volatile int8_t x130 = INT8_MIN;
	uint64_t x131 = UINT64_MAX;
	static uint16_t x132 = 392U;
	volatile uint64_t t30 = 15914764771800LLU;

	t30 = (((x129<x130)*x131)-x132);

	if (t30 != 18446744073709551223LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x133 = UINT16_MAX;
	volatile int32_t x134 = INT32_MIN;
	volatile int32_t x135 = INT32_MIN;
	int32_t t31 = -144352;

	t31 = (((x133<x134)*x135)-x136);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x138 = INT8_MIN;
	volatile uint64_t x139 = UINT64_MAX;
	static uint64_t x140 = 17418116954951579LLU;
	uint64_t t32 = 4617329315078LLU;

	t32 = (((x137<x138)*x139)-x140);

	if (t32 != 18429325956754600037LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x141 = INT64_MIN;
	volatile int8_t x142 = -1;
	static uint16_t x143 = UINT16_MAX;
	uint16_t x144 = 7912U;
	static int32_t t33 = -1323;

	t33 = (((x141<x142)*x143)-x144);

	if (t33 != 57623) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x145 = -1;
	int32_t x147 = -1;
	int32_t x148 = INT32_MIN;
	int32_t t34 = INT32_MAX;

	t34 = (((x145<x146)*x147)-x148);

	if (t34 != INT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x149 = 4808219;
	int8_t x150 = INT8_MAX;
	int16_t x151 = INT16_MIN;
	uint8_t x152 = 0U;
	int32_t t35 = 57055;

	t35 = (((x149<x150)*x151)-x152);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x153 = UINT64_MAX;
	volatile int64_t x154 = 717843960LL;
	static int16_t x155 = 359;
	static int16_t x156 = 26;

	t36 = (((x153<x154)*x155)-x156);

	if (t36 != -26) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x158 = INT8_MIN;
	int16_t x159 = INT16_MAX;
	static uint32_t x160 = 0U;
	volatile uint32_t t37 = 1472978U;

	t37 = (((x157<x158)*x159)-x160);

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x165 = 882431LL;
	static int64_t x166 = -392825995034958LL;
	int32_t t38 = 182168100;

	t38 = (((x165<x166)*x167)-x168);

	if (t38 != -2147483647) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x169 = 2545U;
	volatile int16_t x170 = -1;
	int16_t x171 = INT16_MIN;
	int8_t x172 = -1;
	volatile int32_t t39 = 1;

	t39 = (((x169<x170)*x171)-x172);

	if (t39 != -32767) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x173 = -41;
	int8_t x174 = -1;
	volatile uint32_t x175 = 828998153U;
	volatile uint32_t t40 = 6742U;

	t40 = (((x173<x174)*x175)-x176);

	if (t40 != 828997316U) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x178 = UINT32_MAX;
	int16_t x179 = INT16_MAX;
	int32_t x180 = -87744679;
	int32_t t41 = -677;

	t41 = (((x177<x178)*x179)-x180);

	if (t41 != 87777446) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x181 = INT32_MAX;
	static int64_t x183 = -1633162997LL;
	volatile int64_t x184 = INT64_MAX;
	int64_t t42 = -1658212255LL;

	t42 = (((x181<x182)*x183)-x184);

	if (t42 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x186 = INT64_MIN;
	uint16_t x187 = 32544U;
	uint8_t x188 = UINT8_MAX;

	t43 = (((x185<x186)*x187)-x188);

	if (t43 != -255) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x189 = 2314U;
	static int64_t x191 = -15752289767827LL;
	uint8_t x192 = 2U;
	int64_t t44 = 2648259892722111LL;

	t44 = (((x189<x190)*x191)-x192);

	if (t44 != -15752289767829LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x193 = 15;
	static volatile int8_t x196 = 15;
	volatile int32_t t45 = 865433695;

	t45 = (((x193<x194)*x195)-x196);

	if (t45 != -32783) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t t46 = 491856722328628758LL;

	t46 = (((x197<x198)*x199)-x200);

	if (t46 != 399008399LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x201 = INT16_MIN;
	volatile uint16_t x202 = 286U;
	int64_t x203 = -2345771430617823831LL;
	int8_t x204 = INT8_MIN;

	t47 = (((x201<x202)*x203)-x204);

	if (t47 != -2345771430617823703LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x205 = 1067084558LL;
	static int64_t x206 = INT64_MIN;
	static volatile int32_t t48 = 268462;

	t48 = (((x205<x206)*x207)-x208);

	if (t48 != 5203) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x212 = 2815U;
	volatile uint32_t t49 = 1601818U;

	t49 = (((x209<x210)*x211)-x212);

	if (t49 != 4294964481U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x215 = -1;
	int16_t x216 = -1;
	int32_t t50 = -4815;

	t50 = (((x213<x214)*x215)-x216);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x217 = INT16_MIN;
	static int16_t x219 = INT16_MIN;
	uint32_t x220 = 92900U;
	static volatile uint32_t t51 = 1012517U;

	t51 = (((x217<x218)*x219)-x220);

	if (t51 != 4294841628U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x221 = -128130LL;
	int16_t x222 = -5;
	uint16_t x224 = 1U;
	uint64_t t52 = 5LLU;

	t52 = (((x221<x222)*x223)-x224);

	if (t52 != 6LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x225 = UINT32_MAX;
	int16_t x226 = -1;
	int16_t x227 = INT16_MAX;
	uint16_t x228 = 8512U;

	t53 = (((x225<x226)*x227)-x228);

	if (t53 != -8512) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x234 = -524686210539028611LL;
	int32_t x235 = -2604716;
	int16_t x236 = 8;
	static int32_t t54 = 3830;

	t54 = (((x233<x234)*x235)-x236);

	if (t54 != -8) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x237 = INT64_MAX;
	int64_t x239 = -266LL;
	int32_t x240 = INT32_MAX;
	int64_t t55 = -1522LL;

	t55 = (((x237<x238)*x239)-x240);

	if (t55 != -2147483647LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int8_t x241 = INT8_MIN;
	static int32_t x242 = INT32_MIN;
	int64_t x244 = -1LL;
	volatile int64_t t56 = -870625270209LL;

	t56 = (((x241<x242)*x243)-x244);

	if (t56 != 1LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x245 = INT32_MIN;
	volatile int64_t x246 = -208946LL;
	uint8_t x247 = UINT8_MAX;
	int16_t x248 = -2;
	volatile int32_t t57 = 207;

	t57 = (((x245<x246)*x247)-x248);

	if (t57 != 257) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x249 = 2041U;
	volatile uint16_t x250 = 58U;
	volatile uint64_t t58 = 9211655LLU;

	t58 = (((x249<x250)*x251)-x252);

	if (t58 != 1LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x253 = -1;
	volatile int8_t x254 = INT8_MIN;
	int16_t x256 = INT16_MAX;
	int64_t t59 = -777433791LL;

	t59 = (((x253<x254)*x255)-x256);

	if (t59 != -32767LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x258 = UINT8_MAX;
	uint64_t x259 = 14209977530LLU;
	int16_t x260 = -3782;
	volatile uint64_t t60 = 803LLU;

	t60 = (((x257<x258)*x259)-x260);

	if (t60 != 14209981312LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x262 = 1916;
	int16_t x263 = -1;
	static int64_t x264 = 108452993577967LL;
	int64_t t61 = 3LL;

	t61 = (((x261<x262)*x263)-x264);

	if (t61 != -108452993577967LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x265 = 860LL;
	int32_t x266 = INT32_MAX;
	uint16_t x267 = 392U;
	int8_t x268 = -8;
	static int32_t t62 = 152991057;

	t62 = (((x265<x266)*x267)-x268);

	if (t62 != 400) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x269 = INT16_MIN;
	int16_t x271 = -7977;
	int64_t x272 = -1LL;
	volatile int64_t t63 = 35378788462LL;

	t63 = (((x269<x270)*x271)-x272);

	if (t63 != -7976LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x274 = 745155154102432263LL;
	volatile int32_t x275 = -1;
	volatile uint64_t x276 = 3728LLU;

	t64 = (((x273<x274)*x275)-x276);

	if (t64 != 18446744073709547887LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x277 = -45;
	int64_t x278 = INT64_MIN;
	int8_t x279 = -1;
	static uint8_t x280 = UINT8_MAX;
	static int32_t t65 = -1729;

	t65 = (((x277<x278)*x279)-x280);

	if (t65 != -255) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x281 = -1;
	volatile int64_t x282 = INT64_MIN;
	volatile int32_t x283 = -1;
	int32_t x284 = 499818946;
	int32_t t66 = -1;

	t66 = (((x281<x282)*x283)-x284);

	if (t66 != -499818946) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x285 = -1;
	int64_t x286 = INT64_MAX;
	int16_t x288 = 3029;
	static int32_t t67 = 146990195;

	t67 = (((x285<x286)*x287)-x288);

	if (t67 != -1091063) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x293 = -132317636;
	int8_t x294 = -2;
	int64_t x295 = INT64_MAX;
	int64_t t68 = 0LL;

	t68 = (((x293<x294)*x295)-x296);

	if (t68 != 9223372036854773017LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x297 = -2;
	int32_t x299 = INT32_MIN;
	volatile int32_t x300 = INT32_MAX;
	int32_t t69 = -493409465;

	t69 = (((x297<x298)*x299)-x300);

	if (t69 != -2147483647) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x305 = -2314;
	static uint32_t x306 = 148U;
	int8_t x307 = 12;
	static int64_t x308 = INT64_MAX;

	t70 = (((x305<x306)*x307)-x308);

	if (t70 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int16_t x309 = -1;
	volatile int16_t x312 = INT16_MAX;
	int32_t t71 = 86087;

	t71 = (((x309<x310)*x311)-x312);

	if (t71 != -32767) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x313 = 0U;
	uint8_t x314 = 19U;
	int8_t x315 = INT8_MIN;
	volatile int64_t t72 = -84324233489788697LL;

	t72 = (((x313<x314)*x315)-x316);

	if (t72 != -59863546LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x321 = INT16_MIN;
	volatile int32_t x323 = 687433;
	uint16_t x324 = 243U;
	int32_t t73 = 51812;

	t73 = (((x321<x322)*x323)-x324);

	if (t73 != 687190) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x325 = INT32_MAX;
	volatile uint8_t x326 = 79U;
	int64_t x327 = 86617995837595093LL;
	int32_t x328 = 1627;
	static int64_t t74 = 105519820LL;

	t74 = (((x325<x326)*x327)-x328);

	if (t74 != -1627LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x329 = INT32_MAX;
	int64_t t75 = 516481588LL;

	t75 = (((x329<x330)*x331)-x332);

	if (t75 != -5123LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x333 = 6829U;
	int16_t x334 = INT16_MAX;
	int32_t x336 = INT32_MAX;

	t76 = (((x333<x334)*x335)-x336);

	if (t76 != -2147450880) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x337 = INT64_MAX;
	static int8_t x338 = -4;
	uint32_t x340 = 1809U;

	t77 = (((x337<x338)*x339)-x340);

	if (t77 != 4294965487U) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x345 = 0U;
	static uint32_t x347 = 373705U;
	volatile int64_t t78 = 1203LL;

	t78 = (((x345<x346)*x347)-x348);

	if (t78 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x349 = UINT8_MAX;
	static uint8_t x350 = UINT8_MAX;
	uint16_t x351 = 2135U;
	volatile int8_t x352 = INT8_MAX;
	volatile int32_t t79 = 3851;

	t79 = (((x349<x350)*x351)-x352);

	if (t79 != -127) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x353 = UINT32_MAX;
	int8_t x354 = -1;
	int16_t x355 = INT16_MIN;
	uint32_t x356 = 1U;
	static uint32_t t80 = UINT32_MAX;

	t80 = (((x353<x354)*x355)-x356);

	if (t80 != UINT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x357 = INT32_MIN;
	volatile int64_t x358 = INT64_MIN;
	int64_t x359 = INT64_MIN;
	int16_t x360 = INT16_MAX;
	volatile int64_t t81 = -8057743185434130LL;

	t81 = (((x357<x358)*x359)-x360);

	if (t81 != -32767LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x361 = INT8_MIN;
	uint64_t x362 = 207265297924804LLU;
	volatile int32_t t82 = 48;

	t82 = (((x361<x362)*x363)-x364);

	if (t82 != -58) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int32_t x366 = INT32_MIN;
	static int16_t x368 = -1;
	volatile int32_t t83 = 10520510;

	t83 = (((x365<x366)*x367)-x368);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x369 = -1LL;
	int16_t x370 = INT16_MIN;
	int16_t x371 = 0;
	static int64_t t84 = 1LL;

	t84 = (((x369<x370)*x371)-x372);

	if (t84 != 55736205LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x373 = -12115;
	uint32_t x374 = 26U;
	int16_t x376 = INT16_MIN;

	t85 = (((x373<x374)*x375)-x376);

	if (t85 != 32768) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x377 = -11;
	static int8_t x378 = -26;
	uint32_t x379 = 190436U;
	static uint8_t x380 = 95U;
	uint32_t t86 = 30U;

	t86 = (((x377<x378)*x379)-x380);

	if (t86 != 4294967201U) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x383 = 827740LLU;
	static int64_t x384 = INT64_MIN;
	volatile uint64_t t87 = 12845671LLU;

	t87 = (((x381<x382)*x383)-x384);

	if (t87 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int32_t x385 = INT32_MAX;
	volatile int16_t x387 = INT16_MIN;
	volatile uint16_t x388 = 31658U;
	static volatile int32_t t88 = -297518;

	t88 = (((x385<x386)*x387)-x388);

	if (t88 != -31658) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x389 = INT32_MAX;
	uint32_t x390 = 851809267U;
	static int32_t x391 = INT32_MIN;
	static int8_t x392 = 1;
	int32_t t89 = 3;

	t89 = (((x389<x390)*x391)-x392);

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x393 = UINT8_MAX;
	static volatile uint8_t x394 = 0U;
	uint32_t x395 = UINT32_MAX;
	int8_t x396 = 1;

	t90 = (((x393<x394)*x395)-x396);

	if (t90 != UINT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x397 = INT16_MAX;
	static int16_t x399 = INT16_MIN;
	volatile int32_t x400 = -1;

	t91 = (((x397<x398)*x399)-x400);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x401 = 4U;
	uint32_t x402 = 300907U;
	static volatile int64_t t92 = 1LL;

	t92 = (((x401<x402)*x403)-x404);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x405 = UINT16_MAX;
	static volatile int32_t x406 = 1;
	int64_t x407 = INT64_MIN;
	uint16_t x408 = 1U;

	t93 = (((x405<x406)*x407)-x408);

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x410 = -1;
	static volatile uint8_t x411 = 7U;
	volatile int64_t x412 = -1LL;
	int64_t t94 = -4LL;

	t94 = (((x409<x410)*x411)-x412);

	if (t94 != 1LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x414 = INT8_MIN;
	static int16_t x415 = INT16_MAX;
	static int64_t x416 = INT64_MAX;

	t95 = (((x413<x414)*x415)-x416);

	if (t95 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x421 = 4339271351672LLU;
	static uint8_t x422 = 2U;
	uint16_t x423 = 23U;
	volatile int32_t t96 = 29770;

	t96 = (((x421<x422)*x423)-x424);

	if (t96 != -65535) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x425 = 8U;
	int16_t x426 = -1;
	int32_t x427 = 86;
	uint64_t x428 = UINT64_MAX;
	uint64_t t97 = 161463763LLU;

	t97 = (((x425<x426)*x427)-x428);

	if (t97 != 1LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x433 = -1LL;
	int16_t x434 = INT16_MAX;
	volatile uint8_t x435 = 13U;
	int8_t x436 = -2;
	static int32_t t98 = 1;

	t98 = (((x433<x434)*x435)-x436);

	if (t98 != 15) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x437 = 38876408U;
	uint64_t x439 = 5491549192752298LLU;
	volatile uint64_t t99 = 0LLU;

	t99 = (((x437<x438)*x439)-x440);

	if (t99 != 1LLU) { NG(); } else { ; }
	
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

