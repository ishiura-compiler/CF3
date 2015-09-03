#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x5 = -3018760329406768LL;
volatile int8_t x14 = INT8_MAX;
uint32_t x27 = 11033U;
static int32_t x35 = -1;
volatile int64_t t8 = INT64_MIN;
int8_t x38 = INT8_MAX;
uint64_t t11 = 185LLU;
uint16_t x52 = 1U;
int32_t t13 = -86960;
volatile int32_t x58 = -1;
volatile uint64_t x61 = 859LLU;
uint64_t t15 = 1047994671678LLU;
int8_t x68 = INT8_MIN;
static int8_t x77 = 2;
uint8_t x80 = 12U;
volatile int32_t t18 = -3543669;
int64_t t19 = -4448661741LL;
int16_t x87 = INT16_MIN;
volatile int32_t x88 = INT32_MAX;
volatile int16_t x89 = INT16_MAX;
int8_t x93 = INT8_MAX;
int8_t x94 = INT8_MIN;
static int8_t x95 = -1;
static volatile int64_t x96 = INT64_MIN;
int16_t x98 = INT16_MIN;
volatile uint32_t t23 = 431761U;
volatile int64_t t28 = 235LL;
volatile uint8_t x122 = UINT8_MAX;
uint16_t x125 = UINT16_MAX;
int64_t x126 = -1LL;
int64_t t30 = -1199081136218LL;
int8_t x130 = -1;
int64_t x131 = 367246554LL;
volatile int64_t t31 = -56558961LL;
volatile uint64_t x133 = 808431688793LLU;
volatile int32_t x141 = INT32_MIN;
volatile int16_t x143 = -1;
int64_t x144 = INT64_MAX;
static int8_t x149 = 0;
int64_t x157 = INT64_MIN;
static uint64_t x158 = 745868267748LLU;
int64_t x160 = INT64_MIN;
static volatile int8_t x165 = -1;
static uint16_t x166 = UINT16_MAX;
int8_t x168 = -1;
volatile int32_t t38 = 31912692;
int8_t x176 = INT8_MIN;
static uint8_t x177 = UINT8_MAX;
int32_t x178 = -1;
volatile uint16_t x185 = 68U;
int64_t x191 = -1LL;
volatile int16_t x192 = INT16_MIN;
volatile int64_t t44 = -52361659LL;
volatile uint32_t t46 = 235U;
volatile int8_t x205 = INT8_MAX;
static int64_t x207 = 0LL;
int64_t x212 = INT64_MAX;
uint64_t x215 = UINT64_MAX;
volatile int16_t x220 = INT16_MAX;
uint16_t x222 = 31U;
static volatile uint64_t t51 = 3376028996LLU;
int32_t x226 = 2;
int8_t x236 = INT8_MIN;
volatile int32_t x237 = INT32_MIN;
static volatile int64_t t55 = -8525903423498LL;
int32_t x244 = INT32_MAX;
volatile uint64_t t56 = 52648LLU;
int32_t x249 = INT32_MIN;
int16_t x251 = INT16_MAX;
int64_t x260 = INT64_MIN;
static int8_t x261 = -19;
uint64_t t63 = 14LLU;
volatile int8_t x275 = -1;
uint64_t x286 = UINT64_MAX;
uint8_t x287 = UINT8_MAX;
int32_t t67 = 7944153;
volatile int64_t x295 = INT64_MIN;
uint8_t x299 = 5U;
int8_t x300 = INT8_MIN;
uint32_t x303 = 1U;
int64_t t71 = -144513334LL;
int64_t x317 = INT64_MIN;
int8_t x325 = -7;
int16_t x336 = -1;
static int64_t x337 = INT64_MAX;
uint64_t x338 = UINT64_MAX;
static int16_t x339 = INT16_MIN;
volatile uint64_t t80 = 3949049LLU;
uint8_t x352 = UINT8_MAX;
static uint64_t x359 = 2934570465058LLU;
int32_t x367 = INT32_MIN;
static int32_t x368 = -275;
static int8_t x374 = -1;
uint64_t x377 = 1139163617899LLU;
uint32_t x378 = 264U;
int64_t x381 = 2020LL;
volatile uint64_t x384 = 968978492750358663LLU;
uint32_t x390 = UINT32_MAX;
int16_t x391 = INT16_MAX;
uint64_t x409 = 100656389365516LLU;
int8_t x418 = -2;
volatile int32_t x419 = -16556720;
int16_t x420 = 3;
volatile int16_t x422 = 1;
int64_t x423 = 15935449835442844LL;
uint32_t x424 = 3613843U;


void f0(void) {
	static uint8_t x1 = 28U;
	int32_t x2 = INT32_MIN;
	static int8_t x3 = -5;
	volatile uint32_t x4 = UINT32_MAX;
	volatile uint32_t t0 = 779U;

	t0 = (x1-(x2|(x3&x4)));

	if (t0 != 33U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x6 = -1;
	int32_t x7 = INT32_MAX;
	int64_t x8 = 411876641LL;
	volatile int64_t t1 = -132LL;

	t1 = (x5-(x6|(x7&x8)));

	if (t1 != -3018760329406767LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = INT8_MIN;
	volatile int32_t x10 = INT32_MIN;
	uint64_t x11 = 81252903LLU;
	uint64_t x12 = 1889398497738434LLU;
	uint64_t t2 = 1LLU;

	t2 = (x9-(x10|(x11&x12)));

	if (t2 != 2075929982LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	int64_t x15 = 6342509695222595LL;
	static int64_t x16 = INT64_MAX;
	volatile int64_t t3 = 1527710990217973LL;

	t3 = (x13-(x14|(x15&x16)));

	if (t3 != -6342509695222783LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	volatile uint32_t x18 = 925780U;
	int32_t x19 = -1;
	int16_t x20 = INT16_MIN;
	uint32_t t4 = 2669U;

	t4 = (x17-(x18|(x19&x20)));

	if (t4 != 24364U) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = UINT8_MAX;
	uint64_t x22 = 139982380419LLU;
	static volatile uint16_t x23 = 1U;
	static int64_t x24 = -1LL;
	uint64_t t5 = 775978800515LLU;

	t5 = (x21-(x22|(x23&x24)));

	if (t5 != 18446743933727171452LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 1U;
	int16_t x26 = -1;
	int64_t x28 = -1LL;
	int64_t t6 = 611100LL;

	t6 = (x25-(x26|(x27&x28)));

	if (t6 != 2LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 96947413262827809LLU;
	static volatile int32_t x30 = INT32_MIN;
	int64_t x31 = INT64_MIN;
	int32_t x32 = 59548060;
	uint64_t t7 = 16690051805871001LLU;

	t7 = (x29-(x30|(x31&x32)));

	if (t7 != 96947415410311457LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -1LL;
	int64_t x34 = INT64_MAX;
	uint16_t x36 = 15942U;

	t8 = (x33-(x34|(x35&x36)));

	if (t8 != INT64_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 4253492LLU;
	uint8_t x39 = UINT8_MAX;
	int16_t x40 = -25;
	static uint64_t t9 = 14009337LLU;

	t9 = (x37-(x38|(x39&x40)));

	if (t9 != 4253237LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = UINT32_MAX;
	int16_t x42 = INT16_MAX;
	static uint16_t x43 = 321U;
	uint32_t x44 = 71578082U;
	uint32_t t10 = 344268U;

	t10 = (x41-(x42|(x43&x44)));

	if (t10 != 4294934528U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x45 = INT32_MIN;
	uint8_t x46 = 100U;
	uint8_t x47 = 0U;
	uint64_t x48 = UINT64_MAX;

	t11 = (x45-(x46|(x47&x48)));

	if (t11 != 18446744071562067868LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = UINT64_MAX;
	int8_t x50 = INT8_MIN;
	int16_t x51 = 12168;
	static volatile uint64_t t12 = 3415215LLU;

	t12 = (x49-(x50|(x51&x52)));

	if (t12 != 127LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = -1;
	int16_t x54 = 724;
	int16_t x55 = -1;
	volatile uint16_t x56 = 54U;

	t13 = (x53-(x54|(x55&x56)));

	if (t13 != -759) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = 20;
	uint8_t x59 = 5U;
	static uint64_t x60 = 812231LLU;
	uint64_t t14 = 46LLU;

	t14 = (x57-(x58|(x59&x60)));

	if (t14 != 21LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x62 = 12LLU;
	int64_t x63 = -1LL;
	volatile int16_t x64 = 8123;

	t15 = (x61-(x62|(x63&x64)));

	if (t15 != 18446744073709544348LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = 9;
	uint32_t x66 = 12470149U;
	int64_t x67 = -309071126LL;
	volatile int64_t t16 = -6112LL;

	t16 = (x65-(x66|(x67&x68)));

	if (t16 != 306186372LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MAX;
	uint8_t x70 = 0U;
	int64_t x71 = INT64_MIN;
	uint16_t x72 = 432U;
	volatile int64_t t17 = -167952155LL;

	t17 = (x69-(x70|(x71&x72)));

	if (t17 != 2147483647LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x78 = INT32_MIN;
	uint8_t x79 = 20U;

	t18 = (x77-(x78|(x79&x80)));

	if (t18 != 2147483646) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x81 = -2616842521293436811LL;
	int64_t x82 = INT64_MIN;
	uint8_t x83 = UINT8_MAX;
	int32_t x84 = -1;

	t19 = (x81-(x82|(x83&x84)));

	if (t19 != 6606529515561338742LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = INT8_MAX;
	volatile int64_t x86 = 77LL;
	static int64_t t20 = -69614LL;

	t20 = (x85-(x86|(x87&x88)));

	if (t20 != -2147450830LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x90 = -1;
	uint32_t x91 = 390051860U;
	int16_t x92 = -6;
	volatile uint32_t t21 = 39U;

	t21 = (x89-(x90|(x91&x92)));

	if (t21 != 32768U) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t t22 = 41995LL;

	t22 = (x93-(x94|(x95&x96)));

	if (t22 != 255LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x97 = 0U;
	volatile uint32_t x99 = 7335046U;
	uint8_t x100 = UINT8_MAX;

	t23 = (x97-(x98|(x99&x100)));

	if (t23 != 32634U) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x101 = 386;
	volatile uint64_t x102 = 78580671260313LLU;
	int32_t x103 = INT32_MAX;
	static int8_t x104 = INT8_MAX;
	volatile uint64_t t24 = 13011873LLU;

	t24 = (x101-(x102|(x103&x104)));

	if (t24 != 18446665493038291587LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x105 = 1U;
	int16_t x106 = INT16_MIN;
	int8_t x107 = INT8_MIN;
	static int16_t x108 = INT16_MIN;
	int32_t t25 = -20;

	t25 = (x105-(x106|(x107&x108)));

	if (t25 != 32769) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x109 = 1U;
	static int16_t x110 = -492;
	volatile int32_t x111 = -560361304;
	int64_t x112 = -2630347LL;
	static volatile int64_t t26 = -59LL;

	t26 = (x109-(x110|(x111&x112)));

	if (t26 != 461LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x113 = 6609668959LLU;
	static volatile int64_t x114 = INT64_MAX;
	uint64_t x115 = 31950LLU;
	static uint16_t x116 = 0U;
	uint64_t t27 = 260665683116789285LLU;

	t27 = (x113-(x114|(x115&x116)));

	if (t27 != 9223372043464444768LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x117 = UINT32_MAX;
	int8_t x118 = INT8_MIN;
	volatile int16_t x119 = INT16_MIN;
	int64_t x120 = -246704602LL;

	t28 = (x117-(x118|(x119&x120)));

	if (t28 != 4294967423LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x121 = INT16_MIN;
	int16_t x123 = INT16_MAX;
	volatile int16_t x124 = INT16_MIN;
	int32_t t29 = 0;

	t29 = (x121-(x122|(x123&x124)));

	if (t29 != -33023) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x127 = INT8_MIN;
	uint32_t x128 = UINT32_MAX;

	t30 = (x125-(x126|(x127&x128)));

	if (t30 != 65536LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x129 = INT64_MIN;
	int32_t x132 = -283;

	t31 = (x129-(x130|(x131&x132)));

	if (t31 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x134 = 7U;
	volatile int32_t x135 = -326159477;
	uint8_t x136 = 22U;
	uint64_t t32 = 1047073920597834LLU;

	t32 = (x133-(x134|(x135&x136)));

	if (t32 != 808431688786LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x137 = 476825LLU;
	uint64_t x138 = 1761548831736151LLU;
	volatile int64_t x139 = INT64_MIN;
	int64_t x140 = INT64_MIN;
	uint64_t t33 = 136905079LLU;

	t33 = (x137-(x138|(x139&x140)));

	if (t33 != 9221610488023516482LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x142 = INT8_MIN;
	int64_t t34 = -572517271248LL;

	t34 = (x141-(x142|(x143&x144)));

	if (t34 != -2147483647LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x145 = INT64_MAX;
	int16_t x146 = 1;
	int64_t x147 = -8625506948186624LL;
	uint32_t x148 = 13U;
	static int64_t t35 = 62660LL;

	t35 = (x145-(x146|(x147&x148)));

	if (t35 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x150 = 5U;
	int32_t x151 = INT32_MAX;
	int32_t x152 = -19;
	uint32_t t36 = 17248469U;

	t36 = (x149-(x150|(x151&x152)));

	if (t36 != 2147483667U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x159 = INT8_MAX;
	volatile uint64_t t37 = 21171385LLU;

	t37 = (x157-(x158|(x159&x160)));

	if (t37 != 9223371290986508060LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x167 = 10U;

	t38 = (x165-(x166|(x167&x168)));

	if (t38 != -65536) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x169 = 34;
	int8_t x170 = INT8_MAX;
	static int16_t x171 = INT16_MIN;
	int64_t x172 = -1LL;
	static int64_t t39 = 12306845697LL;

	t39 = (x169-(x170|(x171&x172)));

	if (t39 != 32675LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x173 = 132189698861041543LLU;
	int16_t x174 = INT16_MAX;
	volatile uint64_t x175 = 1148137159468LLU;
	volatile uint64_t t40 = 2112834525762848003LLU;

	t40 = (x173-(x174|(x175&x176)));

	if (t40 != 132188550723864456LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x179 = 147945138096350LLU;
	volatile uint8_t x180 = 23U;
	uint64_t t41 = 296991779LLU;

	t41 = (x177-(x178|(x179&x180)));

	if (t41 != 256LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x186 = -1LL;
	static int16_t x187 = 25;
	uint16_t x188 = 6U;
	int64_t t42 = -125LL;

	t42 = (x185-(x186|(x187&x188)));

	if (t42 != 69LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x189 = INT32_MIN;
	int8_t x190 = -2;
	static volatile int64_t t43 = 255326800LL;

	t43 = (x189-(x190|(x191&x192)));

	if (t43 != -2147483646LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x193 = -1;
	int64_t x194 = INT64_MIN;
	int32_t x195 = -1;
	int64_t x196 = 3147943799468810880LL;

	t44 = (x193-(x194|(x195&x196)));

	if (t44 != 6075428237385964927LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x197 = 2U;
	uint32_t x198 = 186785U;
	int8_t x199 = -1;
	int16_t x200 = -1;
	static uint32_t t45 = 31191U;

	t45 = (x197-(x198|(x199&x200)));

	if (t45 != 3U) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x201 = 925U;
	int32_t x202 = -735;
	uint16_t x203 = UINT16_MAX;
	int8_t x204 = INT8_MAX;

	t46 = (x201-(x202|(x203&x204)));

	if (t46 != 1566U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x206 = INT8_MIN;
	int8_t x208 = INT8_MIN;
	static volatile int64_t t47 = 6741LL;

	t47 = (x205-(x206|(x207&x208)));

	if (t47 != 255LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x209 = INT16_MIN;
	int16_t x210 = 48;
	uint32_t x211 = 917784U;
	static int64_t t48 = 118LL;

	t48 = (x209-(x210|(x211&x212)));

	if (t48 != -950584LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x213 = -1;
	volatile int8_t x214 = -1;
	uint64_t x216 = 3199192LLU;
	static volatile uint64_t t49 = 112253939603037LLU;

	t49 = (x213-(x214|(x215&x216)));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int8_t x217 = -1;
	static uint8_t x218 = 10U;
	static int16_t x219 = INT16_MAX;
	static volatile int32_t t50 = 0;

	t50 = (x217-(x218|(x219&x220)));

	if (t50 != -32768) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x221 = 9285;
	int8_t x223 = 50;
	uint64_t x224 = 354LLU;

	t51 = (x221-(x222|(x223&x224)));

	if (t51 != 9222LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x225 = 755U;
	int64_t x227 = -1LL;
	volatile int16_t x228 = INT16_MIN;
	int64_t t52 = 2231443596873776448LL;

	t52 = (x225-(x226|(x227&x228)));

	if (t52 != 33521LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x229 = -1;
	int64_t x230 = INT64_MIN;
	int8_t x231 = 11;
	volatile uint16_t x232 = 773U;
	static int64_t t53 = 2699LL;

	t53 = (x229-(x230|(x231&x232)));

	if (t53 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x233 = -1;
	uint64_t x234 = 1366327532948590LLU;
	int32_t x235 = INT32_MIN;
	uint64_t t54 = 1602605701577LLU;

	t54 = (x233-(x234|(x235&x236)));

	if (t54 != 348156817LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x238 = -1;
	int8_t x239 = -3;
	int64_t x240 = -1LL;

	t55 = (x237-(x238|(x239&x240)));

	if (t55 != -2147483647LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x241 = INT8_MIN;
	volatile uint8_t x242 = UINT8_MAX;
	volatile uint64_t x243 = UINT64_MAX;

	t56 = (x241-(x242|(x243&x244)));

	if (t56 != 18446744071562067841LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x245 = 35;
	int64_t x246 = INT64_MAX;
	volatile int64_t x247 = INT64_MIN;
	int16_t x248 = 0;
	volatile int64_t t57 = 2175139248009LL;

	t57 = (x245-(x246|(x247&x248)));

	if (t57 != -9223372036854775772LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x250 = INT8_MIN;
	uint16_t x252 = UINT16_MAX;
	static volatile int32_t t58 = -153;

	t58 = (x249-(x250|(x251&x252)));

	if (t58 != -2147483647) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x253 = INT8_MIN;
	volatile int32_t x254 = -501514;
	uint32_t x255 = 425584U;
	int8_t x256 = 1;
	volatile uint32_t t59 = 3U;

	t59 = (x253-(x254|(x255&x256)));

	if (t59 != 501386U) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x257 = 23463U;
	uint16_t x258 = 24U;
	uint16_t x259 = 1181U;
	volatile int64_t t60 = 13161366148190LL;

	t60 = (x257-(x258|(x259&x260)));

	if (t60 != 23439LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x262 = INT32_MAX;
	volatile int32_t x263 = -222;
	volatile int32_t x264 = -1;
	int32_t t61 = -42;

	t61 = (x261-(x262|(x263&x264)));

	if (t61 != -18) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x265 = 4389U;
	volatile int8_t x266 = INT8_MAX;
	uint8_t x267 = 30U;
	static int32_t x268 = -1;
	volatile int32_t t62 = -23754431;

	t62 = (x265-(x266|(x267&x268)));

	if (t62 != 4262) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x269 = UINT64_MAX;
	uint8_t x270 = UINT8_MAX;
	int64_t x271 = INT64_MAX;
	static int32_t x272 = INT32_MIN;

	t63 = (x269-(x270|(x271&x272)));

	if (t63 != 9223372039002259200LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x273 = 51U;
	uint16_t x274 = UINT16_MAX;
	static int32_t x276 = 127;
	int32_t t64 = 26396;

	t64 = (x273-(x274|(x275&x276)));

	if (t64 != -65484) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x281 = INT8_MIN;
	uint8_t x282 = 127U;
	int32_t x283 = INT32_MIN;
	uint8_t x284 = UINT8_MAX;
	static volatile int32_t t65 = 842755;

	t65 = (x281-(x282|(x283&x284)));

	if (t65 != -255) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x285 = UINT64_MAX;
	int32_t x288 = 7;
	static volatile uint64_t t66 = 679397LLU;

	t66 = (x285-(x286|(x287&x288)));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x289 = 2U;
	int16_t x290 = 336;
	volatile int8_t x291 = 0;
	uint16_t x292 = UINT16_MAX;

	t67 = (x289-(x290|(x291&x292)));

	if (t67 != -334) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x293 = 27902540066LLU;
	volatile int32_t x294 = INT32_MIN;
	int32_t x296 = INT32_MIN;
	uint64_t t68 = 60LLU;

	t68 = (x293-(x294|(x295&x296)));

	if (t68 != 30050023714LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x297 = 5148U;
	static uint16_t x298 = 8494U;
	static int32_t t69 = 19;

	t69 = (x297-(x298|(x299&x300)));

	if (t69 != -3346) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x301 = INT32_MIN;
	static int16_t x302 = INT16_MAX;
	int32_t x304 = -42194;
	static uint32_t t70 = 6102U;

	t70 = (x301-(x302|(x303&x304)));

	if (t70 != 2147450881U) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int16_t x305 = 993;
	int64_t x306 = 283774924657466372LL;
	static int32_t x307 = INT32_MIN;
	int64_t x308 = 13257672072215LL;

	t71 = (x305-(x306|(x307&x308)));

	if (t71 != -283779342031329315LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x309 = UINT8_MAX;
	uint32_t x310 = 31U;
	int16_t x311 = INT16_MIN;
	uint16_t x312 = 146U;
	static volatile uint32_t t72 = 323U;

	t72 = (x309-(x310|(x311&x312)));

	if (t72 != 224U) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x313 = 55LLU;
	int32_t x314 = -1;
	uint8_t x315 = UINT8_MAX;
	int32_t x316 = INT32_MIN;
	uint64_t t73 = 66LLU;

	t73 = (x313-(x314|(x315&x316)));

	if (t73 != 56LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x318 = UINT64_MAX;
	volatile uint8_t x319 = 127U;
	uint64_t x320 = 404986227490212LLU;
	volatile uint64_t t74 = 903LLU;

	t74 = (x317-(x318|(x319&x320)));

	if (t74 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x321 = UINT64_MAX;
	int64_t x322 = INT64_MAX;
	static volatile int8_t x323 = -25;
	static int32_t x324 = INT32_MAX;
	volatile uint64_t t75 = 1153241841076LLU;

	t75 = (x321-(x322|(x323&x324)));

	if (t75 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x326 = 23LL;
	int16_t x327 = 171;
	int16_t x328 = 1910;
	volatile int64_t t76 = -1876502993086939000LL;

	t76 = (x325-(x326|(x327&x328)));

	if (t76 != -62LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x329 = INT8_MAX;
	uint8_t x330 = UINT8_MAX;
	uint32_t x331 = UINT32_MAX;
	uint32_t x332 = UINT32_MAX;
	volatile uint32_t t77 = 36845U;

	t77 = (x329-(x330|(x331&x332)));

	if (t77 != 128U) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x333 = INT64_MAX;
	static int32_t x334 = 77273;
	uint16_t x335 = 2353U;
	int64_t t78 = 3650073570LL;

	t78 = (x333-(x334|(x335&x336)));

	if (t78 != 9223372036854698502LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x340 = 53007789U;
	uint64_t t79 = 6LLU;

	t79 = (x337-(x338|(x339&x340)));

	if (t79 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x341 = INT8_MAX;
	volatile int32_t x342 = -1;
	uint16_t x343 = 231U;
	uint64_t x344 = UINT64_MAX;

	t80 = (x341-(x342|(x343&x344)));

	if (t80 != 128LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int16_t x345 = -1;
	volatile int64_t x346 = INT64_MIN;
	static volatile uint16_t x347 = 2U;
	int32_t x348 = 4151972;
	volatile int64_t t81 = INT64_MAX;

	t81 = (x345-(x346|(x347&x348)));

	if (t81 != INT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x349 = 6195777562LLU;
	int8_t x350 = INT8_MIN;
	static int32_t x351 = INT32_MIN;
	volatile uint64_t t82 = 99925826LLU;

	t82 = (x349-(x350|(x351&x352)));

	if (t82 != 6195777690LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x353 = INT32_MAX;
	uint8_t x354 = 0U;
	volatile int32_t x355 = -1;
	volatile uint64_t x356 = UINT64_MAX;
	volatile uint64_t t83 = 7LLU;

	t83 = (x353-(x354|(x355&x356)));

	if (t83 != 2147483648LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x357 = -1;
	static volatile int64_t x358 = INT64_MIN;
	static uint16_t x360 = 2U;
	uint64_t t84 = 16372868LLU;

	t84 = (x357-(x358|(x359&x360)));

	if (t84 != 9223372036854775805LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x365 = INT64_MIN;
	int16_t x366 = INT16_MIN;
	volatile int64_t t85 = 49218822675402LL;

	t85 = (x365-(x366|(x367&x368)));

	if (t85 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x369 = 1737354133LLU;
	static int32_t x370 = 268204;
	int8_t x371 = INT8_MIN;
	static int16_t x372 = -13123;
	uint64_t t86 = 559192632268659LLU;

	t86 = (x369-(x370|(x371&x372)));

	if (t86 != 1737362409LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x373 = 8U;
	volatile uint64_t x375 = 13357LLU;
	int8_t x376 = INT8_MAX;
	volatile uint64_t t87 = 98793339149962LLU;

	t87 = (x373-(x374|(x375&x376)));

	if (t87 != 9LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int16_t x379 = 2;
	static uint64_t x380 = 2429513604LLU;
	volatile uint64_t t88 = 715513444LLU;

	t88 = (x377-(x378|(x379&x380)));

	if (t88 != 1139163617635LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x382 = 624U;
	int64_t x383 = INT64_MIN;
	uint64_t t89 = 124LLU;

	t89 = (x381-(x382|(x383&x384)));

	if (t89 != 1396LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x385 = 0;
	int16_t x386 = INT16_MAX;
	int64_t x387 = -1963569405206LL;
	static volatile uint8_t x388 = UINT8_MAX;
	static int64_t t90 = 1068852379LL;

	t90 = (x385-(x386|(x387&x388)));

	if (t90 != -32767LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x389 = 737319;
	uint64_t x392 = 61985561647822622LLU;
	volatile uint64_t t91 = 4007472598696140392LLU;

	t91 = (x389-(x390|(x391&x392)));

	if (t91 != 18446744069415321640LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x393 = INT8_MIN;
	volatile int16_t x394 = 0;
	int8_t x395 = INT8_MAX;
	uint64_t x396 = 53LLU;
	uint64_t t92 = 54242121998667LLU;

	t92 = (x393-(x394|(x395&x396)));

	if (t92 != 18446744073709551435LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x397 = UINT8_MAX;
	uint32_t x398 = 1215U;
	uint64_t x399 = 78448297343478340LLU;
	int64_t x400 = INT64_MIN;
	uint64_t t93 = 1468989788409419889LLU;

	t93 = (x397-(x398|(x399&x400)));

	if (t93 != 18446744073709550656LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x401 = -287;
	volatile int8_t x402 = 1;
	uint16_t x403 = UINT16_MAX;
	int32_t x404 = -255;
	static int32_t t94 = 39;

	t94 = (x401-(x402|(x403&x404)));

	if (t94 != -65568) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x405 = -1;
	int16_t x406 = INT16_MIN;
	int8_t x407 = INT8_MIN;
	volatile int64_t x408 = 5LL;
	volatile int64_t t95 = -4568460257998120502LL;

	t95 = (x405-(x406|(x407&x408)));

	if (t95 != 32767LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x410 = INT16_MIN;
	int64_t x411 = -262543168560LL;
	volatile int16_t x412 = INT16_MAX;
	volatile uint64_t t96 = 30164374195508LLU;

	t96 = (x409-(x410|(x411&x412)));

	if (t96 != 100656389387068LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x413 = 7U;
	uint16_t x414 = 6665U;
	volatile uint16_t x415 = 5483U;
	static int64_t x416 = INT64_MAX;
	static int64_t t97 = 62LL;

	t97 = (x413-(x414|(x415&x416)));

	if (t97 != -8036LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x417 = 35U;
	uint32_t t98 = 30941348U;

	t98 = (x417-(x418|(x419&x420)));

	if (t98 != 37U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x421 = -5;
	volatile int64_t t99 = -73LL;

	t99 = (x421-(x422|(x423&x424)));

	if (t99 != -458902LL) { NG(); } else { ; }
	
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

