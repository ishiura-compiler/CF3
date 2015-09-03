#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x6 = UINT16_MAX;
int64_t x9 = -8723138487683LL;
static int64_t x10 = INT64_MAX;
int64_t t2 = -2253954409LL;
volatile uint32_t x14 = UINT32_MAX;
static volatile uint16_t x17 = UINT16_MAX;
volatile int32_t x19 = -125663663;
int64_t x22 = INT64_MIN;
uint64_t x23 = 793LLU;
static int32_t x24 = -1;
int64_t x36 = 59461324687073430LL;
volatile uint32_t x39 = 15660U;
int16_t x41 = INT16_MAX;
uint64_t x45 = 157736293273714LLU;
int16_t x47 = INT16_MIN;
int64_t x52 = INT64_MAX;
static volatile int32_t t13 = -61;
int32_t x57 = -10;
int32_t x58 = INT32_MIN;
static int8_t x59 = INT8_MIN;
int16_t x62 = -795;
int16_t x65 = INT16_MIN;
volatile int32_t t16 = 381;
int16_t x69 = INT16_MIN;
uint16_t x80 = UINT16_MAX;
volatile uint32_t t25 = 207773U;
volatile int32_t x105 = -1;
int32_t x109 = -1;
int16_t x113 = -85;
static int8_t x122 = INT8_MAX;
uint8_t x123 = UINT8_MAX;
int16_t x129 = -1;
int32_t x130 = INT32_MIN;
volatile int64_t x131 = -1307136673LL;
int32_t x141 = INT32_MIN;
uint32_t x151 = UINT32_MAX;
static int16_t x152 = INT16_MIN;
int8_t x159 = INT8_MIN;
static int64_t t39 = -61LL;
int8_t x168 = -1;
volatile int32_t t41 = 0;
volatile int32_t t42 = -4;
volatile uint64_t x174 = 2652134LLU;
volatile int16_t x175 = 3332;
uint64_t x182 = 106514862929479305LLU;
int64_t x189 = INT64_MIN;
static int64_t x192 = -5922918LL;
static volatile int16_t x198 = INT16_MAX;
static uint64_t x203 = 3020LLU;
volatile int32_t t50 = 5094282;
volatile uint8_t x206 = 5U;
int64_t x217 = INT64_MAX;
volatile uint8_t x226 = 1U;
int16_t x229 = -1;
volatile int32_t t59 = -30117;
int64_t x243 = -1LL;
uint32_t x244 = 0U;
int64_t x249 = -1LL;
int32_t x250 = -1;
volatile int64_t t62 = 1364946659684729605LL;
int64_t x259 = INT64_MIN;
static volatile int16_t x264 = -12634;
int16_t x267 = INT16_MIN;
int16_t x270 = INT16_MIN;
int16_t x271 = -3;
int16_t x272 = 0;
int64_t x274 = INT64_MIN;
int8_t x277 = 1;
volatile int32_t t69 = 4277;
int32_t x281 = INT32_MIN;
volatile int8_t x286 = INT8_MIN;
volatile uint16_t x287 = UINT16_MAX;
uint32_t x288 = 2U;
static int64_t x291 = INT64_MIN;
static uint64_t t72 = 427050940009LLU;
static volatile uint64_t x295 = UINT64_MAX;
static int64_t t74 = -1LL;
static volatile uint64_t x303 = 8389411887831008LLU;
uint32_t x304 = 89253504U;
volatile int32_t t75 = 1333004;
uint32_t x312 = 20U;
static uint32_t x318 = 12836U;
int16_t x320 = -347;
uint8_t x329 = UINT8_MAX;
static int32_t x332 = -1;
int32_t t82 = -404;
static int16_t x334 = -1701;
static int32_t t83 = -329433;
static uint64_t x339 = UINT64_MAX;
int32_t x341 = INT32_MIN;
uint64_t x361 = 65493551LLU;
int8_t x362 = INT8_MAX;
int64_t x368 = -30238683LL;
int64_t x370 = 1947806856708LL;
volatile int64_t t93 = -2554193268971627LL;
int32_t x378 = -1;
int32_t x382 = INT32_MAX;
static volatile uint32_t x383 = 272352976U;
int64_t x387 = 328LL;
uint8_t x389 = 1U;
static int32_t t97 = 3;
int32_t x393 = INT32_MAX;
int16_t x395 = INT16_MAX;
int32_t x400 = -335157308;


void f0(void) {
	int64_t x1 = INT64_MIN;
	volatile int32_t x2 = -245;
	volatile int8_t x3 = 0;
	int16_t x4 = -1;
	int64_t t0 = 15026367744530484LL;

	t0 = (x1|(x2<=(x3<=x4)));

	if (t0 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MAX;
	int16_t x7 = INT16_MAX;
	static int64_t x8 = -1LL;
	volatile int64_t t1 = INT64_MAX;

	t1 = (x5|(x6<=(x7<=x8)));

	if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int64_t x11 = INT64_MIN;
	uint64_t x12 = 29940300543LLU;

	t2 = (x9|(x10<=(x11<=x12)));

	if (t2 != -8723138487683LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	int32_t x15 = INT32_MAX;
	int16_t x16 = -1;
	int32_t t3 = INT32_MIN;

	t3 = (x13|(x14<=(x15<=x16)));

	if (t3 != INT32_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x18 = -1;
	int16_t x20 = 21;
	static int32_t t4 = -5040947;

	t4 = (x17|(x18<=(x19<=x20)));

	if (t4 != 65535) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	volatile int64_t t5 = -627512104214LL;

	t5 = (x21|(x22<=(x23<=x24)));

	if (t5 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 2506012518931647LLU;
	int64_t x26 = -1LL;
	int16_t x27 = 1;
	static int32_t x28 = INT32_MAX;
	volatile uint64_t t6 = 1122833844745399LLU;

	t6 = (x25|(x26<=(x27<=x28)));

	if (t6 != 2506012518931647LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x29 = UINT32_MAX;
	uint64_t x30 = UINT64_MAX;
	static int32_t x31 = 1384;
	int64_t x32 = INT64_MAX;
	uint32_t t7 = UINT32_MAX;

	t7 = (x29|(x30<=(x31<=x32)));

	if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 67U;
	volatile int16_t x34 = -1;
	int32_t x35 = 740554023;
	int32_t t8 = 1;

	t8 = (x33|(x34<=(x35<=x36)));

	if (t8 != 67) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = UINT64_MAX;
	static int64_t x38 = -13LL;
	int16_t x40 = INT16_MIN;
	volatile uint64_t t9 = UINT64_MAX;

	t9 = (x37|(x38<=(x39<=x40)));

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x42 = UINT32_MAX;
	uint64_t x43 = UINT64_MAX;
	volatile int32_t x44 = -1;
	volatile int32_t t10 = -2031003;

	t10 = (x41|(x42<=(x43<=x44)));

	if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x46 = INT8_MIN;
	int64_t x48 = -10065210020LL;
	static volatile uint64_t t11 = 46901069596602356LLU;

	t11 = (x45|(x46<=(x47<=x48)));

	if (t11 != 157736293273715LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = UINT16_MAX;
	uint8_t x50 = UINT8_MAX;
	int32_t x51 = INT32_MIN;
	int32_t t12 = -2893670;

	t12 = (x49|(x50<=(x51<=x52)));

	if (t12 != 65535) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = -159;
	int8_t x54 = -1;
	volatile int16_t x55 = -505;
	int64_t x56 = -1277785977036719327LL;

	t13 = (x53|(x54<=(x55<=x56)));

	if (t13 != -159) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x60 = INT32_MIN;
	int32_t t14 = 5;

	t14 = (x57|(x58<=(x59<=x60)));

	if (t14 != -9) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x61 = UINT64_MAX;
	static volatile int64_t x63 = -1LL;
	int32_t x64 = INT32_MAX;
	uint64_t t15 = UINT64_MAX;

	t15 = (x61|(x62<=(x63<=x64)));

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x66 = -2;
	uint16_t x67 = UINT16_MAX;
	static int16_t x68 = 0;

	t16 = (x65|(x66<=(x67<=x68)));

	if (t16 != -32767) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x70 = INT32_MAX;
	int64_t x71 = 23020559440LL;
	int16_t x72 = -1;
	int32_t t17 = -890889675;

	t17 = (x69|(x70<=(x71<=x72)));

	if (t17 != -32768) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x73 = 276977872323795695LL;
	uint32_t x74 = UINT32_MAX;
	int16_t x75 = INT16_MAX;
	int16_t x76 = -710;
	static volatile int64_t t18 = -1LL;

	t18 = (x73|(x74<=(x75<=x76)));

	if (t18 != 276977872323795695LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = 89070U;
	static int16_t x78 = INT16_MIN;
	static int8_t x79 = INT8_MIN;
	volatile uint32_t t19 = 17705058U;

	t19 = (x77|(x78<=(x79<=x80)));

	if (t19 != 89071U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MAX;
	uint8_t x82 = 1U;
	int16_t x83 = INT16_MAX;
	int16_t x84 = -1;
	static int32_t t20 = INT32_MAX;

	t20 = (x81|(x82<=(x83<=x84)));

	if (t20 != INT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = UINT64_MAX;
	static volatile int8_t x86 = INT8_MIN;
	static int64_t x87 = INT64_MIN;
	int16_t x88 = -1;
	uint64_t t21 = UINT64_MAX;

	t21 = (x85|(x86<=(x87<=x88)));

	if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = 48U;
	volatile uint32_t x90 = 980039U;
	int32_t x91 = 6736;
	static volatile int64_t x92 = -53279534669371977LL;
	static volatile int32_t t22 = -7;

	t22 = (x89|(x90<=(x91<=x92)));

	if (t22 != 48) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = -544;
	int32_t x94 = INT32_MAX;
	uint16_t x95 = UINT16_MAX;
	uint8_t x96 = UINT8_MAX;
	volatile int32_t t23 = -1361;

	t23 = (x93|(x94<=(x95<=x96)));

	if (t23 != -544) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = -15652;
	int16_t x98 = INT16_MIN;
	static volatile int8_t x99 = -36;
	int8_t x100 = -7;
	int32_t t24 = 1194160;

	t24 = (x97|(x98<=(x99<=x100)));

	if (t24 != -15651) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = 431U;
	int8_t x102 = INT8_MIN;
	static int32_t x103 = INT32_MAX;
	static int8_t x104 = -1;

	t25 = (x101|(x102<=(x103<=x104)));

	if (t25 != 431U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x106 = INT32_MIN;
	uint64_t x107 = 26368LLU;
	int64_t x108 = INT64_MAX;
	static int32_t t26 = 515118245;

	t26 = (x105|(x106<=(x107<=x108)));

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x110 = 503U;
	uint32_t x111 = 41681U;
	uint64_t x112 = 2904067LLU;
	int32_t t27 = -438301;

	t27 = (x109|(x110<=(x111<=x112)));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int16_t x114 = INT16_MIN;
	int32_t x115 = INT32_MIN;
	uint16_t x116 = 98U;
	volatile int32_t t28 = 70788;

	t28 = (x113|(x114<=(x115<=x116)));

	if (t28 != -85) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x117 = -1;
	volatile int8_t x118 = -1;
	volatile int32_t x119 = INT32_MAX;
	uint32_t x120 = 29428U;
	volatile int32_t t29 = -3958;

	t29 = (x117|(x118<=(x119<=x120)));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x121 = INT8_MIN;
	static int64_t x124 = 1221796261739712LL;
	volatile int32_t t30 = 45;

	t30 = (x121|(x122<=(x123<=x124)));

	if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x125 = INT32_MIN;
	int16_t x126 = INT16_MIN;
	static int16_t x127 = -5;
	volatile uint32_t x128 = UINT32_MAX;
	volatile int32_t t31 = 72536400;

	t31 = (x125|(x126<=(x127<=x128)));

	if (t31 != -2147483647) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x132 = 45U;
	volatile int32_t t32 = -173;

	t32 = (x129|(x130<=(x131<=x132)));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = 558944LL;
	uint8_t x134 = 43U;
	int64_t x135 = INT64_MIN;
	static volatile int8_t x136 = INT8_MAX;
	volatile int64_t t33 = 39402141LL;

	t33 = (x133|(x134<=(x135<=x136)));

	if (t33 != 558944LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x137 = UINT8_MAX;
	int32_t x138 = INT32_MIN;
	volatile int8_t x139 = -1;
	uint16_t x140 = UINT16_MAX;
	static int32_t t34 = -4356725;

	t34 = (x137|(x138<=(x139<=x140)));

	if (t34 != 255) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x142 = INT64_MIN;
	volatile int16_t x143 = INT16_MIN;
	int16_t x144 = 113;
	int32_t t35 = -31630971;

	t35 = (x141|(x142<=(x143<=x144)));

	if (t35 != -2147483647) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x145 = 78644U;
	int8_t x146 = -1;
	volatile int64_t x147 = -70841LL;
	int64_t x148 = 58929442617242LL;
	static volatile uint32_t t36 = 4970U;

	t36 = (x145|(x146<=(x147<=x148)));

	if (t36 != 78645U) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = 1718U;
	int8_t x150 = INT8_MAX;
	volatile uint32_t t37 = 8380091U;

	t37 = (x149|(x150<=(x151<=x152)));

	if (t37 != 1718U) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = 20809175137619681LLU;
	int32_t x154 = -1;
	uint8_t x155 = UINT8_MAX;
	int16_t x156 = -299;
	volatile uint64_t t38 = 20LLU;

	t38 = (x153|(x154<=(x155<=x156)));

	if (t38 != 20809175137619681LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x157 = 97355029258965292LL;
	int32_t x158 = INT32_MIN;
	int8_t x160 = INT8_MIN;

	t39 = (x157|(x158<=(x159<=x160)));

	if (t39 != 97355029258965293LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = 21016U;
	static int16_t x162 = INT16_MIN;
	int32_t x163 = INT32_MIN;
	int32_t x164 = INT32_MAX;
	static int32_t t40 = -422;

	t40 = (x161|(x162<=(x163<=x164)));

	if (t40 != 21017) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x165 = -11;
	int8_t x166 = INT8_MAX;
	static int8_t x167 = -1;

	t41 = (x165|(x166<=(x167<=x168)));

	if (t41 != -11) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = 0U;
	int16_t x170 = -47;
	volatile uint16_t x171 = 238U;
	static volatile uint8_t x172 = UINT8_MAX;

	t42 = (x169|(x170<=(x171<=x172)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = INT64_MAX;
	int8_t x176 = -58;
	int64_t t43 = INT64_MAX;

	t43 = (x173|(x174<=(x175<=x176)));

	if (t43 != INT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = -930;
	int32_t x178 = 1859;
	int16_t x179 = INT16_MAX;
	int64_t x180 = -5818121072920LL;
	volatile int32_t t44 = -615427;

	t44 = (x177|(x178<=(x179<=x180)));

	if (t44 != -930) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = INT8_MIN;
	uint16_t x183 = 1U;
	static uint64_t x184 = 1969096569879598LLU;
	volatile int32_t t45 = 7554833;

	t45 = (x181|(x182<=(x183<=x184)));

	if (t45 != -128) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = INT64_MIN;
	int8_t x186 = -1;
	static volatile uint64_t x187 = UINT64_MAX;
	uint8_t x188 = 27U;
	volatile int64_t t46 = -239LL;

	t46 = (x185|(x186<=(x187<=x188)));

	if (t46 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int16_t x190 = 2;
	int32_t x191 = -1;
	int64_t t47 = INT64_MIN;

	t47 = (x189|(x190<=(x191<=x192)));

	if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x193 = 4488;
	int8_t x194 = INT8_MAX;
	int32_t x195 = -141;
	uint16_t x196 = 267U;
	volatile int32_t t48 = 3;

	t48 = (x193|(x194<=(x195<=x196)));

	if (t48 != 4488) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x197 = INT32_MAX;
	int32_t x199 = INT32_MIN;
	static uint64_t x200 = 52339LLU;
	int32_t t49 = INT32_MAX;

	t49 = (x197|(x198<=(x199<=x200)));

	if (t49 != INT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x201 = -55;
	uint16_t x202 = 7134U;
	static volatile int32_t x204 = INT32_MAX;

	t50 = (x201|(x202<=(x203<=x204)));

	if (t50 != -55) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = INT32_MIN;
	static int32_t x207 = 2;
	int32_t x208 = -1;
	volatile int32_t t51 = INT32_MIN;

	t51 = (x205|(x206<=(x207<=x208)));

	if (t51 != INT32_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x209 = INT8_MAX;
	static int16_t x210 = 0;
	uint8_t x211 = 1U;
	static volatile int8_t x212 = 47;
	int32_t t52 = -64493007;

	t52 = (x209|(x210<=(x211<=x212)));

	if (t52 != 127) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x213 = 64U;
	volatile int8_t x214 = -1;
	static uint8_t x215 = UINT8_MAX;
	int8_t x216 = INT8_MIN;
	int32_t t53 = -229;

	t53 = (x213|(x214<=(x215<=x216)));

	if (t53 != 65) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x218 = INT32_MAX;
	uint64_t x219 = 23942091LLU;
	static int64_t x220 = INT64_MIN;
	int64_t t54 = INT64_MAX;

	t54 = (x217|(x218<=(x219<=x220)));

	if (t54 != INT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = UINT32_MAX;
	int64_t x222 = -40LL;
	int32_t x223 = -1;
	static int16_t x224 = 316;
	static volatile uint32_t t55 = UINT32_MAX;

	t55 = (x221|(x222<=(x223<=x224)));

	if (t55 != UINT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = -1;
	int32_t x227 = INT32_MIN;
	int64_t x228 = INT64_MIN;
	int32_t t56 = -895106;

	t56 = (x225|(x226<=(x227<=x228)));

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x230 = -1;
	uint8_t x231 = 0U;
	static int64_t x232 = -1LL;
	volatile int32_t t57 = 29749544;

	t57 = (x229|(x230<=(x231<=x232)));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = -11;
	uint8_t x234 = 7U;
	uint32_t x235 = 586U;
	static int8_t x236 = INT8_MIN;
	int32_t t58 = 1;

	t58 = (x233|(x234<=(x235<=x236)));

	if (t58 != -11) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = INT8_MAX;
	volatile uint64_t x238 = 12471LLU;
	int8_t x239 = INT8_MAX;
	volatile uint8_t x240 = 1U;

	t59 = (x237|(x238<=(x239<=x240)));

	if (t59 != 127) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MIN;
	int32_t x242 = INT32_MIN;
	volatile int32_t t60 = -18965;

	t60 = (x241|(x242<=(x243<=x244)));

	if (t60 != -127) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MAX;
	int64_t x246 = INT64_MIN;
	volatile int64_t x247 = INT64_MIN;
	static uint16_t x248 = 20U;
	volatile int32_t t61 = -7;

	t61 = (x245|(x246<=(x247<=x248)));

	if (t61 != 127) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x251 = UINT64_MAX;
	uint8_t x252 = 8U;

	t62 = (x249|(x250<=(x251<=x252)));

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x253 = 2812U;
	int64_t x254 = INT64_MAX;
	int32_t x255 = INT32_MIN;
	uint64_t x256 = UINT64_MAX;
	int32_t t63 = -154878;

	t63 = (x253|(x254<=(x255<=x256)));

	if (t63 != 2812) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x257 = 2U;
	int64_t x258 = 0LL;
	int16_t x260 = 10;
	int32_t t64 = 0;

	t64 = (x257|(x258<=(x259<=x260)));

	if (t64 != 3) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x261 = UINT8_MAX;
	volatile int32_t x262 = -30;
	int32_t x263 = -399;
	int32_t t65 = -966895;

	t65 = (x261|(x262<=(x263<=x264)));

	if (t65 != 255) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x265 = INT32_MIN;
	uint16_t x266 = 50U;
	volatile int32_t x268 = INT32_MIN;
	int32_t t66 = INT32_MIN;

	t66 = (x265|(x266<=(x267<=x268)));

	if (t66 != INT32_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x269 = 4;
	int32_t t67 = 641;

	t67 = (x269|(x270<=(x271<=x272)));

	if (t67 != 5) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint64_t x273 = 239558889370961385LLU;
	volatile uint8_t x275 = 10U;
	int8_t x276 = 42;
	uint64_t t68 = 8069LLU;

	t68 = (x273|(x274<=(x275<=x276)));

	if (t68 != 239558889370961385LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x278 = INT8_MIN;
	uint32_t x279 = 813264U;
	int8_t x280 = INT8_MAX;

	t69 = (x277|(x278<=(x279<=x280)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x282 = -1;
	uint64_t x283 = UINT64_MAX;
	int64_t x284 = -1LL;
	volatile int32_t t70 = -23242;

	t70 = (x281|(x282<=(x283<=x284)));

	if (t70 != -2147483647) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x285 = -1;
	volatile int32_t t71 = -5303;

	t71 = (x285|(x286<=(x287<=x288)));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x289 = 11786047327442LLU;
	int16_t x290 = INT16_MIN;
	int64_t x292 = -1LL;

	t72 = (x289|(x290<=(x291<=x292)));

	if (t72 != 11786047327443LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = INT16_MAX;
	int8_t x294 = INT8_MAX;
	static int16_t x296 = INT16_MIN;
	static volatile int32_t t73 = -4069;

	t73 = (x293|(x294<=(x295<=x296)));

	if (t73 != 32767) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = INT64_MIN;
	int16_t x298 = -1;
	int8_t x299 = -1;
	int16_t x300 = 8;

	t74 = (x297|(x298<=(x299<=x300)));

	if (t74 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x301 = INT8_MIN;
	int8_t x302 = INT8_MIN;

	t75 = (x301|(x302<=(x303<=x304)));

	if (t75 != -127) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int16_t x305 = INT16_MIN;
	volatile uint16_t x306 = UINT16_MAX;
	uint16_t x307 = 4145U;
	int64_t x308 = INT64_MIN;
	volatile int32_t t76 = -81818;

	t76 = (x305|(x306<=(x307<=x308)));

	if (t76 != -32768) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = 1;
	int64_t x310 = INT64_MIN;
	uint16_t x311 = 4U;
	volatile int32_t t77 = 61;

	t77 = (x309|(x310<=(x311<=x312)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x313 = INT16_MIN;
	int16_t x314 = 0;
	int32_t x315 = -4;
	int32_t x316 = -748105;
	int32_t t78 = -30846188;

	t78 = (x313|(x314<=(x315<=x316)));

	if (t78 != -32767) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int16_t x317 = INT16_MIN;
	int16_t x319 = INT16_MIN;
	volatile int32_t t79 = -513915501;

	t79 = (x317|(x318<=(x319<=x320)));

	if (t79 != -32768) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x321 = UINT16_MAX;
	uint16_t x322 = 4611U;
	int8_t x323 = INT8_MIN;
	int32_t x324 = -1;
	static int32_t t80 = -1;

	t80 = (x321|(x322<=(x323<=x324)));

	if (t80 != 65535) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = INT8_MIN;
	int16_t x326 = 62;
	int32_t x327 = -113541783;
	int64_t x328 = INT64_MIN;
	int32_t t81 = -1;

	t81 = (x325|(x326<=(x327<=x328)));

	if (t81 != -128) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x330 = INT32_MIN;
	int8_t x331 = 0;

	t82 = (x329|(x330<=(x331<=x332)));

	if (t82 != 255) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = -55;
	static int16_t x335 = 17;
	int8_t x336 = INT8_MAX;

	t83 = (x333|(x334<=(x335<=x336)));

	if (t83 != -55) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x337 = 0;
	volatile int8_t x338 = INT8_MIN;
	static int16_t x340 = -56;
	volatile int32_t t84 = 1;

	t84 = (x337|(x338<=(x339<=x340)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x342 = INT8_MIN;
	int16_t x343 = INT16_MAX;
	int32_t x344 = -2142890;
	static int32_t t85 = -28;

	t85 = (x341|(x342<=(x343<=x344)));

	if (t85 != -2147483647) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x345 = 1523U;
	int32_t x346 = 5;
	static int64_t x347 = -1LL;
	volatile uint8_t x348 = UINT8_MAX;
	volatile int32_t t86 = -7;

	t86 = (x345|(x346<=(x347<=x348)));

	if (t86 != 1523) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = -1;
	uint16_t x350 = 803U;
	int32_t x351 = -1;
	int16_t x352 = INT16_MAX;
	static volatile int32_t t87 = -1355;

	t87 = (x349|(x350<=(x351<=x352)));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x353 = -1;
	uint32_t x354 = 224756U;
	volatile uint16_t x355 = 3712U;
	static int64_t x356 = INT64_MAX;
	volatile int32_t t88 = 0;

	t88 = (x353|(x354<=(x355<=x356)));

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x357 = -1;
	static uint8_t x358 = 6U;
	int16_t x359 = INT16_MIN;
	int64_t x360 = INT64_MIN;
	static volatile int32_t t89 = -58;

	t89 = (x357|(x358<=(x359<=x360)));

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x363 = INT32_MIN;
	int32_t x364 = INT32_MIN;
	uint64_t t90 = 25LLU;

	t90 = (x361|(x362<=(x363<=x364)));

	if (t90 != 65493551LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = -3171;
	int8_t x366 = 21;
	uint64_t x367 = 16399235289LLU;
	volatile int32_t t91 = -7;

	t91 = (x365|(x366<=(x367<=x368)));

	if (t91 != -3171) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int8_t x369 = 5;
	uint8_t x371 = 1U;
	volatile int64_t x372 = 50876189514LL;
	int32_t t92 = 3570;

	t92 = (x369|(x370<=(x371<=x372)));

	if (t92 != 5) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = -1725685674959008321LL;
	static int16_t x374 = -1;
	int64_t x375 = -1LL;
	int32_t x376 = INT32_MIN;

	t93 = (x373|(x374<=(x375<=x376)));

	if (t93 != -1725685674959008321LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = 8609;
	uint16_t x379 = UINT16_MAX;
	static volatile uint16_t x380 = 3339U;
	int32_t t94 = -32127;

	t94 = (x377|(x378<=(x379<=x380)));

	if (t94 != 8609) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x381 = UINT8_MAX;
	int64_t x384 = -1LL;
	int32_t t95 = -707782661;

	t95 = (x381|(x382<=(x383<=x384)));

	if (t95 != 255) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = INT32_MIN;
	int8_t x386 = 0;
	int32_t x388 = INT32_MIN;
	static volatile int32_t t96 = -46941138;

	t96 = (x385|(x386<=(x387<=x388)));

	if (t96 != -2147483647) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x390 = -2546LL;
	static uint32_t x391 = 7104U;
	volatile int64_t x392 = INT64_MIN;

	t97 = (x389|(x390<=(x391<=x392)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x394 = INT8_MAX;
	uint8_t x396 = UINT8_MAX;
	int32_t t98 = INT32_MAX;

	t98 = (x393|(x394<=(x395<=x396)));

	if (t98 != INT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = 52866485372027030LL;
	static int8_t x398 = -1;
	int32_t x399 = 11930;
	volatile int64_t t99 = 12LL;

	t99 = (x397|(x398<=(x399<=x400)));

	if (t99 != 52866485372027031LL) { NG(); } else { ; }
	
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

