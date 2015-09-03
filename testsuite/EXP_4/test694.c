#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t t1 = -385266865490207LL;
static uint16_t x18 = 1453U;
uint32_t x20 = UINT32_MAX;
static int16_t x23 = -1;
volatile int64_t t5 = -16693730239255LL;
uint64_t t10 = 980780150601571419LLU;
static int8_t x54 = INT8_MAX;
int8_t x59 = -1;
volatile int32_t x64 = INT32_MAX;
uint64_t t15 = 487642271607115LLU;
int32_t x74 = INT32_MIN;
int64_t t16 = 1483649110LL;
int8_t x79 = -1;
int16_t x86 = INT16_MIN;
uint16_t x87 = 1537U;
int32_t x91 = INT32_MIN;
int64_t t20 = 1362872058LL;
uint16_t x95 = UINT16_MAX;
static int32_t x100 = 104;
static volatile int32_t x106 = 349075;
int32_t x110 = 6359;
static int64_t x121 = INT64_MIN;
static volatile int8_t x122 = -45;
uint8_t x126 = 112U;
int8_t x131 = INT8_MIN;
static volatile int16_t x134 = -1;
volatile int64_t t32 = 3LL;
int32_t x153 = INT32_MAX;
volatile int16_t x156 = INT16_MIN;
int32_t t36 = 1;
volatile uint32_t x162 = 55578U;
static int8_t x164 = INT8_MAX;
volatile int32_t t39 = -56539620;
int32_t x169 = INT32_MIN;
volatile int32_t x175 = INT32_MAX;
int64_t t41 = 81535LL;
int32_t x180 = INT32_MIN;
int64_t x185 = INT64_MAX;
int8_t x187 = INT8_MIN;
static volatile int64_t t44 = -1716974721571084363LL;
volatile uint32_t x189 = UINT32_MAX;
uint64_t t46 = 1LLU;
volatile int64_t x198 = INT64_MAX;
volatile int16_t x204 = INT16_MAX;
int32_t t48 = 25735;
int8_t x206 = INT8_MIN;
uint16_t x208 = 7792U;
int8_t x210 = -1;
volatile int64_t t50 = 429141784903187110LL;
uint32_t t51 = 18213364U;
volatile int64_t x219 = -1LL;
int64_t x224 = 27500052812LL;
volatile uint64_t t53 = 158166255128803645LLU;
volatile uint64_t t55 = 41663004791259LLU;
uint8_t x235 = 2U;
int8_t x236 = INT8_MAX;
int8_t x238 = -1;
int16_t x244 = INT16_MAX;
int64_t x276 = -81733548LL;
int16_t x279 = INT16_MIN;
int64_t x299 = -1LL;
volatile int64_t t72 = -76972LL;
volatile uint64_t x302 = UINT64_MAX;
uint64_t x309 = 0LLU;
int8_t x333 = INT8_MIN;
static volatile int32_t x334 = -3062888;
int8_t x337 = INT8_MAX;
static int32_t t82 = 231242661;
int8_t x363 = -1;
int8_t x366 = INT8_MIN;
volatile uint64_t t87 = 7LLU;
static int64_t x372 = -1LL;
int64_t t89 = 13241303828LL;
volatile uint16_t x382 = 0U;
uint16_t x383 = UINT16_MAX;
volatile int32_t t91 = 3622;
uint16_t x392 = 1421U;
volatile int16_t x396 = INT16_MIN;
volatile uint8_t x397 = 63U;
static volatile uint16_t x399 = UINT16_MAX;
static uint16_t x400 = 187U;
uint64_t x411 = UINT64_MAX;
uint64_t t98 = 469435493867984468LLU;
int16_t x420 = INT16_MIN;


void f0(void) {
	volatile uint64_t x1 = 4LLU;
	int64_t x2 = 2829398342578LL;
	int8_t x3 = INT8_MIN;
	int64_t x4 = -7991381LL;
	uint64_t t0 = 928525714670012LLU;

	t0 = (x1%(x2-(x3%x4)));

	if (t0 != 4LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MAX;
	static volatile int8_t x6 = INT8_MIN;
	int16_t x7 = -2028;
	volatile uint16_t x8 = UINT16_MAX;

	t1 = (x5%(x6-(x7%x8)));

	if (t1 != 207LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = INT64_MAX;
	volatile int32_t x14 = INT32_MIN;
	int64_t x15 = -126660551726507918LL;
	volatile int16_t x16 = INT16_MAX;
	int64_t t2 = 6161284274915LL;

	t2 = (x13%(x14-(x15%x16)));

	if (t2 != 463175047LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x17 = 2223U;
	volatile uint32_t x19 = 8047864U;
	static volatile uint32_t t3 = 240625961U;

	t3 = (x17%(x18-(x19%x20)));

	if (t3 != 2223U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = INT64_MAX;
	static uint16_t x22 = 339U;
	static uint64_t x24 = UINT64_MAX;
	static uint64_t t4 = 261873807LLU;

	t4 = (x21%(x22-(x23%x24)));

	if (t4 != 127LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x25 = INT8_MIN;
	int64_t x26 = -488LL;
	int64_t x27 = -1288050186233422791LL;
	int64_t x28 = INT64_MIN;

	t5 = (x25%(x26-(x27%x28)));

	if (t5 != -128LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = INT64_MIN;
	static uint16_t x30 = 3161U;
	static uint16_t x31 = UINT16_MAX;
	uint8_t x32 = 29U;
	static volatile int64_t t6 = 1427869190817LL;

	t6 = (x29%(x30-(x31%x32)));

	if (t6 != -513LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x33 = 1233957846812058LLU;
	int32_t x34 = INT32_MAX;
	volatile uint8_t x35 = 114U;
	uint32_t x36 = 4161895U;
	uint64_t t7 = 151272698LLU;

	t7 = (x33%(x34-(x35%x36)));

	if (t7 != 923849060LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = 118964;
	int8_t x38 = INT8_MAX;
	static volatile uint8_t x39 = 52U;
	int32_t x40 = 11;
	int32_t t8 = -3328;

	t8 = (x37%(x38-(x39%x40)));

	if (t8 != 83) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x41 = 11LL;
	uint16_t x42 = 10U;
	int64_t x43 = INT64_MAX;
	volatile int8_t x44 = INT8_MIN;
	int64_t t9 = -743113284326LL;

	t9 = (x41%(x42-(x43%x44)));

	if (t9 != 11LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x45 = 206396059LLU;
	static int32_t x46 = INT32_MIN;
	int8_t x47 = INT8_MAX;
	volatile int64_t x48 = -11068LL;

	t10 = (x45%(x46-(x47%x48)));

	if (t10 != 206396059LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = 1;
	volatile int16_t x50 = 2;
	int8_t x51 = INT8_MIN;
	int8_t x52 = -30;
	volatile int32_t t11 = 15;

	t11 = (x49%(x50-(x51%x52)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = -1;
	static int8_t x55 = -1;
	static uint64_t x56 = 1564273197248665517LLU;
	uint64_t t12 = 136797LLU;

	t12 = (x53%(x54-(x55%x56)));

	if (t12 != 1239738903974230800LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x57 = -6979687;
	volatile int8_t x58 = -2;
	int8_t x60 = -1;
	static volatile int32_t t13 = 1201714;

	t13 = (x57%(x58-(x59%x60)));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = INT64_MAX;
	uint64_t x62 = 115088789586710LLU;
	int8_t x63 = 40;
	volatile uint64_t t14 = 12LLU;

	t14 = (x61%(x62-(x63%x64)));

	if (t14 != 41350589455337LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = INT8_MIN;
	uint64_t x66 = 3681255493111466LLU;
	uint64_t x67 = 32744082359LLU;
	static uint8_t x68 = 93U;

	t15 = (x65%(x66-(x67%x68)));

	if (t15 != 3654053221146908LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x73 = UINT32_MAX;
	static int8_t x75 = INT8_MIN;
	volatile int64_t x76 = -1LL;

	t16 = (x73%(x74-(x75%x76)));

	if (t16 != 2147483647LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x77 = 0;
	int16_t x78 = INT16_MAX;
	static uint64_t x80 = UINT64_MAX;
	static volatile uint64_t t17 = 1536LLU;

	t17 = (x77%(x78-(x79%x80)));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x81 = UINT64_MAX;
	volatile uint16_t x82 = 83U;
	static volatile uint64_t x83 = 30663234252663239LLU;
	uint8_t x84 = UINT8_MAX;
	volatile uint64_t t18 = 1817LLU;

	t18 = (x81%(x82-(x83%x84)));

	if (t18 != 35LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x85 = 62128822047LLU;
	int32_t x88 = -17;
	static volatile uint64_t t19 = 487LLU;

	t19 = (x85%(x86-(x87%x88)));

	if (t19 != 62128822047LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x89 = 5U;
	volatile int8_t x90 = INT8_MIN;
	static int64_t x92 = INT64_MIN;

	t20 = (x89%(x90-(x91%x92)));

	if (t20 != 5LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x93 = INT16_MIN;
	uint32_t x94 = 526779520U;
	uint32_t x96 = 26136923U;
	uint32_t t21 = 289717061U;

	t21 = (x93%(x94-(x95%x96)));

	if (t21 != 81222648U) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x97 = -430963427008751LL;
	int8_t x98 = INT8_MAX;
	uint64_t x99 = 241LLU;
	uint64_t t22 = 28LLU;

	t22 = (x97%(x98-(x99%x100)));

	if (t22 != 3LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = -12;
	int16_t x102 = 3;
	uint64_t x103 = 1LLU;
	static int32_t x104 = -437424;
	static uint64_t t23 = 11LLU;

	t23 = (x101%(x102-(x103%x104)));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x105 = INT8_MIN;
	volatile int64_t x107 = INT64_MIN;
	uint32_t x108 = UINT32_MAX;
	volatile int64_t t24 = 3163LL;

	t24 = (x105%(x106-(x107%x108)));

	if (t24 != -128LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x109 = INT8_MIN;
	int16_t x111 = INT16_MAX;
	static int16_t x112 = 66;
	int32_t t25 = 23;

	t25 = (x109%(x110-(x111%x112)));

	if (t25 != -128) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int16_t x113 = -1;
	volatile uint8_t x114 = 8U;
	uint64_t x115 = UINT64_MAX;
	int64_t x116 = INT64_MIN;
	uint64_t t26 = 28507269382LLU;

	t26 = (x113%(x114-(x115%x116)));

	if (t26 != 9223372036854775798LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x117 = 3U;
	int32_t x118 = INT32_MIN;
	static int64_t x119 = INT64_MAX;
	volatile uint32_t x120 = UINT32_MAX;
	int64_t t27 = -60326029LL;

	t27 = (x117%(x118-(x119%x120)));

	if (t27 != 3LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x123 = INT32_MIN;
	int32_t x124 = -1;
	int64_t t28 = 1450596LL;

	t28 = (x121%(x122-(x123%x124)));

	if (t28 != -8LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x125 = -1;
	int32_t x127 = -1;
	volatile uint32_t x128 = 9613598U;
	volatile uint32_t t29 = 15925U;

	t29 = (x125%(x126-(x127%x128)));

	if (t29 != 7302474U) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x129 = 6514U;
	volatile int16_t x130 = -72;
	uint64_t x132 = UINT64_MAX;
	static uint64_t t30 = 3LLU;

	t30 = (x129%(x130-(x131%x132)));

	if (t30 != 18LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x133 = 27U;
	static volatile int32_t x135 = INT32_MIN;
	static int8_t x136 = 36;
	int32_t t31 = -2865360;

	t31 = (x133%(x134-(x135%x136)));

	if (t31 != 8) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x137 = 8U;
	int16_t x138 = 332;
	int64_t x139 = INT64_MAX;
	volatile uint32_t x140 = 33698U;

	t32 = (x137%(x138-(x139%x140)));

	if (t32 != 8LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x141 = UINT32_MAX;
	volatile uint16_t x142 = 14274U;
	uint64_t x143 = UINT64_MAX;
	int32_t x144 = -1;
	uint64_t t33 = 86285LLU;

	t33 = (x141%(x142-(x143%x144)));

	if (t33 != 6339LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x145 = INT16_MAX;
	int8_t x146 = -6;
	int32_t x147 = 106076515;
	int16_t x148 = 2712;
	static int32_t t34 = 459785216;

	t34 = (x145%(x146-(x147%x148)));

	if (t34 != 1792) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x149 = INT16_MIN;
	int8_t x150 = INT8_MIN;
	int32_t x151 = INT32_MIN;
	static int32_t x152 = 68389;
	volatile int32_t t35 = -1734;

	t35 = (x149%(x150-(x151%x152)));

	if (t35 != -377) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x154 = -657317193;
	static uint16_t x155 = 388U;

	t36 = (x153%(x154-(x155%x156)));

	if (t36 != 175530904) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x157 = -1494329;
	uint8_t x158 = 2U;
	int64_t x159 = INT64_MAX;
	int16_t x160 = INT16_MIN;
	volatile int64_t t37 = 71630LL;

	t37 = (x157%(x158-(x159%x160)));

	if (t37 != -19904LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x161 = INT16_MIN;
	volatile uint32_t x163 = UINT32_MAX;
	volatile uint32_t t38 = 20683335U;

	t38 = (x161%(x162-(x163%x164)));

	if (t38 != 25754U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x165 = INT16_MIN;
	int8_t x166 = INT8_MIN;
	int32_t x167 = 6428;
	volatile int32_t x168 = INT32_MAX;

	t39 = (x165%(x166-(x167%x168)));

	if (t39 != -6544) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x170 = -1LL;
	int32_t x171 = INT32_MAX;
	int32_t x172 = -22574;
	int64_t t40 = 1016LL;

	t40 = (x169%(x170-(x171%x172)));

	if (t40 != -2596LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x173 = 0;
	int64_t x174 = INT64_MIN;
	volatile int8_t x176 = -1;

	t41 = (x173%(x174-(x175%x176)));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x177 = INT16_MIN;
	volatile int64_t x178 = INT64_MAX;
	static int32_t x179 = INT32_MIN;
	volatile int64_t t42 = 0LL;

	t42 = (x177%(x178-(x179%x180)));

	if (t42 != -32768LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int32_t x181 = INT32_MIN;
	int8_t x182 = INT8_MIN;
	uint8_t x183 = 13U;
	volatile int8_t x184 = INT8_MIN;
	int32_t t43 = -123894;

	t43 = (x181%(x182-(x183%x184)));

	if (t43 != -68) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x186 = 414U;
	uint32_t x188 = 1848U;

	t44 = (x185%(x186-(x187%x188)));

	if (t44 != 74497LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x190 = -1;
	int64_t x191 = INT64_MAX;
	int64_t x192 = -355LL;
	int64_t t45 = 3116277738913198LL;

	t45 = (x189%(x190-(x191%x192)));

	if (t45 != 183LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x193 = INT8_MAX;
	volatile uint8_t x194 = 3U;
	uint64_t x195 = 4LLU;
	uint16_t x196 = 7843U;

	t46 = (x193%(x194-(x195%x196)));

	if (t46 != 127LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x197 = INT32_MIN;
	int16_t x199 = INT16_MAX;
	static uint32_t x200 = 435413673U;
	int64_t t47 = -2LL;

	t47 = (x197%(x198-(x199%x200)));

	if (t47 != -2147483648LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x201 = 1U;
	volatile int8_t x202 = 23;
	uint16_t x203 = 36U;

	t48 = (x201%(x202-(x203%x204)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x205 = INT32_MAX;
	static volatile int64_t x207 = -2922319470LL;
	static volatile int64_t t49 = -7685294117LL;

	t49 = (x205%(x206-(x207%x208)));

	if (t49 != 1273LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x209 = 1LL;
	int32_t x211 = INT32_MIN;
	int32_t x212 = INT32_MIN;

	t50 = (x209%(x210-(x211%x212)));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x213 = INT8_MAX;
	static uint16_t x214 = 132U;
	uint32_t x215 = UINT32_MAX;
	uint8_t x216 = 27U;

	t51 = (x213%(x214-(x215%x216)));

	if (t51 != 16U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x217 = -1;
	uint16_t x218 = 223U;
	uint32_t x220 = 175U;
	volatile int64_t t52 = -1336906962674178LL;

	t52 = (x217%(x218-(x219%x220)));

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x221 = 797LLU;
	int16_t x222 = INT16_MAX;
	uint8_t x223 = 2U;

	t53 = (x221%(x222-(x223%x224)));

	if (t53 != 797LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x225 = 111U;
	int32_t x226 = -24762;
	uint64_t x227 = 265048160728LLU;
	int64_t x228 = INT64_MIN;
	static volatile uint64_t t54 = 0LLU;

	t54 = (x225%(x226-(x227%x228)));

	if (t54 != 111LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x229 = 44;
	uint64_t x230 = UINT64_MAX;
	int32_t x231 = INT32_MIN;
	uint64_t x232 = UINT64_MAX;

	t55 = (x229%(x230-(x231%x232)));

	if (t55 != 44LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x233 = INT64_MIN;
	int16_t x234 = INT16_MIN;
	volatile int64_t t56 = 883228583316393174LL;

	t56 = (x233%(x234-(x235%x236)));

	if (t56 != -128LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x237 = 5931711359649109987LLU;
	int8_t x239 = -31;
	int8_t x240 = INT8_MAX;
	uint64_t t57 = 1LLU;

	t57 = (x237%(x238-(x239%x240)));

	if (t57 != 7LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x241 = INT32_MIN;
	int64_t x242 = INT64_MAX;
	static int32_t x243 = INT32_MAX;
	volatile int64_t t58 = -11736668LL;

	t58 = (x241%(x242-(x243%x244)));

	if (t58 != -2147483648LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x245 = INT16_MIN;
	static volatile uint8_t x246 = 3U;
	int32_t x247 = 58316660;
	int32_t x248 = INT32_MAX;
	static volatile int32_t t59 = -489516;

	t59 = (x245%(x246-(x247%x248)));

	if (t59 != -32768) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x249 = INT64_MAX;
	int16_t x250 = -1;
	int32_t x251 = -793523619;
	uint16_t x252 = 78U;
	int64_t t60 = 113931838LL;

	t60 = (x249%(x250-(x251%x252)));

	if (t60 != 7LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x253 = INT64_MAX;
	int32_t x254 = INT32_MIN;
	uint8_t x255 = 62U;
	uint64_t x256 = 868LLU;
	uint64_t t61 = 10150391998331774LLU;

	t61 = (x253%(x254-(x255%x256)));

	if (t61 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x257 = INT16_MIN;
	int16_t x258 = INT16_MIN;
	int64_t x259 = INT64_MIN;
	int8_t x260 = INT8_MIN;
	int64_t t62 = -16108091887190481LL;

	t62 = (x257%(x258-(x259%x260)));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x261 = 1U;
	int8_t x262 = INT8_MAX;
	int64_t x263 = -1LL;
	uint32_t x264 = UINT32_MAX;
	static int64_t t63 = -40118503LL;

	t63 = (x261%(x262-(x263%x264)));

	if (t63 != 1LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x265 = INT32_MIN;
	uint8_t x266 = 0U;
	static volatile uint32_t x267 = 8505242U;
	static uint16_t x268 = 175U;
	volatile uint32_t t64 = 14739517U;

	t64 = (x265%(x266-(x267%x268)));

	if (t64 != 2147483648U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x269 = INT64_MAX;
	int16_t x270 = INT16_MAX;
	int8_t x271 = 55;
	static int16_t x272 = -1;
	volatile int64_t t65 = -282325059984887663LL;

	t65 = (x269%(x270-(x271%x272)));

	if (t65 != 7LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x273 = -1;
	uint64_t x274 = 57505LLU;
	volatile uint16_t x275 = UINT16_MAX;
	volatile uint64_t t66 = 822844LLU;

	t66 = (x273%(x274-(x275%x276)));

	if (t66 != 8029LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x277 = INT8_MIN;
	volatile uint64_t x278 = 106LLU;
	static int64_t x280 = INT64_MAX;
	uint64_t t67 = 351LLU;

	t67 = (x277%(x278-(x279%x280)));

	if (t67 != 20078LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x281 = INT8_MIN;
	volatile uint16_t x282 = UINT16_MAX;
	int16_t x283 = 2542;
	int32_t x284 = 2;
	int32_t t68 = -412101369;

	t68 = (x281%(x282-(x283%x284)));

	if (t68 != -128) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x285 = 2;
	static int16_t x286 = INT16_MAX;
	int8_t x287 = 12;
	volatile uint32_t x288 = 3192740U;
	uint32_t t69 = 45U;

	t69 = (x285%(x286-(x287%x288)));

	if (t69 != 2U) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x289 = 9;
	static volatile uint16_t x290 = UINT16_MAX;
	static uint8_t x291 = UINT8_MAX;
	static int32_t x292 = INT32_MIN;
	volatile int32_t t70 = 150;

	t70 = (x289%(x290-(x291%x292)));

	if (t70 != 9) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x293 = INT32_MIN;
	volatile int32_t x294 = INT32_MAX;
	uint8_t x295 = 3U;
	volatile uint16_t x296 = UINT16_MAX;
	volatile int32_t t71 = 56;

	t71 = (x293%(x294-(x295%x296)));

	if (t71 != -4) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x297 = INT64_MIN;
	int32_t x298 = INT32_MIN;
	volatile int64_t x300 = INT64_MAX;

	t72 = (x297%(x298-(x299%x300)));

	if (t72 != -2LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x301 = -1;
	static int64_t x303 = INT64_MIN;
	static int64_t x304 = -1753932LL;
	volatile uint64_t t73 = 66LLU;

	t73 = (x301%(x302-(x303%x304)));

	if (t73 != 227599LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x305 = 28U;
	uint64_t x306 = UINT64_MAX;
	static uint16_t x307 = 10U;
	int16_t x308 = INT16_MIN;
	uint64_t t74 = 490LLU;

	t74 = (x305%(x306-(x307%x308)));

	if (t74 != 28LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x310 = -1LL;
	uint32_t x311 = 11042571U;
	static int32_t x312 = -7421;
	volatile uint64_t t75 = 4310589057451710981LLU;

	t75 = (x309%(x310-(x311%x312)));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x313 = 6;
	static volatile int8_t x314 = -3;
	int16_t x315 = INT16_MIN;
	volatile uint32_t x316 = UINT32_MAX;
	volatile uint32_t t76 = 2097437933U;

	t76 = (x313%(x314-(x315%x316)));

	if (t76 != 6U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x321 = INT8_MAX;
	int32_t x322 = INT32_MAX;
	static uint64_t x323 = 39481477263007LLU;
	volatile int8_t x324 = -1;
	volatile uint64_t t77 = 8981304897058788778LLU;

	t77 = (x321%(x322-(x323%x324)));

	if (t77 != 127LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x325 = 385813310;
	static int64_t x326 = -1LL;
	int16_t x327 = INT16_MAX;
	uint8_t x328 = UINT8_MAX;
	int64_t t78 = 552768573367LL;

	t78 = (x325%(x326-(x327%x328)));

	if (t78 != 62LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x329 = INT32_MIN;
	int32_t x330 = -5980985;
	uint8_t x331 = 61U;
	uint16_t x332 = 21U;
	int32_t t79 = -807295333;

	t79 = (x329%(x330-(x331%x332)));

	if (t79 != -303212) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x335 = 3815718U;
	int64_t x336 = INT64_MIN;
	int64_t t80 = -12175825LL;

	t80 = (x333%(x334-(x335%x336)));

	if (t80 != -128LL) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int32_t x338 = 231;
	volatile int8_t x339 = INT8_MIN;
	int32_t x340 = 5;
	int32_t t81 = 84;

	t81 = (x337%(x338-(x339%x340)));

	if (t81 != 127) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x341 = -1;
	uint8_t x342 = UINT8_MAX;
	int32_t x343 = INT32_MIN;
	static uint8_t x344 = UINT8_MAX;

	t82 = (x341%(x342-(x343%x344)));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x345 = -1;
	uint32_t x346 = 107778U;
	volatile int32_t x347 = -57016;
	int16_t x348 = INT16_MIN;
	volatile uint32_t t83 = 430628815U;

	t83 = (x345%(x346-(x347%x348)));

	if (t83 != 29489U) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x349 = UINT32_MAX;
	static volatile uint16_t x350 = 1533U;
	int8_t x351 = INT8_MAX;
	static volatile uint16_t x352 = UINT16_MAX;
	uint32_t t84 = 205364U;

	t84 = (x349%(x350-(x351%x352)));

	if (t84 != 43U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x357 = INT8_MIN;
	static uint64_t x358 = UINT64_MAX;
	volatile uint32_t x359 = UINT32_MAX;
	int64_t x360 = INT64_MAX;
	uint64_t t85 = 4377478056732776LLU;

	t85 = (x357%(x358-(x359%x360)));

	if (t85 != 4294967168LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x361 = 1182273U;
	int32_t x362 = -153575875;
	uint64_t x364 = UINT64_MAX;
	uint64_t t86 = 3132LLU;

	t86 = (x361%(x362-(x363%x364)));

	if (t86 != 1182273LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x365 = UINT16_MAX;
	int16_t x367 = -3503;
	uint64_t x368 = 1713674206086825280LLU;

	t87 = (x365%(x366-(x367%x368)));

	if (t87 != 65535LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x369 = INT32_MAX;
	int32_t x370 = INT32_MIN;
	int64_t x371 = INT64_MIN;
	volatile int64_t t88 = 511568857LL;

	t88 = (x369%(x370-(x371%x372)));

	if (t88 != 2147483647LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x377 = 1U;
	static uint32_t x378 = 1U;
	int64_t x379 = INT64_MAX;
	uint32_t x380 = 2260020U;

	t89 = (x377%(x378-(x379%x380)));

	if (t89 != 1LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x381 = INT32_MIN;
	volatile uint32_t x384 = 7725U;
	uint32_t t90 = 1U;

	t90 = (x381%(x382-(x383%x384)));

	if (t90 != 2147483648U) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x385 = 5;
	int8_t x386 = INT8_MIN;
	int8_t x387 = -3;
	int8_t x388 = -1;

	t91 = (x385%(x386-(x387%x388)));

	if (t91 != 5) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x389 = 60424848854499LLU;
	uint8_t x390 = 9U;
	uint32_t x391 = UINT32_MAX;
	uint64_t t92 = 169886479065813LLU;

	t92 = (x389%(x390-(x391%x392)));

	if (t92 != 3255546331LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x393 = -1;
	volatile int64_t x394 = -1LL;
	static int16_t x395 = INT16_MAX;
	volatile int64_t t93 = 0LL;

	t93 = (x393%(x394-(x395%x396)));

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x398 = INT8_MIN;
	int32_t t94 = -55771;

	t94 = (x397%(x398-(x399%x400)));

	if (t94 != 63) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x401 = -49;
	volatile uint16_t x402 = 107U;
	uint32_t x403 = UINT32_MAX;
	int8_t x404 = INT8_MAX;
	static volatile uint32_t t95 = 1U;

	t95 = (x401%(x402-(x403%x404)));

	if (t95 != 55U) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int16_t x405 = -17;
	int64_t x406 = INT64_MAX;
	volatile uint64_t x407 = UINT64_MAX;
	volatile int64_t x408 = -1LL;
	uint64_t t96 = 716008LLU;

	t96 = (x405%(x406-(x407%x408)));

	if (t96 != 9223372036854775792LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x409 = 8U;
	int16_t x410 = INT16_MIN;
	int8_t x412 = -1;
	uint64_t t97 = 31LLU;

	t97 = (x409%(x410-(x411%x412)));

	if (t97 != 8LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x413 = 87U;
	uint16_t x414 = UINT16_MAX;
	static uint64_t x415 = UINT64_MAX;
	volatile uint64_t x416 = 829722183600LLU;

	t98 = (x413%(x414-(x415%x416)));

	if (t98 != 87LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x417 = 67U;
	static volatile uint8_t x418 = 7U;
	int64_t x419 = -1LL;
	int64_t t99 = -1070711406539LL;

	t99 = (x417%(x418-(x419%x420)));

	if (t99 != 3LL) { NG(); } else { ; }
	
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

