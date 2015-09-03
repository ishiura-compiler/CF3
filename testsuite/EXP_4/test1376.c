#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x14 = INT16_MIN;
volatile int16_t x18 = -96;
static volatile uint32_t t3 = 762569U;
uint16_t x21 = 7U;
static uint8_t x24 = 1U;
static uint64_t x26 = UINT64_MAX;
int16_t x40 = 2891;
uint32_t x43 = 3565U;
int32_t x47 = -68234682;
int32_t x61 = INT32_MIN;
uint8_t x71 = 46U;
static int64_t x74 = INT64_MIN;
static int16_t x83 = -7065;
uint64_t x85 = UINT64_MAX;
int64_t x101 = INT64_MAX;
static uint16_t x107 = 329U;
static int32_t x118 = INT32_MAX;
int32_t x126 = 6;
volatile int8_t x129 = INT8_MAX;
volatile int64_t t29 = -799489049646995LL;
int16_t x139 = -1;
int8_t x141 = -1;
static uint8_t x148 = 1U;
static uint64_t t33 = 103047455013334LLU;
int64_t x150 = -1LL;
volatile int64_t t35 = -3819888LL;
int64_t t37 = 11LL;
int64_t x167 = -8575770965408764LL;
static uint32_t x168 = 58006U;
volatile uint64_t x171 = UINT64_MAX;
int16_t x172 = INT16_MIN;
uint32_t x174 = 11685600U;
int8_t x181 = INT8_MIN;
static volatile int32_t t42 = -5706;
int32_t x186 = INT32_MAX;
int32_t x188 = -1;
uint64_t x189 = 763970117LLU;
int8_t x194 = INT8_MAX;
static uint16_t x196 = 802U;
static int32_t t45 = -34988318;
uint32_t x197 = UINT32_MAX;
static int32_t x198 = -1;
volatile uint32_t t46 = UINT32_MAX;
int16_t x201 = -1;
volatile uint32_t t47 = 276731U;
int8_t x209 = 0;
int32_t t50 = 5;
int8_t x218 = -1;
static volatile int8_t x223 = -3;
volatile uint64_t t52 = 379884061298LLU;
int64_t x232 = INT64_MIN;
volatile uint64_t x233 = 857251340646598LLU;
uint32_t x234 = 3U;
int16_t x239 = INT16_MIN;
static int8_t x243 = -1;
int32_t x250 = 4624947;
int16_t x251 = INT16_MAX;
static int16_t x252 = INT16_MIN;
int32_t x269 = -258043;
int32_t x274 = INT32_MAX;
uint64_t x278 = UINT64_MAX;
uint8_t x285 = 7U;
volatile int64_t x286 = 2144619185145922431LL;
volatile int64_t x292 = -1LL;
int32_t x300 = INT32_MIN;
int64_t x303 = -1LL;
int16_t x306 = -1;
static uint32_t x307 = UINT32_MAX;
int8_t x308 = INT8_MAX;
int32_t t70 = 0;
int16_t x309 = INT16_MAX;
int32_t x311 = -1;
int64_t x314 = INT64_MIN;
int8_t x317 = 7;
uint64_t x321 = 449355011155017883LLU;
uint64_t t74 = 150741856530627LLU;
volatile int64_t x325 = 8106626291LL;
int32_t t78 = 0;
static int32_t t80 = -378273;
uint8_t x358 = 8U;
int16_t x361 = INT16_MAX;
int8_t x367 = -1;
int64_t x372 = -53793226LL;
int64_t x376 = INT64_MAX;
static int32_t x380 = INT32_MIN;
volatile int8_t x382 = -1;
int8_t x390 = -1;
uint16_t x391 = 426U;
uint16_t x392 = 1U;
int8_t x400 = 0;
volatile int32_t t92 = -8567916;
int8_t x402 = INT8_MIN;
uint16_t x403 = 23U;
static int8_t x404 = INT8_MAX;
uint64_t t93 = 6LLU;
static volatile int16_t x405 = INT16_MAX;
volatile int64_t x408 = INT64_MAX;
volatile int32_t t94 = 20363;
int16_t x416 = -1;
uint16_t x420 = UINT16_MAX;
int64_t x425 = INT64_MIN;


void f0(void) {
	int32_t x1 = INT32_MIN;
	int16_t x2 = -1;
	static volatile uint8_t x3 = 11U;
	uint64_t x4 = 121994788LLU;
	static volatile int32_t t0 = INT32_MIN;

	t0 = (x1&(x2-(x3<x4)));

	if (t0 != INT32_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = -1;
	volatile uint8_t x6 = 16U;
	volatile int8_t x7 = 15;
	uint8_t x8 = 1U;
	int32_t t1 = -29325;

	t1 = (x5&(x6-(x7<x8)));

	if (t1 != 16) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = 676423LL;
	volatile int64_t x15 = INT64_MIN;
	int8_t x16 = INT8_MIN;
	volatile int64_t t2 = 59540538939709LL;

	t2 = (x13&(x14-(x15<x16)));

	if (t2 != 676423LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x17 = UINT32_MAX;
	uint16_t x19 = 221U;
	int16_t x20 = INT16_MIN;

	t3 = (x17&(x18-(x19<x20)));

	if (t3 != 4294967200U) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x22 = INT8_MIN;
	uint16_t x23 = 668U;
	static int32_t t4 = -111262;

	t4 = (x21&(x22-(x23<x24)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x25 = UINT16_MAX;
	uint16_t x27 = 20U;
	int32_t x28 = -1;
	uint64_t t5 = 495819979858687LLU;

	t5 = (x25&(x26-(x27<x28)));

	if (t5 != 65535LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = 340LL;
	uint32_t x30 = UINT32_MAX;
	volatile uint32_t x31 = 2159U;
	static int64_t x32 = INT64_MAX;
	int64_t t6 = 1027808040366LL;

	t6 = (x29&(x30-(x31<x32)));

	if (t6 != 340LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x37 = INT64_MAX;
	uint32_t x38 = 47U;
	static uint64_t x39 = 8790593539211905981LLU;
	int64_t t7 = -8874373473LL;

	t7 = (x37&(x38-(x39<x40)));

	if (t7 != 47LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x41 = -1;
	uint32_t x42 = UINT32_MAX;
	int8_t x44 = -9;
	volatile uint32_t t8 = 72U;

	t8 = (x41&(x42-(x43<x44)));

	if (t8 != 4294967294U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x45 = -11014734LL;
	int64_t x46 = INT64_MIN;
	static uint64_t x48 = 15156051959LLU;
	volatile int64_t t9 = INT64_MIN;

	t9 = (x45&(x46-(x47<x48)));

	if (t9 != INT64_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x49 = INT16_MIN;
	uint64_t x50 = UINT64_MAX;
	int64_t x51 = INT64_MIN;
	int32_t x52 = INT32_MAX;
	uint64_t t10 = 3857LLU;

	t10 = (x49&(x50-(x51<x52)));

	if (t10 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x53 = INT8_MIN;
	volatile int8_t x54 = INT8_MAX;
	uint64_t x55 = 363109465LLU;
	uint8_t x56 = 6U;
	volatile int32_t t11 = 157651296;

	t11 = (x53&(x54-(x55<x56)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x57 = -1;
	uint16_t x58 = 28U;
	uint64_t x59 = 7415369818280518144LLU;
	int64_t x60 = -1LL;
	volatile int32_t t12 = -219;

	t12 = (x57&(x58-(x59<x60)));

	if (t12 != 27) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x62 = INT8_MIN;
	uint16_t x63 = UINT16_MAX;
	int8_t x64 = 10;
	volatile int32_t t13 = INT32_MIN;

	t13 = (x61&(x62-(x63<x64)));

	if (t13 != INT32_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x65 = 5;
	int32_t x66 = 185218829;
	int16_t x67 = INT16_MIN;
	uint32_t x68 = UINT32_MAX;
	volatile int32_t t14 = 10719100;

	t14 = (x65&(x66-(x67<x68)));

	if (t14 != 4) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x69 = -1;
	static int16_t x70 = INT16_MAX;
	int8_t x72 = INT8_MIN;
	static volatile int32_t t15 = -3751;

	t15 = (x69&(x70-(x71<x72)));

	if (t15 != 32767) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x73 = INT32_MIN;
	uint8_t x75 = 10U;
	static int8_t x76 = INT8_MIN;
	int64_t t16 = INT64_MIN;

	t16 = (x73&(x74-(x75<x76)));

	if (t16 != INT64_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x77 = INT64_MIN;
	volatile uint16_t x78 = UINT16_MAX;
	int8_t x79 = INT8_MIN;
	int64_t x80 = -22LL;
	volatile int64_t t17 = 93624881LL;

	t17 = (x77&(x78-(x79<x80)));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x81 = 27U;
	int16_t x82 = INT16_MIN;
	uint32_t x84 = 25571440U;
	volatile uint32_t t18 = 8226683U;

	t18 = (x81&(x82-(x83<x84)));

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint8_t x86 = 125U;
	uint32_t x87 = 2440479U;
	int64_t x88 = -511498084457696LL;
	volatile uint64_t t19 = 41591420815LLU;

	t19 = (x85&(x86-(x87<x88)));

	if (t19 != 125LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x89 = 3U;
	uint32_t x90 = 0U;
	uint8_t x91 = 0U;
	int64_t x92 = -11411940867401LL;
	static volatile uint32_t t20 = 21176U;

	t20 = (x89&(x90-(x91<x92)));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x93 = UINT8_MAX;
	uint8_t x94 = 9U;
	static volatile int16_t x95 = -5574;
	int64_t x96 = INT64_MIN;
	volatile int32_t t21 = 18415183;

	t21 = (x93&(x94-(x95<x96)));

	if (t21 != 9) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x97 = INT32_MAX;
	static int32_t x98 = -91496466;
	int8_t x99 = INT8_MIN;
	int64_t x100 = INT64_MIN;
	int32_t t22 = -4;

	t22 = (x97&(x98-(x99<x100)));

	if (t22 != 2055987182) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int8_t x102 = -1;
	volatile uint8_t x103 = UINT8_MAX;
	int16_t x104 = INT16_MIN;
	static int64_t t23 = INT64_MAX;

	t23 = (x101&(x102-(x103<x104)));

	if (t23 != INT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x105 = INT16_MIN;
	int64_t x106 = -1LL;
	int8_t x108 = -4;
	static int64_t t24 = -9269LL;

	t24 = (x105&(x106-(x107<x108)));

	if (t24 != -32768LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x109 = 62U;
	volatile int32_t x110 = INT32_MAX;
	volatile uint8_t x111 = 1U;
	int8_t x112 = INT8_MIN;
	int32_t t25 = -130498633;

	t25 = (x109&(x110-(x111<x112)));

	if (t25 != 62) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x117 = UINT64_MAX;
	uint32_t x119 = 2984U;
	static int16_t x120 = 134;
	uint64_t t26 = 19856525711579LLU;

	t26 = (x117&(x118-(x119<x120)));

	if (t26 != 2147483647LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x121 = INT16_MIN;
	int8_t x122 = INT8_MIN;
	static int16_t x123 = INT16_MAX;
	int16_t x124 = -1;
	int32_t t27 = 122653360;

	t27 = (x121&(x122-(x123<x124)));

	if (t27 != -32768) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x125 = INT16_MIN;
	volatile int8_t x127 = INT8_MIN;
	int16_t x128 = INT16_MAX;
	volatile int32_t t28 = 107564;

	t28 = (x125&(x126-(x127<x128)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x130 = 35756LL;
	volatile uint16_t x131 = 8U;
	volatile uint64_t x132 = 25LLU;

	t29 = (x129&(x130-(x131<x132)));

	if (t29 != 43LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x133 = INT32_MIN;
	uint8_t x134 = UINT8_MAX;
	static int64_t x135 = -7LL;
	int64_t x136 = INT64_MIN;
	volatile int32_t t30 = -483566;

	t30 = (x133&(x134-(x135<x136)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x137 = UINT16_MAX;
	volatile int32_t x138 = 1367;
	static int8_t x140 = -45;
	volatile int32_t t31 = 7156181;

	t31 = (x137&(x138-(x139<x140)));

	if (t31 != 1367) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x142 = 8563049989486LLU;
	static uint32_t x143 = 349U;
	uint8_t x144 = 26U;
	static uint64_t t32 = 41277984163712273LLU;

	t32 = (x141&(x142-(x143<x144)));

	if (t32 != 8563049989486LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x145 = -355315398LL;
	uint64_t x146 = 62LLU;
	uint32_t x147 = 14178U;

	t33 = (x145&(x146-(x147<x148)));

	if (t33 != 58LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x149 = INT64_MIN;
	uint32_t x151 = 1994U;
	int16_t x152 = -60;
	int64_t t34 = INT64_MIN;

	t34 = (x149&(x150-(x151<x152)));

	if (t34 != INT64_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x153 = -481LL;
	int8_t x154 = INT8_MIN;
	uint16_t x155 = UINT16_MAX;
	uint32_t x156 = 6U;

	t35 = (x153&(x154-(x155<x156)));

	if (t35 != -512LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x157 = 533U;
	static int32_t x158 = INT32_MAX;
	int64_t x159 = INT64_MIN;
	volatile int16_t x160 = INT16_MIN;
	uint32_t t36 = 4472U;

	t36 = (x157&(x158-(x159<x160)));

	if (t36 != 532U) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x161 = -1LL;
	static volatile int8_t x162 = INT8_MIN;
	uint8_t x163 = 1U;
	int8_t x164 = INT8_MAX;

	t37 = (x161&(x162-(x163<x164)));

	if (t37 != -129LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x165 = INT64_MIN;
	uint32_t x166 = UINT32_MAX;
	volatile int64_t t38 = 9950383LL;

	t38 = (x165&(x166-(x167<x168)));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x169 = 30650U;
	int64_t x170 = -24061LL;
	static volatile int64_t t39 = 668907108711139LL;

	t39 = (x169&(x170-(x171<x172)));

	if (t39 != 8706LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x173 = -1402;
	int8_t x175 = -61;
	volatile int8_t x176 = INT8_MIN;
	volatile uint32_t t40 = 1752533209U;

	t40 = (x173&(x174-(x175<x176)));

	if (t40 != 11684480U) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x177 = INT8_MIN;
	static int8_t x178 = INT8_MAX;
	static volatile int8_t x179 = 10;
	volatile int32_t x180 = INT32_MIN;
	static volatile int32_t t41 = 116933878;

	t41 = (x177&(x178-(x179<x180)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x182 = -11;
	uint8_t x183 = 26U;
	volatile int16_t x184 = INT16_MIN;

	t42 = (x181&(x182-(x183<x184)));

	if (t42 != -128) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x185 = INT32_MIN;
	uint8_t x187 = 1U;
	volatile int32_t t43 = -950166218;

	t43 = (x185&(x186-(x187<x188)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x190 = INT8_MAX;
	int64_t x191 = INT64_MAX;
	static int8_t x192 = 1;
	uint64_t t44 = 2797130580463876LLU;

	t44 = (x189&(x190-(x191<x192)));

	if (t44 != 69LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x193 = INT8_MIN;
	uint32_t x195 = 349395079U;

	t45 = (x193&(x194-(x195<x196)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x199 = 63LL;
	volatile int8_t x200 = -40;

	t46 = (x197&(x198-(x199<x200)));

	if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x202 = 1U;
	int8_t x203 = 0;
	uint16_t x204 = UINT16_MAX;

	t47 = (x201&(x202-(x203<x204)));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x205 = UINT32_MAX;
	int64_t x206 = INT64_MIN;
	int16_t x207 = INT16_MIN;
	uint32_t x208 = 573564517U;
	int64_t t48 = -3488647436139LL;

	t48 = (x205&(x206-(x207<x208)));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x210 = INT32_MAX;
	static volatile int64_t x211 = INT64_MIN;
	int16_t x212 = 12;
	int32_t t49 = -79057;

	t49 = (x209&(x210-(x211<x212)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x213 = -1;
	static int16_t x214 = INT16_MAX;
	int64_t x215 = 458065100015144LL;
	static volatile int8_t x216 = 12;

	t50 = (x213&(x214-(x215<x216)));

	if (t50 != 32767) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x217 = INT64_MAX;
	int32_t x219 = INT32_MIN;
	uint32_t x220 = UINT32_MAX;
	volatile int64_t t51 = 1LL;

	t51 = (x217&(x218-(x219<x220)));

	if (t51 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x221 = -507;
	volatile uint64_t x222 = 35869943127704290LLU;
	int8_t x224 = -1;

	t52 = (x221&(x222-(x223<x224)));

	if (t52 != 35869943127704065LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x229 = 990;
	static uint32_t x230 = 169695305U;
	volatile int8_t x231 = INT8_MIN;
	volatile uint32_t t53 = 371761U;

	t53 = (x229&(x230-(x231<x232)));

	if (t53 != 72U) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x235 = INT64_MAX;
	int16_t x236 = INT16_MAX;
	volatile uint64_t t54 = 356LLU;

	t54 = (x233&(x234-(x235<x236)));

	if (t54 != 2LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x237 = INT16_MIN;
	static uint64_t x238 = 6256375LLU;
	int16_t x240 = -1;
	volatile uint64_t t55 = 26883360204882LLU;

	t55 = (x237&(x238-(x239<x240)));

	if (t55 != 6225920LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x241 = UINT32_MAX;
	uint8_t x242 = 2U;
	static int16_t x244 = -830;
	volatile uint32_t t56 = 677U;

	t56 = (x241&(x242-(x243<x244)));

	if (t56 != 2U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x245 = INT16_MAX;
	int64_t x246 = -1LL;
	int32_t x247 = -430;
	int64_t x248 = INT64_MAX;
	volatile int64_t t57 = -112594471085LL;

	t57 = (x245&(x246-(x247<x248)));

	if (t57 != 32766LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x249 = -7119;
	int32_t t58 = 516458;

	t58 = (x249&(x250-(x251<x252)));

	if (t58 != 4620337) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x257 = 5U;
	int64_t x258 = INT64_MIN;
	int16_t x259 = -1;
	int32_t x260 = -1;
	volatile int64_t t59 = 242371215018LL;

	t59 = (x257&(x258-(x259<x260)));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x261 = INT32_MIN;
	int8_t x262 = INT8_MIN;
	int32_t x263 = -2639503;
	int16_t x264 = 0;
	int32_t t60 = INT32_MIN;

	t60 = (x261&(x262-(x263<x264)));

	if (t60 != INT32_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x265 = INT32_MIN;
	static uint32_t x266 = 81160067U;
	int32_t x267 = INT32_MAX;
	volatile uint16_t x268 = 96U;
	uint32_t t61 = 192785U;

	t61 = (x265&(x266-(x267<x268)));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x270 = 133640409560LLU;
	uint64_t x271 = UINT64_MAX;
	static volatile uint8_t x272 = UINT8_MAX;
	volatile uint64_t t62 = 254LLU;

	t62 = (x269&(x270-(x271<x272)));

	if (t62 != 133640228864LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x273 = INT16_MAX;
	uint64_t x275 = UINT64_MAX;
	int64_t x276 = INT64_MAX;
	static int32_t t63 = 32128;

	t63 = (x273&(x274-(x275<x276)));

	if (t63 != 32767) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x277 = 2686U;
	int8_t x279 = -1;
	volatile int64_t x280 = -1LL;
	volatile uint64_t t64 = 65929926LLU;

	t64 = (x277&(x278-(x279<x280)));

	if (t64 != 2686LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x281 = 0U;
	static int64_t x282 = INT64_MAX;
	static uint8_t x283 = 2U;
	uint16_t x284 = 14U;
	int64_t t65 = 128192856040011768LL;

	t65 = (x281&(x282-(x283<x284)));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x287 = -1;
	int32_t x288 = INT32_MIN;
	volatile int64_t t66 = 327155270930LL;

	t66 = (x285&(x286-(x287<x288)));

	if (t66 != 7LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x289 = -1;
	static volatile uint8_t x290 = UINT8_MAX;
	static volatile int16_t x291 = INT16_MAX;
	int32_t t67 = 0;

	t67 = (x289&(x290-(x291<x292)));

	if (t67 != 255) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x297 = 5U;
	static uint8_t x298 = UINT8_MAX;
	int16_t x299 = -304;
	static volatile int32_t t68 = -339752;

	t68 = (x297&(x298-(x299<x300)));

	if (t68 != 5) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x301 = INT32_MAX;
	int32_t x302 = -1;
	uint16_t x304 = 1906U;
	int32_t t69 = -475227;

	t69 = (x301&(x302-(x303<x304)));

	if (t69 != 2147483646) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x305 = INT8_MAX;

	t70 = (x305&(x306-(x307<x308)));

	if (t70 != 127) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x310 = 11179143;
	static uint8_t x312 = 1U;
	static int32_t t71 = -89061;

	t71 = (x309&(x310-(x311<x312)));

	if (t71 != 5254) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x313 = INT8_MAX;
	volatile uint32_t x315 = UINT32_MAX;
	int16_t x316 = 0;
	volatile int64_t t72 = 15506504LL;

	t72 = (x313&(x314-(x315<x316)));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x318 = INT32_MIN;
	volatile int16_t x319 = -1;
	int32_t x320 = INT32_MIN;
	static volatile int32_t t73 = -210468740;

	t73 = (x317&(x318-(x319<x320)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x322 = -1;
	int64_t x323 = -5LL;
	uint8_t x324 = 116U;

	t74 = (x321&(x322-(x323<x324)));

	if (t74 != 449355011155017882LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x326 = INT8_MIN;
	volatile int16_t x327 = INT16_MAX;
	uint8_t x328 = 24U;
	volatile int64_t t75 = 0LL;

	t75 = (x325&(x326-(x327<x328)));

	if (t75 != 8106626176LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x329 = UINT32_MAX;
	int32_t x330 = INT32_MAX;
	static int64_t x331 = INT64_MAX;
	volatile int32_t x332 = -363917899;
	volatile uint32_t t76 = 2U;

	t76 = (x329&(x330-(x331<x332)));

	if (t76 != 2147483647U) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x333 = -1LL;
	uint32_t x334 = 1585143239U;
	uint32_t x335 = 16333129U;
	int64_t x336 = -1LL;
	volatile int64_t t77 = -8542312378937707LL;

	t77 = (x333&(x334-(x335<x336)));

	if (t77 != 1585143239LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x337 = INT8_MIN;
	volatile int16_t x338 = INT16_MAX;
	int32_t x339 = 797;
	int32_t x340 = INT32_MIN;

	t78 = (x337&(x338-(x339<x340)));

	if (t78 != 32640) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x341 = 1;
	static int8_t x342 = -63;
	volatile int16_t x343 = INT16_MIN;
	int64_t x344 = -925147LL;
	volatile int32_t t79 = -6059;

	t79 = (x341&(x342-(x343<x344)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x349 = -1;
	int16_t x350 = -1;
	uint8_t x351 = 0U;
	uint64_t x352 = UINT64_MAX;

	t80 = (x349&(x350-(x351<x352)));

	if (t80 != -2) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x353 = -14141;
	uint32_t x354 = 2U;
	int64_t x355 = INT64_MIN;
	volatile uint64_t x356 = 77997507LLU;
	uint32_t t81 = 216187U;

	t81 = (x353&(x354-(x355<x356)));

	if (t81 != 2U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x357 = INT32_MIN;
	uint16_t x359 = 2U;
	static uint8_t x360 = UINT8_MAX;
	static volatile int32_t t82 = -1566;

	t82 = (x357&(x358-(x359<x360)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x362 = 150198706;
	int64_t x363 = INT64_MAX;
	volatile uint32_t x364 = 284932U;
	static int32_t t83 = -10714952;

	t83 = (x361&(x362-(x363<x364)));

	if (t83 != 22962) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x365 = -1;
	volatile int8_t x366 = 0;
	int16_t x368 = -1189;
	static volatile int32_t t84 = 13;

	t84 = (x365&(x366-(x367<x368)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x369 = INT8_MIN;
	volatile int64_t x370 = 43LL;
	static uint32_t x371 = UINT32_MAX;
	volatile int64_t t85 = 6365731881LL;

	t85 = (x369&(x370-(x371<x372)));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x373 = INT8_MIN;
	volatile int32_t x374 = INT32_MAX;
	int32_t x375 = INT32_MIN;
	static volatile int32_t t86 = -99;

	t86 = (x373&(x374-(x375<x376)));

	if (t86 != 2147483520) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x377 = -1;
	int8_t x378 = -1;
	volatile uint16_t x379 = 28U;
	int32_t t87 = -5896;

	t87 = (x377&(x378-(x379<x380)));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x381 = 1U;
	volatile int8_t x383 = 0;
	static int64_t x384 = INT64_MIN;
	int32_t t88 = 511974682;

	t88 = (x381&(x382-(x383<x384)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x385 = INT8_MIN;
	int16_t x386 = INT16_MIN;
	int8_t x387 = -1;
	static int8_t x388 = INT8_MIN;
	static volatile int32_t t89 = -1339423;

	t89 = (x385&(x386-(x387<x388)));

	if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x389 = INT64_MAX;
	volatile int64_t t90 = INT64_MAX;

	t90 = (x389&(x390-(x391<x392)));

	if (t90 != INT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x393 = -144141115LL;
	int64_t x394 = INT64_MIN;
	static int16_t x395 = -1;
	int64_t x396 = -1LL;
	volatile int64_t t91 = INT64_MIN;

	t91 = (x393&(x394-(x395<x396)));

	if (t91 != INT64_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x397 = INT16_MIN;
	static uint8_t x398 = UINT8_MAX;
	int8_t x399 = 3;

	t92 = (x397&(x398-(x399<x400)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x401 = UINT64_MAX;

	t93 = (x401&(x402-(x403<x404)));

	if (t93 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x406 = -1;
	int8_t x407 = INT8_MIN;

	t94 = (x405&(x406-(x407<x408)));

	if (t94 != 32766) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x409 = 310376287U;
	int32_t x410 = INT32_MAX;
	int16_t x411 = 2743;
	int16_t x412 = -1;
	volatile uint32_t t95 = 51525395U;

	t95 = (x409&(x410-(x411<x412)));

	if (t95 != 310376287U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x413 = 0U;
	int16_t x414 = -1;
	static int32_t x415 = -7855757;
	volatile int32_t t96 = 232047219;

	t96 = (x413&(x414-(x415<x416)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint32_t x417 = 7923957U;
	uint8_t x418 = 0U;
	uint16_t x419 = 1U;
	static volatile uint32_t t97 = 97377U;

	t97 = (x417&(x418-(x419<x420)));

	if (t97 != 7923957U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x421 = 6;
	int8_t x422 = INT8_MAX;
	int8_t x423 = INT8_MIN;
	int64_t x424 = -4242930531LL;
	static volatile int32_t t98 = 1117;

	t98 = (x421&(x422-(x423<x424)));

	if (t98 != 6) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint8_t x426 = 1U;
	volatile uint8_t x427 = 21U;
	static int16_t x428 = 1073;
	volatile int64_t t99 = 124822397370349LL;

	t99 = (x425&(x426-(x427<x428)));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

