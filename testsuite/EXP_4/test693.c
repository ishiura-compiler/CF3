#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t t0 = 38436724636LLU;
volatile int8_t x8 = INT8_MIN;
volatile int64_t t1 = -426184874LL;
static int32_t x12 = INT32_MIN;
int16_t x16 = 14;
static int8_t x17 = -32;
static volatile int64_t x19 = 26968639278800LL;
int8_t x28 = INT8_MIN;
uint16_t x30 = 1516U;
int32_t x37 = -1;
int16_t x38 = INT16_MIN;
uint64_t t11 = 221448323738881831LLU;
volatile uint64_t x68 = UINT64_MAX;
uint64_t t14 = 810439323LLU;
static uint64_t x80 = UINT64_MAX;
static int64_t x81 = -1LL;
uint8_t x83 = UINT8_MAX;
uint8_t x91 = 30U;
volatile uint64_t t19 = 5715855798450454893LLU;
int64_t t20 = 54314LL;
uint64_t x102 = 13690672LLU;
uint64_t t21 = 6546588LLU;
int64_t x107 = -211626208519LL;
int32_t x110 = -1;
int16_t x115 = -339;
uint8_t x116 = 1U;
uint8_t x122 = UINT8_MAX;
static volatile int32_t t26 = -3;
static int16_t x126 = -1;
int32_t x138 = -5;
volatile int16_t x152 = INT16_MIN;
volatile int32_t t34 = 3;
static int8_t x168 = INT8_MAX;
int64_t t38 = -46327719LL;
volatile int32_t x186 = INT32_MIN;
static uint16_t x199 = UINT16_MAX;
uint16_t x200 = 32U;
volatile int8_t x202 = INT8_MIN;
int8_t x204 = INT8_MIN;
int32_t x208 = INT32_MIN;
static volatile uint64_t x213 = UINT64_MAX;
static uint32_t x215 = 1073612813U;
static int32_t x218 = INT32_MAX;
int16_t x219 = -69;
volatile int32_t t49 = -1006430;
int32_t x240 = -1;
int32_t t51 = -2;
static int64_t x243 = INT64_MIN;
volatile int64_t t53 = -467623728766506467LL;
uint32_t x251 = 1513352U;
uint32_t t54 = 419731U;
uint16_t x255 = 5566U;
volatile int16_t x256 = INT16_MIN;
uint16_t x258 = 2519U;
int64_t x260 = INT64_MIN;
uint32_t x261 = 4593286U;
volatile uint32_t x263 = 363326U;
int32_t x268 = INT32_MIN;
uint64_t x275 = 45136LLU;
volatile int32_t x279 = INT32_MIN;
uint16_t x282 = 17U;
int16_t x284 = -14;
static uint32_t t62 = 1727U;
int64_t x290 = 1LL;
int32_t x295 = INT32_MAX;
int32_t x308 = INT32_MIN;
int32_t x311 = -607;
int32_t x313 = INT32_MAX;
int64_t x318 = -1963295LL;
static volatile uint32_t x321 = 2114U;
static int32_t x322 = INT32_MIN;
int16_t x325 = INT16_MIN;
int8_t x328 = -22;
uint32_t x329 = 2076157U;
volatile int64_t x330 = 1758LL;
int16_t x344 = INT16_MIN;
volatile uint64_t t77 = 2535471LLU;
volatile uint64_t x353 = 104LLU;
volatile uint8_t x355 = UINT8_MAX;
int16_t x364 = INT16_MIN;
int64_t x368 = INT64_MAX;
static int8_t x391 = INT8_MIN;
volatile uint32_t t86 = 1506923U;
uint8_t x409 = 99U;
static volatile uint64_t x412 = 131142950LLU;
uint64_t t90 = 60061241LLU;
int32_t x423 = -1;
uint32_t t92 = 1403433433U;
uint8_t x427 = UINT8_MAX;
static int16_t x428 = INT16_MIN;
volatile int64_t t93 = -4215213568LL;
int32_t x434 = INT32_MIN;
int16_t x435 = INT16_MAX;
uint32_t x442 = 634U;
int16_t x443 = INT16_MIN;
uint64_t x444 = 15812LLU;
int16_t x460 = INT16_MIN;
uint8_t x464 = UINT8_MAX;
int16_t x468 = -11;


void f0(void) {
	volatile int16_t x1 = 125;
	int8_t x2 = 1;
	uint64_t x3 = 2036953LLU;
	volatile int64_t x4 = 5LL;

	t0 = (x1/(x2-(x3%x4)));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int16_t x6 = INT16_MIN;
	static volatile int64_t x7 = INT64_MAX;

	t1 = (x5/(x6-(x7%x8)));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 87189U;
	static uint16_t x10 = UINT16_MAX;
	int32_t x11 = INT32_MAX;
	volatile uint32_t t2 = 81U;

	t2 = (x9/(x10-(x11%x12)));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MAX;
	uint8_t x14 = 27U;
	int32_t x15 = INT32_MIN;
	int32_t t3 = -23647440;

	t3 = (x13/(x14-(x15%x16)));

	if (t3 != 4) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x18 = 2U;
	volatile uint64_t x20 = 2807600LLU;
	volatile uint64_t t4 = 7LLU;

	t4 = (x17/(x18-(x19%x20)));

	if (t4 != 1LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -1;
	static uint8_t x22 = UINT8_MAX;
	int64_t x23 = -1LL;
	uint32_t x24 = 64189U;
	static int64_t t5 = -1467LL;

	t5 = (x21/(x22-(x23%x24)));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = -1LL;
	uint64_t x26 = UINT64_MAX;
	static uint64_t x27 = UINT64_MAX;
	uint64_t t6 = 1039224261889LLU;

	t6 = (x25/(x26-(x27%x28)));

	if (t6 != 1LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x29 = 19U;
	int8_t x31 = 1;
	static int32_t x32 = INT32_MIN;
	static volatile int32_t t7 = 1;

	t7 = (x29/(x30-(x31%x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -1;
	static int8_t x34 = 3;
	int32_t x35 = -1;
	int16_t x36 = INT16_MIN;
	static volatile int32_t t8 = 7;

	t8 = (x33/(x34-(x35%x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x39 = 236623;
	uint32_t x40 = 502259967U;
	uint32_t t9 = 24U;

	t9 = (x37/(x38-(x39%x40)));

	if (t9 != 1U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x41 = 14U;
	int16_t x42 = -1;
	int64_t x43 = 360583707410404578LL;
	static uint16_t x44 = 1240U;
	volatile int64_t t10 = -3736692LL;

	t10 = (x41/(x42-(x43%x44)));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = -1893LL;
	uint64_t x46 = 552200795191432373LLU;
	uint64_t x47 = 18947680059833LLU;
	int16_t x48 = INT16_MIN;

	t11 = (x45/(x46-(x47%x48)));

	if (t11 != 33LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x49 = 1663LLU;
	uint16_t x50 = 53U;
	uint16_t x51 = 2U;
	volatile int8_t x52 = INT8_MIN;
	uint64_t t12 = 6076503326069398LLU;

	t12 = (x49/(x50-(x51%x52)));

	if (t12 != 32LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x57 = 12LLU;
	static int16_t x58 = -1;
	uint32_t x59 = 36376244U;
	uint8_t x60 = 25U;
	uint64_t t13 = 7230340298281LLU;

	t13 = (x57/(x58-(x59%x60)));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x65 = 2959U;
	int32_t x66 = -133259;
	uint64_t x67 = 184240666782980616LLU;

	t14 = (x65/(x66-(x67%x68)));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x69 = INT64_MAX;
	uint16_t x70 = 11U;
	int64_t x71 = INT64_MAX;
	static int16_t x72 = -1;
	int64_t t15 = -613468177956697LL;

	t15 = (x69/(x70-(x71%x72)));

	if (t15 != 838488366986797800LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x73 = -3683573816850LL;
	int16_t x74 = -105;
	static uint16_t x75 = UINT16_MAX;
	volatile uint64_t x76 = 930285088765558LLU;
	uint64_t t16 = 15664000LLU;

	t16 = (x73/(x74-(x75%x76)));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x77 = -1;
	static uint16_t x78 = 8666U;
	int32_t x79 = INT32_MIN;
	uint64_t t17 = 33LLU;

	t17 = (x77/(x78-(x79%x80)));

	if (t17 != 8589899928LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x82 = 179U;
	int8_t x84 = INT8_MIN;
	volatile int64_t t18 = -43813LL;

	t18 = (x81/(x82-(x83%x84)));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x89 = -1;
	static int64_t x90 = INT64_MIN;
	static uint64_t x92 = 131527100624305LLU;

	t19 = (x89/(x90-(x91%x92)));

	if (t19 != 2LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x93 = INT64_MIN;
	uint16_t x94 = 476U;
	uint32_t x95 = 13206916U;
	uint32_t x96 = 2766U;

	t20 = (x93/(x94-(x95%x96)));

	if (t20 != -2147484426LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x101 = -22;
	uint16_t x103 = 267U;
	static volatile int8_t x104 = INT8_MIN;

	t21 = (x101/(x102-(x103%x104)));

	if (t21 != 1347396161055LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x105 = UINT8_MAX;
	static int32_t x106 = 4077705;
	int16_t x108 = INT16_MIN;
	volatile int64_t t22 = -68026492408863LL;

	t22 = (x105/(x106-(x107%x108)));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x109 = 3U;
	int16_t x111 = -1;
	int64_t x112 = -1LL;
	volatile int64_t t23 = 275586054547379332LL;

	t23 = (x109/(x110-(x111%x112)));

	if (t23 != -3LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x113 = 62U;
	uint16_t x114 = 733U;
	volatile int32_t t24 = -16;

	t24 = (x113/(x114-(x115%x116)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x117 = -2280;
	static volatile int8_t x118 = 45;
	static volatile uint8_t x119 = UINT8_MAX;
	static volatile int32_t x120 = INT32_MAX;
	int32_t t25 = 189;

	t25 = (x117/(x118-(x119%x120)));

	if (t25 != 10) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x121 = INT8_MAX;
	static uint16_t x123 = UINT16_MAX;
	volatile int8_t x124 = 18;

	t26 = (x121/(x122-(x123%x124)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x125 = INT16_MIN;
	uint16_t x127 = 7864U;
	static int16_t x128 = INT16_MIN;
	volatile int32_t t27 = 1;

	t27 = (x125/(x126-(x127%x128)));

	if (t27 != 4) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x129 = INT32_MIN;
	volatile uint16_t x130 = UINT16_MAX;
	volatile uint64_t x131 = 254LLU;
	static int32_t x132 = INT32_MAX;
	volatile uint64_t t28 = 729975395964427LLU;

	t28 = (x129/(x130-(x131%x132)));

	if (t28 != 282574471462785LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x133 = UINT64_MAX;
	int16_t x134 = -211;
	int32_t x135 = -1;
	int64_t x136 = INT64_MAX;
	volatile uint64_t t29 = 13094856713520LLU;

	t29 = (x133/(x134-(x135%x136)));

	if (t29 != 1LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x137 = -1;
	static volatile int32_t x139 = INT32_MAX;
	int64_t x140 = INT64_MAX;
	int64_t t30 = 2654183998897393LL;

	t30 = (x137/(x138-(x139%x140)));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x145 = UINT16_MAX;
	int32_t x146 = INT32_MAX;
	int64_t x147 = -1LL;
	static int32_t x148 = -1;
	volatile int64_t t31 = -127602LL;

	t31 = (x145/(x146-(x147%x148)));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x149 = -2291644LL;
	int16_t x150 = INT16_MIN;
	volatile uint8_t x151 = 5U;
	volatile int64_t t32 = 3598LL;

	t32 = (x149/(x150-(x151%x152)));

	if (t32 != 69LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x153 = 284294119855143LLU;
	uint32_t x154 = 371U;
	static int64_t x155 = INT64_MIN;
	uint8_t x156 = 7U;
	volatile uint64_t t33 = 737115LLU;

	t33 = (x153/(x154-(x155%x156)));

	if (t33 != 764231504986LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x157 = -921981833;
	static volatile int16_t x158 = -431;
	int32_t x159 = 926034;
	static int32_t x160 = 69357566;

	t34 = (x157/(x158-(x159%x160)));

	if (t34 != 995) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x161 = INT64_MAX;
	int8_t x162 = -46;
	uint8_t x163 = 0U;
	uint8_t x164 = UINT8_MAX;
	volatile int64_t t35 = 19723678351725207LL;

	t35 = (x161/(x162-(x163%x164)));

	if (t35 != -200508087757712517LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x165 = 0;
	uint64_t x166 = 509996578821257LLU;
	uint64_t x167 = 1085912016133594923LLU;
	static volatile uint64_t t36 = 3306LLU;

	t36 = (x165/(x166-(x167%x168)));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x173 = -1;
	uint8_t x174 = 45U;
	volatile int16_t x175 = INT16_MAX;
	int16_t x176 = 15991;
	volatile int32_t t37 = -15912759;

	t37 = (x173/(x174-(x175%x176)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x177 = INT64_MAX;
	static volatile int32_t x178 = INT32_MIN;
	volatile int32_t x179 = INT32_MAX;
	int8_t x180 = -1;

	t38 = (x177/(x178-(x179%x180)));

	if (t38 != -4294967295LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x181 = 15U;
	int64_t x182 = INT64_MAX;
	uint8_t x183 = 92U;
	int8_t x184 = INT8_MIN;
	volatile int64_t t39 = -2389657360637165294LL;

	t39 = (x181/(x182-(x183%x184)));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x185 = 12;
	int64_t x187 = INT64_MAX;
	int8_t x188 = 25;
	int64_t t40 = -6192944LL;

	t40 = (x185/(x186-(x187%x188)));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x189 = INT32_MIN;
	int16_t x190 = INT16_MIN;
	uint8_t x191 = 80U;
	volatile int16_t x192 = -3;
	int32_t t41 = 27924189;

	t41 = (x189/(x190-(x191%x192)));

	if (t41 != 65532) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x197 = 961U;
	int64_t x198 = INT64_MAX;
	volatile int64_t t42 = -207737LL;

	t42 = (x197/(x198-(x199%x200)));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x201 = -41;
	static uint16_t x203 = 0U;
	volatile int32_t t43 = -871696985;

	t43 = (x201/(x202-(x203%x204)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x205 = -9897;
	int8_t x206 = INT8_MAX;
	int16_t x207 = 1;
	static volatile int32_t t44 = 58520998;

	t44 = (x205/(x206-(x207%x208)));

	if (t44 != -78) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x209 = INT16_MIN;
	static int16_t x210 = INT16_MAX;
	int8_t x211 = 0;
	uint32_t x212 = 5U;
	static uint32_t t45 = 1021318782U;

	t45 = (x209/(x210-(x211%x212)));

	if (t45 != 131075U) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x214 = INT32_MIN;
	int16_t x216 = -1;
	static volatile uint64_t t46 = 1265357LLU;

	t46 = (x213/(x214-(x215%x216)));

	if (t46 != 17177805255LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x217 = 6U;
	int64_t x220 = INT64_MIN;
	int64_t t47 = -95726263174059564LL;

	t47 = (x217/(x218-(x219%x220)));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x221 = -1;
	uint8_t x222 = 1U;
	volatile int8_t x223 = -1;
	int16_t x224 = INT16_MIN;
	volatile int32_t t48 = -2;

	t48 = (x221/(x222-(x223%x224)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x225 = INT32_MIN;
	volatile uint16_t x226 = 383U;
	int32_t x227 = INT32_MIN;
	uint8_t x228 = 13U;

	t49 = (x225/(x226-(x227%x228)));

	if (t49 != -5450466) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x229 = 4U;
	int32_t x230 = -12;
	volatile uint16_t x231 = 13U;
	uint64_t x232 = UINT64_MAX;
	volatile uint64_t t50 = 6676264617180LLU;

	t50 = (x229/(x230-(x231%x232)));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x237 = -55;
	int32_t x238 = -426;
	int8_t x239 = -1;

	t51 = (x237/(x238-(x239%x240)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x241 = 536741928;
	volatile uint32_t x242 = UINT32_MAX;
	uint8_t x244 = 1U;
	int64_t t52 = 2740401347771LL;

	t52 = (x241/(x242-(x243%x244)));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x245 = -1;
	int64_t x246 = -1LL;
	int8_t x247 = INT8_MIN;
	static uint8_t x248 = 2U;

	t53 = (x245/(x246-(x247%x248)));

	if (t53 != 1LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x249 = 20;
	int32_t x250 = 2196763;
	volatile int32_t x252 = -1;

	t54 = (x249/(x250-(x251%x252)));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x253 = INT16_MIN;
	static int8_t x254 = 1;
	int32_t t55 = -42811;

	t55 = (x253/(x254-(x255%x256)));

	if (t55 != 5) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x257 = INT64_MIN;
	int16_t x259 = INT16_MAX;
	int64_t t56 = 4500996535275LL;

	t56 = (x257/(x258-(x259%x260)));

	if (t56 != 304925021054442LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x262 = UINT64_MAX;
	int32_t x264 = 251;
	static uint64_t t57 = 14128042219242LLU;

	t57 = (x261/(x262-(x263%x264)));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x265 = -1;
	int32_t x266 = 174158980;
	static volatile int8_t x267 = -1;
	static volatile int32_t t58 = -112627;

	t58 = (x265/(x266-(x267%x268)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x269 = 4972LLU;
	static int16_t x270 = -2610;
	uint32_t x271 = UINT32_MAX;
	int32_t x272 = -1;
	volatile uint64_t t59 = 12076061508026LLU;

	t59 = (x269/(x270-(x271%x272)));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x273 = INT16_MAX;
	uint16_t x274 = UINT16_MAX;
	volatile uint8_t x276 = UINT8_MAX;
	uint64_t t60 = 54059LLU;

	t60 = (x273/(x274-(x275%x276)));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x277 = 566418668813793107LL;
	static int64_t x278 = -109894LL;
	static int8_t x280 = -1;
	int64_t t61 = 115076LL;

	t61 = (x277/(x278-(x279%x280)));

	if (t61 != -5154227426554LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x281 = INT32_MIN;
	uint32_t x283 = UINT32_MAX;

	t62 = (x281/(x282-(x283%x284)));

	if (t62 != 536870912U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x285 = 1646U;
	static int32_t x286 = -63992;
	int16_t x287 = INT16_MAX;
	int8_t x288 = 1;
	uint32_t t63 = 466142389U;

	t63 = (x285/(x286-(x287%x288)));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x289 = UINT32_MAX;
	int16_t x291 = -1;
	uint8_t x292 = 52U;
	volatile int64_t t64 = 188LL;

	t64 = (x289/(x290-(x291%x292)));

	if (t64 != 2147483647LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x293 = INT64_MAX;
	static volatile int8_t x294 = 0;
	uint64_t x296 = UINT64_MAX;
	static uint64_t t65 = 3527050557199266LLU;

	t65 = (x293/(x294-(x295%x296)));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x297 = -1;
	int32_t x298 = -3;
	uint32_t x299 = UINT32_MAX;
	uint32_t x300 = 968303300U;
	static uint32_t t66 = 2138269U;

	t66 = (x297/(x298-(x299%x300)));

	if (t66 != 1U) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x301 = 467;
	int64_t x302 = 1889552826931911LL;
	uint16_t x303 = UINT16_MAX;
	int8_t x304 = INT8_MIN;
	int64_t t67 = -11016123332560LL;

	t67 = (x301/(x302-(x303%x304)));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x305 = INT8_MAX;
	int16_t x306 = INT16_MAX;
	int8_t x307 = INT8_MIN;
	volatile int32_t t68 = 212087450;

	t68 = (x305/(x306-(x307%x308)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x309 = INT8_MIN;
	volatile uint16_t x310 = UINT16_MAX;
	int8_t x312 = INT8_MAX;
	volatile int32_t t69 = 1304;

	t69 = (x309/(x310-(x311%x312)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x314 = INT64_MAX;
	int32_t x315 = -1;
	int8_t x316 = -1;
	int64_t t70 = -277796LL;

	t70 = (x313/(x314-(x315%x316)));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x317 = -7;
	int8_t x319 = INT8_MIN;
	int32_t x320 = INT32_MIN;
	volatile int64_t t71 = 46LL;

	t71 = (x317/(x318-(x319%x320)));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x323 = INT16_MIN;
	int16_t x324 = -1;
	volatile uint32_t t72 = 4399U;

	t72 = (x321/(x322-(x323%x324)));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x326 = INT64_MIN;
	static int32_t x327 = INT32_MIN;
	static int64_t t73 = -14894367569827LL;

	t73 = (x325/(x326-(x327%x328)));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x331 = 0U;
	uint16_t x332 = 31841U;
	volatile int64_t t74 = -1500054688LL;

	t74 = (x329/(x330-(x331%x332)));

	if (t74 != 1180LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x333 = 1272U;
	volatile int16_t x334 = INT16_MIN;
	int64_t x335 = INT64_MIN;
	int8_t x336 = -14;
	int64_t t75 = -30841558078916531LL;

	t75 = (x333/(x334-(x335%x336)));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x337 = INT64_MAX;
	static uint32_t x338 = 1055344U;
	uint64_t x339 = 81LLU;
	int32_t x340 = 612707;
	volatile uint64_t t76 = 2130987LLU;

	t76 = (x337/(x338-(x339%x340)));

	if (t76 != 8740353861411LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x341 = UINT8_MAX;
	uint64_t x342 = 550248812033111LLU;
	int16_t x343 = INT16_MIN;

	t77 = (x341/(x342-(x343%x344)));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x345 = 1;
	volatile uint32_t x346 = 497041U;
	int8_t x347 = INT8_MAX;
	int8_t x348 = -1;
	uint32_t t78 = 22U;

	t78 = (x345/(x346-(x347%x348)));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x349 = INT64_MIN;
	volatile int8_t x350 = -12;
	int16_t x351 = -21;
	static int8_t x352 = -1;
	volatile int64_t t79 = 385998423185LL;

	t79 = (x349/(x350-(x351%x352)));

	if (t79 != 768614336404564650LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x354 = INT16_MIN;
	volatile int64_t x356 = 227149096LL;
	uint64_t t80 = 15659476627LLU;

	t80 = (x353/(x354-(x355%x356)));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x361 = UINT32_MAX;
	static int64_t x362 = -1LL;
	static int8_t x363 = INT8_MIN;
	volatile int64_t t81 = -2LL;

	t81 = (x361/(x362-(x363%x364)));

	if (t81 != 33818640LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x365 = UINT64_MAX;
	static uint8_t x366 = 82U;
	int64_t x367 = INT64_MIN;
	uint64_t t82 = 1109009800309331LLU;

	t82 = (x365/(x366-(x367%x368)));

	if (t82 != 222249928598910260LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint8_t x373 = 19U;
	uint8_t x374 = 1U;
	int32_t x375 = INT32_MIN;
	uint64_t x376 = UINT64_MAX;
	volatile uint64_t t83 = 507281770LLU;

	t83 = (x373/(x374-(x375%x376)));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x381 = 9;
	int16_t x382 = INT16_MIN;
	static uint16_t x383 = 21667U;
	volatile int64_t x384 = -1LL;
	int64_t t84 = -2342310073LL;

	t84 = (x381/(x382-(x383%x384)));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x385 = 93U;
	int8_t x386 = -14;
	volatile int64_t x387 = INT64_MAX;
	int16_t x388 = INT16_MAX;
	static volatile int64_t t85 = -200LL;

	t85 = (x385/(x386-(x387%x388)));

	if (t85 != -4LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x389 = INT8_MIN;
	volatile int16_t x390 = INT16_MIN;
	static uint32_t x392 = 393281U;

	t86 = (x389/(x390-(x391%x392)));

	if (t86 != 1U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x393 = -746811244LL;
	static volatile int32_t x394 = INT32_MIN;
	uint64_t x395 = UINT64_MAX;
	int8_t x396 = 41;
	static uint64_t t87 = 30870605379391LLU;

	t87 = (x393/(x394-(x395%x396)));

	if (t87 != 1LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x401 = 8362316LLU;
	uint64_t x402 = UINT64_MAX;
	int16_t x403 = -7712;
	uint32_t x404 = 10357U;
	uint64_t t88 = 72580LLU;

	t88 = (x401/(x402-(x403%x404)));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x405 = 114U;
	static uint32_t x406 = 18U;
	int64_t x407 = INT64_MIN;
	uint8_t x408 = UINT8_MAX;
	int64_t t89 = 1LL;

	t89 = (x405/(x406-(x407%x408)));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x410 = -2719929329219LL;
	static uint32_t x411 = 1928880U;

	t90 = (x409/(x410-(x411%x412)));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x413 = 1;
	volatile uint64_t x414 = 176370998LLU;
	volatile int8_t x415 = INT8_MIN;
	int32_t x416 = -1;
	volatile uint64_t t91 = 586277298450671083LLU;

	t91 = (x413/(x414-(x415%x416)));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x421 = -1;
	int32_t x422 = INT32_MIN;
	volatile uint32_t x424 = UINT32_MAX;

	t92 = (x421/(x422-(x423%x424)));

	if (t92 != 1U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x425 = INT32_MIN;
	int64_t x426 = 2070316619156840180LL;

	t93 = (x425/(x426-(x427%x428)));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x433 = INT8_MAX;
	int16_t x436 = -1;
	volatile int32_t t94 = -151733;

	t94 = (x433/(x434-(x435%x436)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x441 = UINT64_MAX;
	uint64_t t95 = 1760045LLU;

	t95 = (x441/(x442-(x443%x444)));

	if (t95 != 1LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x445 = INT8_MIN;
	int8_t x446 = 62;
	int16_t x447 = 2587;
	uint16_t x448 = 10203U;
	int32_t t96 = 172985;

	t96 = (x445/(x446-(x447%x448)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x457 = INT32_MAX;
	uint64_t x458 = 1912LLU;
	uint32_t x459 = 322763238U;
	uint64_t t97 = 11528836501290LLU;

	t97 = (x457/(x458-(x459%x460)));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x461 = INT64_MIN;
	int16_t x462 = INT16_MAX;
	uint32_t x463 = 16078968U;
	volatile int64_t t98 = 318LL;

	t98 = (x461/(x462-(x463%x464)));

	if (t98 != -283194818289010LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x465 = 14080U;
	static int64_t x466 = -23LL;
	int8_t x467 = INT8_MIN;
	int64_t t99 = -120871LL;

	t99 = (x465/(x466-(x467%x468)));

	if (t99 != -880LL) { NG(); } else { ; }
	
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

