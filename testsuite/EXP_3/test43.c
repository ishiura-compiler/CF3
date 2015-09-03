#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = -1;
uint32_t x4 = UINT32_MAX;
static volatile uint32_t t0 = 3U;
uint8_t x9 = UINT8_MAX;
int16_t x10 = INT16_MIN;
int32_t t5 = 3343;
uint64_t x27 = 30795981750553LLU;
uint64_t t6 = 1045367609869LLU;
uint16_t x32 = 1790U;
static int8_t x45 = INT8_MIN;
int16_t x55 = INT16_MIN;
uint32_t x56 = 167886574U;
static uint32_t x79 = 3666U;
volatile int8_t x87 = INT8_MAX;
static uint8_t x90 = 111U;
int8_t x92 = INT8_MAX;
int32_t x108 = -661989955;
volatile uint32_t x110 = 20637U;
int64_t t23 = -84323271535LL;
static volatile int64_t t28 = 89857494761LL;
volatile uint8_t x143 = 1U;
volatile int8_t x144 = INT8_MAX;
int32_t x147 = INT32_MIN;
int32_t t31 = 55345;
int16_t x151 = -1;
int32_t x152 = INT32_MAX;
static uint32_t t33 = 6820U;
volatile int32_t x168 = -1073;
uint64_t t35 = 9555588LLU;
uint16_t x172 = 1U;
int64_t x176 = -743677065039113865LL;
static int32_t x185 = INT32_MAX;
int8_t x187 = -7;
uint32_t x201 = 158U;
static uint64_t x203 = 126LLU;
int8_t x205 = INT8_MIN;
volatile uint64_t t46 = 64819991475585030LLU;
uint64_t x218 = 89935514086382LLU;
int16_t x228 = INT16_MIN;
int16_t x237 = -1488;
volatile int32_t x243 = -1;
int16_t x250 = -2215;
volatile uint8_t x251 = 30U;
volatile int64_t x254 = 17606994365670420LL;
int8_t x256 = 1;
volatile int64_t t55 = -396898896291346LL;
uint32_t x260 = 1873939U;
int8_t x277 = INT8_MIN;
static int8_t x278 = -11;
volatile int32_t t58 = -306;
uint32_t x283 = 2747993U;
int32_t x285 = -3577;
volatile uint64_t t61 = 40984307390LLU;
int64_t x300 = -7550LL;
volatile uint64_t x304 = 1253973019943299039LLU;
static uint64_t t64 = 166032267740412LLU;
int8_t x309 = INT8_MIN;
int16_t x310 = INT16_MIN;
int64_t x329 = 2270327988LL;
volatile uint32_t x333 = 8U;
int64_t t70 = 806078607LL;
static uint64_t x362 = 1154927540LLU;
int64_t x385 = INT64_MAX;
uint16_t x387 = 210U;
int8_t x390 = INT8_MAX;
static int8_t x416 = INT8_MIN;
int64_t t83 = -1393599540957LL;
uint64_t x419 = 200899893LLU;
volatile uint64_t t84 = 7411LLU;
volatile int64_t x425 = -7LL;
static uint16_t x430 = UINT16_MAX;
uint64_t x431 = 11368LLU;
int32_t x434 = -67;
int16_t x437 = INT16_MIN;
int8_t x449 = INT8_MIN;
static int8_t x452 = -1;
uint32_t x456 = 693077896U;
static volatile int8_t x468 = INT8_MAX;
int64_t x472 = INT64_MIN;
uint64_t x473 = 989978044491967240LLU;
volatile int16_t x474 = INT16_MAX;
int64_t x475 = INT64_MAX;
int16_t x477 = 11139;
int32_t x480 = 143574;
volatile int32_t x484 = INT32_MIN;


void f0(void) {
	uint32_t x2 = 190U;
	static volatile uint8_t x3 = 106U;

	t0 = ((x1/x2)/(x3+x4));

	if (t0 != 215286U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	volatile int32_t x6 = INT32_MIN;
	int64_t x7 = -1LL;
	int64_t x8 = -1585LL;
	static int64_t t1 = -8LL;

	t1 = ((x5/x6)/(x7+x8));

	if (t1 != -2708049LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x11 = INT8_MIN;
	int16_t x12 = INT16_MAX;
	volatile int32_t t2 = 103851588;

	t2 = ((x9/x10)/(x11+x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = -1LL;
	static int16_t x14 = 5779;
	uint16_t x15 = UINT16_MAX;
	static int16_t x16 = -4;
	volatile int64_t t3 = 967178LL;

	t3 = ((x13/x14)/(x15+x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MAX;
	int64_t x18 = INT64_MAX;
	int64_t x19 = INT64_MIN;
	int64_t x20 = INT64_MAX;
	int64_t t4 = -101506403LL;

	t4 = ((x17/x18)/(x19+x20));

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = INT8_MIN;
	uint8_t x22 = UINT8_MAX;
	static int32_t x23 = INT32_MAX;
	int32_t x24 = -871;

	t5 = ((x21/x22)/(x23+x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = 32226319;
	int32_t x26 = INT32_MIN;
	uint32_t x28 = 297276U;

	t6 = ((x25/x26)/(x27+x28));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = UINT8_MAX;
	int8_t x30 = -43;
	static volatile uint8_t x31 = UINT8_MAX;
	volatile int32_t t7 = -117597676;

	t7 = ((x29/x30)/(x31+x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int16_t x33 = INT16_MIN;
	int16_t x34 = -236;
	int16_t x35 = 0;
	int32_t x36 = -1;
	static int32_t t8 = 2;

	t8 = ((x33/x34)/(x35+x36));

	if (t8 != -138) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = 40LL;
	volatile int8_t x38 = -1;
	uint64_t x39 = 170824LLU;
	volatile int16_t x40 = INT16_MIN;
	static volatile uint64_t t9 = 2498702481LLU;

	t9 = ((x37/x38)/(x39+x40));

	if (t9 != 133617836774276LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = -6746565455LL;
	int16_t x42 = -125;
	int16_t x43 = INT16_MIN;
	uint64_t x44 = UINT64_MAX;
	uint64_t t10 = 3359039054117287057LLU;

	t10 = ((x41/x42)/(x43+x44));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x46 = INT8_MIN;
	int16_t x47 = 13801;
	int16_t x48 = -1;
	int32_t t11 = -6;

	t11 = ((x45/x46)/(x47+x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = UINT32_MAX;
	int64_t x50 = -1LL;
	volatile uint32_t x51 = 5548U;
	static uint16_t x52 = 10642U;
	int64_t t12 = 67679213550LL;

	t12 = ((x49/x50)/(x51+x52));

	if (t12 != -265285LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x53 = INT16_MIN;
	static uint8_t x54 = UINT8_MAX;
	volatile uint32_t t13 = 0U;

	t13 = ((x53/x54)/(x55+x56));

	if (t13 != 25U) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x65 = 5U;
	int64_t x66 = INT64_MIN;
	int8_t x67 = -9;
	int32_t x68 = 59999937;
	int64_t t14 = 10075843757LL;

	t14 = ((x65/x66)/(x67+x68));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x73 = -1572;
	volatile uint32_t x74 = 2374U;
	static volatile int8_t x75 = -1;
	int16_t x76 = INT16_MIN;
	uint32_t t15 = 564U;

	t15 = ((x73/x74)/(x75+x76));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x77 = -18;
	int16_t x78 = -1;
	int16_t x80 = INT16_MIN;
	volatile uint32_t t16 = 25646U;

	t16 = ((x77/x78)/(x79+x80));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x81 = 2598U;
	int32_t x82 = 7791894;
	static int32_t x83 = INT32_MAX;
	volatile int16_t x84 = -1;
	volatile int32_t t17 = 1;

	t17 = ((x81/x82)/(x83+x84));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x85 = 8;
	static volatile uint32_t x86 = 1349U;
	int32_t x88 = 11;
	volatile uint32_t t18 = 242780U;

	t18 = ((x85/x86)/(x87+x88));

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x89 = 16;
	int32_t x91 = INT32_MIN;
	int32_t t19 = 1282;

	t19 = ((x89/x90)/(x91+x92));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x93 = 1631U;
	int64_t x94 = -7770593391614732LL;
	int32_t x95 = 9524;
	uint32_t x96 = 16371738U;
	volatile int64_t t20 = -2800644LL;

	t20 = ((x93/x94)/(x95+x96));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x97 = 105181591445642738LL;
	static int64_t x98 = -89523689LL;
	int64_t x99 = INT64_MIN;
	int32_t x100 = INT32_MAX;
	static int64_t t21 = -55024LL;

	t21 = ((x97/x98)/(x99+x100));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x105 = 41476LLU;
	int32_t x106 = -1;
	static int64_t x107 = -492518LL;
	volatile uint64_t t22 = 690066373755245491LLU;

	t22 = ((x105/x106)/(x107+x108));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x109 = UINT16_MAX;
	int16_t x111 = -238;
	int64_t x112 = -1LL;

	t23 = ((x109/x110)/(x111+x112));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x113 = INT16_MIN;
	static int64_t x114 = 651865540768LL;
	int16_t x115 = -13;
	int16_t x116 = INT16_MAX;
	static int64_t t24 = 440LL;

	t24 = ((x113/x114)/(x115+x116));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x117 = -1LL;
	uint64_t x118 = 57037369638LLU;
	volatile int8_t x119 = 1;
	uint32_t x120 = 980764U;
	static volatile uint64_t t25 = 17623650857LLU;

	t25 = ((x117/x118)/(x119+x120));

	if (t25 != 329LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x121 = -15;
	int32_t x122 = -12892;
	volatile int64_t x123 = INT64_MAX;
	static int32_t x124 = INT32_MIN;
	volatile int64_t t26 = 34LL;

	t26 = ((x121/x122)/(x123+x124));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint64_t x125 = 12143466LLU;
	int32_t x126 = -1;
	int16_t x127 = INT16_MIN;
	uint16_t x128 = UINT16_MAX;
	volatile uint64_t t27 = 548762LLU;

	t27 = ((x125/x126)/(x127+x128));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x129 = 1998LL;
	int8_t x130 = -1;
	static uint8_t x131 = 41U;
	static int16_t x132 = INT16_MAX;

	t28 = ((x129/x130)/(x131+x132));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x137 = UINT8_MAX;
	uint8_t x138 = 4U;
	uint8_t x139 = UINT8_MAX;
	uint32_t x140 = 5672U;
	uint32_t t29 = 147970U;

	t29 = ((x137/x138)/(x139+x140));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x141 = INT64_MIN;
	int16_t x142 = INT16_MIN;
	int64_t t30 = -477948652357712LL;

	t30 = ((x141/x142)/(x143+x144));

	if (t30 != 2199023255552LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x145 = 7;
	int8_t x146 = INT8_MIN;
	volatile int16_t x148 = INT16_MAX;

	t31 = ((x145/x146)/(x147+x148));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x149 = UINT16_MAX;
	volatile uint32_t x150 = 190502588U;
	volatile uint32_t t32 = 91003U;

	t32 = ((x149/x150)/(x151+x152));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x153 = 26U;
	uint32_t x154 = UINT32_MAX;
	int16_t x155 = INT16_MAX;
	int16_t x156 = INT16_MIN;

	t33 = ((x153/x154)/(x155+x156));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x157 = INT64_MIN;
	int8_t x158 = INT8_MIN;
	int16_t x159 = INT16_MIN;
	static uint64_t x160 = UINT64_MAX;
	uint64_t t34 = 19482LLU;

	t34 = ((x157/x158)/(x159+x160));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x165 = UINT64_MAX;
	static int16_t x166 = -25;
	static int8_t x167 = -1;

	t35 = ((x165/x166)/(x167+x168));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x169 = -1;
	int16_t x170 = INT16_MIN;
	volatile int32_t x171 = INT32_MIN;
	static volatile int32_t t36 = 697610;

	t36 = ((x169/x170)/(x171+x172));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x173 = INT64_MIN;
	static int32_t x174 = INT32_MAX;
	uint8_t x175 = 0U;
	static int64_t t37 = -42635642291459185LL;

	t37 = ((x173/x174)/(x175+x176));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x177 = -1;
	int64_t x178 = INT64_MAX;
	int32_t x179 = INT32_MIN;
	uint32_t x180 = 23U;
	volatile int64_t t38 = 15840783LL;

	t38 = ((x177/x178)/(x179+x180));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x181 = UINT16_MAX;
	volatile int32_t x182 = 997202;
	int64_t x183 = INT64_MIN;
	volatile uint32_t x184 = UINT32_MAX;
	volatile int64_t t39 = -91LL;

	t39 = ((x181/x182)/(x183+x184));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x186 = 1;
	int8_t x188 = INT8_MIN;
	volatile int32_t t40 = -10;

	t40 = ((x185/x186)/(x187+x188));

	if (t40 != -15907286) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x189 = 0;
	int16_t x190 = -9;
	uint16_t x191 = UINT16_MAX;
	static int8_t x192 = 2;
	int32_t t41 = -866329671;

	t41 = ((x189/x190)/(x191+x192));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x193 = 217462453U;
	static volatile int16_t x194 = 1398;
	static int16_t x195 = INT16_MIN;
	int16_t x196 = -1;
	volatile uint32_t t42 = 13687180U;

	t42 = ((x193/x194)/(x195+x196));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x197 = -1;
	int16_t x198 = INT16_MAX;
	int8_t x199 = INT8_MAX;
	static uint8_t x200 = 111U;
	int32_t t43 = -131265816;

	t43 = ((x197/x198)/(x199+x200));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x202 = INT16_MIN;
	int16_t x204 = INT16_MIN;
	uint64_t t44 = 177403467832LLU;

	t44 = ((x201/x202)/(x203+x204));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint32_t x206 = 15544U;
	int16_t x207 = INT16_MAX;
	int8_t x208 = 18;
	static uint32_t t45 = 30U;

	t45 = ((x205/x206)/(x207+x208));

	if (t45 != 8U) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x209 = 12376981LLU;
	static uint64_t x210 = 101366852042190LLU;
	volatile uint16_t x211 = 30U;
	int8_t x212 = 0;

	t46 = ((x209/x210)/(x211+x212));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x217 = -1LL;
	static int8_t x219 = INT8_MIN;
	uint32_t x220 = UINT32_MAX;
	uint64_t t47 = 19382388LLU;

	t47 = ((x217/x218)/(x219+x220));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x221 = INT32_MIN;
	int16_t x222 = 208;
	int16_t x223 = -1;
	uint8_t x224 = UINT8_MAX;
	volatile int32_t t48 = 7;

	t48 = ((x221/x222)/(x223+x224));

	if (t48 != -40647) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x225 = UINT8_MAX;
	int8_t x226 = INT8_MIN;
	static uint16_t x227 = 3502U;
	static volatile int32_t t49 = -246796;

	t49 = ((x225/x226)/(x227+x228));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x233 = -1LL;
	uint64_t x234 = UINT64_MAX;
	int16_t x235 = INT16_MIN;
	static int8_t x236 = 0;
	uint64_t t50 = 96LLU;

	t50 = ((x233/x234)/(x235+x236));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x238 = INT8_MIN;
	static volatile int16_t x239 = 1;
	int32_t x240 = 256788;
	int32_t t51 = -3718351;

	t51 = ((x237/x238)/(x239+x240));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint8_t x241 = 23U;
	static int64_t x242 = -540083488227659092LL;
	int16_t x244 = INT16_MIN;
	volatile int64_t t52 = -3581800386771597LL;

	t52 = ((x241/x242)/(x243+x244));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x245 = -1;
	int16_t x246 = INT16_MIN;
	int64_t x247 = INT64_MIN;
	uint32_t x248 = 312590U;
	volatile int64_t t53 = 1LL;

	t53 = ((x245/x246)/(x247+x248));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x249 = INT32_MIN;
	static int16_t x252 = -6;
	volatile int32_t t54 = -201;

	t54 = ((x249/x250)/(x251+x252));

	if (t54 != 40396) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x253 = -1LL;
	static int16_t x255 = INT16_MAX;

	t55 = ((x253/x254)/(x255+x256));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x257 = -1229;
	uint16_t x258 = 7546U;
	int16_t x259 = INT16_MIN;
	uint32_t t56 = 26821U;

	t56 = ((x257/x258)/(x259+x260));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x261 = INT16_MIN;
	int16_t x262 = -1;
	int32_t x263 = -508485;
	int16_t x264 = INT16_MAX;
	int32_t t57 = 1903873;

	t57 = ((x261/x262)/(x263+x264));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x279 = INT8_MIN;
	static int8_t x280 = -1;

	t58 = ((x277/x278)/(x279+x280));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x281 = -73868268367705645LL;
	int32_t x282 = 20333339;
	int16_t x284 = -124;
	volatile int64_t t59 = -54372LL;

	t59 = ((x281/x282)/(x283+x284));

	if (t59 != -1322LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x286 = INT64_MIN;
	int16_t x287 = -131;
	int32_t x288 = -1;
	volatile int64_t t60 = 8516638479103LL;

	t60 = ((x285/x286)/(x287+x288));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x289 = 10136662633774LLU;
	volatile int8_t x290 = INT8_MIN;
	static uint32_t x291 = UINT32_MAX;
	static int64_t x292 = -1LL;

	t61 = ((x289/x290)/(x291+x292));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x297 = 358U;
	int64_t x298 = INT64_MIN;
	volatile uint32_t x299 = 1981U;
	volatile int64_t t62 = -4422664300512LL;

	t62 = ((x297/x298)/(x299+x300));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x301 = -1;
	uint16_t x302 = 3256U;
	int16_t x303 = INT16_MAX;
	volatile uint64_t t63 = 166361134195LLU;

	t63 = ((x301/x302)/(x303+x304));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x305 = UINT64_MAX;
	volatile int32_t x306 = INT32_MAX;
	static int8_t x307 = -29;
	static uint8_t x308 = 49U;

	t64 = ((x305/x306)/(x307+x308));

	if (t64 != 429496729LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x311 = INT8_MIN;
	volatile int8_t x312 = -4;
	int32_t t65 = 10812;

	t65 = ((x309/x310)/(x311+x312));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x313 = 3018U;
	int32_t x314 = INT32_MAX;
	static volatile int16_t x315 = 0;
	int8_t x316 = -2;
	volatile uint32_t t66 = 71161180U;

	t66 = ((x313/x314)/(x315+x316));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x321 = INT64_MIN;
	int16_t x322 = INT16_MIN;
	static int8_t x323 = -1;
	int8_t x324 = INT8_MIN;
	int64_t t67 = 5456805LL;

	t67 = ((x321/x322)/(x323+x324));

	if (t67 != -2181976563648LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x325 = INT64_MIN;
	static int32_t x326 = INT32_MIN;
	int32_t x327 = -1;
	static volatile uint64_t x328 = UINT64_MAX;
	volatile uint64_t t68 = 348905858218997363LLU;

	t68 = ((x325/x326)/(x327+x328));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x330 = -1;
	volatile int16_t x331 = INT16_MIN;
	int16_t x332 = INT16_MIN;
	volatile int64_t t69 = 132788LL;

	t69 = ((x329/x330)/(x331+x332));

	if (t69 != 34642LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x334 = INT32_MIN;
	int64_t x335 = 15879777LL;
	int64_t x336 = INT64_MIN;

	t70 = ((x333/x334)/(x335+x336));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x337 = -1;
	static uint32_t x338 = UINT32_MAX;
	uint8_t x339 = UINT8_MAX;
	int32_t x340 = INT32_MIN;
	static volatile uint32_t t71 = 94106U;

	t71 = ((x337/x338)/(x339+x340));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x345 = UINT32_MAX;
	uint32_t x346 = 27016717U;
	int8_t x347 = INT8_MAX;
	int32_t x348 = INT32_MIN;
	uint32_t t72 = 62274715U;

	t72 = ((x345/x346)/(x347+x348));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x349 = -1;
	static int16_t x350 = 122;
	static uint64_t x351 = 174LLU;
	int32_t x352 = INT32_MAX;
	uint64_t t73 = 209734070039LLU;

	t73 = ((x349/x350)/(x351+x352));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x361 = 12U;
	int64_t x363 = 43LL;
	uint8_t x364 = 1U;
	uint64_t t74 = 754104671LLU;

	t74 = ((x361/x362)/(x363+x364));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x369 = INT32_MIN;
	int16_t x370 = 2;
	volatile int8_t x371 = -1;
	static int8_t x372 = INT8_MIN;
	static volatile int32_t t75 = 0;

	t75 = ((x369/x370)/(x371+x372));

	if (t75 != 8323580) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x373 = 1;
	int8_t x374 = -1;
	int16_t x375 = INT16_MIN;
	static int64_t x376 = INT64_MAX;
	int64_t t76 = -875515236507LL;

	t76 = ((x373/x374)/(x375+x376));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x381 = 22671539442761984LL;
	int64_t x382 = INT64_MIN;
	volatile uint16_t x383 = UINT16_MAX;
	uint16_t x384 = 24U;
	static volatile int64_t t77 = 1LL;

	t77 = ((x381/x382)/(x383+x384));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x386 = INT64_MIN;
	uint16_t x388 = UINT16_MAX;
	int64_t t78 = 15537LL;

	t78 = ((x385/x386)/(x387+x388));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x389 = -1LL;
	static uint64_t x391 = UINT64_MAX;
	static int16_t x392 = INT16_MIN;
	uint64_t t79 = 42LLU;

	t79 = ((x389/x390)/(x391+x392));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x393 = UINT64_MAX;
	static int32_t x394 = INT32_MIN;
	static uint16_t x395 = 15U;
	uint32_t x396 = 14786U;
	volatile uint64_t t80 = 4006817418560LLU;

	t80 = ((x393/x394)/(x395+x396));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x397 = 18116U;
	uint64_t x398 = 7550614450197050164LLU;
	int16_t x399 = -131;
	static volatile int16_t x400 = -37;
	static volatile uint64_t t81 = 0LLU;

	t81 = ((x397/x398)/(x399+x400));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint8_t x401 = UINT8_MAX;
	static int32_t x402 = -371717;
	int32_t x403 = -61188;
	int16_t x404 = INT16_MIN;
	volatile int32_t t82 = 1997;

	t82 = ((x401/x402)/(x403+x404));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x413 = INT64_MIN;
	int64_t x414 = INT64_MIN;
	int16_t x415 = INT16_MAX;

	t83 = ((x413/x414)/(x415+x416));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x417 = -1LL;
	volatile uint16_t x418 = 318U;
	static int64_t x420 = INT64_MIN;

	t84 = ((x417/x418)/(x419+x420));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x421 = UINT32_MAX;
	int8_t x422 = INT8_MIN;
	int8_t x423 = INT8_MAX;
	int16_t x424 = INT16_MIN;
	static uint32_t t85 = 1418772962U;

	t85 = ((x421/x422)/(x423+x424));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x426 = -1;
	int32_t x427 = INT32_MIN;
	int8_t x428 = INT8_MAX;
	int64_t t86 = -24LL;

	t86 = ((x425/x426)/(x427+x428));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x429 = INT64_MIN;
	int32_t x432 = INT32_MAX;
	uint64_t t87 = 8104718834935705LLU;

	t87 = ((x429/x430)/(x431+x432));

	if (t87 != 8589823587LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x433 = -414450;
	int16_t x435 = 1;
	static uint8_t x436 = 10U;
	int32_t t88 = -10866458;

	t88 = ((x433/x434)/(x435+x436));

	if (t88 != 562) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x438 = -1;
	uint8_t x439 = 3U;
	static volatile int64_t x440 = 5028LL;
	volatile int64_t t89 = -258160087590LL;

	t89 = ((x437/x438)/(x439+x440));

	if (t89 != 6LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x441 = 1;
	int16_t x442 = 2;
	static int64_t x443 = -1LL;
	static int8_t x444 = INT8_MIN;
	volatile int64_t t90 = 893254865826546049LL;

	t90 = ((x441/x442)/(x443+x444));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x445 = -1;
	static int64_t x446 = -514973561099767LL;
	int8_t x447 = INT8_MAX;
	int8_t x448 = -1;
	int64_t t91 = -72LL;

	t91 = ((x445/x446)/(x447+x448));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x450 = -1LL;
	int8_t x451 = 25;
	int64_t t92 = -114777463105LL;

	t92 = ((x449/x450)/(x451+x452));

	if (t92 != 5LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x453 = 1146U;
	static volatile uint8_t x454 = UINT8_MAX;
	uint16_t x455 = UINT16_MAX;
	static volatile uint32_t t93 = 438U;

	t93 = ((x453/x454)/(x455+x456));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x457 = UINT32_MAX;
	int16_t x458 = 2255;
	static int64_t x459 = -1LL;
	uint32_t x460 = 1812691U;
	volatile int64_t t94 = -158024149066168LL;

	t94 = ((x457/x458)/(x459+x460));

	if (t94 != 1LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x465 = -1;
	int64_t x466 = INT64_MIN;
	static int64_t x467 = 284447117407191LL;
	volatile int64_t t95 = -18327871LL;

	t95 = ((x465/x466)/(x467+x468));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x469 = -103811LL;
	volatile uint16_t x470 = 1788U;
	int16_t x471 = INT16_MAX;
	volatile int64_t t96 = -160413484LL;

	t96 = ((x469/x470)/(x471+x472));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int64_t x476 = INT64_MIN;
	uint64_t t97 = 6590543LLU;

	t97 = ((x473/x474)/(x475+x476));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x478 = INT32_MIN;
	uint8_t x479 = 3U;
	int32_t t98 = 0;

	t98 = ((x477/x478)/(x479+x480));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x481 = INT8_MIN;
	uint32_t x482 = 245U;
	uint8_t x483 = 3U;
	volatile uint32_t t99 = 2U;

	t99 = ((x481/x482)/(x483+x484));

	if (t99 != 0U) { NG(); } else { ; }
	
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

