#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x4 = 7734U;
int32_t t0 = -2578663;
int8_t x13 = INT8_MAX;
volatile int32_t t3 = 17785;
int32_t x30 = -9808;
volatile int8_t x47 = INT8_MIN;
uint64_t x50 = 765449365688LLU;
int64_t x52 = INT64_MIN;
static int32_t t8 = -1225;
static int16_t x60 = INT16_MAX;
volatile int8_t x70 = 0;
uint8_t x84 = 3U;
static int32_t t14 = -1870;
volatile int32_t t15 = 984942512;
int32_t t18 = -3525117;
int32_t x104 = 5074;
static int16_t x112 = INT16_MIN;
static int64_t x114 = -1LL;
uint16_t x125 = 0U;
static uint8_t x133 = 0U;
static int8_t x143 = INT8_MAX;
int32_t t28 = -1;
int64_t x157 = -1LL;
volatile int32_t t32 = -33731700;
volatile int32_t t34 = 0;
static volatile uint64_t x185 = 4273066217LLU;
int8_t x193 = INT8_MIN;
uint16_t x197 = 89U;
int8_t x200 = INT8_MAX;
int64_t x203 = INT64_MIN;
int32_t t42 = -2680;
int32_t x227 = INT32_MIN;
uint64_t x228 = 510704746815413225LLU;
volatile int32_t t48 = 1975164;
static int64_t x272 = -737038137017306LL;
int32_t t52 = -232992861;
volatile int32_t x274 = -1;
volatile int32_t x278 = -1;
uint32_t x281 = UINT32_MAX;
int16_t x299 = INT16_MIN;
uint64_t x310 = 2162147LLU;
int32_t t60 = -72954452;
static volatile uint16_t x329 = 23U;
int32_t x337 = INT32_MAX;
volatile uint32_t x338 = 209U;
int32_t x339 = INT32_MAX;
int16_t x340 = 115;
volatile int32_t t63 = -3649;
int8_t x343 = -3;
uint16_t x344 = 11302U;
int8_t x347 = -1;
volatile int32_t x353 = 2111878;
int64_t x354 = -1LL;
volatile int32_t t66 = -40;
uint32_t x369 = 8U;
static int8_t x370 = INT8_MAX;
static int64_t x378 = 14096773442845919LL;
int64_t x379 = INT64_MAX;
int8_t x382 = INT8_MIN;
int8_t x386 = INT8_MIN;
int32_t t74 = 7;
volatile uint64_t x400 = UINT64_MAX;
static int32_t t77 = 17382;
int16_t x425 = INT16_MIN;
volatile uint8_t x431 = 1U;
int32_t t80 = 12;
int8_t x433 = 0;
volatile uint64_t x443 = 1882LLU;
uint8_t x444 = 2U;
uint32_t x445 = UINT32_MAX;
static int16_t x448 = -1;
volatile int64_t x455 = INT64_MIN;
int32_t t85 = 1;
volatile int32_t t86 = 5056209;
volatile uint32_t x466 = 47U;
static volatile int32_t t87 = -544;
int32_t x473 = 768;
int8_t x480 = -1;
int16_t x482 = INT16_MAX;
int8_t x484 = -1;
int32_t x486 = INT32_MIN;
uint32_t x500 = UINT32_MAX;
int32_t t94 = 66595088;
int16_t x506 = -4699;
volatile int32_t t96 = 97;
int32_t x510 = 796497176;
volatile int8_t x517 = 3;
int32_t t99 = 17970175;


void f0(void) {
	int32_t x1 = 1;
	int16_t x2 = INT16_MIN;
	volatile int64_t x3 = -35965418719LL;

	t0 = ((x1*x2)==(x3^x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	uint16_t x6 = 11647U;
	static int8_t x7 = INT8_MIN;
	static volatile uint32_t x8 = 230U;
	volatile int32_t t1 = 36;

	t1 = ((x5*x6)==(x7^x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int8_t x14 = 13;
	static uint8_t x15 = 28U;
	uint32_t x16 = 480494183U;
	int32_t t2 = 8;

	t2 = ((x13*x14)==(x15^x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x25 = 111U;
	static uint32_t x26 = 33345U;
	uint32_t x27 = 3425338U;
	static int64_t x28 = INT64_MIN;

	t3 = ((x25*x26)==(x27^x28));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x29 = 889U;
	static int64_t x31 = INT64_MAX;
	uint8_t x32 = 20U;
	volatile int32_t t4 = 6445032;

	t4 = ((x29*x30)==(x31^x32));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x37 = 5326;
	int8_t x38 = -4;
	uint8_t x39 = 2U;
	int16_t x40 = -7810;
	volatile int32_t t5 = 1008873;

	t5 = ((x37*x38)==(x39^x40));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x45 = -1;
	uint16_t x46 = 27193U;
	int32_t x48 = -11435632;
	static volatile int32_t t6 = 9678829;

	t6 = ((x45*x46)==(x47^x48));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x49 = INT16_MIN;
	volatile uint64_t x51 = 177570851270065LLU;
	int32_t t7 = -4;

	t7 = ((x49*x50)==(x51^x52));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x53 = -1LL;
	static int16_t x54 = 29;
	int16_t x55 = -216;
	int32_t x56 = -219;

	t8 = ((x53*x54)==(x55^x56));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x57 = 125U;
	static uint32_t x58 = 14562067U;
	uint32_t x59 = 26296562U;
	static volatile int32_t t9 = -8580124;

	t9 = ((x57*x58)==(x59^x60));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x61 = 662345388LLU;
	static int16_t x62 = INT16_MIN;
	int64_t x63 = INT64_MIN;
	uint64_t x64 = 0LLU;
	volatile int32_t t10 = 5;

	t10 = ((x61*x62)==(x63^x64));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x65 = INT8_MAX;
	uint16_t x66 = UINT16_MAX;
	static uint16_t x67 = UINT16_MAX;
	static int8_t x68 = INT8_MAX;
	int32_t t11 = -27343256;

	t11 = ((x65*x66)==(x67^x68));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x69 = INT32_MIN;
	uint8_t x71 = 2U;
	int8_t x72 = INT8_MAX;
	volatile int32_t t12 = 2;

	t12 = ((x69*x70)==(x71^x72));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x73 = INT8_MIN;
	int16_t x74 = INT16_MIN;
	static uint64_t x75 = 103099697780494072LLU;
	int64_t x76 = -7112526539LL;
	volatile int32_t t13 = -996;

	t13 = ((x73*x74)==(x75^x76));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x81 = UINT64_MAX;
	int8_t x82 = -1;
	static uint8_t x83 = 2U;

	t14 = ((x81*x82)==(x83^x84));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x85 = -173;
	int16_t x86 = -1;
	int16_t x87 = -1;
	uint16_t x88 = 235U;

	t15 = ((x85*x86)==(x87^x88));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x89 = 547154544988810LLU;
	int16_t x90 = INT16_MAX;
	int16_t x91 = -779;
	static int32_t x92 = INT32_MIN;
	volatile int32_t t16 = -96696;

	t16 = ((x89*x90)==(x91^x92));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x93 = INT8_MIN;
	uint16_t x94 = UINT16_MAX;
	static int8_t x95 = INT8_MIN;
	int32_t x96 = INT32_MAX;
	static int32_t t17 = 2;

	t17 = ((x93*x94)==(x95^x96));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x97 = 4;
	int16_t x98 = 8257;
	uint32_t x99 = 27U;
	int64_t x100 = 1LL;

	t18 = ((x97*x98)==(x99^x100));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x101 = 0;
	int16_t x102 = 15;
	int8_t x103 = 1;
	int32_t t19 = -518;

	t19 = ((x101*x102)==(x103^x104));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x105 = -1;
	volatile int64_t x106 = 149541640LL;
	int8_t x107 = INT8_MAX;
	int64_t x108 = -1LL;
	static int32_t t20 = -387016;

	t20 = ((x105*x106)==(x107^x108));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x109 = -1;
	int64_t x110 = INT64_MAX;
	uint8_t x111 = 0U;
	volatile int32_t t21 = -378;

	t21 = ((x109*x110)==(x111^x112));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x113 = INT8_MAX;
	int32_t x115 = INT32_MIN;
	uint32_t x116 = 58U;
	volatile int32_t t22 = -1494;

	t22 = ((x113*x114)==(x115^x116));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x126 = INT32_MIN;
	int32_t x127 = INT32_MIN;
	uint32_t x128 = 8U;
	static volatile int32_t t23 = -10;

	t23 = ((x125*x126)==(x127^x128));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x129 = UINT64_MAX;
	volatile uint16_t x130 = UINT16_MAX;
	uint64_t x131 = 243LLU;
	int8_t x132 = -1;
	int32_t t24 = -4679091;

	t24 = ((x129*x130)==(x131^x132));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x134 = 6006808U;
	int16_t x135 = INT16_MIN;
	int64_t x136 = 7688528899844678LL;
	int32_t t25 = 312251;

	t25 = ((x133*x134)==(x135^x136));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x141 = UINT16_MAX;
	static volatile uint64_t x142 = UINT64_MAX;
	int8_t x144 = INT8_MIN;
	volatile int32_t t26 = -52511083;

	t26 = ((x141*x142)==(x143^x144));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x145 = 0U;
	int32_t x146 = -1;
	int32_t x147 = -114131015;
	int64_t x148 = 31867378858235462LL;
	volatile int32_t t27 = -3;

	t27 = ((x145*x146)==(x147^x148));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x149 = 962191LLU;
	uint64_t x150 = 11948657LLU;
	static uint16_t x151 = 1688U;
	int32_t x152 = INT32_MIN;

	t28 = ((x149*x150)==(x151^x152));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x153 = UINT8_MAX;
	volatile int32_t x154 = 1785;
	int8_t x155 = INT8_MIN;
	int16_t x156 = -1;
	static int32_t t29 = -30850;

	t29 = ((x153*x154)==(x155^x156));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x158 = -1;
	int8_t x159 = -1;
	uint32_t x160 = 14U;
	volatile int32_t t30 = -2;

	t30 = ((x157*x158)==(x159^x160));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x161 = 218;
	static int8_t x162 = INT8_MAX;
	volatile uint8_t x163 = UINT8_MAX;
	uint8_t x164 = UINT8_MAX;
	volatile int32_t t31 = 15510074;

	t31 = ((x161*x162)==(x163^x164));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x165 = INT16_MIN;
	int8_t x166 = 7;
	volatile int32_t x167 = 57752;
	int64_t x168 = 41617027002156LL;

	t32 = ((x165*x166)==(x167^x168));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x169 = 7U;
	uint64_t x170 = UINT64_MAX;
	static uint32_t x171 = UINT32_MAX;
	int16_t x172 = INT16_MIN;
	volatile int32_t t33 = 2808;

	t33 = ((x169*x170)==(x171^x172));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x173 = UINT32_MAX;
	int32_t x174 = 6780030;
	volatile int64_t x175 = INT64_MIN;
	static int16_t x176 = INT16_MIN;

	t34 = ((x173*x174)==(x175^x176));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x177 = -2419212;
	volatile uint8_t x178 = UINT8_MAX;
	uint8_t x179 = 0U;
	int64_t x180 = 19285958LL;
	volatile int32_t t35 = -1;

	t35 = ((x177*x178)==(x179^x180));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x181 = 331519489U;
	volatile uint8_t x182 = UINT8_MAX;
	volatile uint32_t x183 = UINT32_MAX;
	int32_t x184 = -457962860;
	volatile int32_t t36 = 207319;

	t36 = ((x181*x182)==(x183^x184));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x186 = -1;
	int32_t x187 = -1;
	int64_t x188 = -1LL;
	static int32_t t37 = 263197;

	t37 = ((x185*x186)==(x187^x188));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x189 = 48;
	uint64_t x190 = UINT64_MAX;
	uint8_t x191 = 1U;
	int8_t x192 = -1;
	int32_t t38 = -19398631;

	t38 = ((x189*x190)==(x191^x192));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x194 = INT16_MAX;
	int32_t x195 = INT32_MAX;
	uint8_t x196 = UINT8_MAX;
	volatile int32_t t39 = -46542298;

	t39 = ((x193*x194)==(x195^x196));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x198 = INT8_MIN;
	int64_t x199 = INT64_MIN;
	volatile int32_t t40 = 5351324;

	t40 = ((x197*x198)==(x199^x200));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x201 = UINT32_MAX;
	volatile int8_t x202 = INT8_MAX;
	int32_t x204 = INT32_MAX;
	volatile int32_t t41 = -808105;

	t41 = ((x201*x202)==(x203^x204));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x205 = 21U;
	int8_t x206 = INT8_MIN;
	volatile uint16_t x207 = 384U;
	volatile uint32_t x208 = 746489647U;

	t42 = ((x205*x206)==(x207^x208));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x209 = 1LL;
	uint8_t x210 = UINT8_MAX;
	int16_t x211 = INT16_MIN;
	uint8_t x212 = 104U;
	int32_t t43 = 12950;

	t43 = ((x209*x210)==(x211^x212));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x213 = -1;
	volatile uint32_t x214 = 12U;
	int32_t x215 = INT32_MAX;
	static uint64_t x216 = UINT64_MAX;
	int32_t t44 = 106135;

	t44 = ((x213*x214)==(x215^x216));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x217 = 22763U;
	uint8_t x218 = 40U;
	int32_t x219 = -1;
	static int64_t x220 = -1LL;
	volatile int32_t t45 = -6637452;

	t45 = ((x217*x218)==(x219^x220));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x225 = INT16_MAX;
	int8_t x226 = INT8_MIN;
	static int32_t t46 = -1642479;

	t46 = ((x225*x226)==(x227^x228));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x233 = 1U;
	uint16_t x234 = 761U;
	volatile uint64_t x235 = 30068LLU;
	uint8_t x236 = UINT8_MAX;
	int32_t t47 = 121551;

	t47 = ((x233*x234)==(x235^x236));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x237 = 2U;
	int16_t x238 = INT16_MAX;
	uint32_t x239 = UINT32_MAX;
	int8_t x240 = -1;

	t48 = ((x237*x238)==(x239^x240));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x241 = UINT16_MAX;
	int64_t x242 = 16262149LL;
	int32_t x243 = 7762;
	static int8_t x244 = -1;
	volatile int32_t t49 = -33205;

	t49 = ((x241*x242)==(x243^x244));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x249 = 13504U;
	int64_t x250 = 334265233LL;
	int16_t x251 = INT16_MAX;
	int16_t x252 = INT16_MIN;
	int32_t t50 = 6374;

	t50 = ((x249*x250)==(x251^x252));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x261 = 1;
	int8_t x262 = 1;
	int16_t x263 = INT16_MAX;
	int32_t x264 = 352917709;
	volatile int32_t t51 = 76916;

	t51 = ((x261*x262)==(x263^x264));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x269 = -1LL;
	static int64_t x270 = -967LL;
	int16_t x271 = -1;

	t52 = ((x269*x270)==(x271^x272));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x273 = INT64_MAX;
	uint64_t x275 = 1183LLU;
	static int32_t x276 = -1;
	int32_t t53 = -2962;

	t53 = ((x273*x274)==(x275^x276));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x277 = INT8_MAX;
	static int32_t x279 = 2089;
	uint8_t x280 = 45U;
	int32_t t54 = 60;

	t54 = ((x277*x278)==(x279^x280));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x282 = INT16_MAX;
	static int16_t x283 = INT16_MIN;
	volatile int32_t x284 = INT32_MIN;
	int32_t t55 = -19876;

	t55 = ((x281*x282)==(x283^x284));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x289 = INT8_MIN;
	volatile uint64_t x290 = 28008LLU;
	int64_t x291 = 3429660070141499823LL;
	uint32_t x292 = UINT32_MAX;
	volatile int32_t t56 = 6902;

	t56 = ((x289*x290)==(x291^x292));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x293 = -1;
	static int8_t x294 = INT8_MAX;
	int64_t x295 = -745883942826254LL;
	int64_t x296 = -56LL;
	volatile int32_t t57 = -780532;

	t57 = ((x293*x294)==(x295^x296));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x297 = INT16_MIN;
	int64_t x298 = -49927634301498LL;
	static int8_t x300 = INT8_MIN;
	volatile int32_t t58 = 1417;

	t58 = ((x297*x298)==(x299^x300));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x305 = 11347U;
	volatile int8_t x306 = -12;
	int64_t x307 = -28LL;
	static uint16_t x308 = 3U;
	int32_t t59 = 5788;

	t59 = ((x305*x306)==(x307^x308));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x309 = INT8_MAX;
	int16_t x311 = -1;
	int8_t x312 = -60;

	t60 = ((x309*x310)==(x311^x312));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x330 = INT8_MIN;
	static int8_t x331 = 0;
	volatile int8_t x332 = INT8_MIN;
	int32_t t61 = -117;

	t61 = ((x329*x330)==(x331^x332));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x333 = -1;
	static int64_t x334 = INT64_MAX;
	int16_t x335 = -1;
	static int32_t x336 = INT32_MAX;
	volatile int32_t t62 = 14089;

	t62 = ((x333*x334)==(x335^x336));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {


	t63 = ((x337*x338)==(x339^x340));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x341 = -8213161;
	volatile int8_t x342 = -1;
	volatile int32_t t64 = 106476;

	t64 = ((x341*x342)==(x343^x344));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x345 = UINT64_MAX;
	uint16_t x346 = 8U;
	uint8_t x348 = 2U;
	volatile int32_t t65 = 26741810;

	t65 = ((x345*x346)==(x347^x348));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x355 = 1;
	int32_t x356 = 504279982;

	t66 = ((x353*x354)==(x355^x356));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint32_t x357 = 24570360U;
	volatile uint32_t x358 = 238077U;
	int8_t x359 = INT8_MIN;
	int16_t x360 = INT16_MIN;
	int32_t t67 = -51132;

	t67 = ((x357*x358)==(x359^x360));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x361 = 9468673986857082LLU;
	int64_t x362 = -1LL;
	int64_t x363 = INT64_MIN;
	static int32_t x364 = INT32_MIN;
	volatile int32_t t68 = -256730;

	t68 = ((x361*x362)==(x363^x364));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x371 = INT8_MIN;
	static uint64_t x372 = UINT64_MAX;
	volatile int32_t t69 = -236949250;

	t69 = ((x369*x370)==(x371^x372));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x373 = 145U;
	int16_t x374 = INT16_MIN;
	volatile int16_t x375 = 5207;
	static uint64_t x376 = UINT64_MAX;
	int32_t t70 = 968;

	t70 = ((x373*x374)==(x375^x376));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x377 = 27U;
	uint16_t x380 = 28U;
	static int32_t t71 = -1;

	t71 = ((x377*x378)==(x379^x380));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x381 = 27576;
	int8_t x383 = INT8_MIN;
	uint64_t x384 = 319883482335214LLU;
	volatile int32_t t72 = -1;

	t72 = ((x381*x382)==(x383^x384));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x385 = -1LL;
	int32_t x387 = -425235;
	static int16_t x388 = INT16_MAX;
	volatile int32_t t73 = 89;

	t73 = ((x385*x386)==(x387^x388));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x389 = 11841U;
	uint32_t x390 = 8U;
	static int64_t x391 = -2LL;
	volatile uint32_t x392 = 5498993U;

	t74 = ((x389*x390)==(x391^x392));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x397 = -1;
	uint64_t x398 = 16416421900LLU;
	volatile int8_t x399 = 15;
	volatile int32_t t75 = 37437;

	t75 = ((x397*x398)==(x399^x400));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int8_t x409 = -29;
	uint16_t x410 = UINT16_MAX;
	uint16_t x411 = 185U;
	int32_t x412 = 30478636;
	int32_t t76 = 1;

	t76 = ((x409*x410)==(x411^x412));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x417 = UINT64_MAX;
	static int8_t x418 = -50;
	volatile int8_t x419 = INT8_MAX;
	static int32_t x420 = INT32_MIN;

	t77 = ((x417*x418)==(x419^x420));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x421 = UINT16_MAX;
	int64_t x422 = -1LL;
	uint32_t x423 = 3U;
	uint64_t x424 = 23483145457394LLU;
	static int32_t t78 = -1;

	t78 = ((x421*x422)==(x423^x424));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x426 = 1996707754659LLU;
	int64_t x427 = INT64_MAX;
	int32_t x428 = INT32_MAX;
	volatile int32_t t79 = -148722184;

	t79 = ((x425*x426)==(x427^x428));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x429 = 478U;
	uint32_t x430 = 267018976U;
	uint16_t x432 = 7752U;

	t80 = ((x429*x430)==(x431^x432));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x434 = -1;
	volatile uint16_t x435 = 82U;
	int8_t x436 = -1;
	static int32_t t81 = -16;

	t81 = ((x433*x434)==(x435^x436));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x441 = UINT64_MAX;
	uint64_t x442 = 45532017301444LLU;
	int32_t t82 = -418339806;

	t82 = ((x441*x442)==(x443^x444));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x446 = UINT64_MAX;
	int32_t x447 = 53327;
	volatile int32_t t83 = 495;

	t83 = ((x445*x446)==(x447^x448));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x453 = UINT64_MAX;
	uint16_t x454 = 6U;
	int16_t x456 = -2915;
	volatile int32_t t84 = 2534;

	t84 = ((x453*x454)==(x455^x456));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x457 = INT32_MIN;
	uint8_t x458 = 0U;
	int8_t x459 = -1;
	uint16_t x460 = 90U;

	t85 = ((x457*x458)==(x459^x460));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x461 = -285494LL;
	int32_t x462 = -1;
	uint16_t x463 = UINT16_MAX;
	static volatile int8_t x464 = INT8_MIN;

	t86 = ((x461*x462)==(x463^x464));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x465 = INT8_MIN;
	int64_t x467 = INT64_MIN;
	int32_t x468 = INT32_MIN;

	t87 = ((x465*x466)==(x467^x468));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x469 = -1359;
	volatile uint8_t x470 = 1U;
	static int32_t x471 = INT32_MAX;
	uint32_t x472 = 44095784U;
	volatile int32_t t88 = 2133;

	t88 = ((x469*x470)==(x471^x472));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x474 = INT16_MAX;
	volatile int64_t x475 = INT64_MAX;
	uint32_t x476 = UINT32_MAX;
	int32_t t89 = -369;

	t89 = ((x473*x474)==(x475^x476));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x477 = -1;
	volatile int32_t x478 = INT32_MAX;
	int16_t x479 = 5;
	int32_t t90 = -54798;

	t90 = ((x477*x478)==(x479^x480));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x481 = UINT64_MAX;
	uint64_t x483 = 1644672327LLU;
	volatile int32_t t91 = 61725;

	t91 = ((x481*x482)==(x483^x484));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x485 = -3LL;
	uint64_t x487 = 1497LLU;
	int8_t x488 = INT8_MIN;
	volatile int32_t t92 = 6221;

	t92 = ((x485*x486)==(x487^x488));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x493 = INT64_MAX;
	int16_t x494 = 0;
	uint64_t x495 = 382631LLU;
	int64_t x496 = INT64_MIN;
	int32_t t93 = 1778458;

	t93 = ((x493*x494)==(x495^x496));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x497 = 458U;
	static uint8_t x498 = UINT8_MAX;
	int64_t x499 = INT64_MIN;

	t94 = ((x497*x498)==(x499^x500));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x501 = -1;
	int8_t x502 = INT8_MAX;
	static int64_t x503 = 1921268897LL;
	uint8_t x504 = UINT8_MAX;
	int32_t t95 = 23;

	t95 = ((x501*x502)==(x503^x504));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x505 = -194687449083LL;
	int32_t x507 = INT32_MIN;
	volatile int32_t x508 = INT32_MAX;

	t96 = ((x505*x506)==(x507^x508));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x509 = 44215U;
	volatile int32_t x511 = 81958076;
	static uint32_t x512 = UINT32_MAX;
	int32_t t97 = -82;

	t97 = ((x509*x510)==(x511^x512));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x513 = UINT32_MAX;
	volatile int8_t x514 = 1;
	uint8_t x515 = 0U;
	uint32_t x516 = 1U;
	int32_t t98 = 33579;

	t98 = ((x513*x514)==(x515^x516));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x518 = 123346409727879LL;
	int32_t x519 = 1794;
	volatile uint8_t x520 = 7U;

	t99 = ((x517*x518)==(x519^x520));

	if (t99 != 0) { NG(); } else { ; }
	
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

