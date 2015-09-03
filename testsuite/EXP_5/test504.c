#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = INT16_MAX;
int8_t x5 = INT8_MIN;
static uint32_t x14 = 1U;
uint16_t x16 = 16346U;
int16_t x18 = INT16_MIN;
int16_t x30 = -1;
uint16_t x31 = 1U;
volatile int32_t t6 = -4889924;
volatile uint8_t x34 = 3U;
uint8_t x49 = 67U;
static volatile uint32_t x52 = 21U;
int8_t x55 = -1;
static int16_t x61 = INT16_MIN;
volatile int8_t x63 = 1;
static int32_t x67 = 0;
int64_t x76 = -10LL;
volatile int16_t x85 = INT16_MAX;
volatile int16_t x94 = INT16_MIN;
volatile int32_t t17 = 289439;
static volatile int64_t x103 = INT64_MAX;
int32_t t18 = 683815;
volatile uint64_t x105 = 356LLU;
uint8_t x121 = 6U;
int32_t x130 = 26;
int32_t x146 = -1;
static int8_t x148 = INT8_MAX;
static int32_t t25 = 184977;
int64_t x161 = INT64_MIN;
volatile uint64_t x163 = 257933299958LLU;
volatile int32_t t27 = -50;
static int8_t x165 = -1;
int8_t x166 = INT8_MIN;
int64_t x168 = -1LL;
int32_t t28 = -848282272;
uint64_t x169 = 8338574LLU;
int16_t x172 = -1;
static volatile int64_t x174 = -12095813625495LL;
int8_t x177 = 60;
uint64_t x182 = UINT64_MAX;
static volatile int32_t x185 = 3;
uint16_t x224 = 117U;
int32_t t40 = 641;
int64_t x240 = INT64_MAX;
volatile int32_t t42 = -5;
int64_t x250 = -1LL;
volatile int8_t x256 = INT8_MIN;
volatile uint16_t x259 = UINT16_MAX;
int16_t x263 = -502;
uint8_t x269 = 7U;
volatile int8_t x275 = 30;
volatile int32_t t49 = -1;
uint8_t x289 = UINT8_MAX;
volatile int64_t x299 = -1LL;
uint16_t x306 = 2819U;
int64_t x308 = 5758122634692LL;
int16_t x324 = INT16_MIN;
uint8_t x334 = 29U;
int64_t x339 = -1LL;
int32_t x345 = 5981429;
int32_t x362 = -21953;
static volatile int64_t x369 = INT64_MIN;
static int16_t x375 = INT16_MIN;
int32_t t69 = -449;
int64_t x386 = -1LL;
static int16_t x399 = -1;
uint16_t x401 = 0U;
uint64_t x404 = 120696579406303126LLU;
int32_t t76 = 120700;
uint8_t x425 = 14U;
int64_t x426 = -1LL;
uint64_t x434 = 1661720LLU;
uint16_t x437 = 551U;
static int64_t x443 = 29977LL;
static int16_t x445 = -1;
int16_t x453 = -1;
int64_t x462 = -1LL;
uint32_t x463 = 7003U;
volatile int32_t t87 = 10;
int16_t x465 = -1;
int32_t t89 = -32515;
uint64_t x475 = 21652424240389283LLU;
volatile uint64_t x496 = UINT64_MAX;
int64_t x500 = -29900420847LL;
int16_t x505 = -1;
int64_t x511 = -15863169LL;


void f0(void) {
	int8_t x1 = -1;
	uint32_t x3 = 11U;
	int16_t x4 = INT16_MIN;
	volatile int32_t t0 = 737036;

	t0 = (x1<=((x2*x3)^x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x6 = 338278LLU;
	int16_t x7 = -1;
	static int16_t x8 = -1;
	volatile int32_t t1 = -902354;

	t1 = (x5<=((x6*x7)^x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = UINT16_MAX;
	int16_t x10 = -1;
	int8_t x11 = INT8_MIN;
	static volatile uint8_t x12 = 6U;
	volatile int32_t t2 = 121;

	t2 = (x9<=((x10*x11)^x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -9502197317459998LL;
	static volatile uint16_t x15 = 13U;
	volatile int32_t t3 = -31814763;

	t3 = (x13<=((x14*x15)^x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 150U;
	uint32_t x19 = UINT32_MAX;
	int16_t x20 = -35;
	int32_t t4 = -14469173;

	t4 = (x17<=((x18*x19)^x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	volatile int32_t x22 = -1;
	uint16_t x23 = UINT16_MAX;
	int16_t x24 = INT16_MIN;
	int32_t t5 = 517;

	t5 = (x21<=((x22*x23)^x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x29 = 15951520U;
	int64_t x32 = -1LL;

	t6 = (x29<=((x30*x31)^x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = INT64_MIN;
	static volatile uint16_t x35 = 120U;
	volatile int16_t x36 = INT16_MIN;
	volatile int32_t t7 = -6;

	t7 = (x33<=((x34*x35)^x36));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x45 = -1;
	volatile int16_t x46 = INT16_MIN;
	uint8_t x47 = 25U;
	uint64_t x48 = 0LLU;
	static volatile int32_t t8 = -7140;

	t8 = (x45<=((x46*x47)^x48));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x50 = INT64_MAX;
	static int16_t x51 = -1;
	volatile int32_t t9 = -743106615;

	t9 = (x49<=((x50*x51)^x52));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int32_t x53 = -1;
	volatile int16_t x54 = -329;
	int16_t x56 = -1;
	int32_t t10 = -11484;

	t10 = (x53<=((x54*x55)^x56));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x57 = INT16_MIN;
	static int8_t x58 = -1;
	volatile int16_t x59 = INT16_MAX;
	int32_t x60 = 0;
	volatile int32_t t11 = -73;

	t11 = (x57<=((x58*x59)^x60));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x62 = UINT32_MAX;
	int16_t x64 = INT16_MAX;
	int32_t t12 = 1;

	t12 = (x61<=((x62*x63)^x64));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x65 = UINT64_MAX;
	static int16_t x66 = 1;
	volatile uint16_t x68 = 1854U;
	static volatile int32_t t13 = -46897;

	t13 = (x65<=((x66*x67)^x68));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x73 = INT32_MIN;
	int32_t x74 = -7577283;
	static uint8_t x75 = UINT8_MAX;
	volatile int32_t t14 = 111431837;

	t14 = (x73<=((x74*x75)^x76));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x77 = 29428LLU;
	static uint8_t x78 = 42U;
	int8_t x79 = -3;
	int64_t x80 = INT64_MIN;
	volatile int32_t t15 = 636;

	t15 = (x77<=((x78*x79)^x80));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x86 = -1LL;
	uint16_t x87 = 3U;
	volatile uint64_t x88 = UINT64_MAX;
	volatile int32_t t16 = 889177;

	t16 = (x85<=((x86*x87)^x88));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x93 = 190U;
	int8_t x95 = INT8_MAX;
	volatile uint64_t x96 = 1318675382965383662LLU;

	t17 = (x93<=((x94*x95)^x96));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x101 = 6U;
	int8_t x102 = 0;
	uint32_t x104 = 697046U;

	t18 = (x101<=((x102*x103)^x104));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x106 = INT16_MIN;
	volatile uint32_t x107 = 19280939U;
	int16_t x108 = 23;
	int32_t t19 = 10152;

	t19 = (x105<=((x106*x107)^x108));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x113 = 6U;
	int8_t x114 = 10;
	static int8_t x115 = INT8_MIN;
	uint16_t x116 = 1U;
	volatile int32_t t20 = 344734905;

	t20 = (x113<=((x114*x115)^x116));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x122 = 1088U;
	int8_t x123 = 1;
	static int32_t x124 = -1;
	volatile int32_t t21 = -927307;

	t21 = (x121<=((x122*x123)^x124));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x129 = INT64_MAX;
	static int8_t x131 = -23;
	int8_t x132 = INT8_MIN;
	static int32_t t22 = -492267692;

	t22 = (x129<=((x130*x131)^x132));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x133 = -99;
	volatile int16_t x134 = 13;
	uint16_t x135 = 751U;
	volatile uint64_t x136 = UINT64_MAX;
	volatile int32_t t23 = -1179892;

	t23 = (x133<=((x134*x135)^x136));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x141 = -376725531LL;
	uint64_t x142 = UINT64_MAX;
	int64_t x143 = -3768384417217LL;
	static uint16_t x144 = 141U;
	int32_t t24 = 405;

	t24 = (x141<=((x142*x143)^x144));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x145 = -452;
	int16_t x147 = INT16_MAX;

	t25 = (x145<=((x146*x147)^x148));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x157 = UINT32_MAX;
	static uint8_t x158 = 3U;
	volatile int16_t x159 = INT16_MIN;
	int16_t x160 = INT16_MAX;
	static int32_t t26 = 122157044;

	t26 = (x157<=((x158*x159)^x160));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x162 = -4;
	int16_t x164 = 3;

	t27 = (x161<=((x162*x163)^x164));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x167 = 31U;

	t28 = (x165<=((x166*x167)^x168));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x170 = -1;
	static int32_t x171 = -2993021;
	volatile int32_t t29 = 511;

	t29 = (x169<=((x170*x171)^x172));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x173 = 441U;
	static int16_t x175 = INT16_MIN;
	int32_t x176 = INT32_MIN;
	volatile int32_t t30 = -4756;

	t30 = (x173<=((x174*x175)^x176));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x178 = 2931134421660850417LLU;
	volatile int32_t x179 = INT32_MIN;
	uint16_t x180 = UINT16_MAX;
	int32_t t31 = -111922;

	t31 = (x177<=((x178*x179)^x180));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x181 = 1919;
	int64_t x183 = -370992747641863287LL;
	static uint8_t x184 = UINT8_MAX;
	volatile int32_t t32 = 16740067;

	t32 = (x181<=((x182*x183)^x184));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x186 = 56U;
	uint64_t x187 = 15971607103127LLU;
	uint16_t x188 = 1U;
	volatile int32_t t33 = 69681;

	t33 = (x185<=((x186*x187)^x188));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x189 = 6LL;
	volatile int8_t x190 = INT8_MAX;
	static uint8_t x191 = UINT8_MAX;
	int8_t x192 = -1;
	volatile int32_t t34 = -21110872;

	t34 = (x189<=((x190*x191)^x192));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x193 = -222150870;
	int8_t x194 = INT8_MAX;
	static int8_t x195 = INT8_MIN;
	volatile int64_t x196 = INT64_MIN;
	static volatile int32_t t35 = -2;

	t35 = (x193<=((x194*x195)^x196));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x201 = INT8_MIN;
	int32_t x202 = INT32_MAX;
	uint32_t x203 = UINT32_MAX;
	uint32_t x204 = 94419287U;
	static int32_t t36 = -25;

	t36 = (x201<=((x202*x203)^x204));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x209 = INT16_MAX;
	uint8_t x210 = 6U;
	int32_t x211 = 342;
	static uint8_t x212 = UINT8_MAX;
	volatile int32_t t37 = -529842240;

	t37 = (x209<=((x210*x211)^x212));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x213 = INT8_MIN;
	volatile int8_t x214 = INT8_MIN;
	static int8_t x215 = INT8_MAX;
	uint64_t x216 = 807716103887417835LLU;
	static volatile int32_t t38 = 487;

	t38 = (x213<=((x214*x215)^x216));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x221 = 0U;
	static uint8_t x222 = 8U;
	static uint16_t x223 = 58U;
	int32_t t39 = 284551;

	t39 = (x221<=((x222*x223)^x224));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x229 = UINT16_MAX;
	volatile uint8_t x230 = 28U;
	int32_t x231 = -27;
	int64_t x232 = INT64_MIN;

	t40 = (x229<=((x230*x231)^x232));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x233 = 27U;
	uint8_t x234 = 3U;
	volatile int16_t x235 = INT16_MAX;
	uint32_t x236 = 4400321U;
	volatile int32_t t41 = 177834;

	t41 = (x233<=((x234*x235)^x236));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x237 = 469110134;
	static uint16_t x238 = 27U;
	uint32_t x239 = UINT32_MAX;

	t42 = (x237<=((x238*x239)^x240));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x249 = -8105;
	int16_t x251 = INT16_MAX;
	uint32_t x252 = 3995U;
	int32_t t43 = 283212;

	t43 = (x249<=((x250*x251)^x252));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x253 = INT8_MIN;
	uint8_t x254 = UINT8_MAX;
	volatile int8_t x255 = INT8_MIN;
	static int32_t t44 = 1312541;

	t44 = (x253<=((x254*x255)^x256));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x257 = 3614;
	static int16_t x258 = INT16_MAX;
	static volatile uint8_t x260 = UINT8_MAX;
	static volatile int32_t t45 = -32713444;

	t45 = (x257<=((x258*x259)^x260));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x261 = INT16_MIN;
	int16_t x262 = -429;
	static uint64_t x264 = 143880LLU;
	int32_t t46 = -53825570;

	t46 = (x261<=((x262*x263)^x264));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int32_t x265 = 48;
	uint64_t x266 = 1731437034178LLU;
	int64_t x267 = -3509477257035294LL;
	int64_t x268 = INT64_MAX;
	volatile int32_t t47 = -1;

	t47 = (x265<=((x266*x267)^x268));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x270 = INT16_MIN;
	int8_t x271 = INT8_MAX;
	int16_t x272 = INT16_MAX;
	int32_t t48 = 127224852;

	t48 = (x269<=((x270*x271)^x272));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x273 = 6U;
	uint64_t x274 = 18300866445192LLU;
	volatile uint8_t x276 = 29U;

	t49 = (x273<=((x274*x275)^x276));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x277 = UINT8_MAX;
	volatile int64_t x278 = -1LL;
	uint8_t x279 = 2U;
	static int8_t x280 = -1;
	int32_t t50 = -22433;

	t50 = (x277<=((x278*x279)^x280));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x281 = INT64_MAX;
	int64_t x282 = -14544033LL;
	volatile uint8_t x283 = 1U;
	static int8_t x284 = INT8_MAX;
	volatile int32_t t51 = -13227285;

	t51 = (x281<=((x282*x283)^x284));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x290 = 38U;
	volatile int8_t x291 = INT8_MIN;
	static int32_t x292 = -1;
	int32_t t52 = -199;

	t52 = (x289<=((x290*x291)^x292));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x293 = UINT64_MAX;
	uint64_t x294 = 1058299218LLU;
	int32_t x295 = INT32_MIN;
	uint32_t x296 = 31128280U;
	int32_t t53 = -637;

	t53 = (x293<=((x294*x295)^x296));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x297 = 182065313U;
	volatile int16_t x298 = -43;
	int64_t x300 = INT64_MAX;
	int32_t t54 = 5862;

	t54 = (x297<=((x298*x299)^x300));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x301 = 22U;
	int8_t x302 = INT8_MIN;
	int64_t x303 = 1237908709578LL;
	int32_t x304 = INT32_MIN;
	int32_t t55 = -29631;

	t55 = (x301<=((x302*x303)^x304));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x305 = 6313482U;
	uint32_t x307 = 13414U;
	static int32_t t56 = -103710432;

	t56 = (x305<=((x306*x307)^x308));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x309 = -1;
	uint8_t x310 = 1U;
	uint8_t x311 = 31U;
	int8_t x312 = INT8_MIN;
	int32_t t57 = 3;

	t57 = (x309<=((x310*x311)^x312));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x317 = UINT16_MAX;
	volatile uint8_t x318 = 0U;
	volatile uint64_t x319 = 1451717362622483LLU;
	uint16_t x320 = 65U;
	volatile int32_t t58 = 20;

	t58 = (x317<=((x318*x319)^x320));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x321 = -1;
	uint64_t x322 = 43228816255LLU;
	static uint32_t x323 = 8138623U;
	volatile int32_t t59 = 175;

	t59 = (x321<=((x322*x323)^x324));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x333 = UINT64_MAX;
	volatile int16_t x335 = 1;
	uint64_t x336 = UINT64_MAX;
	int32_t t60 = 410436;

	t60 = (x333<=((x334*x335)^x336));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x337 = UINT16_MAX;
	int32_t x338 = INT32_MAX;
	static int16_t x340 = INT16_MIN;
	int32_t t61 = 57827;

	t61 = (x337<=((x338*x339)^x340));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x346 = 1U;
	int64_t x347 = INT64_MIN;
	static int16_t x348 = INT16_MAX;
	int32_t t62 = 14;

	t62 = (x345<=((x346*x347)^x348));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x349 = INT64_MAX;
	int8_t x350 = INT8_MAX;
	uint64_t x351 = 28486328LLU;
	static volatile uint8_t x352 = 9U;
	static volatile int32_t t63 = -1059059;

	t63 = (x349<=((x350*x351)^x352));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x353 = UINT32_MAX;
	static uint32_t x354 = 6U;
	uint16_t x355 = UINT16_MAX;
	int32_t x356 = 12378;
	int32_t t64 = 3535028;

	t64 = (x353<=((x354*x355)^x356));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x361 = INT32_MIN;
	int8_t x363 = INT8_MIN;
	volatile uint32_t x364 = 24U;
	volatile int32_t t65 = 754;

	t65 = (x361<=((x362*x363)^x364));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x365 = 246;
	static int8_t x366 = -1;
	uint32_t x367 = 475U;
	static int32_t x368 = INT32_MIN;
	static int32_t t66 = 0;

	t66 = (x365<=((x366*x367)^x368));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x370 = -1LL;
	volatile uint8_t x371 = 42U;
	volatile int64_t x372 = INT64_MIN;
	int32_t t67 = 15318;

	t67 = (x369<=((x370*x371)^x372));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x373 = -1;
	int16_t x374 = -3;
	uint32_t x376 = UINT32_MAX;
	int32_t t68 = -34493921;

	t68 = (x373<=((x374*x375)^x376));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x377 = 1191182497385975121LLU;
	static int16_t x378 = -15;
	static uint16_t x379 = 9U;
	uint16_t x380 = 0U;

	t69 = (x377<=((x378*x379)^x380));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x381 = -1;
	uint32_t x382 = UINT32_MAX;
	volatile uint16_t x383 = 295U;
	static int64_t x384 = -1LL;
	int32_t t70 = -127244930;

	t70 = (x381<=((x382*x383)^x384));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x385 = 152699844;
	int64_t x387 = -1LL;
	int16_t x388 = 5;
	static int32_t t71 = -6353315;

	t71 = (x385<=((x386*x387)^x388));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x393 = UINT32_MAX;
	uint64_t x394 = 422LLU;
	volatile int8_t x395 = INT8_MIN;
	int8_t x396 = 1;
	volatile int32_t t72 = -797167;

	t72 = (x393<=((x394*x395)^x396));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x397 = INT16_MIN;
	int8_t x398 = -1;
	int16_t x400 = INT16_MIN;
	volatile int32_t t73 = -82;

	t73 = (x397<=((x398*x399)^x400));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x402 = -1;
	uint8_t x403 = 6U;
	volatile int32_t t74 = 972688;

	t74 = (x401<=((x402*x403)^x404));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x409 = INT32_MAX;
	int32_t x410 = 30703;
	volatile uint32_t x411 = 6735307U;
	int32_t x412 = -23;
	volatile int32_t t75 = -113057027;

	t75 = (x409<=((x410*x411)^x412));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x413 = INT64_MAX;
	int16_t x414 = INT16_MIN;
	static int16_t x415 = 49;
	int16_t x416 = -40;

	t76 = (x413<=((x414*x415)^x416));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x417 = 7U;
	uint8_t x418 = 0U;
	volatile uint32_t x419 = 1U;
	static uint32_t x420 = 3329996U;
	int32_t t77 = 1561709;

	t77 = (x417<=((x418*x419)^x420));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x421 = INT16_MAX;
	int8_t x422 = INT8_MIN;
	int32_t x423 = -222484;
	static volatile uint64_t x424 = 435798865503LLU;
	static volatile int32_t t78 = 1427;

	t78 = (x421<=((x422*x423)^x424));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x427 = -1;
	int64_t x428 = 1449LL;
	static volatile int32_t t79 = -23750;

	t79 = (x425<=((x426*x427)^x428));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x429 = INT16_MAX;
	uint32_t x430 = UINT32_MAX;
	int16_t x431 = INT16_MAX;
	volatile int16_t x432 = INT16_MIN;
	int32_t t80 = 1960;

	t80 = (x429<=((x430*x431)^x432));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x433 = INT16_MIN;
	int8_t x435 = 4;
	int16_t x436 = 0;
	volatile int32_t t81 = 616;

	t81 = (x433<=((x434*x435)^x436));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x438 = 23311237LLU;
	uint64_t x439 = 1783522357693619LLU;
	volatile int16_t x440 = -1;
	volatile int32_t t82 = -238621;

	t82 = (x437<=((x438*x439)^x440));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x441 = UINT8_MAX;
	volatile uint32_t x442 = 2513176U;
	uint32_t x444 = UINT32_MAX;
	static volatile int32_t t83 = -1;

	t83 = (x441<=((x442*x443)^x444));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x446 = 1468273LLU;
	int8_t x447 = INT8_MIN;
	volatile int32_t x448 = INT32_MIN;
	static volatile int32_t t84 = 45;

	t84 = (x445<=((x446*x447)^x448));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x454 = INT8_MAX;
	static int64_t x455 = -68092719986LL;
	int64_t x456 = INT64_MIN;
	volatile int32_t t85 = -2461978;

	t85 = (x453<=((x454*x455)^x456));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x457 = -9506LL;
	int32_t x458 = -1;
	uint16_t x459 = 4686U;
	volatile int64_t x460 = -1LL;
	static int32_t t86 = 786467516;

	t86 = (x457<=((x458*x459)^x460));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x461 = INT64_MIN;
	int8_t x464 = 5;

	t87 = (x461<=((x462*x463)^x464));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x466 = -4LL;
	int64_t x467 = 210684636LL;
	int16_t x468 = -158;
	int32_t t88 = -60;

	t88 = (x465<=((x466*x467)^x468));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x469 = UINT16_MAX;
	volatile int16_t x470 = 3;
	uint16_t x471 = 396U;
	int8_t x472 = -1;

	t89 = (x469<=((x470*x471)^x472));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x473 = 6349266LL;
	volatile uint8_t x474 = 22U;
	int64_t x476 = 109811643LL;
	int32_t t90 = -681054;

	t90 = (x473<=((x474*x475)^x476));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x477 = -203;
	static int32_t x478 = -111253;
	uint32_t x479 = 67245047U;
	int32_t x480 = INT32_MIN;
	int32_t t91 = 45;

	t91 = (x477<=((x478*x479)^x480));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x481 = 122912355U;
	volatile uint64_t x482 = UINT64_MAX;
	int8_t x483 = INT8_MIN;
	static uint64_t x484 = UINT64_MAX;
	static volatile int32_t t92 = -679741;

	t92 = (x481<=((x482*x483)^x484));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x485 = INT32_MIN;
	int8_t x486 = INT8_MAX;
	static volatile int8_t x487 = -1;
	static int8_t x488 = INT8_MIN;
	volatile int32_t t93 = -1533835;

	t93 = (x485<=((x486*x487)^x488));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x489 = -34;
	int8_t x490 = INT8_MIN;
	uint64_t x491 = 3937611837LLU;
	int32_t x492 = 197786335;
	static volatile int32_t t94 = -19614;

	t94 = (x489<=((x490*x491)^x492));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int16_t x493 = INT16_MIN;
	int8_t x494 = INT8_MIN;
	uint64_t x495 = UINT64_MAX;
	volatile int32_t t95 = -1;

	t95 = (x493<=((x494*x495)^x496));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x497 = UINT8_MAX;
	volatile uint64_t x498 = 3343769427797440LLU;
	static uint16_t x499 = UINT16_MAX;
	volatile int32_t t96 = 197;

	t96 = (x497<=((x498*x499)^x500));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x501 = INT16_MAX;
	static int8_t x502 = INT8_MIN;
	volatile int8_t x503 = INT8_MAX;
	uint64_t x504 = UINT64_MAX;
	volatile int32_t t97 = 29;

	t97 = (x501<=((x502*x503)^x504));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x506 = -9;
	int8_t x507 = INT8_MIN;
	int8_t x508 = 1;
	int32_t t98 = -392;

	t98 = (x505<=((x506*x507)^x508));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x509 = INT8_MIN;
	int32_t x510 = INT32_MAX;
	int64_t x512 = 521640630LL;
	volatile int32_t t99 = 24;

	t99 = (x509<=((x510*x511)^x512));

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

