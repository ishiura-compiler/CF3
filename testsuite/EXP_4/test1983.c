#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 445540;
static int32_t x5 = 1089133;
static volatile int32_t t1 = -8;
volatile int32_t t2 = 39;
static volatile uint64_t x17 = UINT64_MAX;
static volatile int32_t x19 = INT32_MAX;
int16_t x20 = INT16_MAX;
int64_t x22 = -1LL;
int8_t x23 = INT8_MIN;
uint16_t x25 = 0U;
static uint32_t x27 = 255868961U;
uint8_t x31 = UINT8_MAX;
volatile int32_t t6 = -25;
int64_t x46 = INT64_MAX;
uint64_t x48 = 44581729845LLU;
uint64_t x50 = 30634172LLU;
uint32_t x70 = 5461904U;
uint32_t x73 = 3036U;
int64_t x79 = -1LL;
int8_t x84 = 13;
static uint8_t x94 = 5U;
volatile uint8_t x95 = 127U;
volatile int16_t x102 = -1;
volatile int8_t x104 = -14;
uint8_t x105 = 118U;
uint16_t x107 = 12U;
int32_t x109 = 0;
int16_t x110 = -1;
uint64_t x113 = 9003031645419LLU;
static int64_t x116 = -58250800806LL;
uint16_t x123 = 16484U;
int16_t x134 = INT16_MAX;
int32_t x136 = INT32_MIN;
volatile int32_t t24 = -44864;
int16_t x156 = -3141;
int8_t x158 = 1;
int64_t x163 = INT64_MAX;
volatile uint32_t t28 = 14297U;
int8_t x170 = INT8_MIN;
static volatile int8_t x182 = -1;
int16_t x183 = -1;
int16_t x191 = -2920;
int64_t x192 = -1LL;
static volatile uint32_t t32 = 317363U;
volatile int64_t x201 = INT64_MAX;
int64_t x211 = INT64_MIN;
static int8_t x212 = INT8_MIN;
volatile int32_t t36 = -12874010;
uint64_t x217 = 2079715398376LLU;
static volatile int32_t x218 = -1;
volatile int32_t t38 = -509;
volatile uint32_t t39 = 1054289U;
static volatile int32_t t41 = 3288739;
uint64_t x242 = 1144788131389357228LLU;
uint8_t x250 = 1U;
volatile int64_t t44 = -792433593177009378LL;
uint64_t x268 = 8132LLU;
int32_t t45 = -2;
volatile int8_t x293 = INT8_MAX;
static int32_t x294 = INT32_MIN;
volatile uint16_t x299 = 152U;
int8_t x302 = INT8_MAX;
uint16_t x304 = 731U;
uint16_t x309 = UINT16_MAX;
int32_t t51 = -28902;
volatile int32_t t54 = 127;
uint8_t x333 = UINT8_MAX;
volatile int32_t t57 = -1;
int32_t x346 = INT32_MAX;
int8_t x359 = -1;
uint8_t x365 = 0U;
uint64_t x366 = UINT64_MAX;
uint64_t x367 = UINT64_MAX;
static int64_t x368 = INT64_MIN;
int8_t x397 = 7;
int16_t x398 = -8;
volatile int32_t t66 = -8176131;
uint64_t x403 = 25319LLU;
volatile int64_t x410 = INT64_MIN;
int32_t x414 = -1;
int64_t x415 = 39128136981245LL;
int64_t x416 = -1LL;
volatile int32_t t69 = 100178580;
volatile int8_t x446 = -31;
uint8_t x454 = UINT8_MAX;
volatile int8_t x472 = -1;
uint8_t x493 = UINT8_MAX;
volatile int8_t x497 = 11;
uint8_t x498 = 11U;
volatile int16_t x531 = INT16_MAX;
static uint16_t x538 = 8812U;
int16_t x539 = INT16_MAX;
volatile int64_t t82 = 2136979228586LL;
int64_t x554 = -1LL;
static volatile uint64_t t84 = 197LLU;
int32_t x568 = -1;
int64_t x592 = 15061971121LL;
uint16_t x605 = 5951U;
static int16_t x616 = -1;
volatile uint16_t x629 = 1706U;
uint64_t x632 = UINT64_MAX;
int32_t t95 = -104860;
static volatile int32_t t96 = -156;
static uint16_t x638 = UINT16_MAX;
int32_t x639 = 306324;
uint64_t x641 = UINT64_MAX;
int32_t x642 = INT32_MIN;
int8_t x644 = INT8_MIN;
static volatile uint64_t t98 = 7483447617LLU;
uint8_t x647 = 0U;


void f0(void) {
	static volatile uint8_t x1 = 3U;
	int32_t x2 = INT32_MIN;
	static int64_t x3 = INT64_MIN;
	static int16_t x4 = INT16_MIN;

	t0 = (x1>>(x2<=(x3|x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = INT8_MAX;
	static volatile uint64_t x7 = 1398811LLU;
	static uint8_t x8 = 1U;

	t1 = (x5>>(x6<=(x7|x8)));

	if (t1 != 544566) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 20U;
	uint8_t x10 = 17U;
	int64_t x11 = INT64_MAX;
	uint8_t x12 = 76U;

	t2 = (x9>>(x10<=(x11|x12)));

	if (t2 != 10) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x18 = UINT32_MAX;
	volatile uint64_t t3 = UINT64_MAX;

	t3 = (x17>>(x18<=(x19|x20)));

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x21 = UINT8_MAX;
	volatile int8_t x24 = 53;
	volatile int32_t t4 = 328036;

	t4 = (x21>>(x22<=(x23|x24)));

	if (t4 != 255) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x26 = INT64_MAX;
	uint8_t x28 = UINT8_MAX;
	int32_t t5 = -124;

	t5 = (x25>>(x26<=(x27|x28)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = 22;
	volatile int8_t x30 = INT8_MAX;
	int32_t x32 = -10415;

	t6 = (x29>>(x30<=(x31|x32)));

	if (t6 != 22) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x33 = INT16_MAX;
	uint64_t x34 = UINT64_MAX;
	volatile int16_t x35 = -10;
	int16_t x36 = -1;
	static volatile int32_t t7 = -6;

	t7 = (x33>>(x34<=(x35|x36)));

	if (t7 != 16383) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x37 = 7U;
	static int16_t x38 = INT16_MIN;
	uint32_t x39 = 18U;
	uint16_t x40 = 20U;
	static int32_t t8 = -353339;

	t8 = (x37>>(x38<=(x39|x40)));

	if (t8 != 7) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x41 = 25U;
	int32_t x42 = -1;
	volatile int32_t x43 = 1;
	int8_t x44 = INT8_MIN;
	int32_t t9 = -2287;

	t9 = (x41>>(x42<=(x43|x44)));

	if (t9 != 25) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = INT8_MAX;
	static volatile int16_t x47 = INT16_MIN;
	static volatile int32_t t10 = -1752;

	t10 = (x45>>(x46<=(x47|x48)));

	if (t10 != 63) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = 39757161LL;
	static int16_t x51 = INT16_MIN;
	static int8_t x52 = INT8_MAX;
	volatile int64_t t11 = 3538976702LL;

	t11 = (x49>>(x50<=(x51|x52)));

	if (t11 != 19878580LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x53 = UINT16_MAX;
	static int8_t x54 = -1;
	volatile int64_t x55 = INT64_MIN;
	int8_t x56 = -1;
	static int32_t t12 = 3;

	t12 = (x53>>(x54<=(x55|x56)));

	if (t12 != 32767) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x69 = 11877U;
	int32_t x71 = -1;
	volatile int32_t x72 = INT32_MIN;
	static uint32_t t13 = 640204U;

	t13 = (x69>>(x70<=(x71|x72)));

	if (t13 != 5938U) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x74 = UINT32_MAX;
	int32_t x75 = INT32_MAX;
	int32_t x76 = -1;
	static uint32_t t14 = 66920U;

	t14 = (x73>>(x74<=(x75|x76)));

	if (t14 != 1518U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x77 = 0;
	volatile int16_t x78 = -981;
	uint64_t x80 = 97910971027448LLU;
	int32_t t15 = -4659;

	t15 = (x77>>(x78<=(x79|x80)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x81 = 18;
	int32_t x82 = 216;
	int64_t x83 = INT64_MIN;
	volatile int32_t t16 = -3852;

	t16 = (x81>>(x82<=(x83|x84)));

	if (t16 != 18) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x89 = 0;
	volatile int64_t x90 = -1LL;
	uint64_t x91 = UINT64_MAX;
	uint32_t x92 = 1296804U;
	int32_t t17 = 30;

	t17 = (x89>>(x90<=(x91|x92)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x93 = 8231568LLU;
	uint32_t x96 = UINT32_MAX;
	uint64_t t18 = 1891902LLU;

	t18 = (x93>>(x94<=(x95|x96)));

	if (t18 != 4115784LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x101 = 57722205LLU;
	static int16_t x103 = INT16_MIN;
	static volatile uint64_t t19 = 161136649LLU;

	t19 = (x101>>(x102<=(x103|x104)));

	if (t19 != 57722205LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x106 = 0;
	int64_t x108 = INT64_MIN;
	static int32_t t20 = 690872815;

	t20 = (x105>>(x106<=(x107|x108)));

	if (t20 != 118) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x111 = INT16_MIN;
	static uint32_t x112 = UINT32_MAX;
	int32_t t21 = 129776821;

	t21 = (x109>>(x110<=(x111|x112)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x114 = 1425U;
	int16_t x115 = -1;
	uint64_t t22 = 24372700982183108LLU;

	t22 = (x113>>(x114<=(x115|x116)));

	if (t22 != 9003031645419LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x121 = UINT64_MAX;
	static volatile int8_t x122 = INT8_MAX;
	volatile int16_t x124 = 0;
	volatile uint64_t t23 = 394101459785LLU;

	t23 = (x121>>(x122<=(x123|x124)));

	if (t23 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x133 = 7;
	int16_t x135 = -1;

	t24 = (x133>>(x134<=(x135|x136)));

	if (t24 != 7) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x137 = 385120LLU;
	int32_t x138 = -1;
	static int16_t x139 = INT16_MIN;
	int32_t x140 = INT32_MIN;
	uint64_t t25 = 8163LLU;

	t25 = (x137>>(x138<=(x139|x140)));

	if (t25 != 385120LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x153 = UINT32_MAX;
	int8_t x154 = INT8_MIN;
	int32_t x155 = INT32_MIN;
	uint32_t t26 = UINT32_MAX;

	t26 = (x153>>(x154<=(x155|x156)));

	if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x157 = INT16_MAX;
	static int64_t x159 = 1877241699735LL;
	uint8_t x160 = 9U;
	volatile int32_t t27 = -79629;

	t27 = (x157>>(x158<=(x159|x160)));

	if (t27 != 16383) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x161 = 2517645U;
	volatile int64_t x162 = -1LL;
	uint64_t x164 = UINT64_MAX;

	t28 = (x161>>(x162<=(x163|x164)));

	if (t28 != 1258822U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x169 = 1;
	int16_t x171 = INT16_MIN;
	uint8_t x172 = 8U;
	int32_t t29 = -1702;

	t29 = (x169>>(x170<=(x171|x172)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x177 = INT32_MAX;
	static volatile uint8_t x178 = 3U;
	volatile int8_t x179 = INT8_MIN;
	volatile uint64_t x180 = 980LLU;
	int32_t t30 = 115863082;

	t30 = (x177>>(x178<=(x179|x180)));

	if (t30 != 1073741823) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x181 = INT64_MAX;
	static volatile uint64_t x184 = 659448217416305233LLU;
	volatile int64_t t31 = 141561LL;

	t31 = (x181>>(x182<=(x183|x184)));

	if (t31 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x189 = 103352U;
	static volatile uint16_t x190 = 17705U;

	t32 = (x189>>(x190<=(x191|x192)));

	if (t32 != 103352U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x193 = 44;
	static uint32_t x194 = 1548U;
	int64_t x195 = 1450755136LL;
	int64_t x196 = -1LL;
	volatile int32_t t33 = 65945756;

	t33 = (x193>>(x194<=(x195|x196)));

	if (t33 != 44) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x202 = 49225830478LLU;
	static uint8_t x203 = 0U;
	volatile uint16_t x204 = 78U;
	static int64_t t34 = INT64_MAX;

	t34 = (x201>>(x202<=(x203|x204)));

	if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x209 = 13U;
	uint32_t x210 = 45U;
	volatile int32_t t35 = 175;

	t35 = (x209>>(x210<=(x211|x212)));

	if (t35 != 13) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x213 = 2U;
	static volatile int64_t x214 = -1LL;
	int32_t x215 = -1;
	static uint32_t x216 = 139U;

	t36 = (x213>>(x214<=(x215|x216)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x219 = -1;
	uint32_t x220 = UINT32_MAX;
	static volatile uint64_t t37 = 3LLU;

	t37 = (x217>>(x218<=(x219|x220)));

	if (t37 != 1039857699188LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x221 = 0U;
	int16_t x222 = INT16_MIN;
	int16_t x223 = INT16_MIN;
	uint16_t x224 = UINT16_MAX;

	t38 = (x221>>(x222<=(x223|x224)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x225 = 7890U;
	uint32_t x226 = 25U;
	uint64_t x227 = 11LLU;
	uint32_t x228 = 0U;

	t39 = (x225>>(x226<=(x227|x228)));

	if (t39 != 7890U) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x229 = 1882236;
	int8_t x230 = INT8_MAX;
	volatile int8_t x231 = -1;
	static int64_t x232 = 5533769563LL;
	volatile int32_t t40 = 49;

	t40 = (x229>>(x230<=(x231|x232)));

	if (t40 != 1882236) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x237 = INT16_MAX;
	int64_t x238 = -13399LL;
	int32_t x239 = INT32_MIN;
	uint8_t x240 = UINT8_MAX;

	t41 = (x237>>(x238<=(x239|x240)));

	if (t41 != 32767) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x241 = 5355LLU;
	volatile uint8_t x243 = 4U;
	int64_t x244 = INT64_MIN;
	static volatile uint64_t t42 = 17962868787947455LLU;

	t42 = (x241>>(x242<=(x243|x244)));

	if (t42 != 2677LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x249 = 22;
	uint64_t x251 = 619713807323536LLU;
	static int64_t x252 = -1LL;
	volatile int32_t t43 = 63;

	t43 = (x249>>(x250<=(x251|x252)));

	if (t43 != 11) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x253 = 0LL;
	volatile uint64_t x254 = 59663874LLU;
	static volatile uint32_t x255 = UINT32_MAX;
	uint32_t x256 = 11U;

	t44 = (x253>>(x254<=(x255|x256)));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x265 = UINT16_MAX;
	int16_t x266 = -1;
	uint8_t x267 = 0U;

	t45 = (x265>>(x266<=(x267|x268)));

	if (t45 != 65535) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x273 = 652U;
	int16_t x274 = 6620;
	int8_t x275 = 1;
	int8_t x276 = INT8_MAX;
	uint32_t t46 = 54925U;

	t46 = (x273>>(x274<=(x275|x276)));

	if (t46 != 652U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x295 = 30984LLU;
	static uint64_t x296 = 101955480276473LLU;
	static volatile int32_t t47 = 15915;

	t47 = (x293>>(x294<=(x295|x296)));

	if (t47 != 127) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x297 = 1731;
	uint8_t x298 = 87U;
	uint64_t x300 = 1990873802312110275LLU;
	volatile int32_t t48 = 0;

	t48 = (x297>>(x298<=(x299|x300)));

	if (t48 != 865) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x301 = UINT16_MAX;
	int8_t x303 = INT8_MIN;
	volatile int32_t t49 = 169;

	t49 = (x301>>(x302<=(x303|x304)));

	if (t49 != 65535) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x305 = UINT8_MAX;
	static uint16_t x306 = 201U;
	int64_t x307 = INT64_MIN;
	static volatile int16_t x308 = 453;
	static int32_t t50 = -24411952;

	t50 = (x305>>(x306<=(x307|x308)));

	if (t50 != 255) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x310 = 6534435763899349LLU;
	int64_t x311 = INT64_MAX;
	static uint8_t x312 = 3U;

	t51 = (x309>>(x310<=(x311|x312)));

	if (t51 != 32767) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x313 = 42LLU;
	uint64_t x314 = UINT64_MAX;
	int16_t x315 = INT16_MIN;
	int16_t x316 = 3;
	uint64_t t52 = 7067630060LLU;

	t52 = (x313>>(x314<=(x315|x316)));

	if (t52 != 42LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x317 = INT32_MAX;
	int32_t x318 = 88;
	uint8_t x319 = 14U;
	static volatile int8_t x320 = -1;
	volatile int32_t t53 = INT32_MAX;

	t53 = (x317>>(x318<=(x319|x320)));

	if (t53 != INT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x321 = 74U;
	int8_t x322 = INT8_MIN;
	uint8_t x323 = UINT8_MAX;
	int32_t x324 = INT32_MIN;

	t54 = (x321>>(x322<=(x323|x324)));

	if (t54 != 74) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x325 = 136913163620LLU;
	volatile uint64_t x326 = 0LLU;
	uint32_t x327 = 7667882U;
	uint8_t x328 = 3U;
	static uint64_t t55 = 2LLU;

	t55 = (x325>>(x326<=(x327|x328)));

	if (t55 != 68456581810LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x329 = 18;
	uint8_t x330 = 1U;
	static int32_t x331 = INT32_MAX;
	static int8_t x332 = INT8_MIN;
	int32_t t56 = 13;

	t56 = (x329>>(x330<=(x331|x332)));

	if (t56 != 18) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x334 = 0LL;
	int8_t x335 = 0;
	uint8_t x336 = UINT8_MAX;

	t57 = (x333>>(x334<=(x335|x336)));

	if (t57 != 127) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x345 = 7U;
	static volatile int64_t x347 = INT64_MIN;
	static volatile int8_t x348 = INT8_MIN;
	uint32_t t58 = 63957U;

	t58 = (x345>>(x346<=(x347|x348)));

	if (t58 != 7U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x357 = INT64_MAX;
	int16_t x358 = -2405;
	static uint64_t x360 = 90153443LLU;
	int64_t t59 = -3LL;

	t59 = (x357>>(x358<=(x359|x360)));

	if (t59 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x361 = 1216707507U;
	uint16_t x362 = UINT16_MAX;
	int32_t x363 = 1;
	volatile int16_t x364 = INT16_MAX;
	volatile uint32_t t60 = 156U;

	t60 = (x361>>(x362<=(x363|x364)));

	if (t60 != 1216707507U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t t61 = -24;

	t61 = (x365>>(x366<=(x367|x368)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x377 = 680718;
	static uint16_t x378 = 108U;
	uint64_t x379 = 1088304584889579268LLU;
	int32_t x380 = -1;
	int32_t t62 = -539;

	t62 = (x377>>(x378<=(x379|x380)));

	if (t62 != 340359) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x381 = 0;
	volatile int64_t x382 = 1444841135152LL;
	static int8_t x383 = INT8_MIN;
	uint32_t x384 = UINT32_MAX;
	static volatile int32_t t63 = 3;

	t63 = (x381>>(x382<=(x383|x384)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x385 = INT32_MAX;
	int32_t x386 = 0;
	int8_t x387 = -63;
	int8_t x388 = INT8_MIN;
	int32_t t64 = INT32_MAX;

	t64 = (x385>>(x386<=(x387|x388)));

	if (t64 != INT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x389 = 21;
	int8_t x390 = INT8_MIN;
	int32_t x391 = -28687639;
	int8_t x392 = INT8_MIN;
	volatile int32_t t65 = 157984901;

	t65 = (x389>>(x390<=(x391|x392)));

	if (t65 != 10) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x399 = INT8_MIN;
	int32_t x400 = -1;

	t66 = (x397>>(x398<=(x399|x400)));

	if (t66 != 3) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x401 = UINT16_MAX;
	volatile int16_t x402 = INT16_MIN;
	static int16_t x404 = 124;
	int32_t t67 = 31;

	t67 = (x401>>(x402<=(x403|x404)));

	if (t67 != 65535) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x409 = UINT16_MAX;
	static int32_t x411 = 45;
	int64_t x412 = -1LL;
	int32_t t68 = -21;

	t68 = (x409>>(x410<=(x411|x412)));

	if (t68 != 32767) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x413 = 84U;

	t69 = (x413>>(x414<=(x415|x416)));

	if (t69 != 42) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x425 = 1834U;
	int8_t x426 = INT8_MIN;
	uint8_t x427 = UINT8_MAX;
	volatile int64_t x428 = 67221516701097790LL;
	int32_t t70 = 0;

	t70 = (x425>>(x426<=(x427|x428)));

	if (t70 != 917) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x441 = INT64_MAX;
	int8_t x442 = -44;
	volatile int64_t x443 = -70767802338634844LL;
	int64_t x444 = -29LL;
	static int64_t t71 = 653171LL;

	t71 = (x441>>(x442<=(x443|x444)));

	if (t71 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x445 = INT16_MAX;
	int64_t x447 = -3LL;
	volatile int16_t x448 = 12;
	int32_t t72 = -1774500;

	t72 = (x445>>(x446<=(x447|x448)));

	if (t72 != 16383) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x453 = UINT16_MAX;
	static uint64_t x455 = UINT64_MAX;
	volatile int64_t x456 = INT64_MIN;
	int32_t t73 = 116;

	t73 = (x453>>(x454<=(x455|x456)));

	if (t73 != 32767) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x469 = 0;
	volatile uint32_t x470 = 41U;
	int32_t x471 = -1;
	static volatile int32_t t74 = -4;

	t74 = (x469>>(x470<=(x471|x472)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x477 = 503372437U;
	int8_t x478 = 1;
	static uint16_t x479 = 1U;
	static int8_t x480 = 1;
	static uint32_t t75 = 1U;

	t75 = (x477>>(x478<=(x479|x480)));

	if (t75 != 251686218U) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x494 = UINT64_MAX;
	int64_t x495 = INT64_MIN;
	static int32_t x496 = INT32_MAX;
	volatile int32_t t76 = -393396;

	t76 = (x493>>(x494<=(x495|x496)));

	if (t76 != 255) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x499 = INT8_MIN;
	volatile int16_t x500 = INT16_MIN;
	volatile int32_t t77 = 3;

	t77 = (x497>>(x498<=(x499|x500)));

	if (t77 != 11) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x505 = 33782225U;
	int64_t x506 = INT64_MAX;
	static uint8_t x507 = 3U;
	static volatile int32_t x508 = INT32_MAX;
	volatile uint32_t t78 = 63686U;

	t78 = (x505>>(x506<=(x507|x508)));

	if (t78 != 33782225U) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x509 = 10219954LLU;
	int16_t x510 = 1;
	uint16_t x511 = UINT16_MAX;
	int64_t x512 = INT64_MIN;
	uint64_t t79 = 4LLU;

	t79 = (x509>>(x510<=(x511|x512)));

	if (t79 != 10219954LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x513 = 1;
	volatile int32_t x514 = INT32_MIN;
	static uint32_t x515 = 589477U;
	int8_t x516 = INT8_MIN;
	volatile int32_t t80 = -31;

	t80 = (x513>>(x514<=(x515|x516)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint8_t x529 = 14U;
	volatile uint32_t x530 = UINT32_MAX;
	int8_t x532 = INT8_MAX;
	static volatile int32_t t81 = 4236;

	t81 = (x529>>(x530<=(x531|x532)));

	if (t81 != 14) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int64_t x537 = INT64_MAX;
	int64_t x540 = INT64_MAX;

	t82 = (x537>>(x538<=(x539|x540)));

	if (t82 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x541 = INT64_MAX;
	int32_t x542 = INT32_MAX;
	uint64_t x543 = 427159219LLU;
	int32_t x544 = INT32_MIN;
	int64_t t83 = -1988LL;

	t83 = (x541>>(x542<=(x543|x544)));

	if (t83 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x553 = 826806704LLU;
	int8_t x555 = INT8_MIN;
	int64_t x556 = INT64_MIN;

	t84 = (x553>>(x554<=(x555|x556)));

	if (t84 != 826806704LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x565 = UINT64_MAX;
	int8_t x566 = -42;
	volatile uint16_t x567 = 119U;
	static uint64_t t85 = 5555LLU;

	t85 = (x565>>(x566<=(x567|x568)));

	if (t85 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x573 = 31345U;
	int64_t x574 = INT64_MIN;
	int32_t x575 = -1;
	int32_t x576 = -1;
	volatile int32_t t86 = 30971;

	t86 = (x573>>(x574<=(x575|x576)));

	if (t86 != 15672) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x577 = 8U;
	uint32_t x578 = 3112U;
	int16_t x579 = INT16_MAX;
	uint64_t x580 = 1337947006770890LLU;
	static volatile int32_t t87 = 51652;

	t87 = (x577>>(x578<=(x579|x580)));

	if (t87 != 4) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x585 = INT64_MAX;
	uint8_t x586 = 0U;
	uint32_t x587 = 114720U;
	int32_t x588 = -1;
	int64_t t88 = -30387133LL;

	t88 = (x585>>(x586<=(x587|x588)));

	if (t88 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x589 = UINT8_MAX;
	int32_t x590 = INT32_MAX;
	int64_t x591 = -151147LL;
	int32_t t89 = 1;

	t89 = (x589>>(x590<=(x591|x592)));

	if (t89 != 255) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x597 = 2572678083669LLU;
	int16_t x598 = -1;
	int64_t x599 = INT64_MAX;
	uint64_t x600 = 252781830LLU;
	uint64_t t90 = 216044019161LLU;

	t90 = (x597>>(x598<=(x599|x600)));

	if (t90 != 2572678083669LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x606 = -1;
	int32_t x607 = 15;
	uint64_t x608 = 93747LLU;
	int32_t t91 = 22943;

	t91 = (x605>>(x606<=(x607|x608)));

	if (t91 != 5951) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x609 = 654168LLU;
	static int8_t x610 = INT8_MIN;
	int8_t x611 = 5;
	int32_t x612 = -1;
	uint64_t t92 = 279826LLU;

	t92 = (x609>>(x610<=(x611|x612)));

	if (t92 != 327084LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x613 = INT16_MAX;
	static int64_t x614 = INT64_MAX;
	int32_t x615 = -1;
	int32_t t93 = 77932620;

	t93 = (x613>>(x614<=(x615|x616)));

	if (t93 != 32767) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x625 = UINT8_MAX;
	uint64_t x626 = UINT64_MAX;
	volatile int8_t x627 = -1;
	int16_t x628 = INT16_MIN;
	static volatile int32_t t94 = -11391;

	t94 = (x625>>(x626<=(x627|x628)));

	if (t94 != 127) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x630 = -2658901LL;
	static uint8_t x631 = 27U;

	t95 = (x629>>(x630<=(x631|x632)));

	if (t95 != 853) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x633 = 81U;
	volatile uint64_t x634 = UINT64_MAX;
	int8_t x635 = INT8_MIN;
	int64_t x636 = -1LL;

	t96 = (x633>>(x634<=(x635|x636)));

	if (t96 != 40) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x637 = 278738864461800907LLU;
	int16_t x640 = -1;
	volatile uint64_t t97 = 11376912655433847LLU;

	t97 = (x637>>(x638<=(x639|x640)));

	if (t97 != 278738864461800907LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x643 = INT32_MAX;

	t98 = (x641>>(x642<=(x643|x644)));

	if (t98 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x645 = 39673884226165475LLU;
	volatile int16_t x646 = INT16_MIN;
	int8_t x648 = -1;
	uint64_t t99 = 358068LLU;

	t99 = (x645>>(x646<=(x647|x648)));

	if (t99 != 19836942113082737LLU) { NG(); } else { ; }
	
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

