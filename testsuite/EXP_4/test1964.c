#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x6 = -161685243;
int64_t x7 = INT64_MIN;
volatile int32_t t2 = 0;
int64_t x15 = -1LL;
volatile int32_t t5 = -107020;
int8_t x26 = -1;
int8_t x27 = -19;
int64_t x30 = INT64_MAX;
uint64_t x31 = 44785LLU;
int64_t x33 = -1LL;
int32_t x40 = INT32_MAX;
volatile int8_t x59 = -1;
static int64_t x62 = -79LL;
int8_t x63 = -1;
int32_t x74 = INT32_MIN;
int32_t t17 = 1;
uint64_t x83 = UINT64_MAX;
static int64_t x85 = -1LL;
int16_t x86 = INT16_MAX;
static uint8_t x87 = 14U;
uint64_t x92 = 2463LLU;
uint64_t x93 = 110978866460LLU;
int8_t x94 = -1;
int8_t x99 = 9;
volatile uint32_t x105 = 1200880U;
static int64_t x109 = -3576119010672619LL;
uint32_t x110 = 10232U;
volatile int64_t t25 = 11612597027014617LL;
int64_t x117 = -1LL;
uint8_t x120 = UINT8_MAX;
static uint32_t x126 = 13U;
volatile int32_t x131 = -1;
uint64_t x132 = UINT64_MAX;
volatile int32_t t30 = 36;
uint8_t x144 = 60U;
static int32_t t33 = INT32_MAX;
volatile int64_t x147 = INT64_MIN;
volatile uint64_t t34 = 64LLU;
uint32_t x159 = 726478362U;
int8_t x164 = INT8_MIN;
int64_t x171 = 7728921704437LL;
int64_t x172 = INT64_MAX;
volatile int64_t x175 = INT64_MAX;
uint32_t t40 = 470007U;
static uint16_t x177 = 11U;
uint16_t x179 = 484U;
static int16_t x182 = INT16_MIN;
volatile int32_t t42 = -393559601;
static int16_t x185 = -2;
int8_t x186 = INT8_MAX;
static volatile uint8_t x187 = UINT8_MAX;
uint16_t x188 = UINT16_MAX;
static volatile uint16_t x190 = UINT16_MAX;
static uint8_t x194 = 51U;
volatile uint8_t x201 = UINT8_MAX;
static int32_t t49 = -7;
static volatile int32_t x219 = -20697;
uint32_t x220 = 665180338U;
uint64_t x223 = 4091774685684LLU;
uint8_t x225 = UINT8_MAX;
volatile int32_t x230 = -1403;
static volatile int8_t x232 = -1;
int64_t x236 = 2995278540LL;
int8_t x237 = 31;
int16_t x239 = 269;
int64_t x243 = -1LL;
static int64_t x244 = -335120303326546612LL;
int64_t x245 = INT64_MIN;
volatile int64_t t57 = INT64_MIN;
int16_t x249 = INT16_MAX;
static int16_t x250 = INT16_MIN;
int32_t x268 = INT32_MIN;
uint32_t x284 = 8U;
static int32_t x285 = INT32_MAX;
static volatile int32_t t69 = -223;
int8_t x311 = -1;
int16_t x314 = INT16_MIN;
uint8_t x318 = 0U;
uint16_t x324 = UINT16_MAX;
int32_t x326 = -1;
static int32_t x333 = -1;
static int16_t x336 = 8054;
volatile uint8_t x348 = 90U;
int32_t x367 = INT32_MIN;
int32_t x368 = INT32_MAX;
volatile int32_t t85 = -23477;
uint16_t x379 = 160U;
uint8_t x387 = 1U;
static int16_t x389 = INT16_MIN;
int16_t x393 = -3473;
static int8_t x397 = INT8_MIN;
uint32_t x401 = 5613537U;
uint8_t x402 = 1U;
int32_t x405 = INT32_MIN;
static volatile uint16_t x407 = UINT16_MAX;
int8_t x408 = INT8_MIN;
volatile int32_t t93 = INT32_MIN;
int16_t x410 = 1;
int16_t x422 = -26;
volatile uint8_t x423 = UINT8_MAX;
volatile int8_t x424 = INT8_MIN;
int16_t x426 = INT16_MAX;
uint8_t x434 = 50U;
static volatile uint16_t x436 = 180U;


void f0(void) {
	static int16_t x1 = -3230;
	int8_t x2 = INT8_MAX;
	int16_t x3 = -1;
	int16_t x4 = INT16_MIN;
	static int32_t t0 = -298423250;

	t0 = (x1+(x2<(x3|x4)));

	if (t0 != -3230) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = 0;
	volatile uint32_t x8 = 373U;
	int32_t t1 = -5091;

	t1 = (x5+(x6<(x7|x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int8_t x9 = 28;
	uint8_t x10 = 0U;
	int16_t x11 = 1;
	int64_t x12 = -476814963923LL;

	t2 = (x9+(x10<(x11|x12)));

	if (t2 != 28) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -1;
	int64_t x14 = INT64_MAX;
	int32_t x16 = -1;
	volatile int32_t t3 = 11;

	t3 = (x13+(x14<(x15|x16)));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -350819485381512370LL;
	volatile int8_t x18 = INT8_MIN;
	int16_t x19 = INT16_MIN;
	uint8_t x20 = 6U;
	int64_t t4 = -191LL;

	t4 = (x17+(x18<(x19|x20)));

	if (t4 != -350819485381512370LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	uint16_t x22 = UINT16_MAX;
	uint32_t x23 = 185756U;
	volatile int16_t x24 = INT16_MAX;

	t5 = (x21+(x22<(x23|x24)));

	if (t5 != -32767) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	uint8_t x28 = 0U;
	static volatile int32_t t6 = INT32_MIN;

	t6 = (x25+(x26<(x27|x28)));

	if (t6 != INT32_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	int32_t x32 = 11;
	int64_t t7 = INT64_MIN;

	t7 = (x29+(x30<(x31|x32)));

	if (t7 != INT64_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x34 = -13465;
	volatile int16_t x35 = -1;
	int32_t x36 = INT32_MIN;
	int64_t t8 = 118223034580037057LL;

	t8 = (x33+(x34<(x35|x36)));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 22U;
	int64_t x38 = -1LL;
	static int64_t x39 = -6188LL;
	static volatile uint32_t t9 = 366127U;

	t9 = (x37+(x38<(x39|x40)));

	if (t9 != 22U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	static uint64_t x42 = 683100108LLU;
	static volatile uint32_t x43 = 12821U;
	volatile uint64_t x44 = 1461LLU;
	volatile int32_t t10 = 741;

	t10 = (x41+(x42<(x43|x44)));

	if (t10 != -32768) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x53 = -1;
	static int16_t x54 = -1;
	int16_t x55 = -1;
	int16_t x56 = INT16_MAX;
	volatile int32_t t11 = 17967254;

	t11 = (x53+(x54<(x55|x56)));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x57 = UINT32_MAX;
	static uint32_t x58 = UINT32_MAX;
	volatile int16_t x60 = INT16_MIN;
	uint32_t t12 = UINT32_MAX;

	t12 = (x57+(x58<(x59|x60)));

	if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x61 = UINT8_MAX;
	int64_t x64 = INT64_MIN;
	int32_t t13 = 0;

	t13 = (x61+(x62<(x63|x64)));

	if (t13 != 256) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x65 = INT32_MIN;
	uint8_t x66 = UINT8_MAX;
	int64_t x67 = 502273683777LL;
	int64_t x68 = INT64_MAX;
	int32_t t14 = 162;

	t14 = (x65+(x66<(x67|x68)));

	if (t14 != -2147483647) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x69 = 429U;
	uint32_t x70 = UINT32_MAX;
	int8_t x71 = INT8_MIN;
	static int32_t x72 = 33528245;
	volatile int32_t t15 = 5326151;

	t15 = (x69+(x70<(x71|x72)));

	if (t15 != 429) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x73 = INT16_MIN;
	int64_t x75 = INT64_MIN;
	static int64_t x76 = -29568072636283LL;
	static int32_t t16 = 5121836;

	t16 = (x73+(x74<(x75|x76)));

	if (t16 != -32768) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x77 = INT8_MIN;
	volatile int8_t x78 = 1;
	int8_t x79 = -2;
	static uint32_t x80 = UINT32_MAX;

	t17 = (x77+(x78<(x79|x80)));

	if (t17 != -127) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x81 = INT16_MAX;
	uint8_t x82 = 6U;
	static volatile int64_t x84 = INT64_MAX;
	int32_t t18 = 10892442;

	t18 = (x81+(x82<(x83|x84)));

	if (t18 != 32768) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x88 = INT32_MIN;
	static volatile int64_t t19 = -27572776967LL;

	t19 = (x85+(x86<(x87|x88)));

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x89 = INT8_MIN;
	static int16_t x90 = INT16_MIN;
	int64_t x91 = -1LL;
	int32_t t20 = 1458;

	t20 = (x89+(x90<(x91|x92)));

	if (t20 != -127) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x95 = 263906392483LLU;
	int16_t x96 = -1;
	volatile uint64_t t21 = 432636LLU;

	t21 = (x93+(x94<(x95|x96)));

	if (t21 != 110978866460LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x97 = 0;
	volatile int64_t x98 = -3493545008460278344LL;
	volatile int16_t x100 = INT16_MIN;
	static volatile int32_t t22 = 1373;

	t22 = (x97+(x98<(x99|x100)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x101 = INT32_MAX;
	int64_t x102 = -1LL;
	uint8_t x103 = 32U;
	volatile int64_t x104 = -992LL;
	int32_t t23 = INT32_MAX;

	t23 = (x101+(x102<(x103|x104)));

	if (t23 != INT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x106 = INT64_MIN;
	int32_t x107 = INT32_MIN;
	int32_t x108 = INT32_MIN;
	uint32_t t24 = 3097U;

	t24 = (x105+(x106<(x107|x108)));

	if (t24 != 1200881U) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x111 = 668652U;
	int32_t x112 = -1;

	t25 = (x109+(x110<(x111|x112)));

	if (t25 != -3576119010672618LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x113 = -1;
	static volatile int32_t x114 = INT32_MIN;
	static int32_t x115 = 0;
	int64_t x116 = -1LL;
	static volatile int32_t t26 = -15451762;

	t26 = (x113+(x114<(x115|x116)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x118 = INT16_MIN;
	int8_t x119 = -23;
	volatile int64_t t27 = -42387024297LL;

	t27 = (x117+(x118<(x119|x120)));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x121 = 73U;
	int32_t x122 = INT32_MAX;
	static volatile int32_t x123 = -1;
	int16_t x124 = -1;
	static volatile int32_t t28 = 128;

	t28 = (x121+(x122<(x123|x124)));

	if (t28 != 73) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x125 = -1;
	int32_t x127 = INT32_MIN;
	int64_t x128 = INT64_MIN;
	static int32_t t29 = -222;

	t29 = (x125+(x126<(x127|x128)));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x129 = 2U;
	volatile int64_t x130 = 200573289LL;

	t30 = (x129+(x130<(x131|x132)));

	if (t30 != 3) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int32_t x133 = INT32_MIN;
	int32_t x134 = INT32_MIN;
	int8_t x135 = 3;
	int32_t x136 = INT32_MIN;
	int32_t t31 = -46726;

	t31 = (x133+(x134<(x135|x136)));

	if (t31 != -2147483647) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x137 = UINT16_MAX;
	volatile int16_t x138 = 33;
	volatile int16_t x139 = -61;
	int16_t x140 = -1;
	static volatile int32_t t32 = 1304584;

	t32 = (x137+(x138<(x139|x140)));

	if (t32 != 65535) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x141 = INT32_MAX;
	volatile int64_t x142 = -1LL;
	static int64_t x143 = -1LL;

	t33 = (x141+(x142<(x143|x144)));

	if (t33 != INT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x145 = 407387900217656093LLU;
	static uint64_t x146 = UINT64_MAX;
	uint8_t x148 = 3U;

	t34 = (x145+(x146<(x147|x148)));

	if (t34 != 407387900217656093LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x149 = UINT64_MAX;
	uint32_t x150 = 2725063U;
	int8_t x151 = -1;
	uint16_t x152 = UINT16_MAX;
	static uint64_t t35 = 6278170465551192LLU;

	t35 = (x149+(x150<(x151|x152)));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x153 = INT32_MAX;
	int32_t x154 = INT32_MIN;
	int16_t x155 = INT16_MAX;
	uint64_t x156 = 13190032124LLU;
	int32_t t36 = INT32_MAX;

	t36 = (x153+(x154<(x155|x156)));

	if (t36 != INT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x157 = -1;
	int32_t x158 = 508;
	int64_t x160 = -3731889561784067122LL;
	volatile int32_t t37 = -17430;

	t37 = (x157+(x158<(x159|x160)));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x161 = UINT16_MAX;
	static int8_t x162 = INT8_MIN;
	volatile int8_t x163 = INT8_MIN;
	volatile int32_t t38 = 4;

	t38 = (x161+(x162<(x163|x164)));

	if (t38 != 65535) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x169 = 3492655098693LLU;
	int64_t x170 = 632341033LL;
	static volatile uint64_t t39 = 14875930LLU;

	t39 = (x169+(x170<(x171|x172)));

	if (t39 != 3492655098694LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x173 = 21U;
	int16_t x174 = -6;
	int32_t x176 = INT32_MIN;

	t40 = (x173+(x174<(x175|x176)));

	if (t40 != 22U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x178 = 124265U;
	int16_t x180 = -1;
	static volatile int32_t t41 = 3663;

	t41 = (x177+(x178<(x179|x180)));

	if (t41 != 12) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x181 = INT32_MIN;
	uint8_t x183 = 0U;
	volatile int8_t x184 = INT8_MAX;

	t42 = (x181+(x182<(x183|x184)));

	if (t42 != -2147483647) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t t43 = -1;

	t43 = (x185+(x186<(x187|x188)));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x189 = UINT32_MAX;
	volatile int16_t x191 = INT16_MIN;
	volatile int8_t x192 = -1;
	volatile uint32_t t44 = UINT32_MAX;

	t44 = (x189+(x190<(x191|x192)));

	if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x193 = -2556LL;
	int16_t x195 = -3189;
	int64_t x196 = INT64_MIN;
	static volatile int64_t t45 = -1854491325528053932LL;

	t45 = (x193+(x194<(x195|x196)));

	if (t45 != -2556LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x202 = 50U;
	uint64_t x203 = 12280926756282LLU;
	uint8_t x204 = 7U;
	int32_t t46 = -3;

	t46 = (x201+(x202<(x203|x204)));

	if (t46 != 256) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x205 = -13;
	uint32_t x206 = 3U;
	static uint64_t x207 = 344LLU;
	volatile int32_t x208 = INT32_MAX;
	volatile int32_t t47 = 74;

	t47 = (x205+(x206<(x207|x208)));

	if (t47 != -12) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int32_t x209 = 224531980;
	int64_t x210 = 94704582LL;
	int16_t x211 = 14872;
	int32_t x212 = INT32_MAX;
	volatile int32_t t48 = 648695;

	t48 = (x209+(x210<(x211|x212)));

	if (t48 != 224531981) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x213 = UINT8_MAX;
	int8_t x214 = -1;
	int8_t x215 = -1;
	uint8_t x216 = 7U;

	t49 = (x213+(x214<(x215|x216)));

	if (t49 != 255) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x217 = INT32_MIN;
	int32_t x218 = INT32_MIN;
	int32_t t50 = -1742;

	t50 = (x217+(x218<(x219|x220)));

	if (t50 != -2147483647) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x221 = INT64_MIN;
	volatile int64_t x222 = INT64_MIN;
	uint64_t x224 = 38148997LLU;
	int64_t t51 = INT64_MIN;

	t51 = (x221+(x222<(x223|x224)));

	if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x226 = INT64_MIN;
	int8_t x227 = -1;
	static uint64_t x228 = 204521LLU;
	int32_t t52 = 4;

	t52 = (x225+(x226<(x227|x228)));

	if (t52 != 256) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x229 = UINT64_MAX;
	static int64_t x231 = INT64_MIN;
	volatile uint64_t t53 = 65234786552432LLU;

	t53 = (x229+(x230<(x231|x232)));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x233 = -1LL;
	int16_t x234 = 1;
	volatile int64_t x235 = -1LL;
	volatile int64_t t54 = -1075749240977217LL;

	t54 = (x233+(x234<(x235|x236)));

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x238 = UINT32_MAX;
	static int16_t x240 = INT16_MIN;
	static int32_t t55 = 2731308;

	t55 = (x237+(x238<(x239|x240)));

	if (t55 != 31) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x241 = 3690LLU;
	volatile int64_t x242 = -1LL;
	volatile uint64_t t56 = 29386215877129848LLU;

	t56 = (x241+(x242<(x243|x244)));

	if (t56 != 3690LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x246 = 0U;
	static uint8_t x247 = 40U;
	volatile int8_t x248 = -1;

	t57 = (x245+(x246<(x247|x248)));

	if (t57 != INT64_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x251 = 4936;
	int16_t x252 = -1;
	volatile int32_t t58 = 227627;

	t58 = (x249+(x250<(x251|x252)));

	if (t58 != 32768) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x253 = 3266U;
	uint64_t x254 = UINT64_MAX;
	volatile int16_t x255 = INT16_MAX;
	int8_t x256 = INT8_MIN;
	int32_t t59 = 0;

	t59 = (x253+(x254<(x255|x256)));

	if (t59 != 3266) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x261 = -1LL;
	static int16_t x262 = INT16_MIN;
	uint16_t x263 = 9968U;
	static int16_t x264 = INT16_MAX;
	int64_t t60 = 298905517161025159LL;

	t60 = (x261+(x262<(x263|x264)));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x265 = -26;
	uint8_t x266 = 2U;
	volatile uint64_t x267 = UINT64_MAX;
	static volatile int32_t t61 = -6390496;

	t61 = (x265+(x266<(x267|x268)));

	if (t61 != -25) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x269 = INT32_MAX;
	int32_t x270 = INT32_MAX;
	volatile int16_t x271 = INT16_MIN;
	uint16_t x272 = UINT16_MAX;
	static volatile int32_t t62 = INT32_MAX;

	t62 = (x269+(x270<(x271|x272)));

	if (t62 != INT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x273 = INT32_MAX;
	uint8_t x274 = 1U;
	static int32_t x275 = -1;
	int32_t x276 = -25014;
	volatile int32_t t63 = INT32_MAX;

	t63 = (x273+(x274<(x275|x276)));

	if (t63 != INT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x277 = UINT32_MAX;
	uint64_t x278 = 2884759454LLU;
	int32_t x279 = INT32_MAX;
	int8_t x280 = INT8_MIN;
	volatile uint32_t t64 = 725043U;

	t64 = (x277+(x278<(x279|x280)));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x281 = -277531053;
	int16_t x282 = INT16_MAX;
	int32_t x283 = INT32_MIN;
	volatile int32_t t65 = 1;

	t65 = (x281+(x282<(x283|x284)));

	if (t65 != -277531052) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x286 = INT16_MAX;
	int16_t x287 = 12964;
	volatile uint32_t x288 = 1U;
	int32_t t66 = INT32_MAX;

	t66 = (x285+(x286<(x287|x288)));

	if (t66 != INT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x289 = UINT32_MAX;
	uint16_t x290 = 1U;
	int16_t x291 = -1;
	static volatile uint32_t x292 = UINT32_MAX;
	uint32_t t67 = 2037853U;

	t67 = (x289+(x290<(x291|x292)));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x293 = -3;
	static int8_t x294 = INT8_MIN;
	int64_t x295 = INT64_MIN;
	volatile int64_t x296 = 25365599585053756LL;
	int32_t t68 = -27;

	t68 = (x293+(x294<(x295|x296)));

	if (t68 != -3) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x297 = INT16_MIN;
	int8_t x298 = -1;
	static uint8_t x299 = 2U;
	int32_t x300 = 0;

	t69 = (x297+(x298<(x299|x300)));

	if (t69 != -32767) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x301 = INT16_MIN;
	uint16_t x302 = 3863U;
	static int16_t x303 = INT16_MIN;
	int64_t x304 = 1676716047742344154LL;
	static int32_t t70 = 13240;

	t70 = (x301+(x302<(x303|x304)));

	if (t70 != -32768) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x305 = UINT16_MAX;
	static volatile int64_t x306 = INT64_MIN;
	int8_t x307 = INT8_MIN;
	uint16_t x308 = 2309U;
	int32_t t71 = 21466372;

	t71 = (x305+(x306<(x307|x308)));

	if (t71 != 65536) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x309 = INT16_MAX;
	volatile int32_t x310 = -11;
	uint32_t x312 = 6360095U;
	volatile int32_t t72 = 29319491;

	t72 = (x309+(x310<(x311|x312)));

	if (t72 != 32768) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x313 = -1LL;
	volatile uint32_t x315 = UINT32_MAX;
	volatile uint16_t x316 = 62U;
	volatile int64_t t73 = -2699LL;

	t73 = (x313+(x314<(x315|x316)));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x317 = 3932058LLU;
	uint64_t x319 = 2701390710672LLU;
	int8_t x320 = INT8_MAX;
	volatile uint64_t t74 = 89LLU;

	t74 = (x317+(x318<(x319|x320)));

	if (t74 != 3932059LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x321 = 4U;
	int64_t x322 = INT64_MAX;
	int8_t x323 = INT8_MAX;
	static int32_t t75 = 4212770;

	t75 = (x321+(x322<(x323|x324)));

	if (t75 != 4) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x325 = INT16_MIN;
	int8_t x327 = -1;
	uint8_t x328 = 53U;
	int32_t t76 = -1;

	t76 = (x325+(x326<(x327|x328)));

	if (t76 != -32768) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x329 = 17146U;
	uint8_t x330 = UINT8_MAX;
	uint32_t x331 = 14679U;
	uint8_t x332 = 1U;
	volatile int32_t t77 = 0;

	t77 = (x329+(x330<(x331|x332)));

	if (t77 != 17147) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x334 = 19;
	int16_t x335 = INT16_MIN;
	volatile int32_t t78 = -113;

	t78 = (x333+(x334<(x335|x336)));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x337 = UINT64_MAX;
	volatile int32_t x338 = 28222;
	uint32_t x339 = 505214120U;
	int16_t x340 = 982;
	static uint64_t t79 = 7794LLU;

	t79 = (x337+(x338<(x339|x340)));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x345 = 961968025LL;
	volatile int8_t x346 = -3;
	int32_t x347 = INT32_MIN;
	int64_t t80 = -175718464308LL;

	t80 = (x345+(x346<(x347|x348)));

	if (t80 != 961968025LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x349 = INT16_MIN;
	uint8_t x350 = UINT8_MAX;
	uint16_t x351 = UINT16_MAX;
	int8_t x352 = INT8_MIN;
	int32_t t81 = -9084753;

	t81 = (x349+(x350<(x351|x352)));

	if (t81 != -32768) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x357 = INT16_MAX;
	volatile uint8_t x358 = UINT8_MAX;
	volatile int16_t x359 = -1;
	static int64_t x360 = -195LL;
	int32_t t82 = 93;

	t82 = (x357+(x358<(x359|x360)));

	if (t82 != 32767) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x365 = 10U;
	static int64_t x366 = 16422657224475193LL;
	int32_t t83 = 0;

	t83 = (x365+(x366<(x367|x368)));

	if (t83 != 10) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x369 = 0U;
	static int16_t x370 = INT16_MIN;
	volatile int32_t x371 = -7221592;
	uint8_t x372 = 103U;
	volatile int32_t t84 = 0;

	t84 = (x369+(x370<(x371|x372)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x373 = UINT16_MAX;
	static uint8_t x374 = UINT8_MAX;
	static uint16_t x375 = 11235U;
	volatile uint16_t x376 = 7312U;

	t85 = (x373+(x374<(x375|x376)));

	if (t85 != 65536) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x377 = 3501869487899951101LLU;
	volatile int64_t x378 = -188LL;
	uint32_t x380 = 32U;
	static uint64_t t86 = 231594LLU;

	t86 = (x377+(x378<(x379|x380)));

	if (t86 != 3501869487899951102LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x381 = INT32_MIN;
	volatile int32_t x382 = INT32_MIN;
	int16_t x383 = INT16_MIN;
	int32_t x384 = 122949;
	volatile int32_t t87 = 326;

	t87 = (x381+(x382<(x383|x384)));

	if (t87 != -2147483647) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x385 = -1;
	int16_t x386 = INT16_MIN;
	int32_t x388 = INT32_MAX;
	volatile int32_t t88 = 9;

	t88 = (x385+(x386<(x387|x388)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x390 = 1297022LL;
	int64_t x391 = INT64_MIN;
	uint32_t x392 = 1U;
	int32_t t89 = -211;

	t89 = (x389+(x390<(x391|x392)));

	if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x394 = 343U;
	uint64_t x395 = 506818LLU;
	volatile uint16_t x396 = 878U;
	static int32_t t90 = 7;

	t90 = (x393+(x394<(x395|x396)));

	if (t90 != -3472) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x398 = INT64_MIN;
	int8_t x399 = -1;
	volatile int8_t x400 = INT8_MIN;
	static int32_t t91 = 54;

	t91 = (x397+(x398<(x399|x400)));

	if (t91 != -127) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x403 = -1;
	uint64_t x404 = 4710856542494LLU;
	static volatile uint32_t t92 = 232U;

	t92 = (x401+(x402<(x403|x404)));

	if (t92 != 5613538U) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x406 = 6U;

	t93 = (x405+(x406<(x407|x408)));

	if (t93 != INT32_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x409 = -4736;
	int64_t x411 = INT64_MIN;
	volatile uint16_t x412 = 144U;
	int32_t t94 = 450360134;

	t94 = (x409+(x410<(x411|x412)));

	if (t94 != -4736) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x413 = INT16_MIN;
	int8_t x414 = 0;
	int16_t x415 = 0;
	uint16_t x416 = UINT16_MAX;
	volatile int32_t t95 = 0;

	t95 = (x413+(x414<(x415|x416)));

	if (t95 != -32767) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x417 = -1;
	uint8_t x418 = 0U;
	int32_t x419 = INT32_MAX;
	uint8_t x420 = 14U;
	int32_t t96 = -29992378;

	t96 = (x417+(x418<(x419|x420)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x421 = -1;
	int32_t t97 = 3162;

	t97 = (x421+(x422<(x423|x424)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x425 = 28;
	volatile uint16_t x427 = 7U;
	int16_t x428 = INT16_MIN;
	static volatile int32_t t98 = -5864;

	t98 = (x425+(x426<(x427|x428)));

	if (t98 != 28) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x433 = -4537;
	int32_t x435 = -1;
	int32_t t99 = -248;

	t99 = (x433+(x434<(x435|x436)));

	if (t99 != -4537) { NG(); } else { ; }
	
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

