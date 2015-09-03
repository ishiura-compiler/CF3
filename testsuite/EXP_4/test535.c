#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x6 = -1LL;
int64_t t1 = 105056539902LL;
static int16_t x12 = -24;
uint8_t x14 = 4U;
int64_t x19 = INT64_MAX;
uint16_t x25 = 10788U;
volatile int16_t x33 = INT16_MIN;
int16_t x37 = INT16_MIN;
volatile int16_t x38 = INT16_MAX;
int8_t x42 = -26;
int8_t x47 = -1;
static int16_t x48 = INT16_MIN;
volatile uint32_t t10 = 442U;
volatile int64_t x49 = 27217455058714LL;
int8_t x51 = INT8_MAX;
uint64_t t11 = 217LLU;
uint64_t x80 = UINT64_MAX;
volatile uint64_t t16 = 266611992646045LLU;
volatile int8_t x81 = 6;
int16_t x88 = -1;
int32_t x96 = 29306873;
int32_t x100 = -931;
uint16_t x106 = 9U;
volatile int64_t x108 = 1943192412845429LL;
int8_t x111 = INT8_MIN;
static int64_t x123 = INT64_MIN;
int8_t x130 = INT8_MAX;
volatile int64_t x140 = INT64_MIN;
int8_t x141 = INT8_MAX;
int32_t x144 = INT32_MIN;
static uint64_t t30 = 6LLU;
uint32_t t37 = 62U;
volatile int32_t x182 = INT32_MAX;
volatile uint32_t x183 = 1391075U;
uint32_t t39 = 200258731U;
int32_t x185 = 4032519;
int16_t x186 = INT16_MAX;
volatile uint16_t x192 = 170U;
uint32_t t41 = 17U;
volatile uint32_t t43 = 65U;
uint8_t x201 = 7U;
volatile int32_t t45 = 159;
static volatile uint32_t x215 = 2U;
volatile uint16_t x224 = 24061U;
static volatile int16_t x237 = -1;
int64_t x238 = -1LL;
static uint32_t x246 = 327852268U;
int8_t x249 = INT8_MIN;
int16_t x251 = INT16_MIN;
static uint64_t x254 = UINT64_MAX;
int8_t x255 = 5;
volatile uint64_t t55 = 474339531LLU;
static volatile uint32_t x257 = UINT32_MAX;
int32_t x269 = -5;
int64_t x271 = -1LL;
volatile uint64_t t58 = 16LLU;
volatile int16_t x273 = INT16_MAX;
volatile int8_t x275 = -1;
int16_t x277 = INT16_MIN;
int64_t t60 = -1631476739801LL;
uint64_t x291 = 50986772894572LLU;
int16_t x298 = 0;
uint32_t x303 = 167479U;
volatile int64_t x306 = 1718625354293284LL;
uint32_t x307 = 25U;
uint64_t x310 = UINT64_MAX;
uint8_t x318 = 6U;
static volatile int16_t x335 = -1;
volatile int16_t x336 = INT16_MAX;
int32_t x350 = INT32_MIN;
uint64_t x351 = UINT64_MAX;
int16_t x354 = -166;
uint64_t x359 = 738078957LLU;
uint8_t x360 = UINT8_MAX;
volatile uint64_t t75 = 39580443LLU;
static uint32_t t76 = 2372145U;
uint32_t t77 = UINT32_MAX;
volatile int16_t x371 = 11726;
int64_t t78 = 1LL;
int64_t x374 = -1LL;
int64_t t79 = -13171623725LL;
int64_t x390 = INT64_MIN;
volatile int64_t t83 = 27LL;
uint16_t x397 = UINT16_MAX;
int32_t x400 = INT32_MIN;
volatile int32_t x405 = INT32_MAX;
volatile uint16_t x408 = UINT16_MAX;
uint8_t x411 = 12U;
int8_t x412 = INT8_MAX;
volatile int8_t x422 = -4;
int8_t x424 = INT8_MIN;
int64_t x435 = -1LL;
int16_t x450 = -1;
int32_t x452 = 876;
uint32_t t94 = 372363U;
volatile uint16_t x453 = 4796U;
volatile uint64_t t96 = 182067LLU;
uint8_t x465 = 25U;
uint8_t x470 = 0U;
uint16_t x471 = 66U;
uint8_t x472 = UINT8_MAX;
static int32_t t99 = -2730;


void f0(void) {
	int8_t x1 = -1;
	static uint8_t x2 = 2U;
	volatile int16_t x3 = -6;
	static int16_t x4 = INT16_MAX;
	volatile int32_t t0 = 111503502;

	t0 = (x1-(x2*(x3/x4)));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	volatile int8_t x7 = 0;
	int64_t x8 = INT64_MIN;

	t1 = (x5-(x6*(x7/x8)));

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = INT32_MAX;
	volatile uint64_t x10 = 198332LLU;
	uint16_t x11 = 4U;
	uint64_t t2 = 18620LLU;

	t2 = (x9-(x10*(x11/x12)));

	if (t2 != 2147483647LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x13 = 14U;
	static int8_t x15 = -1;
	int8_t x16 = INT8_MAX;
	volatile int32_t t3 = 353322857;

	t3 = (x13-(x14*(x15/x16)));

	if (t3 != 14) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 156;
	volatile uint8_t x18 = 0U;
	int32_t x20 = 5;
	static int64_t t4 = 16583219430784LL;

	t4 = (x17-(x18*(x19/x20)));

	if (t4 != 156LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 8U;
	int16_t x22 = -49;
	int8_t x23 = -1;
	int8_t x24 = INT8_MAX;
	static volatile uint32_t t5 = 27696211U;

	t5 = (x21-(x22*(x23/x24)));

	if (t5 != 8U) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x26 = INT32_MIN;
	static uint64_t x27 = 4776101381549LLU;
	int16_t x28 = INT16_MIN;
	volatile uint64_t t6 = 34359585789LLU;

	t6 = (x25-(x26*(x27/x28)));

	if (t6 != 10788LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x34 = -1;
	uint64_t x35 = 9668077252950LLU;
	static uint32_t x36 = UINT32_MAX;
	static uint64_t t7 = 6449796LLU;

	t7 = (x33-(x34*(x35/x36)));

	if (t7 != 18446744073709521099LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x39 = -20792467LL;
	static volatile uint64_t x40 = 795LLU;
	static uint64_t t8 = 59089LLU;

	t8 = (x37-(x38*(x39/x40)));

	if (t8 != 14455750388179036635LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x41 = 3U;
	int64_t x43 = INT64_MIN;
	int8_t x44 = INT8_MIN;
	volatile int64_t t9 = -413783572546LL;

	t9 = (x41-(x42*(x43/x44)));

	if (t9 != 1873497444986126339LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = INT8_MIN;
	uint32_t x46 = 85819U;

	t10 = (x45-(x46*(x47/x48)));

	if (t10 != 4294967168U) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint64_t x50 = UINT64_MAX;
	uint8_t x52 = UINT8_MAX;

	t11 = (x49-(x50*(x51/x52)));

	if (t11 != 27217455058714LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x53 = 19LLU;
	int32_t x54 = -1;
	volatile int64_t x55 = INT64_MIN;
	volatile int64_t x56 = INT64_MIN;
	volatile uint64_t t12 = 389295667278LLU;

	t12 = (x53-(x54*(x55/x56)));

	if (t12 != 20LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x61 = -1;
	int8_t x62 = -1;
	volatile int32_t x63 = INT32_MIN;
	static uint8_t x64 = 2U;
	static volatile int32_t t13 = -86784747;

	t13 = (x61-(x62*(x63/x64)));

	if (t13 != -1073741825) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x69 = UINT8_MAX;
	uint64_t x70 = 16162202LLU;
	volatile uint64_t x71 = UINT64_MAX;
	volatile uint8_t x72 = 3U;
	uint64_t t14 = 4133318LLU;

	t14 = (x69-(x70*(x71/x72)));

	if (t14 != 6148914691241904861LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x73 = INT16_MIN;
	uint32_t x74 = 663818U;
	static volatile int32_t x75 = INT32_MIN;
	int8_t x76 = INT8_MIN;
	uint32_t t15 = 10483370U;

	t15 = (x73-(x74*(x75/x76)));

	if (t15 != 4127162368U) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x77 = 0;
	uint8_t x78 = 2U;
	int64_t x79 = 12LL;

	t16 = (x77-(x78*(x79/x80)));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x82 = -1;
	static int8_t x83 = INT8_MAX;
	int8_t x84 = INT8_MIN;
	int32_t t17 = -58;

	t17 = (x81-(x82*(x83/x84)));

	if (t17 != 6) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x85 = -1;
	volatile uint32_t x86 = 42551918U;
	volatile int8_t x87 = INT8_MIN;
	uint32_t t18 = 493896U;

	t18 = (x85-(x86*(x87/x88)));

	if (t18 != 3143289087U) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x89 = UINT32_MAX;
	volatile uint64_t x90 = 1167922646LLU;
	int16_t x91 = -1;
	int8_t x92 = -1;
	uint64_t t19 = 250026326LLU;

	t19 = (x89-(x90*(x91/x92)));

	if (t19 != 3127044649LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x93 = -1;
	uint16_t x94 = 116U;
	int64_t x95 = INT64_MIN;
	int64_t t20 = 1704313083560241LL;

	t20 = (x93-(x94*(x95/x96)));

	if (t20 != 36507175510391LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x97 = INT32_MIN;
	int8_t x98 = INT8_MAX;
	int8_t x99 = -1;
	int32_t t21 = INT32_MIN;

	t21 = (x97-(x98*(x99/x100)));

	if (t21 != INT32_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x105 = 7U;
	int8_t x107 = INT8_MAX;
	volatile int64_t t22 = -12090455094LL;

	t22 = (x105-(x106*(x107/x108)));

	if (t22 != 7LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x109 = 55U;
	int16_t x110 = INT16_MAX;
	int8_t x112 = -18;
	volatile int32_t t23 = -31667;

	t23 = (x109-(x110*(x111/x112)));

	if (t23 != -229314) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x113 = -1;
	int16_t x114 = INT16_MIN;
	volatile int16_t x115 = -1;
	uint64_t x116 = 8LLU;
	uint64_t t24 = 139973056067421585LLU;

	t24 = (x113-(x114*(x115/x116)));

	if (t24 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x121 = 4332;
	uint16_t x122 = UINT16_MAX;
	int32_t x124 = -785112723;
	volatile int64_t t25 = 1083301508699LL;

	t25 = (x121-(x122*(x123/x124)));

	if (t25 != -769894142197758LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x125 = 2632895697371LLU;
	static int8_t x126 = INT8_MIN;
	int32_t x127 = INT32_MIN;
	volatile uint16_t x128 = 1805U;
	uint64_t t26 = 382753396LLU;

	t26 = (x125-(x126*(x127/x128)));

	if (t26 != 2632743410523LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x129 = INT8_MAX;
	int8_t x131 = INT8_MIN;
	int32_t x132 = INT32_MIN;
	int32_t t27 = -888863;

	t27 = (x129-(x130*(x131/x132)));

	if (t27 != 127) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x133 = -782619LL;
	static volatile uint32_t x134 = 29890U;
	static uint16_t x135 = 186U;
	uint16_t x136 = 1910U;
	int64_t t28 = -8385780575363LL;

	t28 = (x133-(x134*(x135/x136)));

	if (t28 != -782619LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x137 = INT8_MAX;
	int32_t x138 = INT32_MAX;
	static int64_t x139 = INT64_MIN;
	volatile int64_t t29 = -650687730942632LL;

	t29 = (x137-(x138*(x139/x140)));

	if (t29 != -2147483520LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x142 = 553846LL;
	uint64_t x143 = UINT64_MAX;

	t30 = (x141-(x142*(x143/x144)));

	if (t30 != 18446744073708997897LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x145 = INT64_MIN;
	uint64_t x146 = UINT64_MAX;
	int32_t x147 = -1;
	int16_t x148 = -1;
	volatile uint64_t t31 = 1431075266062LLU;

	t31 = (x145-(x146*(x147/x148)));

	if (t31 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x149 = 0U;
	static volatile uint8_t x150 = 5U;
	volatile uint64_t x151 = 4LLU;
	uint64_t x152 = 267248794956641832LLU;
	uint64_t t32 = 29LLU;

	t32 = (x149-(x150*(x151/x152)));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x153 = UINT16_MAX;
	static int8_t x154 = 4;
	int64_t x155 = INT64_MIN;
	int64_t x156 = INT64_MIN;
	static volatile int64_t t33 = 247269399744125LL;

	t33 = (x153-(x154*(x155/x156)));

	if (t33 != 65531LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x157 = -1;
	int16_t x158 = INT16_MIN;
	static int64_t x159 = INT64_MAX;
	int64_t x160 = 1978499647LL;
	volatile int64_t t34 = -4801978192879LL;

	t34 = (x157-(x158*(x159/x160)));

	if (t34 != 152757901852671LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x161 = INT32_MIN;
	volatile int16_t x162 = INT16_MIN;
	int8_t x163 = -1;
	volatile int16_t x164 = INT16_MIN;
	int32_t t35 = INT32_MIN;

	t35 = (x161-(x162*(x163/x164)));

	if (t35 != INT32_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x165 = 727927290;
	volatile int64_t x166 = INT64_MIN;
	int32_t x167 = -7;
	static int16_t x168 = INT16_MAX;
	static volatile int64_t t36 = 111141074500LL;

	t36 = (x165-(x166*(x167/x168)));

	if (t36 != 727927290LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x169 = INT32_MIN;
	int16_t x170 = INT16_MIN;
	volatile int16_t x171 = INT16_MAX;
	uint32_t x172 = UINT32_MAX;

	t37 = (x169-(x170*(x171/x172)));

	if (t37 != 2147483648U) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint32_t x177 = 2U;
	int64_t x178 = INT64_MAX;
	int64_t x179 = -1LL;
	static int16_t x180 = INT16_MIN;
	volatile int64_t t38 = -20712750647734LL;

	t38 = (x177-(x178*(x179/x180)));

	if (t38 != 2LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x181 = -942;
	int16_t x184 = INT16_MAX;

	t39 = (x181-(x182*(x183/x184)));

	if (t39 != 4294966396U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x187 = -1;
	static int8_t x188 = -39;
	volatile int32_t t40 = -1177698;

	t40 = (x185-(x186*(x187/x188)));

	if (t40 != 4032519) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x189 = INT32_MIN;
	int32_t x190 = INT32_MIN;
	uint32_t x191 = 75U;

	t41 = (x189-(x190*(x191/x192)));

	if (t41 != 2147483648U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x193 = INT8_MAX;
	static int32_t x194 = 3797;
	volatile int8_t x195 = 1;
	static int16_t x196 = -1;
	static int32_t t42 = 830;

	t42 = (x193-(x194*(x195/x196)));

	if (t42 != 3924) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x197 = 1429673U;
	int16_t x198 = -1;
	static int8_t x199 = -26;
	int8_t x200 = 1;

	t43 = (x197-(x198*(x199/x200)));

	if (t43 != 1429647U) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x202 = 4939;
	uint16_t x203 = 2U;
	uint8_t x204 = 103U;
	int32_t t44 = 1284;

	t44 = (x201-(x202*(x203/x204)));

	if (t44 != 7) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int32_t x209 = -1;
	uint8_t x210 = 0U;
	int8_t x211 = INT8_MIN;
	int8_t x212 = 18;

	t45 = (x209-(x210*(x211/x212)));

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x213 = INT16_MIN;
	int64_t x214 = 9792113264972848LL;
	uint16_t x216 = UINT16_MAX;
	int64_t t46 = -3961688541453803LL;

	t46 = (x213-(x214*(x215/x216)));

	if (t46 != -32768LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x217 = INT32_MIN;
	uint32_t x218 = 3752477U;
	int32_t x219 = -1;
	volatile int16_t x220 = INT16_MIN;
	static uint32_t t47 = 3U;

	t47 = (x217-(x218*(x219/x220)));

	if (t47 != 2147483648U) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x221 = 2U;
	int32_t x222 = INT32_MIN;
	uint64_t x223 = 139479369141238LLU;
	static uint64_t t48 = 5951803724LLU;

	t48 = (x221-(x222*(x223/x224)));

	if (t48 != 12448762080943669250LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x225 = -1LL;
	int8_t x226 = -1;
	int32_t x227 = INT32_MAX;
	static int32_t x228 = INT32_MIN;
	static int64_t t49 = -23670804582LL;

	t49 = (x225-(x226*(x227/x228)));

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x233 = INT64_MIN;
	int16_t x234 = -1918;
	volatile int32_t x235 = -1;
	uint8_t x236 = 10U;
	static int64_t t50 = INT64_MIN;

	t50 = (x233-(x234*(x235/x236)));

	if (t50 != INT64_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x239 = -1;
	static volatile int8_t x240 = INT8_MIN;
	int64_t t51 = 1849LL;

	t51 = (x237-(x238*(x239/x240)));

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x241 = 7367U;
	static int16_t x242 = -2832;
	volatile int16_t x243 = INT16_MAX;
	uint64_t x244 = 56928842651LLU;
	static uint64_t t52 = 37819LLU;

	t52 = (x241-(x242*(x243/x244)));

	if (t52 != 7367LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x245 = INT16_MIN;
	int8_t x247 = INT8_MAX;
	uint16_t x248 = 28U;
	static volatile uint32_t t53 = 92136U;

	t53 = (x245-(x246*(x247/x248)));

	if (t53 != 2983525456U) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x250 = INT8_MIN;
	int8_t x252 = -3;
	int32_t t54 = -74193681;

	t54 = (x249-(x250*(x251/x252)));

	if (t54 != 1397888) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x253 = INT8_MIN;
	static int32_t x256 = INT32_MIN;

	t55 = (x253-(x254*(x255/x256)));

	if (t55 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x258 = 0;
	int8_t x259 = 1;
	int8_t x260 = INT8_MAX;
	volatile uint32_t t56 = UINT32_MAX;

	t56 = (x257-(x258*(x259/x260)));

	if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x265 = 8673U;
	int16_t x266 = -1;
	uint8_t x267 = 0U;
	int32_t x268 = 8323989;
	volatile int32_t t57 = -59;

	t57 = (x265-(x266*(x267/x268)));

	if (t57 != 8673) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x270 = 8695001LLU;
	int32_t x272 = -19339815;

	t58 = (x269-(x270*(x271/x272)));

	if (t58 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x274 = INT32_MIN;
	uint16_t x276 = 13070U;
	static volatile int32_t t59 = 58467908;

	t59 = (x273-(x274*(x275/x276)));

	if (t59 != 32767) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x278 = INT16_MIN;
	int64_t x279 = -437689LL;
	volatile int32_t x280 = INT32_MAX;

	t60 = (x277-(x278*(x279/x280)));

	if (t60 != -32768LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x281 = 457U;
	static volatile uint32_t x282 = UINT32_MAX;
	volatile int32_t x283 = -1;
	volatile uint16_t x284 = UINT16_MAX;
	volatile uint32_t t61 = 6421U;

	t61 = (x281-(x282*(x283/x284)));

	if (t61 != 457U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x289 = -1;
	uint16_t x290 = UINT16_MAX;
	uint16_t x292 = UINT16_MAX;
	uint64_t t62 = 8739425363266LLU;

	t62 = (x289-(x290*(x291/x292)));

	if (t62 != 18446693086936659675LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x293 = -252;
	volatile uint64_t x294 = UINT64_MAX;
	uint8_t x295 = UINT8_MAX;
	volatile uint8_t x296 = UINT8_MAX;
	volatile uint64_t t63 = 5920555596445LLU;

	t63 = (x293-(x294*(x295/x296)));

	if (t63 != 18446744073709551365LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x297 = INT64_MIN;
	int32_t x299 = 16701360;
	static uint64_t x300 = 501LLU;
	volatile uint64_t t64 = 541668768LLU;

	t64 = (x297-(x298*(x299/x300)));

	if (t64 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x301 = 11220;
	uint64_t x302 = UINT64_MAX;
	int32_t x304 = -152664;
	volatile uint64_t t65 = 8948274481513632LLU;

	t65 = (x301-(x302*(x303/x304)));

	if (t65 != 11220LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x305 = INT16_MIN;
	volatile int8_t x308 = INT8_MIN;
	volatile int64_t t66 = -45684275844683LL;

	t66 = (x305-(x306*(x307/x308)));

	if (t66 != -32768LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x309 = UINT64_MAX;
	int8_t x311 = INT8_MAX;
	int16_t x312 = INT16_MAX;
	volatile uint64_t t67 = UINT64_MAX;

	t67 = (x309-(x310*(x311/x312)));

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x313 = 12606713124194LLU;
	uint32_t x314 = UINT32_MAX;
	uint64_t x315 = UINT64_MAX;
	uint32_t x316 = UINT32_MAX;
	uint64_t t68 = 9464941LLU;

	t68 = (x313-(x314*(x315/x316)));

	if (t68 != 12606713124195LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x317 = -1;
	volatile int8_t x319 = INT8_MIN;
	int16_t x320 = INT16_MAX;
	int32_t t69 = -845;

	t69 = (x317-(x318*(x319/x320)));

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x321 = 425476166U;
	uint16_t x322 = UINT16_MAX;
	uint8_t x323 = UINT8_MAX;
	volatile int8_t x324 = INT8_MAX;
	uint32_t t70 = 5917216U;

	t70 = (x321-(x322*(x323/x324)));

	if (t70 != 425345096U) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x329 = UINT64_MAX;
	int32_t x330 = -15685015;
	uint32_t x331 = 4025U;
	uint64_t x332 = 68105151996928429LLU;
	uint64_t t71 = UINT64_MAX;

	t71 = (x329-(x330*(x331/x332)));

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x333 = 0;
	int32_t x334 = -52259300;
	int32_t t72 = 15542;

	t72 = (x333-(x334*(x335/x336)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x349 = INT64_MIN;
	static int32_t x352 = INT32_MAX;
	volatile uint64_t t73 = 5LLU;

	t73 = (x349-(x350*(x351/x352)));

	if (t73 != 9223372045444710400LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x353 = 7591U;
	uint32_t x355 = 1002920162U;
	int8_t x356 = INT8_MIN;
	volatile uint32_t t74 = 9U;

	t74 = (x353-(x354*(x355/x356)));

	if (t74 != 7591U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x357 = 52U;
	volatile int16_t x358 = INT16_MIN;

	t75 = (x357-(x358*(x359/x360)));

	if (t75 != 94844583988LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x361 = INT32_MIN;
	volatile uint32_t x362 = UINT32_MAX;
	int8_t x363 = -6;
	int32_t x364 = -1;

	t76 = (x361-(x362*(x363/x364)));

	if (t76 != 2147483654U) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x365 = UINT32_MAX;
	volatile uint32_t x366 = 32232U;
	int16_t x367 = INT16_MAX;
	volatile int32_t x368 = INT32_MAX;

	t77 = (x365-(x366*(x367/x368)));

	if (t77 != UINT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x369 = -1;
	int64_t x370 = 6263311737LL;
	uint8_t x372 = 57U;

	t78 = (x369-(x370*(x371/x372)));

	if (t78 != -1283978906086LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x373 = 295458767741108LL;
	int16_t x375 = -1;
	volatile int8_t x376 = INT8_MIN;

	t79 = (x373-(x374*(x375/x376)));

	if (t79 != 295458767741108LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x377 = 126048651LL;
	int8_t x378 = 1;
	int8_t x379 = 1;
	int64_t x380 = -1LL;
	static volatile int64_t t80 = -37LL;

	t80 = (x377-(x378*(x379/x380)));

	if (t80 != 126048652LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x385 = -1LL;
	int16_t x386 = -13;
	uint8_t x387 = 2U;
	volatile int32_t x388 = -1;
	static int64_t t81 = 2625560082527760LL;

	t81 = (x385-(x386*(x387/x388)));

	if (t81 != -27LL) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint64_t x389 = 5999562917572LLU;
	uint8_t x391 = 15U;
	int64_t x392 = 2729LL;
	uint64_t t82 = 9614481279LLU;

	t82 = (x389-(x390*(x391/x392)));

	if (t82 != 5999562917572LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int64_t x393 = 137428953065LL;
	static int8_t x394 = 25;
	uint16_t x395 = 0U;
	static int8_t x396 = -1;

	t83 = (x393-(x394*(x395/x396)));

	if (t83 != 137428953065LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x398 = 3;
	int8_t x399 = INT8_MAX;
	volatile int32_t t84 = 98692;

	t84 = (x397-(x398*(x399/x400)));

	if (t84 != 65535) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x401 = 542U;
	uint64_t x402 = 295LLU;
	static volatile int16_t x403 = 1;
	uint16_t x404 = 47U;
	volatile uint64_t t85 = 26723LLU;

	t85 = (x401-(x402*(x403/x404)));

	if (t85 != 542LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x406 = UINT64_MAX;
	uint16_t x407 = UINT16_MAX;
	uint64_t t86 = 2830LLU;

	t86 = (x405-(x406*(x407/x408)));

	if (t86 != 2147483648LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x409 = INT8_MIN;
	uint8_t x410 = 60U;
	int32_t t87 = -12;

	t87 = (x409-(x410*(x411/x412)));

	if (t87 != -128) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x417 = INT16_MAX;
	int8_t x418 = -1;
	uint8_t x419 = 30U;
	uint16_t x420 = 3U;
	int32_t t88 = -853182093;

	t88 = (x417-(x418*(x419/x420)));

	if (t88 != 32777) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x421 = -1LL;
	uint8_t x423 = 5U;
	volatile int64_t t89 = -17458536269369LL;

	t89 = (x421-(x422*(x423/x424)));

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x429 = -1;
	uint32_t x430 = 511U;
	static int8_t x431 = 20;
	int16_t x432 = INT16_MIN;
	uint32_t t90 = UINT32_MAX;

	t90 = (x429-(x430*(x431/x432)));

	if (t90 != UINT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int16_t x433 = INT16_MIN;
	int16_t x434 = 3413;
	static int64_t x436 = -1LL;
	volatile int64_t t91 = -8204582111932707LL;

	t91 = (x433-(x434*(x435/x436)));

	if (t91 != -36181LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x441 = -28440;
	uint8_t x442 = 0U;
	int16_t x443 = 0;
	uint64_t x444 = 69LLU;
	static volatile uint64_t t92 = 1133925859519LLU;

	t92 = (x441-(x442*(x443/x444)));

	if (t92 != 18446744073709523176LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x445 = 84268U;
	uint8_t x446 = 31U;
	int32_t x447 = INT32_MIN;
	int64_t x448 = 38673218659LL;
	int64_t t93 = -651754613601920LL;

	t93 = (x445-(x446*(x447/x448)));

	if (t93 != 84268LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x449 = 5109U;
	volatile int32_t x451 = 2235;

	t94 = (x449-(x450*(x451/x452)));

	if (t94 != 5111U) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x454 = -1LL;
	volatile int16_t x455 = 6987;
	uint8_t x456 = 14U;
	static volatile int64_t t95 = 849785724LL;

	t95 = (x453-(x454*(x455/x456)));

	if (t95 != 5295LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x457 = 4644861581LL;
	volatile uint64_t x458 = 53216057216071LLU;
	uint64_t x459 = UINT64_MAX;
	static int16_t x460 = INT16_MAX;

	t96 = (x457-(x458*(x459/x460)));

	if (t96 != 10627693582785851933LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x461 = 94255082LL;
	uint64_t x462 = UINT64_MAX;
	static int32_t x463 = INT32_MIN;
	volatile int32_t x464 = INT32_MIN;
	uint64_t t97 = 125692LLU;

	t97 = (x461-(x462*(x463/x464)));

	if (t97 != 94255083LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int8_t x466 = INT8_MIN;
	volatile int32_t x467 = 10378;
	static volatile int64_t x468 = INT64_MAX;
	int64_t t98 = -1LL;

	t98 = (x465-(x466*(x467/x468)));

	if (t98 != 25LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x469 = INT16_MAX;

	t99 = (x469-(x470*(x471/x472)));

	if (t99 != 32767) { NG(); } else { ; }
	
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

