#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x10 = UINT8_MAX;
volatile int64_t t2 = INT64_MIN;
uint32_t x21 = 2045637645U;
volatile int32_t t5 = -19;
uint16_t x32 = 23U;
int64_t x38 = INT64_MIN;
volatile uint64_t t7 = 43512785LLU;
uint8_t x44 = 0U;
int32_t x46 = INT32_MIN;
int64_t t10 = -1947029722LL;
static int64_t x53 = -1LL;
uint16_t x54 = 1U;
int32_t x70 = -236964734;
volatile int8_t x77 = INT8_MAX;
int32_t x87 = INT32_MAX;
static uint32_t t17 = 6U;
volatile int8_t x91 = INT8_MAX;
int8_t x93 = INT8_MIN;
int8_t x100 = INT8_MIN;
int64_t x107 = INT64_MAX;
int16_t x115 = 4;
int32_t x129 = -1;
uint32_t x137 = 83U;
static uint32_t x138 = 23492910U;
uint32_t x139 = 56293543U;
uint16_t x142 = 508U;
static uint8_t x143 = UINT8_MAX;
volatile uint8_t x144 = UINT8_MAX;
static int16_t x176 = INT16_MIN;
uint32_t x185 = 233114U;
volatile uint32_t t40 = 8194468U;
int64_t x194 = 997613592084151LL;
int8_t x195 = -1;
int32_t x196 = INT32_MIN;
volatile int64_t x198 = INT64_MIN;
uint16_t x204 = UINT16_MAX;
static uint32_t x208 = 0U;
static int8_t x209 = -1;
volatile uint32_t x210 = UINT32_MAX;
static int8_t x213 = INT8_MIN;
static uint8_t x216 = UINT8_MAX;
int64_t x218 = -1LL;
volatile uint64_t x219 = UINT64_MAX;
int32_t x221 = -1;
int64_t x222 = -1LL;
volatile int8_t x224 = 5;
int16_t x226 = 1676;
volatile int32_t x229 = INT32_MAX;
volatile int8_t x231 = INT8_MIN;
static int8_t x233 = INT8_MAX;
uint16_t x237 = UINT16_MAX;
uint32_t x239 = 2U;
static volatile int8_t x254 = INT8_MAX;
static uint8_t x255 = 0U;
int32_t x263 = INT32_MIN;
int8_t x267 = -3;
volatile int16_t x268 = 1;
uint32_t x272 = UINT32_MAX;
uint16_t x273 = 3870U;
static int64_t x275 = -1LL;
int16_t x277 = -100;
volatile int64_t t62 = -4461883LL;
uint8_t x290 = UINT8_MAX;
int16_t x293 = 94;
uint32_t x294 = UINT32_MAX;
int8_t x297 = 1;
uint64_t x303 = 206185367LLU;
int64_t x304 = -659LL;
volatile uint64_t t67 = 2791957908526566321LLU;
uint64_t x308 = UINT64_MAX;
volatile int64_t t69 = -131300745224716074LL;
int16_t x313 = INT16_MAX;
static int8_t x316 = INT8_MIN;
volatile uint32_t t72 = 14316U;
int16_t x329 = 895;
uint16_t x333 = UINT16_MAX;
uint8_t x340 = 30U;
volatile int16_t x341 = -1;
int64_t t77 = -6LL;
int16_t x345 = -1;
volatile int8_t x359 = -1;
static int8_t x366 = 2;
int32_t x371 = INT32_MIN;
uint64_t x379 = 17046146282LLU;
uint64_t t87 = 4400LLU;
uint32_t x400 = 554U;
volatile uint32_t t90 = 0U;
int16_t x402 = 7805;
volatile int64_t x404 = INT64_MIN;
static int16_t x412 = INT16_MIN;
volatile int32_t t94 = -501017;
volatile uint64_t x433 = UINT64_MAX;
int64_t x434 = INT64_MIN;
int16_t x436 = 1;
static int64_t x437 = INT64_MAX;


void f0(void) {
	static int16_t x5 = -895;
	volatile int8_t x6 = INT8_MIN;
	volatile int64_t x7 = -38698423919130LL;
	static int32_t x8 = INT32_MIN;
	static volatile int64_t t0 = -1405354866303287837LL;

	t0 = (x5*((x6&x7)&x8));

	if (t0 != 34636323524444160LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x9 = UINT32_MAX;
	static int16_t x11 = -3128;
	static uint64_t x12 = 6LLU;
	static volatile uint64_t t1 = 4646LLU;

	t1 = (x9*((x10&x11)&x12));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x13 = INT64_MIN;
	int64_t x14 = -1LL;
	static int32_t x15 = -3;
	static int16_t x16 = 1;

	t2 = (x13*((x14&x15)&x16));

	if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x17 = 72U;
	int32_t x18 = INT32_MAX;
	int8_t x19 = INT8_MIN;
	static volatile int8_t x20 = 0;
	volatile uint32_t t3 = 382U;

	t3 = (x17*((x18&x19)&x20));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x22 = INT16_MIN;
	volatile uint16_t x23 = UINT16_MAX;
	static int8_t x24 = INT8_MIN;
	uint32_t t4 = 10824615U;

	t4 = (x21*((x22&x23)&x24));

	if (t4 != 4194729984U) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = INT8_MIN;
	uint16_t x26 = UINT16_MAX;
	int32_t x27 = -1;
	int8_t x28 = INT8_MAX;

	t5 = (x25*((x26&x27)&x28));

	if (t5 != -16256) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = 10;
	uint16_t x30 = 6542U;
	uint16_t x31 = 15792U;
	int32_t t6 = -19701128;

	t6 = (x29*((x30&x31)&x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x37 = UINT64_MAX;
	static uint16_t x39 = 6U;
	int32_t x40 = -1;

	t7 = (x37*((x38&x39)&x40));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x41 = UINT32_MAX;
	volatile int16_t x42 = 1;
	static int16_t x43 = 1;
	volatile uint32_t t8 = 508381850U;

	t8 = (x41*((x42&x43)&x44));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x45 = INT16_MIN;
	static int8_t x47 = -38;
	volatile int32_t x48 = INT32_MAX;
	volatile int32_t t9 = -13;

	t9 = (x45*((x46&x47)&x48));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int64_t x49 = INT64_MIN;
	static int8_t x50 = INT8_MIN;
	int8_t x51 = INT8_MAX;
	int16_t x52 = 3193;

	t10 = (x49*((x50&x51)&x52));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x55 = INT8_MIN;
	uint8_t x56 = 55U;
	int64_t t11 = 297642890495689LL;

	t11 = (x53*((x54&x55)&x56));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x57 = 1526;
	volatile int8_t x58 = -8;
	int8_t x59 = INT8_MAX;
	int8_t x60 = 1;
	int32_t t12 = -50146217;

	t12 = (x57*((x58&x59)&x60));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x65 = 155926U;
	int8_t x66 = INT8_MIN;
	volatile uint64_t x67 = UINT64_MAX;
	uint16_t x68 = 1180U;
	uint64_t t13 = 124666LLU;

	t13 = (x65*((x66&x67)&x68));

	if (t13 != 179626752LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x69 = UINT16_MAX;
	int32_t x71 = INT32_MIN;
	uint64_t x72 = UINT64_MAX;
	uint64_t t14 = 29813736LLU;

	t14 = (x69*((x70&x71)&x72));

	if (t14 != 18446603338368679936LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x78 = -254393LL;
	int64_t x79 = -1LL;
	int16_t x80 = INT16_MIN;
	static int64_t t15 = -13590623LL;

	t15 = (x77*((x78&x79)&x80));

	if (t15 != -33292288LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x81 = INT8_MAX;
	static volatile uint32_t x82 = 13U;
	static volatile int8_t x83 = INT8_MAX;
	volatile int32_t x84 = 43;
	uint32_t t16 = 8223996U;

	t16 = (x81*((x82&x83)&x84));

	if (t16 != 1143U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x85 = 5U;
	int8_t x86 = 17;
	uint32_t x88 = 484U;

	t17 = (x85*((x86&x87)&x88));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x89 = 123U;
	int32_t x90 = INT32_MAX;
	static int16_t x92 = -1032;
	int32_t t18 = 2857620;

	t18 = (x89*((x90&x91)&x92));

	if (t18 != 14760) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int8_t x94 = INT8_MIN;
	int32_t x95 = INT32_MAX;
	static int64_t x96 = INT64_MIN;
	volatile int64_t t19 = 0LL;

	t19 = (x93*((x94&x95)&x96));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int8_t x97 = INT8_MIN;
	int16_t x98 = -1;
	static int16_t x99 = -1;
	static volatile int32_t t20 = 5933;

	t20 = (x97*((x98&x99)&x100));

	if (t20 != 16384) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int64_t x101 = INT64_MIN;
	int8_t x102 = 29;
	int32_t x103 = INT32_MIN;
	uint64_t x104 = UINT64_MAX;
	volatile uint64_t t21 = 1151902LLU;

	t21 = (x101*((x102&x103)&x104));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x105 = INT8_MIN;
	int8_t x106 = INT8_MIN;
	static uint16_t x108 = 52U;
	volatile int64_t t22 = -24LL;

	t22 = (x105*((x106&x107)&x108));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x113 = -2005LL;
	int8_t x114 = INT8_MIN;
	volatile int64_t x116 = INT64_MIN;
	int64_t t23 = -731751LL;

	t23 = (x113*((x114&x115)&x116));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x121 = INT16_MIN;
	uint8_t x122 = 0U;
	int16_t x123 = 2;
	volatile int32_t x124 = -6;
	int32_t t24 = 1081;

	t24 = (x121*((x122&x123)&x124));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x125 = 6149498646732815LLU;
	int8_t x126 = INT8_MAX;
	int32_t x127 = -1;
	int64_t x128 = -1991911LL;
	uint64_t t25 = 5602107152761LLU;

	t25 = (x125*((x126&x127)&x128));

	if (t25 != 153737466168320375LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x130 = 39558689U;
	int8_t x131 = -1;
	uint32_t x132 = 7U;
	volatile uint32_t t26 = UINT32_MAX;

	t26 = (x129*((x130&x131)&x132));

	if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x133 = 4136;
	int16_t x134 = INT16_MAX;
	int16_t x135 = 231;
	int16_t x136 = -1;
	volatile int32_t t27 = 105293;

	t27 = (x133*((x134&x135)&x136));

	if (t27 != 955416) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x140 = INT32_MIN;
	uint32_t t28 = 4656682U;

	t28 = (x137*((x138&x139)&x140));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x141 = UINT8_MAX;
	int32_t t29 = 2697;

	t29 = (x141*((x142&x143)&x144));

	if (t29 != 64260) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x145 = 8U;
	volatile int16_t x146 = 1;
	int64_t x147 = 12702891LL;
	int8_t x148 = INT8_MIN;
	volatile int64_t t30 = -1022533LL;

	t30 = (x145*((x146&x147)&x148));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x149 = 29;
	int32_t x150 = 181;
	uint8_t x151 = 18U;
	volatile int8_t x152 = -3;
	volatile int32_t t31 = 1170205;

	t31 = (x149*((x150&x151)&x152));

	if (t31 != 464) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x153 = 45;
	volatile int16_t x154 = 890;
	static volatile uint32_t x155 = 121539349U;
	uint32_t x156 = 281003U;
	volatile uint32_t t32 = 95U;

	t32 = (x153*((x154&x155)&x156));

	if (t32 != 11520U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x157 = INT32_MIN;
	int32_t x158 = INT32_MAX;
	volatile int64_t x159 = INT64_MIN;
	int8_t x160 = INT8_MIN;
	volatile int64_t t33 = -3440917985806LL;

	t33 = (x157*((x158&x159)&x160));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x161 = INT16_MAX;
	int16_t x162 = INT16_MIN;
	int16_t x163 = INT16_MIN;
	int8_t x164 = -4;
	int32_t t34 = -31218;

	t34 = (x161*((x162&x163)&x164));

	if (t34 != -1073709056) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x165 = 0U;
	uint16_t x166 = UINT16_MAX;
	int16_t x167 = INT16_MIN;
	int8_t x168 = INT8_MAX;
	static volatile int32_t t35 = 147341871;

	t35 = (x165*((x166&x167)&x168));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x169 = INT32_MAX;
	int8_t x170 = 0;
	int16_t x171 = INT16_MIN;
	int32_t x172 = INT32_MAX;
	int32_t t36 = 10;

	t36 = (x169*((x170&x171)&x172));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int8_t x173 = 2;
	int8_t x174 = -1;
	uint32_t x175 = UINT32_MAX;
	static volatile uint32_t t37 = 403U;

	t37 = (x173*((x174&x175)&x176));

	if (t37 != 4294901760U) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x177 = 3591905408LLU;
	uint16_t x178 = UINT16_MAX;
	uint16_t x179 = UINT16_MAX;
	int64_t x180 = -1LL;
	volatile uint64_t t38 = 40085350598277925LLU;

	t38 = (x177*((x178&x179)&x180));

	if (t38 != 235395520913280LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x181 = -5;
	int64_t x182 = -106397986003824392LL;
	int8_t x183 = INT8_MAX;
	uint8_t x184 = UINT8_MAX;
	volatile int64_t t39 = 14959923LL;

	t39 = (x181*((x182&x183)&x184));

	if (t39 != -600LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x186 = UINT16_MAX;
	int8_t x187 = -1;
	int8_t x188 = INT8_MAX;

	t40 = (x185*((x186&x187)&x188));

	if (t40 != 29605478U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x189 = INT64_MIN;
	int32_t x190 = -344;
	volatile int16_t x191 = INT16_MIN;
	static uint16_t x192 = 7679U;
	int64_t t41 = 1899726818562435LL;

	t41 = (x189*((x190&x191)&x192));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x193 = 1398597463766321357LLU;
	static uint64_t t42 = 438558545144199LLU;

	t42 = (x193*((x194&x195)&x196));

	if (t42 != 10188947166794350592LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x197 = 427824370U;
	int16_t x199 = INT16_MAX;
	int64_t x200 = INT64_MIN;
	volatile int64_t t43 = -7670LL;

	t43 = (x197*((x198&x199)&x200));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x201 = -1LL;
	uint32_t x202 = 141825U;
	int8_t x203 = -13;
	int64_t t44 = 1040115LL;

	t44 = (x201*((x202&x203)&x204));

	if (t44 != -10753LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x205 = INT32_MAX;
	uint8_t x206 = 55U;
	static volatile uint64_t x207 = UINT64_MAX;
	uint64_t t45 = 345488LLU;

	t45 = (x205*((x206&x207)&x208));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x211 = -1;
	int32_t x212 = INT32_MIN;
	static uint32_t t46 = 7424855U;

	t46 = (x209*((x210&x211)&x212));

	if (t46 != 2147483648U) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x214 = UINT64_MAX;
	uint64_t x215 = 180015364701660LLU;
	volatile uint64_t t47 = 5894669319374956976LLU;

	t47 = (x213*((x214&x215)&x216));

	if (t47 != 18446744073709523456LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x217 = 26028652U;
	int16_t x220 = 4071;
	uint64_t t48 = 235297LLU;

	t48 = (x217*((x218&x219)&x220));

	if (t48 != 105962642292LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x223 = 3879405932264LLU;
	volatile uint64_t t49 = 1747236753LLU;

	t49 = (x221*((x222&x223)&x224));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x225 = INT64_MAX;
	int32_t x227 = INT32_MAX;
	static volatile int16_t x228 = INT16_MIN;
	volatile int64_t t50 = 3001583561767LL;

	t50 = (x225*((x226&x227)&x228));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x230 = INT64_MIN;
	uint16_t x232 = 141U;
	int64_t t51 = -4774610930018604LL;

	t51 = (x229*((x230&x231)&x232));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x234 = INT16_MIN;
	int16_t x235 = INT16_MAX;
	int16_t x236 = 1;
	volatile int32_t t52 = 30236;

	t52 = (x233*((x234&x235)&x236));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x238 = INT32_MAX;
	static uint32_t x240 = UINT32_MAX;
	static volatile uint32_t t53 = 35035U;

	t53 = (x237*((x238&x239)&x240));

	if (t53 != 131070U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x245 = 445126U;
	static uint64_t x246 = UINT64_MAX;
	static int16_t x247 = INT16_MAX;
	uint8_t x248 = 43U;
	uint64_t t54 = 112857754LLU;

	t54 = (x245*((x246&x247)&x248));

	if (t54 != 19140418LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x249 = 6623U;
	volatile int8_t x250 = -10;
	int16_t x251 = INT16_MIN;
	int64_t x252 = 7547052904LL;
	int64_t t55 = -30707884904048850LL;

	t55 = (x249*((x250&x251)&x252));

	if (t55 != 49983962841088LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x253 = INT8_MAX;
	int16_t x256 = INT16_MAX;
	volatile int32_t t56 = -211;

	t56 = (x253*((x254&x255)&x256));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x257 = -1283;
	volatile uint8_t x258 = 0U;
	int8_t x259 = INT8_MIN;
	uint64_t x260 = 89120416LLU;
	uint64_t t57 = 443399279LLU;

	t57 = (x257*((x258&x259)&x260));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x261 = -1;
	static int16_t x262 = INT16_MIN;
	static volatile int64_t x264 = 7061552LL;
	int64_t t58 = 48836174857509LL;

	t58 = (x261*((x262&x263)&x264));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x265 = INT64_MIN;
	uint32_t x266 = 178838717U;
	int64_t t59 = INT64_MIN;

	t59 = (x265*((x266&x267)&x268));

	if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x269 = 40;
	static int16_t x270 = INT16_MIN;
	static volatile int8_t x271 = -1;
	uint32_t t60 = 24U;

	t60 = (x269*((x270&x271)&x272));

	if (t60 != 4293656576U) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x274 = INT8_MAX;
	volatile uint8_t x276 = 12U;
	static int64_t t61 = -430284LL;

	t61 = (x273*((x274&x275)&x276));

	if (t61 != 46440LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x278 = INT8_MAX;
	int64_t x279 = -112209208786482991LL;
	int64_t x280 = 49151617448671LL;

	t62 = (x277*((x278&x279)&x280));

	if (t62 != -8100LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x281 = 3U;
	int64_t x282 = 1054LL;
	int8_t x283 = INT8_MIN;
	int8_t x284 = 1;
	volatile int64_t t63 = 1323427930790LL;

	t63 = (x281*((x282&x283)&x284));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x289 = -1LL;
	static int32_t x291 = -1;
	static volatile int8_t x292 = -1;
	volatile int64_t t64 = 1LL;

	t64 = (x289*((x290&x291)&x292));

	if (t64 != -255LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x295 = -1LL;
	uint32_t x296 = UINT32_MAX;
	int64_t t65 = 10747233569LL;

	t65 = (x293*((x294&x295)&x296));

	if (t65 != 403726925730LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x298 = INT64_MIN;
	static uint16_t x299 = 1093U;
	int32_t x300 = INT32_MIN;
	int64_t t66 = 28601992470LL;

	t66 = (x297*((x298&x299)&x300));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x301 = -1;
	int8_t x302 = -1;

	t67 = (x301*((x302&x303)&x304));

	if (t67 != 18446744073503366907LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x305 = 3LL;
	static volatile int32_t x306 = INT32_MIN;
	int64_t x307 = -528992652126LL;
	uint64_t t68 = 299845751446779432LLU;

	t68 = (x305*((x306&x307)&x308));

	if (t68 != 18446742482424168448LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x309 = 26U;
	int64_t x310 = -1LL;
	int8_t x311 = INT8_MAX;
	static int64_t x312 = INT64_MIN;

	t69 = (x309*((x310&x311)&x312));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x314 = -2738;
	static int16_t x315 = INT16_MAX;
	volatile int32_t t70 = 101366175;

	t70 = (x313*((x314&x315)&x316));

	if (t70 != 981437184) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x317 = INT32_MAX;
	int32_t x318 = INT32_MIN;
	int64_t x319 = INT64_MAX;
	uint64_t x320 = 196185561LLU;
	uint64_t t71 = 6848641458153429LLU;

	t71 = (x317*((x318&x319)&x320));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x321 = 9648U;
	static int32_t x322 = -65139683;
	static int8_t x323 = 4;
	int32_t x324 = INT32_MAX;

	t72 = (x321*((x322&x323)&x324));

	if (t72 != 38592U) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint32_t x325 = 1715498707U;
	volatile int16_t x326 = -50;
	int32_t x327 = -1;
	int32_t x328 = 12516;
	uint32_t t73 = 17743037U;

	t73 = (x325*((x326&x327)&x328));

	if (t73 != 1578920332U) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x330 = 9484;
	volatile int16_t x331 = -83;
	uint8_t x332 = 1U;
	static int32_t t74 = 100998305;

	t74 = (x329*((x330&x331)&x332));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x334 = 6;
	int8_t x335 = INT8_MAX;
	int64_t x336 = INT64_MIN;
	volatile int64_t t75 = 805729273584LL;

	t75 = (x333*((x334&x335)&x336));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x337 = 14403314217615LLU;
	int32_t x338 = INT32_MIN;
	uint16_t x339 = 54U;
	uint64_t t76 = 637285108938493LLU;

	t76 = (x337*((x338&x339)&x340));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x342 = 0;
	static int8_t x343 = INT8_MIN;
	static int64_t x344 = 55238307LL;

	t77 = (x341*((x342&x343)&x344));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x346 = 77328U;
	uint8_t x347 = 120U;
	volatile uint64_t x348 = UINT64_MAX;
	uint64_t t78 = 52LLU;

	t78 = (x345*((x346&x347)&x348));

	if (t78 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x349 = 471372314448374LLU;
	int64_t x350 = -115502030549549LL;
	uint32_t x351 = UINT32_MAX;
	int8_t x352 = -1;
	static volatile uint64_t t79 = 494338333LLU;

	t79 = (x349*((x350&x351)&x352));

	if (t79 != 3722578884580953026LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x357 = INT64_MAX;
	int32_t x358 = INT32_MIN;
	static volatile int32_t x360 = INT32_MAX;
	int64_t t80 = -7837LL;

	t80 = (x357*((x358&x359)&x360));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x361 = INT16_MAX;
	int32_t x362 = INT32_MIN;
	uint64_t x363 = 619169LLU;
	uint8_t x364 = 1U;
	uint64_t t81 = 905787LLU;

	t81 = (x361*((x362&x363)&x364));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x365 = 5398099LL;
	uint64_t x367 = 165300LLU;
	int16_t x368 = -1;
	static uint64_t t82 = 65417388LLU;

	t82 = (x365*((x366&x367)&x368));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x369 = 1163783153198LLU;
	volatile int8_t x370 = 29;
	uint32_t x372 = 2106U;
	uint64_t t83 = 363LLU;

	t83 = (x369*((x370&x371)&x372));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x373 = -552847288264LL;
	volatile int32_t x374 = -1;
	uint8_t x375 = 7U;
	static int32_t x376 = 671728;
	int64_t t84 = 757180043594487613LL;

	t84 = (x373*((x374&x375)&x376));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x377 = INT8_MIN;
	uint64_t x378 = 0LLU;
	int8_t x380 = INT8_MAX;
	uint64_t t85 = 1LLU;

	t85 = (x377*((x378&x379)&x380));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x381 = 29U;
	int64_t x382 = -1LL;
	static uint64_t x383 = 1545362439909156LLU;
	int64_t x384 = -19LL;
	uint64_t t86 = 402546380180245LLU;

	t86 = (x381*((x382&x383)&x384));

	if (t86 != 44815510757365524LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x385 = 77LLU;
	volatile int32_t x386 = -1;
	int16_t x387 = -1;
	static int32_t x388 = 4655559;

	t87 = (x385*((x386&x387)&x388));

	if (t87 != 358478043LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x389 = INT16_MIN;
	int32_t x390 = INT32_MIN;
	volatile int64_t x391 = -1LL;
	int8_t x392 = -1;
	volatile int64_t t88 = 1547477LL;

	t88 = (x389*((x390&x391)&x392));

	if (t88 != 70368744177664LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x393 = 441U;
	static uint16_t x394 = UINT16_MAX;
	static uint64_t x395 = UINT64_MAX;
	static volatile uint64_t x396 = 291967269LLU;
	uint64_t t89 = 53724359LLU;

	t89 = (x393*((x394&x395)&x396));

	if (t89 != 1935549LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x397 = 1716U;
	static uint16_t x398 = 31000U;
	int32_t x399 = -1;

	t90 = (x397*((x398&x399)&x400));

	if (t90 != 13728U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x401 = INT16_MIN;
	volatile int8_t x403 = -1;
	static int64_t t91 = 517035669LL;

	t91 = (x401*((x402&x403)&x404));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x405 = 490;
	int8_t x406 = INT8_MIN;
	static int8_t x407 = 19;
	volatile int16_t x408 = 2419;
	volatile int32_t t92 = 28662;

	t92 = (x405*((x406&x407)&x408));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x409 = INT32_MIN;
	static volatile uint64_t x410 = 27406807958241134LLU;
	static uint64_t x411 = 17035992950070LLU;
	static uint64_t t93 = 29584987731LLU;

	t93 = (x409*((x410&x411)&x412));

	if (t93 != 13825206431097290752LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x417 = INT32_MIN;
	uint8_t x418 = 2U;
	uint16_t x419 = 441U;
	uint8_t x420 = UINT8_MAX;

	t94 = (x417*((x418&x419)&x420));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x421 = 51;
	int64_t x422 = -1LL;
	int8_t x423 = 15;
	static int32_t x424 = INT32_MAX;
	volatile int64_t t95 = 239249390541793424LL;

	t95 = (x421*((x422&x423)&x424));

	if (t95 != 765LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x425 = -5829;
	int8_t x426 = INT8_MAX;
	int8_t x427 = -1;
	int32_t x428 = -1;
	int32_t t96 = -11154365;

	t96 = (x425*((x426&x427)&x428));

	if (t96 != -740283) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x429 = -1;
	uint8_t x430 = UINT8_MAX;
	static int64_t x431 = 130389703685522458LL;
	uint32_t x432 = 30U;
	volatile int64_t t97 = 255806028588064LL;

	t97 = (x429*((x430&x431)&x432));

	if (t97 != -26LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x435 = UINT8_MAX;
	uint64_t t98 = 55997LLU;

	t98 = (x433*((x434&x435)&x436));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x438 = UINT64_MAX;
	int32_t x439 = INT32_MIN;
	int64_t x440 = INT64_MIN;
	volatile uint64_t t99 = 139238563638656173LLU;

	t99 = (x437*((x438&x439)&x440));

	if (t99 != 9223372036854775808LLU) { NG(); } else { ; }
	
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

