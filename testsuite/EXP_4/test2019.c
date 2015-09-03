#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x9 = INT8_MIN;
volatile int8_t x11 = INT8_MIN;
int32_t x20 = INT32_MAX;
uint64_t t3 = 4354977359624565733LLU;
uint64_t x28 = UINT64_MAX;
static volatile uint64_t t4 = 85179301020996793LLU;
volatile int32_t t5 = 210168703;
int16_t x33 = -600;
int16_t x49 = 3;
int64_t x53 = INT64_MAX;
int16_t x57 = -1;
int16_t x58 = INT16_MIN;
uint16_t x63 = 20U;
int16_t x71 = 0;
int16_t x73 = 893;
volatile int8_t x81 = -1;
volatile int64_t x88 = 1261184LL;
int16_t x91 = INT16_MIN;
uint64_t t18 = 653LLU;
volatile int32_t x94 = INT32_MAX;
static uint64_t x98 = UINT64_MAX;
static uint32_t x106 = 1286757U;
uint64_t x109 = UINT64_MAX;
uint64_t x110 = 1639160605245865895LLU;
volatile uint64_t t23 = 16LLU;
int8_t x113 = -1;
uint16_t x114 = 25U;
int8_t x118 = -1;
volatile int8_t x119 = INT8_MAX;
volatile uint32_t t25 = 633314U;
uint64_t x123 = 76LLU;
static int64_t x128 = 14LL;
uint16_t x136 = UINT16_MAX;
uint64_t x137 = 74153716785404288LLU;
uint16_t x139 = UINT16_MAX;
int64_t x145 = INT64_MIN;
int8_t x146 = -1;
static volatile int64_t t32 = 57LL;
int32_t x164 = INT32_MIN;
int16_t x167 = INT16_MIN;
volatile int16_t x175 = 7289;
uint64_t x184 = 6935843041980LLU;
int8_t x188 = 0;
volatile int64_t x200 = INT64_MAX;
int32_t x205 = 9;
int64_t x213 = INT64_MIN;
int16_t x217 = INT16_MIN;
int16_t x218 = -1;
int32_t t49 = 56;
int8_t x232 = -1;
static uint64_t t51 = 84587596LLU;
uint32_t x238 = 4U;
int64_t x243 = -1LL;
int16_t x244 = INT16_MAX;
volatile uint64_t x249 = UINT64_MAX;
static int16_t x250 = 77;
int64_t x252 = INT64_MIN;
volatile uint64_t t56 = 24LLU;
volatile int32_t x256 = INT32_MIN;
volatile int32_t t57 = 2;
int16_t x257 = 14;
static int32_t x269 = 0;
int64_t x279 = INT64_MAX;
int16_t x288 = INT16_MIN;
volatile int64_t t66 = -129560459LL;
int8_t x299 = INT8_MIN;
volatile int16_t x300 = -1;
int16_t x303 = INT16_MIN;
volatile int64_t t72 = 1915431253LL;
int8_t x319 = 15;
int16_t x333 = 163;
int64_t x336 = 625755383282941421LL;
volatile int64_t t77 = -1139628036281971LL;
int16_t x337 = INT16_MIN;
uint64_t x343 = 45551569210410LLU;
volatile int32_t x352 = 45;
int32_t x353 = INT32_MIN;
int32_t x357 = -651470;
int16_t x362 = 2;
int64_t x365 = INT64_MAX;
uint16_t x372 = 1U;
int32_t x374 = INT32_MIN;
int16_t x376 = -1;
int64_t x378 = INT64_MIN;
int8_t x381 = INT8_MAX;
volatile uint64_t t89 = 480705628LLU;
static int64_t x387 = INT64_MIN;
int32_t x388 = 354417;
int64_t x393 = INT64_MIN;
static uint32_t x401 = 41604U;
int64_t x402 = -1LL;
uint32_t x403 = 62073U;
volatile uint64_t t95 = 842890826059LLU;
int64_t x410 = -1LL;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	uint32_t x2 = 459789U;
	volatile uint32_t x3 = 8270605U;
	int8_t x4 = -1;
	uint64_t t0 = 3045LLU;

	t0 = (x1/(x2^(x3|x4)));

	if (t0 != 4295427135LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x10 = -1;
	uint16_t x12 = 1U;
	static volatile int32_t t1 = -2005675;

	t1 = (x9/(x10^(x11|x12)));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint32_t x13 = 1057U;
	uint16_t x14 = 1458U;
	static uint32_t x15 = 12648U;
	int32_t x16 = 11;
	volatile uint32_t t2 = 15U;

	t2 = (x13/(x14^(x15|x16)));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x17 = 20368547040LLU;
	int64_t x18 = INT64_MIN;
	volatile uint32_t x19 = 0U;

	t3 = (x17/(x18^(x19|x20)));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x25 = UINT32_MAX;
	int64_t x26 = 594212206867777LL;
	int32_t x27 = -1;

	t4 = (x25/(x26^(x27|x28)));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x29 = -7877;
	int16_t x30 = -1;
	uint8_t x31 = UINT8_MAX;
	uint8_t x32 = UINT8_MAX;

	t5 = (x29/(x30^(x31|x32)));

	if (t5 != 30) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x34 = 0U;
	uint8_t x35 = 52U;
	int16_t x36 = INT16_MIN;
	int32_t t6 = 654609;

	t6 = (x33/(x34^(x35|x36)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x37 = UINT64_MAX;
	volatile int64_t x38 = INT64_MIN;
	uint64_t x39 = UINT64_MAX;
	volatile int8_t x40 = INT8_MIN;
	uint64_t t7 = 2674868166LLU;

	t7 = (x37/(x38^(x39|x40)));

	if (t7 != 2LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x41 = INT32_MIN;
	int8_t x42 = INT8_MAX;
	uint16_t x43 = UINT16_MAX;
	int8_t x44 = INT8_MAX;
	int32_t t8 = -23704;

	t8 = (x41/(x42^(x43|x44)));

	if (t8 != -32832) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x50 = INT8_MIN;
	static volatile uint64_t x51 = 10991062963176613LLU;
	int16_t x52 = -3994;
	static volatile uint64_t t9 = 34201993598617603LLU;

	t9 = (x49/(x50^(x51|x52)));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x54 = 60LLU;
	uint16_t x55 = UINT16_MAX;
	int32_t x56 = INT32_MIN;
	volatile uint64_t t10 = 80136035412LLU;

	t10 = (x53/(x54^(x55|x56)));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x59 = 179937;
	volatile uint8_t x60 = 1U;
	volatile int32_t t11 = -1;

	t11 = (x57/(x58^(x59|x60)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x61 = 12LL;
	static int16_t x62 = -734;
	int8_t x64 = INT8_MAX;
	int64_t t12 = 246011LL;

	t12 = (x61/(x62^(x63|x64)));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint32_t x65 = 62140U;
	volatile uint32_t x66 = 4U;
	volatile uint16_t x67 = 131U;
	uint16_t x68 = 750U;
	uint32_t t13 = 6435U;

	t13 = (x65/(x66^(x67|x68)));

	if (t13 != 83U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x69 = INT8_MIN;
	static int64_t x70 = INT64_MAX;
	int64_t x72 = INT64_MIN;
	int64_t t14 = -219842712498794LL;

	t14 = (x69/(x70^(x71|x72)));

	if (t14 != 128LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x74 = INT16_MIN;
	volatile int64_t x75 = 69LL;
	volatile int16_t x76 = INT16_MAX;
	int64_t t15 = 2531940198781LL;

	t15 = (x73/(x74^(x75|x76)));

	if (t15 != -893LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x82 = UINT16_MAX;
	int64_t x83 = INT64_MIN;
	uint64_t x84 = 3962845117546532582LLU;
	volatile uint64_t t16 = 577196LLU;

	t16 = (x81/(x82^(x83|x84)));

	if (t16 != 1LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x85 = INT32_MIN;
	int64_t x86 = INT64_MAX;
	int64_t x87 = -1LL;
	int64_t t17 = 28961214365LL;

	t17 = (x85/(x86^(x87|x88)));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x89 = 7242464LLU;
	volatile int16_t x90 = INT16_MAX;
	int64_t x92 = -125059LL;

	t18 = (x89/(x90^(x91|x92)));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x93 = 36U;
	uint64_t x95 = 101411933763673037LLU;
	int8_t x96 = 10;
	static uint64_t t19 = 3731592630151562LLU;

	t19 = (x93/(x94^(x95|x96)));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x97 = INT64_MIN;
	uint16_t x99 = 7U;
	volatile int8_t x100 = 13;
	volatile uint64_t t20 = 1388105220892LLU;

	t20 = (x97/(x98^(x99|x100)));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x101 = 5U;
	volatile int16_t x102 = INT16_MIN;
	int16_t x103 = INT16_MIN;
	volatile uint32_t x104 = 182U;
	uint32_t t21 = 103343U;

	t21 = (x101/(x102^(x103|x104)));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x105 = INT8_MIN;
	static uint16_t x107 = 2U;
	int32_t x108 = INT32_MIN;
	volatile uint32_t t22 = 25U;

	t22 = (x105/(x106^(x107|x108)));

	if (t22 != 1U) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x111 = 5516U;
	uint32_t x112 = 20550U;

	t23 = (x109/(x110^(x111|x112)));

	if (t23 != 11LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x115 = INT8_MIN;
	uint16_t x116 = 0U;
	int32_t t24 = 1;

	t24 = (x113/(x114^(x115|x116)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x117 = UINT32_MAX;
	volatile int16_t x120 = 508;

	t25 = (x117/(x118^(x119|x120)));

	if (t25 != 1U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x121 = INT32_MIN;
	int8_t x122 = -9;
	int16_t x124 = 13;
	static uint64_t t26 = 208LLU;

	t26 = (x121/(x122^(x123|x124)));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x125 = INT16_MIN;
	int16_t x126 = INT16_MAX;
	int64_t x127 = -10LL;
	int64_t t27 = -575881LL;

	t27 = (x125/(x126^(x127|x128)));

	if (t27 != 1LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x129 = -3588;
	int64_t x130 = 265LL;
	volatile int32_t x131 = -1;
	int16_t x132 = -1;
	int64_t t28 = 125591288845707090LL;

	t28 = (x129/(x130^(x131|x132)));

	if (t28 != 13LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x133 = INT16_MIN;
	static int32_t x134 = -16533;
	volatile uint64_t x135 = UINT64_MAX;
	static volatile uint64_t t29 = 527243495430534110LLU;

	t29 = (x133/(x134^(x135|x136)));

	if (t29 != 1115820473851289LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x138 = 14678U;
	int64_t x140 = -1LL;
	volatile uint64_t t30 = 3742102668087597023LLU;

	t30 = (x137/(x138^(x139|x140)));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x141 = INT8_MAX;
	static int8_t x142 = INT8_MIN;
	int16_t x143 = INT16_MIN;
	static int8_t x144 = 0;
	static int32_t t31 = 485117099;

	t31 = (x141/(x142^(x143|x144)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x147 = 1352LL;
	static int32_t x148 = INT32_MAX;

	t32 = (x145/(x146^(x147|x148)));

	if (t32 != 4294967296LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x153 = -1;
	int16_t x154 = INT16_MAX;
	static int16_t x155 = -14;
	static int64_t x156 = INT64_MAX;
	volatile int64_t t33 = 9997911525488LL;

	t33 = (x153/(x154^(x155|x156)));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x157 = UINT64_MAX;
	static uint16_t x158 = UINT16_MAX;
	int16_t x159 = INT16_MIN;
	int32_t x160 = 884127;
	static uint64_t t34 = 59604249LLU;

	t34 = (x157/(x158^(x159|x160)));

	if (t34 != 1LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x161 = 1;
	int8_t x162 = 1;
	static int16_t x163 = INT16_MIN;
	volatile int32_t t35 = 7481839;

	t35 = (x161/(x162^(x163|x164)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x165 = 724038273LLU;
	uint64_t x166 = UINT64_MAX;
	uint32_t x168 = 33944171U;
	uint64_t t36 = 8LLU;

	t36 = (x165/(x166^(x167|x168)));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x169 = 6U;
	int64_t x170 = -5294690119LL;
	volatile int32_t x171 = INT32_MIN;
	volatile int16_t x172 = -1;
	volatile int64_t t37 = -137895530LL;

	t37 = (x169/(x170^(x171|x172)));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x173 = 0U;
	static uint64_t x174 = 189602LLU;
	int16_t x176 = 1173;
	volatile uint64_t t38 = 99921005189LLU;

	t38 = (x173/(x174^(x175|x176)));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x177 = 2756502U;
	static uint32_t x178 = 36967U;
	int16_t x179 = 14;
	int32_t x180 = INT32_MIN;
	static uint32_t t39 = 24350U;

	t39 = (x177/(x178^(x179|x180)));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x181 = 47;
	volatile uint8_t x182 = 4U;
	uint16_t x183 = 1909U;
	uint64_t t40 = 10926LLU;

	t40 = (x181/(x182^(x183|x184)));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x185 = UINT16_MAX;
	volatile int8_t x186 = -1;
	int8_t x187 = 12;
	static int32_t t41 = 430525;

	t41 = (x185/(x186^(x187|x188)));

	if (t41 != -5041) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x189 = INT8_MIN;
	uint8_t x190 = 7U;
	static volatile int64_t x191 = INT64_MAX;
	volatile int64_t x192 = -1LL;
	static volatile int64_t t42 = -686526564380879LL;

	t42 = (x189/(x190^(x191|x192)));

	if (t42 != 16LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x193 = INT64_MIN;
	static volatile int32_t x194 = INT32_MIN;
	uint32_t x195 = 1156U;
	static uint32_t x196 = UINT32_MAX;
	int64_t t43 = 5LL;

	t43 = (x193/(x194^(x195|x196)));

	if (t43 != -4294967298LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x197 = INT64_MIN;
	volatile uint32_t x198 = UINT32_MAX;
	uint64_t x199 = UINT64_MAX;
	volatile uint64_t t44 = 61LLU;

	t44 = (x197/(x198^(x199|x200)));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x201 = INT32_MIN;
	volatile uint8_t x202 = 3U;
	int32_t x203 = INT32_MIN;
	volatile int16_t x204 = 6;
	volatile int32_t t45 = -34417;

	t45 = (x201/(x202^(x203|x204)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x206 = 22;
	static int64_t x207 = 8127272558912687LL;
	int8_t x208 = INT8_MIN;
	volatile int64_t t46 = 0LL;

	t46 = (x205/(x206^(x207|x208)));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x209 = INT8_MIN;
	static int32_t x210 = INT32_MIN;
	int16_t x211 = INT16_MIN;
	int32_t x212 = -980;
	volatile int32_t t47 = -276;

	t47 = (x209/(x210^(x211|x212)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x214 = UINT8_MAX;
	static uint32_t x215 = UINT32_MAX;
	uint16_t x216 = UINT16_MAX;
	volatile int64_t t48 = 2LL;

	t48 = (x213/(x214^(x215|x216)));

	if (t48 != -2147483776LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x219 = -8;
	static int8_t x220 = INT8_MIN;

	t49 = (x217/(x218^(x219|x220)));

	if (t49 != -4681) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x225 = UINT16_MAX;
	static int32_t x226 = -1;
	uint16_t x227 = 10U;
	int64_t x228 = INT64_MIN;
	int64_t t50 = -120LL;

	t50 = (x225/(x226^(x227|x228)));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x229 = UINT16_MAX;
	static int16_t x230 = INT16_MAX;
	volatile uint64_t x231 = UINT64_MAX;

	t51 = (x229/(x230^(x231|x232)));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x233 = 0;
	volatile uint8_t x234 = 68U;
	int16_t x235 = INT16_MIN;
	int32_t x236 = INT32_MAX;
	int32_t t52 = 515546775;

	t52 = (x233/(x234^(x235|x236)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x237 = INT8_MIN;
	volatile uint16_t x239 = 3723U;
	volatile int16_t x240 = -30;
	static volatile uint32_t t53 = 7416U;

	t53 = (x237/(x238^(x239|x240)));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x241 = INT16_MIN;
	uint64_t x242 = 33852019648LLU;
	uint64_t t54 = 3514470415281LLU;

	t54 = (x241/(x242^(x243|x244)));

	if (t54 != 1LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x245 = 943U;
	int32_t x246 = INT32_MIN;
	int64_t x247 = INT64_MIN;
	static int8_t x248 = INT8_MIN;
	int64_t t55 = 7LL;

	t55 = (x245/(x246^(x247|x248)));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x251 = 10595503918060LLU;

	t56 = (x249/(x250^(x251|x252)));

	if (t56 != 1LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x253 = INT32_MAX;
	int32_t x254 = INT32_MIN;
	int16_t x255 = INT16_MAX;

	t57 = (x253/(x254^(x255|x256)));

	if (t57 != 65538) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int64_t x258 = INT64_MAX;
	int8_t x259 = 14;
	int16_t x260 = INT16_MIN;
	static volatile int64_t t58 = 4129606108270526LL;

	t58 = (x257/(x258^(x259|x260)));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x261 = INT64_MAX;
	int8_t x262 = -52;
	int16_t x263 = -1907;
	int64_t x264 = -2LL;
	volatile int64_t t59 = 55358355LL;

	t59 = (x261/(x262^(x263|x264)));

	if (t59 != 180850432095191682LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x265 = INT32_MAX;
	int8_t x266 = 1;
	static int8_t x267 = INT8_MIN;
	int64_t x268 = -1LL;
	int64_t t60 = 12657LL;

	t60 = (x265/(x266^(x267|x268)));

	if (t60 != -1073741823LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x270 = -1;
	int8_t x271 = INT8_MIN;
	static volatile int16_t x272 = -4490;
	int32_t t61 = -14403;

	t61 = (x269/(x270^(x271|x272)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x273 = 93;
	int16_t x274 = 15;
	int64_t x275 = INT64_MIN;
	uint64_t x276 = UINT64_MAX;
	volatile uint64_t t62 = 42282860LLU;

	t62 = (x273/(x274^(x275|x276)));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x277 = 435U;
	volatile int64_t x278 = -13743LL;
	int16_t x280 = INT16_MAX;
	int64_t t63 = -16218621306LL;

	t63 = (x277/(x278^(x279|x280)));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x281 = INT32_MIN;
	volatile int16_t x282 = -1;
	uint32_t x283 = 57U;
	volatile uint8_t x284 = UINT8_MAX;
	static uint32_t t64 = 4U;

	t64 = (x281/(x282^(x283|x284)));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x285 = 72458;
	int32_t x286 = INT32_MIN;
	volatile uint32_t x287 = 1714U;
	uint32_t t65 = 3U;

	t65 = (x285/(x286^(x287|x288)));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x289 = -1;
	int64_t x290 = INT64_MAX;
	int8_t x291 = 0;
	volatile int32_t x292 = -7;

	t66 = (x289/(x290^(x291|x292)));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x293 = 14LL;
	uint8_t x294 = UINT8_MAX;
	volatile int64_t x295 = INT64_MIN;
	static uint32_t x296 = 207100U;
	volatile int64_t t67 = 1135723276LL;

	t67 = (x293/(x294^(x295|x296)));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x297 = INT32_MAX;
	int8_t x298 = INT8_MAX;
	int32_t t68 = 1;

	t68 = (x297/(x298^(x299|x300)));

	if (t68 != -16777215) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x301 = 4;
	int8_t x302 = INT8_MIN;
	volatile uint16_t x304 = 4U;
	volatile int32_t t69 = 3415853;

	t69 = (x301/(x302^(x303|x304)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x305 = 6U;
	int16_t x306 = 845;
	uint64_t x307 = 13575314298155798LLU;
	int32_t x308 = INT32_MAX;
	volatile uint64_t t70 = 6020616587LLU;

	t70 = (x305/(x306^(x307|x308)));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int16_t x309 = -1;
	int32_t x310 = INT32_MAX;
	static uint8_t x311 = 2U;
	int64_t x312 = INT64_MIN;
	int64_t t71 = 1931552818LL;

	t71 = (x309/(x310^(x311|x312)));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x313 = -12775934;
	int64_t x314 = INT64_MIN;
	static int16_t x315 = INT16_MIN;
	int64_t x316 = -210959671905095927LL;

	t72 = (x313/(x314^(x315|x316)));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x317 = 1996771925370LL;
	static volatile int8_t x318 = INT8_MIN;
	volatile uint64_t x320 = 290LLU;
	uint64_t t73 = 535LLU;

	t73 = (x317/(x318^(x319|x320)));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x321 = INT16_MIN;
	uint16_t x322 = UINT16_MAX;
	int64_t x323 = INT64_MIN;
	static int32_t x324 = INT32_MAX;
	volatile int64_t t74 = -9LL;

	t74 = (x321/(x322^(x323|x324)));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x325 = INT32_MIN;
	int8_t x326 = INT8_MIN;
	int64_t x327 = INT64_MIN;
	int64_t x328 = -1LL;
	int64_t t75 = -20855470005961110LL;

	t75 = (x325/(x326^(x327|x328)));

	if (t75 != -16909320LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x329 = 36U;
	volatile int8_t x330 = 23;
	uint64_t x331 = 4LLU;
	int8_t x332 = INT8_MIN;
	uint64_t t76 = 480523267735LLU;

	t76 = (x329/(x330^(x331|x332)));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x334 = 29;
	int8_t x335 = 6;

	t77 = (x333/(x334^(x335|x336)));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x338 = 1U;
	static int64_t x339 = 1LL;
	volatile uint32_t x340 = 1901807U;
	int64_t t78 = -46221004316435238LL;

	t78 = (x337/(x338^(x339|x340)));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x341 = -1;
	uint8_t x342 = UINT8_MAX;
	volatile uint8_t x344 = 1U;
	static uint64_t t79 = 164144023094792LLU;

	t79 = (x341/(x342^(x343|x344)));

	if (t79 != 404963LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x345 = INT64_MAX;
	int16_t x346 = INT16_MIN;
	static volatile int8_t x347 = INT8_MIN;
	uint32_t x348 = 48604365U;
	int64_t t80 = 151598067295LL;

	t80 = (x345/(x346^(x347|x348)));

	if (t80 != 281913746274254LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x349 = -1LL;
	uint32_t x350 = UINT32_MAX;
	int32_t x351 = INT32_MIN;
	static int64_t t81 = -700LL;

	t81 = (x349/(x350^(x351|x352)));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x354 = 3233440;
	int32_t x355 = -13669160;
	int8_t x356 = INT8_MIN;
	volatile int32_t t82 = -1;

	t82 = (x353/(x354^(x355|x356)));

	if (t82 != 664) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x358 = INT16_MIN;
	static volatile int64_t x359 = INT64_MIN;
	uint8_t x360 = 70U;
	int64_t t83 = -522836842763LL;

	t83 = (x357/(x358^(x359|x360)));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x361 = -1;
	int16_t x363 = -54;
	int16_t x364 = -1;
	static int32_t t84 = 68763;

	t84 = (x361/(x362^(x363|x364)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x366 = 6U;
	volatile int64_t x367 = -1LL;
	volatile int64_t x368 = INT64_MIN;
	int64_t t85 = -5859132081921279LL;

	t85 = (x365/(x366^(x367|x368)));

	if (t85 != -1317624576693539401LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x369 = UINT32_MAX;
	int8_t x370 = INT8_MIN;
	uint16_t x371 = UINT16_MAX;
	volatile uint32_t t86 = 86593U;

	t86 = (x369/(x370^(x371|x372)));

	if (t86 != 1U) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x373 = -1;
	uint16_t x375 = 3901U;
	int32_t t87 = 0;

	t87 = (x373/(x374^(x375|x376)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x377 = 9480U;
	int32_t x379 = -496;
	uint32_t x380 = UINT32_MAX;
	volatile int64_t t88 = -16818391LL;

	t88 = (x377/(x378^(x379|x380)));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x382 = UINT64_MAX;
	uint64_t x383 = 158LLU;
	static volatile uint64_t x384 = 105799608086LLU;

	t89 = (x381/(x382^(x383|x384)));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x385 = UINT64_MAX;
	volatile int8_t x386 = -1;
	volatile uint64_t t90 = 572415256705258879LLU;

	t90 = (x385/(x386^(x387|x388)));

	if (t90 != 2LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x389 = -1;
	int8_t x390 = 20;
	int8_t x391 = -1;
	uint32_t x392 = UINT32_MAX;
	volatile uint32_t t91 = 950U;

	t91 = (x389/(x390^(x391|x392)));

	if (t91 != 1U) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x394 = 29077U;
	int16_t x395 = -1;
	static volatile int16_t x396 = 3019;
	volatile int64_t t92 = 714LL;

	t92 = (x393/(x394^(x395|x396)));

	if (t92 != -2147498187LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x397 = UINT32_MAX;
	uint32_t x398 = UINT32_MAX;
	volatile uint64_t x399 = 0LLU;
	int16_t x400 = INT16_MIN;
	volatile uint64_t t93 = 78LLU;

	t93 = (x397/(x398^(x399|x400)));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x404 = INT64_MAX;
	int64_t t94 = -104199LL;

	t94 = (x401/(x402^(x403|x404)));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x405 = INT16_MAX;
	volatile int64_t x406 = INT64_MIN;
	volatile int16_t x407 = INT16_MAX;
	static uint64_t x408 = 25LLU;

	t95 = (x405/(x406^(x407|x408)));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x409 = INT32_MIN;
	int32_t x411 = INT32_MAX;
	static volatile int8_t x412 = INT8_MAX;
	int64_t t96 = 6770114LL;

	t96 = (x409/(x410^(x411|x412)));

	if (t96 != 1LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x413 = UINT64_MAX;
	static int16_t x414 = INT16_MIN;
	static int32_t x415 = 891;
	uint32_t x416 = 49669240U;
	volatile uint64_t t97 = 121701119908LLU;

	t97 = (x413/(x414^(x415|x416)));

	if (t97 != 4345197756LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x417 = 10U;
	volatile int8_t x418 = INT8_MIN;
	uint32_t x419 = UINT32_MAX;
	uint32_t x420 = UINT32_MAX;
	volatile uint32_t t98 = 968U;

	t98 = (x417/(x418^(x419|x420)));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x421 = 26U;
	int64_t x422 = INT64_MAX;
	static int16_t x423 = -1;
	volatile uint8_t x424 = 59U;
	int64_t t99 = -509750352LL;

	t99 = (x421/(x422^(x423|x424)));

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

