#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x10 = -46118747770717LL;
static int32_t x13 = INT32_MIN;
uint16_t x14 = 2U;
volatile int64_t x24 = 1234634LL;
volatile int8_t x25 = -52;
int8_t x26 = INT8_MIN;
static int32_t x27 = -1;
static volatile uint8_t x31 = 23U;
int32_t x34 = INT32_MIN;
int64_t x36 = INT64_MIN;
volatile int32_t t8 = 41963748;
int32_t x37 = -1;
uint8_t x38 = 1U;
static volatile int32_t x45 = 645;
int32_t t12 = 1;
uint16_t x53 = UINT16_MAX;
int8_t x56 = INT8_MAX;
static uint8_t x59 = UINT8_MAX;
static int8_t x70 = INT8_MIN;
static volatile uint32_t x80 = 6687U;
int64_t x84 = -1LL;
int16_t x92 = -639;
static volatile int32_t t20 = 246;
int8_t x96 = INT8_MAX;
uint32_t x117 = 2001630003U;
volatile int32_t x126 = 36923980;
uint32_t x129 = 1542U;
static int64_t x132 = 9938638362306141LL;
static uint8_t x135 = UINT8_MAX;
static uint64_t t30 = 316717458003703054LLU;
int32_t t31 = 10030379;
int32_t t32 = 2;
uint8_t x147 = 2U;
volatile int64_t x155 = INT64_MIN;
int32_t x159 = -1;
volatile int8_t x165 = INT8_MAX;
uint8_t x169 = 3U;
int8_t x175 = -1;
int64_t x177 = INT64_MIN;
static int8_t x180 = -22;
int64_t t41 = INT64_MIN;
uint32_t x182 = 108U;
uint32_t x183 = 5687103U;
int32_t x189 = INT32_MIN;
uint8_t x192 = 6U;
uint32_t x193 = UINT32_MAX;
static volatile uint64_t x195 = 1503LLU;
volatile int64_t x201 = -1LL;
uint16_t x203 = 43U;
static volatile int64_t t46 = -132LL;
int32_t t47 = 725;
int16_t x240 = 1;
uint16_t x242 = 11U;
int16_t x250 = INT16_MAX;
int16_t x252 = INT16_MAX;
volatile int8_t x258 = INT8_MAX;
static volatile uint16_t x261 = 12893U;
static uint64_t x262 = UINT64_MAX;
uint32_t x263 = 143U;
uint8_t x265 = 13U;
volatile int32_t t62 = -947;
int8_t x271 = -25;
static volatile uint16_t x274 = 546U;
static int8_t x275 = -2;
volatile int32_t t64 = 132377132;
volatile int64_t x284 = INT64_MAX;
volatile uint16_t x295 = UINT16_MAX;
uint64_t x300 = UINT64_MAX;
volatile int64_t t69 = INT64_MAX;
int16_t x301 = -999;
int64_t x302 = INT64_MAX;
int64_t x304 = -2056246362LL;
static uint32_t x308 = 967U;
int64_t x311 = -257700487794155LL;
int8_t x314 = 0;
static uint64_t x322 = 83498944440758010LLU;
int32_t x323 = INT32_MIN;
int64_t x324 = -1LL;
volatile int8_t x326 = INT8_MAX;
uint64_t x330 = 7871LLU;
uint64_t x332 = 56LLU;
int8_t x336 = -1;
int64_t t81 = -4639999LL;
volatile int32_t t85 = -2601948;
static int16_t x370 = INT16_MIN;
volatile int16_t x377 = -123;
int32_t x383 = INT32_MIN;
uint8_t x384 = UINT8_MAX;
int64_t x394 = INT64_MIN;
static volatile uint8_t x397 = 0U;
uint32_t x401 = 104338U;
uint64_t x405 = 1330665LLU;
int16_t x406 = INT16_MIN;
int16_t x408 = -1;
static uint64_t t96 = 7172361LLU;


void f0(void) {
	volatile int64_t x1 = INT64_MIN;
	static volatile int16_t x2 = -407;
	static uint8_t x3 = 17U;
	int64_t x4 = INT64_MAX;
	int64_t t0 = -731665440997LL;

	t0 = (x1+(x2<=(x3/x4)));

	if (t0 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = INT16_MIN;
	int8_t x6 = 1;
	static int16_t x7 = INT16_MAX;
	uint32_t x8 = 363088600U;
	volatile int32_t t1 = -14513395;

	t1 = (x5+(x6<=(x7/x8)));

	if (t1 != -32768) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	int64_t x11 = 1683815233LL;
	int32_t x12 = 48692087;
	volatile int64_t t2 = 149906LL;

	t2 = (x9+(x10<=(x11/x12)));

	if (t2 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x15 = 6U;
	uint16_t x16 = UINT16_MAX;
	int32_t t3 = INT32_MIN;

	t3 = (x13+(x14<=(x15/x16)));

	if (t3 != INT32_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = -1;
	volatile uint16_t x18 = 53U;
	int8_t x19 = INT8_MIN;
	int16_t x20 = -1607;
	int32_t t4 = -4280149;

	t4 = (x17+(x18<=(x19/x20)));

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = INT64_MIN;
	int8_t x22 = INT8_MAX;
	int16_t x23 = -1;
	int64_t t5 = INT64_MIN;

	t5 = (x21+(x22<=(x23/x24)));

	if (t5 != INT64_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x28 = INT64_MAX;
	int32_t t6 = 4;

	t6 = (x25+(x26<=(x27/x28)));

	if (t6 != -51) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -1;
	int32_t x30 = INT32_MIN;
	uint8_t x32 = UINT8_MAX;
	static int32_t t7 = -19;

	t7 = (x29+(x30<=(x31/x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = 2325170;
	int8_t x35 = -1;

	t8 = (x33+(x34<=(x35/x36)));

	if (t8 != 2325171) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x39 = -919;
	int16_t x40 = -1;
	static int32_t t9 = 983;

	t9 = (x37+(x38<=(x39/x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x41 = UINT16_MAX;
	int32_t x42 = INT32_MIN;
	int64_t x43 = 10003153260580LL;
	int16_t x44 = 4455;
	volatile int32_t t10 = 195124118;

	t10 = (x41+(x42<=(x43/x44)));

	if (t10 != 65536) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x46 = 1U;
	volatile int16_t x47 = INT16_MAX;
	int64_t x48 = 26125485636LL;
	int32_t t11 = -19;

	t11 = (x45+(x46<=(x47/x48)));

	if (t11 != 645) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = -16;
	int64_t x50 = INT64_MIN;
	int32_t x51 = -1;
	int8_t x52 = 1;

	t12 = (x49+(x50<=(x51/x52)));

	if (t12 != -15) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x54 = INT64_MAX;
	uint32_t x55 = 6664617U;
	volatile int32_t t13 = 3893;

	t13 = (x53+(x54<=(x55/x56)));

	if (t13 != 65535) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x57 = 1018003;
	int64_t x58 = -1LL;
	volatile int32_t x60 = INT32_MIN;
	int32_t t14 = -17630;

	t14 = (x57+(x58<=(x59/x60)));

	if (t14 != 1018004) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = -1LL;
	int8_t x66 = INT8_MIN;
	static volatile int8_t x67 = INT8_MIN;
	volatile int64_t x68 = INT64_MIN;
	volatile int64_t t15 = -776477001168527565LL;

	t15 = (x65+(x66<=(x67/x68)));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x69 = UINT64_MAX;
	uint64_t x71 = 3LLU;
	int16_t x72 = INT16_MAX;
	volatile uint64_t t16 = UINT64_MAX;

	t16 = (x69+(x70<=(x71/x72)));

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x77 = INT16_MAX;
	int8_t x78 = INT8_MIN;
	int8_t x79 = -1;
	int32_t t17 = -45;

	t17 = (x77+(x78<=(x79/x80)));

	if (t17 != 32767) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x81 = UINT16_MAX;
	uint64_t x82 = 4663058073255726LLU;
	uint32_t x83 = UINT32_MAX;
	int32_t t18 = -3915;

	t18 = (x81+(x82<=(x83/x84)));

	if (t18 != 65536) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x85 = -98;
	volatile int32_t x86 = -1;
	int64_t x87 = INT64_MAX;
	int16_t x88 = 1;
	volatile int32_t t19 = 15722983;

	t19 = (x85+(x86<=(x87/x88)));

	if (t19 != -97) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x89 = -48;
	int16_t x90 = -1;
	int64_t x91 = INT64_MAX;

	t20 = (x89+(x90<=(x91/x92)));

	if (t20 != -48) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x93 = UINT64_MAX;
	int64_t x94 = INT64_MIN;
	int16_t x95 = 73;
	uint64_t t21 = 509072969LLU;

	t21 = (x93+(x94<=(x95/x96)));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x97 = 40993579632LL;
	volatile int8_t x98 = INT8_MIN;
	uint16_t x99 = UINT16_MAX;
	int64_t x100 = -1LL;
	volatile int64_t t22 = 28324512854809412LL;

	t22 = (x97+(x98<=(x99/x100)));

	if (t22 != 40993579632LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x101 = 5;
	int8_t x102 = 0;
	volatile int64_t x103 = INT64_MAX;
	volatile int32_t x104 = -3942;
	int32_t t23 = -208891058;

	t23 = (x101+(x102<=(x103/x104)));

	if (t23 != 5) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x105 = 0U;
	uint8_t x106 = UINT8_MAX;
	int8_t x107 = INT8_MAX;
	int16_t x108 = 246;
	int32_t t24 = -16356168;

	t24 = (x105+(x106<=(x107/x108)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x109 = INT16_MIN;
	volatile int16_t x110 = -24;
	uint8_t x111 = 0U;
	static int64_t x112 = 6442LL;
	volatile int32_t t25 = 0;

	t25 = (x109+(x110<=(x111/x112)));

	if (t25 != -32767) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x113 = -41;
	static int64_t x114 = 58621472811612LL;
	static int8_t x115 = -1;
	int8_t x116 = INT8_MAX;
	volatile int32_t t26 = 126135280;

	t26 = (x113+(x114<=(x115/x116)));

	if (t26 != -41) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x118 = INT8_MIN;
	int32_t x119 = INT32_MAX;
	uint8_t x120 = 121U;
	volatile uint32_t t27 = 330225972U;

	t27 = (x117+(x118<=(x119/x120)));

	if (t27 != 2001630004U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x125 = UINT32_MAX;
	static int32_t x127 = 1;
	int16_t x128 = INT16_MAX;
	uint32_t t28 = UINT32_MAX;

	t28 = (x125+(x126<=(x127/x128)));

	if (t28 != UINT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x130 = 76U;
	int64_t x131 = INT64_MIN;
	volatile uint32_t t29 = 1625401236U;

	t29 = (x129+(x130<=(x131/x132)));

	if (t29 != 1542U) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x133 = 28848116LLU;
	volatile int16_t x134 = INT16_MAX;
	int32_t x136 = INT32_MAX;

	t30 = (x133+(x134<=(x135/x136)));

	if (t30 != 28848116LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x137 = -1;
	int64_t x138 = INT64_MIN;
	static int16_t x139 = -1;
	uint64_t x140 = 1017987260LLU;

	t31 = (x137+(x138<=(x139/x140)));

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x141 = -1;
	static volatile int8_t x142 = 12;
	volatile uint16_t x143 = UINT16_MAX;
	uint16_t x144 = 6756U;

	t32 = (x141+(x142<=(x143/x144)));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x145 = -2076;
	int8_t x146 = -1;
	volatile uint32_t x148 = 5763U;
	int32_t t33 = -8211;

	t33 = (x145+(x146<=(x147/x148)));

	if (t33 != -2076) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x149 = -15611741892162770LL;
	int8_t x150 = -1;
	uint8_t x151 = 35U;
	uint64_t x152 = UINT64_MAX;
	static volatile int64_t t34 = 226606257441479390LL;

	t34 = (x149+(x150<=(x151/x152)));

	if (t34 != -15611741892162770LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x153 = -983;
	uint32_t x154 = 42058464U;
	int8_t x156 = INT8_MAX;
	volatile int32_t t35 = 411;

	t35 = (x153+(x154<=(x155/x156)));

	if (t35 != -983) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x157 = 3628923653667030480LLU;
	volatile int8_t x158 = 20;
	static int64_t x160 = 4548LL;
	uint64_t t36 = 102111760LLU;

	t36 = (x157+(x158<=(x159/x160)));

	if (t36 != 3628923653667030480LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x161 = -79;
	volatile int16_t x162 = 2184;
	int16_t x163 = INT16_MAX;
	int32_t x164 = INT32_MAX;
	volatile int32_t t37 = 45169;

	t37 = (x161+(x162<=(x163/x164)));

	if (t37 != -79) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x166 = 200253732U;
	uint8_t x167 = UINT8_MAX;
	int64_t x168 = 71294LL;
	int32_t t38 = 9253;

	t38 = (x165+(x166<=(x167/x168)));

	if (t38 != 127) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x170 = 6955388516789798LL;
	uint16_t x171 = 0U;
	volatile int8_t x172 = INT8_MAX;
	int32_t t39 = -2146;

	t39 = (x169+(x170<=(x171/x172)));

	if (t39 != 3) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x173 = INT8_MAX;
	static volatile uint64_t x174 = 120452466672LLU;
	int8_t x176 = -1;
	int32_t t40 = 29;

	t40 = (x173+(x174<=(x175/x176)));

	if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x178 = INT16_MAX;
	uint8_t x179 = UINT8_MAX;

	t41 = (x177+(x178<=(x179/x180)));

	if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x181 = 2U;
	static int16_t x184 = INT16_MIN;
	static volatile int32_t t42 = 563015;

	t42 = (x181+(x182<=(x183/x184)));

	if (t42 != 2) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x190 = -1;
	uint8_t x191 = 12U;
	int32_t t43 = 111;

	t43 = (x189+(x190<=(x191/x192)));

	if (t43 != -2147483647) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x194 = -8;
	static int32_t x196 = 1745;
	uint32_t t44 = UINT32_MAX;

	t44 = (x193+(x194<=(x195/x196)));

	if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x197 = INT32_MIN;
	volatile uint32_t x198 = UINT32_MAX;
	uint64_t x199 = UINT64_MAX;
	int64_t x200 = -3878737387LL;
	int32_t t45 = INT32_MIN;

	t45 = (x197+(x198<=(x199/x200)));

	if (t45 != INT32_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x202 = INT8_MIN;
	int64_t x204 = INT64_MIN;

	t46 = (x201+(x202<=(x203/x204)));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x205 = INT8_MAX;
	uint64_t x206 = 9324787975364281LLU;
	uint32_t x207 = UINT32_MAX;
	static int16_t x208 = -1;

	t47 = (x205+(x206<=(x207/x208)));

	if (t47 != 127) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x209 = 2LLU;
	volatile int8_t x210 = INT8_MIN;
	int8_t x211 = INT8_MAX;
	volatile int8_t x212 = INT8_MIN;
	volatile uint64_t t48 = 100LLU;

	t48 = (x209+(x210<=(x211/x212)));

	if (t48 != 3LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x213 = 9;
	int8_t x214 = INT8_MIN;
	uint64_t x215 = 31674LLU;
	volatile int8_t x216 = INT8_MIN;
	volatile int32_t t49 = -75448;

	t49 = (x213+(x214<=(x215/x216)));

	if (t49 != 9) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x217 = 18501U;
	volatile int8_t x218 = -1;
	static volatile uint32_t x219 = 117457U;
	volatile int8_t x220 = INT8_MAX;
	volatile int32_t t50 = 7692;

	t50 = (x217+(x218<=(x219/x220)));

	if (t50 != 18501) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x221 = UINT8_MAX;
	static volatile uint64_t x222 = 14820LLU;
	static uint8_t x223 = 0U;
	volatile uint16_t x224 = 5151U;
	volatile int32_t t51 = 0;

	t51 = (x221+(x222<=(x223/x224)));

	if (t51 != 255) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x225 = INT32_MIN;
	int8_t x226 = -3;
	int64_t x227 = -209437357869909680LL;
	uint64_t x228 = 2248055813718LLU;
	volatile int32_t t52 = INT32_MIN;

	t52 = (x225+(x226<=(x227/x228)));

	if (t52 != INT32_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x229 = 7U;
	int8_t x230 = 2;
	int32_t x231 = -182318;
	volatile int32_t x232 = INT32_MIN;
	int32_t t53 = 2779007;

	t53 = (x229+(x230<=(x231/x232)));

	if (t53 != 7) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x233 = -1LL;
	static int8_t x234 = INT8_MIN;
	int8_t x235 = INT8_MIN;
	volatile uint64_t x236 = UINT64_MAX;
	int64_t t54 = 6LL;

	t54 = (x233+(x234<=(x235/x236)));

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x237 = UINT64_MAX;
	static uint32_t x238 = UINT32_MAX;
	static volatile int32_t x239 = INT32_MIN;
	uint64_t t55 = UINT64_MAX;

	t55 = (x237+(x238<=(x239/x240)));

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x241 = INT16_MAX;
	static volatile uint8_t x243 = 2U;
	uint32_t x244 = UINT32_MAX;
	volatile int32_t t56 = 3214;

	t56 = (x241+(x242<=(x243/x244)));

	if (t56 != 32767) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x245 = INT8_MIN;
	uint16_t x246 = 6U;
	int16_t x247 = -1;
	int64_t x248 = -240054477LL;
	volatile int32_t t57 = 1810;

	t57 = (x245+(x246<=(x247/x248)));

	if (t57 != -128) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x249 = INT16_MIN;
	int32_t x251 = -1;
	int32_t t58 = 4900;

	t58 = (x249+(x250<=(x251/x252)));

	if (t58 != -32768) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x253 = -11112;
	int8_t x254 = 9;
	uint32_t x255 = UINT32_MAX;
	uint16_t x256 = UINT16_MAX;
	volatile int32_t t59 = 313452;

	t59 = (x253+(x254<=(x255/x256)));

	if (t59 != -11111) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x257 = -1;
	uint8_t x259 = 32U;
	static volatile int16_t x260 = -3830;
	volatile int32_t t60 = 123527086;

	t60 = (x257+(x258<=(x259/x260)));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x264 = INT8_MIN;
	static int32_t t61 = 1;

	t61 = (x261+(x262<=(x263/x264)));

	if (t61 != 12893) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x266 = -1;
	volatile int8_t x267 = -1;
	volatile int16_t x268 = INT16_MAX;

	t62 = (x265+(x266<=(x267/x268)));

	if (t62 != 14) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x269 = -123319;
	int64_t x270 = INT64_MIN;
	int64_t x272 = INT64_MIN;
	int32_t t63 = -205;

	t63 = (x269+(x270<=(x271/x272)));

	if (t63 != -123318) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x273 = UINT16_MAX;
	static int32_t x276 = -1;

	t64 = (x273+(x274<=(x275/x276)));

	if (t64 != 65535) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x277 = 0U;
	int32_t x278 = INT32_MIN;
	volatile uint8_t x279 = 0U;
	static int8_t x280 = -1;
	volatile uint32_t t65 = 13815U;

	t65 = (x277+(x278<=(x279/x280)));

	if (t65 != 1U) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x281 = INT32_MAX;
	uint8_t x282 = 4U;
	static int8_t x283 = -8;
	static int32_t t66 = INT32_MAX;

	t66 = (x281+(x282<=(x283/x284)));

	if (t66 != INT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x285 = -14;
	volatile int8_t x286 = 3;
	int64_t x287 = INT64_MIN;
	volatile int16_t x288 = INT16_MAX;
	int32_t t67 = -7457264;

	t67 = (x285+(x286<=(x287/x288)));

	if (t67 != -14) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x293 = UINT64_MAX;
	static uint64_t x294 = UINT64_MAX;
	int16_t x296 = 51;
	volatile uint64_t t68 = UINT64_MAX;

	t68 = (x293+(x294<=(x295/x296)));

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x297 = INT64_MAX;
	int16_t x298 = -2309;
	int64_t x299 = INT64_MAX;

	t69 = (x297+(x298<=(x299/x300)));

	if (t69 != INT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x303 = UINT16_MAX;
	int32_t t70 = -159;

	t70 = (x301+(x302<=(x303/x304)));

	if (t70 != -999) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int8_t x305 = INT8_MIN;
	int16_t x306 = INT16_MIN;
	static uint64_t x307 = 19158497LLU;
	int32_t t71 = -132161140;

	t71 = (x305+(x306<=(x307/x308)));

	if (t71 != -128) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x309 = INT32_MIN;
	volatile int8_t x310 = -1;
	static int16_t x312 = 31;
	static int32_t t72 = INT32_MIN;

	t72 = (x309+(x310<=(x311/x312)));

	if (t72 != INT32_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x313 = INT16_MIN;
	int64_t x315 = 430977007LL;
	uint32_t x316 = 139146091U;
	int32_t t73 = 211599;

	t73 = (x313+(x314<=(x315/x316)));

	if (t73 != -32767) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x317 = UINT32_MAX;
	volatile uint16_t x318 = 872U;
	static volatile uint8_t x319 = 1U;
	static volatile int16_t x320 = -1;
	uint32_t t74 = UINT32_MAX;

	t74 = (x317+(x318<=(x319/x320)));

	if (t74 != UINT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x321 = INT16_MAX;
	static volatile int32_t t75 = 113441;

	t75 = (x321+(x322<=(x323/x324)));

	if (t75 != 32767) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x325 = INT32_MAX;
	int64_t x327 = 0LL;
	uint32_t x328 = UINT32_MAX;
	int32_t t76 = INT32_MAX;

	t76 = (x325+(x326<=(x327/x328)));

	if (t76 != INT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x329 = 1313;
	static volatile int64_t x331 = INT64_MIN;
	static volatile int32_t t77 = 65573705;

	t77 = (x329+(x330<=(x331/x332)));

	if (t77 != 1314) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x333 = -9003;
	int16_t x334 = -39;
	uint64_t x335 = UINT64_MAX;
	static volatile int32_t t78 = 214862798;

	t78 = (x333+(x334<=(x335/x336)));

	if (t78 != -9003) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x337 = INT8_MIN;
	int8_t x338 = -1;
	uint16_t x339 = UINT16_MAX;
	volatile int8_t x340 = -1;
	int32_t t79 = 2020;

	t79 = (x337+(x338<=(x339/x340)));

	if (t79 != -128) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x341 = 433U;
	int16_t x342 = INT16_MIN;
	int64_t x343 = -1LL;
	uint64_t x344 = 15572LLU;
	volatile int32_t t80 = -60136738;

	t80 = (x341+(x342<=(x343/x344)));

	if (t80 != 433) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x345 = -1LL;
	static int16_t x346 = -7;
	uint32_t x347 = 1234U;
	uint16_t x348 = UINT16_MAX;

	t81 = (x345+(x346<=(x347/x348)));

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x349 = 58614LL;
	uint8_t x350 = 0U;
	int8_t x351 = INT8_MIN;
	uint64_t x352 = 11785327643LLU;
	volatile int64_t t82 = 12LL;

	t82 = (x349+(x350<=(x351/x352)));

	if (t82 != 58615LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x353 = 28U;
	static int32_t x354 = INT32_MIN;
	int16_t x355 = -2369;
	int32_t x356 = -1;
	int32_t t83 = 9417;

	t83 = (x353+(x354<=(x355/x356)));

	if (t83 != 29) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x357 = -1;
	int64_t x358 = INT64_MAX;
	int32_t x359 = -1;
	int16_t x360 = -1;
	int32_t t84 = -1325883;

	t84 = (x357+(x358<=(x359/x360)));

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x361 = 58;
	uint16_t x362 = UINT16_MAX;
	int8_t x363 = INT8_MAX;
	int64_t x364 = INT64_MAX;

	t85 = (x361+(x362<=(x363/x364)));

	if (t85 != 58) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x365 = 5;
	volatile int8_t x366 = -5;
	int8_t x367 = INT8_MIN;
	uint64_t x368 = 113LLU;
	volatile int32_t t86 = -6539187;

	t86 = (x365+(x366<=(x367/x368)));

	if (t86 != 5) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x369 = -1;
	uint64_t x371 = 442353312LLU;
	int32_t x372 = -1;
	int32_t t87 = -157669;

	t87 = (x369+(x370<=(x371/x372)));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x373 = INT64_MIN;
	int64_t x374 = -12786047771888615LL;
	int16_t x375 = -2;
	static int32_t x376 = -1;
	int64_t t88 = -396857944LL;

	t88 = (x373+(x374<=(x375/x376)));

	if (t88 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x378 = INT64_MIN;
	int16_t x379 = 7;
	volatile int32_t x380 = -15;
	volatile int32_t t89 = 33309001;

	t89 = (x377+(x378<=(x379/x380)));

	if (t89 != -122) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x381 = INT8_MAX;
	uint64_t x382 = 55514393474570LLU;
	int32_t t90 = -14471;

	t90 = (x381+(x382<=(x383/x384)));

	if (t90 != 128) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x385 = 1;
	volatile uint8_t x386 = 1U;
	static uint16_t x387 = 480U;
	uint8_t x388 = 2U;
	volatile int32_t t91 = 26421;

	t91 = (x385+(x386<=(x387/x388)));

	if (t91 != 2) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x389 = -1LL;
	int16_t x390 = -1;
	volatile int32_t x391 = -1;
	int8_t x392 = INT8_MIN;
	static int64_t t92 = 574LL;

	t92 = (x389+(x390<=(x391/x392)));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x393 = INT8_MIN;
	int64_t x395 = INT64_MIN;
	int8_t x396 = 23;
	int32_t t93 = -47845;

	t93 = (x393+(x394<=(x395/x396)));

	if (t93 != -127) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x398 = INT64_MIN;
	int32_t x399 = INT32_MAX;
	static uint16_t x400 = 13909U;
	static volatile int32_t t94 = 193525;

	t94 = (x397+(x398<=(x399/x400)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x402 = INT32_MIN;
	uint64_t x403 = UINT64_MAX;
	int32_t x404 = -1;
	volatile uint32_t t95 = 677751148U;

	t95 = (x401+(x402<=(x403/x404)));

	if (t95 != 104338U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x407 = -1;

	t96 = (x405+(x406<=(x407/x408)));

	if (t96 != 1330666LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x409 = -1LL;
	volatile uint16_t x410 = 31U;
	uint8_t x411 = 19U;
	volatile uint64_t x412 = UINT64_MAX;
	int64_t t97 = -13767LL;

	t97 = (x409+(x410<=(x411/x412)));

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x413 = 21987;
	static uint64_t x414 = 2311522LLU;
	int8_t x415 = INT8_MAX;
	uint8_t x416 = UINT8_MAX;
	volatile int32_t t98 = 3484;

	t98 = (x413+(x414<=(x415/x416)));

	if (t98 != 21987) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x417 = INT16_MAX;
	int64_t x418 = INT64_MIN;
	int32_t x419 = INT32_MIN;
	static int64_t x420 = INT64_MIN;
	volatile int32_t t99 = -7127851;

	t99 = (x417+(x418<=(x419/x420)));

	if (t99 != 32768) { NG(); } else { ; }
	
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

