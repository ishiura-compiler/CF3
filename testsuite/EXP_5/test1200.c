#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = -1;
uint32_t x4 = 69U;
int8_t x7 = INT8_MIN;
int16_t x11 = 23;
volatile uint8_t x14 = 114U;
uint32_t x19 = 358U;
int64_t x39 = INT64_MIN;
volatile int32_t t8 = 77531;
int32_t x41 = INT32_MIN;
int16_t x43 = 1379;
uint8_t x44 = UINT8_MAX;
int64_t x46 = 196437921374LL;
static int32_t t10 = 565;
int16_t x51 = 0;
volatile int16_t x62 = 46;
int16_t x65 = -397;
int32_t t13 = 256258054;
uint16_t x71 = UINT16_MAX;
uint32_t x73 = 408525521U;
volatile int16_t x76 = -1;
uint8_t x83 = 34U;
int64_t x84 = INT64_MAX;
int64_t x85 = INT64_MIN;
uint16_t x87 = 51U;
int64_t t17 = INT64_MIN;
volatile uint64_t x96 = 17026LLU;
volatile int64_t x101 = 1LL;
uint16_t x112 = 322U;
int16_t x113 = INT16_MIN;
uint32_t x115 = 2U;
volatile uint16_t x116 = 2742U;
int32_t t24 = -338941611;
int32_t x121 = INT32_MIN;
static volatile int64_t x136 = INT64_MAX;
int64_t t28 = -14513LL;
int32_t x139 = INT32_MIN;
volatile int32_t x153 = -1441148;
volatile uint16_t x156 = UINT16_MAX;
volatile int32_t t32 = -1020104460;
static int32_t x159 = INT32_MIN;
int32_t x166 = -523;
int32_t x167 = 5933954;
int32_t t35 = 358708357;
uint8_t x176 = 6U;
int32_t x179 = -1;
int32_t x180 = -1;
static volatile int16_t x186 = -1;
int8_t x188 = -1;
int32_t x194 = 27147180;
volatile uint16_t x203 = 1706U;
int64_t x204 = -20125LL;
static int8_t x206 = INT8_MIN;
static int64_t t44 = -19236LL;
int8_t x212 = INT8_MIN;
volatile int32_t x215 = INT32_MIN;
uint32_t x216 = UINT32_MAX;
int16_t x219 = INT16_MAX;
int16_t x220 = -22;
volatile uint16_t x221 = UINT16_MAX;
int8_t x231 = 19;
uint16_t x243 = 3U;
int32_t x251 = -31;
int32_t t54 = 3466;
int8_t x257 = 5;
static volatile int32_t t56 = 826;
int32_t x265 = INT32_MAX;
volatile int16_t x268 = 3161;
static uint64_t x275 = 409799LLU;
static int64_t x277 = 253408319243850315LL;
volatile int64_t x280 = -1LL;
int8_t x281 = INT8_MIN;
static int64_t x283 = -1LL;
volatile int32_t x285 = -753;
int32_t t61 = 32607773;
uint32_t x289 = UINT32_MAX;
volatile uint32_t t62 = UINT32_MAX;
int64_t x295 = 2614587125747LL;
static uint8_t x297 = 112U;
static volatile int32_t t65 = 12;
uint16_t x311 = 73U;
volatile int64_t x317 = INT64_MAX;
volatile int64_t x326 = INT64_MIN;
int32_t t71 = -815400;
volatile uint64_t t72 = 4252384142LLU;
volatile int32_t x342 = INT32_MIN;
int8_t x343 = INT8_MIN;
static int32_t t73 = 14;
static int16_t x346 = 116;
volatile uint64_t t76 = 2566506536059LLU;
int32_t x364 = INT32_MAX;
uint8_t x365 = UINT8_MAX;
int32_t t78 = 59457;
int64_t x373 = INT64_MIN;
uint16_t x376 = UINT16_MAX;
volatile uint16_t x382 = UINT16_MAX;
uint64_t t83 = 0LLU;
static int16_t x406 = INT16_MIN;
int8_t x408 = -1;
int64_t x411 = -1LL;
static uint8_t x425 = 28U;
static int16_t x433 = -1;
int32_t x442 = INT32_MAX;
int8_t x443 = INT8_MIN;
uint8_t x460 = UINT8_MAX;
int32_t t96 = -29571;
volatile int32_t t97 = -51525648;
int32_t x469 = -1;
uint64_t x471 = 11805206265634230LLU;
int32_t x474 = INT32_MAX;


void f0(void) {
	static volatile uint16_t x2 = 23U;
	uint16_t x3 = 0U;
	volatile uint32_t t0 = 1450546664U;

	t0 = (x1/((x2==x3)-x4));

	if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x5 = UINT8_MAX;
	int32_t x6 = INT32_MAX;
	uint64_t x8 = UINT64_MAX;
	volatile uint64_t t1 = 3507LLU;

	t1 = (x5/((x6==x7)-x8));

	if (t1 != 255LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	uint32_t x10 = 123038304U;
	int8_t x12 = -1;
	uint32_t t2 = UINT32_MAX;

	t2 = (x9/((x10==x11)-x12));

	if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x13 = UINT16_MAX;
	static uint16_t x15 = 3U;
	int16_t x16 = INT16_MIN;
	int32_t t3 = 15593;

	t3 = (x13/((x14==x15)-x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 121U;
	static uint8_t x18 = 122U;
	int16_t x20 = -1;
	volatile int32_t t4 = -31612;

	t4 = (x17/((x18==x19)-x20));

	if (t4 != 121) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = INT16_MIN;
	uint64_t x22 = 45283023600LLU;
	volatile int32_t x23 = INT32_MAX;
	int8_t x24 = INT8_MIN;
	volatile int32_t t5 = 370;

	t5 = (x21/((x22==x23)-x24));

	if (t5 != -256) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = 2;
	volatile int8_t x30 = INT8_MAX;
	int8_t x31 = -1;
	uint32_t x32 = 2052427U;
	volatile uint32_t t6 = 0U;

	t6 = (x29/((x30==x31)-x32));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x33 = -229LL;
	volatile int32_t x34 = INT32_MIN;
	uint32_t x35 = 28337273U;
	uint32_t x36 = 91714U;
	int64_t t7 = -234284786LL;

	t7 = (x33/((x34==x35)-x36));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x37 = 1318U;
	int16_t x38 = INT16_MIN;
	static int16_t x40 = 580;

	t8 = (x37/((x38==x39)-x40));

	if (t8 != -2) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x42 = 1059U;
	volatile int32_t t9 = -5581892;

	t9 = (x41/((x42==x43)-x44));

	if (t9 != 8421504) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = -7987;
	int64_t x47 = INT64_MIN;
	int8_t x48 = INT8_MIN;

	t10 = (x45/((x46==x47)-x48));

	if (t10 != -62) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x49 = INT16_MIN;
	static uint8_t x50 = UINT8_MAX;
	int64_t x52 = -6LL;
	volatile int64_t t11 = -30942LL;

	t11 = (x49/((x50==x51)-x52));

	if (t11 != -5461LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x61 = INT8_MIN;
	static uint32_t x63 = UINT32_MAX;
	uint64_t x64 = 2380991392LLU;
	volatile uint64_t t12 = 80366837391585694LLU;

	t12 = (x61/((x62==x63)-x64));

	if (t12 != 1LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x66 = 1172877U;
	volatile uint8_t x67 = 34U;
	uint16_t x68 = UINT16_MAX;

	t13 = (x65/((x66==x67)-x68));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int8_t x69 = 5;
	int32_t x70 = INT32_MIN;
	uint8_t x72 = 6U;
	int32_t t14 = -41156284;

	t14 = (x69/((x70==x71)-x72));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x74 = 11;
	int8_t x75 = INT8_MAX;
	static uint32_t t15 = 727657U;

	t15 = (x73/((x74==x75)-x76));

	if (t15 != 408525521U) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x81 = UINT8_MAX;
	int32_t x82 = 33272494;
	volatile int64_t t16 = 5971469564LL;

	t16 = (x81/((x82==x83)-x84));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x86 = 1;
	int64_t x88 = -1LL;

	t17 = (x85/((x86==x87)-x88));

	if (t17 != INT64_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x89 = -1;
	int16_t x90 = -1;
	int16_t x91 = INT16_MIN;
	static uint8_t x92 = UINT8_MAX;
	volatile int32_t t18 = 27204;

	t18 = (x89/((x90==x91)-x92));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x93 = UINT8_MAX;
	volatile int64_t x94 = INT64_MAX;
	uint8_t x95 = 15U;
	uint64_t t19 = 543316263177148862LLU;

	t19 = (x93/((x94==x95)-x96));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x97 = 1U;
	int64_t x98 = -48891LL;
	int32_t x99 = -4029662;
	static int32_t x100 = 366;
	int32_t t20 = -16;

	t20 = (x97/((x98==x99)-x100));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x102 = -1;
	uint16_t x103 = 5305U;
	volatile uint64_t x104 = 1956135050LLU;
	volatile uint64_t t21 = 301677597LLU;

	t21 = (x101/((x102==x103)-x104));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x109 = INT32_MIN;
	volatile int8_t x110 = 1;
	uint8_t x111 = 12U;
	int32_t t22 = -10069;

	t22 = (x109/((x110==x111)-x112));

	if (t22 != 6669203) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x114 = 8449U;
	volatile int32_t t23 = -32794;

	t23 = (x113/((x114==x115)-x116));

	if (t23 != 11) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint16_t x117 = 9U;
	uint8_t x118 = 115U;
	int16_t x119 = INT16_MIN;
	volatile int8_t x120 = -1;

	t24 = (x117/((x118==x119)-x120));

	if (t24 != 9) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x122 = INT16_MIN;
	int32_t x123 = INT32_MIN;
	int16_t x124 = INT16_MAX;
	int32_t t25 = 2;

	t25 = (x121/((x122==x123)-x124));

	if (t25 != 65538) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x125 = UINT32_MAX;
	static int64_t x126 = INT64_MIN;
	uint64_t x127 = 1121944004760957581LLU;
	int32_t x128 = -165149;
	volatile uint32_t t26 = 3293U;

	t26 = (x125/((x126==x127)-x128));

	if (t26 != 26006U) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x129 = UINT8_MAX;
	static int8_t x130 = INT8_MIN;
	uint32_t x131 = 54U;
	volatile int16_t x132 = 1161;
	volatile int32_t t27 = -1;

	t27 = (x129/((x130==x131)-x132));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x133 = INT64_MIN;
	int8_t x134 = INT8_MIN;
	uint8_t x135 = 0U;

	t28 = (x133/((x134==x135)-x136));

	if (t28 != 1LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x137 = INT16_MIN;
	int8_t x138 = INT8_MAX;
	uint8_t x140 = 1U;
	volatile int32_t t29 = -3;

	t29 = (x137/((x138==x139)-x140));

	if (t29 != 32768) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x145 = INT64_MIN;
	int64_t x146 = -44266060LL;
	int32_t x147 = 941176463;
	uint8_t x148 = 87U;
	int64_t t30 = 548300LL;

	t30 = (x145/((x146==x147)-x148));

	if (t30 != 106015770538560641LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x149 = 64661LL;
	int32_t x150 = INT32_MIN;
	static int32_t x151 = INT32_MIN;
	volatile int64_t x152 = 1185689811666LL;
	int64_t t31 = 1LL;

	t31 = (x149/((x150==x151)-x152));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x154 = INT8_MIN;
	uint8_t x155 = UINT8_MAX;

	t32 = (x153/((x154==x155)-x156));

	if (t32 != 21) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x157 = INT64_MAX;
	int64_t x158 = -1LL;
	volatile uint8_t x160 = 11U;
	static volatile int64_t t33 = 1013065LL;

	t33 = (x157/((x158==x159)-x160));

	if (t33 != -838488366986797800LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x165 = 248125124854176047LL;
	int64_t x168 = 5969939314536LL;
	int64_t t34 = -522664631LL;

	t34 = (x165/((x166==x167)-x168));

	if (t34 != -41562LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x169 = -45625;
	int32_t x170 = -1;
	int64_t x171 = -1758160336LL;
	int32_t x172 = -62600;

	t35 = (x169/((x170==x171)-x172));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x173 = INT32_MAX;
	volatile int8_t x174 = -5;
	uint64_t x175 = 2372312716212836LLU;
	volatile int32_t t36 = 22;

	t36 = (x173/((x174==x175)-x176));

	if (t36 != -357913941) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x177 = UINT64_MAX;
	static int8_t x178 = -1;
	volatile uint64_t t37 = 846684722LLU;

	t37 = (x177/((x178==x179)-x180));

	if (t37 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x181 = 53LL;
	static int8_t x182 = -1;
	static int32_t x183 = INT32_MAX;
	int64_t x184 = -266648232807LL;
	volatile int64_t t38 = 3622839514586827081LL;

	t38 = (x181/((x182==x183)-x184));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int32_t x185 = -56000836;
	uint32_t x187 = 55118310U;
	volatile int32_t t39 = -1737;

	t39 = (x185/((x186==x187)-x188));

	if (t39 != -56000836) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x189 = 14634986;
	uint8_t x190 = 1U;
	volatile int16_t x191 = 4;
	int8_t x192 = -1;
	static volatile int32_t t40 = -23362;

	t40 = (x189/((x190==x191)-x192));

	if (t40 != 14634986) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x193 = -672727769115042LL;
	volatile int8_t x195 = INT8_MIN;
	int64_t x196 = -1LL;
	volatile int64_t t41 = -322957736178LL;

	t41 = (x193/((x194==x195)-x196));

	if (t41 != -672727769115042LL) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint32_t x197 = 1614669U;
	static uint16_t x198 = 1U;
	uint32_t x199 = UINT32_MAX;
	uint16_t x200 = 13145U;
	uint32_t t42 = 4827U;

	t42 = (x197/((x198==x199)-x200));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int32_t x201 = -1;
	uint32_t x202 = 6824830U;
	static volatile int64_t t43 = 7LL;

	t43 = (x201/((x202==x203)-x204));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x205 = INT64_MAX;
	int32_t x207 = 2178265;
	static uint8_t x208 = 38U;

	t44 = (x205/((x206==x207)-x208));

	if (t44 != -242720316759336205LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x209 = UINT16_MAX;
	volatile uint16_t x210 = UINT16_MAX;
	uint32_t x211 = 506U;
	volatile int32_t t45 = -109948;

	t45 = (x209/((x210==x211)-x212));

	if (t45 != 511) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x213 = 0U;
	int64_t x214 = -1LL;
	uint32_t t46 = 99098716U;

	t46 = (x213/((x214==x215)-x216));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x217 = 1;
	uint64_t x218 = 14420656511251068LLU;
	static volatile int32_t t47 = -1;

	t47 = (x217/((x218==x219)-x220));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x222 = 0;
	volatile int16_t x223 = INT16_MIN;
	int8_t x224 = INT8_MIN;
	int32_t t48 = 18601836;

	t48 = (x221/((x222==x223)-x224));

	if (t48 != 511) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x225 = -40;
	static int32_t x226 = 263382;
	static int16_t x227 = 10;
	static uint64_t x228 = 11401589167800LLU;
	uint64_t t49 = 6582818710068LLU;

	t49 = (x225/((x226==x227)-x228));

	if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x229 = -35;
	static int32_t x230 = INT32_MAX;
	int64_t x232 = -453LL;
	int64_t t50 = 0LL;

	t50 = (x229/((x230==x231)-x232));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x241 = UINT64_MAX;
	int64_t x242 = -61998176LL;
	static int32_t x244 = INT32_MAX;
	uint64_t t51 = 564756495LLU;

	t51 = (x241/((x242==x243)-x244));

	if (t51 != 1LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x245 = -1;
	int32_t x246 = INT32_MAX;
	uint8_t x247 = 2U;
	int16_t x248 = -1;
	int32_t t52 = 20654392;

	t52 = (x245/((x246==x247)-x248));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x249 = INT64_MIN;
	uint16_t x250 = UINT16_MAX;
	int32_t x252 = 5235;
	int64_t t53 = -268310343218LL;

	t53 = (x249/((x250==x251)-x252));

	if (t53 != 1761866673706738LL) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint8_t x253 = 0U;
	static volatile uint64_t x254 = 30LLU;
	uint64_t x255 = 3245578616LLU;
	static int16_t x256 = INT16_MAX;

	t54 = (x253/((x254==x255)-x256));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x258 = 10493;
	int16_t x259 = INT16_MIN;
	uint8_t x260 = UINT8_MAX;
	int32_t t55 = 10134469;

	t55 = (x257/((x258==x259)-x260));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x261 = -5345;
	int16_t x262 = -1;
	uint8_t x263 = UINT8_MAX;
	int8_t x264 = INT8_MIN;

	t56 = (x261/((x262==x263)-x264));

	if (t56 != -41) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x266 = INT64_MIN;
	int64_t x267 = -1LL;
	int32_t t57 = -893;

	t57 = (x265/((x266==x267)-x268));

	if (t57 != -679368) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x273 = INT32_MAX;
	int8_t x274 = 29;
	int64_t x276 = INT64_MAX;
	volatile int64_t t58 = 110056103LL;

	t58 = (x273/((x274==x275)-x276));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x278 = 34786017;
	static volatile uint8_t x279 = 13U;
	volatile int64_t t59 = 0LL;

	t59 = (x277/((x278==x279)-x280));

	if (t59 != 253408319243850315LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x282 = INT32_MIN;
	uint64_t x284 = UINT64_MAX;
	volatile uint64_t t60 = 301070986LLU;

	t60 = (x281/((x282==x283)-x284));

	if (t60 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x286 = -1;
	static uint32_t x287 = 7976U;
	int32_t x288 = 525991113;

	t61 = (x285/((x286==x287)-x288));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x290 = UINT64_MAX;
	volatile int16_t x291 = -2;
	int32_t x292 = -1;

	t62 = (x289/((x290==x291)-x292));

	if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x293 = 260117264;
	uint32_t x294 = 9U;
	volatile int16_t x296 = INT16_MAX;
	int32_t t63 = 224373488;

	t63 = (x293/((x294==x295)-x296));

	if (t63 != -7938) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x298 = -26;
	uint64_t x299 = 103LLU;
	uint16_t x300 = 434U;
	int32_t t64 = -4063242;

	t64 = (x297/((x298==x299)-x300));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x301 = -1;
	int32_t x302 = INT32_MIN;
	static int64_t x303 = INT64_MAX;
	volatile int32_t x304 = 193295;

	t65 = (x301/((x302==x303)-x304));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x305 = INT16_MIN;
	int8_t x306 = INT8_MIN;
	int16_t x307 = -1861;
	static volatile int8_t x308 = INT8_MAX;
	int32_t t66 = -29673;

	t66 = (x305/((x306==x307)-x308));

	if (t66 != 258) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x309 = INT64_MAX;
	uint64_t x310 = UINT64_MAX;
	int8_t x312 = 13;
	volatile int64_t t67 = 3LL;

	t67 = (x309/((x310==x311)-x312));

	if (t67 != -709490156681136600LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x313 = -6;
	int64_t x314 = INT64_MIN;
	volatile int8_t x315 = 0;
	int64_t x316 = -27173822152LL;
	int64_t t68 = -1839842622537216LL;

	t68 = (x313/((x314==x315)-x316));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x318 = 4756U;
	uint32_t x319 = 17037U;
	int16_t x320 = INT16_MIN;
	volatile int64_t t69 = -487428219LL;

	t69 = (x317/((x318==x319)-x320));

	if (t69 != 281474976710655LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x325 = -16;
	static uint64_t x327 = UINT64_MAX;
	uint16_t x328 = 5U;
	volatile int32_t t70 = 0;

	t70 = (x325/((x326==x327)-x328));

	if (t70 != 3) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x329 = -1;
	int32_t x330 = INT32_MIN;
	int8_t x331 = -1;
	static uint16_t x332 = 2304U;

	t71 = (x329/((x330==x331)-x332));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x337 = UINT16_MAX;
	volatile int16_t x338 = -1;
	int16_t x339 = INT16_MIN;
	static volatile uint64_t x340 = UINT64_MAX;

	t72 = (x337/((x338==x339)-x340));

	if (t72 != 65535LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x341 = UINT8_MAX;
	int32_t x344 = -1;

	t73 = (x341/((x342==x343)-x344));

	if (t73 != 255) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x345 = -1LL;
	int8_t x347 = INT8_MAX;
	volatile int16_t x348 = 1;
	volatile int64_t t74 = -1858029LL;

	t74 = (x345/((x346==x347)-x348));

	if (t74 != 1LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x349 = INT8_MIN;
	uint32_t x350 = UINT32_MAX;
	static int64_t x351 = INT64_MIN;
	uint64_t x352 = UINT64_MAX;
	volatile uint64_t t75 = 48679200604296LLU;

	t75 = (x349/((x350==x351)-x352));

	if (t75 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x353 = -5LL;
	uint32_t x354 = 439363U;
	int32_t x355 = INT32_MIN;
	uint64_t x356 = UINT64_MAX;

	t76 = (x353/((x354==x355)-x356));

	if (t76 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x361 = -1;
	int64_t x362 = INT64_MIN;
	int8_t x363 = 7;
	volatile int32_t t77 = -53057460;

	t77 = (x361/((x362==x363)-x364));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x366 = 0U;
	volatile int32_t x367 = INT32_MIN;
	uint16_t x368 = 10343U;

	t78 = (x365/((x366==x367)-x368));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x369 = INT64_MIN;
	uint8_t x370 = UINT8_MAX;
	int64_t x371 = -75308LL;
	int16_t x372 = -1;
	volatile int64_t t79 = INT64_MIN;

	t79 = (x369/((x370==x371)-x372));

	if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x374 = -69576163146LL;
	int16_t x375 = INT16_MIN;
	volatile int64_t t80 = 286872710227549LL;

	t80 = (x373/((x374==x375)-x376));

	if (t80 != 140739635871744LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x381 = INT64_MAX;
	volatile int16_t x383 = INT16_MAX;
	int8_t x384 = -1;
	int64_t t81 = INT64_MAX;

	t81 = (x381/((x382==x383)-x384));

	if (t81 != INT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x385 = 141U;
	uint64_t x386 = 2800621876LLU;
	volatile uint8_t x387 = 7U;
	int32_t x388 = INT32_MAX;
	int32_t t82 = -436027937;

	t82 = (x385/((x386==x387)-x388));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x389 = INT8_MIN;
	int64_t x390 = -1LL;
	int8_t x391 = INT8_MIN;
	static uint64_t x392 = UINT64_MAX;

	t83 = (x389/((x390==x391)-x392));

	if (t83 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x393 = 21U;
	int32_t x394 = INT32_MIN;
	int64_t x395 = INT64_MIN;
	int32_t x396 = -1;
	volatile int32_t t84 = -782444;

	t84 = (x393/((x394==x395)-x396));

	if (t84 != 21) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x401 = UINT16_MAX;
	static volatile int8_t x402 = -1;
	int64_t x403 = 1877567LL;
	int16_t x404 = INT16_MAX;
	int32_t t85 = -1;

	t85 = (x401/((x402==x403)-x404));

	if (t85 != -2) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x405 = -3;
	int8_t x407 = INT8_MIN;
	volatile int32_t t86 = -365319203;

	t86 = (x405/((x406==x407)-x408));

	if (t86 != -3) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x409 = UINT64_MAX;
	static volatile int16_t x410 = INT16_MAX;
	int32_t x412 = -1040402;
	uint64_t t87 = 44476361LLU;

	t87 = (x409/((x410==x411)-x412));

	if (t87 != 17730400435321LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x413 = UINT16_MAX;
	int16_t x414 = 3;
	uint8_t x415 = UINT8_MAX;
	static uint32_t x416 = 10U;
	volatile uint32_t t88 = 183565357U;

	t88 = (x413/((x414==x415)-x416));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x421 = -1;
	int64_t x422 = INT64_MAX;
	int64_t x423 = INT64_MIN;
	int16_t x424 = -1303;
	volatile int32_t t89 = 0;

	t89 = (x421/((x422==x423)-x424));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x426 = 1655;
	static int32_t x427 = INT32_MAX;
	int32_t x428 = INT32_MAX;
	int32_t t90 = 968470;

	t90 = (x425/((x426==x427)-x428));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x429 = INT8_MIN;
	static int16_t x430 = INT16_MIN;
	int16_t x431 = 683;
	uint64_t x432 = 390726310LLU;
	uint64_t t91 = 23410272474910849LLU;

	t91 = (x429/((x430==x431)-x432));

	if (t91 != 1LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x434 = UINT64_MAX;
	volatile int64_t x435 = -1LL;
	int64_t x436 = 2796957243LL;
	static int64_t t92 = 0LL;

	t92 = (x433/((x434==x435)-x436));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x441 = INT16_MIN;
	int64_t x444 = 34577720513252LL;
	static int64_t t93 = 4615179483584901LL;

	t93 = (x441/((x442==x443)-x444));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x445 = INT64_MIN;
	int8_t x446 = -2;
	int32_t x447 = INT32_MAX;
	uint8_t x448 = UINT8_MAX;
	int64_t t94 = 146258541LL;

	t94 = (x445/((x446==x447)-x448));

	if (t94 != 36170086419038336LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x453 = 2033812306LLU;
	int8_t x454 = INT8_MIN;
	static int32_t x455 = INT32_MIN;
	uint8_t x456 = 2U;
	volatile uint64_t t95 = 72397357681316426LLU;

	t95 = (x453/((x454==x455)-x456));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x457 = -1;
	int64_t x458 = INT64_MAX;
	static volatile uint64_t x459 = UINT64_MAX;

	t96 = (x457/((x458==x459)-x460));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x461 = INT8_MIN;
	int64_t x462 = -1LL;
	static uint16_t x463 = UINT16_MAX;
	int16_t x464 = INT16_MIN;

	t97 = (x461/((x462==x463)-x464));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x470 = -27197305LL;
	static uint16_t x472 = 32628U;
	int32_t t98 = -988038662;

	t98 = (x469/((x470==x471)-x472));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x473 = 480897840LLU;
	static int64_t x475 = -1LL;
	int8_t x476 = INT8_MAX;
	uint64_t t99 = 2LLU;

	t99 = (x473/((x474==x475)-x476));

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

