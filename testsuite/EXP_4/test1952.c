#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x1 = INT16_MIN;
int8_t x9 = INT8_MIN;
static volatile int16_t x15 = INT16_MIN;
uint16_t x20 = 7081U;
static uint32_t x24 = UINT32_MAX;
static volatile int32_t t5 = 46882907;
int64_t x26 = INT64_MAX;
static uint16_t x38 = 1U;
static int32_t t10 = 232488240;
int16_t x45 = INT16_MAX;
int64_t x46 = 18049LL;
uint64_t x52 = 1390LLU;
static int32_t t12 = -1864;
volatile int16_t x54 = INT16_MAX;
uint32_t x60 = UINT32_MAX;
volatile int32_t t15 = 588421;
static int64_t x66 = INT64_MAX;
uint64_t x67 = UINT64_MAX;
volatile int32_t t18 = 8;
int32_t x88 = 220730240;
int64_t x89 = INT64_MIN;
static int64_t t22 = INT64_MIN;
int16_t x102 = INT16_MIN;
static volatile int32_t x104 = -466;
int8_t x111 = INT8_MIN;
int8_t x112 = INT8_MIN;
static int32_t x113 = 408675;
uint32_t x116 = 15808525U;
int32_t t28 = -416643020;
volatile uint8_t x119 = 2U;
int64_t x120 = 390LL;
static volatile int32_t t29 = -5200;
int16_t x127 = -1;
volatile int32_t t31 = 3651950;
volatile int32_t x130 = INT32_MIN;
volatile int32_t x135 = -1;
uint64_t t34 = 171401268000216LLU;
volatile uint8_t x150 = 6U;
uint32_t x152 = UINT32_MAX;
int32_t t39 = -15;
uint8_t x164 = 13U;
volatile int32_t x174 = INT32_MIN;
volatile uint32_t t43 = UINT32_MAX;
volatile int16_t x183 = 6;
int16_t x188 = -1;
uint32_t x192 = UINT32_MAX;
static uint8_t x198 = UINT8_MAX;
int32_t x202 = -1;
volatile int64_t t50 = -222812771793055443LL;
int32_t x214 = 381074;
int32_t x215 = -20;
int64_t x217 = INT64_MAX;
int8_t x221 = 5;
volatile int32_t x225 = -728797;
int32_t t56 = -286240506;
static uint8_t x233 = 4U;
volatile int32_t t58 = 171;
static int16_t x238 = INT16_MIN;
int32_t x239 = -1;
volatile int64_t x241 = 121747LL;
int32_t x242 = 1572526;
int32_t t63 = -1735;
volatile int16_t x265 = INT16_MAX;
volatile uint64_t t67 = UINT64_MAX;
uint8_t x279 = 48U;
int8_t x285 = -1;
int16_t x296 = -1;
static volatile uint64_t x298 = 17772664579362384LLU;
static volatile int8_t x299 = 6;
static volatile uint64_t x303 = 118LLU;
int64_t t75 = 0LL;
uint8_t x311 = 6U;
uint8_t x312 = 3U;
int16_t x314 = INT16_MIN;
volatile int32_t x318 = INT32_MIN;
static volatile int64_t t80 = INT64_MAX;
static uint64_t x326 = UINT64_MAX;
int16_t x327 = INT16_MAX;
int32_t x337 = 57;
volatile int64_t x340 = 14754842018LL;
volatile int32_t t84 = -376584165;
volatile uint16_t x341 = UINT16_MAX;
uint8_t x344 = 94U;
volatile int32_t t85 = -612;
static int32_t x347 = 44162;
int32_t x348 = INT32_MIN;
static int64_t x349 = INT64_MIN;
int8_t x354 = INT8_MIN;
volatile int64_t t88 = INT64_MIN;
static uint64_t x358 = UINT64_MAX;
int8_t x370 = -16;
static int64_t x375 = -1LL;
int64_t x378 = 10753115LL;
int8_t x388 = INT8_MIN;
static int16_t x390 = -2;
uint64_t x391 = 59659205757180LLU;
static int8_t x397 = 11;
int32_t x398 = INT32_MAX;


void f0(void) {
	volatile int16_t x2 = -1799;
	int16_t x3 = INT16_MAX;
	int16_t x4 = 2;
	int32_t t0 = -3200632;

	t0 = (x1-(x2==(x3|x4)));

	if (t0 != -32768) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -158480;
	int32_t x6 = 32641;
	int32_t x7 = INT32_MIN;
	uint64_t x8 = 130289740LLU;
	int32_t t1 = -1461027;

	t1 = (x5-(x6==(x7|x8)));

	if (t1 != -158480) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x10 = -1;
	uint8_t x11 = UINT8_MAX;
	uint8_t x12 = UINT8_MAX;
	volatile int32_t t2 = 0;

	t2 = (x9-(x10==(x11|x12)));

	if (t2 != -128) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 45U;
	uint64_t x14 = 35896786LLU;
	int64_t x16 = -63LL;
	int32_t t3 = -1602301;

	t3 = (x13-(x14==(x15|x16)));

	if (t3 != 45) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	static int32_t x18 = 15406074;
	int64_t x19 = -1LL;
	volatile int32_t t4 = 27;

	t4 = (x17-(x18==(x19|x20)));

	if (t4 != -32768) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = INT16_MIN;
	uint64_t x22 = UINT64_MAX;
	volatile int64_t x23 = 6628LL;

	t5 = (x21-(x22==(x23|x24)));

	if (t5 != -32768) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x25 = 159U;
	volatile uint8_t x27 = 1U;
	volatile int32_t x28 = INT32_MIN;
	uint32_t t6 = 131U;

	t6 = (x25-(x26==(x27|x28)));

	if (t6 != 159U) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 6U;
	volatile uint32_t x30 = 411572047U;
	static int32_t x31 = 0;
	int32_t x32 = -32;
	uint32_t t7 = 30666U;

	t7 = (x29-(x30==(x31|x32)));

	if (t7 != 6U) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -1;
	static int16_t x34 = 2537;
	static int16_t x35 = INT16_MAX;
	int8_t x36 = INT8_MIN;
	int32_t t8 = 230;

	t8 = (x33-(x34==(x35|x36)));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	volatile int64_t x39 = -1LL;
	int32_t x40 = -1;
	static volatile int64_t t9 = INT64_MIN;

	t9 = (x37-(x38==(x39|x40)));

	if (t9 != INT64_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x41 = -1;
	int8_t x42 = -1;
	int32_t x43 = -1;
	volatile int32_t x44 = 390;

	t10 = (x41-(x42==(x43|x44)));

	if (t10 != -2) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x47 = -284720846487281939LL;
	volatile int32_t x48 = INT32_MIN;
	volatile int32_t t11 = 5;

	t11 = (x45-(x46==(x47|x48)));

	if (t11 != 32767) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	int64_t x50 = INT64_MIN;
	int8_t x51 = INT8_MIN;

	t12 = (x49-(x50==(x51|x52)));

	if (t12 != -32768) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 3U;
	int64_t x55 = INT64_MAX;
	uint64_t x56 = 1523457LLU;
	int32_t t13 = -113843;

	t13 = (x53-(x54==(x55|x56)));

	if (t13 != 3) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -61532LL;
	int8_t x58 = INT8_MIN;
	uint8_t x59 = 29U;
	volatile int64_t t14 = -14948546LL;

	t14 = (x57-(x58==(x59|x60)));

	if (t14 != -61532LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MAX;
	uint8_t x62 = 29U;
	int32_t x63 = 265773083;
	static volatile int8_t x64 = INT8_MIN;

	t15 = (x61-(x62==(x63|x64)));

	if (t15 != 32767) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MAX;
	uint32_t x68 = UINT32_MAX;
	volatile int32_t t16 = INT32_MAX;

	t16 = (x65-(x66==(x67|x68)));

	if (t16 != INT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MAX;
	int16_t x70 = INT16_MIN;
	static int32_t x71 = INT32_MIN;
	int8_t x72 = INT8_MIN;
	static volatile int32_t t17 = INT32_MAX;

	t17 = (x69-(x70==(x71|x72)));

	if (t17 != INT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = UINT8_MAX;
	volatile int64_t x74 = -487736360270LL;
	uint32_t x75 = 0U;
	int64_t x76 = INT64_MIN;

	t18 = (x73-(x74==(x75|x76)));

	if (t18 != 255) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MAX;
	uint16_t x78 = 5U;
	int8_t x79 = -1;
	int16_t x80 = INT16_MAX;
	static int32_t t19 = -7;

	t19 = (x77-(x78==(x79|x80)));

	if (t19 != 127) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	int32_t x82 = INT32_MIN;
	uint8_t x83 = 2U;
	int64_t x84 = INT64_MIN;
	int32_t t20 = INT32_MIN;

	t20 = (x81-(x82==(x83|x84)));

	if (t20 != INT32_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = -1LL;
	volatile int8_t x86 = INT8_MAX;
	int32_t x87 = -1;
	volatile int64_t t21 = 2373310142283LL;

	t21 = (x85-(x86==(x87|x88)));

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x90 = INT32_MAX;
	static int16_t x91 = INT16_MAX;
	uint64_t x92 = 294632LLU;

	t22 = (x89-(x90==(x91|x92)));

	if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = 3768344LLU;
	static int16_t x94 = INT16_MIN;
	volatile int8_t x95 = INT8_MIN;
	int8_t x96 = INT8_MAX;
	uint64_t t23 = 19546LLU;

	t23 = (x93-(x94==(x95|x96)));

	if (t23 != 3768344LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x97 = INT64_MIN;
	uint32_t x98 = 332757114U;
	int32_t x99 = INT32_MIN;
	volatile int64_t x100 = INT64_MIN;
	volatile int64_t t24 = INT64_MIN;

	t24 = (x97-(x98==(x99|x100)));

	if (t24 != INT64_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MAX;
	static int8_t x103 = INT8_MIN;
	static int32_t t25 = 430;

	t25 = (x101-(x102==(x103|x104)));

	if (t25 != 32767) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x105 = 406653862U;
	volatile int16_t x106 = INT16_MIN;
	static int8_t x107 = INT8_MIN;
	int64_t x108 = 73088343092613748LL;
	uint32_t t26 = 22533U;

	t26 = (x105-(x106==(x107|x108)));

	if (t26 != 406653862U) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = 517U;
	volatile int64_t x110 = -1LL;
	volatile int32_t t27 = -53654662;

	t27 = (x109-(x110==(x111|x112)));

	if (t27 != 517) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x114 = 67094565878441LL;
	volatile uint32_t x115 = 82U;

	t28 = (x113-(x114==(x115|x116)));

	if (t28 != 408675) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x117 = -1;
	static int64_t x118 = INT64_MIN;

	t29 = (x117-(x118==(x119|x120)));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x121 = INT64_MIN;
	static uint32_t x122 = 146259U;
	int64_t x123 = 734277363837LL;
	uint64_t x124 = UINT64_MAX;
	static volatile int64_t t30 = INT64_MIN;

	t30 = (x121-(x122==(x123|x124)));

	if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x125 = 15U;
	int8_t x126 = INT8_MIN;
	int16_t x128 = -1;

	t31 = (x125-(x126==(x127|x128)));

	if (t31 != 15) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = 7861574LLU;
	uint8_t x131 = 3U;
	volatile uint8_t x132 = 0U;
	uint64_t t32 = 7648819428LLU;

	t32 = (x129-(x130==(x131|x132)));

	if (t32 != 7861574LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x133 = -116;
	volatile uint32_t x134 = UINT32_MAX;
	volatile uint16_t x136 = UINT16_MAX;
	volatile int32_t t33 = -682;

	t33 = (x133-(x134==(x135|x136)));

	if (t33 != -117) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x137 = 3939464831113LLU;
	uint8_t x138 = 11U;
	uint32_t x139 = 13792U;
	volatile int64_t x140 = 0LL;

	t34 = (x137-(x138==(x139|x140)));

	if (t34 != 3939464831113LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MIN;
	int8_t x142 = -1;
	int64_t x143 = INT64_MIN;
	int32_t x144 = INT32_MIN;
	volatile int64_t t35 = INT64_MIN;

	t35 = (x141-(x142==(x143|x144)));

	if (t35 != INT64_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x145 = INT8_MAX;
	uint8_t x146 = 33U;
	uint32_t x147 = UINT32_MAX;
	int32_t x148 = 349500;
	int32_t t36 = 23;

	t36 = (x145-(x146==(x147|x148)));

	if (t36 != 127) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = INT32_MIN;
	static int64_t x151 = INT64_MIN;
	volatile int32_t t37 = INT32_MIN;

	t37 = (x149-(x150==(x151|x152)));

	if (t37 != INT32_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = -1LL;
	int64_t x154 = INT64_MAX;
	int16_t x155 = INT16_MIN;
	int32_t x156 = -1;
	int64_t t38 = -119434799569LL;

	t38 = (x153-(x154==(x155|x156)));

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MAX;
	int64_t x158 = 5828668367LL;
	int64_t x159 = -1LL;
	volatile int16_t x160 = INT16_MIN;

	t39 = (x157-(x158==(x159|x160)));

	if (t39 != 127) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x161 = -1LL;
	volatile int16_t x162 = INT16_MIN;
	static uint16_t x163 = UINT16_MAX;
	volatile int64_t t40 = 964934490550354444LL;

	t40 = (x161-(x162==(x163|x164)));

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x165 = INT64_MIN;
	uint16_t x166 = 59U;
	uint32_t x167 = 391230347U;
	int8_t x168 = INT8_MIN;
	volatile int64_t t41 = INT64_MIN;

	t41 = (x165-(x166==(x167|x168)));

	if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MIN;
	int16_t x170 = INT16_MIN;
	int64_t x171 = INT64_MIN;
	static int8_t x172 = INT8_MIN;
	volatile int64_t t42 = INT64_MIN;

	t42 = (x169-(x170==(x171|x172)));

	if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = UINT32_MAX;
	int8_t x175 = 3;
	volatile int8_t x176 = INT8_MIN;

	t43 = (x173-(x174==(x175|x176)));

	if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x177 = -3922;
	int32_t x178 = INT32_MIN;
	int32_t x179 = INT32_MIN;
	int8_t x180 = 6;
	int32_t t44 = -47;

	t44 = (x177-(x178==(x179|x180)));

	if (t44 != -3922) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = -2692274;
	static int64_t x182 = INT64_MAX;
	volatile int16_t x184 = INT16_MAX;
	volatile int32_t t45 = 1;

	t45 = (x181-(x182==(x183|x184)));

	if (t45 != -2692274) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = UINT32_MAX;
	volatile int16_t x186 = -1;
	int32_t x187 = -1;
	static uint32_t t46 = 789697964U;

	t46 = (x185-(x186==(x187|x188)));

	if (t46 != 4294967294U) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x189 = 114U;
	int32_t x190 = INT32_MIN;
	uint32_t x191 = 451U;
	uint32_t t47 = 446024U;

	t47 = (x189-(x190==(x191|x192)));

	if (t47 != 114U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = INT8_MAX;
	static int16_t x194 = -11;
	static volatile int32_t x195 = -1;
	uint8_t x196 = UINT8_MAX;
	static int32_t t48 = -2637;

	t48 = (x193-(x194==(x195|x196)));

	if (t48 != 127) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = UINT64_MAX;
	int16_t x199 = -1;
	int32_t x200 = INT32_MIN;
	volatile uint64_t t49 = UINT64_MAX;

	t49 = (x197-(x198==(x199|x200)));

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = 13677LL;
	int32_t x203 = INT32_MAX;
	int64_t x204 = -359698LL;

	t50 = (x201-(x202==(x203|x204)));

	if (t50 != 13676LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x205 = UINT8_MAX;
	int32_t x206 = INT32_MIN;
	int64_t x207 = -1LL;
	static int64_t x208 = 209698491LL;
	volatile int32_t t51 = 989;

	t51 = (x205-(x206==(x207|x208)));

	if (t51 != 255) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int8_t x209 = INT8_MIN;
	uint32_t x210 = 8165U;
	static uint16_t x211 = 71U;
	int32_t x212 = -90;
	int32_t t52 = 3318522;

	t52 = (x209-(x210==(x211|x212)));

	if (t52 != -128) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = INT8_MIN;
	int8_t x216 = INT8_MIN;
	volatile int32_t t53 = -26461;

	t53 = (x213-(x214==(x215|x216)));

	if (t53 != -128) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x218 = 303;
	volatile int32_t x219 = -1;
	uint32_t x220 = UINT32_MAX;
	volatile int64_t t54 = INT64_MAX;

	t54 = (x217-(x218==(x219|x220)));

	if (t54 != INT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x222 = -1;
	uint32_t x223 = 364481660U;
	static volatile int64_t x224 = -469827LL;
	volatile int32_t t55 = 1832203;

	t55 = (x221-(x222==(x223|x224)));

	if (t55 != 5) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x226 = 3708U;
	static uint16_t x227 = UINT16_MAX;
	volatile uint64_t x228 = 1LLU;

	t56 = (x225-(x226==(x227|x228)));

	if (t56 != -728797) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = -1;
	int16_t x230 = -1;
	int64_t x231 = INT64_MIN;
	uint16_t x232 = 1U;
	static volatile int32_t t57 = -528859;

	t57 = (x229-(x230==(x231|x232)));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x234 = -30;
	volatile int16_t x235 = -1;
	static int16_t x236 = -2;

	t58 = (x233-(x234==(x235|x236)));

	if (t58 != 4) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = -1;
	static int64_t x240 = INT64_MAX;
	int32_t t59 = 361532;

	t59 = (x237-(x238==(x239|x240)));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x243 = 73U;
	int8_t x244 = -1;
	volatile int64_t t60 = 57481980706384LL;

	t60 = (x241-(x242==(x243|x244)));

	if (t60 != 121747LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x245 = UINT32_MAX;
	int16_t x246 = INT16_MIN;
	volatile uint8_t x247 = 2U;
	volatile uint16_t x248 = 7U;
	uint32_t t61 = UINT32_MAX;

	t61 = (x245-(x246==(x247|x248)));

	if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x249 = UINT64_MAX;
	int8_t x250 = -23;
	int16_t x251 = INT16_MAX;
	static int8_t x252 = -4;
	volatile uint64_t t62 = UINT64_MAX;

	t62 = (x249-(x250==(x251|x252)));

	if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x253 = 4U;
	int32_t x254 = INT32_MIN;
	uint16_t x255 = 2U;
	uint8_t x256 = 14U;

	t63 = (x253-(x254==(x255|x256)));

	if (t63 != 4) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint32_t x257 = 13617992U;
	int16_t x258 = -1;
	uint32_t x259 = 4749562U;
	static uint32_t x260 = UINT32_MAX;
	uint32_t t64 = 64U;

	t64 = (x257-(x258==(x259|x260)));

	if (t64 != 13617991U) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x261 = INT64_MIN;
	static uint64_t x262 = 20282LLU;
	uint32_t x263 = 352U;
	volatile uint16_t x264 = 280U;
	static volatile int64_t t65 = INT64_MIN;

	t65 = (x261-(x262==(x263|x264)));

	if (t65 != INT64_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x266 = -1;
	int8_t x267 = -5;
	uint64_t x268 = 5994LLU;
	static volatile int32_t t66 = 849862;

	t66 = (x265-(x266==(x267|x268)));

	if (t66 != 32767) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x269 = UINT64_MAX;
	int64_t x270 = 21689058354172775LL;
	static int16_t x271 = 93;
	int64_t x272 = -6358972941633166LL;

	t67 = (x269-(x270==(x271|x272)));

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x273 = INT16_MAX;
	static int32_t x274 = 3;
	int8_t x275 = INT8_MIN;
	volatile uint64_t x276 = UINT64_MAX;
	volatile int32_t t68 = 484840;

	t68 = (x273-(x274==(x275|x276)));

	if (t68 != 32767) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x277 = -1751;
	int16_t x278 = -1;
	volatile int64_t x280 = 9749538849LL;
	int32_t t69 = 49719639;

	t69 = (x277-(x278==(x279|x280)));

	if (t69 != -1751) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = 1;
	uint8_t x282 = 1U;
	uint32_t x283 = 1445954151U;
	static uint64_t x284 = 55725322LLU;
	static int32_t t70 = -136;

	t70 = (x281-(x282==(x283|x284)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int16_t x286 = INT16_MIN;
	int32_t x287 = -1;
	int16_t x288 = 12;
	int32_t t71 = -1;

	t71 = (x285-(x286==(x287|x288)));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MAX;
	uint32_t x290 = 7231086U;
	uint8_t x291 = 36U;
	static int64_t x292 = INT64_MIN;
	static volatile int32_t t72 = -345336415;

	t72 = (x289-(x290==(x291|x292)));

	if (t72 != 127) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x293 = UINT16_MAX;
	uint32_t x294 = UINT32_MAX;
	int16_t x295 = INT16_MAX;
	int32_t t73 = -4050;

	t73 = (x293-(x294==(x295|x296)));

	if (t73 != 65534) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x297 = 0U;
	int8_t x300 = -4;
	volatile int32_t t74 = -49;

	t74 = (x297-(x298==(x299|x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = -1LL;
	int64_t x302 = INT64_MIN;
	int32_t x304 = -1941538;

	t75 = (x301-(x302==(x303|x304)));

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x305 = 138U;
	int16_t x306 = INT16_MAX;
	uint32_t x307 = UINT32_MAX;
	volatile int32_t x308 = INT32_MAX;
	volatile int32_t t76 = 26;

	t76 = (x305-(x306==(x307|x308)));

	if (t76 != 138) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x309 = 2841U;
	int64_t x310 = -1LL;
	volatile uint32_t t77 = 1U;

	t77 = (x309-(x310==(x311|x312)));

	if (t77 != 2841U) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x313 = 5U;
	static uint64_t x315 = UINT64_MAX;
	int64_t x316 = INT64_MAX;
	static int32_t t78 = -2964;

	t78 = (x313-(x314==(x315|x316)));

	if (t78 != 5) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x317 = 54988533LLU;
	uint32_t x319 = 3U;
	int64_t x320 = -1LL;
	uint64_t t79 = 10651648046901176LLU;

	t79 = (x317-(x318==(x319|x320)));

	if (t79 != 54988533LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = INT64_MAX;
	int32_t x322 = INT32_MIN;
	int64_t x323 = -1LL;
	int8_t x324 = -1;

	t80 = (x321-(x322==(x323|x324)));

	if (t80 != INT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = -1298;
	int32_t x328 = 802990;
	volatile int32_t t81 = -3780;

	t81 = (x325-(x326==(x327|x328)));

	if (t81 != -1298) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = 1LL;
	int16_t x330 = -3581;
	int8_t x331 = -2;
	int16_t x332 = INT16_MIN;
	volatile int64_t t82 = 460599LL;

	t82 = (x329-(x330==(x331|x332)));

	if (t82 != 1LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x333 = 1786U;
	int64_t x334 = INT64_MAX;
	volatile uint16_t x335 = 364U;
	volatile int64_t x336 = INT64_MAX;
	static uint32_t t83 = 3U;

	t83 = (x333-(x334==(x335|x336)));

	if (t83 != 1785U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x338 = 1;
	static uint16_t x339 = 50U;

	t84 = (x337-(x338==(x339|x340)));

	if (t84 != 57) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x342 = 11007U;
	int16_t x343 = INT16_MAX;

	t85 = (x341-(x342==(x343|x344)));

	if (t85 != 65535) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int64_t x345 = -161015531775LL;
	int8_t x346 = INT8_MIN;
	int64_t t86 = -1893136957013075LL;

	t86 = (x345-(x346==(x347|x348)));

	if (t86 != -161015531775LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x350 = 5;
	uint16_t x351 = UINT16_MAX;
	int8_t x352 = -3;
	int64_t t87 = INT64_MIN;

	t87 = (x349-(x350==(x351|x352)));

	if (t87 != INT64_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = INT64_MIN;
	static int8_t x355 = INT8_MIN;
	volatile uint16_t x356 = UINT16_MAX;

	t88 = (x353-(x354==(x355|x356)));

	if (t88 != INT64_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = INT64_MAX;
	static int16_t x359 = INT16_MIN;
	static int64_t x360 = INT64_MIN;
	volatile int64_t t89 = INT64_MAX;

	t89 = (x357-(x358==(x359|x360)));

	if (t89 != INT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x361 = -27;
	static int64_t x362 = 9701936LL;
	int64_t x363 = INT64_MAX;
	volatile uint8_t x364 = 2U;
	volatile int32_t t90 = 1;

	t90 = (x361-(x362==(x363|x364)));

	if (t90 != -27) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x365 = 18044235LLU;
	volatile int8_t x366 = INT8_MIN;
	int64_t x367 = INT64_MIN;
	volatile int64_t x368 = INT64_MIN;
	static volatile uint64_t t91 = 442159LLU;

	t91 = (x365-(x366==(x367|x368)));

	if (t91 != 18044235LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x369 = 54U;
	int64_t x371 = 1068792841286030965LL;
	volatile int8_t x372 = INT8_MAX;
	int32_t t92 = 24426;

	t92 = (x369-(x370==(x371|x372)));

	if (t92 != 54) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x373 = UINT8_MAX;
	static uint64_t x374 = 240879628369914LLU;
	int8_t x376 = 1;
	int32_t t93 = -1178;

	t93 = (x373-(x374==(x375|x376)));

	if (t93 != 255) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = INT64_MIN;
	volatile uint16_t x379 = 455U;
	int8_t x380 = 15;
	static volatile int64_t t94 = INT64_MIN;

	t94 = (x377-(x378==(x379|x380)));

	if (t94 != INT64_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x381 = 29U;
	int32_t x382 = INT32_MIN;
	static int64_t x383 = 2825357831544LL;
	int16_t x384 = -1;
	volatile int32_t t95 = 59271;

	t95 = (x381-(x382==(x383|x384)));

	if (t95 != 29) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = INT8_MAX;
	volatile uint8_t x386 = 71U;
	static uint8_t x387 = 124U;
	int32_t t96 = -56112;

	t96 = (x385-(x386==(x387|x388)));

	if (t96 != 127) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x389 = 124U;
	volatile uint8_t x392 = 125U;
	volatile int32_t t97 = -24649;

	t97 = (x389-(x390==(x391|x392)));

	if (t97 != 124) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = INT64_MAX;
	static uint16_t x394 = 1U;
	volatile int8_t x395 = INT8_MIN;
	static int16_t x396 = -2;
	volatile int64_t t98 = INT64_MAX;

	t98 = (x393-(x394==(x395|x396)));

	if (t98 != INT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x399 = 54197678LLU;
	uint64_t x400 = 13883907LLU;
	volatile int32_t t99 = 958;

	t99 = (x397-(x398==(x399|x400)));

	if (t99 != 11) { NG(); } else { ; }
	
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

