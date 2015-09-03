#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x1 = -2;
int8_t x4 = 47;
volatile int64_t x6 = -4914325944370482LL;
int64_t x16 = INT64_MIN;
static volatile uint16_t x17 = 193U;
int16_t x25 = INT16_MIN;
static int8_t x32 = INT8_MIN;
int16_t x34 = -1;
volatile int32_t x36 = -1;
uint8_t x41 = 63U;
uint8_t x42 = 44U;
static uint8_t x45 = UINT8_MAX;
int32_t x46 = -4;
volatile int64_t x49 = -663851646313139LL;
int64_t x53 = INT64_MIN;
int32_t t14 = -63418188;
int32_t t15 = 175624;
int8_t x67 = -1;
static uint64_t x70 = 0LLU;
uint16_t x75 = UINT16_MAX;
static int32_t t18 = 10538312;
volatile uint16_t x84 = 1U;
int32_t t20 = -5;
static int8_t x94 = -7;
int32_t t22 = -962;
int16_t x97 = INT16_MAX;
static int32_t x100 = 55039882;
int16_t x106 = INT16_MIN;
int16_t x107 = INT16_MIN;
volatile uint8_t x129 = UINT8_MAX;
uint32_t x131 = 484055834U;
volatile int64_t x136 = 4321742037LL;
static uint8_t x153 = 9U;
uint32_t x170 = 451770U;
int8_t x173 = 0;
uint8_t x179 = UINT8_MAX;
int16_t x182 = INT16_MIN;
int16_t x186 = 1;
volatile uint64_t x187 = UINT64_MAX;
uint16_t x190 = UINT16_MAX;
int64_t x193 = INT64_MAX;
int8_t x196 = INT8_MIN;
static int64_t x197 = -1LL;
int64_t x203 = -1LL;
static volatile int32_t x206 = INT32_MAX;
int8_t x208 = 31;
int32_t x209 = -4494583;
int32_t x213 = 3500;
int32_t x222 = -1;
int16_t x223 = INT16_MIN;
volatile int32_t t52 = 2464057;
uint16_t x248 = 11U;
static int16_t x250 = INT16_MIN;
static int8_t x253 = -1;
static volatile int32_t t56 = -848319201;
uint64_t x268 = UINT64_MAX;
uint64_t x273 = 24528LLU;
volatile uint8_t x278 = 3U;
int32_t x279 = INT32_MIN;
static volatile uint16_t x280 = 1513U;
volatile int32_t t59 = 459087885;
uint16_t x282 = 412U;
volatile int8_t x299 = 1;
int32_t x307 = -1;
uint32_t x313 = 4972420U;
int16_t x316 = INT16_MIN;
int32_t x317 = INT32_MIN;
int8_t x323 = 8;
static volatile uint32_t x334 = 18588U;
static int64_t x339 = 4153214716LL;
int64_t x348 = INT64_MAX;
volatile int32_t t73 = 24237212;
static volatile int32_t t74 = -261120701;
int32_t x354 = INT32_MIN;
uint16_t x359 = UINT16_MAX;
volatile int32_t t76 = 8171;
static volatile int32_t t77 = -7069014;
int16_t x366 = INT16_MIN;
static int16_t x367 = INT16_MIN;
int32_t t80 = -18257658;
uint16_t x380 = 2U;
volatile int32_t x395 = 311814;
uint64_t x399 = UINT64_MAX;
volatile uint8_t x400 = 30U;
volatile int32_t t86 = -1961063;
volatile int32_t t89 = 88419;
int16_t x423 = INT16_MAX;
uint64_t x425 = 782057LLU;
static int8_t x430 = -57;
int8_t x434 = INT8_MIN;
int8_t x444 = INT8_MIN;
static uint64_t x445 = UINT64_MAX;
static int32_t t97 = 64554;
static volatile int32_t t98 = 3610115;


void f0(void) {
	uint8_t x2 = 3U;
	volatile int8_t x3 = -15;
	volatile int32_t t0 = 2304188;

	t0 = (x1<(x2+(x3^x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 3956LLU;
	int64_t x7 = -395751724387LL;
	volatile int32_t x8 = INT32_MAX;
	static int32_t t1 = -2;

	t1 = (x5<(x6+(x7^x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = INT8_MAX;
	uint16_t x10 = UINT16_MAX;
	int32_t x11 = -1;
	uint32_t x12 = UINT32_MAX;
	int32_t t2 = -828448848;

	t2 = (x9<(x10+(x11^x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = UINT8_MAX;
	volatile uint8_t x14 = UINT8_MAX;
	static int8_t x15 = 8;
	volatile int32_t t3 = 2;

	t3 = (x13<(x14+(x15^x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x18 = UINT16_MAX;
	int8_t x19 = 1;
	uint8_t x20 = 47U;
	static volatile int32_t t4 = -949533115;

	t4 = (x17<(x18+(x19^x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = INT16_MAX;
	uint32_t x22 = UINT32_MAX;
	static int8_t x23 = -16;
	uint32_t x24 = UINT32_MAX;
	volatile int32_t t5 = -5217;

	t5 = (x21<(x22+(x23^x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x26 = INT32_MIN;
	static volatile int8_t x27 = INT8_MIN;
	int16_t x28 = INT16_MIN;
	volatile int32_t t6 = 554;

	t6 = (x25<(x26+(x27^x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 1572827490U;
	uint64_t x30 = 907131637LLU;
	int32_t x31 = -1;
	int32_t t7 = -150291;

	t7 = (x29<(x30+(x31^x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	int32_t x35 = INT32_MIN;
	volatile int32_t t8 = -643;

	t8 = (x33<(x34+(x35^x36)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 1563678511LLU;
	int16_t x38 = INT16_MIN;
	uint64_t x39 = UINT64_MAX;
	int8_t x40 = INT8_MIN;
	volatile int32_t t9 = -8205536;

	t9 = (x37<(x38+(x39^x40)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x43 = INT64_MIN;
	int64_t x44 = INT64_MIN;
	volatile int32_t t10 = -213;

	t10 = (x41<(x42+(x43^x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x47 = INT16_MIN;
	int64_t x48 = INT64_MIN;
	int32_t t11 = -126935095;

	t11 = (x45<(x46+(x47^x48)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x50 = -13;
	volatile int8_t x51 = -1;
	uint64_t x52 = 5235230736142576LLU;
	volatile int32_t t12 = -114326587;

	t12 = (x49<(x50+(x51^x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x54 = -1;
	volatile uint8_t x55 = UINT8_MAX;
	int64_t x56 = -1LL;
	int32_t t13 = -334853;

	t13 = (x53<(x54+(x55^x56)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x57 = INT16_MIN;
	static uint64_t x58 = 3293264LLU;
	int64_t x59 = -1LL;
	static uint16_t x60 = UINT16_MAX;

	t14 = (x57<(x58+(x59^x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = 2193U;
	volatile uint8_t x62 = 82U;
	volatile uint32_t x63 = 505411060U;
	int16_t x64 = 1;

	t15 = (x61<(x62+(x63^x64)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MIN;
	static int32_t x66 = -53;
	static int32_t x68 = -1;
	volatile int32_t t16 = 10288045;

	t16 = (x65<(x66+(x67^x68)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x69 = 41LL;
	static int16_t x71 = -1;
	int16_t x72 = INT16_MIN;
	volatile int32_t t17 = 1;

	t17 = (x69<(x70+(x71^x72)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x73 = UINT8_MAX;
	static uint16_t x74 = 28685U;
	int8_t x76 = INT8_MAX;

	t18 = (x73<(x74+(x75^x76)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MIN;
	int8_t x78 = INT8_MIN;
	uint16_t x79 = UINT16_MAX;
	volatile uint32_t x80 = UINT32_MAX;
	static volatile int32_t t19 = -1;

	t19 = (x77<(x78+(x79^x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x81 = 29U;
	int16_t x82 = INT16_MIN;
	static uint8_t x83 = 28U;

	t20 = (x81<(x82+(x83^x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = 21U;
	static uint32_t x86 = UINT32_MAX;
	int8_t x87 = INT8_MIN;
	static int16_t x88 = 4262;
	static volatile int32_t t21 = 12012;

	t21 = (x85<(x86+(x87^x88)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = INT8_MIN;
	static volatile int8_t x95 = INT8_MIN;
	static volatile uint64_t x96 = 994429100570958LLU;

	t22 = (x93<(x94+(x95^x96)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x98 = 110U;
	int16_t x99 = INT16_MIN;
	volatile int32_t t23 = -32523;

	t23 = (x97<(x98+(x99^x100)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x105 = 51U;
	volatile int32_t x108 = 4242;
	int32_t t24 = -20965;

	t24 = (x105<(x106+(x107^x108)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x109 = -1;
	int8_t x110 = 0;
	uint16_t x111 = UINT16_MAX;
	uint8_t x112 = 13U;
	int32_t t25 = 91893676;

	t25 = (x109<(x110+(x111^x112)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x113 = 33;
	int64_t x114 = 1783198LL;
	int32_t x115 = -1;
	int64_t x116 = -1LL;
	int32_t t26 = -745027224;

	t26 = (x113<(x114+(x115^x116)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x121 = -1;
	uint64_t x122 = UINT64_MAX;
	volatile int32_t x123 = INT32_MAX;
	int16_t x124 = INT16_MIN;
	volatile int32_t t27 = -1471567;

	t27 = (x121<(x122+(x123^x124)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x125 = -1;
	int64_t x126 = -1LL;
	int16_t x127 = -1;
	int16_t x128 = INT16_MIN;
	volatile int32_t t28 = -390;

	t28 = (x125<(x126+(x127^x128)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int64_t x130 = INT64_MIN;
	int32_t x132 = -314362696;
	volatile int32_t t29 = -7;

	t29 = (x129<(x130+(x131^x132)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x133 = INT32_MAX;
	volatile uint64_t x134 = 65396LLU;
	int16_t x135 = INT16_MIN;
	int32_t t30 = -14220256;

	t30 = (x133<(x134+(x135^x136)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x137 = INT32_MIN;
	uint16_t x138 = UINT16_MAX;
	int16_t x139 = -25;
	int32_t x140 = -1;
	volatile int32_t t31 = -1;

	t31 = (x137<(x138+(x139^x140)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x141 = 6954474143LL;
	uint16_t x142 = UINT16_MAX;
	int8_t x143 = -13;
	volatile int16_t x144 = INT16_MIN;
	volatile int32_t t32 = -5904;

	t32 = (x141<(x142+(x143^x144)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x145 = 6571376671378LL;
	uint32_t x146 = UINT32_MAX;
	int32_t x147 = -13102327;
	int64_t x148 = -1LL;
	int32_t t33 = -2;

	t33 = (x145<(x146+(x147^x148)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x154 = UINT64_MAX;
	uint32_t x155 = 0U;
	volatile int16_t x156 = -1;
	volatile int32_t t34 = -5995790;

	t34 = (x153<(x154+(x155^x156)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x165 = UINT64_MAX;
	uint32_t x166 = 0U;
	int16_t x167 = -1;
	uint16_t x168 = 41U;
	volatile int32_t t35 = 84189;

	t35 = (x165<(x166+(x167^x168)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x169 = INT64_MIN;
	uint16_t x171 = 4757U;
	int32_t x172 = -1;
	volatile int32_t t36 = -172296;

	t36 = (x169<(x170+(x171^x172)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x174 = -1;
	int8_t x175 = INT8_MIN;
	int32_t x176 = -633;
	volatile int32_t t37 = 0;

	t37 = (x173<(x174+(x175^x176)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x177 = INT8_MIN;
	static int16_t x178 = INT16_MAX;
	volatile int64_t x180 = -1LL;
	static volatile int32_t t38 = 796118701;

	t38 = (x177<(x178+(x179^x180)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint16_t x181 = UINT16_MAX;
	int64_t x183 = -3663662412427LL;
	int32_t x184 = INT32_MIN;
	int32_t t39 = 1491969;

	t39 = (x181<(x182+(x183^x184)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x185 = 0U;
	static int64_t x188 = INT64_MIN;
	static int32_t t40 = 73;

	t40 = (x185<(x186+(x187^x188)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x189 = 1759946;
	static int8_t x191 = INT8_MIN;
	static volatile int8_t x192 = INT8_MIN;
	volatile int32_t t41 = 8825280;

	t41 = (x189<(x190+(x191^x192)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x194 = -1;
	int8_t x195 = -1;
	static int32_t t42 = -8094394;

	t42 = (x193<(x194+(x195^x196)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x198 = -1;
	int8_t x199 = INT8_MIN;
	int16_t x200 = -9;
	int32_t t43 = -282289;

	t43 = (x197<(x198+(x199^x200)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x201 = -195707600477565607LL;
	int32_t x202 = INT32_MIN;
	static int16_t x204 = INT16_MIN;
	volatile int32_t t44 = -37;

	t44 = (x201<(x202+(x203^x204)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x205 = 187411;
	int32_t x207 = -344;
	static int32_t t45 = -15383025;

	t45 = (x205<(x206+(x207^x208)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x210 = -1;
	int8_t x211 = INT8_MIN;
	int64_t x212 = -1LL;
	volatile int32_t t46 = -1;

	t46 = (x209<(x210+(x211^x212)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x214 = INT64_MIN;
	int8_t x215 = 63;
	uint16_t x216 = UINT16_MAX;
	volatile int32_t t47 = 22975;

	t47 = (x213<(x214+(x215^x216)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x217 = INT16_MIN;
	int16_t x218 = INT16_MIN;
	uint32_t x219 = UINT32_MAX;
	int32_t x220 = INT32_MIN;
	static volatile int32_t t48 = -2;

	t48 = (x217<(x218+(x219^x220)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x221 = UINT8_MAX;
	static uint32_t x224 = 2086U;
	int32_t t49 = -977886574;

	t49 = (x221<(x222+(x223^x224)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x225 = -1;
	static volatile int64_t x226 = -1LL;
	static int8_t x227 = -1;
	static volatile int8_t x228 = INT8_MAX;
	int32_t t50 = 140;

	t50 = (x225<(x226+(x227^x228)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x229 = UINT8_MAX;
	uint16_t x230 = 938U;
	volatile int32_t x231 = -87996;
	uint8_t x232 = 92U;
	static volatile int32_t t51 = 1267476;

	t51 = (x229<(x230+(x231^x232)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x237 = 10;
	uint64_t x238 = 96752LLU;
	int8_t x239 = INT8_MAX;
	uint8_t x240 = 0U;

	t52 = (x237<(x238+(x239^x240)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x245 = 14;
	int16_t x246 = INT16_MIN;
	volatile uint8_t x247 = 22U;
	int32_t t53 = -2632387;

	t53 = (x245<(x246+(x247^x248)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x249 = 81LLU;
	uint32_t x251 = 4U;
	int64_t x252 = 100932781707LL;
	volatile int32_t t54 = 4;

	t54 = (x249<(x250+(x251^x252)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x254 = -1;
	int64_t x255 = -1LL;
	uint16_t x256 = UINT16_MAX;
	static int32_t t55 = -154235775;

	t55 = (x253<(x254+(x255^x256)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x257 = UINT16_MAX;
	static int8_t x258 = 15;
	volatile int16_t x259 = 0;
	uint16_t x260 = 4U;

	t56 = (x257<(x258+(x259^x260)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x265 = 0U;
	int32_t x266 = -53592;
	int8_t x267 = 0;
	int32_t t57 = -1;

	t57 = (x265<(x266+(x267^x268)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x274 = UINT8_MAX;
	int8_t x275 = -1;
	uint8_t x276 = 3U;
	volatile int32_t t58 = -30011181;

	t58 = (x273<(x274+(x275^x276)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint64_t x277 = 5527516070870726589LLU;

	t59 = (x277<(x278+(x279^x280)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x281 = 3248850LLU;
	int16_t x283 = -186;
	int64_t x284 = -208229740LL;
	int32_t t60 = 8;

	t60 = (x281<(x282+(x283^x284)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x285 = INT8_MAX;
	volatile int64_t x286 = INT64_MIN;
	volatile int16_t x287 = INT16_MAX;
	uint64_t x288 = UINT64_MAX;
	static int32_t t61 = 21;

	t61 = (x285<(x286+(x287^x288)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x289 = -13989214LL;
	int32_t x290 = INT32_MAX;
	uint32_t x291 = 85U;
	uint16_t x292 = 7U;
	static int32_t t62 = 63;

	t62 = (x289<(x290+(x291^x292)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x293 = INT32_MAX;
	int64_t x294 = INT64_MIN;
	uint32_t x295 = UINT32_MAX;
	int8_t x296 = INT8_MIN;
	volatile int32_t t63 = -58178774;

	t63 = (x293<(x294+(x295^x296)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x297 = INT16_MAX;
	static int16_t x298 = -1;
	uint64_t x300 = 31261237004LLU;
	volatile int32_t t64 = -3;

	t64 = (x297<(x298+(x299^x300)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x301 = -1;
	int32_t x302 = 3;
	int32_t x303 = INT32_MAX;
	static int16_t x304 = -1;
	volatile int32_t t65 = 31;

	t65 = (x301<(x302+(x303^x304)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x305 = 51266429571LLU;
	static uint8_t x306 = 115U;
	uint8_t x308 = 10U;
	int32_t t66 = -448419357;

	t66 = (x305<(x306+(x307^x308)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x314 = INT32_MIN;
	uint64_t x315 = UINT64_MAX;
	int32_t t67 = -30;

	t67 = (x313<(x314+(x315^x316)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x318 = -1;
	volatile uint8_t x319 = 5U;
	int32_t x320 = 182998217;
	static volatile int32_t t68 = -536456241;

	t68 = (x317<(x318+(x319^x320)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x321 = 114676160856540990LLU;
	int32_t x322 = -113947;
	uint64_t x324 = 1710260143630128256LLU;
	static volatile int32_t t69 = 234;

	t69 = (x321<(x322+(x323^x324)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x325 = -1;
	static volatile int32_t x326 = -1;
	static uint64_t x327 = 1075404243883LLU;
	int16_t x328 = 77;
	volatile int32_t t70 = 7;

	t70 = (x325<(x326+(x327^x328)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x333 = UINT8_MAX;
	static volatile int8_t x335 = INT8_MIN;
	static int32_t x336 = INT32_MIN;
	int32_t t71 = -585068826;

	t71 = (x333<(x334+(x335^x336)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x337 = INT32_MIN;
	static uint16_t x338 = UINT16_MAX;
	int8_t x340 = INT8_MAX;
	int32_t t72 = -940161;

	t72 = (x337<(x338+(x339^x340)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x345 = UINT8_MAX;
	static volatile uint64_t x346 = 2114376711LLU;
	int16_t x347 = INT16_MIN;

	t73 = (x345<(x346+(x347^x348)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x349 = -1;
	int32_t x350 = 1174;
	int32_t x351 = -1;
	uint64_t x352 = UINT64_MAX;

	t74 = (x349<(x350+(x351^x352)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x353 = 4U;
	int8_t x355 = INT8_MIN;
	int16_t x356 = INT16_MIN;
	int32_t t75 = -743287366;

	t75 = (x353<(x354+(x355^x356)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x357 = 46U;
	static int64_t x358 = INT64_MAX;
	static int8_t x360 = -1;

	t76 = (x357<(x358+(x359^x360)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x361 = 27085463;
	static volatile uint64_t x362 = UINT64_MAX;
	int16_t x363 = -2503;
	volatile int32_t x364 = -1;

	t77 = (x361<(x362+(x363^x364)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x365 = INT32_MIN;
	int32_t x368 = INT32_MIN;
	volatile int32_t t78 = -7258;

	t78 = (x365<(x366+(x367^x368)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x369 = 0U;
	int16_t x370 = INT16_MIN;
	static int16_t x371 = INT16_MAX;
	volatile uint8_t x372 = 1U;
	static volatile int32_t t79 = 1120327;

	t79 = (x369<(x370+(x371^x372)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x373 = INT32_MAX;
	int16_t x374 = -1;
	static int16_t x375 = INT16_MIN;
	static int8_t x376 = 50;

	t80 = (x373<(x374+(x375^x376)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x377 = INT32_MIN;
	uint8_t x378 = 49U;
	int16_t x379 = -1;
	static int32_t t81 = -118;

	t81 = (x377<(x378+(x379^x380)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x381 = -3;
	volatile uint16_t x382 = UINT16_MAX;
	static volatile int32_t x383 = -1;
	uint32_t x384 = UINT32_MAX;
	int32_t t82 = -1;

	t82 = (x381<(x382+(x383^x384)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x385 = UINT32_MAX;
	volatile int16_t x386 = INT16_MAX;
	int16_t x387 = 12823;
	int16_t x388 = -1;
	int32_t t83 = 61229;

	t83 = (x385<(x386+(x387^x388)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x389 = 1337;
	volatile uint32_t x390 = 415481469U;
	int8_t x391 = -1;
	volatile int32_t x392 = 75171;
	int32_t t84 = 259;

	t84 = (x389<(x390+(x391^x392)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x393 = INT16_MIN;
	volatile int8_t x394 = INT8_MIN;
	int64_t x396 = -12343265436LL;
	int32_t t85 = 1643425;

	t85 = (x393<(x394+(x395^x396)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int16_t x397 = INT16_MIN;
	int8_t x398 = -1;

	t86 = (x397<(x398+(x399^x400)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x401 = 18668388831725254LLU;
	uint32_t x402 = 2143866104U;
	int16_t x403 = INT16_MAX;
	static uint32_t x404 = 25887847U;
	volatile int32_t t87 = 699157333;

	t87 = (x401<(x402+(x403^x404)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x405 = 910;
	int32_t x406 = -1;
	int64_t x407 = INT64_MAX;
	uint64_t x408 = UINT64_MAX;
	int32_t t88 = 224554905;

	t88 = (x405<(x406+(x407^x408)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint16_t x409 = 15U;
	static int32_t x410 = -1;
	uint16_t x411 = 7493U;
	uint16_t x412 = 1848U;

	t89 = (x409<(x410+(x411^x412)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x413 = 1961979394LLU;
	static int64_t x414 = 45295519839818954LL;
	volatile int64_t x415 = 245049565935273018LL;
	int64_t x416 = -1LL;
	volatile int32_t t90 = -162;

	t90 = (x413<(x414+(x415^x416)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x421 = -1;
	uint8_t x422 = UINT8_MAX;
	int16_t x424 = -1;
	int32_t t91 = 573;

	t91 = (x421<(x422+(x423^x424)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x426 = 431289U;
	static int32_t x427 = INT32_MIN;
	int32_t x428 = INT32_MIN;
	int32_t t92 = -1;

	t92 = (x425<(x426+(x427^x428)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x429 = 7;
	static volatile int64_t x431 = -1LL;
	static int64_t x432 = INT64_MIN;
	volatile int32_t t93 = -3528503;

	t93 = (x429<(x430+(x431^x432)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x433 = INT64_MAX;
	int32_t x435 = INT32_MIN;
	uint64_t x436 = UINT64_MAX;
	int32_t t94 = 2;

	t94 = (x433<(x434+(x435^x436)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x437 = 53353643U;
	volatile int16_t x438 = -378;
	static int16_t x439 = INT16_MIN;
	int64_t x440 = -1LL;
	int32_t t95 = 2000902;

	t95 = (x437<(x438+(x439^x440)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x441 = INT64_MAX;
	volatile int64_t x442 = -1LL;
	int16_t x443 = INT16_MIN;
	static int32_t t96 = 11807;

	t96 = (x441<(x442+(x443^x444)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x446 = INT32_MIN;
	int16_t x447 = -1;
	int8_t x448 = -54;

	t97 = (x445<(x446+(x447^x448)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x449 = 10U;
	int64_t x450 = INT64_MIN;
	int8_t x451 = -26;
	int16_t x452 = INT16_MIN;

	t98 = (x449<(x450+(x451^x452)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x453 = INT8_MIN;
	int8_t x454 = INT8_MIN;
	volatile int8_t x455 = -1;
	int64_t x456 = INT64_MIN;
	int32_t t99 = -118426;

	t99 = (x453<(x454+(x455^x456)));

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

