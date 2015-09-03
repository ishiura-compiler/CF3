#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x2 = 0U;
int64_t t1 = 4904317918163516LL;
volatile int64_t x14 = 2LL;
int8_t x25 = INT8_MIN;
static int32_t x56 = -1;
uint8_t x57 = 50U;
volatile uint8_t x64 = 1U;
uint64_t x70 = 8059264130LLU;
static int16_t x81 = INT16_MIN;
int16_t x83 = -1;
static uint8_t x87 = 22U;
int32_t x88 = -1;
static volatile uint32_t t13 = 210945U;
int64_t x102 = -1LL;
volatile uint64_t t17 = 1537LLU;
int8_t x116 = 55;
static int32_t x122 = 7461287;
static int16_t x123 = INT16_MIN;
volatile int16_t x124 = -6270;
static volatile uint32_t t19 = 7238U;
int8_t x131 = 1;
volatile int16_t x133 = -6;
uint16_t x140 = UINT16_MAX;
volatile uint8_t x141 = 1U;
static int16_t x146 = INT16_MAX;
uint16_t x150 = 24U;
int64_t x156 = INT64_MIN;
volatile int64_t t27 = 101471768939578760LL;
uint32_t x164 = 53059674U;
uint64_t x170 = UINT64_MAX;
int64_t x172 = -1LL;
uint64_t t29 = 1840LLU;
int32_t x178 = INT32_MIN;
volatile int64_t x181 = 12087LL;
volatile uint8_t x183 = 8U;
static volatile uint64_t t31 = 3152LLU;
int32_t x201 = -1;
uint16_t x204 = 17U;
static int64_t x205 = -1LL;
volatile uint16_t x214 = 1828U;
static uint8_t x215 = 0U;
uint32_t x225 = UINT32_MAX;
int64_t x226 = -1LL;
uint16_t x227 = 30576U;
volatile uint64_t t40 = 141326LLU;
static volatile uint64_t t41 = 2409423586152LLU;
int64_t x248 = INT64_MIN;
uint64_t x254 = 579847424156995587LLU;
static volatile int64_t x278 = INT64_MAX;
int16_t x285 = 4082;
int8_t x288 = INT8_MIN;
uint64_t t49 = 2972345156718816388LLU;
static volatile int64_t t50 = -32045995LL;
uint16_t x302 = 0U;
int32_t t51 = 479474;
uint16_t x310 = UINT16_MAX;
volatile int16_t x317 = -1;
int8_t x320 = -1;
int32_t x321 = -1;
uint32_t x331 = 25555U;
volatile uint32_t t55 = 16619U;
int8_t x350 = INT8_MIN;
int16_t x351 = 1;
int64_t x353 = INT64_MIN;
volatile int16_t x354 = INT16_MIN;
int64_t x359 = INT64_MIN;
uint16_t x360 = 205U;
int64_t x364 = -51859356919466287LL;
int32_t x369 = -3;
int16_t x377 = 30;
uint32_t x379 = 1600966644U;
volatile int32_t x385 = 7;
volatile int64_t t69 = 0LL;
volatile int64_t x390 = -1785967LL;
volatile uint64_t t70 = 29959901519755LLU;
uint64_t t72 = 123593081330762LLU;
volatile int32_t t73 = -1432774;
int16_t x426 = -1;
uint64_t t77 = 108823LLU;
volatile uint32_t t78 = 57023U;
static volatile int32_t t80 = -165;
int64_t t81 = -112562471748LL;
int16_t x446 = INT16_MAX;
int8_t x457 = -3;
int16_t x458 = -159;
uint32_t x470 = UINT32_MAX;
uint8_t x472 = UINT8_MAX;
volatile uint64_t t90 = 1937995504315LLU;
static uint16_t x485 = 27U;
int8_t x490 = -1;
int64_t x492 = INT64_MAX;
volatile uint32_t t93 = 7699U;
int8_t x497 = 2;
int16_t x502 = INT16_MAX;
int16_t x503 = -104;
uint64_t x507 = 305333LLU;
volatile uint64_t t96 = 858808128413LLU;
int32_t x509 = INT32_MIN;
int16_t x513 = INT16_MIN;
static int16_t x514 = INT16_MIN;
int16_t x517 = -1;


void f0(void) {
	static uint8_t x1 = 9U;
	volatile uint16_t x3 = 0U;
	int64_t x4 = -580762041921LL;
	volatile int64_t t0 = -5163LL;

	t0 = (((x1|x2)*x3)%x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = 0;
	int16_t x6 = INT16_MAX;
	static int16_t x7 = 1;
	int64_t x8 = -36465118327LL;

	t1 = (((x5|x6)*x7)%x8);

	if (t1 != 32767LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x9 = 0U;
	int64_t x10 = INT64_MIN;
	uint64_t x11 = 18400139740LLU;
	static volatile uint64_t x12 = 34154633263687957LLU;
	volatile uint64_t t2 = 12542890493356LLU;

	t2 = (((x9|x10)*x11)%x12);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x13 = UINT32_MAX;
	volatile int16_t x15 = INT16_MIN;
	volatile int8_t x16 = INT8_MIN;
	volatile int64_t t3 = -6259842338507721LL;

	t3 = (((x13|x14)*x15)%x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x26 = 781344329283434586LL;
	int16_t x27 = 3890;
	uint64_t x28 = 232151942529089LLU;
	uint64_t t4 = 251546094501LLU;

	t4 = (((x25|x26)*x27)%x28);

	if (t4 != 182872290520945LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x33 = INT64_MIN;
	uint8_t x34 = 50U;
	uint64_t x35 = 31979083329149418LLU;
	int16_t x36 = -1;
	uint64_t t5 = 292248549557LLU;

	t5 = (((x33|x34)*x35)%x36);

	if (t5 != 1598954166457470900LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x41 = INT8_MIN;
	volatile int16_t x42 = -1;
	volatile int16_t x43 = 1773;
	static int8_t x44 = INT8_MAX;
	static volatile int32_t t6 = -16182;

	t6 = (((x41|x42)*x43)%x44);

	if (t6 != -122) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x45 = INT64_MIN;
	volatile int64_t x46 = INT64_MAX;
	static int8_t x47 = 11;
	int32_t x48 = INT32_MAX;
	int64_t t7 = -1694LL;

	t7 = (((x45|x46)*x47)%x48);

	if (t7 != -11LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x53 = 11698248375LLU;
	int16_t x54 = -9;
	volatile int8_t x55 = -1;
	static volatile uint64_t t8 = 1LLU;

	t8 = (((x53|x54)*x55)%x56);

	if (t8 != 9LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x58 = -1;
	volatile int16_t x59 = -1;
	uint64_t x60 = 2036408LLU;
	static volatile uint64_t t9 = 0LLU;

	t9 = (((x57|x58)*x59)%x60);

	if (t9 != 1LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x61 = 0U;
	int16_t x62 = -1;
	int64_t x63 = -101279845976586411LL;
	int64_t t10 = 2008632LL;

	t10 = (((x61|x62)*x63)%x64);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x69 = -1LL;
	static int64_t x71 = -2LL;
	uint64_t x72 = UINT64_MAX;
	static volatile uint64_t t11 = 38018277821116725LLU;

	t11 = (((x69|x70)*x71)%x72);

	if (t11 != 2LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x82 = 3;
	int32_t x84 = INT32_MAX;
	int32_t t12 = -7421127;

	t12 = (((x81|x82)*x83)%x84);

	if (t12 != 32765) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x85 = INT8_MAX;
	static uint32_t x86 = 43U;

	t13 = (((x85|x86)*x87)%x88);

	if (t13 != 2794U) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x89 = 1357636065U;
	int64_t x90 = INT64_MIN;
	volatile int16_t x91 = -1;
	int16_t x92 = INT16_MAX;
	static volatile int64_t t14 = 108327664LL;

	t14 = (((x89|x90)*x91)%x92);

	if (t14 != 31821LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x93 = -1;
	int32_t x94 = -1;
	int64_t x95 = 4529673524754282080LL;
	static uint8_t x96 = UINT8_MAX;
	volatile int64_t t15 = -745182LL;

	t15 = (((x93|x94)*x95)%x96);

	if (t15 != -110LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x97 = 1512703441892LL;
	int64_t x98 = INT64_MIN;
	int8_t x99 = -1;
	uint32_t x100 = 402001U;
	static int64_t t16 = 1078279754993519220LL;

	t16 = (((x97|x98)*x99)%x100);

	if (t16 != 312154LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x101 = 14LLU;
	int16_t x103 = 5765;
	uint16_t x104 = 1U;

	t17 = (((x101|x102)*x103)%x104);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x113 = UINT16_MAX;
	uint32_t x114 = 31501U;
	volatile int32_t x115 = INT32_MAX;
	static uint32_t t18 = 1403844U;

	t18 = (((x113|x114)*x115)%x116);

	if (t18 != 38U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x121 = UINT32_MAX;

	t19 = (((x121|x122)*x123)%x124);

	if (t19 != 32768U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x125 = -1;
	uint64_t x126 = 355LLU;
	int32_t x127 = -1;
	int8_t x128 = INT8_MAX;
	volatile uint64_t t20 = 2325760251543658828LLU;

	t20 = (((x125|x126)*x127)%x128);

	if (t20 != 1LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x129 = 532032815U;
	int8_t x130 = INT8_MAX;
	uint8_t x132 = 8U;
	uint32_t t21 = 5U;

	t21 = (((x129|x130)*x131)%x132);

	if (t21 != 7U) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x134 = 2460531521LLU;
	volatile int64_t x135 = INT64_MIN;
	volatile uint16_t x136 = UINT16_MAX;
	uint64_t t22 = 1LLU;

	t22 = (((x133|x134)*x135)%x136);

	if (t22 != 32768LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x137 = 2394000U;
	static volatile uint8_t x138 = 29U;
	int16_t x139 = INT16_MIN;
	uint32_t t23 = 63760U;

	t23 = (((x137|x138)*x139)%x140);

	if (t23 != 15410U) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x142 = -96;
	int8_t x143 = INT8_MAX;
	static volatile uint8_t x144 = 19U;
	static volatile int32_t t24 = -3;

	t24 = (((x141|x142)*x143)%x144);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x145 = 0U;
	int8_t x147 = INT8_MAX;
	static int64_t x148 = -1LL;
	int64_t t25 = 16LL;

	t25 = (((x145|x146)*x147)%x148);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x149 = -5LL;
	int8_t x151 = -23;
	int64_t x152 = -1LL;
	int64_t t26 = 2938LL;

	t26 = (((x149|x150)*x151)%x152);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x153 = UINT8_MAX;
	int8_t x154 = -14;
	uint32_t x155 = 1968306529U;

	t27 = (((x153|x154)*x155)%x156);

	if (t27 != 2326660767LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x161 = UINT8_MAX;
	int8_t x162 = -1;
	volatile int16_t x163 = 12;
	static uint32_t t28 = 3843402U;

	t28 = (((x161|x162)*x163)%x164);

	if (t28 != 50193364U) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x169 = UINT8_MAX;
	volatile int64_t x171 = INT64_MAX;

	t29 = (((x169|x170)*x171)%x172);

	if (t29 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x177 = UINT32_MAX;
	uint8_t x179 = UINT8_MAX;
	int16_t x180 = INT16_MAX;
	volatile uint32_t t30 = 634676874U;

	t30 = (((x177|x178)*x179)%x180);

	if (t30 != 32516U) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x182 = UINT8_MAX;
	volatile uint64_t x184 = 2031118868518198621LLU;

	t31 = (((x181|x182)*x183)%x184);

	if (t31 != 98296LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x193 = INT64_MIN;
	static int32_t x194 = INT32_MAX;
	int16_t x195 = -1;
	volatile int8_t x196 = INT8_MIN;
	int64_t t32 = -260778856340334210LL;

	t32 = (((x193|x194)*x195)%x196);

	if (t32 != 1LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x197 = INT64_MIN;
	static int16_t x198 = -1;
	uint8_t x199 = 1U;
	int8_t x200 = -5;
	int64_t t33 = -8837411709057LL;

	t33 = (((x197|x198)*x199)%x200);

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x202 = 10U;
	static int32_t x203 = INT32_MAX;
	int32_t t34 = 202;

	t34 = (((x201|x202)*x203)%x204);

	if (t34 != -8) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x206 = INT8_MAX;
	uint16_t x207 = 3U;
	int32_t x208 = -1;
	int64_t t35 = -62140LL;

	t35 = (((x205|x206)*x207)%x208);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x209 = UINT32_MAX;
	uint64_t x210 = 43079LLU;
	volatile int16_t x211 = 12918;
	int16_t x212 = -1;
	static uint64_t t36 = 5320LLU;

	t36 = (((x209|x210)*x211)%x212);

	if (t36 != 55482387516810LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x213 = 336U;
	static int32_t x216 = INT32_MAX;
	uint32_t t37 = 1U;

	t37 = (((x213|x214)*x215)%x216);

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x217 = INT8_MAX;
	int8_t x218 = -1;
	uint64_t x219 = 14666006945LLU;
	volatile uint32_t x220 = 1U;
	uint64_t t38 = 422441497526671LLU;

	t38 = (((x217|x218)*x219)%x220);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x228 = INT32_MIN;
	static int64_t t39 = -2007206LL;

	t39 = (((x225|x226)*x227)%x228);

	if (t39 != -30576LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x229 = 61U;
	static int16_t x230 = -4314;
	int8_t x231 = INT8_MIN;
	uint64_t x232 = 270524049774129LLU;

	t40 = (((x229|x230)*x231)%x232);

	if (t40 != 548992LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x241 = -346;
	uint64_t x242 = 1168561049LLU;
	int8_t x243 = INT8_MAX;
	int8_t x244 = -1;

	t41 = (((x241|x242)*x243)%x244);

	if (t41 != 18446744073709543361LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x245 = UINT32_MAX;
	static uint8_t x246 = 117U;
	uint16_t x247 = 0U;
	int64_t t42 = 128288964133340LL;

	t42 = (((x245|x246)*x247)%x248);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x253 = 785223164LL;
	uint32_t x255 = UINT32_MAX;
	int16_t x256 = INT16_MIN;
	uint64_t t43 = 44LLU;

	t43 = (((x253|x254)*x255)%x256);

	if (t43 != 17780657550211047937LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x261 = -1;
	int64_t x262 = -1LL;
	int64_t x263 = 188818507137LL;
	int32_t x264 = -42923;
	int64_t t44 = -3103415692126LL;

	t44 = (((x261|x262)*x263)%x264);

	if (t44 != -15522LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x273 = INT64_MAX;
	int8_t x274 = INT8_MIN;
	uint8_t x275 = UINT8_MAX;
	uint64_t x276 = UINT64_MAX;
	volatile uint64_t t45 = 2335161595104LLU;

	t45 = (((x273|x274)*x275)%x276);

	if (t45 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x277 = INT16_MIN;
	static int32_t x279 = INT32_MAX;
	uint64_t x280 = UINT64_MAX;
	uint64_t t46 = 1935855087LLU;

	t46 = (((x277|x278)*x279)%x280);

	if (t46 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x286 = INT64_MAX;
	static int64_t x287 = 1LL;
	int64_t t47 = -16679039534490883LL;

	t47 = (((x285|x286)*x287)%x288);

	if (t47 != 127LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x289 = -1;
	int32_t x290 = -1;
	int8_t x291 = -11;
	int16_t x292 = -1;
	static int32_t t48 = 38941;

	t48 = (((x289|x290)*x291)%x292);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x293 = -9605091;
	int64_t x294 = -1LL;
	volatile uint64_t x295 = UINT64_MAX;
	static int64_t x296 = -1LL;

	t49 = (((x293|x294)*x295)%x296);

	if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x297 = -1LL;
	int32_t x298 = INT32_MAX;
	static int32_t x299 = INT32_MIN;
	volatile uint16_t x300 = 38U;

	t50 = (((x297|x298)*x299)%x300);

	if (t50 != 22LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x301 = UINT16_MAX;
	int32_t x303 = -1;
	int16_t x304 = INT16_MAX;

	t51 = (((x301|x302)*x303)%x304);

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x309 = -11;
	volatile int64_t x311 = INT64_MAX;
	uint16_t x312 = UINT16_MAX;
	volatile int64_t t52 = -181296957471864158LL;

	t52 = (((x309|x310)*x311)%x312);

	if (t52 != -32767LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x318 = UINT32_MAX;
	volatile int16_t x319 = -226;
	uint32_t t53 = 30U;

	t53 = (((x317|x318)*x319)%x320);

	if (t53 != 226U) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x322 = 30U;
	uint16_t x323 = 1U;
	int32_t x324 = INT32_MIN;
	int32_t t54 = 2;

	t54 = (((x321|x322)*x323)%x324);

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x329 = UINT16_MAX;
	int32_t x330 = -1;
	int8_t x332 = INT8_MAX;

	t55 = (((x329|x330)*x331)%x332);

	if (t55 != 115U) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x333 = INT32_MIN;
	int16_t x334 = 46;
	int32_t x335 = -1;
	uint8_t x336 = UINT8_MAX;
	int32_t t56 = 1508;

	t56 = (((x333|x334)*x335)%x336);

	if (t56 != 82) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x337 = INT8_MIN;
	int8_t x338 = INT8_MAX;
	uint64_t x339 = 8544790296353332LLU;
	int32_t x340 = INT32_MAX;
	static uint64_t t57 = 36080841763741772LLU;

	t57 = (((x337|x338)*x339)%x340);

	if (t57 != 2037903085LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x341 = UINT64_MAX;
	static int8_t x342 = 0;
	int16_t x343 = INT16_MIN;
	int8_t x344 = INT8_MIN;
	static uint64_t t58 = 1238304718580LLU;

	t58 = (((x341|x342)*x343)%x344);

	if (t58 != 32768LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int64_t x345 = -28LL;
	volatile int16_t x346 = INT16_MIN;
	int16_t x347 = 0;
	int8_t x348 = INT8_MAX;
	volatile int64_t t59 = -65071004848751606LL;

	t59 = (((x345|x346)*x347)%x348);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x349 = 3400U;
	volatile uint64_t x352 = 228777357124LLU;
	volatile uint64_t t60 = 45193LLU;

	t60 = (((x349|x350)*x351)%x352);

	if (t60 != 4294967240LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x355 = -26975632955329LL;
	int8_t x356 = 1;
	int64_t t61 = 10110875LL;

	t61 = (((x353|x354)*x355)%x356);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x357 = 1152426871927404539LLU;
	uint16_t x358 = UINT16_MAX;
	volatile uint64_t t62 = 69382289621303465LLU;

	t62 = (((x357|x358)*x359)%x360);

	if (t62 != 8LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x361 = -1;
	int16_t x362 = INT16_MIN;
	static uint8_t x363 = 9U;
	int64_t t63 = -61651247182LL;

	t63 = (((x361|x362)*x363)%x364);

	if (t63 != -9LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x365 = -29;
	int16_t x366 = INT16_MIN;
	uint8_t x367 = UINT8_MAX;
	volatile int32_t x368 = 935755;
	static int32_t t64 = 194;

	t64 = (((x365|x366)*x367)%x368);

	if (t64 != -7395) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x370 = -1;
	int64_t x371 = -1LL;
	int8_t x372 = 12;
	volatile int64_t t65 = 1LL;

	t65 = (((x369|x370)*x371)%x372);

	if (t65 != 1LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x373 = 2174U;
	int8_t x374 = INT8_MIN;
	int8_t x375 = 12;
	int64_t x376 = -1LL;
	int64_t t66 = 9715LL;

	t66 = (((x373|x374)*x375)%x376);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x378 = 57U;
	static int16_t x380 = -130;
	uint32_t t67 = 26638994U;

	t67 = (((x377|x378)*x379)%x380);

	if (t67 != 2076650764U) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x381 = INT32_MIN;
	int16_t x382 = -1;
	uint32_t x383 = 25205069U;
	static int16_t x384 = 7;
	volatile uint32_t t68 = 168U;

	t68 = (((x381|x382)*x383)%x384);

	if (t68 != 3U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x386 = -1;
	int32_t x387 = -2630216;
	int64_t x388 = -1LL;

	t69 = (((x385|x386)*x387)%x388);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x389 = INT8_MIN;
	static volatile uint64_t x391 = 152LLU;
	static volatile int32_t x392 = INT32_MIN;

	t70 = (((x389|x390)*x391)%x392);

	if (t70 != 2147466776LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x393 = INT16_MIN;
	int16_t x394 = 512;
	int16_t x395 = -1;
	static int16_t x396 = INT16_MIN;
	volatile int32_t t71 = -90;

	t71 = (((x393|x394)*x395)%x396);

	if (t71 != 32256) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x397 = UINT64_MAX;
	int8_t x398 = -1;
	volatile int32_t x399 = -1;
	int32_t x400 = INT32_MAX;

	t72 = (((x397|x398)*x399)%x400);

	if (t72 != 1LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x401 = -12565;
	volatile int16_t x402 = -128;
	volatile uint16_t x403 = 197U;
	int8_t x404 = -1;

	t73 = (((x401|x402)*x403)%x404);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x405 = -1;
	volatile uint16_t x406 = 15946U;
	uint64_t x407 = 25877LLU;
	static int64_t x408 = INT64_MIN;
	uint64_t t74 = 10966LLU;

	t74 = (((x405|x406)*x407)%x408);

	if (t74 != 9223372036854749931LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x409 = INT32_MIN;
	volatile int8_t x410 = INT8_MAX;
	int32_t x411 = 0;
	volatile int32_t x412 = -2722229;
	volatile int32_t t75 = -681909452;

	t75 = (((x409|x410)*x411)%x412);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x413 = 6;
	int16_t x414 = 89;
	uint16_t x415 = UINT16_MAX;
	static uint64_t x416 = UINT64_MAX;
	uint64_t t76 = 3657319239145850LLU;

	t76 = (((x413|x414)*x415)%x416);

	if (t76 != 6225825LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int8_t x425 = INT8_MAX;
	uint64_t x427 = 5575LLU;
	volatile int16_t x428 = INT16_MAX;

	t77 = (((x425|x426)*x427)%x428);

	if (t77 != 27208LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x429 = UINT32_MAX;
	static uint32_t x430 = 40U;
	volatile uint8_t x431 = UINT8_MAX;
	uint32_t x432 = 323011816U;

	t78 = (((x429|x430)*x431)%x432);

	if (t78 != 95813433U) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x433 = UINT8_MAX;
	uint32_t x434 = UINT32_MAX;
	int8_t x435 = 1;
	static uint8_t x436 = 49U;
	volatile uint32_t t79 = 369693U;

	t79 = (((x433|x434)*x435)%x436);

	if (t79 != 38U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x437 = 1;
	volatile uint8_t x438 = 1U;
	int16_t x439 = 0;
	static uint8_t x440 = 85U;

	t80 = (((x437|x438)*x439)%x440);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x441 = -1LL;
	volatile int16_t x442 = 223;
	int16_t x443 = INT16_MIN;
	uint8_t x444 = UINT8_MAX;

	t81 = (((x441|x442)*x443)%x444);

	if (t81 != 128LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x445 = -14495LL;
	int64_t x447 = INT64_MAX;
	uint8_t x448 = 79U;
	static volatile int64_t t82 = 0LL;

	t82 = (((x445|x446)*x447)%x448);

	if (t82 != -64LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x449 = -1;
	int8_t x450 = INT8_MAX;
	uint32_t x451 = UINT32_MAX;
	int8_t x452 = -1;
	uint32_t t83 = 5U;

	t83 = (((x449|x450)*x451)%x452);

	if (t83 != 1U) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x453 = UINT64_MAX;
	uint32_t x454 = 1U;
	static volatile int64_t x455 = INT64_MIN;
	int64_t x456 = INT64_MIN;
	volatile uint64_t t84 = 42681595036872LLU;

	t84 = (((x453|x454)*x455)%x456);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x459 = 2;
	int8_t x460 = INT8_MIN;
	int32_t t85 = 98562961;

	t85 = (((x457|x458)*x459)%x460);

	if (t85 != -6) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x465 = 62;
	static volatile int8_t x466 = INT8_MAX;
	int16_t x467 = INT16_MAX;
	uint32_t x468 = 453U;
	volatile uint32_t t86 = 20552U;

	t86 = (((x465|x466)*x467)%x468);

	if (t86 != 151U) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x469 = 1;
	int8_t x471 = -1;
	volatile uint32_t t87 = 23U;

	t87 = (((x469|x470)*x471)%x472);

	if (t87 != 1U) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x473 = 574U;
	int8_t x474 = INT8_MAX;
	uint64_t x475 = 41557192485LLU;
	int32_t x476 = -1;
	volatile uint64_t t88 = 46LLU;

	t88 = (((x473|x474)*x475)%x476);

	if (t88 != 26555045997915LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x477 = 238U;
	static uint32_t x478 = UINT32_MAX;
	static int32_t x479 = INT32_MIN;
	static uint32_t x480 = UINT32_MAX;
	volatile uint32_t t89 = 109U;

	t89 = (((x477|x478)*x479)%x480);

	if (t89 != 2147483648U) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x481 = INT64_MAX;
	uint64_t x482 = 75LLU;
	int64_t x483 = 96887733579025267LL;
	int16_t x484 = INT16_MAX;

	t90 = (((x481|x482)*x483)%x484);

	if (t90 != 20521LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x486 = -1;
	static uint8_t x487 = UINT8_MAX;
	int16_t x488 = -1;
	int32_t t91 = 54703329;

	t91 = (((x485|x486)*x487)%x488);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x489 = INT16_MAX;
	uint16_t x491 = 1284U;
	volatile int64_t t92 = 98955009LL;

	t92 = (((x489|x490)*x491)%x492);

	if (t92 != -1284LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x493 = 3U;
	int16_t x494 = 11;
	uint32_t x495 = 1993866U;
	int16_t x496 = INT16_MIN;

	t93 = (((x493|x494)*x495)%x496);

	if (t93 != 21932526U) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x498 = 11U;
	static int8_t x499 = INT8_MIN;
	uint8_t x500 = UINT8_MAX;
	static volatile uint32_t t94 = 98746391U;

	t94 = (((x497|x498)*x499)%x500);

	if (t94 != 123U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x501 = -1;
	volatile uint64_t x504 = 8326010LLU;
	volatile uint64_t t95 = 30779527328LLU;

	t95 = (((x501|x502)*x503)%x504);

	if (t95 != 104LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x505 = INT32_MIN;
	int64_t x506 = INT64_MIN;
	volatile int16_t x508 = INT16_MAX;

	t96 = (((x505|x506)*x507)%x508);

	if (t96 != 11923LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x510 = 8593096U;
	int8_t x511 = 10;
	uint64_t x512 = 778992LLU;
	uint64_t t97 = 4LLU;

	t97 = (((x509|x510)*x511)%x512);

	if (t97 != 241840LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x515 = -1;
	uint8_t x516 = UINT8_MAX;
	int32_t t98 = 122;

	t98 = (((x513|x514)*x515)%x516);

	if (t98 != 128) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x518 = 1751U;
	int16_t x519 = INT16_MIN;
	volatile int64_t x520 = INT64_MIN;
	int64_t t99 = -1714441826857LL;

	t99 = (((x517|x518)*x519)%x520);

	if (t99 != 32768LL) { NG(); } else { ; }
	
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

