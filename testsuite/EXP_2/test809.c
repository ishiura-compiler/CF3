#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = INT16_MAX;
uint16_t x4 = 0U;
volatile int32_t t1 = -8361448;
int8_t x12 = INT8_MIN;
int64_t x13 = INT64_MIN;
static int32_t x20 = -1;
int8_t x21 = 2;
volatile int32_t t5 = 114170147;
int8_t x38 = -1;
volatile int64_t t11 = 691325840538654LL;
volatile int32_t x59 = INT32_MIN;
uint16_t x61 = 65U;
volatile int64_t t14 = 51162917LL;
volatile int16_t x77 = 20;
uint64_t x79 = 1701LLU;
int32_t x84 = INT32_MIN;
uint32_t t18 = 26U;
volatile int32_t x96 = -1655275;
uint16_t x100 = 20U;
volatile int32_t t21 = 183;
volatile uint64_t x101 = 261394LLU;
int16_t x102 = INT16_MAX;
uint32_t x111 = 28304U;
uint8_t x117 = 0U;
int8_t x121 = -9;
uint16_t x124 = 32066U;
static uint16_t x129 = 18U;
static int16_t x130 = INT16_MIN;
volatile uint8_t x135 = 7U;
static int32_t t29 = 1;
static uint8_t x140 = 31U;
volatile uint64_t t31 = 245808336334LLU;
int16_t x146 = INT16_MIN;
int16_t x149 = INT16_MIN;
static uint8_t x150 = UINT8_MAX;
uint16_t x152 = UINT16_MAX;
uint64_t t34 = 492LLU;
int8_t x163 = -1;
volatile int32_t x169 = INT32_MIN;
volatile int32_t t38 = 1005550279;
static uint8_t x178 = UINT8_MAX;
int32_t x180 = INT32_MAX;
int64_t t40 = 1407LL;
int32_t x184 = -1;
uint64_t x195 = UINT64_MAX;
uint16_t x198 = 12U;
volatile uint64_t x199 = 2329LLU;
int32_t x202 = INT32_MIN;
static int8_t x214 = -1;
static volatile int8_t x216 = -1;
int64_t x223 = INT64_MIN;
int32_t x227 = -1;
uint32_t x231 = 6556U;
static int64_t t51 = -70482939LL;
uint32_t x238 = 131034665U;
uint8_t x239 = UINT8_MAX;
volatile uint8_t x241 = 1U;
static int64_t x244 = INT64_MAX;
volatile int32_t t55 = -43;
int16_t x251 = -1;
int32_t x252 = -428232;
uint64_t t56 = 8138420033445LLU;
int8_t x262 = INT8_MIN;
int16_t x263 = INT16_MIN;
static volatile uint8_t x279 = UINT8_MAX;
volatile int32_t x288 = INT32_MIN;
int64_t x289 = -87248LL;
uint64_t x292 = UINT64_MAX;
volatile int64_t x294 = INT64_MIN;
volatile uint64_t t68 = 120503LLU;
uint32_t x305 = 107318U;
int64_t x307 = INT64_MAX;
int16_t x310 = INT16_MIN;
uint32_t x312 = 0U;
static int32_t x318 = -7079472;
static int8_t x319 = INT8_MAX;
int16_t x323 = INT16_MAX;
static volatile int8_t x324 = -1;
int32_t t72 = -136764;
volatile int32_t t73 = 1386;
int32_t x331 = INT32_MIN;
volatile int64_t x335 = -1LL;
volatile int64_t t75 = 12622768LL;
int32_t x339 = -1;
static int64_t x344 = INT64_MIN;
uint32_t x348 = 1557U;
int64_t x351 = INT64_MAX;
uint8_t x353 = UINT8_MAX;
int32_t x354 = -1;
uint16_t x356 = UINT16_MAX;
int32_t t80 = -2;
volatile int64_t t81 = -125421002120562LL;
int8_t x364 = INT8_MIN;
static volatile int32_t t83 = -423661;
static int64_t x376 = -1LL;
uint64_t x378 = UINT64_MAX;
volatile uint64_t t86 = 1185966253LLU;
int32_t x381 = -7122;
volatile int32_t x391 = 404044695;
int64_t x397 = INT64_MIN;
static volatile int16_t x399 = INT16_MIN;
int16_t x403 = INT16_MIN;
int8_t x405 = 1;
static volatile uint64_t t93 = UINT64_MAX;
int64_t x409 = 612374964LL;
int16_t x414 = INT16_MIN;
uint8_t x415 = 15U;
int32_t x419 = INT32_MIN;
int16_t x425 = 4146;
int64_t x434 = -1LL;


void f0(void) {
	int8_t x1 = INT8_MAX;
	int16_t x2 = INT16_MAX;
	int32_t t0 = -63683;

	t0 = ((x1&(x2%x3))*x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	int16_t x6 = 1;
	int16_t x7 = 9149;
	int32_t x8 = -1;

	t1 = ((x5&(x6%x7))*x8);

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	static uint64_t x10 = UINT64_MAX;
	int16_t x11 = INT16_MIN;
	volatile uint64_t t2 = 42346025LLU;

	t2 = ((x9&(x10%x11))*x12);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x14 = 50338LLU;
	uint32_t x15 = UINT32_MAX;
	volatile uint64_t x16 = 11143764800LLU;
	volatile uint64_t t3 = 3250475568821677LLU;

	t3 = ((x13&(x14%x15))*x16);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -1;
	int8_t x18 = INT8_MAX;
	int32_t x19 = INT32_MAX;
	volatile int32_t t4 = -55575871;

	t4 = ((x17&(x18%x19))*x20);

	if (t4 != -127) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x22 = -34;
	static uint16_t x23 = 7U;
	static volatile uint16_t x24 = UINT16_MAX;

	t5 = ((x21&(x22%x23))*x24);

	if (t5 != 131070) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x29 = UINT8_MAX;
	static int32_t x30 = -135618197;
	static uint16_t x31 = UINT16_MAX;
	int16_t x32 = 16;
	volatile int32_t t6 = 1;

	t6 = ((x29&(x30%x31))*x32);

	if (t6 != 1376) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x33 = 1356499871825126951LLU;
	int32_t x34 = INT32_MAX;
	int16_t x35 = INT16_MIN;
	int64_t x36 = -1LL;
	uint64_t t7 = 105746235LLU;

	t7 = ((x33&(x34%x35))*x36);

	if (t7 != 18446744073709525465LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x37 = 12;
	int8_t x39 = 1;
	int16_t x40 = INT16_MAX;
	static int32_t t8 = -468128371;

	t8 = ((x37&(x38%x39))*x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x41 = 31031990337883LLU;
	volatile int8_t x42 = 1;
	uint16_t x43 = 178U;
	static uint32_t x44 = UINT32_MAX;
	volatile uint64_t t9 = 45LLU;

	t9 = ((x41&(x42%x43))*x44);

	if (t9 != 4294967295LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = INT8_MAX;
	uint8_t x46 = 19U;
	uint64_t x47 = UINT64_MAX;
	volatile int32_t x48 = -1;
	volatile uint64_t t10 = 150LLU;

	t10 = ((x45&(x46%x47))*x48);

	if (t10 != 18446744073709551597LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x49 = -2;
	uint16_t x50 = 1U;
	int64_t x51 = -1LL;
	uint32_t x52 = UINT32_MAX;

	t11 = ((x49&(x50%x51))*x52);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x53 = -1;
	volatile int8_t x54 = -1;
	volatile uint64_t x55 = UINT64_MAX;
	uint8_t x56 = 6U;
	static volatile uint64_t t12 = 610923706657279763LLU;

	t12 = ((x53&(x54%x55))*x56);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = INT16_MAX;
	static int32_t x58 = -1;
	int16_t x60 = INT16_MAX;
	static int32_t t13 = 980;

	t13 = ((x57&(x58%x59))*x60);

	if (t13 != 1073676289) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x62 = INT64_MAX;
	volatile int8_t x63 = 41;
	int16_t x64 = -1;

	t14 = ((x61&(x62%x63))*x64);

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x73 = UINT64_MAX;
	int8_t x74 = 0;
	static uint8_t x75 = 12U;
	int64_t x76 = INT64_MIN;
	volatile uint64_t t15 = 75337933439505759LLU;

	t15 = ((x73&(x74%x75))*x76);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x78 = 1;
	static int32_t x80 = -1;
	volatile uint64_t t16 = 4624303784097094LLU;

	t16 = ((x77&(x78%x79))*x80);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x81 = INT32_MIN;
	uint16_t x82 = 15U;
	int32_t x83 = -1;
	volatile int32_t t17 = -156;

	t17 = ((x81&(x82%x83))*x84);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x85 = INT16_MAX;
	int16_t x86 = INT16_MIN;
	int32_t x87 = 1;
	uint32_t x88 = 7U;

	t18 = ((x85&(x86%x87))*x88);

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x89 = -1;
	uint16_t x90 = UINT16_MAX;
	static int32_t x91 = INT32_MAX;
	int16_t x92 = INT16_MIN;
	int32_t t19 = 442471649;

	t19 = ((x89&(x90%x91))*x92);

	if (t19 != -2147450880) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x93 = UINT64_MAX;
	static int64_t x94 = -972682540411745LL;
	int16_t x95 = INT16_MIN;
	static volatile uint64_t t20 = 1733760708637226804LLU;

	t20 = ((x93&(x94%x95))*x96);

	if (t20 != 45501854475LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x97 = INT8_MIN;
	volatile int16_t x98 = 11;
	static uint16_t x99 = 1328U;

	t21 = ((x97&(x98%x99))*x100);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x103 = INT64_MIN;
	volatile int32_t x104 = -1;
	volatile uint64_t t22 = 189692LLU;

	t22 = ((x101&(x102%x103))*x104);

	if (t22 != 18446744073709519598LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int8_t x105 = INT8_MIN;
	volatile uint8_t x106 = UINT8_MAX;
	int64_t x107 = INT64_MAX;
	int64_t x108 = -632349674528282LL;
	volatile int64_t t23 = 1LL;

	t23 = ((x105&(x106%x107))*x108);

	if (t23 != -80940758339620096LL) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int32_t x109 = INT32_MIN;
	int16_t x110 = INT16_MAX;
	volatile int8_t x112 = 14;
	static uint32_t t24 = 228U;

	t24 = ((x109&(x110%x111))*x112);

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x118 = 6U;
	uint16_t x119 = 1567U;
	int8_t x120 = 26;
	volatile uint32_t t25 = 16881U;

	t25 = ((x117&(x118%x119))*x120);

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x122 = 200U;
	int8_t x123 = 6;
	int32_t t26 = -3168610;

	t26 = ((x121&(x122%x123))*x124);

	if (t26 != 64132) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x125 = 681LL;
	static volatile int64_t x126 = INT64_MAX;
	volatile int16_t x127 = 2738;
	static int8_t x128 = INT8_MIN;
	volatile int64_t t27 = 3LL;

	t27 = ((x125&(x126%x127))*x128);

	if (t27 != -20608LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x131 = UINT16_MAX;
	uint8_t x132 = 37U;
	int32_t t28 = -141490;

	t28 = ((x129&(x130%x131))*x132);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x133 = 14U;
	int16_t x134 = INT16_MIN;
	uint8_t x136 = 60U;

	t29 = ((x133&(x134%x135))*x136);

	if (t29 != 840) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x137 = 130736008;
	volatile uint64_t x138 = UINT64_MAX;
	int16_t x139 = INT16_MIN;
	static volatile uint64_t t30 = 1765779425849LLU;

	t30 = ((x137&(x138%x139))*x140);

	if (t30 != 758136LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x141 = 219054308LL;
	static int8_t x142 = 7;
	volatile uint64_t x143 = UINT64_MAX;
	uint8_t x144 = 94U;

	t31 = ((x141&(x142%x143))*x144);

	if (t31 != 376LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x145 = INT32_MIN;
	volatile int32_t x147 = INT32_MIN;
	volatile uint32_t x148 = 597139276U;
	volatile uint32_t t32 = 136U;

	t32 = ((x145&(x146%x147))*x148);

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x151 = 1;
	volatile int32_t t33 = -37466706;

	t33 = ((x149&(x150%x151))*x152);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x153 = INT16_MIN;
	int16_t x154 = 10;
	uint16_t x155 = 126U;
	uint64_t x156 = 8LLU;

	t34 = ((x153&(x154%x155))*x156);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x157 = INT64_MIN;
	int32_t x158 = 6;
	int32_t x159 = INT32_MAX;
	static uint16_t x160 = 10395U;
	volatile int64_t t35 = 156445LL;

	t35 = ((x157&(x158%x159))*x160);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int8_t x161 = 8;
	volatile int64_t x162 = 5398LL;
	static int16_t x164 = INT16_MIN;
	int64_t t36 = -3444199604508035LL;

	t36 = ((x161&(x162%x163))*x164);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x165 = UINT32_MAX;
	uint8_t x166 = 46U;
	volatile uint8_t x167 = 114U;
	int16_t x168 = -13050;
	static uint32_t t37 = 52058U;

	t37 = ((x165&(x166%x167))*x168);

	if (t37 != 4294366996U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x170 = INT8_MAX;
	int32_t x171 = INT32_MIN;
	volatile uint16_t x172 = UINT16_MAX;

	t38 = ((x169&(x170%x171))*x172);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x173 = UINT8_MAX;
	int64_t x174 = -2LL;
	uint64_t x175 = UINT64_MAX;
	static volatile int16_t x176 = -1;
	uint64_t t39 = 70LLU;

	t39 = ((x173&(x174%x175))*x176);

	if (t39 != 18446744073709551362LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x177 = INT32_MIN;
	int64_t x179 = INT64_MIN;

	t40 = ((x177&(x178%x179))*x180);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x181 = INT8_MIN;
	static uint32_t x182 = 515U;
	static volatile int16_t x183 = INT16_MIN;
	volatile uint32_t t41 = 23U;

	t41 = ((x181&(x182%x183))*x184);

	if (t41 != 4294966784U) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x185 = INT64_MIN;
	int32_t x186 = -1;
	volatile int8_t x187 = INT8_MAX;
	int8_t x188 = 1;
	volatile int64_t t42 = INT64_MIN;

	t42 = ((x185&(x186%x187))*x188);

	if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x193 = INT32_MIN;
	uint8_t x194 = 1U;
	uint8_t x196 = 0U;
	volatile uint64_t t43 = 275677968482276LLU;

	t43 = ((x193&(x194%x195))*x196);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x197 = 1U;
	int16_t x200 = 1;
	volatile uint64_t t44 = 395813602158265LLU;

	t44 = ((x197&(x198%x199))*x200);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x201 = -26;
	uint32_t x203 = 68U;
	int64_t x204 = 1430088LL;
	static volatile int64_t t45 = -482461LL;

	t45 = ((x201&(x202%x203))*x204);

	if (t45 != 51483168LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x205 = UINT64_MAX;
	int64_t x206 = INT64_MAX;
	int64_t x207 = INT64_MIN;
	volatile int8_t x208 = INT8_MIN;
	volatile uint64_t t46 = 54351080779662LLU;

	t46 = ((x205&(x206%x207))*x208);

	if (t46 != 128LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x213 = 4U;
	volatile int8_t x215 = INT8_MIN;
	int32_t t47 = -30754;

	t47 = ((x213&(x214%x215))*x216);

	if (t47 != -4) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x217 = -274;
	uint8_t x218 = 11U;
	static volatile uint64_t x219 = 105291497478LLU;
	uint32_t x220 = 21946661U;
	uint64_t t48 = 25945048522303175LLU;

	t48 = ((x217&(x218%x219))*x220);

	if (t48 != 219466610LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x221 = UINT64_MAX;
	volatile uint32_t x222 = 270147221U;
	int16_t x224 = -440;
	uint64_t t49 = 33655559728511003LLU;

	t49 = ((x221&(x222%x223))*x224);

	if (t49 != 18446743954844774376LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x225 = 18U;
	uint32_t x226 = UINT32_MAX;
	uint16_t x228 = 1514U;
	uint32_t t50 = 864328485U;

	t50 = ((x225&(x226%x227))*x228);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x229 = UINT32_MAX;
	static int64_t x230 = -327997999483LL;
	int32_t x232 = INT32_MIN;

	t51 = ((x229&(x230%x231))*x232);

	if (t51 != -9223368328150515712LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x233 = 56814;
	static int8_t x234 = INT8_MAX;
	static volatile int8_t x235 = 11;
	static volatile int8_t x236 = INT8_MIN;
	int32_t t52 = -2075374;

	t52 = ((x233&(x234%x235))*x236);

	if (t52 != -768) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x237 = -7;
	volatile int32_t x240 = -1;
	volatile uint32_t t53 = 385128U;

	t53 = ((x237&(x238%x239))*x240);

	if (t53 != 4294967192U) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x242 = INT64_MIN;
	volatile uint64_t x243 = 1337687LLU;
	uint64_t t54 = 205LLU;

	t54 = ((x241&(x242%x243))*x244);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x245 = 1U;
	uint8_t x246 = 3U;
	int8_t x247 = INT8_MIN;
	int32_t x248 = -3218;

	t55 = ((x245&(x246%x247))*x248);

	if (t55 != -3218) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x249 = INT16_MIN;
	volatile uint64_t x250 = UINT64_MAX;

	t56 = ((x249&(x250%x251))*x252);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x253 = -4544205;
	volatile int32_t x254 = 0;
	volatile int8_t x255 = -3;
	uint64_t x256 = 73804885193LLU;
	uint64_t t57 = 507LLU;

	t57 = ((x253&(x254%x255))*x256);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x257 = INT64_MIN;
	int32_t x258 = INT32_MIN;
	volatile int8_t x259 = INT8_MIN;
	static int8_t x260 = -29;
	volatile int64_t t58 = -244LL;

	t58 = ((x257&(x258%x259))*x260);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x261 = -1567618LL;
	uint64_t x264 = 845916478343419LLU;
	volatile uint64_t t59 = 746LLU;

	t59 = ((x261&(x262%x263))*x264);

	if (t59 != 1985089883062639616LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x269 = 6443U;
	int8_t x270 = 0;
	int8_t x271 = INT8_MIN;
	int64_t x272 = -11323110LL;
	int64_t t60 = -688673680000797562LL;

	t60 = ((x269&(x270%x271))*x272);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x273 = UINT16_MAX;
	int64_t x274 = 10255919554LL;
	uint64_t x275 = 366479545203LLU;
	static volatile uint16_t x276 = UINT16_MAX;
	uint64_t t61 = 1704LLU;

	t61 = ((x273&(x274%x275))*x276);

	if (t61 != 3921745470LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x277 = -10;
	volatile int32_t x278 = INT32_MAX;
	uint16_t x280 = 3735U;
	int32_t t62 = 1456434;

	t62 = ((x277&(x278%x279))*x280);

	if (t62 != 440730) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x281 = INT64_MAX;
	volatile int32_t x282 = -274170;
	int16_t x283 = -1;
	uint16_t x284 = 145U;
	volatile int64_t t63 = 940833459LL;

	t63 = ((x281&(x282%x283))*x284);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x285 = -1;
	int64_t x286 = -41092925282LL;
	uint16_t x287 = UINT16_MAX;
	volatile int64_t t64 = -7817LL;

	t64 = ((x285&(x286%x287))*x288);

	if (t64 != 119157425176576LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x290 = INT64_MIN;
	int16_t x291 = -22;
	volatile uint64_t t65 = 16332543351137LLU;

	t65 = ((x289&(x290%x291))*x292);

	if (t65 != 87248LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x293 = 1748062LLU;
	uint8_t x295 = 88U;
	static int16_t x296 = INT16_MIN;
	volatile uint64_t t66 = 13384607LLU;

	t66 = ((x293&(x294%x295))*x296);

	if (t66 != 18446744016429252608LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x297 = -1;
	volatile uint64_t x298 = 35381402LLU;
	static int16_t x299 = 339;
	static uint16_t x300 = UINT16_MAX;
	volatile uint64_t t67 = 2117167350179143LLU;

	t67 = ((x297&(x298%x299))*x300);

	if (t67 != 20381385LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x301 = -13;
	volatile int8_t x302 = INT8_MIN;
	int64_t x303 = -1LL;
	uint64_t x304 = 2578050309LLU;

	t68 = ((x301&(x302%x303))*x304);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x306 = 2;
	uint16_t x308 = 7U;
	volatile int64_t t69 = 1590LL;

	t69 = ((x305&(x306%x307))*x308);

	if (t69 != 14LL) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint32_t x309 = 351U;
	int64_t x311 = 7160985258309LL;
	static volatile int64_t t70 = 4381740LL;

	t70 = ((x309&(x310%x311))*x312);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x317 = -29076279LL;
	int8_t x320 = 1;
	int64_t t71 = 1011807LL;

	t71 = ((x317&(x318%x319))*x320);

	if (t71 != -29076351LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x321 = UINT16_MAX;
	int8_t x322 = -7;

	t72 = ((x321&(x322%x323))*x324);

	if (t72 != -65529) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x325 = 1885186;
	static int32_t x326 = INT32_MAX;
	int32_t x327 = INT32_MAX;
	volatile int16_t x328 = 23;

	t73 = ((x325&(x326%x327))*x328);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x329 = -1;
	int64_t x330 = INT64_MAX;
	volatile int8_t x332 = INT8_MIN;
	volatile int64_t t74 = 15LL;

	t74 = ((x329&(x330%x331))*x332);

	if (t74 != -274877906816LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x333 = UINT32_MAX;
	int8_t x334 = -37;
	int64_t x336 = INT64_MIN;

	t75 = ((x333&(x334%x335))*x336);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x337 = 2107396201005489601LLU;
	volatile uint16_t x338 = UINT16_MAX;
	static volatile int8_t x340 = -1;
	volatile uint64_t t76 = 7039482337046420372LLU;

	t76 = ((x337&(x338%x339))*x340);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x341 = INT8_MIN;
	int64_t x342 = INT64_MIN;
	int32_t x343 = INT32_MIN;
	int64_t t77 = 73027179LL;

	t77 = ((x341&(x342%x343))*x344);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x345 = INT8_MIN;
	static int8_t x346 = 1;
	volatile uint16_t x347 = UINT16_MAX;
	static uint32_t t78 = 1546U;

	t78 = ((x345&(x346%x347))*x348);

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x349 = INT32_MIN;
	int64_t x350 = 93021920340670245LL;
	int64_t x352 = -1LL;
	volatile int64_t t79 = 31130657387201639LL;

	t79 = ((x349&(x350%x351))*x352);

	if (t79 != -93021919967707136LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x355 = INT8_MAX;

	t80 = ((x353&(x354%x355))*x356);

	if (t80 != 16711425) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int64_t x357 = -1LL;
	int16_t x358 = -1;
	static int64_t x359 = INT64_MIN;
	uint8_t x360 = UINT8_MAX;

	t81 = ((x357&(x358%x359))*x360);

	if (t81 != -255LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x361 = 1012;
	int64_t x362 = INT64_MIN;
	int64_t x363 = INT64_MIN;
	static volatile int64_t t82 = 130574925972892LL;

	t82 = ((x361&(x362%x363))*x364);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x365 = INT8_MIN;
	static int8_t x366 = -1;
	uint16_t x367 = UINT16_MAX;
	int16_t x368 = INT16_MIN;

	t83 = ((x365&(x366%x367))*x368);

	if (t83 != 4194304) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x369 = -1;
	volatile uint64_t x370 = 822LLU;
	int16_t x371 = INT16_MIN;
	int8_t x372 = -1;
	uint64_t t84 = 12356213000318225LLU;

	t84 = ((x369&(x370%x371))*x372);

	if (t84 != 18446744073709550794LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x373 = INT32_MAX;
	volatile uint16_t x374 = 19U;
	volatile int64_t x375 = INT64_MIN;
	volatile int64_t t85 = 519685224338050LL;

	t85 = ((x373&(x374%x375))*x376);

	if (t85 != -19LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x377 = 33;
	static uint64_t x379 = UINT64_MAX;
	volatile int32_t x380 = INT32_MAX;

	t86 = ((x377&(x378%x379))*x380);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x382 = INT8_MAX;
	static uint32_t x383 = 2615577U;
	int64_t x384 = -1LL;
	volatile int64_t t87 = 14469268890281731LL;

	t87 = ((x381&(x382%x383))*x384);

	if (t87 != -46LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x385 = 746865016762758LLU;
	volatile int8_t x386 = INT8_MIN;
	uint8_t x387 = 31U;
	static uint64_t x388 = 32275121520427001LLU;
	uint64_t t88 = 46678927LLU;

	t88 = ((x385&(x386%x387))*x388);

	if (t88 != 8351809788031034724LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x389 = -60;
	uint32_t x390 = 5581103U;
	volatile int16_t x392 = INT16_MIN;
	static volatile uint32_t t89 = 65416U;

	t89 = ((x389&(x390%x391))*x392);

	if (t89 != 1803419648U) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x393 = UINT8_MAX;
	static int32_t x394 = INT32_MIN;
	uint64_t x395 = UINT64_MAX;
	volatile uint8_t x396 = 39U;
	static volatile uint64_t t90 = 107295LLU;

	t90 = ((x393&(x394%x395))*x396);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x398 = 1051965017LLU;
	int32_t x400 = INT32_MIN;
	uint64_t t91 = 206931411222LLU;

	t91 = ((x397&(x398%x399))*x400);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x401 = INT8_MAX;
	volatile int8_t x402 = -1;
	int16_t x404 = INT16_MIN;
	int32_t t92 = 0;

	t92 = ((x401&(x402%x403))*x404);

	if (t92 != -4161536) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x406 = UINT64_MAX;
	uint16_t x407 = 37U;
	volatile int8_t x408 = -1;

	t93 = ((x405&(x406%x407))*x408);

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x410 = 56935U;
	volatile uint64_t x411 = 188794386601277LLU;
	uint16_t x412 = 6340U;
	uint64_t t94 = 1764LLU;

	t94 = ((x409&(x410%x411))*x412);

	if (t94 != 39181200LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x413 = INT32_MIN;
	static uint32_t x416 = 76U;
	volatile uint32_t t95 = 1408U;

	t95 = ((x413&(x414%x415))*x416);

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x417 = INT8_MIN;
	volatile int16_t x418 = -72;
	uint64_t x420 = UINT64_MAX;
	uint64_t t96 = 6601679LLU;

	t96 = ((x417&(x418%x419))*x420);

	if (t96 != 128LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x421 = INT32_MIN;
	uint64_t x422 = UINT64_MAX;
	uint16_t x423 = UINT16_MAX;
	static volatile int64_t x424 = -1LL;
	uint64_t t97 = 1908LLU;

	t97 = ((x421&(x422%x423))*x424);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x426 = INT32_MIN;
	uint8_t x427 = UINT8_MAX;
	int8_t x428 = 3;
	volatile int32_t t98 = -7129;

	t98 = ((x425&(x426%x427))*x428);

	if (t98 != 12288) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x433 = 2582639611525LLU;
	int32_t x435 = -8080552;
	int8_t x436 = 0;
	volatile uint64_t t99 = 469664LLU;

	t99 = ((x433&(x434%x435))*x436);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

