#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x9 = INT64_MIN;
uint16_t x12 = 7U;
int16_t x16 = -1;
int8_t x19 = 5;
uint64_t x22 = UINT64_MAX;
static uint64_t x24 = 29551817LLU;
int16_t x26 = -1;
int32_t x28 = 2027;
static volatile int8_t x31 = INT8_MIN;
uint64_t x41 = 8797905750LLU;
volatile int32_t x42 = INT32_MAX;
int8_t x43 = INT8_MIN;
volatile uint64_t x46 = 535265998175130LLU;
volatile uint32_t x47 = 352675664U;
volatile int32_t t12 = -62;
static uint16_t x53 = 425U;
int8_t x63 = -36;
int32_t t15 = 1811120;
int32_t t17 = -30098747;
volatile int8_t x75 = 23;
int8_t x77 = INT8_MIN;
int32_t x83 = -1;
uint64_t x84 = 3337LLU;
volatile int32_t t21 = -48;
uint16_t x90 = UINT16_MAX;
static int16_t x103 = INT16_MIN;
int8_t x105 = -1;
uint32_t x110 = UINT32_MAX;
int32_t x111 = INT32_MIN;
int32_t x126 = -1;
uint64_t x128 = 131927067LLU;
int64_t x131 = 42845604LL;
int32_t t32 = -412126;
int64_t x145 = -11464LL;
uint16_t x155 = 80U;
int32_t t39 = -4465122;
uint8_t x163 = UINT8_MAX;
int8_t x175 = -1;
static int32_t x176 = INT32_MIN;
static uint64_t x181 = 22081129293LLU;
volatile int32_t t46 = -3;
static int16_t x196 = -1;
volatile int32_t t48 = 1784;
int64_t x204 = -23LL;
int32_t t49 = 595212789;
int64_t x213 = INT64_MAX;
uint64_t x216 = 438149756071493566LLU;
volatile int8_t x224 = -1;
volatile int32_t t54 = 10729309;
int64_t x231 = 108592235137LL;
int8_t x232 = INT8_MIN;
int8_t x240 = INT8_MIN;
volatile int32_t t60 = -235971873;
int64_t x259 = INT64_MIN;
int64_t x265 = INT64_MIN;
int16_t x268 = INT16_MIN;
int64_t x271 = INT64_MIN;
static volatile int32_t t64 = 12494149;
static uint64_t x273 = UINT64_MAX;
uint16_t x275 = UINT16_MAX;
uint8_t x276 = 3U;
volatile int32_t t66 = -25877529;
int32_t t68 = -12;
volatile uint32_t x293 = 39474U;
int64_t x296 = 16794887767634175LL;
int16_t x300 = INT16_MIN;
volatile uint32_t x302 = 474U;
static uint32_t x311 = 1912893038U;
static volatile int32_t t74 = 8303;
volatile int8_t x314 = INT8_MAX;
static uint32_t x316 = 3063U;
uint64_t x324 = 202173LLU;
uint8_t x339 = 6U;
static int32_t x341 = INT32_MAX;
volatile uint32_t x344 = 1264126U;
uint16_t x347 = UINT16_MAX;
int32_t x360 = 1927235;
volatile int8_t x366 = INT8_MIN;
int16_t x369 = 3;
int32_t t89 = -1763697;
volatile uint8_t x381 = 32U;
static volatile uint8_t x382 = 1U;
volatile int32_t t92 = -238814438;
volatile uint64_t x392 = UINT64_MAX;
int32_t t93 = 39791838;
uint64_t x403 = UINT64_MAX;
int8_t x410 = -1;
int32_t t98 = 7;


void f0(void) {
	static uint64_t x1 = 1589726364LLU;
	int64_t x2 = -798462289897534571LL;
	int32_t x3 = INT32_MIN;
	uint32_t x4 = 3447125U;
	static volatile int32_t t0 = -1;

	t0 = (x1==(x2&(x3%x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = INT8_MAX;
	static int64_t x6 = INT64_MIN;
	uint64_t x7 = UINT64_MAX;
	static uint16_t x8 = 13224U;
	int32_t t1 = -233004632;

	t1 = (x5==(x6&(x7%x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = INT8_MAX;
	uint8_t x11 = 8U;
	volatile int32_t t2 = 1718;

	t2 = (x9==(x10&(x11%x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 2031362LLU;
	static volatile int64_t x14 = 3458LL;
	int8_t x15 = -1;
	volatile int32_t t3 = -1;

	t3 = (x13==(x14&(x15%x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	static int64_t x18 = INT64_MIN;
	volatile uint64_t x20 = 56389LLU;
	volatile int32_t t4 = -477;

	t4 = (x17==(x18&(x19%x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -5656;
	int64_t x23 = -1LL;
	volatile int32_t t5 = 49;

	t5 = (x21==(x22&(x23%x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x25 = INT8_MIN;
	uint16_t x27 = UINT16_MAX;
	volatile int32_t t6 = 84;

	t6 = (x25==(x26&(x27%x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x29 = 903362934;
	volatile uint32_t x30 = 113U;
	uint32_t x32 = 85833U;
	static int32_t t7 = 14;

	t7 = (x29==(x30&(x31%x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int16_t x33 = INT16_MIN;
	uint32_t x34 = UINT32_MAX;
	int8_t x35 = INT8_MAX;
	static int64_t x36 = INT64_MAX;
	static volatile int32_t t8 = 31279;

	t8 = (x33==(x34&(x35%x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x37 = 2U;
	volatile uint16_t x38 = UINT16_MAX;
	int32_t x39 = INT32_MIN;
	int8_t x40 = 1;
	volatile int32_t t9 = -18;

	t9 = (x37==(x38&(x39%x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x44 = 26U;
	int32_t t10 = 819;

	t10 = (x41==(x42&(x43%x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = 9379U;
	int16_t x48 = INT16_MIN;
	int32_t t11 = -19011;

	t11 = (x45==(x46&(x47%x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = -1;
	int8_t x50 = -1;
	int64_t x51 = -1LL;
	int8_t x52 = INT8_MAX;

	t12 = (x49==(x50&(x51%x52)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x54 = 141858U;
	int8_t x55 = -7;
	int64_t x56 = INT64_MAX;
	int32_t t13 = -1590462;

	t13 = (x53==(x54&(x55%x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x57 = 9U;
	int64_t x58 = -1LL;
	int64_t x59 = INT64_MAX;
	static int8_t x60 = INT8_MAX;
	volatile int32_t t14 = -89723750;

	t14 = (x57==(x58&(x59%x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = 0;
	uint8_t x62 = UINT8_MAX;
	volatile int8_t x64 = INT8_MIN;

	t15 = (x61==(x62&(x63%x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MIN;
	int8_t x66 = INT8_MAX;
	uint16_t x67 = UINT16_MAX;
	int32_t x68 = -1;
	int32_t t16 = 27;

	t16 = (x65==(x66&(x67%x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = 2083426LLU;
	uint16_t x70 = 77U;
	static int64_t x71 = INT64_MAX;
	static uint16_t x72 = 5671U;

	t17 = (x69==(x70&(x71%x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x73 = UINT8_MAX;
	int32_t x74 = 15366;
	uint64_t x76 = UINT64_MAX;
	int32_t t18 = 49490;

	t18 = (x73==(x74&(x75%x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x78 = 25U;
	uint8_t x79 = 6U;
	int8_t x80 = INT8_MIN;
	int32_t t19 = -6272328;

	t19 = (x77==(x78&(x79%x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = -1;
	int32_t x82 = INT32_MIN;
	volatile int32_t t20 = -49837491;

	t20 = (x81==(x82&(x83%x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x85 = -6;
	uint8_t x86 = 0U;
	uint8_t x87 = 14U;
	int64_t x88 = 33942720883534187LL;

	t21 = (x85==(x86&(x87%x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = 50;
	int32_t x91 = INT32_MIN;
	static volatile int16_t x92 = -1;
	volatile int32_t t22 = -2;

	t22 = (x89==(x90&(x91%x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = UINT16_MAX;
	uint16_t x94 = 444U;
	int64_t x95 = INT64_MIN;
	int8_t x96 = INT8_MIN;
	static volatile int32_t t23 = -21708772;

	t23 = (x93==(x94&(x95%x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = 583;
	int16_t x98 = -110;
	int16_t x99 = -12;
	uint32_t x100 = UINT32_MAX;
	int32_t t24 = 2;

	t24 = (x97==(x98&(x99%x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MIN;
	int32_t x102 = -2;
	int8_t x104 = INT8_MIN;
	int32_t t25 = -1014266139;

	t25 = (x101==(x102&(x103%x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x106 = 3;
	int64_t x107 = -520403393969921LL;
	int64_t x108 = -80LL;
	int32_t t26 = -177;

	t26 = (x105==(x106&(x107%x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MAX;
	uint64_t x112 = UINT64_MAX;
	static int32_t t27 = 207825;

	t27 = (x109==(x110&(x111%x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int8_t x113 = INT8_MIN;
	int64_t x114 = INT64_MIN;
	uint32_t x115 = 2971753U;
	int64_t x116 = INT64_MIN;
	static volatile int32_t t28 = -5996;

	t28 = (x113==(x114&(x115%x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = 2U;
	int8_t x118 = INT8_MIN;
	int16_t x119 = 1807;
	static volatile uint32_t x120 = 51U;
	static int32_t t29 = -975131872;

	t29 = (x117==(x118&(x119%x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x121 = UINT16_MAX;
	static int32_t x122 = -1;
	uint64_t x123 = 12524768LLU;
	int64_t x124 = -1LL;
	int32_t t30 = 53;

	t30 = (x121==(x122&(x123%x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x125 = -14;
	static int16_t x127 = 6447;
	int32_t t31 = 365576;

	t31 = (x125==(x126&(x127%x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MIN;
	volatile int32_t x130 = INT32_MIN;
	static int8_t x132 = -5;

	t32 = (x129==(x130&(x131%x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int64_t x133 = 292827299LL;
	int8_t x134 = -1;
	int8_t x135 = -3;
	uint64_t x136 = 2388624830297790LLU;
	static int32_t t33 = 7906075;

	t33 = (x133==(x134&(x135%x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x137 = UINT64_MAX;
	static int32_t x138 = INT32_MAX;
	int64_t x139 = INT64_MIN;
	uint32_t x140 = 9U;
	int32_t t34 = -96;

	t34 = (x137==(x138&(x139%x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = 1175959435U;
	static int32_t x142 = -1991501;
	volatile int64_t x143 = -12850418576758LL;
	static int64_t x144 = INT64_MAX;
	volatile int32_t t35 = -798915609;

	t35 = (x141==(x142&(x143%x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x146 = 14;
	uint8_t x147 = 1U;
	static int8_t x148 = 37;
	volatile int32_t t36 = 1058679510;

	t36 = (x145==(x146&(x147%x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = 6U;
	uint32_t x150 = UINT32_MAX;
	uint64_t x151 = 4224LLU;
	volatile uint16_t x152 = 74U;
	int32_t t37 = -1378840;

	t37 = (x149==(x150&(x151%x152)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = -1;
	int16_t x154 = INT16_MAX;
	static int64_t x156 = -1LL;
	volatile int32_t t38 = 0;

	t38 = (x153==(x154&(x155%x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x157 = 1U;
	uint16_t x158 = UINT16_MAX;
	int16_t x159 = 150;
	static volatile int16_t x160 = INT16_MAX;

	t39 = (x157==(x158&(x159%x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = UINT16_MAX;
	static int64_t x162 = INT64_MIN;
	uint16_t x164 = 397U;
	int32_t t40 = 9993578;

	t40 = (x161==(x162&(x163%x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = INT64_MIN;
	uint32_t x166 = 3U;
	int64_t x167 = INT64_MIN;
	volatile int16_t x168 = -1;
	static volatile int32_t t41 = -6949340;

	t41 = (x165==(x166&(x167%x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x169 = UINT32_MAX;
	uint16_t x170 = 3U;
	uint8_t x171 = UINT8_MAX;
	uint8_t x172 = UINT8_MAX;
	static int32_t t42 = 213752330;

	t42 = (x169==(x170&(x171%x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x173 = INT64_MIN;
	int64_t x174 = INT64_MAX;
	volatile int32_t t43 = -486630;

	t43 = (x173==(x174&(x175%x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x182 = INT8_MIN;
	int64_t x183 = INT64_MAX;
	uint8_t x184 = 3U;
	static int32_t t44 = 10395666;

	t44 = (x181==(x182&(x183%x184)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x185 = 11383U;
	int16_t x186 = -6;
	uint8_t x187 = 87U;
	int16_t x188 = INT16_MIN;
	static int32_t t45 = -866288;

	t45 = (x185==(x186&(x187%x188)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x189 = INT64_MIN;
	volatile int16_t x190 = 698;
	uint8_t x191 = 37U;
	int32_t x192 = -84054;

	t46 = (x189==(x190&(x191%x192)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x193 = -1LL;
	uint64_t x194 = UINT64_MAX;
	int64_t x195 = 561LL;
	int32_t t47 = 22384;

	t47 = (x193==(x194&(x195%x196)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x197 = 36;
	int64_t x198 = -359512767149LL;
	uint64_t x199 = 7751054755432390804LLU;
	uint16_t x200 = 5U;

	t48 = (x197==(x198&(x199%x200)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x201 = 543034920897379LLU;
	int32_t x202 = 2;
	int16_t x203 = INT16_MIN;

	t49 = (x201==(x202&(x203%x204)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x209 = -1;
	int64_t x210 = -17LL;
	int64_t x211 = INT64_MIN;
	volatile int32_t x212 = 1049466900;
	int32_t t50 = -23269;

	t50 = (x209==(x210&(x211%x212)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x214 = -1;
	int8_t x215 = -1;
	int32_t t51 = 10156475;

	t51 = (x213==(x214&(x215%x216)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x217 = INT64_MIN;
	int16_t x218 = INT16_MIN;
	uint64_t x219 = 7361234LLU;
	int64_t x220 = -958113233088768LL;
	int32_t t52 = -221603;

	t52 = (x217==(x218&(x219%x220)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x221 = UINT8_MAX;
	uint8_t x222 = 5U;
	uint64_t x223 = 624LLU;
	int32_t t53 = -1864479;

	t53 = (x221==(x222&(x223%x224)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x225 = INT32_MAX;
	uint8_t x226 = UINT8_MAX;
	int8_t x227 = 26;
	uint32_t x228 = 13510U;

	t54 = (x225==(x226&(x227%x228)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x229 = UINT16_MAX;
	int8_t x230 = 6;
	int32_t t55 = 149;

	t55 = (x229==(x230&(x231%x232)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int16_t x233 = INT16_MIN;
	volatile uint8_t x234 = 1U;
	uint32_t x235 = 65432675U;
	uint16_t x236 = UINT16_MAX;
	volatile int32_t t56 = 29791101;

	t56 = (x233==(x234&(x235%x236)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x237 = INT8_MIN;
	int32_t x238 = -49491;
	int8_t x239 = INT8_MIN;
	static int32_t t57 = -3500922;

	t57 = (x237==(x238&(x239%x240)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x241 = 37;
	int32_t x242 = INT32_MIN;
	static int8_t x243 = INT8_MIN;
	static int32_t x244 = -7799189;
	volatile int32_t t58 = -1302538;

	t58 = (x241==(x242&(x243%x244)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x245 = 321;
	int8_t x246 = 15;
	int8_t x247 = INT8_MAX;
	int8_t x248 = INT8_MAX;
	int32_t t59 = 20688;

	t59 = (x245==(x246&(x247%x248)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x253 = 124U;
	uint32_t x254 = 573U;
	int8_t x255 = INT8_MIN;
	int32_t x256 = INT32_MAX;

	t60 = (x253==(x254&(x255%x256)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x257 = INT8_MIN;
	uint16_t x258 = 6133U;
	uint16_t x260 = 92U;
	int32_t t61 = 311;

	t61 = (x257==(x258&(x259%x260)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x261 = INT64_MIN;
	int8_t x262 = INT8_MIN;
	int8_t x263 = -1;
	int8_t x264 = 55;
	volatile int32_t t62 = -1897;

	t62 = (x261==(x262&(x263%x264)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x266 = 156617213U;
	int16_t x267 = INT16_MIN;
	int32_t t63 = -1465;

	t63 = (x265==(x266&(x267%x268)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x269 = UINT8_MAX;
	int64_t x270 = INT64_MIN;
	int8_t x272 = 22;

	t64 = (x269==(x270&(x271%x272)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x274 = -1LL;
	volatile int32_t t65 = 1594;

	t65 = (x273==(x274&(x275%x276)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x277 = 1;
	static int8_t x278 = INT8_MIN;
	int32_t x279 = INT32_MIN;
	int32_t x280 = INT32_MAX;

	t66 = (x277==(x278&(x279%x280)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x281 = UINT64_MAX;
	volatile int16_t x282 = -24;
	int16_t x283 = -1;
	int64_t x284 = -948108648072626LL;
	volatile int32_t t67 = 3345612;

	t67 = (x281==(x282&(x283%x284)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x285 = -1LL;
	uint16_t x286 = UINT16_MAX;
	static int8_t x287 = -60;
	uint64_t x288 = 2472865LLU;

	t68 = (x285==(x286&(x287%x288)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x289 = 110802485U;
	uint8_t x290 = 38U;
	int32_t x291 = -1;
	volatile uint64_t x292 = UINT64_MAX;
	static int32_t t69 = 39256207;

	t69 = (x289==(x290&(x291%x292)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x294 = INT8_MAX;
	uint64_t x295 = UINT64_MAX;
	int32_t t70 = -31;

	t70 = (x293==(x294&(x295%x296)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x297 = -1LL;
	volatile int64_t x298 = -7213347259810LL;
	volatile int64_t x299 = INT64_MAX;
	volatile int32_t t71 = 0;

	t71 = (x297==(x298&(x299%x300)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x301 = 701U;
	int64_t x303 = 9039486263LL;
	uint8_t x304 = 7U;
	volatile int32_t t72 = -105;

	t72 = (x301==(x302&(x303%x304)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x305 = 2U;
	int8_t x306 = INT8_MAX;
	volatile int16_t x307 = 9646;
	static int16_t x308 = 2015;
	int32_t t73 = 18274008;

	t73 = (x305==(x306&(x307%x308)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x309 = INT16_MIN;
	int16_t x310 = -1;
	int16_t x312 = -1;

	t74 = (x309==(x310&(x311%x312)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x313 = INT32_MIN;
	volatile uint32_t x315 = 24U;
	int32_t t75 = 2643;

	t75 = (x313==(x314&(x315%x316)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x321 = 110747LLU;
	static uint8_t x322 = 91U;
	uint64_t x323 = 800215959625037127LLU;
	volatile int32_t t76 = -10386;

	t76 = (x321==(x322&(x323%x324)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x325 = INT16_MIN;
	int8_t x326 = INT8_MIN;
	int16_t x327 = INT16_MAX;
	volatile uint16_t x328 = 375U;
	int32_t t77 = -17565;

	t77 = (x325==(x326&(x327%x328)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x329 = INT64_MIN;
	int32_t x330 = INT32_MIN;
	volatile int16_t x331 = INT16_MAX;
	static int8_t x332 = 1;
	int32_t t78 = -25;

	t78 = (x329==(x330&(x331%x332)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x333 = INT32_MIN;
	int8_t x334 = -1;
	static int8_t x335 = 0;
	uint16_t x336 = 4488U;
	int32_t t79 = 2;

	t79 = (x333==(x334&(x335%x336)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x337 = 6812205144468504LL;
	uint8_t x338 = 40U;
	int16_t x340 = INT16_MIN;
	volatile int32_t t80 = 0;

	t80 = (x337==(x338&(x339%x340)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x342 = 2048297248844LL;
	int8_t x343 = -2;
	int32_t t81 = 28899814;

	t81 = (x341==(x342&(x343%x344)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x345 = INT32_MAX;
	int16_t x346 = INT16_MIN;
	volatile int8_t x348 = -1;
	volatile int32_t t82 = -1;

	t82 = (x345==(x346&(x347%x348)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x349 = INT16_MAX;
	uint16_t x350 = 16866U;
	static uint16_t x351 = UINT16_MAX;
	uint16_t x352 = 24U;
	static volatile int32_t t83 = 86824239;

	t83 = (x349==(x350&(x351%x352)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x353 = INT32_MAX;
	int8_t x354 = 1;
	uint16_t x355 = 29U;
	int8_t x356 = INT8_MIN;
	static int32_t t84 = -224892;

	t84 = (x353==(x354&(x355%x356)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x357 = 14373U;
	int32_t x358 = 0;
	int16_t x359 = -1;
	volatile int32_t t85 = 218171264;

	t85 = (x357==(x358&(x359%x360)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x361 = INT32_MIN;
	int16_t x362 = INT16_MAX;
	int16_t x363 = -1;
	int8_t x364 = 13;
	int32_t t86 = 223856019;

	t86 = (x361==(x362&(x363%x364)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x365 = INT8_MIN;
	static uint8_t x367 = UINT8_MAX;
	volatile uint32_t x368 = 25762232U;
	static volatile int32_t t87 = 877237;

	t87 = (x365==(x366&(x367%x368)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x370 = INT32_MIN;
	int16_t x371 = 9;
	static uint64_t x372 = UINT64_MAX;
	static int32_t t88 = -27749782;

	t88 = (x369==(x370&(x371%x372)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x373 = INT16_MIN;
	static int16_t x374 = 15;
	volatile uint32_t x375 = 84349U;
	int16_t x376 = INT16_MIN;

	t89 = (x373==(x374&(x375%x376)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x377 = -1;
	volatile int16_t x378 = INT16_MIN;
	uint64_t x379 = 10162LLU;
	int32_t x380 = INT32_MIN;
	int32_t t90 = -3;

	t90 = (x377==(x378&(x379%x380)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x383 = 35U;
	int8_t x384 = INT8_MAX;
	static volatile int32_t t91 = -106574;

	t91 = (x381==(x382&(x383%x384)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x385 = -1985;
	int8_t x386 = -1;
	int32_t x387 = -47719;
	uint32_t x388 = 52U;

	t92 = (x385==(x386&(x387%x388)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x389 = 5;
	static uint32_t x390 = 38886U;
	int32_t x391 = -1;

	t93 = (x389==(x390&(x391%x392)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x393 = -1;
	int64_t x394 = INT64_MIN;
	int32_t x395 = INT32_MIN;
	int64_t x396 = INT64_MIN;
	int32_t t94 = -369333957;

	t94 = (x393==(x394&(x395%x396)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x397 = INT32_MAX;
	int16_t x398 = INT16_MAX;
	int64_t x399 = -5LL;
	int32_t x400 = 416572709;
	int32_t t95 = 950013524;

	t95 = (x397==(x398&(x399%x400)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x401 = INT16_MIN;
	int8_t x402 = INT8_MIN;
	uint8_t x404 = UINT8_MAX;
	static int32_t t96 = 635;

	t96 = (x401==(x402&(x403%x404)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x405 = UINT8_MAX;
	int64_t x406 = -1LL;
	static int16_t x407 = INT16_MAX;
	int64_t x408 = -4965238121108LL;
	volatile int32_t t97 = 0;

	t97 = (x405==(x406&(x407%x408)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x409 = UINT8_MAX;
	uint64_t x411 = 1LLU;
	static int64_t x412 = INT64_MIN;

	t98 = (x409==(x410&(x411%x412)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x413 = -1LL;
	static int64_t x414 = 252904993096LL;
	int64_t x415 = INT64_MIN;
	int64_t x416 = 9LL;
	static volatile int32_t t99 = 242;

	t99 = (x413==(x414&(x415%x416)));

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

