#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x10 = UINT32_MAX;
uint64_t x12 = 11724292480823865LLU;
volatile int32_t x14 = -1;
uint16_t x21 = 161U;
volatile int64_t t4 = -99028804561384LL;
uint8_t x31 = 23U;
static uint16_t x33 = 36U;
uint16_t x34 = UINT16_MAX;
volatile uint32_t t7 = 21929U;
uint32_t x37 = 485U;
int8_t x40 = INT8_MAX;
static int8_t x45 = -1;
volatile int8_t x46 = INT8_MIN;
static int64_t x49 = 238644222921088LL;
uint32_t x50 = UINT32_MAX;
int8_t x64 = INT8_MAX;
static uint64_t t11 = 4621894844584LLU;
int8_t x65 = INT8_MAX;
uint32_t x66 = 113164U;
uint16_t x69 = UINT16_MAX;
volatile uint32_t t13 = 0U;
static int64_t x73 = -1LL;
uint32_t x75 = 12U;
volatile int32_t x80 = -1354731;
static uint64_t x85 = UINT64_MAX;
volatile uint64_t x86 = 1846103511LLU;
volatile uint64_t t16 = 47427LLU;
int32_t x100 = INT32_MIN;
int16_t x102 = INT16_MIN;
uint64_t x103 = 4453115089LLU;
int8_t x104 = INT8_MAX;
int32_t x115 = 48;
uint8_t x116 = 4U;
int16_t x117 = INT16_MIN;
static int8_t x123 = INT8_MAX;
int32_t t23 = -14565135;
int64_t t24 = 997170382199LL;
static uint64_t x138 = 163878LLU;
static int8_t x142 = 15;
int32_t x152 = INT32_MAX;
volatile int8_t x156 = INT8_MAX;
static int64_t x158 = INT64_MAX;
int8_t x160 = 0;
uint64_t t31 = 1105771734655LLU;
static volatile int32_t t36 = 0;
volatile uint8_t x207 = 9U;
int8_t x209 = INT8_MIN;
uint32_t x212 = 30256U;
int8_t x213 = -1;
int16_t x214 = -30;
volatile uint8_t x215 = 1U;
static int16_t x221 = INT16_MIN;
static volatile int64_t x223 = 87915912LL;
int64_t t43 = 86004LL;
int64_t x237 = INT64_MIN;
static int64_t x238 = -863505324LL;
int16_t x239 = 11710;
static int16_t x250 = INT16_MIN;
volatile int8_t x253 = INT8_MIN;
static int64_t x254 = -1LL;
int64_t x264 = INT64_MAX;
volatile uint16_t x274 = 1323U;
int8_t x275 = INT8_MIN;
volatile int8_t x282 = INT8_MAX;
static int16_t x283 = -1;
int8_t x288 = -1;
uint64_t x295 = 22326444820LLU;
int64_t x308 = INT64_MIN;
static int64_t x310 = -1LL;
volatile int64_t t57 = -31LL;
volatile int8_t x313 = 9;
int16_t x318 = INT16_MAX;
int8_t x337 = INT8_MIN;
int16_t x339 = 50;
uint32_t x346 = UINT32_MAX;
static uint16_t x353 = 2955U;
int16_t x364 = -1;
int64_t x367 = -878635703304LL;
int16_t x369 = INT16_MIN;
int16_t x371 = -1;
int16_t x381 = INT16_MIN;
int16_t x384 = INT16_MAX;
static uint8_t x396 = 44U;
int64_t x397 = -68588985LL;
int64_t t75 = 120468229LL;
int8_t x438 = 24;
int16_t x445 = -1;
int16_t x446 = -4063;
volatile int32_t x453 = INT32_MIN;
int16_t x454 = INT16_MAX;
int32_t x465 = INT32_MIN;
static uint16_t x470 = 757U;
uint16_t x472 = UINT16_MAX;
int8_t x476 = INT8_MAX;
int32_t t85 = 1156;
volatile int8_t x495 = INT8_MAX;
int16_t x504 = INT16_MAX;
uint32_t t89 = 8U;
uint64_t x513 = 9252179565189181LLU;
static uint16_t x514 = 6967U;
volatile int16_t x516 = INT16_MIN;
int32_t x518 = INT32_MIN;
static volatile uint32_t x520 = UINT32_MAX;
uint64_t t91 = 313131011686LLU;
uint64_t t93 = 117467381LLU;
int8_t x545 = INT8_MIN;
volatile int16_t x559 = INT16_MIN;
int32_t x565 = -212343;
uint16_t x570 = 3U;
volatile int8_t x573 = INT8_MAX;
volatile int16_t x575 = -2;


void f0(void) {
	int8_t x1 = INT8_MAX;
	static int64_t x2 = 83728358700771LL;
	uint32_t x3 = 633U;
	uint16_t x4 = UINT16_MAX;
	int64_t t0 = 284691701347306827LL;

	t0 = ((x1%(x2*x3))&x4);

	if (t0 != 127LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x9 = UINT64_MAX;
	static int32_t x11 = -40796490;
	volatile uint64_t t1 = 287524757316LLU;

	t1 = ((x9%(x10*x11))&x12);

	if (t1 != 1045049LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x13 = 2058710439U;
	uint32_t x15 = UINT32_MAX;
	int64_t x16 = INT64_MIN;
	volatile int64_t t2 = -664391LL;

	t2 = ((x13%(x14*x15))&x16);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x17 = 3U;
	int8_t x18 = INT8_MAX;
	int16_t x19 = -29;
	int8_t x20 = INT8_MIN;
	static int32_t t3 = -1967;

	t3 = ((x17%(x18*x19))&x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x22 = 1288LL;
	volatile int64_t x23 = -1LL;
	int64_t x24 = -1LL;

	t4 = ((x21%(x22*x23))&x24);

	if (t4 != 161LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = INT64_MIN;
	volatile int32_t x26 = INT32_MIN;
	uint64_t x27 = 228653381519289705LLU;
	volatile uint8_t x28 = 0U;
	uint64_t t5 = 69434500LLU;

	t5 = ((x25%(x26*x27))&x28);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x29 = 24820U;
	uint8_t x30 = UINT8_MAX;
	uint64_t x32 = 6666256LLU;
	volatile uint64_t t6 = 6027334LLU;

	t6 = ((x29%(x30*x31))&x32);

	if (t6 != 16LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x35 = 1422U;
	int32_t x36 = -1;

	t7 = ((x33%(x34*x35))&x36);

	if (t7 != 36U) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x38 = INT16_MAX;
	static int8_t x39 = INT8_MIN;
	volatile uint32_t t8 = 28017304U;

	t8 = ((x37%(x38*x39))&x40);

	if (t8 != 101U) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x47 = -223;
	uint8_t x48 = UINT8_MAX;
	volatile int32_t t9 = 5827656;

	t9 = ((x45%(x46*x47))&x48);

	if (t9 != 255) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x51 = 27;
	int16_t x52 = -1;
	volatile int64_t t10 = -591175102148LL;

	t10 = ((x49%(x50*x51))&x52);

	if (t10 != 2956553641LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x61 = INT64_MAX;
	uint64_t x62 = 31196732013435LLU;
	int16_t x63 = INT16_MIN;

	t11 = ((x61%(x62*x63))&x64);

	if (t11 != 127LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x67 = 125U;
	uint16_t x68 = 1U;
	uint32_t t12 = 1509U;

	t12 = ((x65%(x66*x67))&x68);

	if (t12 != 1U) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x70 = 1304U;
	int8_t x71 = -3;
	static volatile uint8_t x72 = 9U;

	t13 = ((x69%(x70*x71))&x72);

	if (t13 != 9U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x74 = 268U;
	int8_t x76 = INT8_MIN;
	volatile int64_t t14 = 63591203161373LL;

	t14 = ((x73%(x74*x75))&x76);

	if (t14 != -128LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x77 = 966858512254473352LL;
	int64_t x78 = -7205LL;
	static volatile int16_t x79 = INT16_MAX;
	static volatile int64_t t15 = -138116262989331465LL;

	t15 = ((x77%(x78*x79))&x80);

	if (t15 != 50548753LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x87 = 6U;
	int64_t x88 = -135845860098LL;

	t16 = ((x85%(x86*x87))&x88);

	if (t16 != 1145088182LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x93 = 6U;
	int16_t x94 = INT16_MAX;
	int32_t x95 = -1;
	int32_t x96 = 17882511;
	int32_t t17 = -2341852;

	t17 = ((x93%(x94*x95))&x96);

	if (t17 != 6) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int8_t x97 = 7;
	uint16_t x98 = UINT16_MAX;
	static uint16_t x99 = 11279U;
	int32_t t18 = -753808640;

	t18 = ((x97%(x98*x99))&x100);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x101 = INT8_MAX;
	volatile uint64_t t19 = 827686743350LLU;

	t19 = ((x101%(x102*x103))&x104);

	if (t19 != 127LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x105 = UINT64_MAX;
	int8_t x106 = INT8_MIN;
	uint16_t x107 = 55U;
	uint32_t x108 = 13899755U;
	volatile uint64_t t20 = 1361754534130809770LLU;

	t20 = ((x105%(x106*x107))&x108);

	if (t20 != 4971LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x113 = UINT8_MAX;
	volatile uint8_t x114 = UINT8_MAX;
	volatile int32_t t21 = 93947;

	t21 = ((x113%(x114*x115))&x116);

	if (t21 != 4) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x118 = INT16_MIN;
	int16_t x119 = INT16_MIN;
	uint16_t x120 = 14U;
	volatile int32_t t22 = 74;

	t22 = ((x117%(x118*x119))&x120);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x121 = -1;
	int16_t x122 = INT16_MIN;
	volatile int8_t x124 = -2;

	t23 = ((x121%(x122*x123))&x124);

	if (t23 != -2) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x129 = -61980812;
	int64_t x130 = 28429112212354LL;
	int8_t x131 = 1;
	uint32_t x132 = 3227U;

	t24 = ((x129%(x130*x131))&x132);

	if (t24 != 3088LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x133 = UINT16_MAX;
	int8_t x134 = 4;
	int16_t x135 = INT16_MIN;
	uint8_t x136 = UINT8_MAX;
	int32_t t25 = -7942;

	t25 = ((x133%(x134*x135))&x136);

	if (t25 != 255) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x137 = INT32_MIN;
	uint8_t x139 = UINT8_MAX;
	static uint32_t x140 = 30U;
	static uint64_t t26 = 218LLU;

	t26 = ((x137%(x138*x139))&x140);

	if (t26 != 16LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x141 = UINT32_MAX;
	static volatile int16_t x143 = -588;
	volatile int32_t x144 = INT32_MIN;
	uint32_t t27 = 2397U;

	t27 = ((x141%(x142*x143))&x144);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x145 = 918;
	int16_t x146 = INT16_MIN;
	int8_t x147 = INT8_MAX;
	int64_t x148 = -51475887784369799LL;
	int64_t t28 = 762023998LL;

	t28 = ((x145%(x146*x147))&x148);

	if (t28 != 272LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x149 = INT8_MAX;
	int32_t x150 = -21135458;
	volatile uint32_t x151 = 390829483U;
	volatile uint32_t t29 = 21863144U;

	t29 = ((x149%(x150*x151))&x152);

	if (t29 != 127U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x153 = INT8_MIN;
	int64_t x154 = INT64_MIN;
	uint64_t x155 = UINT64_MAX;
	static uint64_t t30 = 42989813822082LLU;

	t30 = ((x153%(x154*x155))&x156);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x157 = 170U;
	uint64_t x159 = 274547854653LLU;

	t31 = ((x157%(x158*x159))&x160);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x165 = 29;
	int16_t x166 = INT16_MIN;
	static volatile int64_t x167 = -1889242336381LL;
	int64_t x168 = INT64_MIN;
	int64_t t32 = 25154617097932729LL;

	t32 = ((x165%(x166*x167))&x168);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x173 = INT16_MIN;
	volatile uint32_t x174 = UINT32_MAX;
	int32_t x175 = INT32_MAX;
	int64_t x176 = INT64_MIN;
	int64_t t33 = 0LL;

	t33 = ((x173%(x174*x175))&x176);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x177 = INT32_MIN;
	volatile int16_t x178 = INT16_MIN;
	int16_t x179 = INT16_MAX;
	uint64_t x180 = 38447102LLU;
	static volatile uint64_t t34 = 1582162507947LLU;

	t34 = ((x177%(x178*x179))&x180);

	if (t34 != 38404096LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x181 = UINT8_MAX;
	static int8_t x182 = -1;
	int16_t x183 = 81;
	uint32_t x184 = 72838U;
	volatile uint32_t t35 = 104710U;

	t35 = ((x181%(x182*x183))&x184);

	if (t35 != 4U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x193 = -197672961;
	volatile int32_t x194 = -1;
	static uint16_t x195 = 3U;
	static uint8_t x196 = UINT8_MAX;

	t36 = ((x193%(x194*x195))&x196);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint64_t x205 = UINT64_MAX;
	uint8_t x206 = 36U;
	static int16_t x208 = INT16_MIN;
	uint64_t t37 = 127901LLU;

	t37 = ((x205%(x206*x207))&x208);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x210 = INT8_MAX;
	int16_t x211 = INT16_MAX;
	static volatile uint32_t t38 = 902U;

	t38 = ((x209%(x210*x211))&x212);

	if (t38 != 30208U) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x216 = -1;
	static volatile int32_t t39 = -1;

	t39 = ((x213%(x214*x215))&x216);

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x217 = INT8_MIN;
	int16_t x218 = INT16_MIN;
	int16_t x219 = -1;
	int64_t x220 = INT64_MAX;
	static int64_t t40 = -226721LL;

	t40 = ((x217%(x218*x219))&x220);

	if (t40 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x222 = 1;
	static int16_t x224 = INT16_MIN;
	int64_t t41 = -245653LL;

	t41 = ((x221%(x222*x223))&x224);

	if (t41 != -32768LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x225 = 39473847U;
	int64_t x226 = 65815271LL;
	uint64_t x227 = UINT64_MAX;
	volatile int16_t x228 = INT16_MIN;
	static uint64_t t42 = 58281062281862LLU;

	t42 = ((x225%(x226*x227))&x228);

	if (t42 != 39452672LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x233 = UINT8_MAX;
	int16_t x234 = -8269;
	int16_t x235 = -211;
	int64_t x236 = INT64_MIN;

	t43 = ((x233%(x234*x235))&x236);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x240 = INT32_MAX;
	int64_t t44 = 39327943376700LL;

	t44 = ((x237%(x238*x239))&x240);

	if (t44 != 2081203560LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x249 = INT64_MAX;
	int16_t x251 = -5007;
	volatile int16_t x252 = INT16_MAX;
	volatile int64_t t45 = -442339554931057LL;

	t45 = ((x249%(x250*x251))&x252);

	if (t45 != 32767LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x255 = INT32_MIN;
	static uint8_t x256 = 53U;
	volatile int64_t t46 = -56707329050765LL;

	t46 = ((x253%(x254*x255))&x256);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x261 = -1;
	uint16_t x262 = 28663U;
	volatile uint64_t x263 = 213322LLU;
	uint64_t t47 = 34181038084LLU;

	t47 = ((x261%(x262*x263))&x264);

	if (t47 != 2238006147LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x265 = INT8_MIN;
	int16_t x266 = 1;
	static volatile uint8_t x267 = 3U;
	int8_t x268 = INT8_MIN;
	static int32_t t48 = -1;

	t48 = ((x265%(x266*x267))&x268);

	if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x273 = INT16_MIN;
	static int64_t x276 = INT64_MAX;
	int64_t t49 = 28911914078LL;

	t49 = ((x273%(x274*x275))&x276);

	if (t49 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x277 = 1U;
	int8_t x278 = INT8_MAX;
	int16_t x279 = -1775;
	static uint8_t x280 = UINT8_MAX;
	volatile int32_t t50 = 11;

	t50 = ((x277%(x278*x279))&x280);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x281 = -22;
	volatile int64_t x284 = INT64_MAX;
	static int64_t t51 = -13473885619969585LL;

	t51 = ((x281%(x282*x283))&x284);

	if (t51 != 9223372036854775786LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x285 = -1;
	uint32_t x286 = UINT32_MAX;
	int32_t x287 = INT32_MAX;
	static uint32_t t52 = 29182785U;

	t52 = ((x285%(x286*x287))&x288);

	if (t52 != 2147483646U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x293 = -1;
	int32_t x294 = INT32_MAX;
	uint64_t x296 = 28455155LLU;
	uint64_t t53 = 7342LLU;

	t53 = ((x293%(x294*x295))&x296);

	if (t53 != 8519699LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x297 = -7287;
	uint64_t x298 = 61274763LLU;
	uint16_t x299 = UINT16_MAX;
	int8_t x300 = 20;
	uint64_t t54 = 1734LLU;

	t54 = ((x297%(x298*x299))&x300);

	if (t54 != 4LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x301 = INT32_MIN;
	volatile int16_t x302 = -414;
	volatile uint32_t x303 = UINT32_MAX;
	static uint16_t x304 = 2U;
	static volatile uint32_t t55 = 212U;

	t55 = ((x301%(x302*x303))&x304);

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x305 = INT16_MIN;
	int64_t x306 = -1LL;
	volatile int32_t x307 = -17137;
	int64_t t56 = INT64_MIN;

	t56 = ((x305%(x306*x307))&x308);

	if (t56 != INT64_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x309 = 1U;
	uint16_t x311 = 283U;
	uint16_t x312 = 1017U;

	t57 = ((x309%(x310*x311))&x312);

	if (t57 != 1LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x314 = INT32_MIN;
	uint8_t x315 = 1U;
	static int16_t x316 = 0;
	int32_t t58 = 1978;

	t58 = ((x313%(x314*x315))&x316);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x317 = INT64_MIN;
	int8_t x319 = -1;
	volatile int64_t x320 = INT64_MIN;
	volatile int64_t t59 = INT64_MIN;

	t59 = ((x317%(x318*x319))&x320);

	if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int16_t x333 = -1;
	int8_t x334 = INT8_MIN;
	uint32_t x335 = UINT32_MAX;
	uint64_t x336 = UINT64_MAX;
	volatile uint64_t t60 = 31523LLU;

	t60 = ((x333%(x334*x335))&x336);

	if (t60 != 127LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x338 = -1;
	static volatile int8_t x340 = -1;
	int32_t t61 = 2951707;

	t61 = ((x337%(x338*x339))&x340);

	if (t61 != -28) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x341 = 3;
	uint16_t x342 = UINT16_MAX;
	volatile int16_t x343 = INT16_MIN;
	volatile uint32_t x344 = UINT32_MAX;
	uint32_t t62 = 22U;

	t62 = ((x341%(x342*x343))&x344);

	if (t62 != 3U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x345 = INT8_MIN;
	uint32_t x347 = UINT32_MAX;
	int32_t x348 = 513365786;
	volatile uint32_t t63 = 119905139U;

	t63 = ((x345%(x346*x347))&x348);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x354 = INT16_MAX;
	int8_t x355 = INT8_MIN;
	volatile int16_t x356 = 4414;
	int32_t t64 = 0;

	t64 = ((x353%(x354*x355))&x356);

	if (t64 != 266) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x357 = 5382471374432955LLU;
	uint16_t x358 = UINT16_MAX;
	volatile int8_t x359 = -1;
	uint32_t x360 = 318U;
	volatile uint64_t t65 = 1970966629028228LLU;

	t65 = ((x357%(x358*x359))&x360);

	if (t65 != 58LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x361 = -1;
	volatile uint64_t x362 = 123503675LLU;
	int16_t x363 = INT16_MIN;
	volatile uint64_t t66 = 3508768643482LLU;

	t66 = ((x361%(x362*x363))&x364);

	if (t66 != 4046968422399LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x365 = INT16_MIN;
	uint8_t x366 = UINT8_MAX;
	static int64_t x368 = INT64_MAX;
	int64_t t67 = -413678970303275510LL;

	t67 = ((x365%(x366*x367))&x368);

	if (t67 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x370 = -9;
	int32_t x372 = 2;
	int32_t t68 = 0;

	t68 = ((x369%(x370*x371))&x372);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x373 = 5;
	uint64_t x374 = UINT64_MAX;
	static int8_t x375 = INT8_MIN;
	uint32_t x376 = 1294084792U;
	volatile uint64_t t69 = 8028513597588778033LLU;

	t69 = ((x373%(x374*x375))&x376);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x377 = INT32_MAX;
	volatile int16_t x378 = INT16_MIN;
	int8_t x379 = -6;
	int32_t x380 = -1;
	int32_t t70 = 2020;

	t70 = ((x377%(x378*x379))&x380);

	if (t70 != 131071) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x382 = INT8_MIN;
	volatile int64_t x383 = -10140522540204LL;
	int64_t t71 = 104524LL;

	t71 = ((x381%(x382*x383))&x384);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x389 = -1;
	volatile int8_t x390 = INT8_MIN;
	int16_t x391 = 689;
	int8_t x392 = 0;
	volatile int32_t t72 = -43178578;

	t72 = ((x389%(x390*x391))&x392);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x393 = 1831;
	static uint64_t x394 = UINT64_MAX;
	int64_t x395 = INT64_MIN;
	static volatile uint64_t t73 = 8782362584LLU;

	t73 = ((x393%(x394*x395))&x396);

	if (t73 != 36LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x398 = -1;
	static int16_t x399 = -3;
	int16_t x400 = -1;
	static volatile int64_t t74 = -7803LL;

	t74 = ((x397%(x398*x399))&x400);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x433 = 219317078226647LL;
	int8_t x434 = -1;
	int32_t x435 = -1;
	uint8_t x436 = 4U;

	t75 = ((x433%(x434*x435))&x436);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x437 = -1LL;
	int16_t x439 = -12057;
	static uint16_t x440 = 414U;
	volatile int64_t t76 = 15901LL;

	t76 = ((x437%(x438*x439))&x440);

	if (t76 != 414LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x447 = 315681623134988LL;
	int16_t x448 = -169;
	static volatile int64_t t77 = 5285962131437912LL;

	t77 = ((x445%(x446*x447))&x448);

	if (t77 != -169LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x449 = UINT64_MAX;
	volatile uint64_t x450 = UINT64_MAX;
	static uint8_t x451 = 16U;
	int16_t x452 = 2547;
	uint64_t t78 = 202349192LLU;

	t78 = ((x449%(x450*x451))&x452);

	if (t78 != 3LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x455 = 13U;
	int64_t x456 = INT64_MIN;
	volatile int64_t t79 = INT64_MIN;

	t79 = ((x453%(x454*x455))&x456);

	if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x461 = 119U;
	int8_t x462 = -1;
	int8_t x463 = -50;
	static int64_t x464 = -1LL;
	volatile int64_t t80 = 3177674LL;

	t80 = ((x461%(x462*x463))&x464);

	if (t80 != 19LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x466 = -1;
	static int16_t x467 = 7893;
	static int64_t x468 = INT64_MAX;
	volatile int64_t t81 = 1LL;

	t81 = ((x465%(x466*x467))&x468);

	if (t81 != 9223372036854772242LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x469 = INT64_MIN;
	volatile int64_t x471 = -279LL;
	int64_t t82 = -472721LL;

	t82 = ((x469%(x470*x471))&x472);

	if (t82 != 2137LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x473 = 1607042841197LLU;
	static volatile int64_t x474 = -32062216853937488LL;
	int8_t x475 = 1;
	static volatile uint64_t t83 = 2515347LLU;

	t83 = ((x473%(x474*x475))&x476);

	if (t83 != 109LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x477 = INT32_MIN;
	int8_t x478 = -1;
	volatile uint16_t x479 = 128U;
	int32_t x480 = 5918;
	static int32_t t84 = 5613551;

	t84 = ((x477%(x478*x479))&x480);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x481 = 31U;
	volatile int16_t x482 = INT16_MIN;
	static int16_t x483 = INT16_MIN;
	static volatile int8_t x484 = INT8_MIN;

	t85 = ((x481%(x482*x483))&x484);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x485 = INT16_MAX;
	uint32_t x486 = 1819U;
	uint64_t x487 = 882676952LLU;
	int8_t x488 = -1;
	uint64_t t86 = 120522533079610LLU;

	t86 = ((x485%(x486*x487))&x488);

	if (t86 != 32767LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x493 = INT32_MIN;
	uint64_t x494 = 62436863629LLU;
	uint8_t x496 = 3U;
	volatile uint64_t t87 = 60159256LLU;

	t87 = ((x493%(x494*x495))&x496);

	if (t87 != 1LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x501 = 334U;
	static int16_t x502 = -1;
	volatile int64_t x503 = -1047269880290LL;
	static int64_t t88 = -106908LL;

	t88 = ((x501%(x502*x503))&x504);

	if (t88 != 334LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x509 = INT32_MIN;
	static int16_t x510 = 15495;
	volatile int32_t x511 = -8137;
	static uint32_t x512 = 2193430U;

	t89 = ((x509%(x510*x511))&x512);

	if (t89 != 83974U) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x515 = UINT64_MAX;
	uint64_t t90 = 46211048974845250LLU;

	t90 = ((x513%(x514*x515))&x516);

	if (t90 != 9252179565182976LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x517 = INT32_MAX;
	uint64_t x519 = UINT64_MAX;

	t91 = ((x517%(x518*x519))&x520);

	if (t91 != 2147483647LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x521 = -7;
	static int16_t x522 = INT16_MIN;
	int8_t x523 = -1;
	int32_t x524 = -1;
	static int32_t t92 = -13;

	t92 = ((x521%(x522*x523))&x524);

	if (t92 != -7) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x533 = -4692891;
	volatile uint64_t x534 = 2917627LLU;
	int16_t x535 = -1;
	static int8_t x536 = INT8_MAX;

	t93 = ((x533%(x534*x535))&x536);

	if (t93 != 101LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x546 = INT16_MAX;
	volatile uint32_t x547 = 2U;
	int64_t x548 = INT64_MIN;
	static volatile int64_t t94 = -1742273648LL;

	t94 = ((x545%(x546*x547))&x548);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x549 = UINT32_MAX;
	static uint32_t x550 = 13167U;
	volatile uint16_t x551 = 507U;
	int16_t x552 = -202;
	uint32_t t95 = 253489846U;

	t95 = ((x549%(x550*x551))&x552);

	if (t95 != 2512128U) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x557 = -1LL;
	int64_t x558 = 120LL;
	int64_t x560 = -7120865881296341LL;
	volatile int64_t t96 = -152244LL;

	t96 = ((x557%(x558*x559))&x560);

	if (t96 != -7120865881296341LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x566 = 2024416U;
	int8_t x567 = INT8_MIN;
	int64_t x568 = INT64_MIN;
	volatile int64_t t97 = 20794365311LL;

	t97 = ((x565%(x566*x567))&x568);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x569 = -209648277;
	int16_t x571 = 60;
	static int8_t x572 = INT8_MAX;
	int32_t t98 = 435185;

	t98 = ((x569%(x570*x571))&x572);

	if (t98 != 11) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x574 = -1;
	int64_t x576 = -2LL;
	volatile int64_t t99 = -5711184LL;

	t99 = ((x573%(x574*x575))&x576);

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

