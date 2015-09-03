#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x3 = INT8_MIN;
static int8_t x4 = INT8_MIN;
int8_t x5 = -5;
static volatile int16_t x16 = -1;
int8_t x22 = 2;
int32_t x25 = INT32_MIN;
volatile int64_t x32 = INT64_MIN;
int16_t x33 = -558;
static int32_t t8 = 75530;
int64_t x38 = -70867647599128973LL;
volatile int32_t t9 = -1064344966;
int16_t x41 = INT16_MAX;
uint64_t x42 = 5547998339LLU;
int32_t t10 = 97960;
volatile uint8_t x46 = 3U;
int16_t x49 = -1;
volatile uint32_t x54 = 5765943U;
uint64_t x62 = 25496285655LLU;
uint32_t x70 = 12348783U;
static uint16_t x88 = 4U;
uint32_t x92 = 26171902U;
int32_t t22 = 0;
int16_t x95 = -10;
volatile uint64_t x96 = UINT64_MAX;
int64_t x102 = -1LL;
static int8_t x107 = -1;
uint64_t x110 = UINT64_MAX;
uint32_t x115 = 1954U;
volatile uint32_t x126 = 7394U;
uint16_t x137 = 50U;
uint64_t x142 = UINT64_MAX;
static uint32_t x150 = 35335U;
static int64_t x156 = 448773536LL;
uint32_t x158 = 3U;
volatile int16_t x162 = 1;
static int32_t x164 = -15;
volatile int16_t x177 = INT16_MIN;
static uint32_t x178 = 202U;
uint32_t x180 = 306812704U;
int32_t t44 = 46425740;
uint8_t x182 = 0U;
static uint8_t x183 = 1U;
static volatile int32_t t45 = 0;
int32_t x188 = INT32_MIN;
static uint32_t x191 = 90U;
volatile int32_t t47 = 25;
int8_t x198 = -1;
uint64_t x203 = UINT64_MAX;
volatile int32_t t51 = 40;
volatile uint64_t x215 = UINT64_MAX;
volatile int32_t t55 = -26672506;
int8_t x225 = 34;
volatile uint32_t x228 = 1374024U;
int16_t x235 = -13;
volatile uint16_t x237 = 22U;
uint64_t x239 = 519252796LLU;
static int8_t x243 = -1;
uint8_t x244 = 2U;
int32_t t61 = 43335;
volatile int64_t x253 = INT64_MIN;
int8_t x254 = 0;
int64_t x256 = INT64_MAX;
volatile int32_t t63 = -9483;
int16_t x257 = -103;
volatile int32_t x260 = INT32_MIN;
static int32_t x263 = -1;
int16_t x269 = INT16_MAX;
int32_t t67 = -18035770;
int32_t t68 = 15219847;
uint64_t x283 = 1015639878429374261LLU;
int8_t x285 = INT8_MIN;
int8_t x288 = -39;
uint64_t x290 = UINT64_MAX;
static int32_t x291 = INT32_MIN;
volatile int64_t x293 = -1LL;
volatile int64_t x295 = -150435LL;
volatile int32_t t73 = -5;
int64_t x298 = -1LL;
uint16_t x299 = 86U;
int32_t x301 = INT32_MAX;
int8_t x303 = INT8_MIN;
volatile int64_t x309 = -80943LL;
uint8_t x310 = 15U;
int32_t t77 = 5;
int8_t x315 = -2;
int32_t t85 = -376105860;
static int8_t x347 = INT8_MAX;
int16_t x350 = -1;
int8_t x353 = INT8_MIN;
int16_t x355 = -1;
int64_t x356 = -1038983239265LL;
int64_t x357 = 350LL;
static volatile int32_t x364 = INT32_MIN;
static int32_t x365 = -86489791;
volatile int16_t x368 = INT16_MIN;
static int16_t x369 = INT16_MIN;
int8_t x371 = -1;
volatile uint8_t x372 = 116U;
static volatile int8_t x375 = INT8_MAX;
uint16_t x381 = 48U;
static uint32_t x382 = 7384U;
volatile uint16_t x389 = 7873U;
static volatile int32_t t98 = 777;


void f0(void) {
	static uint8_t x1 = UINT8_MAX;
	int32_t x2 = INT32_MIN;
	volatile int32_t t0 = 44;

	t0 = (x1<(x2&(x3|x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x6 = UINT32_MAX;
	int64_t x7 = INT64_MIN;
	int32_t x8 = INT32_MIN;
	volatile int32_t t1 = 131;

	t1 = (x5<(x6&(x7|x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 1U;
	uint64_t x10 = 113325443LLU;
	uint8_t x11 = UINT8_MAX;
	int32_t x12 = INT32_MIN;
	volatile int32_t t2 = -873938;

	t2 = (x9<(x10&(x11|x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	int8_t x14 = -1;
	int16_t x15 = -1;
	static int32_t t3 = -6;

	t3 = (x13<(x14&(x15|x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	int16_t x18 = INT16_MIN;
	int32_t x19 = -1;
	volatile int64_t x20 = -1LL;
	int32_t t4 = 784632;

	t4 = (x17<(x18&(x19|x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = INT16_MAX;
	static volatile int64_t x23 = -1LL;
	volatile int16_t x24 = -1;
	volatile int32_t t5 = -474018910;

	t5 = (x21<(x22&(x23|x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x26 = UINT64_MAX;
	int64_t x27 = -1LL;
	int32_t x28 = INT32_MIN;
	volatile int32_t t6 = 428099934;

	t6 = (x25<(x26&(x27|x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	volatile uint64_t x30 = 394614728LLU;
	int8_t x31 = INT8_MAX;
	volatile int32_t t7 = 1;

	t7 = (x29<(x30&(x31|x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x34 = 4113115668856286886LLU;
	static int32_t x35 = -109204798;
	int32_t x36 = INT32_MAX;

	t8 = (x33<(x34&(x35|x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 39U;
	volatile int64_t x39 = -1LL;
	static uint32_t x40 = UINT32_MAX;

	t9 = (x37<(x38&(x39|x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x43 = 248770440205538LL;
	static int32_t x44 = -1;

	t10 = (x41<(x42&(x43|x44)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -1810595;
	int16_t x47 = INT16_MIN;
	uint8_t x48 = 27U;
	volatile int32_t t11 = 27868;

	t11 = (x45<(x46&(x47|x48)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x50 = INT64_MIN;
	uint64_t x51 = UINT64_MAX;
	static uint32_t x52 = 14656634U;
	static int32_t t12 = 13;

	t12 = (x49<(x50&(x51|x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x53 = -1;
	int16_t x55 = INT16_MAX;
	volatile int64_t x56 = INT64_MIN;
	static volatile int32_t t13 = -118612424;

	t13 = (x53<(x54&(x55|x56)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = -1;
	static int64_t x58 = -1LL;
	int32_t x59 = INT32_MAX;
	int8_t x60 = INT8_MAX;
	int32_t t14 = 15478;

	t14 = (x57<(x58&(x59|x60)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -1;
	volatile int8_t x63 = 0;
	volatile int64_t x64 = -939327073638501LL;
	volatile int32_t t15 = 47855;

	t15 = (x61<(x62&(x63|x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = 0;
	int16_t x66 = INT16_MIN;
	static int32_t x67 = INT32_MIN;
	int64_t x68 = 138343699792560LL;
	int32_t t16 = 54147;

	t16 = (x65<(x66&(x67|x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = 685844499002LLU;
	static int8_t x71 = INT8_MAX;
	volatile int64_t x72 = -1LL;
	static volatile int32_t t17 = -1175;

	t17 = (x69<(x70&(x71|x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x73 = 5U;
	volatile int64_t x74 = INT64_MAX;
	int8_t x75 = INT8_MIN;
	uint8_t x76 = 74U;
	int32_t t18 = 53827965;

	t18 = (x73<(x74&(x75|x76)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x77 = -1LL;
	static volatile int64_t x78 = -13LL;
	int16_t x79 = INT16_MIN;
	uint8_t x80 = 1U;
	volatile int32_t t19 = -9;

	t19 = (x77<(x78&(x79|x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MIN;
	int16_t x82 = -1595;
	volatile uint8_t x83 = UINT8_MAX;
	uint32_t x84 = UINT32_MAX;
	volatile int32_t t20 = -1860832;

	t20 = (x81<(x82&(x83|x84)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = -126709986579LL;
	int16_t x86 = INT16_MAX;
	int32_t x87 = 1;
	volatile int32_t t21 = -17852717;

	t21 = (x85<(x86&(x87|x88)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = -1;
	int8_t x90 = -7;
	static uint32_t x91 = 13U;

	t22 = (x89<(x90&(x91|x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x93 = INT32_MAX;
	volatile int32_t x94 = -179;
	volatile int32_t t23 = 1982729;

	t23 = (x93<(x94&(x95|x96)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = -2;
	int32_t x98 = INT32_MIN;
	int8_t x99 = -1;
	int8_t x100 = INT8_MAX;
	int32_t t24 = -422810237;

	t24 = (x97<(x98&(x99|x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x101 = 113LLU;
	static uint64_t x103 = UINT64_MAX;
	int16_t x104 = -1;
	static int32_t t25 = 74;

	t25 = (x101<(x102&(x103|x104)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x105 = -1;
	static uint64_t x106 = 36785776925769516LLU;
	static int16_t x108 = -1;
	int32_t t26 = -3192634;

	t26 = (x105<(x106&(x107|x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x109 = 13506500U;
	uint8_t x111 = UINT8_MAX;
	int32_t x112 = -13;
	volatile int32_t t27 = 234267;

	t27 = (x109<(x110&(x111|x112)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint32_t x113 = UINT32_MAX;
	volatile uint64_t x114 = 849187274521370153LLU;
	static uint32_t x116 = 1918350672U;
	static int32_t t28 = -28349433;

	t28 = (x113<(x114&(x115|x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x117 = 1036895;
	int8_t x118 = INT8_MIN;
	volatile int16_t x119 = -213;
	volatile int8_t x120 = 39;
	int32_t t29 = 1;

	t29 = (x117<(x118&(x119|x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x121 = UINT32_MAX;
	static int64_t x122 = INT64_MAX;
	volatile int16_t x123 = -1;
	int32_t x124 = 476;
	volatile int32_t t30 = 1131001;

	t30 = (x121<(x122&(x123|x124)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MIN;
	static int32_t x127 = -1;
	uint16_t x128 = UINT16_MAX;
	int32_t t31 = 16794786;

	t31 = (x125<(x126&(x127|x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MIN;
	volatile uint16_t x130 = UINT16_MAX;
	uint32_t x131 = 844231568U;
	uint16_t x132 = 0U;
	volatile int32_t t32 = -29093;

	t32 = (x129<(x130&(x131|x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MAX;
	int8_t x134 = INT8_MAX;
	static int64_t x135 = INT64_MAX;
	volatile int8_t x136 = -2;
	int32_t t33 = -41832;

	t33 = (x133<(x134&(x135|x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x138 = 0U;
	int32_t x139 = -1;
	int64_t x140 = -1398942256079991LL;
	volatile int32_t t34 = -62109;

	t34 = (x137<(x138&(x139|x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x141 = 122359;
	volatile int32_t x143 = INT32_MIN;
	int64_t x144 = INT64_MIN;
	static volatile int32_t t35 = 12270;

	t35 = (x141<(x142&(x143|x144)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int32_t x145 = INT32_MIN;
	static int16_t x146 = -1;
	static int64_t x147 = INT64_MIN;
	volatile int16_t x148 = -1;
	volatile int32_t t36 = -4817967;

	t36 = (x145<(x146&(x147|x148)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = UINT16_MAX;
	int8_t x151 = INT8_MIN;
	static int16_t x152 = INT16_MIN;
	int32_t t37 = 6038312;

	t37 = (x149<(x150&(x151|x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x153 = 4993;
	int8_t x154 = -7;
	int32_t x155 = -452677617;
	volatile int32_t t38 = 0;

	t38 = (x153<(x154&(x155|x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = 50;
	int64_t x159 = INT64_MAX;
	uint16_t x160 = 6U;
	static int32_t t39 = 6782918;

	t39 = (x157<(x158&(x159|x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = -43;
	uint32_t x163 = 1U;
	volatile int32_t t40 = -51227;

	t40 = (x161<(x162&(x163|x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x165 = INT64_MIN;
	int32_t x166 = INT32_MAX;
	volatile int16_t x167 = -127;
	uint32_t x168 = UINT32_MAX;
	int32_t t41 = -103783;

	t41 = (x165<(x166&(x167|x168)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = 23LLU;
	static int16_t x170 = INT16_MIN;
	volatile int8_t x171 = INT8_MIN;
	int8_t x172 = -1;
	volatile int32_t t42 = 6819;

	t42 = (x169<(x170&(x171|x172)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x173 = 50548LLU;
	int32_t x174 = 109;
	int8_t x175 = -4;
	uint32_t x176 = UINT32_MAX;
	int32_t t43 = 872;

	t43 = (x173<(x174&(x175|x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x179 = 0U;

	t44 = (x177<(x178&(x179|x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x181 = -9;
	int64_t x184 = -8716078038736923LL;

	t45 = (x181<(x182&(x183|x184)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x185 = -1;
	volatile int8_t x186 = 3;
	int16_t x187 = -1;
	volatile int32_t t46 = -28626;

	t46 = (x185<(x186&(x187|x188)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x189 = -1;
	volatile int32_t x190 = INT32_MIN;
	static uint32_t x192 = UINT32_MAX;

	t47 = (x189<(x190&(x191|x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MIN;
	uint32_t x194 = UINT32_MAX;
	volatile int8_t x195 = 1;
	uint16_t x196 = UINT16_MAX;
	volatile int32_t t48 = 122200469;

	t48 = (x193<(x194&(x195|x196)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MAX;
	int64_t x199 = INT64_MAX;
	int8_t x200 = 56;
	volatile int32_t t49 = -1271;

	t49 = (x197<(x198&(x199|x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x201 = 25U;
	static int32_t x202 = 119;
	volatile int8_t x204 = -1;
	volatile int32_t t50 = 131476018;

	t50 = (x201<(x202&(x203|x204)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint64_t x205 = 118222860789866LLU;
	volatile int8_t x206 = INT8_MAX;
	int32_t x207 = INT32_MIN;
	int16_t x208 = INT16_MIN;

	t51 = (x205<(x206&(x207|x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x209 = UINT32_MAX;
	int16_t x210 = -1;
	volatile int16_t x211 = 14737;
	int8_t x212 = -1;
	volatile int32_t t52 = 891;

	t52 = (x209<(x210&(x211|x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = INT64_MAX;
	uint32_t x214 = UINT32_MAX;
	static int64_t x216 = -23200808938LL;
	int32_t t53 = -4;

	t53 = (x213<(x214&(x215|x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = -1;
	uint8_t x218 = 5U;
	int32_t x219 = INT32_MIN;
	uint16_t x220 = 527U;
	int32_t t54 = 2331111;

	t54 = (x217<(x218&(x219|x220)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x221 = -211064072;
	int16_t x222 = -1;
	volatile int32_t x223 = 1804;
	uint32_t x224 = UINT32_MAX;

	t55 = (x221<(x222&(x223|x224)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x226 = -171853957;
	uint8_t x227 = UINT8_MAX;
	volatile int32_t t56 = 1;

	t56 = (x225<(x226&(x227|x228)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x229 = INT32_MIN;
	static volatile int8_t x230 = INT8_MIN;
	int32_t x231 = INT32_MAX;
	uint32_t x232 = UINT32_MAX;
	int32_t t57 = -30;

	t57 = (x229<(x230&(x231|x232)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x233 = 29U;
	volatile int32_t x234 = INT32_MAX;
	int16_t x236 = INT16_MIN;
	static int32_t t58 = 9;

	t58 = (x233<(x234&(x235|x236)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x238 = INT64_MAX;
	int32_t x240 = INT32_MIN;
	int32_t t59 = -1;

	t59 = (x237<(x238&(x239|x240)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x241 = -1LL;
	static uint8_t x242 = 37U;
	int32_t t60 = 0;

	t60 = (x241<(x242&(x243|x244)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x245 = 7U;
	static uint64_t x246 = 26098335955183LLU;
	volatile uint64_t x247 = UINT64_MAX;
	uint64_t x248 = UINT64_MAX;

	t61 = (x245<(x246&(x247|x248)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = -6655;
	int16_t x250 = 1;
	static uint64_t x251 = 42670LLU;
	static int32_t x252 = -1;
	int32_t t62 = -18452757;

	t62 = (x249<(x250&(x251|x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x255 = 57866060764LL;

	t63 = (x253<(x254&(x255|x256)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x258 = INT8_MIN;
	int16_t x259 = INT16_MIN;
	int32_t t64 = 30;

	t64 = (x257<(x258&(x259|x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x261 = 1U;
	uint32_t x262 = 7308968U;
	uint64_t x264 = 80764LLU;
	volatile int32_t t65 = -77;

	t65 = (x261<(x262&(x263|x264)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = INT64_MIN;
	int16_t x266 = INT16_MIN;
	int32_t x267 = INT32_MAX;
	static volatile int16_t x268 = INT16_MAX;
	volatile int32_t t66 = 650619;

	t66 = (x265<(x266&(x267|x268)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x270 = -1;
	int16_t x271 = INT16_MIN;
	int8_t x272 = -1;

	t67 = (x269<(x270&(x271|x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x273 = INT32_MIN;
	static uint32_t x274 = UINT32_MAX;
	int16_t x275 = -1;
	volatile uint32_t x276 = 882765684U;

	t68 = (x273<(x274&(x275|x276)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x277 = UINT8_MAX;
	uint8_t x278 = UINT8_MAX;
	int16_t x279 = -16;
	int32_t x280 = INT32_MIN;
	volatile int32_t t69 = 39719;

	t69 = (x277<(x278&(x279|x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = INT16_MIN;
	volatile uint16_t x282 = 20U;
	int32_t x284 = 98652;
	volatile int32_t t70 = -71;

	t70 = (x281<(x282&(x283|x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x286 = INT32_MIN;
	int16_t x287 = -1;
	volatile int32_t t71 = 1276728;

	t71 = (x285<(x286&(x287|x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MIN;
	int64_t x292 = INT64_MIN;
	volatile int32_t t72 = 7;

	t72 = (x289<(x290&(x291|x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x294 = 5183LLU;
	int64_t x296 = -1LL;

	t73 = (x293<(x294&(x295|x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = INT32_MIN;
	uint8_t x300 = UINT8_MAX;
	volatile int32_t t74 = 28120;

	t74 = (x297<(x298&(x299|x300)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x302 = 38U;
	static int8_t x304 = INT8_MAX;
	int32_t t75 = -55;

	t75 = (x301<(x302&(x303|x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x305 = 6644U;
	int16_t x306 = -1;
	int8_t x307 = INT8_MAX;
	static volatile int16_t x308 = INT16_MIN;
	int32_t t76 = 37795165;

	t76 = (x305<(x306&(x307|x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x311 = INT64_MAX;
	static int32_t x312 = INT32_MIN;

	t77 = (x309<(x310&(x311|x312)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = INT8_MIN;
	volatile int32_t x314 = INT32_MAX;
	static int16_t x316 = INT16_MIN;
	static int32_t t78 = 13290;

	t78 = (x313<(x314&(x315|x316)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = -960;
	static int16_t x318 = -3524;
	uint8_t x319 = 2U;
	static uint64_t x320 = 206712629284193729LLU;
	int32_t t79 = -590589852;

	t79 = (x317<(x318&(x319|x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x321 = 50U;
	volatile int16_t x322 = 11;
	int64_t x323 = INT64_MAX;
	volatile int16_t x324 = 1;
	int32_t t80 = -53;

	t80 = (x321<(x322&(x323|x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x325 = 1395U;
	int16_t x326 = INT16_MIN;
	uint32_t x327 = 54064934U;
	volatile int16_t x328 = INT16_MIN;
	static volatile int32_t t81 = -33564;

	t81 = (x325<(x326&(x327|x328)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = -1;
	uint8_t x330 = 8U;
	uint8_t x331 = 51U;
	uint64_t x332 = 3LLU;
	volatile int32_t t82 = 539;

	t82 = (x329<(x330&(x331|x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = -10533420LL;
	int64_t x334 = INT64_MIN;
	volatile int8_t x335 = -11;
	uint8_t x336 = UINT8_MAX;
	int32_t t83 = 0;

	t83 = (x333<(x334&(x335|x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x337 = INT16_MAX;
	int16_t x338 = 1909;
	int64_t x339 = 94853744025892423LL;
	static int16_t x340 = -266;
	int32_t t84 = -21;

	t84 = (x337<(x338&(x339|x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x341 = -1;
	int8_t x342 = -1;
	static int32_t x343 = 440;
	volatile uint64_t x344 = 3LLU;

	t85 = (x341<(x342&(x343|x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x345 = INT16_MAX;
	uint16_t x346 = UINT16_MAX;
	int32_t x348 = 492;
	int32_t t86 = 0;

	t86 = (x345<(x346&(x347|x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x349 = INT8_MIN;
	static uint32_t x351 = 7806898U;
	int64_t x352 = INT64_MIN;
	volatile int32_t t87 = 220889;

	t87 = (x349<(x350&(x351|x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x354 = UINT64_MAX;
	static volatile int32_t t88 = 63;

	t88 = (x353<(x354&(x355|x356)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x358 = INT32_MIN;
	int16_t x359 = INT16_MAX;
	int32_t x360 = INT32_MIN;
	volatile int32_t t89 = 808639;

	t89 = (x357<(x358&(x359|x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x361 = INT8_MAX;
	uint64_t x362 = 25LLU;
	int8_t x363 = INT8_MIN;
	static volatile int32_t t90 = -193932532;

	t90 = (x361<(x362&(x363|x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x366 = 12524254;
	static int64_t x367 = INT64_MIN;
	int32_t t91 = 13358;

	t91 = (x365<(x366&(x367|x368)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x370 = -445;
	int32_t t92 = 3;

	t92 = (x369<(x370&(x371|x372)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = INT16_MIN;
	int32_t x374 = 12875;
	int32_t x376 = INT32_MIN;
	volatile int32_t t93 = 1;

	t93 = (x373<(x374&(x375|x376)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x377 = 6U;
	int32_t x378 = -6367;
	int32_t x379 = INT32_MAX;
	int16_t x380 = INT16_MAX;
	volatile int32_t t94 = 60;

	t94 = (x377<(x378&(x379|x380)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x383 = 0LL;
	int32_t x384 = INT32_MIN;
	volatile int32_t t95 = -2862381;

	t95 = (x381<(x382&(x383|x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = INT64_MIN;
	uint8_t x386 = 0U;
	int16_t x387 = INT16_MIN;
	static volatile uint16_t x388 = UINT16_MAX;
	volatile int32_t t96 = 50308930;

	t96 = (x385<(x386&(x387|x388)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x390 = 10284133;
	volatile int16_t x391 = INT16_MAX;
	uint32_t x392 = 19634104U;
	volatile int32_t t97 = -6;

	t97 = (x389<(x390&(x391|x392)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = -1LL;
	volatile int64_t x394 = INT64_MIN;
	uint8_t x395 = UINT8_MAX;
	uint64_t x396 = 20635982LLU;

	t98 = (x393<(x394&(x395|x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = 1U;
	volatile int8_t x398 = INT8_MIN;
	int64_t x399 = INT64_MIN;
	static volatile uint64_t x400 = UINT64_MAX;
	int32_t t99 = 1652671;

	t99 = (x397<(x398&(x399|x400)));

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

