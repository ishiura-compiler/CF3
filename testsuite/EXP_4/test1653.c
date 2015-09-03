#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x3 = INT16_MIN;
volatile int32_t t0 = 16231;
uint32_t x5 = 746798U;
uint8_t x6 = 42U;
volatile uint32_t t1 = 33994414U;
uint64_t x9 = UINT64_MAX;
volatile int64_t x13 = INT64_MIN;
int64_t t3 = INT64_MIN;
volatile uint32_t x17 = 121352252U;
int64_t x20 = -60440799905490LL;
uint32_t t4 = 53146U;
int64_t x27 = INT64_MIN;
uint32_t x30 = 61730U;
int64_t x32 = -9172526591272LL;
static volatile uint64_t x33 = 1977LLU;
int64_t x37 = INT64_MAX;
uint16_t x39 = UINT16_MAX;
static uint64_t x51 = 2391LLU;
int32_t x54 = -5420344;
uint64_t x55 = 1342646656LLU;
int32_t x71 = -58582772;
uint64_t x84 = 745224770LLU;
int32_t t20 = INT32_MIN;
int64_t x86 = -3LL;
volatile uint64_t t21 = 3577331967LLU;
int16_t x91 = INT16_MAX;
volatile int32_t t22 = 204028;
volatile int32_t x95 = INT32_MIN;
int32_t x106 = INT32_MAX;
volatile uint8_t x109 = UINT8_MAX;
int64_t x121 = INT64_MIN;
volatile int64_t t31 = INT64_MIN;
static uint32_t t32 = 848U;
volatile uint16_t x137 = UINT16_MAX;
uint16_t x141 = 29U;
int64_t x150 = -1LL;
int32_t x151 = -372515;
static int64_t t37 = 1087508143596076LL;
int8_t x156 = -1;
volatile int32_t t38 = -2562;
volatile int8_t x157 = 7;
int64_t t39 = -8269760437205354LL;
uint32_t x161 = 499U;
static uint8_t x163 = 8U;
volatile int32_t x168 = -1;
static int32_t x169 = INT32_MAX;
uint64_t x171 = 163LLU;
int32_t x176 = -1;
volatile uint32_t x178 = 1338U;
uint32_t x182 = 4U;
uint8_t x186 = 57U;
int8_t x187 = INT8_MIN;
static int64_t x193 = INT64_MAX;
volatile int64_t t48 = -5901851658LL;
uint16_t x205 = 31U;
int8_t x213 = -1;
int32_t t55 = -747346133;
uint16_t x229 = UINT16_MAX;
volatile int32_t t57 = -95304;
volatile int64_t t58 = 237294LL;
volatile int64_t t59 = -3LL;
static uint16_t x241 = UINT16_MAX;
int64_t x243 = INT64_MAX;
static uint8_t x255 = UINT8_MAX;
volatile int64_t t63 = INT64_MIN;
int16_t x258 = INT16_MAX;
uint16_t x259 = 0U;
volatile int64_t x260 = -1LL;
uint64_t x261 = 1037832573935LLU;
int64_t x262 = -1LL;
uint64_t t65 = 38373926758LLU;
volatile int16_t x265 = INT16_MAX;
volatile int32_t x270 = INT32_MIN;
static int32_t t67 = 5;
int64_t x275 = 37612483413734LL;
static volatile int16_t x286 = INT16_MIN;
int16_t x291 = -285;
volatile int32_t t71 = 2;
uint32_t x293 = 2U;
static uint32_t x304 = 6U;
uint32_t x311 = 14312U;
int16_t x322 = 620;
static int8_t x325 = INT8_MIN;
int32_t x326 = INT32_MIN;
int32_t x330 = 167935;
int32_t t81 = 2058;
uint8_t x340 = 1U;
static volatile int16_t x344 = INT16_MIN;
static volatile uint32_t x350 = 993481U;
int8_t x354 = INT8_MIN;
volatile int8_t x355 = -1;
int32_t x356 = INT32_MAX;
volatile uint8_t x358 = 2U;
volatile int16_t x360 = INT16_MIN;
int8_t x364 = INT8_MIN;
volatile int64_t t89 = -3921922002223LL;
int8_t x369 = INT8_MAX;
int32_t x373 = 0;
int8_t x375 = INT8_MIN;
volatile int64_t t94 = INT64_MIN;
static int64_t x393 = -1LL;
volatile int64_t t97 = 7026204625646710LL;
uint32_t x402 = 33U;
int8_t x403 = INT8_MIN;


void f0(void) {
	int32_t x1 = 6;
	int16_t x2 = -2840;
	volatile int32_t x4 = 59360;

	t0 = (x1-(x2&(x3<=x4)));

	if (t0 != 6) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x7 = -155364;
	int32_t x8 = 102691252;

	t1 = (x5-(x6&(x7<=x8)));

	if (t1 != 746798U) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x10 = 12609302056LLU;
	uint8_t x11 = UINT8_MAX;
	uint16_t x12 = 3120U;
	volatile uint64_t t2 = UINT64_MAX;

	t2 = (x9-(x10&(x11<=x12)));

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x14 = INT64_MIN;
	static uint32_t x15 = 1738724U;
	uint64_t x16 = 197403642LLU;

	t3 = (x13-(x14&(x15<=x16)));

	if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x18 = 4U;
	int16_t x19 = 3;

	t4 = (x17-(x18&(x19<=x20)));

	if (t4 != 121352252U) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x21 = 454U;
	static volatile int8_t x22 = 43;
	static int16_t x23 = 2;
	int8_t x24 = INT8_MIN;
	static volatile int32_t t5 = 2761;

	t5 = (x21-(x22&(x23<=x24)));

	if (t5 != 454) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 866712U;
	uint16_t x26 = 5293U;
	int8_t x28 = INT8_MIN;
	volatile uint32_t t6 = 38U;

	t6 = (x25-(x26&(x27<=x28)));

	if (t6 != 866711U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x29 = UINT32_MAX;
	int16_t x31 = INT16_MAX;
	volatile uint32_t t7 = UINT32_MAX;

	t7 = (x29-(x30&(x31<=x32)));

	if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x34 = 96U;
	int8_t x35 = INT8_MIN;
	uint32_t x36 = 738177U;
	volatile uint64_t t8 = 360307141LLU;

	t8 = (x33-(x34&(x35<=x36)));

	if (t8 != 1977LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x38 = INT64_MIN;
	int16_t x40 = -1;
	static int64_t t9 = INT64_MAX;

	t9 = (x37-(x38&(x39<=x40)));

	if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x41 = 1U;
	static int16_t x42 = INT16_MIN;
	static volatile int32_t x43 = 88929549;
	uint64_t x44 = 5LLU;
	volatile int32_t t10 = -106043721;

	t10 = (x41-(x42&(x43<=x44)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -2;
	static volatile int32_t x46 = 422144;
	int16_t x47 = -1;
	int16_t x48 = INT16_MIN;
	volatile int32_t t11 = 3365571;

	t11 = (x45-(x46&(x47<=x48)));

	if (t11 != -2) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	int64_t x50 = INT64_MAX;
	int16_t x52 = INT16_MIN;
	volatile int64_t t12 = 98052165LL;

	t12 = (x49-(x50&(x51<=x52)));

	if (t12 != -32769LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x53 = 250842U;
	volatile int8_t x56 = INT8_MAX;
	volatile uint32_t t13 = 24U;

	t13 = (x53-(x54&(x55<=x56)));

	if (t13 != 250842U) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -2191598304267944215LL;
	uint8_t x58 = 5U;
	int8_t x59 = INT8_MIN;
	int16_t x60 = INT16_MAX;
	int64_t t14 = -1581438701678470355LL;

	t14 = (x57-(x58&(x59<=x60)));

	if (t14 != -2191598304267944216LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -1LL;
	uint8_t x62 = UINT8_MAX;
	uint16_t x63 = 3U;
	int64_t x64 = INT64_MIN;
	volatile int64_t t15 = -249128LL;

	t15 = (x61-(x62&(x63<=x64)));

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x65 = -1863728;
	static volatile int32_t x66 = -1;
	int16_t x67 = INT16_MIN;
	int8_t x68 = -1;
	volatile int32_t t16 = 1212667;

	t16 = (x65-(x66&(x67<=x68)));

	if (t16 != -1863729) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = 2U;
	int8_t x70 = -1;
	uint16_t x72 = UINT16_MAX;
	int32_t t17 = 6;

	t17 = (x69-(x70&(x71<=x72)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MIN;
	int64_t x74 = -32975978061223433LL;
	int64_t x75 = INT64_MAX;
	int32_t x76 = INT32_MIN;
	int64_t t18 = 3707LL;

	t18 = (x73-(x74&(x75<=x76)));

	if (t18 != -32768LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MIN;
	static int32_t x78 = INT32_MAX;
	int16_t x79 = 0;
	uint8_t x80 = 115U;
	int32_t t19 = 693586569;

	t19 = (x77-(x78&(x79<=x80)));

	if (t19 != -129) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	int8_t x82 = INT8_MIN;
	int64_t x83 = INT64_MIN;

	t20 = (x81-(x82&(x83<=x84)));

	if (t20 != INT32_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = 670LLU;
	volatile int16_t x87 = INT16_MAX;
	static uint8_t x88 = UINT8_MAX;

	t21 = (x85-(x86&(x87<=x88)));

	if (t21 != 670LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x89 = INT16_MIN;
	static int32_t x90 = -781;
	int16_t x92 = INT16_MAX;

	t22 = (x89-(x90&(x91<=x92)));

	if (t22 != -32769) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = -1;
	uint8_t x94 = 1U;
	static uint8_t x96 = UINT8_MAX;
	static int32_t t23 = -34968;

	t23 = (x93-(x94&(x95<=x96)));

	if (t23 != -2) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x97 = -5682387640LL;
	uint16_t x98 = 124U;
	volatile int32_t x99 = INT32_MAX;
	volatile int8_t x100 = INT8_MAX;
	volatile int64_t t24 = -60477528LL;

	t24 = (x97-(x98&(x99<=x100)));

	if (t24 != -5682387640LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = 0;
	static int64_t x102 = 15417770357LL;
	int8_t x103 = INT8_MIN;
	volatile uint32_t x104 = 1866769U;
	int64_t t25 = -800LL;

	t25 = (x101-(x102&(x103<=x104)));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x105 = 21U;
	int8_t x107 = 54;
	uint16_t x108 = 1663U;
	int32_t t26 = -5742;

	t26 = (x105-(x106&(x107<=x108)));

	if (t26 != 20) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x110 = INT32_MIN;
	uint8_t x111 = UINT8_MAX;
	uint64_t x112 = 4214744684192511LLU;
	int32_t t27 = -17637507;

	t27 = (x109-(x110&(x111<=x112)));

	if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x113 = UINT64_MAX;
	int32_t x114 = -1760497;
	int16_t x115 = INT16_MIN;
	int64_t x116 = INT64_MIN;
	uint64_t t28 = UINT64_MAX;

	t28 = (x113-(x114&(x115<=x116)));

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x117 = 8946371U;
	int32_t x118 = INT32_MIN;
	static volatile uint32_t x119 = 1U;
	int16_t x120 = -1;
	volatile uint32_t t29 = 39605170U;

	t29 = (x117-(x118&(x119<=x120)));

	if (t29 != 8946371U) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x122 = INT16_MIN;
	static int64_t x123 = -1LL;
	uint32_t x124 = 119U;
	int64_t t30 = INT64_MIN;

	t30 = (x121-(x122&(x123<=x124)));

	if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x125 = INT64_MIN;
	int32_t x126 = INT32_MIN;
	uint8_t x127 = UINT8_MAX;
	static volatile uint64_t x128 = 125LLU;

	t31 = (x125-(x126&(x127<=x128)));

	if (t31 != INT64_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = 420191U;
	static uint16_t x130 = 13776U;
	uint8_t x131 = 99U;
	uint8_t x132 = UINT8_MAX;

	t32 = (x129-(x130&(x131<=x132)));

	if (t32 != 420191U) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x133 = 0U;
	static int32_t x134 = INT32_MAX;
	static volatile int16_t x135 = INT16_MIN;
	volatile int32_t x136 = 11375;
	int32_t t33 = 13738679;

	t33 = (x133-(x134&(x135<=x136)));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x138 = -1;
	volatile uint16_t x139 = 2U;
	static volatile int8_t x140 = -1;
	int32_t t34 = -12558;

	t34 = (x137-(x138&(x139<=x140)));

	if (t34 != 65535) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x142 = INT64_MIN;
	int16_t x143 = INT16_MIN;
	volatile int8_t x144 = -1;
	volatile int64_t t35 = -2115894154846668784LL;

	t35 = (x141-(x142&(x143<=x144)));

	if (t35 != 29LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x145 = 24U;
	volatile int64_t x146 = 18LL;
	int32_t x147 = -2217;
	uint8_t x148 = 35U;
	volatile int64_t t36 = 0LL;

	t36 = (x145-(x146&(x147<=x148)));

	if (t36 != 24LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = 29;
	static volatile uint32_t x152 = 31143901U;

	t37 = (x149-(x150&(x151<=x152)));

	if (t37 != 29LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MIN;
	volatile int8_t x154 = INT8_MIN;
	volatile int16_t x155 = -1;

	t38 = (x153-(x154&(x155<=x156)));

	if (t38 != -128) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x158 = INT64_MIN;
	uint8_t x159 = 96U;
	int64_t x160 = -1LL;

	t39 = (x157-(x158&(x159<=x160)));

	if (t39 != 7LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x162 = UINT8_MAX;
	int32_t x164 = INT32_MIN;
	volatile uint32_t t40 = 106150U;

	t40 = (x161-(x162&(x163<=x164)));

	if (t40 != 499U) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = 14U;
	uint8_t x166 = 8U;
	int8_t x167 = -1;
	int32_t t41 = 697;

	t41 = (x165-(x166&(x167<=x168)));

	if (t41 != 14) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int32_t x170 = INT32_MIN;
	uint8_t x172 = UINT8_MAX;
	volatile int32_t t42 = INT32_MAX;

	t42 = (x169-(x170&(x171<=x172)));

	if (t42 != INT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x173 = -1LL;
	int32_t x174 = 1105355;
	uint8_t x175 = UINT8_MAX;
	volatile int64_t t43 = -9LL;

	t43 = (x173-(x174&(x175<=x176)));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x177 = 14U;
	int64_t x179 = INT64_MIN;
	int16_t x180 = INT16_MIN;
	volatile uint32_t t44 = 31U;

	t44 = (x177-(x178&(x179<=x180)));

	if (t44 != 14U) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = 1;
	int64_t x183 = INT64_MAX;
	static volatile int32_t x184 = INT32_MIN;
	volatile uint32_t t45 = 115U;

	t45 = (x181-(x182&(x183<=x184)));

	if (t45 != 1U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x185 = -1;
	int32_t x188 = INT32_MIN;
	int32_t t46 = 1;

	t46 = (x185-(x186&(x187<=x188)));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x189 = UINT32_MAX;
	int8_t x190 = INT8_MIN;
	volatile int16_t x191 = 8450;
	int16_t x192 = INT16_MAX;
	uint32_t t47 = UINT32_MAX;

	t47 = (x189-(x190&(x191<=x192)));

	if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x194 = INT8_MAX;
	volatile int32_t x195 = -163062;
	int8_t x196 = 1;

	t48 = (x193-(x194&(x195<=x196)));

	if (t48 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = 67369LL;
	uint16_t x198 = 33U;
	static int32_t x199 = 24976;
	volatile int8_t x200 = INT8_MIN;
	volatile int64_t t49 = -307275044897LL;

	t49 = (x197-(x198&(x199<=x200)));

	if (t49 != 67369LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = -1LL;
	int8_t x202 = INT8_MIN;
	static uint32_t x203 = 3241421U;
	int32_t x204 = INT32_MIN;
	static int64_t t50 = -739179LL;

	t50 = (x201-(x202&(x203<=x204)));

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x206 = -1;
	uint16_t x207 = UINT16_MAX;
	volatile int64_t x208 = 150LL;
	int32_t t51 = 953;

	t51 = (x205-(x206&(x207<=x208)));

	if (t51 != 31) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = -1;
	int16_t x210 = -1;
	int8_t x211 = INT8_MIN;
	static volatile int16_t x212 = -1;
	volatile int32_t t52 = 2193;

	t52 = (x209-(x210&(x211<=x212)));

	if (t52 != -2) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x214 = UINT64_MAX;
	int8_t x215 = -3;
	uint16_t x216 = UINT16_MAX;
	volatile uint64_t t53 = 557341LLU;

	t53 = (x213-(x214&(x215<=x216)));

	if (t53 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x217 = INT8_MIN;
	static int16_t x218 = INT16_MIN;
	static volatile int32_t x219 = -24;
	volatile uint8_t x220 = 7U;
	int32_t t54 = 0;

	t54 = (x217-(x218&(x219<=x220)));

	if (t54 != -128) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = INT8_MIN;
	int32_t x222 = INT32_MIN;
	int16_t x223 = -1;
	int64_t x224 = -1LL;

	t55 = (x221-(x222&(x223<=x224)));

	if (t55 != -128) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x225 = INT64_MIN;
	static int16_t x226 = -8254;
	volatile uint32_t x227 = 370U;
	volatile uint16_t x228 = 23U;
	volatile int64_t t56 = INT64_MIN;

	t56 = (x225-(x226&(x227<=x228)));

	if (t56 != INT64_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x230 = -1;
	static int8_t x231 = INT8_MIN;
	static uint32_t x232 = 22U;

	t57 = (x229-(x230&(x231<=x232)));

	if (t57 != 65535) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MAX;
	static int64_t x234 = INT64_MIN;
	volatile int16_t x235 = INT16_MAX;
	volatile int32_t x236 = -1;

	t58 = (x233-(x234&(x235<=x236)));

	if (t58 != 127LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = -37044663500581LL;
	volatile int16_t x238 = INT16_MAX;
	int32_t x239 = INT32_MIN;
	uint64_t x240 = 15LLU;

	t59 = (x237-(x238&(x239<=x240)));

	if (t59 != -37044663500581LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x242 = 18U;
	int8_t x244 = -5;
	static volatile int32_t t60 = -1;

	t60 = (x241-(x242&(x243<=x244)));

	if (t60 != 65535) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x245 = 22035U;
	int64_t x246 = -822129713236LL;
	volatile int8_t x247 = -6;
	int64_t x248 = INT64_MIN;
	static int64_t t61 = -7162002019927LL;

	t61 = (x245-(x246&(x247<=x248)));

	if (t61 != 22035LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x249 = 958U;
	int8_t x250 = -1;
	volatile int32_t x251 = INT32_MIN;
	static volatile int64_t x252 = INT64_MAX;
	volatile int32_t t62 = -6509;

	t62 = (x249-(x250&(x251<=x252)));

	if (t62 != 957) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MIN;
	int32_t x254 = 73421846;
	static volatile int16_t x256 = INT16_MAX;

	t63 = (x253-(x254&(x255<=x256)));

	if (t63 != INT64_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = -1;
	volatile int32_t t64 = 76;

	t64 = (x257-(x258&(x259<=x260)));

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x263 = 3434618976306753185LLU;
	int8_t x264 = -38;

	t65 = (x261-(x262&(x263<=x264)));

	if (t65 != 1037832573934LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x266 = 9U;
	volatile uint16_t x267 = 4U;
	static uint8_t x268 = 31U;
	volatile uint32_t t66 = 7U;

	t66 = (x265-(x266&(x267<=x268)));

	if (t66 != 32766U) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x269 = INT16_MIN;
	int32_t x271 = -1;
	int8_t x272 = 6;

	t67 = (x269-(x270&(x271<=x272)));

	if (t67 != -32768) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MIN;
	int16_t x274 = -1;
	static int16_t x276 = 1020;
	volatile int32_t t68 = -1;

	t68 = (x273-(x274&(x275<=x276)));

	if (t68 != -32768) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = INT32_MAX;
	int16_t x278 = INT16_MIN;
	volatile uint64_t x279 = 101177LLU;
	static int16_t x280 = INT16_MIN;
	int32_t t69 = INT32_MAX;

	t69 = (x277-(x278&(x279<=x280)));

	if (t69 != INT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x285 = INT8_MIN;
	int16_t x287 = INT16_MAX;
	uint16_t x288 = 6U;
	volatile int32_t t70 = 9918;

	t70 = (x285-(x286&(x287<=x288)));

	if (t70 != -128) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x289 = -1;
	int16_t x290 = INT16_MIN;
	uint16_t x292 = UINT16_MAX;

	t71 = (x289-(x290&(x291<=x292)));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x294 = 1118U;
	static int32_t x295 = INT32_MIN;
	volatile uint64_t x296 = 45141LLU;
	uint32_t t72 = 7431647U;

	t72 = (x293-(x294&(x295<=x296)));

	if (t72 != 2U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x297 = INT16_MIN;
	int64_t x298 = -1LL;
	static uint16_t x299 = 8U;
	int8_t x300 = -1;
	volatile int64_t t73 = 1648466614294343LL;

	t73 = (x297-(x298&(x299<=x300)));

	if (t73 != -32768LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x301 = 244828;
	uint8_t x302 = 0U;
	static volatile uint8_t x303 = UINT8_MAX;
	volatile int32_t t74 = -173;

	t74 = (x301-(x302&(x303<=x304)));

	if (t74 != 244828) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x305 = INT32_MIN;
	int8_t x306 = INT8_MIN;
	int64_t x307 = 14350713882LL;
	int8_t x308 = -1;
	volatile int32_t t75 = INT32_MIN;

	t75 = (x305-(x306&(x307<=x308)));

	if (t75 != INT32_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x309 = 975118675;
	static int64_t x310 = -50747962100255940LL;
	volatile int16_t x312 = INT16_MIN;
	int64_t t76 = 447915378590381269LL;

	t76 = (x309-(x310&(x311<=x312)));

	if (t76 != 975118675LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x313 = 2U;
	int16_t x314 = INT16_MIN;
	static volatile uint32_t x315 = 56067U;
	int16_t x316 = INT16_MIN;
	volatile int32_t t77 = 1953736;

	t77 = (x313-(x314&(x315<=x316)));

	if (t77 != 2) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x317 = INT16_MAX;
	int64_t x318 = -5LL;
	static volatile int8_t x319 = -46;
	uint64_t x320 = 3559902862293450LLU;
	int64_t t78 = 7191491LL;

	t78 = (x317-(x318&(x319<=x320)));

	if (t78 != 32767LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x321 = -1;
	volatile int32_t x323 = INT32_MIN;
	static volatile int8_t x324 = INT8_MAX;
	int32_t t79 = 71;

	t79 = (x321-(x322&(x323<=x324)));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x327 = INT64_MAX;
	uint64_t x328 = UINT64_MAX;
	int32_t t80 = -35;

	t80 = (x325-(x326&(x327<=x328)));

	if (t80 != -128) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x329 = -1601;
	uint64_t x331 = 2976967333563LLU;
	int16_t x332 = INT16_MIN;

	t81 = (x329-(x330&(x331<=x332)));

	if (t81 != -1602) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x333 = UINT32_MAX;
	int8_t x334 = 16;
	static uint32_t x335 = 99188399U;
	static uint16_t x336 = 7711U;
	uint32_t t82 = UINT32_MAX;

	t82 = (x333-(x334&(x335<=x336)));

	if (t82 != UINT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x337 = INT32_MAX;
	volatile int64_t x338 = -7LL;
	static volatile int8_t x339 = -1;
	volatile int64_t t83 = 4840535620504955LL;

	t83 = (x337-(x338&(x339<=x340)));

	if (t83 != 2147483646LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x341 = 921U;
	int32_t x342 = INT32_MIN;
	uint32_t x343 = UINT32_MAX;
	int32_t t84 = 1;

	t84 = (x341-(x342&(x343<=x344)));

	if (t84 != 921) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x345 = UINT32_MAX;
	volatile int8_t x346 = INT8_MAX;
	volatile int32_t x347 = -1;
	volatile int32_t x348 = INT32_MIN;
	uint32_t t85 = UINT32_MAX;

	t85 = (x345-(x346&(x347<=x348)));

	if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x349 = INT32_MIN;
	uint64_t x351 = 0LLU;
	int64_t x352 = INT64_MIN;
	uint32_t t86 = 480859667U;

	t86 = (x349-(x350&(x351<=x352)));

	if (t86 != 2147483647U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x353 = INT16_MIN;
	int32_t t87 = -16;

	t87 = (x353-(x354&(x355<=x356)));

	if (t87 != -32768) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x357 = -1;
	volatile int32_t x359 = -10859;
	int32_t t88 = -35841;

	t88 = (x357-(x358&(x359<=x360)));

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x361 = 464LL;
	static uint16_t x362 = 1U;
	static uint16_t x363 = UINT16_MAX;

	t89 = (x361-(x362&(x363<=x364)));

	if (t89 != 464LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x365 = INT64_MAX;
	uint16_t x366 = UINT16_MAX;
	static uint64_t x367 = 13734704386928LLU;
	volatile int16_t x368 = INT16_MAX;
	volatile int64_t t90 = INT64_MAX;

	t90 = (x365-(x366&(x367<=x368)));

	if (t90 != INT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x370 = 240569LL;
	uint64_t x371 = 1LLU;
	int64_t x372 = INT64_MIN;
	int64_t t91 = 1993756652LL;

	t91 = (x369-(x370&(x371<=x372)));

	if (t91 != 126LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x374 = 15446921U;
	int64_t x376 = INT64_MIN;
	volatile uint32_t t92 = 15357U;

	t92 = (x373-(x374&(x375<=x376)));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x377 = INT16_MAX;
	uint16_t x378 = 58U;
	volatile int32_t x379 = -1;
	static uint16_t x380 = 76U;
	volatile int32_t t93 = 0;

	t93 = (x377-(x378&(x379<=x380)));

	if (t93 != 32767) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x381 = INT64_MIN;
	volatile int32_t x382 = INT32_MAX;
	static int64_t x383 = 45LL;
	uint64_t x384 = 9LLU;

	t94 = (x381-(x382&(x383<=x384)));

	if (t94 != INT64_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x385 = 12537LL;
	static int8_t x386 = INT8_MIN;
	uint64_t x387 = 129207680715LLU;
	volatile int32_t x388 = -1;
	int64_t t95 = -6LL;

	t95 = (x385-(x386&(x387<=x388)));

	if (t95 != 12537LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x389 = 6;
	int32_t x390 = 1;
	uint64_t x391 = UINT64_MAX;
	int8_t x392 = -1;
	volatile int32_t t96 = 121138208;

	t96 = (x389-(x390&(x391<=x392)));

	if (t96 != 5) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x394 = 976951U;
	int16_t x395 = INT16_MIN;
	int64_t x396 = 8142242LL;

	t97 = (x393-(x394&(x395<=x396)));

	if (t97 != -2LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x397 = 47U;
	static uint32_t x398 = 607079082U;
	int32_t x399 = INT32_MIN;
	volatile int32_t x400 = INT32_MAX;
	uint32_t t98 = 62599890U;

	t98 = (x397-(x398&(x399<=x400)));

	if (t98 != 47U) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x401 = INT8_MAX;
	static int32_t x404 = 1212;
	volatile uint32_t t99 = 1044363187U;

	t99 = (x401-(x402&(x403<=x404)));

	if (t99 != 126U) { NG(); } else { ; }
	
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

