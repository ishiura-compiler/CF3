#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x14 = 77U;
static uint32_t x17 = 293798U;
static int8_t x25 = INT8_MIN;
uint16_t x26 = 22U;
uint64_t t3 = 98599201LLU;
int32_t x33 = 15375;
static uint64_t x47 = 439LLU;
uint16_t x56 = 55U;
uint64_t x72 = UINT64_MAX;
int64_t x75 = INT64_MIN;
uint16_t x103 = UINT16_MAX;
static int64_t x104 = -34777768083LL;
static int8_t x105 = INT8_MIN;
uint8_t x107 = 76U;
uint8_t x108 = 44U;
int32_t x109 = 14;
int64_t t15 = -1LL;
int32_t x117 = INT32_MIN;
int64_t x122 = INT64_MIN;
int64_t x125 = INT64_MAX;
int64_t t19 = -492994103798406352LL;
int8_t x141 = 0;
int32_t x163 = INT32_MAX;
static uint64_t x173 = 8789292LLU;
int8_t x174 = -1;
volatile int8_t x183 = INT8_MIN;
int64_t x185 = -1LL;
int32_t x186 = -1;
volatile int64_t t30 = -5711LL;
int8_t x193 = -41;
volatile int16_t x201 = -1;
static int64_t x205 = -1LL;
uint32_t x206 = UINT32_MAX;
static int16_t x217 = 12;
int8_t x218 = -1;
int64_t x222 = -1LL;
static int32_t t37 = 904;
static uint32_t x229 = UINT32_MAX;
uint16_t x230 = 190U;
uint64_t x246 = UINT64_MAX;
uint32_t x251 = UINT32_MAX;
volatile int16_t x253 = INT16_MIN;
uint16_t x259 = UINT16_MAX;
uint8_t x262 = 106U;
int32_t t43 = 2219;
volatile uint16_t x283 = UINT16_MAX;
uint64_t x295 = 4540655LLU;
int64_t x300 = -2116154457195LL;
static uint8_t x301 = 0U;
uint32_t x309 = 118504512U;
volatile int64_t t52 = 2162269LL;
int64_t x313 = 6922LL;
int16_t x317 = INT16_MIN;
int32_t x329 = INT32_MIN;
int16_t x332 = INT16_MIN;
volatile int64_t t57 = -1374542781693704231LL;
int8_t x350 = -1;
uint32_t x351 = 406U;
uint8_t x353 = 0U;
static int32_t x354 = -1;
int8_t x356 = INT8_MIN;
volatile uint16_t x360 = 7U;
static int64_t t61 = -1LL;
uint8_t x381 = 1U;
volatile uint32_t t64 = 115353U;
int16_t x393 = -3;
int64_t t66 = 14179118087267LL;
int8_t x397 = -41;
volatile uint8_t x398 = 44U;
uint8_t x399 = UINT8_MAX;
int16_t x405 = INT16_MAX;
uint64_t x407 = 3LLU;
volatile uint64_t t69 = 11713LLU;
uint64_t t71 = 4748881463044627LLU;
volatile int64_t t72 = -24515950926585LL;
static int32_t x421 = INT32_MIN;
int64_t x422 = INT64_MIN;
volatile int32_t t75 = 431;
int64_t x442 = -1LL;
volatile int64_t t78 = 26688442857LL;
int32_t x460 = -44;
uint64_t x488 = 64151254393164LLU;
volatile uint32_t x491 = 66198U;
volatile int16_t x509 = INT16_MIN;
volatile uint8_t x510 = 3U;
uint32_t t87 = 64130U;
int8_t x514 = INT8_MAX;
int64_t x515 = 427660190LL;
int8_t x518 = -1;
volatile int32_t t89 = -32849859;
volatile int64_t t90 = 3961377469LL;
uint32_t x530 = 4U;
int32_t x531 = -1;
int8_t x532 = INT8_MAX;
static uint8_t x537 = 14U;
uint64_t t92 = 1743914LLU;
static int8_t x544 = -1;
int32_t x545 = INT32_MAX;
int32_t x547 = INT32_MIN;
volatile uint32_t t94 = 17985U;
static int16_t x551 = 15;
uint64_t x556 = 55LLU;
int16_t x564 = 0;
static int16_t x569 = INT16_MIN;


void f0(void) {
	static volatile uint16_t x13 = UINT16_MAX;
	int16_t x15 = INT16_MAX;
	int8_t x16 = INT8_MIN;
	uint32_t t0 = 119392615U;

	t0 = ((x13%(x14%x15))*x16);

	if (t0 != 4294966272U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x18 = -1LL;
	int64_t x19 = 78468910LL;
	uint32_t x20 = UINT32_MAX;
	volatile int64_t t1 = -115009043504902488LL;

	t1 = ((x17%(x18%x19))*x20);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x27 = 3766U;
	volatile int64_t x28 = 945298324206LL;
	int64_t t2 = 53LL;

	t2 = ((x25%(x26%x27))*x28);

	if (t2 != 7562386593648LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x29 = -1;
	static volatile int64_t x30 = INT64_MIN;
	static uint32_t x31 = 2482253U;
	uint64_t x32 = 111LLU;

	t3 = ((x29%(x30%x31))*x32);

	if (t3 != 18446744073709551505LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x34 = 1;
	volatile int16_t x35 = INT16_MIN;
	volatile int8_t x36 = -1;
	static int32_t t4 = 261593333;

	t4 = ((x33%(x34%x35))*x36);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x37 = 5062694927784LLU;
	uint64_t x38 = 3376565775410825LLU;
	uint32_t x39 = 248U;
	uint64_t x40 = 12809741851731LLU;
	volatile uint64_t t5 = 7479836649LLU;

	t5 = ((x37%(x38%x39))*x40);

	if (t5 != 563628641476164LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x45 = 9U;
	static volatile int16_t x46 = 124;
	int8_t x48 = -8;
	uint64_t t6 = 232268128929378174LLU;

	t6 = ((x45%(x46%x47))*x48);

	if (t6 != 18446744073709551544LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x49 = INT16_MAX;
	volatile int16_t x50 = INT16_MIN;
	volatile uint8_t x51 = UINT8_MAX;
	int16_t x52 = INT16_MAX;
	volatile int32_t t7 = -2;

	t7 = ((x49%(x50%x51))*x52);

	if (t7 != 4161409) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x53 = INT32_MIN;
	volatile int32_t x54 = INT32_MIN;
	static uint8_t x55 = 42U;
	static int32_t t8 = 3;

	t8 = ((x53%(x54%x55))*x56);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x61 = -8;
	int32_t x62 = INT32_MIN;
	uint32_t x63 = 556263U;
	uint8_t x64 = UINT8_MAX;
	uint32_t t9 = 702274095U;

	t9 = ((x61%(x62%x63))*x64);

	if (t9 != 42667620U) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x69 = 84957561U;
	static int8_t x70 = -1;
	uint16_t x71 = UINT16_MAX;
	static volatile uint64_t t10 = 1016LLU;

	t10 = ((x69%(x70%x71))*x72);

	if (t10 != 18446744073624594055LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x73 = 51U;
	volatile int8_t x74 = -1;
	uint16_t x76 = 13U;
	volatile int64_t t11 = 42456675LL;

	t11 = ((x73%(x74%x75))*x76);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x97 = -4;
	int8_t x98 = INT8_MIN;
	int16_t x99 = INT16_MAX;
	volatile int64_t x100 = -1LL;
	static volatile int64_t t12 = 2746961062987LL;

	t12 = ((x97%(x98%x99))*x100);

	if (t12 != 4LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x101 = 130;
	int64_t x102 = -1LL;
	int64_t t13 = 79150571632LL;

	t13 = ((x101%(x102%x103))*x104);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x106 = UINT64_MAX;
	uint64_t t14 = 92051LLU;

	t14 = ((x105%(x106%x107))*x108);

	if (t14 != 1232LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x110 = 5U;
	int64_t x111 = INT64_MIN;
	int16_t x112 = -1;

	t15 = ((x109%(x110%x111))*x112);

	if (t15 != -4LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x118 = UINT32_MAX;
	uint64_t x119 = UINT64_MAX;
	int16_t x120 = INT16_MIN;
	volatile uint64_t t16 = 287960147LLU;

	t16 = ((x117%(x118%x119))*x120);

	if (t16 != 18446673704965373952LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x121 = 63;
	uint64_t x123 = 5169LLU;
	int32_t x124 = INT32_MIN;
	static volatile uint64_t t17 = 227041967732013LLU;

	t17 = ((x121%(x122%x123))*x124);

	if (t17 != 18446743938418081792LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x126 = UINT8_MAX;
	static int32_t x127 = -34923;
	volatile uint64_t x128 = 47703718LLU;
	uint64_t t18 = 582274LLU;

	t18 = ((x125%(x126%x127))*x128);

	if (t18 != 6058372186LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x129 = INT32_MIN;
	int64_t x130 = INT64_MIN;
	static uint32_t x131 = UINT32_MAX;
	uint32_t x132 = UINT32_MAX;

	t19 = ((x129%(x130%x131))*x132);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint16_t x137 = 5U;
	volatile int8_t x138 = 8;
	int8_t x139 = 26;
	uint32_t x140 = 63868U;
	static volatile uint32_t t20 = 58728246U;

	t20 = ((x137%(x138%x139))*x140);

	if (t20 != 319340U) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x142 = 2U;
	uint64_t x143 = 2751282795945113726LLU;
	int32_t x144 = INT32_MAX;
	uint64_t t21 = 3838LLU;

	t21 = ((x141%(x142%x143))*x144);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x145 = INT8_MAX;
	static int32_t x146 = INT32_MIN;
	int8_t x147 = INT8_MAX;
	volatile int8_t x148 = -1;
	volatile int32_t t22 = -59;

	t22 = ((x145%(x146%x147))*x148);

	if (t22 != -7) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x153 = INT8_MIN;
	uint32_t x154 = 7853U;
	uint64_t x155 = UINT64_MAX;
	static int8_t x156 = INT8_MIN;
	volatile uint64_t t23 = 14889759LLU;

	t23 = ((x153%(x154%x155))*x156);

	if (t23 != 18446744073709512192LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x161 = 1;
	int8_t x162 = INT8_MIN;
	volatile int16_t x164 = INT16_MIN;
	int32_t t24 = -75105879;

	t24 = ((x161%(x162%x163))*x164);

	if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x165 = INT16_MIN;
	int64_t x166 = INT64_MIN;
	int16_t x167 = -716;
	static uint32_t x168 = UINT32_MAX;
	int64_t t25 = 1415LL;

	t25 = ((x165%(x166%x167))*x168);

	if (t25 != -34359738360LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x175 = INT16_MIN;
	uint32_t x176 = 1156308414U;
	volatile uint64_t t26 = 3LLU;

	t26 = ((x173%(x174%x175))*x176);

	if (t26 != 10163132292702888LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x177 = -1;
	int8_t x178 = -1;
	int32_t x179 = INT32_MIN;
	volatile uint32_t x180 = 1471241U;
	uint32_t t27 = 3330613U;

	t27 = ((x177%(x178%x179))*x180);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x181 = -1;
	int16_t x182 = 5;
	int8_t x184 = INT8_MIN;
	int32_t t28 = 211628627;

	t28 = ((x181%(x182%x183))*x184);

	if (t28 != 128) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x187 = INT64_MAX;
	static int64_t x188 = 1LL;
	volatile int64_t t29 = 43315LL;

	t29 = ((x185%(x186%x187))*x188);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x189 = INT64_MIN;
	int16_t x190 = 12;
	int16_t x191 = INT16_MAX;
	volatile int16_t x192 = 2;

	t30 = ((x189%(x190%x191))*x192);

	if (t30 != -16LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x194 = INT8_MIN;
	uint16_t x195 = UINT16_MAX;
	uint32_t x196 = 298U;
	uint32_t t31 = 11470U;

	t31 = ((x193%(x194%x195))*x196);

	if (t31 != 4294955078U) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x197 = 23U;
	int8_t x198 = INT8_MAX;
	uint8_t x199 = 6U;
	uint8_t x200 = 1U;
	int32_t t32 = 16;

	t32 = ((x197%(x198%x199))*x200);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x202 = UINT8_MAX;
	volatile uint16_t x203 = 9478U;
	volatile uint64_t x204 = 8LLU;
	volatile uint64_t t33 = 34535393LLU;

	t33 = ((x201%(x202%x203))*x204);

	if (t33 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x207 = INT32_MAX;
	volatile int16_t x208 = 7;
	volatile int64_t t34 = 1725LL;

	t34 = ((x205%(x206%x207))*x208);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x219 = INT32_MIN;
	uint32_t x220 = UINT32_MAX;
	uint32_t t35 = 551U;

	t35 = ((x217%(x218%x219))*x220);

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x221 = INT64_MIN;
	volatile int16_t x223 = INT16_MIN;
	uint16_t x224 = UINT16_MAX;
	int64_t t36 = -13797679986541488LL;

	t36 = ((x221%(x222%x223))*x224);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x225 = UINT16_MAX;
	int32_t x226 = -1;
	int8_t x227 = INT8_MIN;
	int32_t x228 = INT32_MIN;

	t37 = ((x225%(x226%x227))*x228);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x231 = INT8_MIN;
	uint32_t x232 = 393U;
	uint32_t t38 = 208U;

	t38 = ((x229%(x230%x231))*x232);

	if (t38 != 1179U) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x245 = INT8_MAX;
	uint64_t x247 = 3557071LLU;
	volatile int8_t x248 = INT8_MIN;
	uint64_t t39 = 177848LLU;

	t39 = ((x245%(x246%x247))*x248);

	if (t39 != 18446744073709535360LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x249 = UINT32_MAX;
	uint16_t x250 = 1U;
	int64_t x252 = INT64_MIN;
	volatile int64_t t40 = 27449LL;

	t40 = ((x249%(x250%x251))*x252);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x254 = INT16_MIN;
	uint64_t x255 = 22034144508755LLU;
	int16_t x256 = -1;
	uint64_t t41 = 6407LLU;

	t41 = ((x253%(x254%x255))*x256);

	if (t41 != 18446743700933386024LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x257 = UINT32_MAX;
	int8_t x258 = INT8_MIN;
	volatile uint8_t x260 = UINT8_MAX;
	volatile uint32_t t42 = 3U;

	t42 = ((x257%(x258%x259))*x260);

	if (t42 != 32385U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x261 = -1;
	volatile uint8_t x263 = UINT8_MAX;
	volatile uint16_t x264 = 29300U;

	t43 = ((x261%(x262%x263))*x264);

	if (t43 != -29300) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x265 = 944LL;
	int32_t x266 = -2667696;
	int16_t x267 = 7;
	static int32_t x268 = -134508;
	volatile int64_t t44 = 7373935149LL;

	t44 = ((x265%(x266%x267))*x268);

	if (t44 != -269016LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x277 = 31;
	static int8_t x278 = INT8_MIN;
	static uint16_t x279 = UINT16_MAX;
	uint64_t x280 = 423LLU;
	uint64_t t45 = 1LLU;

	t45 = ((x277%(x278%x279))*x280);

	if (t45 != 13113LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x281 = -40;
	int16_t x282 = INT16_MIN;
	int32_t x284 = 1269275;
	int32_t t46 = -206137;

	t46 = ((x281%(x282%x283))*x284);

	if (t46 != -50771000) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x289 = 428933298LLU;
	int32_t x290 = 655099409;
	int64_t x291 = INT64_MIN;
	int64_t x292 = INT64_MIN;
	volatile uint64_t t47 = 2003268373195405125LLU;

	t47 = ((x289%(x290%x291))*x292);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x293 = -2917;
	volatile uint8_t x294 = UINT8_MAX;
	static uint8_t x296 = 119U;
	volatile uint64_t t48 = 67917479280LLU;

	t48 = ((x293%(x294%x295))*x296);

	if (t48 != 17136LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x297 = INT64_MIN;
	int32_t x298 = 1;
	int64_t x299 = INT64_MIN;
	volatile int64_t t49 = -1695962558638401LL;

	t49 = ((x297%(x298%x299))*x300);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x302 = INT64_MIN;
	int64_t x303 = -3241LL;
	static volatile int8_t x304 = -1;
	int64_t t50 = 15660453400LL;

	t50 = ((x301%(x302%x303))*x304);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x305 = -876;
	int64_t x306 = -80796LL;
	volatile uint8_t x307 = UINT8_MAX;
	int32_t x308 = 7458;
	int64_t t51 = 167641712LL;

	t51 = ((x305%(x306%x307))*x308);

	if (t51 != -89496LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x310 = INT64_MIN;
	int64_t x311 = -474854962653LL;
	int8_t x312 = INT8_MIN;

	t52 = ((x309%(x310%x311))*x312);

	if (t52 != -15168577536LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x314 = 2139;
	int64_t x315 = INT64_MIN;
	volatile int16_t x316 = 1473;
	int64_t t53 = -3994317379212856882LL;

	t53 = ((x313%(x314%x315))*x316);

	if (t53 != 743865LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x318 = 120U;
	uint16_t x319 = UINT16_MAX;
	uint8_t x320 = UINT8_MAX;
	volatile int32_t t54 = -249327889;

	t54 = ((x317%(x318%x319))*x320);

	if (t54 != -2040) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x330 = INT8_MIN;
	uint8_t x331 = 57U;
	int32_t t55 = -12494;

	t55 = ((x329%(x330%x331))*x332);

	if (t55 != 65536) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x333 = -1;
	static uint32_t x334 = UINT32_MAX;
	int8_t x335 = INT8_MIN;
	static volatile int8_t x336 = -1;
	volatile uint32_t t56 = 15U;

	t56 = ((x333%(x334%x335))*x336);

	if (t56 != 4294967281U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x345 = INT64_MIN;
	volatile uint16_t x346 = 1987U;
	static int8_t x347 = INT8_MAX;
	int32_t x348 = 37524;

	t57 = ((x345%(x346%x347))*x348);

	if (t57 != -300192LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x349 = -207;
	volatile uint16_t x352 = 0U;
	uint32_t t58 = 11U;

	t58 = ((x349%(x350%x351))*x352);

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x355 = 13806U;
	static uint32_t t59 = 135U;

	t59 = ((x353%(x354%x355))*x356);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x357 = 143822852LL;
	uint64_t x358 = 552LLU;
	static int64_t x359 = INT64_MIN;
	volatile uint64_t t60 = 2LLU;

	t60 = ((x357%(x358%x359))*x360);

	if (t60 != 2492LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x373 = 12U;
	int16_t x374 = INT16_MIN;
	int64_t x375 = INT64_MIN;
	static uint32_t x376 = 22503U;

	t61 = ((x373%(x374%x375))*x376);

	if (t61 != 270036LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x377 = INT16_MIN;
	uint64_t x378 = 26315768462LLU;
	static uint16_t x379 = 24589U;
	int32_t x380 = 59;
	volatile uint64_t t62 = 1588115550543LLU;

	t62 = ((x377%(x378%x379))*x380);

	if (t62 != 81184LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x382 = 25;
	static int32_t x383 = INT32_MIN;
	static uint64_t x384 = UINT64_MAX;
	volatile uint64_t t63 = UINT64_MAX;

	t63 = ((x381%(x382%x383))*x384);

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x385 = -1;
	uint32_t x386 = 1264725U;
	int32_t x387 = -36;
	int16_t x388 = 1;

	t64 = ((x385%(x386%x387))*x388);

	if (t64 != 1225920U) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x389 = UINT16_MAX;
	int8_t x390 = INT8_MIN;
	volatile int32_t x391 = 10025;
	int16_t x392 = INT16_MIN;
	int32_t t65 = -800825384;

	t65 = ((x389%(x390%x391))*x392);

	if (t65 != -4161536) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x394 = INT16_MIN;
	static volatile int64_t x395 = INT64_MIN;
	volatile int8_t x396 = -1;

	t66 = ((x393%(x394%x395))*x396);

	if (t66 != 3LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x400 = 36U;
	volatile int32_t t67 = 26;

	t67 = ((x397%(x398%x399))*x400);

	if (t67 != -1476) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x401 = 11;
	uint16_t x402 = 1154U;
	uint16_t x403 = UINT16_MAX;
	uint64_t x404 = 242891310682585130LLU;
	volatile uint64_t t68 = 20285LLU;

	t68 = ((x401%(x402%x403))*x404);

	if (t68 != 2671804417508436430LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x406 = 65;
	static uint64_t x408 = 1944910LLU;

	t69 = ((x405%(x406%x407))*x408);

	if (t69 != 1944910LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x409 = INT32_MIN;
	static volatile int32_t x410 = -123657269;
	int64_t x411 = 8340010874125616LL;
	int64_t x412 = -26LL;
	int64_t t70 = 833LL;

	t70 = ((x409%(x410%x411))*x412);

	if (t70 != 1178061950LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x413 = INT8_MIN;
	static int64_t x414 = -1LL;
	uint64_t x415 = 123737120LLU;
	volatile int8_t x416 = INT8_MIN;

	t71 = ((x413%(x414%x415))*x416);

	if (t71 != 18446744069953200512LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x417 = 6094U;
	volatile int32_t x418 = INT32_MAX;
	uint16_t x419 = UINT16_MAX;
	int64_t x420 = -1LL;

	t72 = ((x417%(x418%x419))*x420);

	if (t72 != -6094LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x423 = -448160;
	int16_t x424 = 51;
	int64_t t73 = -113847253908120808LL;

	t73 = ((x421%(x422%x423))*x424);

	if (t73 != -7494144LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x425 = -1;
	static int16_t x426 = INT16_MIN;
	int16_t x427 = INT16_MAX;
	int64_t x428 = INT64_MIN;
	volatile int64_t t74 = 524306372799LL;

	t74 = ((x425%(x426%x427))*x428);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x433 = 0;
	int32_t x434 = INT32_MIN;
	int32_t x435 = 111018;
	int8_t x436 = INT8_MIN;

	t75 = ((x433%(x434%x435))*x436);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int16_t x441 = -1;
	int8_t x443 = 44;
	int16_t x444 = INT16_MIN;
	static int64_t t76 = -10677102855LL;

	t76 = ((x441%(x442%x443))*x444);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x445 = 45896717362942LL;
	static int64_t x446 = INT64_MIN;
	static volatile uint16_t x447 = 23568U;
	uint32_t x448 = UINT32_MAX;
	int64_t t77 = -1111285681LL;

	t77 = ((x445%(x446%x447))*x448);

	if (t77 != 8512625178690LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x449 = 209062U;
	static volatile int64_t x450 = -1LL;
	static uint16_t x451 = UINT16_MAX;
	int32_t x452 = INT32_MIN;

	t78 = ((x449%(x450%x451))*x452);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x457 = INT8_MAX;
	uint64_t x458 = 13926374LLU;
	int8_t x459 = -1;
	volatile uint64_t t79 = 143311625LLU;

	t79 = ((x457%(x458%x459))*x460);

	if (t79 != 18446744073709546028LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x461 = 17364150LLU;
	int16_t x462 = 124;
	int64_t x463 = INT64_MIN;
	static int16_t x464 = -1;
	volatile uint64_t t80 = 449767521410LLU;

	t80 = ((x461%(x462%x463))*x464);

	if (t80 != 18446744073709551558LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x465 = 25036U;
	static int16_t x466 = INT16_MIN;
	int64_t x467 = 17286LL;
	uint16_t x468 = UINT16_MAX;
	static volatile int64_t t81 = -35813LL;

	t81 = ((x465%(x466%x467))*x468);

	if (t81 != 626121390LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x481 = 25229632953822772LLU;
	uint8_t x482 = UINT8_MAX;
	static int32_t x483 = 9;
	int32_t x484 = INT32_MIN;
	volatile uint64_t t82 = 111693188LLU;

	t82 = ((x481%(x482%x483))*x484);

	if (t82 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x485 = 979030067LLU;
	volatile int32_t x486 = -106297314;
	uint64_t x487 = 33471237215926LLU;
	volatile uint64_t t83 = 1LLU;

	t83 = ((x485%(x486%x487))*x488);

	if (t83 != 13290059766081561124LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x489 = INT64_MIN;
	volatile uint32_t x490 = 154347069U;
	int8_t x492 = INT8_MIN;
	volatile int64_t t84 = 202955586960579LL;

	t84 = ((x489%(x490%x491))*x492);

	if (t84 != 845056LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x497 = -3LL;
	uint32_t x498 = UINT32_MAX;
	int32_t x499 = INT32_MIN;
	int8_t x500 = -1;
	volatile int64_t t85 = 51LL;

	t85 = ((x497%(x498%x499))*x500);

	if (t85 != 3LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x501 = 31U;
	uint64_t x502 = 412LLU;
	static uint64_t x503 = UINT64_MAX;
	int32_t x504 = -1;
	uint64_t t86 = 7408677LLU;

	t86 = ((x501%(x502%x503))*x504);

	if (t86 != 18446744073709551585LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x511 = 1661180U;
	volatile int32_t x512 = INT32_MAX;

	t87 = ((x509%(x510%x511))*x512);

	if (t87 != 4294967294U) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x513 = INT64_MIN;
	uint8_t x516 = 1U;
	static int64_t t88 = -258051LL;

	t88 = ((x513%(x514%x515))*x516);

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x517 = 145;
	uint8_t x519 = 9U;
	static int32_t x520 = -1;

	t89 = ((x517%(x518%x519))*x520);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x521 = INT64_MAX;
	int32_t x522 = -1;
	int32_t x523 = 5;
	int8_t x524 = INT8_MIN;

	t90 = ((x521%(x522%x523))*x524);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x529 = 18U;
	volatile uint32_t t91 = 0U;

	t91 = ((x529%(x530%x531))*x532);

	if (t91 != 254U) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x538 = 101763501U;
	uint64_t x539 = UINT64_MAX;
	static int8_t x540 = -1;

	t92 = ((x537%(x538%x539))*x540);

	if (t92 != 18446744073709551602LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x541 = 27U;
	int8_t x542 = INT8_MAX;
	uint64_t x543 = 4345252219654361423LLU;
	volatile uint64_t t93 = 13766LLU;

	t93 = ((x541%(x542%x543))*x544);

	if (t93 != 18446744073709551589LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x546 = 2333461U;
	static int8_t x548 = 1;

	t94 = ((x545%(x546%x547))*x548);

	if (t94 != 699527U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x549 = 37406;
	volatile int8_t x550 = INT8_MIN;
	static uint8_t x552 = 45U;
	volatile int32_t t95 = -199214194;

	t95 = ((x549%(x550%x551))*x552);

	if (t95 != 270) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x553 = UINT64_MAX;
	static uint8_t x554 = UINT8_MAX;
	static volatile int32_t x555 = INT32_MIN;
	uint64_t t96 = 238073442551713362LLU;

	t96 = ((x553%(x554%x555))*x556);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x557 = UINT16_MAX;
	volatile int64_t x558 = INT64_MIN;
	uint64_t x559 = UINT64_MAX;
	int32_t x560 = -99533;
	uint64_t t97 = 289418615871027244LLU;

	t97 = ((x557%(x558%x559))*x560);

	if (t97 != 18446744067186656461LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x561 = -59761813;
	static uint8_t x562 = 84U;
	int16_t x563 = INT16_MIN;
	int32_t t98 = -180;

	t98 = ((x561%(x562%x563))*x564);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x570 = -1LL;
	uint32_t x571 = 1798831151U;
	int8_t x572 = -30;
	static int64_t t99 = -244426102LL;

	t99 = ((x569%(x570%x571))*x572);

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

