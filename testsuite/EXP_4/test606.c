#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x1 = 217837U;
int32_t x8 = INT32_MIN;
int16_t x16 = INT16_MIN;
static volatile int32_t t4 = -1;
int32_t t7 = 26488;
volatile uint16_t x34 = UINT16_MAX;
uint64_t x46 = 17350LLU;
volatile int8_t x51 = INT8_MIN;
static int64_t x52 = INT64_MIN;
static int16_t x55 = -1;
static uint64_t x60 = UINT64_MAX;
int32_t t14 = -230264142;
uint16_t x62 = 984U;
volatile int8_t x64 = -1;
int16_t x69 = INT16_MIN;
volatile int64_t x70 = INT64_MIN;
int32_t t16 = 3;
uint64_t x74 = 2972LLU;
uint64_t x76 = UINT64_MAX;
volatile uint32_t x79 = 53U;
int16_t x83 = -3938;
int32_t t20 = 4009;
int32_t x89 = INT32_MIN;
static uint16_t x91 = UINT16_MAX;
int16_t x96 = INT16_MIN;
volatile uint64_t x97 = 21LLU;
uint16_t x98 = 74U;
static int8_t x100 = INT8_MAX;
int32_t t24 = 1660;
uint8_t x120 = 1U;
int32_t t27 = 207152;
static int8_t x121 = INT8_MIN;
int64_t x122 = -3175620957069LL;
int32_t x124 = INT32_MAX;
int32_t t28 = 94885087;
uint16_t x126 = UINT16_MAX;
static int16_t x139 = -34;
volatile int32_t t31 = 9;
int64_t x142 = INT64_MIN;
volatile int8_t x144 = INT8_MIN;
uint64_t x146 = 32068814738LLU;
static int32_t t34 = -1;
volatile int8_t x153 = -1;
uint16_t x154 = 18728U;
uint32_t x156 = 3528386U;
static int8_t x167 = INT8_MIN;
volatile int32_t t38 = -1;
int32_t t39 = -1393;
static int8_t x175 = INT8_MAX;
uint8_t x180 = 1U;
volatile int32_t t41 = -3507;
static uint16_t x181 = 13345U;
int16_t x182 = -14173;
int32_t x185 = INT32_MAX;
int32_t t43 = -256205368;
int8_t x195 = INT8_MIN;
static int32_t x199 = INT32_MIN;
static int16_t x201 = 0;
int64_t x205 = INT64_MIN;
int32_t x208 = INT32_MIN;
volatile int32_t t48 = 569;
uint64_t x215 = UINT64_MAX;
static volatile int32_t x230 = -44;
int64_t x245 = INT64_MIN;
static volatile int8_t x252 = -23;
static uint64_t x253 = 925723025836LLU;
int32_t t59 = 7;
int64_t x268 = -1LL;
uint32_t x269 = 3474049U;
static int32_t x281 = 184770;
int16_t x284 = INT16_MIN;
int32_t x288 = 1;
int64_t x290 = -88501212575LL;
int64_t x292 = -4042LL;
int32_t t67 = 55843;
uint32_t x294 = 21146U;
volatile int32_t t68 = 4;
static int32_t t72 = 250995;
int16_t x313 = -1;
int16_t x320 = INT16_MAX;
int16_t x333 = -1;
volatile int32_t t80 = 250;
static int32_t x350 = -30;
int32_t x352 = -1;
int8_t x355 = INT8_MAX;
static int32_t t83 = 916109835;
volatile int16_t x364 = INT16_MAX;
int32_t t86 = -86;
uint64_t x369 = UINT64_MAX;
int32_t t87 = -73;
int64_t x374 = INT64_MAX;
volatile int16_t x380 = -1;
volatile uint64_t x381 = 4378LLU;
int64_t x383 = INT64_MIN;
volatile uint8_t x384 = 3U;
volatile int8_t x386 = 3;
int16_t x393 = INT16_MIN;
volatile int32_t t93 = -261768;
int32_t t95 = -11;
int16_t x405 = 109;
int32_t x409 = INT32_MIN;
volatile int32_t t97 = -15506557;
volatile int8_t x414 = -3;
int64_t x415 = INT64_MIN;


void f0(void) {
	static volatile int16_t x2 = -1;
	int32_t x3 = INT32_MIN;
	static int32_t x4 = INT32_MIN;
	int32_t t0 = -10073;

	t0 = (x1==(x2==(x3/x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int8_t x6 = -1;
	uint32_t x7 = 11U;
	static int32_t t1 = 6;

	t1 = (x5==(x6==(x7/x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = INT16_MIN;
	volatile int64_t x10 = 934150LL;
	static int32_t x11 = INT32_MIN;
	static int8_t x12 = 11;
	int32_t t2 = 434504048;

	t2 = (x9==(x10==(x11/x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 2U;
	int64_t x14 = INT64_MIN;
	uint64_t x15 = 961837098736195689LLU;
	int32_t t3 = -8280878;

	t3 = (x13==(x14==(x15/x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = 1;
	int64_t x18 = -51794595802074LL;
	static uint16_t x19 = UINT16_MAX;
	uint8_t x20 = UINT8_MAX;

	t4 = (x17==(x18==(x19/x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = UINT32_MAX;
	int8_t x22 = INT8_MAX;
	volatile int64_t x23 = INT64_MIN;
	static volatile uint64_t x24 = 8056169447409828LLU;
	int32_t t5 = 43062;

	t5 = (x21==(x22==(x23/x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x25 = -19;
	volatile int32_t x26 = 2;
	static int16_t x27 = -1;
	static uint8_t x28 = 7U;
	int32_t t6 = -23;

	t6 = (x25==(x26==(x27/x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 11U;
	static uint16_t x30 = 32U;
	int8_t x31 = INT8_MIN;
	static volatile int64_t x32 = INT64_MIN;

	t7 = (x29==(x30==(x31/x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x33 = 23391U;
	uint16_t x35 = 0U;
	int32_t x36 = -1;
	int32_t t8 = 88;

	t8 = (x33==(x34==(x35/x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = 5LL;
	int8_t x38 = 1;
	volatile int8_t x39 = 52;
	int8_t x40 = INT8_MIN;
	volatile int32_t t9 = 6653;

	t9 = (x37==(x38==(x39/x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = UINT16_MAX;
	uint32_t x42 = 166726U;
	volatile int16_t x43 = INT16_MAX;
	volatile int32_t x44 = -1;
	int32_t t10 = 182408;

	t10 = (x41==(x42==(x43/x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x45 = 1770903LLU;
	int16_t x47 = -1;
	int16_t x48 = INT16_MIN;
	volatile int32_t t11 = 1452;

	t11 = (x45==(x46==(x47/x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x49 = UINT16_MAX;
	static int8_t x50 = INT8_MIN;
	int32_t t12 = -92454899;

	t12 = (x49==(x50==(x51/x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MIN;
	int16_t x54 = INT16_MAX;
	uint16_t x56 = 27368U;
	volatile int32_t t13 = 510146014;

	t13 = (x53==(x54==(x55/x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x57 = -16682507;
	int16_t x58 = INT16_MIN;
	int8_t x59 = -1;

	t14 = (x57==(x58==(x59/x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = UINT32_MAX;
	uint64_t x63 = UINT64_MAX;
	int32_t t15 = 6;

	t15 = (x61==(x62==(x63/x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x71 = UINT16_MAX;
	volatile int64_t x72 = -1LL;

	t16 = (x69==(x70==(x71/x72)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x73 = 3U;
	uint16_t x75 = UINT16_MAX;
	volatile int32_t t17 = -1903198;

	t17 = (x73==(x74==(x75/x76)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x77 = 2425U;
	volatile int16_t x78 = INT16_MAX;
	volatile int64_t x80 = INT64_MIN;
	int32_t t18 = -1;

	t18 = (x77==(x78==(x79/x80)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = INT16_MIN;
	static int16_t x82 = -47;
	int32_t x84 = -1;
	static int32_t t19 = 261099485;

	t19 = (x81==(x82==(x83/x84)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x85 = INT16_MAX;
	volatile int32_t x86 = INT32_MAX;
	uint64_t x87 = UINT64_MAX;
	static int64_t x88 = INT64_MIN;

	t20 = (x85==(x86==(x87/x88)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x90 = UINT32_MAX;
	volatile int16_t x92 = 1478;
	volatile int32_t t21 = 648;

	t21 = (x89==(x90==(x91/x92)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x93 = -9663;
	volatile int8_t x94 = INT8_MIN;
	static int64_t x95 = INT64_MAX;
	volatile int32_t t22 = -21220;

	t22 = (x93==(x94==(x95/x96)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x99 = -500;
	int32_t t23 = -264406;

	t23 = (x97==(x98==(x99/x100)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x101 = INT8_MIN;
	volatile uint32_t x102 = 2008772U;
	int64_t x103 = INT64_MIN;
	static uint64_t x104 = 1931LLU;

	t24 = (x101==(x102==(x103/x104)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x109 = -1039034LL;
	static int32_t x110 = -1302504;
	uint64_t x111 = 372LLU;
	int64_t x112 = INT64_MIN;
	volatile int32_t t25 = 12360319;

	t25 = (x109==(x110==(x111/x112)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x113 = INT8_MIN;
	static int32_t x114 = INT32_MIN;
	static uint16_t x115 = UINT16_MAX;
	int32_t x116 = INT32_MAX;
	static int32_t t26 = -4043836;

	t26 = (x113==(x114==(x115/x116)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x117 = INT8_MAX;
	int8_t x118 = INT8_MIN;
	uint16_t x119 = 3434U;

	t27 = (x117==(x118==(x119/x120)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x123 = 12U;

	t28 = (x121==(x122==(x123/x124)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x125 = INT16_MIN;
	static int16_t x127 = INT16_MIN;
	int16_t x128 = INT16_MAX;
	volatile int32_t t29 = 16587;

	t29 = (x125==(x126==(x127/x128)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x129 = INT8_MIN;
	uint64_t x130 = 2743441649520LLU;
	static int16_t x131 = INT16_MIN;
	uint32_t x132 = UINT32_MAX;
	volatile int32_t t30 = 127;

	t30 = (x129==(x130==(x131/x132)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x137 = INT8_MIN;
	int32_t x138 = INT32_MIN;
	volatile int16_t x140 = 7249;

	t31 = (x137==(x138==(x139/x140)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x141 = INT32_MIN;
	volatile uint32_t x143 = UINT32_MAX;
	int32_t t32 = -369;

	t32 = (x141==(x142==(x143/x144)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int8_t x145 = 39;
	int16_t x147 = 1933;
	static volatile uint16_t x148 = 4320U;
	volatile int32_t t33 = 113137925;

	t33 = (x145==(x146==(x147/x148)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x149 = INT16_MIN;
	uint16_t x150 = 299U;
	volatile int16_t x151 = INT16_MIN;
	uint64_t x152 = 773363LLU;

	t34 = (x149==(x150==(x151/x152)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x155 = INT16_MAX;
	volatile int32_t t35 = 5526244;

	t35 = (x153==(x154==(x155/x156)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x157 = 217LLU;
	uint8_t x158 = UINT8_MAX;
	int16_t x159 = -1;
	static uint32_t x160 = 86524143U;
	volatile int32_t t36 = -2855;

	t36 = (x157==(x158==(x159/x160)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x161 = 3722U;
	uint8_t x162 = UINT8_MAX;
	int64_t x163 = 2750323359687LL;
	int32_t x164 = 13;
	static int32_t t37 = 482987;

	t37 = (x161==(x162==(x163/x164)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x165 = INT32_MAX;
	uint8_t x166 = 1U;
	uint32_t x168 = UINT32_MAX;

	t38 = (x165==(x166==(x167/x168)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x169 = -3339;
	volatile int32_t x170 = INT32_MIN;
	int8_t x171 = INT8_MAX;
	int8_t x172 = INT8_MIN;

	t39 = (x169==(x170==(x171/x172)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x173 = INT64_MIN;
	static volatile int64_t x174 = INT64_MIN;
	int8_t x176 = -1;
	int32_t t40 = -1682;

	t40 = (x173==(x174==(x175/x176)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x177 = -134;
	volatile int8_t x178 = -1;
	uint64_t x179 = 15LLU;

	t41 = (x177==(x178==(x179/x180)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x183 = -1LL;
	volatile int16_t x184 = -1;
	volatile int32_t t42 = 1;

	t42 = (x181==(x182==(x183/x184)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x186 = -1LL;
	int32_t x187 = INT32_MIN;
	int32_t x188 = -229;

	t43 = (x185==(x186==(x187/x188)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x189 = INT64_MIN;
	static volatile int64_t x190 = 676234484766LL;
	int16_t x191 = INT16_MIN;
	int64_t x192 = INT64_MAX;
	int32_t t44 = 6207;

	t44 = (x189==(x190==(x191/x192)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x193 = -1941210566674LL;
	static int32_t x194 = INT32_MAX;
	int8_t x196 = -1;
	int32_t t45 = 6197760;

	t45 = (x193==(x194==(x195/x196)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x197 = INT8_MAX;
	uint64_t x198 = 444577LLU;
	int8_t x200 = INT8_MIN;
	int32_t t46 = -2573474;

	t46 = (x197==(x198==(x199/x200)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x202 = -1LL;
	volatile uint32_t x203 = UINT32_MAX;
	uint16_t x204 = UINT16_MAX;
	volatile int32_t t47 = -149054;

	t47 = (x201==(x202==(x203/x204)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x206 = -1LL;
	volatile int8_t x207 = -1;

	t48 = (x205==(x206==(x207/x208)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x209 = 2873U;
	static uint32_t x210 = 1957691727U;
	int8_t x211 = 1;
	int32_t x212 = INT32_MAX;
	static int32_t t49 = 1113626;

	t49 = (x209==(x210==(x211/x212)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x213 = INT32_MIN;
	uint64_t x214 = 89036772488125522LLU;
	int8_t x216 = INT8_MIN;
	int32_t t50 = 25716;

	t50 = (x213==(x214==(x215/x216)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x217 = 836037LLU;
	volatile int64_t x218 = -1LL;
	int16_t x219 = INT16_MIN;
	int64_t x220 = INT64_MIN;
	int32_t t51 = 40208569;

	t51 = (x217==(x218==(x219/x220)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x221 = -1LL;
	int8_t x222 = -1;
	uint16_t x223 = 319U;
	uint64_t x224 = UINT64_MAX;
	volatile int32_t t52 = 105962;

	t52 = (x221==(x222==(x223/x224)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x225 = -17;
	uint32_t x226 = UINT32_MAX;
	int8_t x227 = -1;
	static int64_t x228 = INT64_MAX;
	volatile int32_t t53 = 1;

	t53 = (x225==(x226==(x227/x228)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x229 = UINT32_MAX;
	int16_t x231 = INT16_MIN;
	volatile int32_t x232 = INT32_MIN;
	int32_t t54 = -4024930;

	t54 = (x229==(x230==(x231/x232)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x237 = UINT16_MAX;
	int16_t x238 = 2;
	volatile int64_t x239 = 60068919232LL;
	int16_t x240 = INT16_MIN;
	int32_t t55 = -1043221;

	t55 = (x237==(x238==(x239/x240)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x246 = -38;
	static uint64_t x247 = UINT64_MAX;
	static uint16_t x248 = UINT16_MAX;
	int32_t t56 = 260293329;

	t56 = (x245==(x246==(x247/x248)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x249 = 2715U;
	int32_t x250 = INT32_MAX;
	int32_t x251 = INT32_MIN;
	volatile int32_t t57 = -1351;

	t57 = (x249==(x250==(x251/x252)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x254 = -2404;
	static int8_t x255 = -2;
	uint8_t x256 = 1U;
	volatile int32_t t58 = -53696124;

	t58 = (x253==(x254==(x255/x256)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int32_t x257 = INT32_MIN;
	int8_t x258 = 57;
	uint8_t x259 = 41U;
	int32_t x260 = -1;

	t59 = (x257==(x258==(x259/x260)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x261 = -1LL;
	int32_t x262 = INT32_MIN;
	volatile int8_t x263 = 31;
	static int8_t x264 = INT8_MIN;
	volatile int32_t t60 = 22799712;

	t60 = (x261==(x262==(x263/x264)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x265 = 15492;
	int8_t x266 = INT8_MAX;
	uint16_t x267 = UINT16_MAX;
	static volatile int32_t t61 = 86;

	t61 = (x265==(x266==(x267/x268)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x270 = INT8_MAX;
	static volatile int64_t x271 = INT64_MAX;
	volatile uint64_t x272 = 109219497968089860LLU;
	int32_t t62 = 249;

	t62 = (x269==(x270==(x271/x272)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint64_t x273 = UINT64_MAX;
	uint64_t x274 = UINT64_MAX;
	static int64_t x275 = INT64_MIN;
	int16_t x276 = INT16_MAX;
	int32_t t63 = -30;

	t63 = (x273==(x274==(x275/x276)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x277 = -1;
	int32_t x278 = -1228;
	int8_t x279 = 3;
	int8_t x280 = INT8_MIN;
	int32_t t64 = -993;

	t64 = (x277==(x278==(x279/x280)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x282 = 1U;
	uint32_t x283 = UINT32_MAX;
	static int32_t t65 = 269433;

	t65 = (x281==(x282==(x283/x284)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x285 = -1;
	uint32_t x286 = UINT32_MAX;
	int8_t x287 = INT8_MIN;
	int32_t t66 = 1;

	t66 = (x285==(x286==(x287/x288)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x289 = -10459LL;
	static volatile uint8_t x291 = 30U;

	t67 = (x289==(x290==(x291/x292)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x293 = 4;
	int32_t x295 = INT32_MAX;
	int64_t x296 = INT64_MIN;

	t68 = (x293==(x294==(x295/x296)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x297 = 21892;
	uint64_t x298 = UINT64_MAX;
	int32_t x299 = INT32_MAX;
	int16_t x300 = INT16_MIN;
	volatile int32_t t69 = 865020448;

	t69 = (x297==(x298==(x299/x300)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x301 = INT64_MAX;
	static volatile uint16_t x302 = 6U;
	static volatile uint64_t x303 = 6438758104226319LLU;
	uint32_t x304 = 130095U;
	volatile int32_t t70 = 1;

	t70 = (x301==(x302==(x303/x304)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x305 = UINT64_MAX;
	uint64_t x306 = 786564993LLU;
	static uint64_t x307 = 123LLU;
	static int32_t x308 = -1;
	int32_t t71 = -3;

	t71 = (x305==(x306==(x307/x308)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x309 = INT32_MIN;
	static uint32_t x310 = UINT32_MAX;
	int8_t x311 = -2;
	int8_t x312 = -1;

	t72 = (x309==(x310==(x311/x312)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x314 = INT16_MIN;
	int16_t x315 = -1;
	int8_t x316 = -1;
	volatile int32_t t73 = -1182;

	t73 = (x313==(x314==(x315/x316)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x317 = INT8_MAX;
	int16_t x318 = INT16_MIN;
	int16_t x319 = -112;
	volatile int32_t t74 = -23731;

	t74 = (x317==(x318==(x319/x320)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x321 = 16122207681LLU;
	static uint16_t x322 = 3104U;
	uint64_t x323 = 60897270393504LLU;
	int16_t x324 = 2;
	volatile int32_t t75 = 194;

	t75 = (x321==(x322==(x323/x324)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x325 = INT32_MAX;
	uint64_t x326 = 5414115LLU;
	static uint16_t x327 = UINT16_MAX;
	int8_t x328 = INT8_MAX;
	int32_t t76 = 32526331;

	t76 = (x325==(x326==(x327/x328)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x329 = 9;
	static int16_t x330 = 7;
	int64_t x331 = 20620299181880LL;
	uint64_t x332 = UINT64_MAX;
	volatile int32_t t77 = -260789;

	t77 = (x329==(x330==(x331/x332)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x334 = UINT32_MAX;
	int32_t x335 = 164020690;
	volatile int64_t x336 = INT64_MAX;
	volatile int32_t t78 = -12;

	t78 = (x333==(x334==(x335/x336)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x337 = UINT32_MAX;
	uint64_t x338 = UINT64_MAX;
	static volatile int64_t x339 = INT64_MAX;
	static int64_t x340 = INT64_MAX;
	static volatile int32_t t79 = 21;

	t79 = (x337==(x338==(x339/x340)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x341 = INT64_MAX;
	int32_t x342 = -125064;
	volatile int8_t x343 = -3;
	int16_t x344 = INT16_MAX;

	t80 = (x341==(x342==(x343/x344)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x345 = -11;
	volatile int8_t x346 = INT8_MIN;
	int16_t x347 = 9;
	int64_t x348 = -89494676526159439LL;
	int32_t t81 = 5757777;

	t81 = (x345==(x346==(x347/x348)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x349 = -1;
	uint16_t x351 = UINT16_MAX;
	volatile int32_t t82 = -3721;

	t82 = (x349==(x350==(x351/x352)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x353 = UINT16_MAX;
	uint64_t x354 = 352223LLU;
	int64_t x356 = -1185897162114469324LL;

	t83 = (x353==(x354==(x355/x356)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x357 = UINT64_MAX;
	static int8_t x358 = INT8_MIN;
	static int16_t x359 = INT16_MIN;
	static volatile int32_t x360 = 15;
	static int32_t t84 = 33516;

	t84 = (x357==(x358==(x359/x360)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x361 = 147U;
	volatile int32_t x362 = -303542;
	uint16_t x363 = 8783U;
	int32_t t85 = 29854278;

	t85 = (x361==(x362==(x363/x364)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x365 = -1;
	int8_t x366 = INT8_MIN;
	int32_t x367 = INT32_MIN;
	int32_t x368 = INT32_MIN;

	t86 = (x365==(x366==(x367/x368)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x370 = 0U;
	volatile uint16_t x371 = 7142U;
	static int8_t x372 = 32;

	t87 = (x369==(x370==(x371/x372)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x373 = 796;
	static int32_t x375 = INT32_MIN;
	int64_t x376 = INT64_MIN;
	volatile int32_t t88 = 31537;

	t88 = (x373==(x374==(x375/x376)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x377 = INT16_MIN;
	static int64_t x378 = INT64_MIN;
	uint32_t x379 = 1U;
	static volatile int32_t t89 = 7872;

	t89 = (x377==(x378==(x379/x380)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x382 = INT16_MAX;
	int32_t t90 = 25130;

	t90 = (x381==(x382==(x383/x384)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x385 = -1LL;
	int16_t x387 = INT16_MIN;
	volatile int8_t x388 = 6;
	static int32_t t91 = 0;

	t91 = (x385==(x386==(x387/x388)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x389 = 46576LLU;
	uint8_t x390 = 1U;
	uint16_t x391 = 373U;
	uint32_t x392 = UINT32_MAX;
	volatile int32_t t92 = -1644;

	t92 = (x389==(x390==(x391/x392)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x394 = 14U;
	uint8_t x395 = 2U;
	uint16_t x396 = 10U;

	t93 = (x393==(x394==(x395/x396)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x397 = INT32_MAX;
	volatile int32_t x398 = 17669;
	volatile int32_t x399 = INT32_MAX;
	int32_t x400 = -93437592;
	volatile int32_t t94 = 118959;

	t94 = (x397==(x398==(x399/x400)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x401 = INT8_MIN;
	int8_t x402 = INT8_MAX;
	int16_t x403 = INT16_MIN;
	int8_t x404 = INT8_MIN;

	t95 = (x401==(x402==(x403/x404)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x406 = 0U;
	uint64_t x407 = UINT64_MAX;
	int8_t x408 = INT8_MIN;
	volatile int32_t t96 = 70;

	t96 = (x405==(x406==(x407/x408)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x410 = -1LL;
	static uint16_t x411 = 27202U;
	uint64_t x412 = 1LLU;

	t97 = (x409==(x410==(x411/x412)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x413 = -3459;
	volatile int8_t x416 = INT8_MIN;
	volatile int32_t t98 = -16160360;

	t98 = (x413==(x414==(x415/x416)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x417 = 0U;
	int64_t x418 = -1LL;
	int64_t x419 = -999580367173LL;
	static volatile int8_t x420 = INT8_MIN;
	volatile int32_t t99 = 218194328;

	t99 = (x417==(x418==(x419/x420)));

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

