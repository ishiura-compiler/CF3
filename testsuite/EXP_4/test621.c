#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x13 = INT64_MAX;
int32_t x15 = -582233081;
uint64_t x19 = UINT64_MAX;
int32_t t3 = 177461325;
int16_t x32 = -10;
uint64_t x35 = 268591929189335LLU;
int16_t x42 = 1468;
int64_t x47 = INT64_MAX;
int16_t x48 = -1;
int32_t x50 = 24701;
volatile int32_t x58 = INT32_MAX;
int64_t x67 = INT64_MAX;
volatile int32_t t13 = 256448726;
static int16_t x71 = INT16_MIN;
int16_t x73 = 862;
static int16_t x78 = INT16_MIN;
int64_t x79 = -1LL;
static volatile int32_t x80 = -30412670;
volatile int8_t x81 = 8;
int16_t x85 = INT16_MAX;
int64_t x87 = INT64_MIN;
volatile int32_t t18 = -52725241;
int32_t t19 = 1577573;
static uint64_t x105 = UINT64_MAX;
int16_t x107 = INT16_MIN;
int64_t x109 = -29399LL;
int32_t t24 = 25063;
static uint8_t x113 = UINT8_MAX;
volatile int32_t x117 = INT32_MIN;
static uint32_t x125 = 8797U;
uint32_t x126 = 22U;
static int8_t x127 = INT8_MIN;
int64_t x129 = -1051685888231254701LL;
int32_t x140 = -3740351;
volatile int8_t x147 = INT8_MAX;
static int32_t x149 = INT32_MAX;
int8_t x152 = -2;
int8_t x154 = INT8_MAX;
int32_t t34 = -511;
volatile uint32_t x157 = 370U;
static uint64_t x161 = 4363280956428807193LLU;
int32_t x162 = 11349;
static int64_t x168 = -1LL;
static int32_t t37 = 4;
int64_t x169 = INT64_MIN;
static uint64_t x174 = 7911LLU;
volatile int32_t t39 = 2900;
static int32_t t40 = 29552;
volatile int8_t x181 = INT8_MIN;
static int16_t x188 = INT16_MIN;
volatile int32_t t42 = 134842;
int32_t x189 = INT32_MIN;
static int8_t x192 = INT8_MIN;
static int32_t x195 = INT32_MAX;
static int32_t t46 = 186349;
uint8_t x212 = 10U;
int32_t t48 = -102934;
uint64_t x215 = UINT64_MAX;
int32_t x224 = INT32_MAX;
int64_t x231 = INT64_MIN;
int16_t x233 = INT16_MIN;
int32_t x234 = INT32_MIN;
uint8_t x236 = UINT8_MAX;
int32_t t54 = 70;
static volatile int32_t t56 = 407594987;
uint16_t x247 = 1U;
int32_t t58 = 0;
uint8_t x257 = 109U;
volatile int16_t x265 = -1;
volatile int32_t x266 = INT32_MAX;
static volatile int32_t t62 = 14;
int16_t x269 = 9;
int32_t x279 = -3444;
int16_t x281 = INT16_MIN;
int32_t x283 = INT32_MAX;
static uint64_t x289 = UINT64_MAX;
volatile uint8_t x291 = 25U;
uint16_t x292 = UINT16_MAX;
int32_t x293 = INT32_MIN;
volatile int32_t t69 = 585967;
uint64_t x299 = UINT64_MAX;
static int8_t x300 = INT8_MAX;
volatile int8_t x302 = -1;
uint64_t x308 = 126546857383LLU;
int32_t t72 = -4260917;
uint16_t x315 = 66U;
volatile int32_t x317 = INT32_MAX;
int16_t x330 = 13;
int8_t x338 = -1;
static volatile int32_t t80 = 1388218;
int64_t x342 = INT64_MIN;
int32_t x348 = 7229;
uint8_t x354 = 114U;
uint16_t x357 = 207U;
volatile int64_t x361 = -68350487LL;
int16_t x365 = INT16_MIN;
int64_t x368 = -1712840968611LL;
int64_t x375 = -808431747511221LL;
int8_t x376 = -12;
int32_t t90 = 18850;
int16_t x393 = INT16_MIN;
int64_t x408 = INT64_MIN;


void f0(void) {
	int32_t x1 = INT32_MAX;
	int32_t x2 = INT32_MIN;
	uint8_t x3 = UINT8_MAX;
	static int8_t x4 = INT8_MIN;
	static volatile int32_t t0 = 2073;

	t0 = (x1<=(x2<(x3/x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	volatile int32_t x6 = INT32_MIN;
	static volatile int32_t x7 = 4882;
	int32_t x8 = INT32_MAX;
	volatile int32_t t1 = 1;

	t1 = (x5<=(x6<(x7/x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x14 = 11;
	int64_t x16 = -105552180835LL;
	int32_t t2 = 189;

	t2 = (x13<=(x14<(x15/x16)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = 130;
	int16_t x18 = -1;
	static uint32_t x20 = UINT32_MAX;

	t3 = (x17<=(x18<(x19/x20)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = INT16_MAX;
	uint64_t x22 = 1292726LLU;
	static int8_t x23 = INT8_MIN;
	volatile int16_t x24 = -7;
	int32_t t4 = -199;

	t4 = (x21<=(x22<(x23/x24)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x29 = -1;
	uint8_t x30 = 126U;
	volatile uint32_t x31 = UINT32_MAX;
	int32_t t5 = 89780334;

	t5 = (x29<=(x30<(x31/x32)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x33 = 7414932LL;
	uint32_t x34 = UINT32_MAX;
	int8_t x36 = -61;
	volatile int32_t t6 = 36564016;

	t6 = (x33<=(x34<(x35/x36)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x37 = 30U;
	uint64_t x38 = UINT64_MAX;
	uint8_t x39 = 90U;
	int64_t x40 = INT64_MIN;
	int32_t t7 = 493333653;

	t7 = (x37<=(x38<(x39/x40)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x41 = 1;
	int32_t x43 = -4;
	int8_t x44 = INT8_MIN;
	volatile int32_t t8 = -1193254;

	t8 = (x41<=(x42<(x43/x44)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x45 = 210606812LLU;
	static uint64_t x46 = 344058345LLU;
	volatile int32_t t9 = -42;

	t9 = (x45<=(x46<(x47/x48)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x49 = INT8_MAX;
	int64_t x51 = -1LL;
	volatile int16_t x52 = -1;
	int32_t t10 = 216299395;

	t10 = (x49<=(x50<(x51/x52)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x57 = INT64_MIN;
	int64_t x59 = -32227LL;
	uint64_t x60 = 341304032653924515LLU;
	volatile int32_t t11 = -15;

	t11 = (x57<=(x58<(x59/x60)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x61 = INT64_MIN;
	int8_t x62 = -3;
	int64_t x63 = 631920481055711505LL;
	int16_t x64 = 94;
	int32_t t12 = 31354617;

	t12 = (x61<=(x62<(x63/x64)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x65 = 3U;
	uint64_t x66 = 3249003492881904063LLU;
	uint32_t x68 = UINT32_MAX;

	t13 = (x65<=(x66<(x67/x68)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x69 = -1LL;
	static uint8_t x70 = 1U;
	volatile int64_t x72 = -1LL;
	int32_t t14 = 94;

	t14 = (x69<=(x70<(x71/x72)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x74 = 392499U;
	int32_t x75 = INT32_MIN;
	volatile int16_t x76 = -23;
	int32_t t15 = -205;

	t15 = (x73<=(x74<(x75/x76)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x77 = 324LL;
	volatile int32_t t16 = -32;

	t16 = (x77<=(x78<(x79/x80)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x82 = INT8_MAX;
	int16_t x83 = INT16_MIN;
	int16_t x84 = INT16_MAX;
	int32_t t17 = 2914;

	t17 = (x81<=(x82<(x83/x84)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint32_t x86 = 9U;
	int64_t x88 = INT64_MIN;

	t18 = (x85<=(x86<(x87/x88)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x89 = 10947749LLU;
	int8_t x90 = 1;
	int8_t x91 = INT8_MIN;
	uint8_t x92 = 2U;

	t19 = (x89<=(x90<(x91/x92)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x93 = 57U;
	uint16_t x94 = 0U;
	uint16_t x95 = UINT16_MAX;
	int32_t x96 = INT32_MIN;
	volatile int32_t t20 = -159636618;

	t20 = (x93<=(x94<(x95/x96)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x97 = UINT32_MAX;
	uint64_t x98 = 15482043LLU;
	uint32_t x99 = 6499U;
	uint8_t x100 = 8U;
	volatile int32_t t21 = 64;

	t21 = (x97<=(x98<(x99/x100)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x101 = 431U;
	int8_t x102 = INT8_MAX;
	uint16_t x103 = 51U;
	volatile int64_t x104 = -1LL;
	volatile int32_t t22 = -5687;

	t22 = (x101<=(x102<(x103/x104)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int32_t x106 = -1;
	volatile int32_t x108 = INT32_MIN;
	static int32_t t23 = -36145;

	t23 = (x105<=(x106<(x107/x108)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x110 = INT32_MIN;
	static int16_t x111 = INT16_MAX;
	uint16_t x112 = 556U;

	t24 = (x109<=(x110<(x111/x112)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x114 = UINT32_MAX;
	int8_t x115 = -1;
	int8_t x116 = -30;
	int32_t t25 = 6;

	t25 = (x113<=(x114<(x115/x116)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x118 = UINT16_MAX;
	static int64_t x119 = INT64_MAX;
	static uint32_t x120 = UINT32_MAX;
	volatile int32_t t26 = 0;

	t26 = (x117<=(x118<(x119/x120)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x128 = 34855090U;
	volatile int32_t t27 = 971015642;

	t27 = (x125<=(x126<(x127/x128)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x130 = 1;
	static uint64_t x131 = UINT64_MAX;
	static uint8_t x132 = 45U;
	volatile int32_t t28 = 116236;

	t28 = (x129<=(x130<(x131/x132)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x133 = INT16_MIN;
	int16_t x134 = 3542;
	volatile int64_t x135 = INT64_MIN;
	static int32_t x136 = INT32_MIN;
	static int32_t t29 = -23881907;

	t29 = (x133<=(x134<(x135/x136)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x137 = INT16_MIN;
	int64_t x138 = -170578373LL;
	int32_t x139 = INT32_MAX;
	int32_t t30 = -645654513;

	t30 = (x137<=(x138<(x139/x140)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x141 = INT16_MIN;
	static uint16_t x142 = 1U;
	int16_t x143 = 11;
	uint16_t x144 = 130U;
	int32_t t31 = -18;

	t31 = (x141<=(x142<(x143/x144)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x145 = 5U;
	int32_t x146 = INT32_MAX;
	int32_t x148 = -195588;
	static int32_t t32 = 13696;

	t32 = (x145<=(x146<(x147/x148)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x150 = UINT64_MAX;
	volatile int64_t x151 = INT64_MAX;
	volatile int32_t t33 = 1738;

	t33 = (x149<=(x150<(x151/x152)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x153 = INT64_MIN;
	volatile uint64_t x155 = 218346LLU;
	volatile int8_t x156 = INT8_MAX;

	t34 = (x153<=(x154<(x155/x156)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x158 = -4040;
	int8_t x159 = -23;
	uint32_t x160 = UINT32_MAX;
	volatile int32_t t35 = 0;

	t35 = (x157<=(x158<(x159/x160)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x163 = INT64_MIN;
	uint8_t x164 = UINT8_MAX;
	volatile int32_t t36 = 17911759;

	t36 = (x161<=(x162<(x163/x164)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x165 = -1;
	int32_t x166 = -1287;
	int8_t x167 = INT8_MIN;

	t37 = (x165<=(x166<(x167/x168)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x170 = 7;
	volatile int32_t x171 = INT32_MAX;
	int16_t x172 = INT16_MIN;
	volatile int32_t t38 = -2;

	t38 = (x169<=(x170<(x171/x172)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x173 = -194406693217927LL;
	uint32_t x175 = UINT32_MAX;
	int64_t x176 = -3073291641722225944LL;

	t39 = (x173<=(x174<(x175/x176)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x177 = INT64_MAX;
	int16_t x178 = -1;
	uint32_t x179 = 0U;
	static int64_t x180 = INT64_MIN;

	t40 = (x177<=(x178<(x179/x180)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x182 = UINT8_MAX;
	uint16_t x183 = UINT16_MAX;
	uint8_t x184 = 4U;
	volatile int32_t t41 = 59125982;

	t41 = (x181<=(x182<(x183/x184)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x185 = INT64_MIN;
	int64_t x186 = -1LL;
	volatile int16_t x187 = 12;

	t42 = (x185<=(x186<(x187/x188)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x190 = -1;
	uint64_t x191 = UINT64_MAX;
	int32_t t43 = -1;

	t43 = (x189<=(x190<(x191/x192)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x193 = 89492405140LL;
	static int64_t x194 = -1LL;
	volatile uint32_t x196 = UINT32_MAX;
	int32_t t44 = -14021828;

	t44 = (x193<=(x194<(x195/x196)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x197 = INT32_MIN;
	volatile int32_t x198 = INT32_MIN;
	volatile uint64_t x199 = 512141224841495LLU;
	uint64_t x200 = 64146LLU;
	int32_t t45 = 63665412;

	t45 = (x197<=(x198<(x199/x200)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x201 = -23;
	static uint64_t x202 = UINT64_MAX;
	volatile uint32_t x203 = 2394U;
	volatile int16_t x204 = -1;

	t46 = (x201<=(x202<(x203/x204)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x205 = INT32_MIN;
	volatile uint64_t x206 = 838190354841442697LLU;
	volatile int32_t x207 = INT32_MIN;
	static int16_t x208 = INT16_MIN;
	volatile int32_t t47 = 44015;

	t47 = (x205<=(x206<(x207/x208)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x209 = 0U;
	int8_t x210 = INT8_MAX;
	uint8_t x211 = UINT8_MAX;

	t48 = (x209<=(x210<(x211/x212)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x213 = INT8_MAX;
	int8_t x214 = INT8_MIN;
	int8_t x216 = 54;
	int32_t t49 = 446612289;

	t49 = (x213<=(x214<(x215/x216)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x217 = 484LLU;
	static int64_t x218 = -5250LL;
	int8_t x219 = INT8_MIN;
	static uint8_t x220 = UINT8_MAX;
	static int32_t t50 = 1;

	t50 = (x217<=(x218<(x219/x220)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x221 = 3318LL;
	static volatile uint8_t x222 = 8U;
	uint16_t x223 = 1929U;
	volatile int32_t t51 = -4511;

	t51 = (x221<=(x222<(x223/x224)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x225 = INT32_MIN;
	int8_t x226 = -1;
	int32_t x227 = -7617869;
	uint32_t x228 = UINT32_MAX;
	volatile int32_t t52 = 110;

	t52 = (x225<=(x226<(x227/x228)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x229 = INT8_MIN;
	static volatile int32_t x230 = INT32_MIN;
	uint32_t x232 = UINT32_MAX;
	static int32_t t53 = -399744438;

	t53 = (x229<=(x230<(x231/x232)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x235 = -6631853038LL;

	t54 = (x233<=(x234<(x235/x236)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x237 = 44382772550768LL;
	int64_t x238 = -91231326LL;
	static volatile uint32_t x239 = UINT32_MAX;
	int16_t x240 = INT16_MAX;
	static int32_t t55 = 184096016;

	t55 = (x237<=(x238<(x239/x240)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x241 = UINT16_MAX;
	static int64_t x242 = INT64_MAX;
	static int16_t x243 = INT16_MIN;
	static int16_t x244 = INT16_MIN;

	t56 = (x241<=(x242<(x243/x244)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x245 = 120;
	static int8_t x246 = 1;
	int64_t x248 = INT64_MIN;
	static int32_t t57 = -93113;

	t57 = (x245<=(x246<(x247/x248)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint8_t x249 = 1U;
	volatile int8_t x250 = INT8_MAX;
	uint16_t x251 = 882U;
	int16_t x252 = INT16_MIN;

	t58 = (x249<=(x250<(x251/x252)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x253 = UINT16_MAX;
	static uint16_t x254 = 1U;
	int8_t x255 = -51;
	int8_t x256 = INT8_MIN;
	volatile int32_t t59 = -14306815;

	t59 = (x253<=(x254<(x255/x256)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x258 = INT8_MIN;
	int64_t x259 = INT64_MIN;
	int8_t x260 = INT8_MAX;
	static volatile int32_t t60 = 210;

	t60 = (x257<=(x258<(x259/x260)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x261 = 2U;
	static int8_t x262 = INT8_MAX;
	uint64_t x263 = UINT64_MAX;
	int32_t x264 = INT32_MIN;
	static int32_t t61 = 222824;

	t61 = (x261<=(x262<(x263/x264)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x267 = 9U;
	uint16_t x268 = 12U;

	t62 = (x265<=(x266<(x267/x268)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x270 = 8433LLU;
	volatile int8_t x271 = -16;
	uint16_t x272 = UINT16_MAX;
	volatile int32_t t63 = 433483990;

	t63 = (x269<=(x270<(x271/x272)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x273 = INT16_MAX;
	static uint16_t x274 = UINT16_MAX;
	volatile int8_t x275 = -1;
	static int8_t x276 = INT8_MAX;
	static volatile int32_t t64 = 875;

	t64 = (x273<=(x274<(x275/x276)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x277 = -1;
	int64_t x278 = 388170683084610132LL;
	static uint8_t x280 = UINT8_MAX;
	static volatile int32_t t65 = -52;

	t65 = (x277<=(x278<(x279/x280)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x282 = INT8_MAX;
	int32_t x284 = -3590157;
	volatile int32_t t66 = -239349;

	t66 = (x281<=(x282<(x283/x284)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x285 = -1;
	volatile int32_t x286 = -1811;
	static int64_t x287 = -1LL;
	uint32_t x288 = UINT32_MAX;
	int32_t t67 = -94500;

	t67 = (x285<=(x286<(x287/x288)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x290 = INT64_MIN;
	volatile int32_t t68 = 2384098;

	t68 = (x289<=(x290<(x291/x292)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x294 = -51;
	static int16_t x295 = 0;
	uint16_t x296 = 9U;

	t69 = (x293<=(x294<(x295/x296)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x297 = 15;
	uint64_t x298 = 2117799LLU;
	volatile int32_t t70 = 34969;

	t70 = (x297<=(x298<(x299/x300)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x301 = 1LLU;
	int64_t x303 = INT64_MAX;
	uint64_t x304 = UINT64_MAX;
	int32_t t71 = -129160;

	t71 = (x301<=(x302<(x303/x304)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x305 = -22879;
	static int16_t x306 = 1;
	volatile int8_t x307 = -4;

	t72 = (x305<=(x306<(x307/x308)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x309 = -56;
	int16_t x310 = 11495;
	uint16_t x311 = 6U;
	static volatile uint32_t x312 = UINT32_MAX;
	volatile int32_t t73 = -621437;

	t73 = (x309<=(x310<(x311/x312)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int16_t x313 = INT16_MAX;
	int64_t x314 = INT64_MAX;
	int32_t x316 = INT32_MIN;
	static volatile int32_t t74 = 11180;

	t74 = (x313<=(x314<(x315/x316)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x318 = -1LL;
	int16_t x319 = -30;
	int8_t x320 = 1;
	int32_t t75 = 7156847;

	t75 = (x317<=(x318<(x319/x320)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x321 = INT16_MAX;
	int32_t x322 = INT32_MIN;
	int16_t x323 = INT16_MIN;
	volatile uint32_t x324 = UINT32_MAX;
	int32_t t76 = 489653143;

	t76 = (x321<=(x322<(x323/x324)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x325 = -1;
	volatile int16_t x326 = -13;
	uint16_t x327 = UINT16_MAX;
	int32_t x328 = INT32_MAX;
	volatile int32_t t77 = 19;

	t77 = (x325<=(x326<(x327/x328)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x329 = 9334814LLU;
	volatile uint16_t x331 = 147U;
	int32_t x332 = INT32_MIN;
	int32_t t78 = 174;

	t78 = (x329<=(x330<(x331/x332)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x333 = -1;
	int32_t x334 = -1;
	int16_t x335 = INT16_MIN;
	int64_t x336 = 149488LL;
	int32_t t79 = -30;

	t79 = (x333<=(x334<(x335/x336)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x337 = 56692U;
	int64_t x339 = INT64_MIN;
	int64_t x340 = -263767939392041LL;

	t80 = (x337<=(x338<(x339/x340)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint16_t x341 = 48U;
	uint32_t x343 = 1U;
	volatile int8_t x344 = INT8_MIN;
	int32_t t81 = 988043;

	t81 = (x341<=(x342<(x343/x344)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x345 = 123;
	int8_t x346 = INT8_MIN;
	uint32_t x347 = UINT32_MAX;
	volatile int32_t t82 = 217928;

	t82 = (x345<=(x346<(x347/x348)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x349 = 1;
	volatile int64_t x350 = -58LL;
	int64_t x351 = 113LL;
	static int32_t x352 = -1;
	static volatile int32_t t83 = 7976;

	t83 = (x349<=(x350<(x351/x352)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x353 = INT16_MIN;
	int16_t x355 = -1;
	uint16_t x356 = 10097U;
	int32_t t84 = -2;

	t84 = (x353<=(x354<(x355/x356)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x358 = -1680LL;
	volatile int64_t x359 = -1LL;
	static uint32_t x360 = UINT32_MAX;
	volatile int32_t t85 = -208317560;

	t85 = (x357<=(x358<(x359/x360)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x362 = 1U;
	uint8_t x363 = 6U;
	int32_t x364 = INT32_MIN;
	volatile int32_t t86 = -453022733;

	t86 = (x361<=(x362<(x363/x364)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x366 = INT16_MIN;
	int16_t x367 = -1;
	volatile int32_t t87 = 96741;

	t87 = (x365<=(x366<(x367/x368)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x369 = 3U;
	int32_t x370 = 54889;
	static int32_t x371 = -1;
	int32_t x372 = 58433;
	volatile int32_t t88 = 1216457;

	t88 = (x369<=(x370<(x371/x372)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x373 = 7536U;
	int8_t x374 = INT8_MAX;
	volatile int32_t t89 = 120447928;

	t89 = (x373<=(x374<(x375/x376)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x377 = INT64_MIN;
	uint32_t x378 = UINT32_MAX;
	uint8_t x379 = 114U;
	uint16_t x380 = 19227U;

	t90 = (x377<=(x378<(x379/x380)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x381 = 61U;
	volatile uint32_t x382 = 579U;
	int8_t x383 = -33;
	int16_t x384 = -2;
	static volatile int32_t t91 = 2828375;

	t91 = (x381<=(x382<(x383/x384)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x385 = -1;
	uint16_t x386 = UINT16_MAX;
	int32_t x387 = -56547;
	volatile int32_t x388 = INT32_MIN;
	int32_t t92 = -416178064;

	t92 = (x385<=(x386<(x387/x388)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x389 = 131541U;
	volatile uint64_t x390 = 3219775082LLU;
	uint16_t x391 = 1203U;
	static int16_t x392 = INT16_MAX;
	volatile int32_t t93 = -5383594;

	t93 = (x389<=(x390<(x391/x392)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x394 = UINT8_MAX;
	int8_t x395 = -1;
	uint16_t x396 = UINT16_MAX;
	volatile int32_t t94 = -4;

	t94 = (x393<=(x394<(x395/x396)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x397 = UINT8_MAX;
	uint8_t x398 = 0U;
	uint32_t x399 = 26669U;
	static int64_t x400 = INT64_MIN;
	volatile int32_t t95 = -339485;

	t95 = (x397<=(x398<(x399/x400)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x401 = INT64_MAX;
	int16_t x402 = 706;
	volatile int8_t x403 = INT8_MAX;
	volatile int8_t x404 = 1;
	int32_t t96 = -3499;

	t96 = (x401<=(x402<(x403/x404)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x405 = 6518517091LL;
	static int8_t x406 = INT8_MIN;
	static int8_t x407 = INT8_MIN;
	volatile int32_t t97 = -14005;

	t97 = (x405<=(x406<(x407/x408)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x409 = 19297560U;
	int16_t x410 = 0;
	static int64_t x411 = INT64_MIN;
	static uint64_t x412 = 1LLU;
	static volatile int32_t t98 = -23790;

	t98 = (x409<=(x410<(x411/x412)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x413 = INT8_MAX;
	static int64_t x414 = INT64_MIN;
	volatile int8_t x415 = 1;
	volatile int32_t x416 = -1;
	volatile int32_t t99 = 696;

	t99 = (x413<=(x414<(x415/x416)));

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

