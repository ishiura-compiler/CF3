#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x5 = INT8_MAX;
uint32_t x7 = 8U;
int16_t x9 = INT16_MIN;
static int16_t x12 = INT16_MAX;
static uint16_t x34 = UINT16_MAX;
static uint16_t x36 = UINT16_MAX;
volatile int64_t t6 = -17151551077LL;
uint32_t x49 = UINT32_MAX;
uint16_t x50 = 531U;
volatile int16_t x59 = -1;
int32_t x60 = -1;
volatile uint64_t t11 = 113161797948LLU;
int64_t x73 = -1LL;
int8_t x76 = INT8_MIN;
static uint64_t t12 = 4LLU;
int8_t x77 = INT8_MAX;
int16_t x80 = 1;
static volatile int8_t x82 = INT8_MAX;
uint64_t x84 = 65820188227LLU;
uint64_t t14 = 2360751561434LLU;
uint64_t x87 = 801LLU;
static uint8_t x88 = UINT8_MAX;
volatile uint64_t t15 = 11243836328395LLU;
int32_t x105 = 1070091;
uint64_t t18 = 194088LLU;
static volatile int32_t x118 = -1;
static int8_t x125 = INT8_MIN;
uint32_t x126 = 983452841U;
static uint32_t t21 = 54U;
uint32_t x131 = UINT32_MAX;
static uint16_t x135 = 0U;
uint16_t x136 = 382U;
volatile int8_t x142 = INT8_MIN;
static volatile int64_t t25 = -417154130373LL;
int16_t x146 = 6;
static int8_t x152 = INT8_MAX;
volatile uint32_t x157 = 1148U;
int64_t x160 = -55158LL;
static uint64_t x164 = 54244026765LLU;
uint16_t x171 = 1338U;
volatile int8_t x172 = INT8_MIN;
int32_t t30 = 1477;
volatile int32_t x173 = 0;
int64_t x183 = -1LL;
uint32_t x188 = 77U;
int32_t x193 = -1;
volatile uint64_t x194 = 3LLU;
static int8_t x195 = INT8_MAX;
static uint64_t x197 = UINT64_MAX;
static int16_t x205 = -1;
static int16_t x207 = INT16_MAX;
int64_t x210 = -1LL;
static int32_t x211 = INT32_MIN;
static uint16_t x215 = 22941U;
volatile uint16_t x216 = UINT16_MAX;
static uint64_t x220 = 157725229LLU;
int8_t x224 = 1;
int32_t x225 = INT32_MIN;
uint32_t t43 = 1606615U;
volatile int32_t x231 = -1;
volatile uint64_t t44 = 14LLU;
volatile uint64_t x233 = 48057967406968357LLU;
uint16_t x240 = 783U;
uint8_t x249 = UINT8_MAX;
int32_t x252 = INT32_MIN;
volatile uint64_t t49 = 32318381571LLU;
int32_t x258 = -344;
uint8_t x259 = 30U;
int8_t x262 = -7;
int16_t x263 = 20;
uint32_t x264 = 7U;
static int8_t x269 = INT8_MAX;
int64_t x271 = INT64_MAX;
volatile uint64_t t54 = 3657LLU;
int8_t x282 = INT8_MIN;
uint64_t x283 = UINT64_MAX;
uint16_t x294 = 31U;
uint64_t x314 = 30669LLU;
static int16_t x321 = -1;
uint16_t x322 = 1510U;
volatile uint16_t x323 = 14U;
static int32_t x329 = 224507167;
volatile int8_t x331 = INT8_MIN;
volatile uint64_t t62 = 5723223692LLU;
uint16_t x339 = 2684U;
static volatile uint32_t x343 = 3376U;
uint16_t x344 = UINT16_MAX;
int16_t x347 = INT16_MIN;
int16_t x349 = INT16_MAX;
int16_t x350 = 6314;
uint64_t t68 = 169869256LLU;
volatile uint16_t x369 = 12U;
volatile int16_t x370 = INT16_MAX;
volatile uint64_t t71 = 12237785219501754LLU;
uint16_t x377 = UINT16_MAX;
int64_t x379 = 50LL;
int32_t x380 = 1368882;
uint8_t x382 = UINT8_MAX;
int32_t x388 = INT32_MAX;
int8_t x392 = -2;
static int16_t x395 = -1;
uint64_t x420 = 717433LLU;
int64_t t83 = -12929921039047819LL;
int32_t x440 = INT32_MIN;
volatile uint64_t t88 = 4141728475073LLU;
int64_t x466 = INT64_MAX;
volatile uint64_t x467 = 853689503851LLU;
int8_t x470 = INT8_MAX;
int8_t x471 = INT8_MIN;
int64_t x474 = -63006936348LL;
int64_t x475 = -1LL;
volatile int32_t x481 = INT32_MIN;
static volatile int32_t x482 = INT32_MIN;
int16_t x484 = -13827;
volatile int16_t x501 = INT16_MIN;
volatile int64_t x509 = -8LL;
int32_t x517 = -1;
int8_t x526 = INT8_MIN;


void f0(void) {
	int16_t x6 = -1;
	int32_t x8 = INT32_MAX;
	uint32_t t0 = 2031774U;

	t0 = (((x5|x6)^x7)*x8);

	if (t0 != 2147483657U) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x10 = 100U;
	int64_t x11 = 58024155LL;
	volatile int64_t t1 = 133426383170780LL;

	t1 = (((x9|x10)^x11)*x12);

	if (t1 != -1900727197887LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = 7;
	int32_t x14 = INT32_MAX;
	volatile int64_t x15 = -1LL;
	static int64_t x16 = 1LL;
	int64_t t2 = 19915320LL;

	t2 = (((x13|x14)^x15)*x16);

	if (t2 != -2147483648LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x21 = -8862885782353037LL;
	int8_t x22 = -1;
	volatile uint64_t x23 = 3LLU;
	int16_t x24 = -1;
	uint64_t t3 = 1574782851LLU;

	t3 = (((x21|x22)^x23)*x24);

	if (t3 != 4LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x25 = 4U;
	static int8_t x26 = 33;
	uint64_t x27 = 497758949267LLU;
	uint8_t x28 = 0U;
	uint64_t t4 = 36540733452LLU;

	t4 = (((x25|x26)^x27)*x28);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x33 = -1LL;
	int8_t x35 = INT8_MAX;
	int64_t t5 = 4750367314177207LL;

	t5 = (((x33|x34)^x35)*x36);

	if (t5 != -8388480LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x37 = INT16_MIN;
	int16_t x38 = -1;
	int8_t x39 = -56;
	static int64_t x40 = -83179419411LL;

	t6 = (((x37|x38)^x39)*x40);

	if (t6 != -4574868067605LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x45 = 382187143896LLU;
	int8_t x46 = 37;
	uint8_t x47 = 3U;
	static int16_t x48 = INT16_MIN;
	volatile uint64_t t7 = 265100503LLU;

	t7 = (((x45|x46)^x47)*x48);

	if (t7 != 18434220565377122304LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x51 = 24196112692LLU;
	static int8_t x52 = -1;
	static uint64_t t8 = 11273LLU;

	t8 = (((x49|x50)^x51)*x52);

	if (t8 != 18446744050661024053LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x53 = INT16_MAX;
	int32_t x54 = -1;
	volatile int16_t x55 = 10266;
	static volatile int16_t x56 = 700;
	volatile int32_t t9 = -234196084;

	t9 = (((x53|x54)^x55)*x56);

	if (t9 != -7186900) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x57 = INT16_MIN;
	volatile int16_t x58 = INT16_MAX;
	int32_t t10 = -1848953;

	t10 = (((x57|x58)^x59)*x60);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x69 = 1U;
	static uint32_t x70 = 866422U;
	uint64_t x71 = 5LLU;
	uint8_t x72 = 1U;

	t11 = (((x69|x70)^x71)*x72);

	if (t11 != 866418LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x74 = INT32_MAX;
	volatile uint64_t x75 = 36023LLU;

	t12 = (((x73|x74)^x75)*x76);

	if (t12 != 4611072LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x78 = INT16_MIN;
	int32_t x79 = -3;
	volatile int32_t t13 = -70779;

	t13 = (((x77|x78)^x79)*x80);

	if (t13 != 32642) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x81 = INT8_MAX;
	int16_t x83 = INT16_MIN;

	t14 = (((x81|x82)^x83)*x84);

	if (t14 != 18444595636945634109LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x85 = INT64_MIN;
	int32_t x86 = 2405;

	t15 = (((x85|x86)^x87)*x88);

	if (t15 != 9223372036855445948LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x93 = INT16_MAX;
	int32_t x94 = -1;
	uint8_t x95 = 22U;
	uint64_t x96 = UINT64_MAX;
	volatile uint64_t t16 = 4325913212935486LLU;

	t16 = (((x93|x94)^x95)*x96);

	if (t16 != 23LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x97 = 22;
	int16_t x98 = 1435;
	uint32_t x99 = 39U;
	static uint64_t x100 = UINT64_MAX;
	volatile uint64_t t17 = 31596331406LLU;

	t17 = (((x97|x98)^x99)*x100);

	if (t17 != 18446744073709550152LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x106 = INT16_MIN;
	int8_t x107 = -1;
	uint64_t x108 = 131922989189031LLU;

	t18 = (((x105|x106)^x107)*x108);

	if (t18 != 1484397474354976812LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x113 = -1;
	int64_t x114 = 930261LL;
	static uint16_t x115 = 14492U;
	int16_t x116 = 178;
	int64_t t19 = -2845LL;

	t19 = (((x113|x114)^x115)*x116);

	if (t19 != -2579754LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x117 = 109528450826LLU;
	static int64_t x119 = INT64_MIN;
	volatile int8_t x120 = 10;
	uint64_t t20 = 1898753213110419LLU;

	t20 = (((x117|x118)^x119)*x120);

	if (t20 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x127 = -1;
	uint8_t x128 = UINT8_MAX;

	t21 = (((x125|x126)^x127)*x128);

	if (t21 != 21930U) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x129 = 2U;
	volatile int16_t x130 = -1;
	int64_t x132 = -1LL;
	int64_t t22 = -168291202095LL;

	t22 = (((x129|x130)^x131)*x132);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x133 = -1;
	static uint8_t x134 = 24U;
	volatile int32_t t23 = 1;

	t23 = (((x133|x134)^x135)*x136);

	if (t23 != -382) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x137 = 1605449297803LL;
	volatile int32_t x138 = -1;
	uint16_t x139 = 3591U;
	int32_t x140 = -87511;
	volatile int64_t t24 = -2447014194178LL;

	t24 = (((x137|x138)^x139)*x140);

	if (t24 != 314339512LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x141 = -1LL;
	uint32_t x143 = 24U;
	static uint32_t x144 = 57709U;

	t25 = (((x141|x142)^x143)*x144);

	if (t25 != -1442725LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x145 = INT16_MIN;
	uint32_t x147 = UINT32_MAX;
	volatile int32_t x148 = INT32_MIN;
	uint32_t t26 = 4028U;

	t26 = (((x145|x146)^x147)*x148);

	if (t26 != 2147483648U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x149 = INT16_MIN;
	int8_t x150 = INT8_MIN;
	int8_t x151 = 27;
	int32_t t27 = 57;

	t27 = (((x149|x150)^x151)*x152);

	if (t27 != -12827) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x158 = INT16_MAX;
	volatile int16_t x159 = INT16_MIN;
	volatile int64_t t28 = -285115429743LL;

	t28 = (((x157|x158)^x159)*x160);

	if (t28 != -236901806057610LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x161 = INT64_MIN;
	static int8_t x162 = INT8_MIN;
	volatile int32_t x163 = 0;
	static uint64_t t29 = 46LLU;

	t29 = (((x161|x162)^x163)*x164);

	if (t29 != 18446737130474125696LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x169 = 72711;
	volatile int16_t x170 = INT16_MIN;

	t30 = (((x169|x170)^x171)*x172);

	if (t30 != 3367296) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int16_t x174 = INT16_MIN;
	uint8_t x175 = 8U;
	static int32_t x176 = 22457;
	volatile int32_t t31 = 257798738;

	t31 = (((x173|x174)^x175)*x176);

	if (t31 != -735691320) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x177 = 6556188594872LL;
	uint16_t x178 = 9U;
	uint16_t x179 = UINT16_MAX;
	int8_t x180 = 0;
	volatile int64_t t32 = 618323216LL;

	t32 = (((x177|x178)^x179)*x180);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x181 = 2;
	uint8_t x182 = 0U;
	static uint32_t x184 = 140681U;
	static int64_t t33 = 258124LL;

	t33 = (((x181|x182)^x183)*x184);

	if (t33 != -422043LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x185 = INT32_MIN;
	static int16_t x186 = INT16_MIN;
	uint8_t x187 = 28U;
	volatile uint32_t t34 = 111582411U;

	t34 = (((x185|x186)^x187)*x188);

	if (t34 != 4292446316U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x196 = 7;
	uint64_t t35 = 5789LLU;

	t35 = (((x193|x194)^x195)*x196);

	if (t35 != 18446744073709550720LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x198 = 0;
	static uint8_t x199 = 4U;
	int8_t x200 = INT8_MAX;
	volatile uint64_t t36 = 4190109LLU;

	t36 = (((x197|x198)^x199)*x200);

	if (t36 != 18446744073709550981LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x201 = 16;
	volatile uint32_t x202 = 6288147U;
	int8_t x203 = INT8_MIN;
	int32_t x204 = INT32_MIN;
	volatile uint32_t t37 = 8296375U;

	t37 = (((x201|x202)^x203)*x204);

	if (t37 != 2147483648U) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x206 = INT32_MIN;
	uint64_t x208 = 1523422458355LLU;
	volatile uint64_t t38 = 2406492192413705404LLU;

	t38 = (((x205|x206)^x207)*x208);

	if (t38 != 18396824566594174976LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x209 = UINT32_MAX;
	uint16_t x212 = 155U;
	static int64_t t39 = -621LL;

	t39 = (((x209|x210)^x211)*x212);

	if (t39 != 332859965285LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x213 = 108U;
	volatile uint8_t x214 = 1U;
	int32_t t40 = 253735;

	t40 = (((x213|x214)^x215)*x216);

	if (t40 != 1508877840) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x217 = UINT32_MAX;
	int8_t x218 = 15;
	static int16_t x219 = -392;
	uint64_t t41 = 113986315644096822LLU;

	t41 = (((x217|x218)^x219)*x220);

	if (t41 != 61670564539LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int8_t x221 = INT8_MIN;
	int8_t x222 = INT8_MIN;
	volatile int16_t x223 = INT16_MIN;
	static volatile int32_t t42 = -294592422;

	t42 = (((x221|x222)^x223)*x224);

	if (t42 != 32640) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x226 = INT32_MIN;
	volatile uint8_t x227 = UINT8_MAX;
	static volatile uint32_t x228 = UINT32_MAX;

	t43 = (((x225|x226)^x227)*x228);

	if (t43 != 2147483393U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x229 = INT16_MIN;
	uint64_t x230 = 164582160868LLU;
	uint8_t x232 = 3U;

	t44 = (((x229|x230)^x231)*x232);

	if (t44 != 4689LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x234 = 3943647U;
	volatile int16_t x235 = INT16_MIN;
	volatile int64_t x236 = -8957498876874118LL;
	uint64_t t45 = 69840709LLU;

	t45 = (((x233|x234)^x235)*x236);

	if (t45 != 14256840499963999110LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x237 = 49650855874430735LLU;
	int64_t x238 = INT64_MIN;
	int16_t x239 = -1;
	static volatile uint64_t t46 = 197060666539455LLU;

	t46 = (((x237|x238)^x239)*x240);

	if (t46 != 7240240034594612752LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x241 = -1;
	int32_t x242 = -95;
	int8_t x243 = -2;
	uint32_t x244 = UINT32_MAX;
	uint32_t t47 = UINT32_MAX;

	t47 = (((x241|x242)^x243)*x244);

	if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x245 = INT16_MIN;
	static int64_t x246 = 61824072LL;
	volatile uint16_t x247 = UINT16_MAX;
	int32_t x248 = -35;
	volatile int64_t t48 = 21837LL;

	t48 = (((x245|x246)^x247)*x248);

	if (t48 != 1973755LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x250 = 3U;
	uint64_t x251 = 15556628786672988LLU;

	t49 = (((x249|x250)^x251)*x252);

	if (t49 != 982423734738485248LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x257 = INT16_MIN;
	volatile int64_t x260 = -40542839932LL;
	volatile int64_t t50 = 63LL;

	t50 = (((x257|x258)^x259)*x260);

	if (t50 != 13379137177560LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x261 = INT8_MIN;
	volatile uint32_t t51 = 55584346U;

	t51 = (((x261|x262)^x263)*x264);

	if (t51 != 4294967163U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x270 = INT8_MIN;
	int16_t x272 = 0;
	int64_t t52 = 443316034184806884LL;

	t52 = (((x269|x270)^x271)*x272);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x273 = 3778;
	int8_t x274 = -1;
	int32_t x275 = INT32_MAX;
	uint32_t x276 = UINT32_MAX;
	uint32_t t53 = 172U;

	t53 = (((x273|x274)^x275)*x276);

	if (t53 != 2147483648U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x277 = 4904958LL;
	uint32_t x278 = UINT32_MAX;
	uint64_t x279 = 6217LLU;
	volatile int8_t x280 = -1;

	t54 = (((x277|x278)^x279)*x280);

	if (t54 != 18446744069414590538LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x281 = 25U;
	int32_t x284 = -106;
	uint64_t t55 = 2759LLU;

	t55 = (((x281|x282)^x283)*x284);

	if (t55 != 18446744073709540804LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x289 = INT64_MIN;
	volatile int8_t x290 = INT8_MIN;
	static int16_t x291 = INT16_MAX;
	uint64_t x292 = 21LLU;
	volatile uint64_t t56 = 400LLU;

	t56 = (((x289|x290)^x291)*x292);

	if (t56 != 18446744073708866155LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x293 = INT32_MIN;
	uint64_t x295 = 363335280265065LLU;
	volatile uint64_t x296 = UINT64_MAX;
	static uint64_t t57 = 235095291511537LLU;

	t57 = (((x293|x294)^x295)*x296);

	if (t57 != 363336678996106LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x309 = 61892LLU;
	volatile int32_t x310 = 0;
	volatile int8_t x311 = 4;
	int16_t x312 = INT16_MAX;
	static uint64_t t58 = 5817312LLU;

	t58 = (((x309|x310)^x311)*x312);

	if (t58 != 2027884096LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x313 = 793U;
	static int32_t x315 = INT32_MAX;
	int32_t x316 = -10106935;
	uint64_t t59 = 1918835LLU;

	t59 = (((x313|x314)^x315)*x316);

	if (t59 != 18425039906207060146LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x317 = -1;
	int16_t x318 = INT16_MIN;
	int64_t x319 = INT64_MIN;
	static uint64_t x320 = 52274065265239LLU;
	uint64_t t60 = 1735791537274932LLU;

	t60 = (((x317|x318)^x319)*x320);

	if (t60 != 9223319762789510569LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x324 = 3U;
	int32_t t61 = 12753;

	t61 = (((x321|x322)^x323)*x324);

	if (t61 != -45) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x330 = 7LLU;
	uint64_t x332 = UINT64_MAX;

	t62 = (((x329|x330)^x331)*x332);

	if (t62 != 224507233LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x333 = UINT32_MAX;
	int16_t x334 = INT16_MAX;
	static uint16_t x335 = 130U;
	int32_t x336 = INT32_MIN;
	uint32_t t63 = 141932201U;

	t63 = (((x333|x334)^x335)*x336);

	if (t63 != 2147483648U) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x337 = 151000399U;
	int64_t x338 = -57062928367LL;
	volatile uint32_t x340 = 1044910U;
	volatile int64_t t64 = 136180779965069408LL;

	t64 = (((x337|x338)^x339)*x340);

	if (t64 != -59467844321764150LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x341 = -1;
	static int8_t x342 = INT8_MIN;
	uint32_t t65 = 916508236U;

	t65 = (((x341|x342)^x343)*x344);

	if (t65 != 4073655601U) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x345 = INT32_MAX;
	int32_t x346 = INT32_MIN;
	volatile int8_t x348 = INT8_MIN;
	volatile int32_t t66 = -4871822;

	t66 = (((x345|x346)^x347)*x348);

	if (t66 != -4194176) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x351 = -1;
	static uint32_t x352 = UINT32_MAX;
	uint32_t t67 = 1U;

	t67 = (((x349|x350)^x351)*x352);

	if (t67 != 32768U) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x353 = 58U;
	int8_t x354 = INT8_MIN;
	static int8_t x355 = 4;
	volatile uint64_t x356 = 252912296LLU;

	t68 = (((x353|x354)^x355)*x356);

	if (t68 != 18446744057017340080LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x357 = -1;
	int64_t x358 = INT64_MAX;
	uint64_t x359 = 506LLU;
	volatile uint64_t x360 = 658773448LLU;
	static uint64_t t69 = 13352814143LLU;

	t69 = (((x357|x358)^x359)*x360);

	if (t69 != 18446743739711413480LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x361 = INT32_MAX;
	int8_t x362 = INT8_MIN;
	static uint16_t x363 = 165U;
	int64_t x364 = -83392605353LL;
	int64_t t70 = 267582244397767LL;

	t70 = (((x361|x362)^x363)*x364);

	if (t70 != 13843172488598LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x371 = 286889941646147445LLU;
	static volatile uint64_t x372 = 13818364113649LLU;

	t71 = (((x369|x370)^x371)*x372);

	if (t71 != 9384598997705192938LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x373 = 3LLU;
	uint8_t x374 = 66U;
	uint32_t x375 = 39916U;
	uint32_t x376 = 66U;
	uint64_t t72 = 77211LLU;

	t72 = (((x373|x374)^x375)*x376);

	if (t72 != 2630430LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x378 = -1LL;
	int64_t t73 = 22619401566795897LL;

	t73 = (((x377|x378)^x379)*x380);

	if (t73 != -69812982LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x381 = 11U;
	int32_t x383 = 3;
	int32_t x384 = -1;
	volatile int32_t t74 = 15491;

	t74 = (((x381|x382)^x383)*x384);

	if (t74 != -252) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x385 = -1LL;
	static int64_t x386 = INT64_MIN;
	int32_t x387 = INT32_MIN;
	int64_t t75 = 7659451963LL;

	t75 = (((x385|x386)^x387)*x388);

	if (t75 != 4611686014132420609LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x389 = INT8_MIN;
	uint8_t x390 = UINT8_MAX;
	uint32_t x391 = UINT32_MAX;
	volatile uint32_t t76 = 4U;

	t76 = (((x389|x390)^x391)*x392);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x393 = 76273170938834413LLU;
	int32_t x394 = -4178094;
	int64_t x396 = INT64_MAX;
	uint64_t t77 = 850366781649LLU;

	t77 = (((x393|x394)^x395)*x396);

	if (t77 != 18446744073708748800LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x405 = UINT32_MAX;
	uint32_t x406 = 23U;
	volatile int16_t x407 = INT16_MIN;
	uint32_t x408 = 1590902479U;
	uint32_t t78 = 29366060U;

	t78 = (((x405|x406)^x407)*x408);

	if (t78 != 1083457841U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x409 = 1;
	int32_t x410 = 416;
	int64_t x411 = -5689LL;
	int16_t x412 = INT16_MIN;
	int64_t t79 = -3666082839450575LL;

	t79 = (((x409|x410)^x411)*x412);

	if (t79 != 197984256LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x417 = INT16_MIN;
	int8_t x418 = -8;
	int16_t x419 = -11;
	static volatile uint64_t t80 = 887758354238036LLU;

	t80 = (((x417|x418)^x419)*x420);

	if (t80 != 9326629LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x425 = -1;
	int8_t x426 = -1;
	int16_t x427 = INT16_MIN;
	int8_t x428 = INT8_MAX;
	int32_t t81 = 1422509;

	t81 = (((x425|x426)^x427)*x428);

	if (t81 != 4161409) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x429 = UINT64_MAX;
	static volatile int32_t x430 = 48158;
	static int32_t x431 = INT32_MIN;
	volatile uint64_t x432 = 468LLU;
	static volatile uint64_t t82 = 80202266311LLU;

	t82 = (((x429|x430)^x431)*x432);

	if (t82 != 1005022346796LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x433 = -1;
	volatile uint16_t x434 = UINT16_MAX;
	int64_t x435 = 14LL;
	volatile uint32_t x436 = 283U;

	t83 = (((x433|x434)^x435)*x436);

	if (t83 != -4245LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x437 = 5U;
	uint32_t x438 = 9888358U;
	static volatile uint8_t x439 = 59U;
	volatile uint32_t t84 = 244674078U;

	t84 = (((x437|x438)^x439)*x440);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x441 = UINT32_MAX;
	int8_t x442 = 1;
	int32_t x443 = INT32_MIN;
	int32_t x444 = -1;
	static uint32_t t85 = 230178180U;

	t85 = (((x441|x442)^x443)*x444);

	if (t85 != 2147483649U) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x453 = -1LL;
	uint32_t x454 = 1213777882U;
	int64_t x455 = -1LL;
	static int64_t x456 = 6670180751100231LL;
	int64_t t86 = -45LL;

	t86 = (((x453|x454)^x455)*x456);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x457 = 505U;
	int16_t x458 = INT16_MAX;
	uint16_t x459 = 55U;
	uint32_t x460 = 2128U;
	volatile uint32_t t87 = 120062U;

	t87 = (((x457|x458)^x459)*x460);

	if (t87 != 69611136U) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x461 = -1046211812073317LL;
	static int32_t x462 = INT32_MIN;
	static int64_t x463 = INT64_MAX;
	uint64_t x464 = 28292409LLU;

	t88 = (((x461|x462)^x463)*x464);

	if (t88 != 9243981378392404292LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x465 = INT8_MAX;
	int8_t x468 = -1;
	uint64_t t89 = 29677531659LLU;

	t89 = (((x465|x466)^x467)*x468);

	if (t89 != 9223372890544279660LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x469 = -6183001LL;
	uint16_t x472 = 458U;
	volatile int64_t t90 = 41LL;

	t90 = (((x469|x470)^x471)*x472);

	if (t90 != 2831831862LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x473 = UINT8_MAX;
	int8_t x476 = INT8_MAX;
	int64_t t91 = -46513LL;

	t91 = (((x473|x474)^x475)*x476);

	if (t91 != 8001880912640LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x477 = INT8_MIN;
	int16_t x478 = INT16_MIN;
	volatile int32_t x479 = 4093;
	int64_t x480 = -1LL;
	static int64_t t92 = 19153245703720555LL;

	t92 = (((x477|x478)^x479)*x480);

	if (t92 != 3971LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x483 = 1373LLU;
	uint64_t t93 = 72315769138463803LLU;

	t93 = (((x481|x482)^x483)*x484);

	if (t93 != 29693237416425LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x493 = -1;
	uint32_t x494 = UINT32_MAX;
	uint64_t x495 = UINT64_MAX;
	int8_t x496 = -1;
	volatile uint64_t t94 = 6813LLU;

	t94 = (((x493|x494)^x495)*x496);

	if (t94 != 4294967296LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x497 = INT8_MIN;
	uint64_t x498 = UINT64_MAX;
	uint16_t x499 = UINT16_MAX;
	volatile uint8_t x500 = 10U;
	uint64_t t95 = 3939341068860LLU;

	t95 = (((x497|x498)^x499)*x500);

	if (t95 != 18446744073708896256LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x502 = -22;
	uint8_t x503 = UINT8_MAX;
	static uint16_t x504 = 13U;
	int32_t t96 = -158;

	t96 = (((x501|x502)^x503)*x504);

	if (t96 != -3055) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x510 = 150U;
	static int8_t x511 = INT8_MIN;
	int16_t x512 = INT16_MIN;
	static int64_t t97 = 3523430610865625912LL;

	t97 = (((x509|x510)^x511)*x512);

	if (t97 != -4128768LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x518 = INT16_MIN;
	volatile uint8_t x519 = UINT8_MAX;
	static uint32_t x520 = UINT32_MAX;
	static volatile uint32_t t98 = 425U;

	t98 = (((x517|x518)^x519)*x520);

	if (t98 != 256U) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x525 = UINT16_MAX;
	volatile uint64_t x527 = UINT64_MAX;
	uint64_t x528 = 4706832368LLU;
	uint64_t t99 = 78971736088734LLU;

	t99 = (((x525|x526)^x527)*x528);

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

