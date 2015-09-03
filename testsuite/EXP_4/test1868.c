#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x8 = INT8_MIN;
volatile uint8_t x9 = 4U;
int64_t x12 = -3871629896621LL;
volatile int16_t x19 = 58;
uint16_t x21 = 318U;
uint32_t x23 = UINT32_MAX;
uint32_t x24 = UINT32_MAX;
int32_t t7 = -11411421;
int8_t x33 = INT8_MIN;
uint8_t x38 = UINT8_MAX;
int16_t x39 = INT16_MAX;
int64_t x40 = -1LL;
uint64_t x42 = 805LLU;
int32_t t14 = -30049013;
static int16_t x71 = -1;
int16_t x77 = INT16_MIN;
static volatile int64_t x82 = -7877LL;
int64_t x84 = INT64_MAX;
volatile int32_t t19 = 14494;
static int32_t x85 = INT32_MIN;
uint8_t x86 = 1U;
int64_t x90 = INT64_MAX;
uint64_t x91 = 0LLU;
uint32_t x92 = UINT32_MAX;
static int8_t x95 = 1;
uint32_t x96 = UINT32_MAX;
volatile uint64_t x104 = 405661035969501237LLU;
int32_t x107 = INT32_MIN;
uint32_t x109 = 28U;
static int64_t x111 = INT64_MIN;
volatile int32_t t26 = 19636;
static int8_t x119 = INT8_MAX;
int8_t x121 = 2;
int64_t x124 = INT64_MIN;
int32_t x125 = INT32_MAX;
int16_t x126 = INT16_MAX;
uint8_t x134 = 1U;
volatile int8_t x138 = -27;
int8_t x148 = -15;
volatile int32_t t37 = -6;
volatile int32_t t38 = -2119815;
uint16_t x168 = 85U;
volatile int32_t t39 = 57;
int64_t x173 = -11004LL;
static int8_t x175 = INT8_MAX;
int64_t x190 = INT64_MAX;
volatile int32_t t44 = 1;
static int16_t x199 = INT16_MAX;
volatile int32_t t46 = -188255;
static uint32_t x205 = UINT32_MAX;
int8_t x206 = 25;
uint64_t x220 = 2355LLU;
volatile int64_t x222 = -1433722969235191867LL;
volatile int64_t x232 = INT64_MAX;
static uint16_t x240 = UINT16_MAX;
uint16_t x248 = 12U;
uint8_t x252 = UINT8_MAX;
static volatile int16_t x256 = 6;
int64_t x257 = INT64_MIN;
int32_t t60 = 12481307;
int8_t x266 = INT8_MIN;
volatile uint64_t x273 = UINT64_MAX;
static int64_t x277 = -1LL;
uint16_t x278 = UINT16_MAX;
uint32_t x287 = 18U;
uint8_t x295 = 3U;
uint8_t x300 = UINT8_MAX;
volatile int64_t x301 = -1LL;
int8_t x302 = INT8_MAX;
static int32_t x314 = -239342;
volatile uint8_t x315 = 12U;
static volatile uint16_t x317 = 400U;
int8_t x323 = INT8_MAX;
int32_t x324 = INT32_MIN;
volatile int32_t t73 = 1;
int32_t x329 = -1;
int32_t t76 = -754958;
static int64_t x340 = INT64_MIN;
static int64_t x341 = INT64_MIN;
int32_t x342 = INT32_MIN;
uint32_t x347 = 113U;
static uint16_t x348 = UINT16_MAX;
int8_t x355 = 0;
int8_t x358 = 5;
static int32_t t84 = -2;
int8_t x378 = INT8_MIN;
int64_t x380 = -1LL;
uint8_t x388 = 28U;
uint32_t x391 = 23570U;
static volatile int32_t t88 = 24526;
int16_t x398 = -31;
int64_t x399 = INT64_MAX;
volatile int32_t t90 = -71;
int64_t x402 = -2220323041648164LL;
static volatile int32_t t92 = 398463162;
static volatile int16_t x419 = 11;
uint32_t x424 = UINT32_MAX;
static volatile uint64_t x427 = UINT64_MAX;
uint16_t x431 = 20035U;
volatile int32_t t98 = -5;
int32_t x436 = INT32_MAX;
int32_t t99 = -458264;


void f0(void) {
	volatile int32_t x1 = INT32_MIN;
	int32_t x2 = INT32_MAX;
	int32_t x3 = INT32_MAX;
	int8_t x4 = -1;
	int32_t t0 = 234518775;

	t0 = (x1<(x2+(x3|x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	uint64_t x6 = 85LLU;
	static uint8_t x7 = 1U;
	volatile int32_t t1 = 330029;

	t1 = (x5<(x6+(x7|x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = -61;
	static volatile uint8_t x11 = 1U;
	volatile int32_t t2 = -1785;

	t2 = (x9<(x10+(x11|x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	uint16_t x14 = 43U;
	int32_t x15 = INT32_MAX;
	uint32_t x16 = UINT32_MAX;
	volatile int32_t t3 = 137;

	t3 = (x13<(x14+(x15|x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	uint32_t x18 = 11U;
	int64_t x20 = -1LL;
	volatile int32_t t4 = -34727;

	t4 = (x17<(x18+(x19|x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x22 = 3U;
	volatile int32_t t5 = -319594;

	t5 = (x21<(x22+(x23|x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	int16_t x26 = -1;
	volatile int8_t x27 = INT8_MIN;
	static int64_t x28 = 361811760774649LL;
	int32_t t6 = -108733911;

	t6 = (x25<(x26+(x27|x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -181121;
	int32_t x30 = 256270996;
	uint8_t x31 = UINT8_MAX;
	volatile uint8_t x32 = 12U;

	t7 = (x29<(x30+(x31|x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x34 = INT8_MIN;
	int16_t x35 = INT16_MIN;
	volatile int64_t x36 = -1LL;
	int32_t t8 = -289853281;

	t8 = (x33<(x34+(x35|x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = -1;
	int32_t t9 = 0;

	t9 = (x37<(x38+(x39|x40)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x41 = INT16_MIN;
	int8_t x43 = INT8_MAX;
	static uint16_t x44 = 9410U;
	int32_t t10 = -10615;

	t10 = (x41<(x42+(x43|x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = UINT64_MAX;
	int64_t x46 = -5LL;
	uint8_t x47 = 35U;
	uint64_t x48 = 558218415193816081LLU;
	int32_t t11 = -34124915;

	t11 = (x45<(x46+(x47|x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x49 = 249185546130LLU;
	static uint8_t x50 = 14U;
	uint32_t x51 = 19U;
	int16_t x52 = -1;
	static int32_t t12 = 651802173;

	t12 = (x49<(x50+(x51|x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x53 = 750873502660LLU;
	static uint32_t x54 = 1U;
	static uint8_t x55 = UINT8_MAX;
	volatile int8_t x56 = 0;
	int32_t t13 = 1306880;

	t13 = (x53<(x54+(x55|x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 661889505U;
	static volatile int32_t x58 = -915971514;
	uint16_t x59 = 3U;
	static int8_t x60 = 0;

	t14 = (x57<(x58+(x59|x60)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x61 = 4U;
	uint16_t x62 = 460U;
	int8_t x63 = INT8_MIN;
	volatile int16_t x64 = -1;
	volatile int32_t t15 = 40181;

	t15 = (x61<(x62+(x63|x64)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x69 = UINT16_MAX;
	static int16_t x70 = -1;
	int64_t x72 = INT64_MIN;
	volatile int32_t t16 = 6847;

	t16 = (x69<(x70+(x71|x72)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x73 = 1U;
	int16_t x74 = -1;
	int32_t x75 = 16795912;
	static volatile int64_t x76 = INT64_MIN;
	int32_t t17 = 212378573;

	t17 = (x73<(x74+(x75|x76)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x78 = -4;
	int8_t x79 = -2;
	int32_t x80 = -1;
	int32_t t18 = -5;

	t18 = (x77<(x78+(x79|x80)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x81 = UINT64_MAX;
	uint32_t x83 = 1U;

	t19 = (x81<(x82+(x83|x84)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x87 = INT8_MIN;
	int32_t x88 = INT32_MAX;
	int32_t t20 = -33;

	t20 = (x85<(x86+(x87|x88)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x89 = 2931228503LL;
	volatile int32_t t21 = 1;

	t21 = (x89<(x90+(x91|x92)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x93 = INT16_MIN;
	volatile uint64_t x94 = 10317911162751332LLU;
	int32_t t22 = -47;

	t22 = (x93<(x94+(x95|x96)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x101 = INT8_MIN;
	int8_t x102 = INT8_MAX;
	volatile int8_t x103 = 2;
	volatile int32_t t23 = -965407;

	t23 = (x101<(x102+(x103|x104)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x105 = -31324459651LL;
	uint8_t x106 = 13U;
	volatile uint64_t x108 = 7LLU;
	int32_t t24 = 59165109;

	t24 = (x105<(x106+(x107|x108)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x110 = UINT64_MAX;
	int16_t x112 = INT16_MAX;
	volatile int32_t t25 = 40;

	t25 = (x109<(x110+(x111|x112)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x113 = -1;
	static int64_t x114 = -1LL;
	int16_t x115 = INT16_MIN;
	int64_t x116 = INT64_MIN;

	t26 = (x113<(x114+(x115|x116)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x117 = -1;
	uint16_t x118 = UINT16_MAX;
	uint8_t x120 = UINT8_MAX;
	static int32_t t27 = -98822;

	t27 = (x117<(x118+(x119|x120)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x122 = INT16_MAX;
	int16_t x123 = INT16_MIN;
	static volatile int32_t t28 = -803;

	t28 = (x121<(x122+(x123|x124)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x127 = -2171764222821806974LL;
	int64_t x128 = INT64_MAX;
	int32_t t29 = 3;

	t29 = (x125<(x126+(x127|x128)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x129 = INT32_MIN;
	int32_t x130 = -1;
	int64_t x131 = 4442517910410543LL;
	static uint64_t x132 = 81LLU;
	int32_t t30 = 12434234;

	t30 = (x129<(x130+(x131|x132)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x133 = INT8_MIN;
	uint8_t x135 = 13U;
	int32_t x136 = INT32_MIN;
	int32_t t31 = -209682;

	t31 = (x133<(x134+(x135|x136)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x137 = -1;
	uint8_t x139 = 59U;
	static int64_t x140 = INT64_MIN;
	int32_t t32 = -1;

	t32 = (x137<(x138+(x139|x140)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x141 = INT8_MAX;
	volatile int64_t x142 = INT64_MAX;
	int8_t x143 = INT8_MIN;
	volatile int16_t x144 = 915;
	int32_t t33 = 93707313;

	t33 = (x141<(x142+(x143|x144)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x145 = INT8_MIN;
	int8_t x146 = 2;
	int8_t x147 = -4;
	int32_t t34 = -52387334;

	t34 = (x145<(x146+(x147|x148)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x149 = -1;
	uint16_t x150 = 20120U;
	int32_t x151 = -277226;
	int32_t x152 = 1088331;
	int32_t t35 = -3732474;

	t35 = (x149<(x150+(x151|x152)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x153 = INT64_MIN;
	int16_t x154 = INT16_MAX;
	static uint32_t x155 = 24961U;
	uint64_t x156 = 139LLU;
	static int32_t t36 = 103947;

	t36 = (x153<(x154+(x155|x156)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x157 = 0U;
	static int32_t x158 = INT32_MIN;
	volatile int16_t x159 = 8;
	static volatile int32_t x160 = INT32_MAX;

	t37 = (x157<(x158+(x159|x160)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x161 = -3;
	static volatile uint64_t x162 = UINT64_MAX;
	volatile uint64_t x163 = 227893390122LLU;
	int16_t x164 = INT16_MAX;

	t38 = (x161<(x162+(x163|x164)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x165 = 27U;
	volatile uint64_t x166 = 12875165LLU;
	int64_t x167 = -1LL;

	t39 = (x165<(x166+(x167|x168)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x169 = 15563U;
	int64_t x170 = INT64_MIN;
	static int16_t x171 = 1363;
	volatile int16_t x172 = 96;
	volatile int32_t t40 = 6987336;

	t40 = (x169<(x170+(x171|x172)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x174 = INT16_MAX;
	uint8_t x176 = 1U;
	int32_t t41 = -91162;

	t41 = (x173<(x174+(x175|x176)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x181 = -1;
	int8_t x182 = -1;
	volatile int8_t x183 = INT8_MAX;
	uint16_t x184 = 1U;
	volatile int32_t t42 = 96;

	t42 = (x181<(x182+(x183|x184)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x185 = INT16_MAX;
	static uint8_t x186 = 63U;
	uint8_t x187 = 7U;
	int64_t x188 = -1LL;
	static int32_t t43 = -35;

	t43 = (x185<(x186+(x187|x188)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x189 = 2933031U;
	uint64_t x191 = 11310LLU;
	int16_t x192 = INT16_MIN;

	t44 = (x189<(x190+(x191|x192)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x193 = 1U;
	int16_t x194 = -1;
	static int64_t x195 = INT64_MIN;
	int16_t x196 = INT16_MAX;
	static int32_t t45 = 160071;

	t45 = (x193<(x194+(x195|x196)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x197 = -1;
	int8_t x198 = -2;
	int8_t x200 = -1;

	t46 = (x197<(x198+(x199|x200)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x201 = 3;
	int16_t x202 = INT16_MAX;
	int64_t x203 = -1043824488498995LL;
	volatile uint8_t x204 = UINT8_MAX;
	volatile int32_t t47 = 563;

	t47 = (x201<(x202+(x203|x204)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x207 = 2058486220LLU;
	int16_t x208 = -2;
	volatile int32_t t48 = 328;

	t48 = (x205<(x206+(x207|x208)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x209 = -4;
	int32_t x210 = INT32_MAX;
	int32_t x211 = INT32_MIN;
	static volatile int64_t x212 = INT64_MIN;
	int32_t t49 = 17510897;

	t49 = (x209<(x210+(x211|x212)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x213 = 39;
	static uint8_t x214 = 62U;
	uint32_t x215 = 6U;
	uint16_t x216 = UINT16_MAX;
	int32_t t50 = -27727508;

	t50 = (x213<(x214+(x215|x216)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x217 = INT32_MIN;
	volatile int8_t x218 = INT8_MIN;
	volatile uint32_t x219 = UINT32_MAX;
	volatile int32_t t51 = 1;

	t51 = (x217<(x218+(x219|x220)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x221 = -11;
	int8_t x223 = -1;
	static int32_t x224 = INT32_MAX;
	volatile int32_t t52 = 1;

	t52 = (x221<(x222+(x223|x224)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x229 = 1U;
	int16_t x230 = -1;
	static int32_t x231 = INT32_MIN;
	int32_t t53 = -10587654;

	t53 = (x229<(x230+(x231|x232)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x233 = 2;
	int32_t x234 = 54082;
	static int64_t x235 = -1304757LL;
	static int64_t x236 = INT64_MAX;
	volatile int32_t t54 = -196301769;

	t54 = (x233<(x234+(x235|x236)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x237 = UINT16_MAX;
	int8_t x238 = 7;
	int64_t x239 = INT64_MIN;
	static int32_t t55 = -742;

	t55 = (x237<(x238+(x239|x240)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x241 = INT64_MAX;
	uint8_t x242 = 0U;
	uint8_t x243 = 5U;
	static uint16_t x244 = 14U;
	static volatile int32_t t56 = 51;

	t56 = (x241<(x242+(x243|x244)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x245 = 223359501U;
	int16_t x246 = INT16_MAX;
	static int64_t x247 = INT64_MIN;
	volatile int32_t t57 = -2;

	t57 = (x245<(x246+(x247|x248)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x249 = INT64_MIN;
	int32_t x250 = -1;
	static uint32_t x251 = 1271U;
	static int32_t t58 = 1;

	t58 = (x249<(x250+(x251|x252)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x253 = INT8_MAX;
	int8_t x254 = -3;
	int16_t x255 = 14202;
	volatile int32_t t59 = -907;

	t59 = (x253<(x254+(x255|x256)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x258 = INT8_MIN;
	int64_t x259 = 887998686LL;
	int8_t x260 = INT8_MAX;

	t60 = (x257<(x258+(x259|x260)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x265 = INT16_MAX;
	static uint8_t x267 = UINT8_MAX;
	static uint32_t x268 = UINT32_MAX;
	int32_t t61 = -284821105;

	t61 = (x265<(x266+(x267|x268)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x274 = 3811U;
	static volatile int8_t x275 = -24;
	static uint8_t x276 = 71U;
	int32_t t62 = -246913040;

	t62 = (x273<(x274+(x275|x276)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x279 = -1;
	int8_t x280 = INT8_MAX;
	int32_t t63 = 488495;

	t63 = (x277<(x278+(x279|x280)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x281 = 60U;
	int8_t x282 = INT8_MIN;
	static volatile int8_t x283 = 15;
	int16_t x284 = -7794;
	volatile int32_t t64 = -37122;

	t64 = (x281<(x282+(x283|x284)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x285 = -1;
	volatile uint32_t x286 = 1463870U;
	int8_t x288 = -1;
	int32_t t65 = -55546549;

	t65 = (x285<(x286+(x287|x288)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint16_t x289 = UINT16_MAX;
	static int8_t x290 = INT8_MIN;
	int64_t x291 = INT64_MAX;
	static uint16_t x292 = 3963U;
	int32_t t66 = -36463;

	t66 = (x289<(x290+(x291|x292)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint8_t x293 = 1U;
	volatile int8_t x294 = 23;
	uint8_t x296 = 1U;
	int32_t t67 = 98870911;

	t67 = (x293<(x294+(x295|x296)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x297 = INT16_MAX;
	int8_t x298 = INT8_MAX;
	int32_t x299 = INT32_MIN;
	volatile int32_t t68 = -18668546;

	t68 = (x297<(x298+(x299|x300)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x303 = 6;
	int16_t x304 = -1;
	volatile int32_t t69 = -5;

	t69 = (x301<(x302+(x303|x304)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x309 = INT32_MIN;
	int16_t x310 = INT16_MAX;
	int16_t x311 = -1;
	static int64_t x312 = INT64_MAX;
	static int32_t t70 = -738;

	t70 = (x309<(x310+(x311|x312)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x313 = UINT64_MAX;
	volatile int16_t x316 = -1;
	volatile int32_t t71 = 3192;

	t71 = (x313<(x314+(x315|x316)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x318 = INT64_MIN;
	uint16_t x319 = UINT16_MAX;
	int64_t x320 = 1LL;
	volatile int32_t t72 = -568187;

	t72 = (x317<(x318+(x319|x320)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x321 = 1;
	static uint64_t x322 = 164480352356602LLU;

	t73 = (x321<(x322+(x323|x324)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x325 = INT32_MIN;
	static int16_t x326 = INT16_MIN;
	int64_t x327 = INT64_MIN;
	int64_t x328 = -1356749780104030LL;
	int32_t t74 = -910368331;

	t74 = (x325<(x326+(x327|x328)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x330 = 7679342183268243LL;
	int8_t x331 = -1;
	int8_t x332 = -5;
	volatile int32_t t75 = 261452658;

	t75 = (x329<(x330+(x331|x332)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x333 = 64U;
	int64_t x334 = -1LL;
	volatile uint64_t x335 = UINT64_MAX;
	uint8_t x336 = 2U;

	t76 = (x333<(x334+(x335|x336)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x337 = 1721291LLU;
	int16_t x338 = -1;
	uint16_t x339 = 1U;
	volatile int32_t t77 = 1355;

	t77 = (x337<(x338+(x339|x340)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x343 = 1466U;
	uint8_t x344 = 1U;
	volatile int32_t t78 = 26952797;

	t78 = (x341<(x342+(x343|x344)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x345 = 1885358LL;
	volatile int16_t x346 = -579;
	volatile int32_t t79 = -739607;

	t79 = (x345<(x346+(x347|x348)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x349 = INT32_MIN;
	static uint8_t x350 = 27U;
	int64_t x351 = -31681402707814179LL;
	uint16_t x352 = 5678U;
	int32_t t80 = -298;

	t80 = (x349<(x350+(x351|x352)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x353 = 42164U;
	uint32_t x354 = 13390616U;
	volatile int8_t x356 = 5;
	int32_t t81 = 32357;

	t81 = (x353<(x354+(x355|x356)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x357 = -1;
	int64_t x359 = -181467005622LL;
	volatile int8_t x360 = 1;
	int32_t t82 = -74599;

	t82 = (x357<(x358+(x359|x360)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x365 = -1LL;
	int16_t x366 = 0;
	uint8_t x367 = 49U;
	uint8_t x368 = UINT8_MAX;
	volatile int32_t t83 = 294583;

	t83 = (x365<(x366+(x367|x368)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x369 = INT64_MIN;
	int8_t x370 = 6;
	static volatile uint8_t x371 = 27U;
	static volatile int16_t x372 = 2;

	t84 = (x369<(x370+(x371|x372)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x377 = INT8_MIN;
	static int8_t x379 = -1;
	int32_t t85 = -620738044;

	t85 = (x377<(x378+(x379|x380)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x381 = INT8_MAX;
	int32_t x382 = INT32_MIN;
	int32_t x383 = INT32_MAX;
	uint32_t x384 = 242619477U;
	int32_t t86 = 956;

	t86 = (x381<(x382+(x383|x384)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x385 = -1;
	int8_t x386 = 1;
	uint8_t x387 = 7U;
	volatile int32_t t87 = -8;

	t87 = (x385<(x386+(x387|x388)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x389 = 28U;
	int16_t x390 = INT16_MIN;
	int32_t x392 = -1;

	t88 = (x389<(x390+(x391|x392)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x393 = 31863091LL;
	volatile int32_t x394 = INT32_MIN;
	uint32_t x395 = UINT32_MAX;
	uint64_t x396 = 973115740LLU;
	int32_t t89 = 122725;

	t89 = (x393<(x394+(x395|x396)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x397 = -1;
	static int8_t x400 = INT8_MIN;

	t90 = (x397<(x398+(x399|x400)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x401 = 254477774108813LL;
	uint16_t x403 = UINT16_MAX;
	int64_t x404 = -1LL;
	int32_t t91 = 6;

	t91 = (x401<(x402+(x403|x404)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x405 = INT32_MIN;
	uint64_t x406 = UINT64_MAX;
	static uint16_t x407 = 681U;
	volatile int8_t x408 = -46;

	t92 = (x405<(x406+(x407|x408)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x409 = 681661U;
	int32_t x410 = -1;
	int8_t x411 = INT8_MIN;
	uint16_t x412 = 15966U;
	int32_t t93 = 99767560;

	t93 = (x409<(x410+(x411|x412)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x413 = UINT32_MAX;
	int32_t x414 = INT32_MAX;
	volatile int16_t x415 = INT16_MIN;
	int64_t x416 = 77938809219655LL;
	volatile int32_t t94 = -1;

	t94 = (x413<(x414+(x415|x416)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x417 = INT8_MAX;
	int8_t x418 = INT8_MIN;
	int8_t x420 = INT8_MAX;
	static int32_t t95 = -1;

	t95 = (x417<(x418+(x419|x420)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x421 = 16635906522LL;
	static volatile uint16_t x422 = 1038U;
	static uint64_t x423 = 0LLU;
	static int32_t t96 = 126;

	t96 = (x421<(x422+(x423|x424)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x425 = INT16_MAX;
	int8_t x426 = -1;
	int8_t x428 = INT8_MIN;
	volatile int32_t t97 = -17893;

	t97 = (x425<(x426+(x427|x428)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x429 = 167U;
	static int16_t x430 = 3;
	static uint64_t x432 = UINT64_MAX;

	t98 = (x429<(x430+(x431|x432)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x433 = 3651908U;
	static uint16_t x434 = UINT16_MAX;
	uint64_t x435 = 119884355764LLU;

	t99 = (x433<(x434+(x435|x436)));

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

