#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x5 = INT32_MIN;
int8_t x10 = -1;
uint64_t x12 = 1581476664629773813LLU;
uint8_t x13 = 7U;
int16_t x15 = -1;
static int32_t t3 = -1;
volatile uint8_t x18 = UINT8_MAX;
static volatile int32_t t4 = 3540717;
static uint64_t t5 = 163581823279491LLU;
int16_t x32 = -1;
uint64_t x33 = 135LLU;
volatile int64_t t9 = -124209645136LL;
static int8_t x53 = 14;
int8_t x56 = -30;
int32_t x58 = INT32_MAX;
int32_t x61 = 52;
uint32_t x65 = 0U;
int32_t x69 = -1;
static volatile int64_t x71 = -19406LL;
int16_t x74 = INT16_MIN;
uint8_t x78 = UINT8_MAX;
static volatile uint64_t x90 = 200653LLU;
volatile uint8_t x117 = 4U;
volatile uint8_t x122 = 82U;
int16_t x127 = INT16_MAX;
int64_t t28 = INT64_MAX;
int64_t x133 = 15700309921515LL;
static int8_t x134 = INT8_MAX;
static int16_t x136 = -1;
static volatile uint64_t t29 = 1LLU;
uint32_t x138 = 626679706U;
int8_t x139 = 24;
int32_t x146 = INT32_MIN;
volatile int32_t x147 = INT32_MAX;
int8_t x157 = 1;
int64_t t33 = -6722734409400LL;
static int64_t x161 = INT64_MIN;
int64_t t35 = -427402222930109LL;
int16_t x169 = 10;
static uint8_t x173 = 111U;
uint32_t x177 = 263064290U;
int8_t x185 = 0;
static int64_t x186 = -716176LL;
uint32_t x190 = 3321477U;
int32_t x200 = 208372929;
int16_t x206 = -17;
int64_t t46 = -7472LL;
uint32_t t47 = 84485U;
int16_t x236 = -28;
static volatile int16_t x250 = 6832;
int64_t x253 = 53578367445LL;
uint8_t x263 = 0U;
int32_t x264 = INT32_MIN;
static int64_t t55 = 863331LL;
static volatile int64_t t57 = -162227LL;
uint64_t x276 = 1840038319770704148LLU;
uint64_t t58 = 17413422419865260LLU;
volatile int32_t x277 = INT32_MIN;
volatile uint32_t x279 = UINT32_MAX;
uint32_t t60 = 374U;
int16_t x298 = INT16_MAX;
volatile int64_t x308 = -1LL;
static volatile int32_t x314 = INT32_MAX;
uint32_t x318 = 9U;
int64_t x319 = -1LL;
int32_t x321 = -171;
volatile int8_t x322 = 7;
uint64_t t69 = 6LLU;
static uint32_t x328 = 103715U;
int8_t x336 = INT8_MAX;
volatile int64_t t73 = 4LL;
volatile int64_t t74 = 134654463138LL;
volatile uint8_t x347 = 16U;
uint32_t x348 = 8U;
uint32_t t75 = 1070U;
static int8_t x349 = -1;
uint64_t x351 = 15009663835461347LLU;
uint8_t x355 = 0U;
int8_t x356 = -3;
int32_t x369 = INT32_MAX;
static uint64_t t81 = 373321057170021LLU;
int8_t x387 = INT8_MIN;
volatile int64_t t84 = 283LL;
static volatile uint32_t x390 = 1653U;
int32_t x391 = -148247115;
int64_t x415 = INT64_MAX;
uint16_t x416 = 12005U;
static volatile int32_t x433 = INT32_MIN;
volatile uint32_t t95 = 945270U;
int16_t x448 = INT16_MIN;
uint8_t x456 = 1U;


void f0(void) {
	static volatile int16_t x1 = INT16_MAX;
	int32_t x2 = INT32_MIN;
	uint8_t x3 = UINT8_MAX;
	uint32_t x4 = UINT32_MAX;
	volatile uint32_t t0 = 5U;

	t0 = ((x1+(x2|x3))-x4);

	if (t0 != 2147516671U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x6 = 193992501LL;
	volatile int16_t x7 = INT16_MIN;
	int32_t x8 = INT32_MIN;
	volatile int64_t t1 = -1LL;

	t1 = ((x5+(x6|x7))-x8);

	if (t1 != -26827LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x9 = 34U;
	uint32_t x11 = 14421740U;
	volatile uint64_t t2 = 4718010LLU;

	t2 = ((x9+(x10|x11))-x12);

	if (t2 != 16865267409079777836LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x14 = INT32_MAX;
	int32_t x16 = -1;

	t3 = ((x13+(x14|x15))-x16);

	if (t3 != 7) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = INT8_MIN;
	int16_t x19 = -1846;
	volatile int8_t x20 = INT8_MIN;

	t4 = ((x17+(x18|x19))-x20);

	if (t4 != -1793) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -1;
	uint32_t x22 = 26974673U;
	uint64_t x23 = UINT64_MAX;
	uint8_t x24 = UINT8_MAX;

	t5 = ((x21+(x22|x23))-x24);

	if (t5 != 18446744073709551359LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = INT64_MIN;
	static int8_t x26 = INT8_MIN;
	uint32_t x27 = 47520U;
	int32_t x28 = INT32_MAX;
	int64_t t6 = -17025308LL;

	t6 = ((x25+(x26|x27))-x28);

	if (t6 != -9223372034707292255LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x29 = -29;
	int8_t x30 = 22;
	uint8_t x31 = 2U;
	static volatile int32_t t7 = 21;

	t7 = ((x29+(x30|x31))-x32);

	if (t7 != -6) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x34 = INT8_MIN;
	int64_t x35 = 39LL;
	int8_t x36 = 1;
	static uint64_t t8 = 42854892LLU;

	t8 = ((x33+(x34|x35))-x36);

	if (t8 != 45LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x37 = 1;
	int8_t x38 = INT8_MIN;
	uint8_t x39 = 3U;
	int64_t x40 = INT64_MIN;

	t9 = ((x37+(x38|x39))-x40);

	if (t9 != 9223372036854775684LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x49 = -50;
	volatile int64_t x50 = -3593543542LL;
	int32_t x51 = INT32_MIN;
	volatile int16_t x52 = INT16_MIN;
	static volatile int64_t t10 = -6219LL;

	t10 = ((x49+(x50|x51))-x52);

	if (t10 != -1446027176LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x54 = INT32_MIN;
	volatile int32_t x55 = -1;
	static int32_t t11 = -45928137;

	t11 = ((x53+(x54|x55))-x56);

	if (t11 != 43) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x57 = 111U;
	uint64_t x59 = 1773296058283442190LLU;
	int32_t x60 = INT32_MIN;
	volatile uint64_t t12 = 19169423840442LLU;

	t12 = ((x57+(x58|x59))-x60);

	if (t12 != 1773296061981393006LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x62 = UINT16_MAX;
	int8_t x63 = 0;
	volatile int8_t x64 = INT8_MIN;
	int32_t t13 = 1889646;

	t13 = ((x61+(x62|x63))-x64);

	if (t13 != 65715) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x66 = -1;
	int64_t x67 = INT64_MIN;
	uint64_t x68 = UINT64_MAX;
	uint64_t t14 = 222761LLU;

	t14 = ((x65+(x66|x67))-x68);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x70 = -387637928779513LL;
	volatile uint16_t x72 = 1698U;
	volatile int64_t t15 = -5490844438755827LL;

	t15 = ((x69+(x70|x71))-x72);

	if (t15 != -20844LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x73 = UINT64_MAX;
	static uint16_t x75 = 463U;
	static int16_t x76 = -1;
	volatile uint64_t t16 = 5LLU;

	t16 = ((x73+(x74|x75))-x76);

	if (t16 != 18446744073709519311LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x77 = 265085654U;
	int64_t x79 = INT64_MIN;
	int8_t x80 = 29;
	volatile int64_t t17 = 69LL;

	t17 = ((x77+(x78|x79))-x80);

	if (t17 != -9223372036589689928LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x81 = 4U;
	volatile int64_t x82 = INT64_MAX;
	static volatile int8_t x83 = INT8_MIN;
	volatile uint16_t x84 = 0U;
	int64_t t18 = -10206466LL;

	t18 = ((x81+(x82|x83))-x84);

	if (t18 != 3LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x85 = INT64_MIN;
	uint32_t x86 = UINT32_MAX;
	static int64_t x87 = INT64_MAX;
	int32_t x88 = -1;
	volatile int64_t t19 = -212LL;

	t19 = ((x85+(x86|x87))-x88);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x89 = INT8_MAX;
	int32_t x91 = INT32_MIN;
	static int32_t x92 = INT32_MIN;
	static uint64_t t20 = 262763831826202LLU;

	t20 = ((x89+(x90|x91))-x92);

	if (t20 != 200780LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x97 = 284550LL;
	static uint32_t x98 = UINT32_MAX;
	int8_t x99 = INT8_MIN;
	static uint64_t x100 = UINT64_MAX;
	uint64_t t21 = 280776277632537LLU;

	t21 = ((x97+(x98|x99))-x100);

	if (t21 != 4295251846LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x101 = -1;
	int32_t x102 = INT32_MAX;
	int16_t x103 = INT16_MIN;
	static uint8_t x104 = 2U;
	volatile int32_t t22 = -8;

	t22 = ((x101+(x102|x103))-x104);

	if (t22 != -4) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x105 = 1;
	volatile uint8_t x106 = UINT8_MAX;
	static int64_t x107 = -1LL;
	int16_t x108 = -8;
	volatile int64_t t23 = 26606543LL;

	t23 = ((x105+(x106|x107))-x108);

	if (t23 != 8LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x109 = -6381440LL;
	int32_t x110 = INT32_MAX;
	uint8_t x111 = 3U;
	static uint16_t x112 = 28751U;
	volatile int64_t t24 = 3835LL;

	t24 = ((x109+(x110|x111))-x112);

	if (t24 != 2141073456LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x113 = 15729;
	volatile int64_t x114 = -1LL;
	int16_t x115 = INT16_MIN;
	uint32_t x116 = UINT32_MAX;
	volatile int64_t t25 = 131239684968167LL;

	t25 = ((x113+(x114|x115))-x116);

	if (t25 != -4294951567LL) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int16_t x118 = INT16_MAX;
	int16_t x119 = INT16_MIN;
	int8_t x120 = INT8_MIN;
	static volatile int32_t t26 = -20377;

	t26 = ((x117+(x118|x119))-x120);

	if (t26 != 131) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x121 = UINT32_MAX;
	uint16_t x123 = 1483U;
	static int16_t x124 = 1637;
	static volatile uint32_t t27 = 1365U;

	t27 = ((x121+(x122|x123))-x124);

	if (t27 != 4294967157U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x125 = INT64_MAX;
	volatile int16_t x126 = -266;
	int16_t x128 = -1;

	t28 = ((x125+(x126|x127))-x128);

	if (t28 != INT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x135 = 1017400LLU;

	t29 = ((x133+(x134|x135))-x136);

	if (t29 != 15700310938987LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x137 = -1;
	uint64_t x140 = 267364831LLU;
	static volatile uint64_t t30 = 36LLU;

	t30 = ((x137+(x138|x139))-x140);

	if (t30 != 359314874LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x145 = UINT16_MAX;
	int16_t x148 = -5327;
	volatile int32_t t31 = -302259805;

	t31 = ((x145+(x146|x147))-x148);

	if (t31 != 70861) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x153 = -1;
	int64_t x154 = INT64_MAX;
	static uint16_t x155 = 0U;
	uint32_t x156 = 24U;
	static volatile int64_t t32 = -391LL;

	t32 = ((x153+(x154|x155))-x156);

	if (t32 != 9223372036854775782LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x158 = INT64_MIN;
	int8_t x159 = 0;
	volatile int64_t x160 = -1LL;

	t33 = ((x157+(x158|x159))-x160);

	if (t33 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x162 = INT64_MAX;
	static int64_t x163 = 944149810362LL;
	int64_t x164 = -734263722764839LL;
	int64_t t34 = 90072340070589LL;

	t34 = ((x161+(x162|x163))-x164);

	if (t34 != 734263722764838LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x165 = -1;
	int8_t x166 = -1;
	int32_t x167 = INT32_MAX;
	int64_t x168 = -1LL;

	t35 = ((x165+(x166|x167))-x168);

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x170 = INT8_MAX;
	static int8_t x171 = -2;
	static int16_t x172 = INT16_MIN;
	int32_t t36 = 2;

	t36 = ((x169+(x170|x171))-x172);

	if (t36 != 32777) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x174 = INT16_MIN;
	static volatile int32_t x175 = INT32_MAX;
	int8_t x176 = INT8_MIN;
	volatile int32_t t37 = 9136;

	t37 = ((x173+(x174|x175))-x176);

	if (t37 != 238) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x178 = -1;
	int32_t x179 = INT32_MIN;
	int16_t x180 = 3;
	uint32_t t38 = 2012U;

	t38 = ((x177+(x178|x179))-x180);

	if (t38 != 263064286U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x181 = 5047622538022909LL;
	uint8_t x182 = 5U;
	uint64_t x183 = 1854LLU;
	uint32_t x184 = 56450290U;
	volatile uint64_t t39 = 19449590093513556LLU;

	t39 = ((x181+(x182|x183))-x184);

	if (t39 != 5047622481574474LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x187 = 197109370233541179LLU;
	uint8_t x188 = 14U;
	uint64_t t40 = 1314902LLU;

	t40 = ((x185+(x186|x187))-x188);

	if (t40 != 18446744073709539949LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x189 = 2;
	uint32_t x191 = 1286533179U;
	volatile int32_t x192 = INT32_MIN;
	uint32_t t41 = 57166U;

	t41 = ((x189+(x190|x191))-x192);

	if (t41 != 3435069121U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x197 = 149;
	static int32_t x198 = INT32_MIN;
	int8_t x199 = -1;
	int32_t t42 = 5650;

	t42 = ((x197+(x198|x199))-x200);

	if (t42 != -208372781) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x201 = -1;
	static int8_t x202 = -6;
	static int16_t x203 = -1;
	volatile uint32_t x204 = 8U;
	volatile uint32_t t43 = 134675884U;

	t43 = ((x201+(x202|x203))-x204);

	if (t43 != 4294967286U) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x205 = -1;
	static uint64_t x207 = 41LLU;
	int16_t x208 = INT16_MIN;
	uint64_t t44 = 1322994748471LLU;

	t44 = ((x205+(x206|x207))-x208);

	if (t44 != 32750LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x209 = 13985U;
	volatile int8_t x210 = INT8_MAX;
	int16_t x211 = INT16_MIN;
	volatile int32_t x212 = -1;
	volatile uint32_t t45 = 250122U;

	t45 = ((x209+(x210|x211))-x212);

	if (t45 != 4294948641U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x213 = INT16_MAX;
	uint8_t x214 = UINT8_MAX;
	int64_t x215 = -1LL;
	int32_t x216 = -205620102;

	t46 = ((x213+(x214|x215))-x216);

	if (t46 != 205652868LL) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint32_t x217 = 93175U;
	int16_t x218 = INT16_MIN;
	int16_t x219 = -1;
	int8_t x220 = 1;

	t47 = ((x217+(x218|x219))-x220);

	if (t47 != 93173U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x221 = INT16_MIN;
	int16_t x222 = -1;
	static int32_t x223 = 1926;
	int8_t x224 = INT8_MAX;
	volatile int32_t t48 = 835;

	t48 = ((x221+(x222|x223))-x224);

	if (t48 != -32896) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x225 = -1LL;
	int32_t x226 = INT32_MAX;
	static int8_t x227 = INT8_MIN;
	uint8_t x228 = 3U;
	volatile int64_t t49 = -571123LL;

	t49 = ((x225+(x226|x227))-x228);

	if (t49 != -5LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x233 = INT8_MAX;
	uint8_t x234 = UINT8_MAX;
	static volatile uint16_t x235 = 3U;
	static int32_t t50 = 0;

	t50 = ((x233+(x234|x235))-x236);

	if (t50 != 410) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x245 = UINT64_MAX;
	static int16_t x246 = INT16_MAX;
	static volatile int8_t x247 = INT8_MIN;
	uint32_t x248 = 9509U;
	volatile uint64_t t51 = 6098957527381LLU;

	t51 = ((x245+(x246|x247))-x248);

	if (t51 != 18446744073709542105LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x249 = INT8_MIN;
	static int16_t x251 = INT16_MIN;
	volatile uint16_t x252 = 577U;
	volatile int32_t t52 = -58236215;

	t52 = ((x249+(x250|x251))-x252);

	if (t52 != -26641) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x254 = 4U;
	static volatile int64_t x255 = -460610119114LL;
	int8_t x256 = INT8_MAX;
	static volatile int64_t t53 = 231738119139492985LL;

	t53 = ((x253+(x254|x255))-x256);

	if (t53 != -407031751796LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x257 = UINT8_MAX;
	static volatile int32_t x258 = INT32_MIN;
	int64_t x259 = 16159387617592910LL;
	uint8_t x260 = UINT8_MAX;
	static int64_t t54 = -30847914LL;

	t54 = ((x257+(x258|x259))-x260);

	if (t54 != -1631844786LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x261 = -530;
	volatile int64_t x262 = -1LL;

	t55 = ((x261+(x262|x263))-x264);

	if (t55 != 2147483117LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x265 = 958U;
	uint32_t x266 = 105924788U;
	static int16_t x267 = INT16_MAX;
	uint32_t x268 = 87683941U;
	uint32_t t56 = 11U;

	t56 = ((x265+(x266|x267))-x268);

	if (t56 != 18255960U) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x269 = UINT16_MAX;
	int8_t x270 = INT8_MAX;
	int32_t x271 = INT32_MIN;
	int64_t x272 = -6089150053288956LL;

	t57 = ((x269+(x270|x271))-x272);

	if (t57 != 6089147905870970LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x273 = INT16_MIN;
	int32_t x274 = 351;
	int16_t x275 = -1;

	t58 = ((x273+(x274|x275))-x276);

	if (t58 != 16606705753938814699LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x278 = INT32_MIN;
	int8_t x280 = 1;
	uint32_t t59 = 26026406U;

	t59 = ((x277+(x278|x279))-x280);

	if (t59 != 2147483646U) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x281 = UINT32_MAX;
	static uint16_t x282 = 28U;
	volatile int8_t x283 = -1;
	int8_t x284 = INT8_MIN;

	t60 = ((x281+(x282|x283))-x284);

	if (t60 != 126U) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x285 = INT64_MAX;
	int8_t x286 = INT8_MIN;
	int32_t x287 = INT32_MIN;
	uint32_t x288 = 489U;
	int64_t t61 = -115797214896557717LL;

	t61 = ((x285+(x286|x287))-x288);

	if (t61 != 9223372036854775190LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x289 = 116256107U;
	uint32_t x290 = 3114627U;
	volatile int64_t x291 = -1LL;
	static uint64_t x292 = 46893LLU;
	uint64_t t62 = 81099924394LLU;

	t62 = ((x289+(x290|x291))-x292);

	if (t62 != 116209213LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x297 = -262005416LL;
	volatile int16_t x299 = -5;
	uint16_t x300 = 1663U;
	volatile int64_t t63 = -687195LL;

	t63 = ((x297+(x298|x299))-x300);

	if (t63 != -262007080LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x301 = 849LLU;
	uint8_t x302 = 0U;
	static int8_t x303 = INT8_MIN;
	uint32_t x304 = 8079034U;
	uint64_t t64 = 1220669381509926804LLU;

	t64 = ((x301+(x302|x303))-x304);

	if (t64 != 18446744073701473303LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x305 = INT16_MIN;
	int16_t x306 = -110;
	int64_t x307 = -26744924015LL;
	static volatile int64_t t65 = 63LL;

	t65 = ((x305+(x306|x307))-x308);

	if (t65 != -32876LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x309 = 1;
	uint8_t x310 = UINT8_MAX;
	uint16_t x311 = 24035U;
	int16_t x312 = INT16_MIN;
	volatile int32_t t66 = -46940547;

	t66 = ((x309+(x310|x311))-x312);

	if (t66 != 56832) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x313 = -1LL;
	int8_t x315 = INT8_MAX;
	uint32_t x316 = 621565548U;
	volatile int64_t t67 = -14027396292536822LL;

	t67 = ((x313+(x314|x315))-x316);

	if (t67 != 1525918098LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x317 = UINT32_MAX;
	volatile int16_t x320 = INT16_MIN;
	static int64_t t68 = 775547393500LL;

	t68 = ((x317+(x318|x319))-x320);

	if (t68 != 4295000062LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x323 = 84LLU;
	int64_t x324 = 433183967011436LL;

	t69 = ((x321+(x322|x323))-x324);

	if (t69 != 18446310889742540096LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x325 = 6LL;
	int64_t x326 = -1LL;
	int16_t x327 = INT16_MIN;
	static volatile int64_t t70 = 108375LL;

	t70 = ((x325+(x326|x327))-x328);

	if (t70 != -103710LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x329 = INT64_MIN;
	int32_t x330 = 1599122;
	int64_t x331 = INT64_MAX;
	uint8_t x332 = 3U;
	volatile int64_t t71 = 0LL;

	t71 = ((x329+(x330|x331))-x332);

	if (t71 != -4LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x333 = 910835322U;
	uint16_t x334 = UINT16_MAX;
	volatile uint64_t x335 = 79064844366671106LLU;
	volatile uint64_t t72 = 6774474698161878060LLU;

	t72 = ((x333+(x334|x335))-x336);

	if (t72 != 79064845277543930LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x337 = 1;
	uint32_t x338 = 4U;
	volatile int64_t x339 = INT64_MIN;
	int32_t x340 = INT32_MIN;

	t73 = ((x337+(x338|x339))-x340);

	if (t73 != -9223372034707292155LL) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int32_t x341 = -1;
	int64_t x342 = -2874278862260LL;
	int16_t x343 = INT16_MAX;
	static volatile int8_t x344 = INT8_MIN;

	t74 = ((x341+(x342|x343))-x344);

	if (t74 != -2874278838146LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x345 = 28U;
	uint32_t x346 = UINT32_MAX;

	t75 = ((x345+(x346|x347))-x348);

	if (t75 != 19U) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x350 = -1;
	int8_t x352 = INT8_MAX;
	volatile uint64_t t76 = 3946LLU;

	t76 = ((x349+(x350|x351))-x352);

	if (t76 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x353 = INT64_MAX;
	static int64_t x354 = INT64_MIN;
	int64_t t77 = 22240619759617LL;

	t77 = ((x353+(x354|x355))-x356);

	if (t77 != 2LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x357 = 16450013199763728LL;
	uint32_t x358 = UINT32_MAX;
	uint16_t x359 = 1211U;
	volatile uint16_t x360 = 2U;
	int64_t t78 = -26242174924042LL;

	t78 = ((x357+(x358|x359))-x360);

	if (t78 != 16450017494731021LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x361 = 2U;
	int16_t x362 = INT16_MIN;
	uint64_t x363 = 24060321141588LLU;
	static uint8_t x364 = 116U;
	uint64_t t79 = 1106LLU;

	t79 = ((x361+(x362|x363))-x364);

	if (t79 != 18446744073709523682LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x365 = INT16_MIN;
	static uint16_t x366 = 357U;
	int8_t x367 = INT8_MIN;
	int64_t x368 = -1033944104081176532LL;
	int64_t t80 = 21565274LL;

	t80 = ((x365+(x366|x367))-x368);

	if (t80 != 1033944104081143737LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x370 = INT32_MIN;
	uint64_t x371 = UINT64_MAX;
	static int16_t x372 = -1;

	t81 = ((x369+(x370|x371))-x372);

	if (t81 != 2147483647LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x373 = UINT32_MAX;
	volatile int64_t x374 = INT64_MIN;
	static volatile int8_t x375 = INT8_MIN;
	int8_t x376 = -1;
	static int64_t t82 = 419591408513LL;

	t82 = ((x373+(x374|x375))-x376);

	if (t82 != 4294967168LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x377 = 8118U;
	int32_t x378 = INT32_MIN;
	uint8_t x379 = UINT8_MAX;
	int32_t x380 = INT32_MAX;
	uint32_t t83 = 71323341U;

	t83 = ((x377+(x378|x379))-x380);

	if (t83 != 8374U) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x385 = -23;
	static int64_t x386 = INT64_MIN;
	int32_t x388 = INT32_MIN;

	t84 = ((x385+(x386|x387))-x388);

	if (t84 != 2147483497LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x389 = INT32_MIN;
	uint16_t x392 = 200U;
	uint32_t t85 = 11931U;

	t85 = ((x389+(x390|x391))-x392);

	if (t85 != 1999236909U) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x393 = UINT64_MAX;
	int32_t x394 = INT32_MIN;
	uint16_t x395 = UINT16_MAX;
	int8_t x396 = -1;
	uint64_t t86 = 705517431LLU;

	t86 = ((x393+(x394|x395))-x396);

	if (t86 != 18446744071562133503LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x397 = UINT32_MAX;
	int16_t x398 = -1;
	static uint8_t x399 = UINT8_MAX;
	int64_t x400 = INT64_MAX;
	int64_t t87 = -61LL;

	t87 = ((x397+(x398|x399))-x400);

	if (t87 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x405 = INT64_MAX;
	uint64_t x406 = 7662269LLU;
	volatile uint64_t x407 = 140383794299370651LLU;
	volatile int8_t x408 = INT8_MIN;
	static volatile uint64_t t88 = 25916028508983LLU;

	t88 = ((x405+(x406|x407))-x408);

	if (t88 != 9363755831155228478LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x409 = 23760350U;
	volatile int16_t x410 = -1;
	int8_t x411 = INT8_MIN;
	static volatile uint64_t x412 = 89539LLU;
	static uint64_t t89 = 2LLU;

	t89 = ((x409+(x410|x411))-x412);

	if (t89 != 23670810LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x413 = 0;
	int16_t x414 = -295;
	int64_t t90 = 68651055145172446LL;

	t90 = ((x413+(x414|x415))-x416);

	if (t90 != -12006LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x417 = -853177763326792319LL;
	int16_t x418 = 1;
	static int16_t x419 = 693;
	int8_t x420 = INT8_MIN;
	volatile int64_t t91 = -2147955511256493451LL;

	t91 = ((x417+(x418|x419))-x420);

	if (t91 != -853177763326791498LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x421 = -123LL;
	uint16_t x422 = 14U;
	int16_t x423 = INT16_MIN;
	static uint32_t x424 = 261921U;
	int64_t t92 = 2124792408754LL;

	t92 = ((x421+(x422|x423))-x424);

	if (t92 != -294798LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x425 = INT8_MAX;
	volatile int16_t x426 = INT16_MIN;
	int64_t x427 = 4422528111LL;
	int64_t x428 = INT64_MIN;
	int64_t t93 = 4342591327183997331LL;

	t93 = ((x425+(x426|x427))-x428);

	if (t93 != 9223372036854770926LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x429 = INT16_MIN;
	int32_t x430 = INT32_MIN;
	static int64_t x431 = INT64_MAX;
	int32_t x432 = INT32_MIN;
	int64_t t94 = -328LL;

	t94 = ((x429+(x430|x431))-x432);

	if (t94 != 2147450879LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x434 = -58;
	uint32_t x435 = UINT32_MAX;
	volatile uint16_t x436 = 12854U;

	t95 = ((x433+(x434|x435))-x436);

	if (t95 != 2147470793U) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x441 = 1770780515243LLU;
	volatile uint32_t x442 = 1700U;
	int16_t x443 = INT16_MAX;
	uint32_t x444 = 337487U;
	uint64_t t96 = 52785604186520LLU;

	t96 = ((x441+(x442|x443))-x444);

	if (t96 != 1770780210523LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x445 = INT8_MIN;
	uint16_t x446 = 2693U;
	static int64_t x447 = INT64_MIN;
	int64_t t97 = 2580118463083106LL;

	t97 = ((x445+(x446|x447))-x448);

	if (t97 != -9223372036854740475LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x449 = UINT16_MAX;
	static int8_t x450 = INT8_MAX;
	volatile int16_t x451 = -29;
	volatile int8_t x452 = -3;
	volatile int32_t t98 = 141914;

	t98 = ((x449+(x450|x451))-x452);

	if (t98 != 65537) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x453 = 16282723758956LL;
	static volatile int32_t x454 = -209;
	int16_t x455 = -2687;
	int64_t t99 = -73231227585153LL;

	t99 = ((x453+(x454|x455))-x456);

	if (t99 != 16282723758874LL) { NG(); } else { ; }
	
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

