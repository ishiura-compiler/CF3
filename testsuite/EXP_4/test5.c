#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x3 = 81127385916LL;
int16_t x7 = INT16_MIN;
volatile int16_t x9 = INT16_MAX;
static int16_t x12 = -1;
int8_t x16 = -1;
uint16_t x28 = 56U;
static volatile uint64_t x29 = UINT64_MAX;
uint16_t x32 = 7U;
uint64_t t5 = 318286701296567585LLU;
int32_t x33 = INT32_MAX;
uint64_t x39 = UINT64_MAX;
int32_t x41 = INT32_MIN;
static int8_t x44 = -1;
static uint64_t x65 = 169930892706LLU;
uint64_t x82 = UINT64_MAX;
int8_t x84 = INT8_MIN;
uint16_t x87 = 46U;
int16_t x91 = -1;
uint16_t x98 = 568U;
static int32_t x102 = 32333670;
uint64_t t18 = 4227417948596LLU;
volatile uint8_t x113 = 28U;
uint64_t x116 = 3519378398209LLU;
static uint64_t x119 = 1692282977164395LLU;
int16_t x124 = INT16_MIN;
int64_t x127 = -1LL;
uint64_t t24 = 69724LLU;
uint8_t x141 = 0U;
static volatile uint64_t x154 = 57650LLU;
static int16_t x162 = -1;
static int64_t t31 = -1455LL;
static volatile int64_t t33 = -23785855941479LL;
volatile int64_t x184 = INT64_MIN;
int32_t x191 = 0;
uint64_t t35 = 203813650550465352LLU;
int32_t x193 = -285331;
int8_t x195 = INT8_MIN;
int32_t t36 = 9068;
uint8_t x202 = 3U;
int32_t x203 = 204;
static int8_t x204 = -1;
int64_t x215 = -1LL;
int16_t x218 = -1;
int32_t x226 = 0;
int32_t t43 = 5;
volatile uint16_t x233 = 2631U;
volatile uint64_t t45 = 29996LLU;
int8_t x248 = INT8_MAX;
int32_t x249 = INT32_MAX;
volatile int32_t x251 = INT32_MAX;
static uint64_t x252 = 42616460LLU;
static volatile uint32_t x271 = UINT32_MAX;
uint64_t x272 = 26LLU;
volatile uint16_t x278 = UINT16_MAX;
int16_t x280 = 338;
int64_t t52 = -1LL;
static uint64_t x297 = 6LLU;
volatile uint16_t x299 = 12U;
uint8_t x301 = 2U;
int8_t x302 = -1;
int32_t x305 = INT32_MAX;
uint32_t x313 = 36276138U;
static int16_t x323 = INT16_MIN;
volatile int32_t t61 = -1363816;
volatile uint64_t t62 = 7LLU;
int8_t x334 = INT8_MAX;
static uint16_t x338 = 31450U;
uint8_t x355 = 42U;
int64_t x365 = INT64_MIN;
static int16_t x370 = -2;
static volatile uint16_t x372 = 1810U;
volatile uint8_t x375 = UINT8_MAX;
uint64_t x385 = UINT64_MAX;
int64_t x394 = 617653721LL;
uint64_t x398 = UINT64_MAX;
int8_t x415 = INT8_MIN;
int32_t x417 = INT32_MIN;
volatile int64_t t80 = -1LL;
int8_t x430 = -1;
volatile int16_t x432 = -1;
uint64_t x448 = UINT64_MAX;
uint64_t t88 = 25911155670796LLU;
int8_t x466 = INT8_MIN;
volatile uint64_t t91 = 101565784177988LLU;
volatile int64_t x473 = INT64_MIN;
static int8_t x475 = INT8_MIN;
static int8_t x485 = -19;
uint64_t x490 = UINT64_MAX;
uint32_t x491 = 1U;
int64_t x498 = INT64_MIN;
volatile int16_t x499 = INT16_MIN;


void f0(void) {
	int8_t x1 = INT8_MIN;
	uint64_t x2 = 1154703LLU;
	int32_t x4 = INT32_MAX;
	uint64_t t0 = 127718725279054LLU;

	t0 = (x1%(x2+(x3+x4)));

	if (t0 != 42328662998LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = 22;
	volatile int64_t x6 = INT64_MAX;
	static uint64_t x8 = 735LLU;
	uint64_t t1 = 6403029113207109509LLU;

	t1 = (x5%(x6+(x7+x8)));

	if (t1 != 22LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = INT64_MAX;
	static volatile uint64_t x11 = UINT64_MAX;
	static volatile uint64_t t2 = 214423679045854LLU;

	t2 = (x9%(x10+(x11+x12)));

	if (t2 != 32767LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = -42;
	uint8_t x14 = UINT8_MAX;
	static int16_t x15 = -9059;
	int32_t t3 = 73;

	t3 = (x13%(x14+(x15+x16)));

	if (t3 != -42) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x25 = -1;
	static int8_t x26 = -12;
	int32_t x27 = -1;
	int32_t t4 = 38526;

	t4 = (x25%(x26+(x27+x28)));

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x30 = INT64_MIN;
	uint32_t x31 = 118066U;

	t5 = (x29%(x30+(x31+x32)));

	if (t5 != 9223372036854657734LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x34 = 5U;
	uint64_t x35 = UINT64_MAX;
	int8_t x36 = -1;
	uint64_t t6 = 7619483LLU;

	t6 = (x33%(x34+(x35+x36)));

	if (t6 != 1LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x37 = INT64_MAX;
	int16_t x38 = INT16_MIN;
	int64_t x40 = INT64_MIN;
	volatile uint64_t t7 = 654306294860494LLU;

	t7 = (x37%(x38+(x39+x40)));

	if (t7 != 32768LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x42 = -16;
	int32_t x43 = 1;
	int32_t t8 = 10915;

	t8 = (x41%(x42+(x43+x44)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x57 = 905169880U;
	static uint32_t x58 = UINT32_MAX;
	static int8_t x59 = -47;
	static int32_t x60 = -97135;
	volatile uint32_t t9 = 613U;

	t9 = (x57%(x58+(x59+x60)));

	if (t9 != 905169880U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x66 = 3U;
	static int64_t x67 = 551390073913LL;
	static volatile uint16_t x68 = 0U;
	volatile uint64_t t10 = 600875796656195LLU;

	t10 = (x65%(x66+(x67+x68)));

	if (t10 != 169930892706LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x73 = 5042289;
	static int8_t x74 = -1;
	uint32_t x75 = UINT32_MAX;
	int8_t x76 = INT8_MAX;
	uint32_t t11 = 38457U;

	t11 = (x73%(x74+(x75+x76)));

	if (t11 != 39U) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int32_t x77 = 123;
	int64_t x78 = -140917LL;
	volatile int8_t x79 = -1;
	volatile uint16_t x80 = UINT16_MAX;
	volatile int64_t t12 = -29846965847654599LL;

	t12 = (x77%(x78+(x79+x80)));

	if (t12 != 123LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x81 = INT64_MIN;
	static uint64_t x83 = UINT64_MAX;
	volatile uint64_t t13 = 6660LLU;

	t13 = (x81%(x82+(x83+x84)));

	if (t13 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x85 = 2849420583505388LLU;
	uint8_t x86 = 4U;
	uint64_t x88 = 28LLU;
	static volatile uint64_t t14 = 4512LLU;

	t14 = (x85%(x86+(x87+x88)));

	if (t14 != 74LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x89 = INT32_MIN;
	volatile uint64_t x90 = UINT64_MAX;
	uint8_t x92 = UINT8_MAX;
	volatile uint64_t t15 = 533987634578LLU;

	t15 = (x89%(x90+(x91+x92)));

	if (t15 != 69LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x93 = INT32_MIN;
	volatile int16_t x94 = INT16_MIN;
	int64_t x95 = 84273530049940LL;
	uint16_t x96 = 84U;
	int64_t t16 = -37152LL;

	t16 = (x93%(x94+(x95+x96)));

	if (t16 != -2147483648LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x97 = INT8_MIN;
	int8_t x99 = INT8_MIN;
	int32_t x100 = 13;
	volatile int32_t t17 = -4085;

	t17 = (x97%(x98+(x99+x100)));

	if (t17 != -128) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x101 = INT64_MIN;
	uint64_t x103 = 1223254669651LLU;
	static volatile int16_t x104 = INT16_MAX;

	t18 = (x101%(x102+(x103+x104)));

	if (t18 != 636695535120LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x105 = 0U;
	int8_t x106 = 0;
	int16_t x107 = -1;
	int8_t x108 = -5;
	volatile int32_t t19 = 9627853;

	t19 = (x105%(x106+(x107+x108)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x109 = UINT16_MAX;
	int8_t x110 = 3;
	int16_t x111 = -1;
	int8_t x112 = -6;
	int32_t t20 = 177357940;

	t20 = (x109%(x110+(x111+x112)));

	if (t20 != 3) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x114 = -8;
	uint16_t x115 = UINT16_MAX;
	volatile uint64_t t21 = 8819621318LLU;

	t21 = (x113%(x114+(x115+x116)));

	if (t21 != 28LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x117 = 6U;
	static volatile int8_t x118 = INT8_MIN;
	int16_t x120 = -1;
	volatile uint64_t t22 = 1789817LLU;

	t22 = (x117%(x118+(x119+x120)));

	if (t22 != 6LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x121 = -475;
	uint8_t x122 = 7U;
	int8_t x123 = INT8_MIN;
	static volatile int32_t t23 = 266353470;

	t23 = (x121%(x122+(x123+x124)));

	if (t23 != -475) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x125 = UINT8_MAX;
	uint64_t x126 = UINT64_MAX;
	int16_t x128 = INT16_MIN;

	t24 = (x125%(x126+(x127+x128)));

	if (t24 != 255LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x129 = 12288U;
	uint64_t x130 = UINT64_MAX;
	int16_t x131 = 0;
	uint16_t x132 = 175U;
	static uint64_t t25 = 500656582239052LLU;

	t25 = (x129%(x130+(x131+x132)));

	if (t25 != 108LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x137 = -1LL;
	int64_t x138 = 8160329902032736LL;
	uint16_t x139 = 0U;
	int8_t x140 = INT8_MIN;
	volatile int64_t t26 = -53850754786206LL;

	t26 = (x137%(x138+(x139+x140)));

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint32_t x142 = UINT32_MAX;
	uint16_t x143 = UINT16_MAX;
	int16_t x144 = INT16_MIN;
	uint32_t t27 = 179U;

	t27 = (x141%(x142+(x143+x144)));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x153 = 185064191989864657LLU;
	uint16_t x155 = 1U;
	static int16_t x156 = INT16_MAX;
	static volatile uint64_t t28 = 17255505440867LLU;

	t28 = (x153%(x154+(x155+x156)));

	if (t28 != 20825LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x161 = UINT8_MAX;
	int8_t x163 = 23;
	int32_t x164 = -1;
	volatile int32_t t29 = -57146416;

	t29 = (x161%(x162+(x163+x164)));

	if (t29 != 3) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x165 = 58U;
	static volatile uint64_t x166 = 8646364LLU;
	uint16_t x167 = 55U;
	int64_t x168 = -1LL;
	uint64_t t30 = 34504509873133LLU;

	t30 = (x165%(x166+(x167+x168)));

	if (t30 != 58LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x169 = INT16_MIN;
	static int8_t x170 = INT8_MIN;
	static int64_t x171 = -1LL;
	static int16_t x172 = -183;

	t31 = (x169%(x170+(x171+x172)));

	if (t31 != -8LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x173 = 75U;
	int32_t x174 = -295;
	int8_t x175 = -6;
	volatile uint64_t x176 = 97220243230609LLU;
	uint64_t t32 = 1360146844644271LLU;

	t32 = (x173%(x174+(x175+x176)));

	if (t32 != 75LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x177 = UINT8_MAX;
	int64_t x178 = INT64_MIN;
	uint16_t x179 = 3U;
	volatile int64_t x180 = -1LL;

	t33 = (x177%(x178+(x179+x180)));

	if (t33 != 255LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x181 = 60U;
	uint32_t x182 = 15U;
	static int8_t x183 = INT8_MAX;
	int64_t t34 = 529516314094LL;

	t34 = (x181%(x182+(x183+x184)));

	if (t34 != 60LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x189 = UINT64_MAX;
	int16_t x190 = INT16_MIN;
	int16_t x192 = INT16_MIN;

	t35 = (x189%(x190+(x191+x192)));

	if (t35 != 65535LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x194 = 1U;
	int16_t x196 = INT16_MIN;

	t36 = (x193%(x194+(x195+x196)));

	if (t36 != -22171) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x201 = 60;
	volatile int32_t t37 = -184661;

	t37 = (x201%(x202+(x203+x204)));

	if (t37 != 60) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x205 = INT64_MIN;
	uint64_t x206 = UINT64_MAX;
	volatile int64_t x207 = -702LL;
	int64_t x208 = -157027762460680LL;
	volatile uint64_t t38 = 5054622661LLU;

	t38 = (x205%(x206+(x207+x208)));

	if (t38 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x209 = -1;
	int16_t x210 = 7;
	volatile uint16_t x211 = 0U;
	int32_t x212 = INT32_MIN;
	volatile int32_t t39 = -4775311;

	t39 = (x209%(x210+(x211+x212)));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x213 = -1LL;
	uint8_t x214 = 39U;
	uint8_t x216 = 20U;
	int64_t t40 = -215LL;

	t40 = (x213%(x214+(x215+x216)));

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x217 = 1;
	int16_t x219 = INT16_MIN;
	static int16_t x220 = -1;
	int32_t t41 = 538939;

	t41 = (x217%(x218+(x219+x220)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x221 = 81397U;
	static volatile int8_t x222 = INT8_MIN;
	volatile uint8_t x223 = 24U;
	volatile int16_t x224 = 0;
	static volatile uint32_t t42 = 13955U;

	t42 = (x221%(x222+(x223+x224)));

	if (t42 != 81397U) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x225 = UINT16_MAX;
	int8_t x227 = INT8_MIN;
	volatile int32_t x228 = INT32_MAX;

	t43 = (x225%(x226+(x227+x228)));

	if (t43 != 65535) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x229 = UINT16_MAX;
	static volatile int32_t x230 = -1;
	uint32_t x231 = UINT32_MAX;
	static int8_t x232 = -1;
	uint32_t t44 = 12U;

	t44 = (x229%(x230+(x231+x232)));

	if (t44 != 65535U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x234 = INT8_MAX;
	uint64_t x235 = 3252810LLU;
	volatile uint8_t x236 = UINT8_MAX;

	t45 = (x233%(x234+(x235+x236)));

	if (t45 != 2631LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x245 = INT32_MIN;
	volatile int16_t x246 = INT16_MAX;
	int16_t x247 = -1;
	volatile int32_t t46 = 409214665;

	t46 = (x245%(x246+(x247+x248)));

	if (t46 != -31250) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x250 = 0;
	uint64_t t47 = 82634419516198815LLU;

	t47 = (x249%(x250+(x251+x252)));

	if (t47 != 2147483647LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x253 = INT32_MIN;
	uint8_t x254 = 50U;
	uint8_t x255 = 4U;
	volatile int16_t x256 = 76;
	volatile int32_t t48 = -348381556;

	t48 = (x253%(x254+(x255+x256)));

	if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x261 = -1;
	int8_t x262 = 5;
	uint8_t x263 = 15U;
	int64_t x264 = -1LL;
	int64_t t49 = -192564001323605LL;

	t49 = (x261%(x262+(x263+x264)));

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x269 = -1;
	volatile int32_t x270 = -1;
	static volatile uint64_t t50 = 3096869790279839LLU;

	t50 = (x269%(x270+(x271+x272)));

	if (t50 != 575LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x273 = -7;
	int16_t x274 = INT16_MAX;
	int32_t x275 = 130;
	uint8_t x276 = UINT8_MAX;
	volatile int32_t t51 = 50909605;

	t51 = (x273%(x274+(x275+x276)));

	if (t51 != -7) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x277 = UINT8_MAX;
	int64_t x279 = INT64_MIN;

	t52 = (x277%(x278+(x279+x280)));

	if (t52 != 255LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x281 = INT16_MIN;
	static int8_t x282 = INT8_MIN;
	int16_t x283 = INT16_MIN;
	volatile int32_t x284 = INT32_MAX;
	static int32_t t53 = 100387;

	t53 = (x281%(x282+(x283+x284)));

	if (t53 != -32768) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x293 = 17386967580201351LLU;
	int8_t x294 = 1;
	int64_t x295 = INT64_MIN;
	uint8_t x296 = 7U;
	static volatile uint64_t t54 = 12484064403787441LLU;

	t54 = (x293%(x294+(x295+x296)));

	if (t54 != 17386967580201351LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x298 = 1530;
	uint16_t x300 = 509U;
	volatile uint64_t t55 = 30864783925685880LLU;

	t55 = (x297%(x298+(x299+x300)));

	if (t55 != 6LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x303 = 0U;
	volatile int8_t x304 = 28;
	static int32_t t56 = 67549;

	t56 = (x301%(x302+(x303+x304)));

	if (t56 != 2) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x306 = -1;
	static int32_t x307 = -151;
	uint32_t x308 = 13842024U;
	volatile uint32_t t57 = 818072U;

	t57 = (x305%(x306+(x307+x308)));

	if (t57 != 1993487U) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x309 = UINT32_MAX;
	int64_t x310 = -13543025426638909LL;
	static int8_t x311 = INT8_MAX;
	static int64_t x312 = 45LL;
	int64_t t58 = 44839LL;

	t58 = (x309%(x310+(x311+x312)));

	if (t58 != 4294967295LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x314 = INT32_MAX;
	static int64_t x315 = INT64_MIN;
	int32_t x316 = 24687024;
	volatile int64_t t59 = 8972111255042LL;

	t59 = (x313%(x314+(x315+x316)));

	if (t59 != 36276138LL) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int32_t x317 = -1375938;
	uint32_t x318 = 0U;
	static uint64_t x319 = UINT64_MAX;
	volatile int64_t x320 = INT64_MIN;
	uint64_t t60 = 1797726061239985304LLU;

	t60 = (x317%(x318+(x319+x320)));

	if (t60 != 9223372036853399871LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x321 = INT16_MIN;
	volatile int16_t x322 = -1;
	int16_t x324 = -1;

	t61 = (x321%(x322+(x323+x324)));

	if (t61 != -32768) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x325 = INT64_MAX;
	int8_t x326 = -2;
	uint64_t x327 = UINT64_MAX;
	int8_t x328 = INT8_MAX;

	t62 = (x325%(x326+(x327+x328)));

	if (t62 != 7LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x329 = INT8_MIN;
	int16_t x330 = INT16_MIN;
	int8_t x331 = -1;
	uint32_t x332 = UINT32_MAX;
	uint32_t t63 = 105U;

	t63 = (x329%(x330+(x331+x332)));

	if (t63 != 32642U) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x333 = -31578080;
	uint64_t x335 = UINT64_MAX;
	int32_t x336 = INT32_MIN;
	static uint64_t t64 = 69712996LLU;

	t64 = (x333%(x334+(x335+x336)));

	if (t64 != 2115905442LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x337 = INT8_MIN;
	int16_t x339 = -2840;
	int8_t x340 = -1;
	static int32_t t65 = 32083;

	t65 = (x337%(x338+(x339+x340)));

	if (t65 != -128) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x353 = UINT32_MAX;
	uint8_t x354 = 13U;
	static int16_t x356 = INT16_MIN;
	volatile uint32_t t66 = 0U;

	t66 = (x353%(x354+(x355+x356)));

	if (t66 != 32712U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x361 = INT32_MIN;
	uint16_t x362 = 160U;
	int64_t x363 = INT64_MIN;
	uint64_t x364 = UINT64_MAX;
	static uint64_t t67 = 850LLU;

	t67 = (x361%(x362+(x363+x364)));

	if (t67 != 9223372034707292001LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x366 = -1LL;
	int8_t x367 = INT8_MIN;
	uint8_t x368 = 98U;
	int64_t t68 = -3511808863890722741LL;

	t68 = (x365%(x366+(x367+x368)));

	if (t68 != -8LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x369 = 147LLU;
	int16_t x371 = INT16_MAX;
	uint64_t t69 = 57LLU;

	t69 = (x369%(x370+(x371+x372)));

	if (t69 != 147LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x373 = -49;
	int64_t x374 = 0LL;
	int32_t x376 = INT32_MIN;
	static int64_t t70 = 2817964676607035159LL;

	t70 = (x373%(x374+(x375+x376)));

	if (t70 != -49LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x377 = INT8_MAX;
	static int16_t x378 = INT16_MIN;
	int8_t x379 = INT8_MAX;
	int64_t x380 = -1LL;
	int64_t t71 = 1LL;

	t71 = (x377%(x378+(x379+x380)));

	if (t71 != 127LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x381 = UINT32_MAX;
	int8_t x382 = INT8_MIN;
	int16_t x383 = 0;
	volatile uint64_t x384 = 40LLU;
	uint64_t t72 = 29LLU;

	t72 = (x381%(x382+(x383+x384)));

	if (t72 != 4294967295LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x386 = 2015263LLU;
	volatile int16_t x387 = INT16_MAX;
	int32_t x388 = -3504898;
	uint64_t t73 = 90017960687142025LLU;

	t73 = (x385%(x386+(x387+x388)));

	if (t73 != 1456867LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x389 = INT8_MIN;
	volatile int16_t x390 = INT16_MIN;
	int32_t x391 = 33756478;
	volatile uint64_t x392 = 4498620025124331LLU;
	volatile uint64_t t74 = 3502LLU;

	t74 = (x389%(x390+(x391+x392)));

	if (t74 != 2401832432583388LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x393 = 6;
	volatile int64_t x395 = 14LL;
	uint8_t x396 = UINT8_MAX;
	int64_t t75 = 228LL;

	t75 = (x393%(x394+(x395+x396)));

	if (t75 != 6LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x397 = INT8_MIN;
	int32_t x399 = 6038323;
	uint8_t x400 = UINT8_MAX;
	volatile uint64_t t76 = 3625108236LLU;

	t76 = (x397%(x398+(x399+x400)));

	if (t76 != 3764561LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x409 = INT8_MIN;
	int32_t x410 = 0;
	volatile int64_t x411 = INT64_MIN;
	static volatile uint16_t x412 = UINT16_MAX;
	int64_t t77 = 1250LL;

	t77 = (x409%(x410+(x411+x412)));

	if (t77 != -128LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x413 = UINT32_MAX;
	int32_t x414 = -1;
	int8_t x416 = INT8_MIN;
	static uint32_t t78 = 3658925U;

	t78 = (x413%(x414+(x415+x416)));

	if (t78 != 256U) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x418 = INT64_MAX;
	int8_t x419 = INT8_MIN;
	int8_t x420 = INT8_MIN;
	int64_t t79 = 11266020068648LL;

	t79 = (x417%(x418+(x419+x420)));

	if (t79 != -2147483648LL) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int8_t x421 = -1;
	volatile int64_t x422 = -1LL;
	volatile int64_t x423 = -1LL;
	int64_t x424 = 183098988011086096LL;

	t80 = (x421%(x422+(x423+x424)));

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x425 = INT32_MIN;
	volatile int16_t x426 = -1;
	int64_t x427 = -1LL;
	int32_t x428 = INT32_MAX;
	static int64_t t81 = 2LL;

	t81 = (x425%(x426+(x427+x428)));

	if (t81 != -3LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x429 = 2322;
	volatile int32_t x431 = -297549;
	volatile int32_t t82 = 975;

	t82 = (x429%(x430+(x431+x432)));

	if (t82 != 2322) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x433 = -1;
	int32_t x434 = INT32_MIN;
	static int32_t x435 = 1;
	uint16_t x436 = 249U;
	static int32_t t83 = -15;

	t83 = (x433%(x434+(x435+x436)));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x437 = 7071958241LLU;
	int64_t x438 = INT64_MIN;
	volatile int32_t x439 = -11;
	static int16_t x440 = 354;
	volatile uint64_t t84 = 2686219307095847LLU;

	t84 = (x437%(x438+(x439+x440)));

	if (t84 != 7071958241LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x441 = 8U;
	static int8_t x442 = -1;
	int8_t x443 = -1;
	volatile int16_t x444 = INT16_MIN;
	static volatile int32_t t85 = 891169;

	t85 = (x441%(x442+(x443+x444)));

	if (t85 != 8) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x445 = 4375U;
	int64_t x446 = INT64_MIN;
	int16_t x447 = INT16_MIN;
	uint64_t t86 = 13752326281946LLU;

	t86 = (x445%(x446+(x447+x448)));

	if (t86 != 4375LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x449 = 1;
	int64_t x450 = INT64_MIN;
	int8_t x451 = INT8_MIN;
	uint64_t x452 = UINT64_MAX;
	volatile uint64_t t87 = 420932631LLU;

	t87 = (x449%(x450+(x451+x452)));

	if (t87 != 1LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x453 = -1;
	int64_t x454 = 172655074439LL;
	volatile uint64_t x455 = 0LLU;
	static volatile int64_t x456 = INT64_MAX;

	t88 = (x453%(x454+(x455+x456)));

	if (t88 != 9223371864199701369LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x457 = UINT8_MAX;
	uint64_t x458 = UINT64_MAX;
	uint8_t x459 = UINT8_MAX;
	uint8_t x460 = 29U;
	static uint64_t t89 = 3734160867486682LLU;

	t89 = (x457%(x458+(x459+x460)));

	if (t89 != 255LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x461 = 3107;
	volatile int16_t x462 = -1;
	int8_t x463 = -47;
	static int8_t x464 = -1;
	volatile int32_t t90 = 12;

	t90 = (x461%(x462+(x463+x464)));

	if (t90 != 20) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x465 = -1;
	volatile uint32_t x467 = 60702211U;
	static uint64_t x468 = 99563762LLU;

	t91 = (x465%(x466+(x467+x468)));

	if (t91 != 46029200LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x469 = 0LLU;
	uint16_t x470 = 2787U;
	volatile uint32_t x471 = 20208U;
	static int64_t x472 = 44638LL;
	static uint64_t t92 = 8196869336LLU;

	t92 = (x469%(x470+(x471+x472)));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x474 = UINT8_MAX;
	static volatile uint8_t x476 = 12U;
	static volatile int64_t t93 = -87173352632653332LL;

	t93 = (x473%(x474+(x475+x476)));

	if (t93 != -76LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x477 = INT8_MAX;
	int64_t x478 = INT64_MIN;
	int64_t x479 = INT64_MAX;
	uint64_t x480 = 524431586657061LLU;
	uint64_t t94 = 3750641349564LLU;

	t94 = (x477%(x478+(x479+x480)));

	if (t94 != 127LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x486 = 8U;
	static uint8_t x487 = 61U;
	int64_t x488 = -1LL;
	volatile int64_t t95 = -1805LL;

	t95 = (x485%(x486+(x487+x488)));

	if (t95 != -19LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x489 = 674300LLU;
	int64_t x492 = 19277021724209389LL;
	uint64_t t96 = 1782LLU;

	t96 = (x489%(x490+(x491+x492)));

	if (t96 != 674300LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x493 = -1LL;
	int32_t x494 = INT32_MAX;
	static volatile uint64_t x495 = 127951844LLU;
	uint32_t x496 = 7368664U;
	volatile uint64_t t97 = 1798792LLU;

	t97 = (x493%(x494+(x495+x496)));

	if (t97 != 2124704095LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x497 = 0U;
	uint64_t x500 = UINT64_MAX;
	uint64_t t98 = 9222078419073LLU;

	t98 = (x497%(x498+(x499+x500)));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x501 = 16LL;
	int32_t x502 = 222854;
	int64_t x503 = INT64_MIN;
	uint32_t x504 = 92U;
	int64_t t99 = -215836707182059007LL;

	t99 = (x501%(x502+(x503+x504)));

	if (t99 != 16LL) { NG(); } else { ; }
	
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

