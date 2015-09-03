#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x4 = 687;
static int64_t x12 = -1LL;
int32_t t2 = -98109;
static uint8_t x13 = 53U;
static uint16_t x20 = 375U;
int8_t x21 = INT8_MIN;
int8_t x31 = 1;
int32_t t7 = 29457;
int16_t x33 = INT16_MAX;
int16_t x35 = INT16_MAX;
int32_t x36 = INT32_MAX;
static volatile int32_t t8 = -11;
int32_t t9 = -477564;
volatile uint32_t x42 = 493719U;
static int32_t x43 = 1859;
volatile int32_t t10 = 0;
uint8_t x49 = 1U;
int16_t x51 = INT16_MIN;
int64_t x55 = -10201870493270832LL;
static uint32_t x61 = 10251133U;
static uint64_t x64 = 1227LLU;
uint64_t x69 = UINT64_MAX;
int64_t x78 = INT64_MIN;
int32_t t19 = 8;
volatile int64_t x86 = -24781LL;
volatile int8_t x87 = -14;
int16_t x109 = -15;
uint16_t x120 = UINT16_MAX;
int32_t x122 = INT32_MIN;
int32_t x124 = -1;
static volatile int8_t x126 = INT8_MIN;
static uint8_t x127 = 2U;
int32_t t32 = -53623530;
volatile int8_t x133 = 1;
uint64_t x136 = UINT64_MAX;
volatile uint16_t x138 = UINT16_MAX;
int64_t x143 = -1LL;
int16_t x145 = INT16_MAX;
static int32_t t36 = 17;
volatile int32_t t41 = 29972377;
int16_t x172 = 1;
int32_t t42 = 13;
int32_t x174 = 240103;
volatile int32_t t43 = 0;
int8_t x188 = INT8_MIN;
static int16_t x191 = INT16_MAX;
static volatile int32_t t48 = 14;
uint16_t x202 = UINT16_MAX;
volatile int32_t t52 = 138129938;
int8_t x221 = INT8_MIN;
uint16_t x229 = 1406U;
uint16_t x232 = 29508U;
static int32_t t58 = 1714357;
int32_t x238 = -1;
int32_t t61 = -3516;
uint32_t x260 = 314U;
uint8_t x279 = 5U;
int32_t t69 = -65351;
uint16_t x283 = UINT16_MAX;
volatile int32_t t70 = -14408342;
volatile uint64_t x289 = 8820758340047275LLU;
static int64_t x293 = -551608LL;
int64_t x294 = INT64_MIN;
volatile int32_t t73 = -570517;
int8_t x298 = INT8_MIN;
uint8_t x299 = UINT8_MAX;
uint16_t x302 = 360U;
uint8_t x307 = 26U;
int16_t x316 = 11;
int8_t x318 = INT8_MAX;
int32_t t80 = 482956464;
uint8_t x329 = 23U;
uint8_t x330 = 120U;
uint8_t x332 = 19U;
uint32_t x337 = 25832350U;
uint64_t x342 = 19947LLU;
volatile uint16_t x348 = 31413U;
volatile uint32_t x349 = UINT32_MAX;
int8_t x353 = INT8_MIN;
volatile int64_t x355 = -1LL;
static uint32_t x356 = 120U;
volatile int32_t t88 = 4477954;
int16_t x359 = INT16_MAX;
int32_t x368 = INT32_MAX;
static int32_t x370 = INT32_MIN;
uint16_t x373 = UINT16_MAX;
int64_t x375 = INT64_MIN;
static int32_t t97 = -3109;
uint16_t x396 = 27U;


void f0(void) {
	volatile uint8_t x1 = UINT8_MAX;
	int16_t x2 = -5;
	int32_t x3 = 73;
	volatile int32_t t0 = 359;

	t0 = (x1<(x2^(x3|x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = 1;
	int64_t x6 = -601153596065LL;
	uint16_t x7 = UINT16_MAX;
	volatile int32_t x8 = 0;
	int32_t t1 = -22729;

	t1 = (x5<(x6^(x7|x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 413978LLU;
	int32_t x10 = -1;
	volatile uint8_t x11 = UINT8_MAX;

	t2 = (x9<(x10^(x11|x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x14 = INT16_MIN;
	int64_t x15 = INT64_MIN;
	static int8_t x16 = -1;
	int32_t t3 = -6383;

	t3 = (x13<(x14^(x15|x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = 16;
	int8_t x18 = INT8_MIN;
	volatile int64_t x19 = INT64_MIN;
	int32_t t4 = 7829307;

	t4 = (x17<(x18^(x19|x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x22 = 1U;
	uint64_t x23 = 41876580LLU;
	volatile int16_t x24 = INT16_MIN;
	int32_t t5 = -2;

	t5 = (x21<(x22^(x23|x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MAX;
	uint8_t x26 = 39U;
	int16_t x27 = INT16_MIN;
	volatile uint64_t x28 = 6190174577000726431LLU;
	volatile int32_t t6 = -848130;

	t6 = (x25<(x26^(x27|x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = 1;
	int64_t x30 = -1LL;
	static int32_t x32 = -5114752;

	t7 = (x29<(x30^(x31|x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x34 = INT16_MIN;

	t8 = (x33<(x34^(x35|x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = UINT32_MAX;
	uint32_t x38 = 1432394500U;
	volatile int32_t x39 = 432154174;
	int16_t x40 = -1;

	t9 = (x37<(x38^(x39|x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x41 = 1377;
	volatile int32_t x44 = INT32_MAX;

	t10 = (x41<(x42^(x43|x44)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x45 = INT64_MIN;
	uint64_t x46 = 2639013508696490LLU;
	static int64_t x47 = 38178059751LL;
	volatile int8_t x48 = INT8_MAX;
	volatile int32_t t11 = 11333;

	t11 = (x45<(x46^(x47|x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x50 = -1;
	static int8_t x52 = INT8_MIN;
	int32_t t12 = -1629;

	t12 = (x49<(x50^(x51|x52)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = UINT16_MAX;
	static int8_t x54 = INT8_MIN;
	static int32_t x56 = INT32_MIN;
	volatile int32_t t13 = 3141;

	t13 = (x53<(x54^(x55|x56)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x57 = 3776175460094LLU;
	volatile int16_t x58 = INT16_MIN;
	int16_t x59 = INT16_MAX;
	int8_t x60 = INT8_MAX;
	volatile int32_t t14 = 5780;

	t14 = (x57<(x58^(x59|x60)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x62 = INT64_MIN;
	int8_t x63 = 1;
	volatile int32_t t15 = 39383639;

	t15 = (x61<(x62^(x63|x64)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x65 = INT32_MIN;
	int32_t x66 = 1;
	static int16_t x67 = INT16_MIN;
	volatile uint32_t x68 = 186U;
	volatile int32_t t16 = -436137;

	t16 = (x65<(x66^(x67|x68)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x70 = UINT8_MAX;
	int64_t x71 = -1LL;
	int16_t x72 = -1;
	int32_t t17 = 6098;

	t17 = (x69<(x70^(x71|x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = -102550365013428907LL;
	int32_t x74 = -1;
	static int64_t x75 = INT64_MIN;
	volatile uint8_t x76 = 31U;
	int32_t t18 = -2872;

	t18 = (x73<(x74^(x75|x76)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = -1;
	int32_t x79 = -1523;
	int64_t x80 = -1LL;

	t19 = (x77<(x78^(x79|x80)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MIN;
	volatile int32_t x82 = -1;
	static uint64_t x83 = UINT64_MAX;
	volatile int32_t x84 = INT32_MAX;
	int32_t t20 = 3857898;

	t20 = (x81<(x82^(x83|x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = 772U;
	int64_t x88 = -447719847705931183LL;
	volatile int32_t t21 = -16750;

	t21 = (x85<(x86^(x87|x88)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MAX;
	int64_t x90 = INT64_MIN;
	int32_t x91 = -1;
	int16_t x92 = INT16_MIN;
	volatile int32_t t22 = 40201781;

	t22 = (x89<(x90^(x91|x92)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = 3533021U;
	uint16_t x94 = UINT16_MAX;
	int64_t x95 = -1LL;
	uint32_t x96 = UINT32_MAX;
	volatile int32_t t23 = -618402773;

	t23 = (x93<(x94^(x95|x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = INT8_MAX;
	int16_t x98 = INT16_MIN;
	int64_t x99 = INT64_MIN;
	int8_t x100 = INT8_MAX;
	int32_t t24 = -165;

	t24 = (x97<(x98^(x99|x100)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x101 = 0U;
	static int64_t x102 = -3LL;
	uint16_t x103 = 25127U;
	volatile uint8_t x104 = 45U;
	int32_t t25 = 28109;

	t25 = (x101<(x102^(x103|x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MIN;
	uint32_t x106 = 11243U;
	uint32_t x107 = 45695U;
	volatile int64_t x108 = INT64_MIN;
	int32_t t26 = -23211;

	t26 = (x105<(x106^(x107|x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x110 = 120;
	int32_t x111 = INT32_MIN;
	static int8_t x112 = 39;
	volatile int32_t t27 = -38;

	t27 = (x109<(x110^(x111|x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = -7;
	uint16_t x114 = 1186U;
	uint8_t x115 = 1U;
	volatile int64_t x116 = 1049399LL;
	volatile int32_t t28 = -422155736;

	t28 = (x113<(x114^(x115|x116)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x117 = 40U;
	uint16_t x118 = UINT16_MAX;
	volatile int64_t x119 = INT64_MAX;
	int32_t t29 = -2877992;

	t29 = (x117<(x118^(x119|x120)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MAX;
	volatile int8_t x123 = -1;
	volatile int32_t t30 = 6136;

	t30 = (x121<(x122^(x123|x124)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = -1;
	int16_t x128 = -3252;
	volatile int32_t t31 = -1806;

	t31 = (x125<(x126^(x127|x128)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x129 = 0U;
	int64_t x130 = INT64_MIN;
	uint32_t x131 = 3U;
	uint8_t x132 = 0U;

	t32 = (x129<(x130^(x131|x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x134 = 64732LLU;
	int16_t x135 = 1705;
	int32_t t33 = 13;

	t33 = (x133<(x134^(x135|x136)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x137 = 169803618193LLU;
	static int16_t x139 = -4;
	static int64_t x140 = INT64_MAX;
	int32_t t34 = 1;

	t34 = (x137<(x138^(x139|x140)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x141 = INT8_MIN;
	int8_t x142 = 22;
	int64_t x144 = INT64_MAX;
	int32_t t35 = 224238831;

	t35 = (x141<(x142^(x143|x144)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x146 = INT64_MIN;
	int16_t x147 = -1;
	uint16_t x148 = 6187U;

	t36 = (x145<(x146^(x147|x148)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = 182309046196874LL;
	static uint8_t x150 = UINT8_MAX;
	int32_t x151 = 459;
	volatile int16_t x152 = 52;
	volatile int32_t t37 = -90;

	t37 = (x149<(x150^(x151|x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x153 = INT16_MAX;
	int16_t x154 = -4;
	int16_t x155 = INT16_MIN;
	int8_t x156 = INT8_MAX;
	volatile int32_t t38 = -107;

	t38 = (x153<(x154^(x155|x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = 14490U;
	int64_t x158 = INT64_MIN;
	static int64_t x159 = -1LL;
	uint64_t x160 = 5453852115697697443LLU;
	static int32_t t39 = 28499;

	t39 = (x157<(x158^(x159|x160)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = 135290849740LLU;
	int64_t x162 = INT64_MAX;
	uint16_t x163 = 84U;
	int8_t x164 = INT8_MIN;
	static volatile int32_t t40 = 4696506;

	t40 = (x161<(x162^(x163|x164)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x165 = 236830499U;
	int8_t x166 = INT8_MIN;
	static int8_t x167 = -1;
	uint64_t x168 = 546726674067938761LLU;

	t41 = (x165<(x166^(x167|x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x169 = 5481U;
	volatile uint64_t x170 = 35589159LLU;
	static int32_t x171 = 23464;

	t42 = (x169<(x170^(x171|x172)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x173 = 0U;
	int32_t x175 = INT32_MIN;
	int64_t x176 = INT64_MIN;

	t43 = (x173<(x174^(x175|x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = -550008842;
	static volatile int8_t x178 = -38;
	uint8_t x179 = UINT8_MAX;
	volatile int32_t x180 = -1;
	volatile int32_t t44 = -17;

	t44 = (x177<(x178^(x179|x180)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = -1LL;
	int64_t x182 = -1751813523611578568LL;
	int16_t x183 = INT16_MAX;
	uint64_t x184 = 90912064771LLU;
	static volatile int32_t t45 = 16640;

	t45 = (x181<(x182^(x183|x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x185 = INT8_MAX;
	int16_t x186 = -1;
	uint8_t x187 = 1U;
	int32_t t46 = 147219;

	t46 = (x185<(x186^(x187|x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = 105U;
	int16_t x190 = INT16_MIN;
	volatile int32_t x192 = INT32_MIN;
	int32_t t47 = 0;

	t47 = (x189<(x190^(x191|x192)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x193 = INT32_MIN;
	int32_t x194 = -1318;
	int16_t x195 = INT16_MIN;
	int64_t x196 = INT64_MAX;

	t48 = (x193<(x194^(x195|x196)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x197 = INT32_MAX;
	static volatile int64_t x198 = -1LL;
	int64_t x199 = 40632LL;
	uint8_t x200 = 90U;
	volatile int32_t t49 = 721;

	t49 = (x197<(x198^(x199|x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = INT32_MIN;
	int64_t x203 = -1LL;
	volatile int16_t x204 = 1303;
	static volatile int32_t t50 = 2225018;

	t50 = (x201<(x202^(x203|x204)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int64_t x205 = INT64_MIN;
	int64_t x206 = INT64_MIN;
	int16_t x207 = INT16_MAX;
	int32_t x208 = -1;
	int32_t t51 = 473017147;

	t51 = (x205<(x206^(x207|x208)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = INT8_MAX;
	volatile uint64_t x210 = 26LLU;
	static int16_t x211 = -1;
	uint8_t x212 = 30U;

	t52 = (x209<(x210^(x211|x212)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = 9563530370LLU;
	volatile int16_t x214 = 3103;
	uint64_t x215 = 6821100LLU;
	uint16_t x216 = 27232U;
	int32_t t53 = 3217101;

	t53 = (x213<(x214^(x215|x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x217 = -9664;
	int64_t x218 = INT64_MIN;
	uint8_t x219 = 15U;
	int8_t x220 = 40;
	int32_t t54 = -7073;

	t54 = (x217<(x218^(x219|x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x222 = -1LL;
	volatile int32_t x223 = -342697;
	int8_t x224 = INT8_MAX;
	volatile int32_t t55 = 89123;

	t55 = (x221<(x222^(x223|x224)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x225 = -1LL;
	int8_t x226 = -1;
	int64_t x227 = INT64_MIN;
	int32_t x228 = -83701911;
	int32_t t56 = 495066;

	t56 = (x225<(x226^(x227|x228)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x230 = 497070222U;
	int8_t x231 = 0;
	int32_t t57 = 34758085;

	t57 = (x229<(x230^(x231|x232)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = -1LL;
	int32_t x234 = -47633;
	static uint64_t x235 = 6942410LLU;
	static uint64_t x236 = UINT64_MAX;

	t58 = (x233<(x234^(x235|x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = 8336739;
	int8_t x239 = INT8_MIN;
	int8_t x240 = -1;
	volatile int32_t t59 = -54683594;

	t59 = (x237<(x238^(x239|x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x241 = 33U;
	uint8_t x242 = 18U;
	static volatile uint64_t x243 = 1522868021413185LLU;
	int32_t x244 = INT32_MAX;
	int32_t t60 = 2;

	t60 = (x241<(x242^(x243|x244)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x245 = INT8_MIN;
	volatile int8_t x246 = INT8_MIN;
	int64_t x247 = INT64_MAX;
	static int64_t x248 = INT64_MIN;

	t61 = (x245<(x246^(x247|x248)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = INT32_MIN;
	int32_t x250 = -53351487;
	uint64_t x251 = 13543956109LLU;
	static volatile int64_t x252 = INT64_MIN;
	volatile int32_t t62 = 23271155;

	t62 = (x249<(x250^(x251|x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x253 = UINT64_MAX;
	uint32_t x254 = UINT32_MAX;
	static uint8_t x255 = 0U;
	int8_t x256 = -1;
	int32_t t63 = -17;

	t63 = (x253<(x254^(x255|x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = INT64_MIN;
	uint64_t x258 = 36312448LLU;
	uint16_t x259 = 19452U;
	static int32_t t64 = -589105216;

	t64 = (x257<(x258^(x259|x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x261 = 591U;
	int64_t x262 = INT64_MAX;
	volatile int32_t x263 = INT32_MAX;
	static uint32_t x264 = 16U;
	volatile int32_t t65 = 1031513;

	t65 = (x261<(x262^(x263|x264)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = -1;
	volatile int32_t x266 = 70;
	int64_t x267 = 3019LL;
	int64_t x268 = INT64_MIN;
	int32_t t66 = -599;

	t66 = (x265<(x266^(x267|x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x269 = 0U;
	uint64_t x270 = 7878LLU;
	volatile uint8_t x271 = 0U;
	volatile int16_t x272 = 254;
	volatile int32_t t67 = 602;

	t67 = (x269<(x270^(x271|x272)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x273 = INT16_MIN;
	int8_t x274 = 3;
	int8_t x275 = 0;
	static int16_t x276 = -1;
	volatile int32_t t68 = 21;

	t68 = (x273<(x274^(x275|x276)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x277 = INT32_MIN;
	uint16_t x278 = 791U;
	static int16_t x280 = INT16_MIN;

	t69 = (x277<(x278^(x279|x280)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x281 = INT64_MIN;
	int16_t x282 = -970;
	int8_t x284 = -1;

	t70 = (x281<(x282^(x283|x284)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x285 = 916876113962237LLU;
	static volatile int64_t x286 = INT64_MIN;
	volatile int32_t x287 = INT32_MIN;
	int16_t x288 = -1;
	int32_t t71 = -83;

	t71 = (x285<(x286^(x287|x288)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x290 = INT64_MIN;
	static int64_t x291 = INT64_MAX;
	int64_t x292 = -1LL;
	volatile int32_t t72 = -125183417;

	t72 = (x289<(x290^(x291|x292)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x295 = -553;
	int32_t x296 = -1;

	t73 = (x293<(x294^(x295|x296)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x297 = 1807U;
	int32_t x300 = INT32_MIN;
	static volatile int32_t t74 = -3;

	t74 = (x297<(x298^(x299|x300)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x301 = UINT8_MAX;
	uint64_t x303 = UINT64_MAX;
	int64_t x304 = -112549997359LL;
	static int32_t t75 = 993;

	t75 = (x301<(x302^(x303|x304)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = -1;
	int32_t x306 = INT32_MAX;
	int32_t x308 = INT32_MAX;
	int32_t t76 = 118909156;

	t76 = (x305<(x306^(x307|x308)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = INT16_MIN;
	int32_t x310 = 134053;
	volatile uint32_t x311 = UINT32_MAX;
	int8_t x312 = -1;
	volatile int32_t t77 = 72784;

	t77 = (x309<(x310^(x311|x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x313 = 143426U;
	int64_t x314 = 12189314917300LL;
	int16_t x315 = INT16_MIN;
	int32_t t78 = 260924399;

	t78 = (x313<(x314^(x315|x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int8_t x317 = -8;
	int64_t x319 = INT64_MIN;
	volatile uint64_t x320 = UINT64_MAX;
	volatile int32_t t79 = -28;

	t79 = (x317<(x318^(x319|x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = 145;
	volatile uint8_t x322 = 0U;
	volatile int16_t x323 = -1;
	volatile int16_t x324 = INT16_MIN;

	t80 = (x321<(x322^(x323|x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x325 = 13U;
	static int32_t x326 = INT32_MIN;
	static uint64_t x327 = UINT64_MAX;
	uint16_t x328 = UINT16_MAX;
	int32_t t81 = 1;

	t81 = (x325<(x326^(x327|x328)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x331 = -1;
	static int32_t t82 = 1;

	t82 = (x329<(x330^(x331|x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x333 = 2209;
	volatile int16_t x334 = INT16_MIN;
	int16_t x335 = INT16_MAX;
	volatile uint32_t x336 = UINT32_MAX;
	static volatile int32_t t83 = 1500;

	t83 = (x333<(x334^(x335|x336)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x338 = INT64_MIN;
	volatile uint64_t x339 = 33059076377523LLU;
	static uint8_t x340 = UINT8_MAX;
	int32_t t84 = -1856;

	t84 = (x337<(x338^(x339|x340)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x341 = INT64_MAX;
	uint64_t x343 = 6148161941204436656LLU;
	static int32_t x344 = INT32_MIN;
	volatile int32_t t85 = 0;

	t85 = (x341<(x342^(x343|x344)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x345 = 2283U;
	volatile uint64_t x346 = 3508LLU;
	volatile int64_t x347 = INT64_MIN;
	volatile int32_t t86 = -27;

	t86 = (x345<(x346^(x347|x348)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x350 = 9563124917115LL;
	uint64_t x351 = UINT64_MAX;
	int64_t x352 = 4033204794729078237LL;
	int32_t t87 = -203113;

	t87 = (x349<(x350^(x351|x352)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x354 = 3477U;

	t88 = (x353<(x354^(x355|x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = INT16_MIN;
	int32_t x358 = INT32_MIN;
	static int64_t x360 = INT64_MIN;
	int32_t t89 = 39;

	t89 = (x357<(x358^(x359|x360)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x361 = -922;
	static uint8_t x362 = UINT8_MAX;
	static int16_t x363 = INT16_MIN;
	uint16_t x364 = 2U;
	int32_t t90 = 5255440;

	t90 = (x361<(x362^(x363|x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = 0;
	static uint8_t x366 = 33U;
	static int32_t x367 = -94;
	int32_t t91 = 63402;

	t91 = (x365<(x366^(x367|x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = INT16_MIN;
	volatile uint64_t x371 = UINT64_MAX;
	uint32_t x372 = 185247693U;
	int32_t t92 = 2094;

	t92 = (x369<(x370^(x371|x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x374 = 4425;
	volatile int32_t x376 = -60;
	volatile int32_t t93 = -111849;

	t93 = (x373<(x374^(x375|x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = -1LL;
	static uint32_t x378 = 107557U;
	int32_t x379 = -1;
	static uint16_t x380 = UINT16_MAX;
	volatile int32_t t94 = 384;

	t94 = (x377<(x378^(x379|x380)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = -1LL;
	int64_t x382 = -4137404392LL;
	volatile int64_t x383 = INT64_MAX;
	volatile uint32_t x384 = 10022U;
	volatile int32_t t95 = -1880;

	t95 = (x381<(x382^(x383|x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x385 = 93U;
	volatile int32_t x386 = INT32_MIN;
	uint8_t x387 = 5U;
	static volatile uint8_t x388 = 28U;
	volatile int32_t t96 = -12489;

	t96 = (x385<(x386^(x387|x388)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x389 = INT64_MIN;
	int16_t x390 = INT16_MAX;
	volatile uint16_t x391 = UINT16_MAX;
	int8_t x392 = -1;

	t97 = (x389<(x390^(x391|x392)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x393 = UINT32_MAX;
	static uint32_t x394 = 0U;
	int64_t x395 = INT64_MIN;
	volatile int32_t t98 = 265610063;

	t98 = (x393<(x394^(x395|x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x397 = 0U;
	int8_t x398 = INT8_MIN;
	int64_t x399 = 5210323967LL;
	int8_t x400 = INT8_MAX;
	volatile int32_t t99 = -23033110;

	t99 = (x397<(x398^(x399|x400)));

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

