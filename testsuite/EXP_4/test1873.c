#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x6 = UINT32_MAX;
uint16_t x8 = 34U;
static int64_t x15 = -1LL;
static volatile int64_t t3 = 425390426LL;
int64_t x32 = -3434711567829LL;
int8_t x36 = -1;
uint32_t t5 = 24815332U;
int64_t t9 = 18139603535673556LL;
int32_t t10 = 86455669;
static volatile uint8_t x60 = 0U;
volatile uint64_t t11 = 1068949LLU;
volatile int32_t x65 = -7;
static volatile int8_t x73 = -1;
int32_t x80 = INT32_MIN;
static uint16_t x88 = 14038U;
int16_t x89 = INT16_MIN;
static uint8_t x93 = UINT8_MAX;
int16_t x94 = INT16_MIN;
int64_t x97 = 24105976LL;
int64_t t19 = -280538332703164LL;
volatile uint32_t t20 = 4U;
static volatile int8_t x124 = -1;
volatile int32_t t22 = 70;
uint64_t t23 = 6253042760LLU;
uint32_t t26 = 86249U;
static int64_t x145 = 3335931599LL;
int16_t x148 = INT16_MIN;
volatile int64_t t27 = -66605760454909133LL;
uint16_t x155 = 163U;
int16_t x163 = -109;
int32_t x166 = INT32_MIN;
int64_t x172 = -1LL;
static int64_t x173 = 39LL;
static int32_t x176 = INT32_MIN;
int32_t x180 = INT32_MIN;
int32_t t34 = 1962863;
int32_t x182 = -1;
volatile int32_t x187 = -951;
volatile uint32_t x188 = 9333U;
int16_t x191 = INT16_MAX;
int16_t x196 = -1;
int32_t x207 = INT32_MIN;
int32_t x208 = -10071;
volatile int64_t t40 = 3930LL;
int64_t x216 = INT64_MIN;
int64_t x228 = INT64_MIN;
int8_t x241 = -1;
int8_t x253 = INT8_MIN;
volatile uint64_t t52 = 203693032898213757LLU;
volatile uint32_t t54 = 76U;
int64_t t55 = -19958887LL;
volatile int32_t x274 = -2306950;
static volatile int32_t x277 = 27394222;
int32_t x284 = -573;
int64_t x285 = 7303973177LL;
int8_t x290 = -1;
volatile uint8_t x293 = 2U;
int32_t x296 = 78;
static int8_t x300 = -1;
volatile int16_t x301 = -53;
int64_t x302 = -625308842LL;
int16_t x303 = INT16_MIN;
static int8_t x314 = INT8_MAX;
int64_t x317 = -1LL;
int8_t x321 = -1;
static int16_t x323 = 956;
int16_t x324 = -1;
static int8_t x332 = INT8_MIN;
static int8_t x335 = -5;
uint32_t x337 = 400U;
int16_t x342 = 1381;
static int8_t x356 = INT8_MAX;
static volatile int64_t t82 = -39LL;
volatile int16_t x397 = -1;
int64_t x411 = INT64_MIN;
int16_t x422 = 8579;
int32_t x423 = -10045;
uint16_t x424 = 1U;
uint8_t x426 = UINT8_MAX;
int8_t x431 = INT8_MAX;
static int16_t x438 = 4717;
volatile uint64_t t94 = 38LLU;
static uint32_t x448 = UINT32_MAX;
int8_t x452 = INT8_MAX;
int64_t x457 = -1LL;
int64_t x459 = INT64_MIN;
int8_t x462 = -1;
volatile int16_t x463 = -8;
static int64_t x464 = INT64_MIN;


void f0(void) {
	uint64_t x5 = UINT64_MAX;
	int32_t x7 = INT32_MAX;
	uint64_t t0 = 132546911217LLU;

	t0 = (x5+(x6-(x7|x8)));

	if (t0 != 2147483647LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x9 = INT32_MIN;
	int32_t x10 = INT32_MIN;
	static uint64_t x11 = UINT64_MAX;
	static int16_t x12 = -3;
	static volatile uint64_t t1 = 4538476718835421LLU;

	t1 = (x9+(x10-(x11|x12)));

	if (t1 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x13 = -59;
	int16_t x14 = INT16_MAX;
	static volatile int8_t x16 = INT8_MIN;
	volatile int64_t t2 = 2160388LL;

	t2 = (x13+(x14-(x15|x16)));

	if (t2 != 32709LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = -1;
	static int8_t x18 = INT8_MIN;
	volatile int8_t x19 = INT8_MIN;
	volatile int64_t x20 = 119897922816LL;

	t3 = (x17+(x18-(x19|x20)));

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x29 = -1;
	uint8_t x30 = 5U;
	int32_t x31 = INT32_MIN;
	static int64_t t4 = 17141570067LL;

	t4 = (x29+(x30-(x31|x32)));

	if (t4 != 885214681LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x33 = 16U;
	volatile int16_t x34 = INT16_MIN;
	uint32_t x35 = UINT32_MAX;

	t5 = (x33+(x34-(x35|x36)));

	if (t5 != 4294934545U) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x37 = UINT64_MAX;
	volatile uint64_t x38 = UINT64_MAX;
	volatile uint64_t x39 = UINT64_MAX;
	volatile int64_t x40 = INT64_MIN;
	uint64_t t6 = UINT64_MAX;

	t6 = (x37+(x38-(x39|x40)));

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x41 = UINT8_MAX;
	int32_t x42 = INT32_MAX;
	volatile uint16_t x43 = 40U;
	volatile uint32_t x44 = UINT32_MAX;
	volatile uint32_t t7 = 26703786U;

	t7 = (x41+(x42-(x43|x44)));

	if (t7 != 2147483903U) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x45 = 131922761U;
	static uint16_t x46 = 32157U;
	static uint8_t x47 = UINT8_MAX;
	static int16_t x48 = -2;
	static volatile uint32_t t8 = 967U;

	t8 = (x45+(x46-(x47|x48)));

	if (t8 != 131954919U) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x49 = 5026LL;
	int64_t x50 = -1LL;
	uint8_t x51 = UINT8_MAX;
	static uint32_t x52 = UINT32_MAX;

	t9 = (x49+(x50-(x51|x52)));

	if (t9 != -4294962270LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x53 = -31;
	int32_t x54 = -2995626;
	int32_t x55 = -1;
	static int32_t x56 = INT32_MIN;

	t10 = (x53+(x54-(x55|x56)));

	if (t10 != -2995656) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x57 = UINT64_MAX;
	uint8_t x58 = 2U;
	int8_t x59 = 21;

	t11 = (x57+(x58-(x59|x60)));

	if (t11 != 18446744073709551596LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x66 = -1;
	volatile uint8_t x67 = 5U;
	static volatile uint8_t x68 = 2U;
	int32_t t12 = -13;

	t12 = (x65+(x66-(x67|x68)));

	if (t12 != -15) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x74 = INT8_MAX;
	volatile uint8_t x75 = 45U;
	int32_t x76 = -1;
	volatile int32_t t13 = -196551372;

	t13 = (x73+(x74-(x75|x76)));

	if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x77 = 21190950029495LL;
	int64_t x78 = INT64_MIN;
	int8_t x79 = INT8_MAX;
	static volatile int64_t t14 = 6011LL;

	t14 = (x77+(x78-(x79|x80)));

	if (t14 != -9223350843757262792LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x85 = -27693;
	static uint16_t x86 = UINT16_MAX;
	uint8_t x87 = 0U;
	volatile int32_t t15 = 606124452;

	t15 = (x85+(x86-(x87|x88)));

	if (t15 != 23804) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x90 = UINT16_MAX;
	uint8_t x91 = 4U;
	uint8_t x92 = 29U;
	volatile int32_t t16 = -14;

	t16 = (x89+(x90-(x91|x92)));

	if (t16 != 32738) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x95 = 46419678695477LLU;
	volatile int16_t x96 = INT16_MIN;
	volatile uint64_t t17 = 14057LLU;

	t17 = (x93+(x94-(x95|x96)));

	if (t17 != 18446744073709547722LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x98 = 4088;
	static uint16_t x99 = UINT16_MAX;
	int32_t x100 = INT32_MAX;
	int64_t t18 = 2046180886868912568LL;

	t18 = (x97+(x98-(x99|x100)));

	if (t18 != -2123373583LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x101 = INT64_MAX;
	uint16_t x102 = 846U;
	volatile uint16_t x103 = UINT16_MAX;
	volatile int32_t x104 = INT32_MAX;

	t19 = (x101+(x102-(x103|x104)));

	if (t19 != 9223372034707293006LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x109 = INT16_MAX;
	volatile int32_t x110 = -40;
	static uint32_t x111 = 58998126U;
	int32_t x112 = 6;

	t20 = (x109+(x110-(x111|x112)));

	if (t20 != 4236001897U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x121 = -103;
	volatile uint32_t x122 = 14698U;
	int8_t x123 = 6;
	uint32_t t21 = 1510U;

	t21 = (x121+(x122-(x123|x124)));

	if (t21 != 14596U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x125 = 399;
	int8_t x126 = INT8_MIN;
	int16_t x127 = -1;
	uint16_t x128 = UINT16_MAX;

	t22 = (x125+(x126-(x127|x128)));

	if (t22 != 272) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x129 = 0;
	int64_t x130 = -79120488797LL;
	static int8_t x131 = INT8_MIN;
	uint64_t x132 = 34203087706812806LLU;

	t23 = (x129+(x130-(x131|x132)));

	if (t23 != 18446743994589062941LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x133 = 51;
	static int8_t x134 = -1;
	int32_t x135 = 1287021;
	int16_t x136 = -2908;
	int32_t t24 = -120325537;

	t24 = (x133+(x134-(x135|x136)));

	if (t24 != 2117) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x137 = -1;
	int16_t x138 = INT16_MIN;
	static int8_t x139 = 0;
	uint8_t x140 = 0U;
	volatile int32_t t25 = -1;

	t25 = (x137+(x138-(x139|x140)));

	if (t25 != -32769) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x141 = INT32_MIN;
	int32_t x142 = 171;
	static uint8_t x143 = 103U;
	static uint32_t x144 = 1359678743U;

	t26 = (x141+(x142-(x143|x144)));

	if (t26 != 787804980U) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x146 = INT32_MIN;
	volatile int8_t x147 = INT8_MIN;

	t27 = (x145+(x146-(x147|x148)));

	if (t27 != 1188448079LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x149 = 8891;
	static int8_t x150 = -13;
	static uint32_t x151 = UINT32_MAX;
	volatile int16_t x152 = -1;
	volatile uint32_t t28 = 359145U;

	t28 = (x149+(x150-(x151|x152)));

	if (t28 != 8879U) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x153 = 4U;
	volatile int64_t x154 = 7779320695046646LL;
	int64_t x156 = -54987819192993LL;
	int64_t t29 = -36LL;

	t29 = (x153+(x154-(x155|x156)));

	if (t29 != 7834308514239483LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x161 = INT64_MIN;
	int64_t x162 = 1LL;
	int32_t x164 = -706875;
	int64_t t30 = 0LL;

	t30 = (x161+(x162-(x163|x164)));

	if (t30 != -9223372036854775766LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x165 = INT64_MAX;
	static int64_t x167 = -5874150LL;
	volatile uint64_t x168 = UINT64_MAX;
	static volatile uint64_t t31 = 4581LLU;

	t31 = (x165+(x166-(x167|x168)));

	if (t31 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x169 = INT32_MIN;
	int16_t x170 = -1000;
	int8_t x171 = 10;
	volatile int64_t t32 = 160LL;

	t32 = (x169+(x170-(x171|x172)));

	if (t32 != -2147484647LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x174 = -7622830;
	volatile uint16_t x175 = UINT16_MAX;
	volatile int64_t t33 = -160558907LL;

	t33 = (x173+(x174-(x175|x176)));

	if (t33 != 2139795322LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int16_t x177 = -1;
	static int16_t x178 = INT16_MAX;
	volatile int8_t x179 = -1;

	t34 = (x177+(x178-(x179|x180)));

	if (t34 != 32767) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x181 = -1;
	int8_t x183 = INT8_MAX;
	int64_t x184 = -1LL;
	volatile int64_t t35 = 15748801310903LL;

	t35 = (x181+(x182-(x183|x184)));

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x185 = INT16_MAX;
	uint8_t x186 = UINT8_MAX;
	volatile uint32_t t36 = 1301097437U;

	t36 = (x185+(x186-(x187|x188)));

	if (t36 != 33921U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x189 = INT8_MIN;
	int8_t x190 = -1;
	uint16_t x192 = UINT16_MAX;
	int32_t t37 = 451;

	t37 = (x189+(x190-(x191|x192)));

	if (t37 != -65664) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x193 = -1;
	int8_t x194 = INT8_MIN;
	volatile int8_t x195 = -1;
	static volatile int32_t t38 = -112;

	t38 = (x193+(x194-(x195|x196)));

	if (t38 != -128) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x201 = 1;
	uint64_t x202 = UINT64_MAX;
	volatile int8_t x203 = INT8_MIN;
	volatile int8_t x204 = -7;
	uint64_t t39 = 1206183LLU;

	t39 = (x201+(x202-(x203|x204)));

	if (t39 != 7LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x205 = -97793594521LL;
	static int8_t x206 = INT8_MIN;

	t40 = (x205+(x206-(x207|x208)));

	if (t40 != -97793584578LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x209 = 4850LL;
	int16_t x210 = INT16_MIN;
	int8_t x211 = -1;
	int32_t x212 = INT32_MIN;
	static int64_t t41 = 420453915LL;

	t41 = (x209+(x210-(x211|x212)));

	if (t41 != -27917LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x213 = INT8_MIN;
	int16_t x214 = -1;
	int8_t x215 = INT8_MIN;
	int64_t t42 = 15194995402LL;

	t42 = (x213+(x214-(x215|x216)));

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x217 = INT64_MIN;
	uint64_t x218 = 184857079022LLU;
	static volatile int32_t x219 = INT32_MIN;
	int16_t x220 = INT16_MIN;
	uint64_t t43 = 7130557927889168150LLU;

	t43 = (x217+(x218-(x219|x220)));

	if (t43 != 9223372221711887598LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x221 = 1200949U;
	volatile uint64_t x222 = UINT64_MAX;
	uint8_t x223 = 3U;
	volatile int32_t x224 = INT32_MAX;
	static volatile uint64_t t44 = 1187830085LLU;

	t44 = (x221+(x222-(x223|x224)));

	if (t44 != 18446744071563268917LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x225 = INT64_MIN;
	volatile uint64_t x226 = 24447479613LLU;
	int16_t x227 = INT16_MIN;
	volatile uint64_t t45 = 881726673311LLU;

	t45 = (x225+(x226-(x227|x228)));

	if (t45 != 9223372061302288189LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x229 = 2900U;
	int32_t x230 = 183852507;
	int32_t x231 = INT32_MAX;
	int8_t x232 = INT8_MAX;
	uint32_t t46 = 6864U;

	t46 = (x229+(x230-(x231|x232)));

	if (t46 != 2331339056U) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x233 = INT8_MAX;
	static volatile uint64_t x234 = 35537305889LLU;
	static uint64_t x235 = 152503055755561156LLU;
	int32_t x236 = INT32_MIN;
	uint64_t t47 = 81653809066LLU;

	t47 = (x233+(x234-(x235|x236)));

	if (t47 != 37123225820LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x237 = INT16_MAX;
	static int32_t x238 = -1;
	static uint64_t x239 = UINT64_MAX;
	int64_t x240 = -1LL;
	uint64_t t48 = 24951620149023731LLU;

	t48 = (x237+(x238-(x239|x240)));

	if (t48 != 32767LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x242 = 462884068843LLU;
	static int8_t x243 = 0;
	static int32_t x244 = 491;
	volatile uint64_t t49 = 248079417319615LLU;

	t49 = (x241+(x242-(x243|x244)));

	if (t49 != 462884068351LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x245 = UINT8_MAX;
	int64_t x246 = INT64_MAX;
	volatile int16_t x247 = INT16_MIN;
	uint32_t x248 = 1519U;
	volatile int64_t t50 = 3490LL;

	t50 = (x245+(x246-(x247|x248)));

	if (t50 != 9223372032559840015LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x249 = 41U;
	volatile uint16_t x250 = 3U;
	static int8_t x251 = INT8_MAX;
	int8_t x252 = INT8_MIN;
	volatile int32_t t51 = -315;

	t51 = (x249+(x250-(x251|x252)));

	if (t51 != 45) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x254 = INT8_MIN;
	uint64_t x255 = 88144503092684LLU;
	static uint16_t x256 = 4691U;

	t52 = (x253+(x254-(x255|x256)));

	if (t52 != 18446655929206458145LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x257 = 41;
	static int8_t x258 = -1;
	int64_t x259 = INT64_MIN;
	int16_t x260 = INT16_MAX;
	int64_t t53 = 524145336LL;

	t53 = (x257+(x258-(x259|x260)));

	if (t53 != 9223372036854743081LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x261 = UINT32_MAX;
	static volatile int16_t x262 = INT16_MAX;
	uint16_t x263 = 14U;
	int8_t x264 = INT8_MIN;

	t54 = (x261+(x262-(x263|x264)));

	if (t54 != 32880U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x265 = INT16_MIN;
	int32_t x266 = 147;
	int64_t x267 = -3609242856628027LL;
	uint16_t x268 = 10U;

	t55 = (x265+(x266-(x267|x268)));

	if (t55 != 3609242856595396LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x269 = INT64_MIN;
	int64_t x270 = INT64_MIN;
	static uint64_t x271 = 59950LLU;
	int64_t x272 = -1LL;
	uint64_t t56 = 16797852215884LLU;

	t56 = (x269+(x270-(x271|x272)));

	if (t56 != 1LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x273 = INT64_MIN;
	int64_t x275 = -117065481486237LL;
	int32_t x276 = INT32_MAX;
	volatile int64_t t57 = 14LL;

	t57 = (x273+(x274-(x275|x276)));

	if (t57 != -9223254973228462981LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x278 = -1;
	int32_t x279 = 205756378;
	int8_t x280 = INT8_MAX;
	int32_t t58 = 195;

	t58 = (x277+(x278-(x279|x280)));

	if (t58 != -178362194) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x281 = INT32_MIN;
	uint16_t x282 = 25U;
	volatile uint64_t x283 = UINT64_MAX;
	uint64_t t59 = 457131873839123217LLU;

	t59 = (x281+(x282-(x283|x284)));

	if (t59 != 18446744071562067994LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x286 = 0;
	volatile uint64_t x287 = 11119976945685LLU;
	int8_t x288 = 34;
	volatile uint64_t t60 = 55LLU;

	t60 = (x285+(x286-(x287|x288)));

	if (t60 != 18446732961036579074LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x289 = -1;
	int32_t x291 = -511;
	volatile int32_t x292 = 2;
	int32_t t61 = 269039;

	t61 = (x289+(x290-(x291|x292)));

	if (t61 != 507) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x294 = 323U;
	int32_t x295 = 18;
	static volatile int32_t t62 = 28855;

	t62 = (x293+(x294-(x295|x296)));

	if (t62 != 231) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x297 = INT64_MIN;
	int32_t x298 = -1;
	static uint16_t x299 = 4304U;
	static int64_t t63 = INT64_MIN;

	t63 = (x297+(x298-(x299|x300)));

	if (t63 != INT64_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x304 = 3U;
	int64_t t64 = -12156740671973505LL;

	t64 = (x301+(x302-(x303|x304)));

	if (t64 != -625276130LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x305 = INT8_MAX;
	uint16_t x306 = UINT16_MAX;
	volatile int64_t x307 = -65LL;
	uint32_t x308 = UINT32_MAX;
	int64_t t65 = -2202604220786618172LL;

	t65 = (x305+(x306-(x307|x308)));

	if (t65 != 65663LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x313 = -2;
	uint64_t x315 = UINT64_MAX;
	int16_t x316 = 7455;
	volatile uint64_t t66 = 372412969314879846LLU;

	t66 = (x313+(x314-(x315|x316)));

	if (t66 != 126LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x318 = 13;
	uint32_t x319 = 3284303U;
	volatile uint16_t x320 = UINT16_MAX;
	int64_t t67 = -6478LL;

	t67 = (x317+(x318-(x319|x320)));

	if (t67 != 4291624973LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x322 = INT64_MIN;
	static volatile int64_t t68 = INT64_MIN;

	t68 = (x321+(x322-(x323|x324)));

	if (t68 != INT64_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x329 = INT8_MIN;
	static int8_t x330 = -1;
	volatile uint32_t x331 = 52286731U;
	uint32_t t69 = 974U;

	t69 = (x329+(x330-(x331|x332)));

	if (t69 != 4294967284U) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x333 = 552598LL;
	volatile uint32_t x334 = 1699414U;
	int64_t x336 = INT64_MAX;
	int64_t t70 = -53LL;

	t70 = (x333+(x334-(x335|x336)));

	if (t70 != 2252013LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x338 = 77U;
	int32_t x339 = INT32_MIN;
	int32_t x340 = -1;
	uint32_t t71 = 39789553U;

	t71 = (x337+(x338-(x339|x340)));

	if (t71 != 478U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x341 = -34;
	int8_t x343 = 44;
	int16_t x344 = -1;
	static int32_t t72 = -25;

	t72 = (x341+(x342-(x343|x344)));

	if (t72 != 1348) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x345 = INT8_MAX;
	volatile uint32_t x346 = 2162240U;
	volatile int8_t x347 = -6;
	int8_t x348 = 13;
	uint32_t t73 = 2576U;

	t73 = (x345+(x346-(x347|x348)));

	if (t73 != 2162368U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x349 = INT8_MIN;
	static int64_t x350 = INT64_MAX;
	volatile int64_t x351 = INT64_MAX;
	static int64_t x352 = 61637LL;
	int64_t t74 = -21LL;

	t74 = (x349+(x350-(x351|x352)));

	if (t74 != -128LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x353 = 10U;
	int8_t x354 = INT8_MIN;
	int32_t x355 = INT32_MIN;
	static int32_t t75 = 33;

	t75 = (x353+(x354-(x355|x356)));

	if (t75 != 2147483403) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x357 = -1;
	uint16_t x358 = 670U;
	static uint32_t x359 = UINT32_MAX;
	int32_t x360 = -1;
	volatile uint32_t t76 = 11862U;

	t76 = (x357+(x358-(x359|x360)));

	if (t76 != 670U) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x365 = -1;
	int8_t x366 = -1;
	int32_t x367 = INT32_MAX;
	static int32_t x368 = -1;
	volatile int32_t t77 = 62723785;

	t77 = (x365+(x366-(x367|x368)));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x369 = 46U;
	static int8_t x370 = -1;
	uint64_t x371 = UINT64_MAX;
	static uint64_t x372 = 1LLU;
	volatile uint64_t t78 = 233432350315691233LLU;

	t78 = (x369+(x370-(x371|x372)));

	if (t78 != 46LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x373 = 904090926U;
	volatile uint32_t x374 = UINT32_MAX;
	int8_t x375 = 29;
	volatile uint8_t x376 = 85U;
	uint32_t t79 = 6U;

	t79 = (x373+(x374-(x375|x376)));

	if (t79 != 904090832U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x377 = INT64_MIN;
	int8_t x378 = INT8_MIN;
	static uint64_t x379 = 24LLU;
	uint16_t x380 = UINT16_MAX;
	static uint64_t t80 = 0LLU;

	t80 = (x377+(x378-(x379|x380)));

	if (t80 != 9223372036854710145LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x381 = INT8_MAX;
	int32_t x382 = 33;
	int16_t x383 = -1;
	int64_t x384 = -1LL;
	volatile int64_t t81 = 7161060483541LL;

	t81 = (x381+(x382-(x383|x384)));

	if (t81 != 161LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x389 = INT32_MIN;
	int64_t x390 = 874601LL;
	int32_t x391 = -7;
	static int16_t x392 = INT16_MIN;

	t82 = (x389+(x390-(x391|x392)));

	if (t82 != -2146609040LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x393 = -1;
	int64_t x394 = -59LL;
	uint32_t x395 = UINT32_MAX;
	int8_t x396 = 0;
	int64_t t83 = -86LL;

	t83 = (x393+(x394-(x395|x396)));

	if (t83 != -4294967355LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x398 = -19200;
	int8_t x399 = INT8_MIN;
	int64_t x400 = INT64_MAX;
	int64_t t84 = 155404LL;

	t84 = (x397+(x398-(x399|x400)));

	if (t84 != -19200LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x401 = INT8_MIN;
	int8_t x402 = INT8_MIN;
	uint8_t x403 = 3U;
	int16_t x404 = -1;
	int32_t t85 = -6312;

	t85 = (x401+(x402-(x403|x404)));

	if (t85 != -255) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x405 = 499;
	static uint8_t x406 = UINT8_MAX;
	volatile int64_t x407 = INT64_MAX;
	uint16_t x408 = UINT16_MAX;
	volatile int64_t t86 = -34799320781960LL;

	t86 = (x405+(x406-(x407|x408)));

	if (t86 != -9223372036854775053LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x409 = 24773LLU;
	int64_t x410 = -8718LL;
	int16_t x412 = -17;
	uint64_t t87 = 258819125LLU;

	t87 = (x409+(x410-(x411|x412)));

	if (t87 != 16072LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x413 = 27U;
	static uint16_t x414 = UINT16_MAX;
	volatile int8_t x415 = 39;
	int8_t x416 = -1;
	static int32_t t88 = 108536;

	t88 = (x413+(x414-(x415|x416)));

	if (t88 != 65563) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x417 = INT32_MAX;
	volatile int64_t x418 = -3131LL;
	int8_t x419 = INT8_MIN;
	int64_t x420 = -1LL;
	volatile int64_t t89 = -16155063596039468LL;

	t89 = (x417+(x418-(x419|x420)));

	if (t89 != 2147480517LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x421 = INT32_MIN;
	volatile int32_t t90 = 1;

	t90 = (x421+(x422-(x423|x424)));

	if (t90 != -2147465024) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x425 = INT64_MAX;
	uint16_t x427 = UINT16_MAX;
	uint64_t x428 = 186LLU;
	volatile uint64_t t91 = 5LLU;

	t91 = (x425+(x426-(x427|x428)));

	if (t91 != 9223372036854710527LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x429 = 62047U;
	static volatile uint8_t x430 = 1U;
	static int64_t x432 = -1LL;
	int64_t t92 = -198LL;

	t92 = (x429+(x430-(x431|x432)));

	if (t92 != 62049LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x433 = 488;
	int16_t x434 = 6752;
	int32_t x435 = -1;
	volatile int16_t x436 = -45;
	static volatile int32_t t93 = -714609675;

	t93 = (x433+(x434-(x435|x436)));

	if (t93 != 7241) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x437 = -1;
	static volatile uint64_t x439 = 46941127568LLU;
	int64_t x440 = INT64_MAX;

	t94 = (x437+(x438-(x439|x440)));

	if (t94 != 9223372036854780525LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x445 = INT32_MAX;
	int64_t x446 = 1866507423736702LL;
	int8_t x447 = -1;
	static int64_t t95 = 5438LL;

	t95 = (x445+(x446-(x447|x448)));

	if (t95 != 1866505276253054LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x449 = INT64_MIN;
	uint64_t x450 = UINT64_MAX;
	int16_t x451 = INT16_MAX;
	volatile uint64_t t96 = 89396014LLU;

	t96 = (x449+(x450-(x451|x452)));

	if (t96 != 9223372036854743040LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x453 = -718;
	volatile uint16_t x454 = 13989U;
	int32_t x455 = 57;
	uint8_t x456 = 94U;
	volatile int32_t t97 = -94;

	t97 = (x453+(x454-(x455|x456)));

	if (t97 != 13144) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x458 = -1LL;
	int16_t x460 = INT16_MIN;
	volatile int64_t t98 = -1LL;

	t98 = (x457+(x458-(x459|x460)));

	if (t98 != 32766LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x461 = 24LL;
	int64_t t99 = -141LL;

	t99 = (x461+(x462-(x463|x464)));

	if (t99 != 31LL) { NG(); } else { ; }
	
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

