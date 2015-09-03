#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x3 = UINT16_MAX;
int8_t x6 = INT8_MAX;
uint8_t x17 = 6U;
int32_t t3 = -12152;
uint64_t x32 = 29619461LLU;
volatile int8_t x35 = INT8_MAX;
volatile int16_t x36 = 14644;
int16_t x37 = INT16_MIN;
uint16_t x43 = 19005U;
volatile int32_t t8 = -1000636;
static int8_t x45 = -1;
int64_t x47 = 7146LL;
int64_t t9 = -31946167188LL;
static volatile int32_t t10 = 14;
static volatile int64_t x55 = INT64_MAX;
int64_t x56 = 26659209226800179LL;
int64_t t11 = -1020640461651238LL;
static int64_t x57 = INT64_MIN;
static int64_t x63 = INT64_MAX;
volatile uint8_t x66 = 35U;
int8_t x70 = INT8_MAX;
int32_t t15 = -1;
uint32_t x73 = 47374529U;
static uint64_t x75 = 44855LLU;
uint64_t x83 = UINT64_MAX;
volatile uint16_t x84 = 1990U;
volatile int16_t x85 = -1;
static volatile int32_t t19 = -55584;
uint16_t x100 = UINT16_MAX;
uint32_t x115 = UINT32_MAX;
int64_t t25 = 84935911738766LL;
int64_t x124 = 10LL;
static volatile int64_t x135 = -547804722643124762LL;
int32_t t29 = 31298;
int64_t x152 = -1LL;
int16_t x156 = INT16_MIN;
uint32_t x168 = 772046823U;
int32_t x169 = INT32_MIN;
int8_t x177 = 13;
volatile int64_t t37 = 45LL;
int64_t x182 = -20602519090LL;
int8_t x185 = INT8_MIN;
static volatile int64_t x188 = INT64_MIN;
static volatile int16_t x193 = -1;
volatile uint64_t t40 = 1743418419518685242LLU;
int32_t x199 = INT32_MAX;
uint64_t x201 = 888247625742161149LLU;
static int8_t x207 = INT8_MIN;
int32_t t45 = -255347376;
volatile uint64_t t47 = 461805680LLU;
static volatile uint16_t x244 = 23U;
int16_t x248 = INT16_MIN;
volatile int16_t x249 = -1;
static int16_t x252 = INT16_MIN;
uint32_t x254 = UINT32_MAX;
volatile int8_t x256 = INT8_MIN;
int16_t x260 = INT16_MIN;
int16_t x261 = -50;
int8_t x263 = -1;
static int8_t x267 = -1;
static uint8_t x268 = 50U;
int8_t x271 = INT8_MIN;
int32_t t60 = -1;
int32_t x286 = -2144;
int16_t x289 = INT16_MAX;
volatile int8_t x293 = INT8_MAX;
uint32_t x294 = UINT32_MAX;
static uint8_t x295 = 1U;
volatile int32_t t63 = 830488344;
volatile uint64_t x297 = 12884000595546956LLU;
int32_t x308 = INT32_MIN;
uint64_t x310 = 114951781425065LLU;
static int8_t x312 = INT8_MIN;
volatile int32_t t66 = -1137587;
int64_t x324 = 217122385033035439LL;
static volatile int64_t t69 = -978157LL;
static volatile uint16_t x328 = UINT16_MAX;
uint64_t t71 = 83512840LLU;
volatile uint32_t x350 = UINT32_MAX;
volatile int32_t t78 = 0;
uint64_t t79 = 266563505216912LLU;
uint8_t x371 = 102U;
uint16_t x372 = 219U;
static volatile int32_t t80 = -98085879;
int32_t x373 = INT32_MAX;
volatile int8_t x377 = 13;
uint8_t x383 = 24U;
static volatile int64_t x388 = INT64_MAX;
static int8_t x390 = 52;
int64_t x391 = -1LL;
uint32_t x398 = UINT32_MAX;
int8_t x399 = -1;
volatile uint64_t x402 = 2145401320899670233LLU;
static volatile int16_t x409 = -1;
static uint64_t x411 = UINT64_MAX;
int32_t x412 = -2932;
static uint32_t x415 = 9928388U;
int64_t x419 = -15194304003LL;
int16_t x420 = -1;
int16_t x427 = INT16_MIN;
uint8_t x438 = UINT8_MAX;
volatile uint64_t t94 = 7741LLU;
int16_t x441 = INT16_MIN;
uint16_t x455 = UINT16_MAX;
volatile int32_t t96 = -33604;
static volatile int32_t t97 = -7102983;
volatile int32_t t98 = -548662467;


void f0(void) {
	int8_t x1 = INT8_MIN;
	uint64_t x2 = UINT64_MAX;
	static int64_t x4 = -1LL;
	volatile int64_t t0 = 1LL;

	t0 = ((x1==x2)/(x3-x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = INT64_MIN;
	int8_t x7 = INT8_MIN;
	int32_t x8 = -1;
	volatile int32_t t1 = 33257;

	t1 = ((x5==x6)/(x7-x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	int64_t x10 = INT64_MIN;
	int64_t x11 = 6460411LL;
	volatile int16_t x12 = INT16_MIN;
	static int64_t t2 = -223945206400LL;

	t2 = ((x9==x10)/(x11-x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x18 = INT32_MIN;
	static int16_t x19 = -738;
	uint16_t x20 = UINT16_MAX;

	t3 = ((x17==x18)/(x19-x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = INT64_MIN;
	static uint32_t x22 = 772U;
	uint16_t x23 = 90U;
	static int8_t x24 = 30;
	volatile int32_t t4 = 28;

	t4 = ((x21==x22)/(x23-x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x29 = INT64_MAX;
	int64_t x30 = -1LL;
	int32_t x31 = INT32_MIN;
	volatile uint64_t t5 = 249203012889LLU;

	t5 = ((x29==x30)/(x31-x32));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x33 = INT16_MIN;
	uint8_t x34 = 99U;
	int32_t t6 = 31250871;

	t6 = ((x33==x34)/(x35-x36));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int64_t x38 = -1LL;
	int32_t x39 = INT32_MIN;
	int16_t x40 = -1;
	volatile int32_t t7 = -44295;

	t7 = ((x37==x38)/(x39-x40));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x41 = -2719973505903LL;
	uint16_t x42 = UINT16_MAX;
	int16_t x44 = -2;

	t8 = ((x41==x42)/(x43-x44));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x46 = 189704864627396558LLU;
	volatile uint32_t x48 = 448U;

	t9 = ((x45==x46)/(x47-x48));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x49 = -25;
	static int8_t x50 = 7;
	uint16_t x51 = 616U;
	static int8_t x52 = -1;

	t10 = ((x49==x50)/(x51-x52));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x53 = INT32_MIN;
	volatile int32_t x54 = -1;

	t11 = ((x53==x54)/(x55-x56));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x58 = -1LL;
	int16_t x59 = -1;
	int32_t x60 = -125582831;
	static volatile int32_t t12 = 14068841;

	t12 = ((x57==x58)/(x59-x60));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x61 = 6270964317835796932LLU;
	volatile uint64_t x62 = 23344172717314LLU;
	int32_t x64 = INT32_MAX;
	static volatile int64_t t13 = -315LL;

	t13 = ((x61==x62)/(x63-x64));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x65 = -427;
	int32_t x67 = 401472;
	uint32_t x68 = 2191U;
	volatile uint32_t t14 = 16299U;

	t14 = ((x65==x66)/(x67-x68));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x69 = -3;
	uint16_t x71 = 23U;
	static volatile int16_t x72 = INT16_MIN;

	t15 = ((x69==x70)/(x71-x72));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x74 = 23;
	static uint64_t x76 = 6999LLU;
	static volatile uint64_t t16 = 2314LLU;

	t16 = ((x73==x74)/(x75-x76));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x77 = 2U;
	uint16_t x78 = UINT16_MAX;
	int32_t x79 = INT32_MAX;
	uint32_t x80 = UINT32_MAX;
	uint32_t t17 = 5U;

	t17 = ((x77==x78)/(x79-x80));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x81 = UINT32_MAX;
	int8_t x82 = INT8_MIN;
	volatile uint64_t t18 = 174651LLU;

	t18 = ((x81==x82)/(x83-x84));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x86 = INT32_MAX;
	static uint16_t x87 = UINT16_MAX;
	int32_t x88 = -11307;

	t19 = ((x85==x86)/(x87-x88));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x89 = 104U;
	int64_t x90 = INT64_MAX;
	int16_t x91 = 117;
	static volatile int8_t x92 = INT8_MAX;
	int32_t t20 = -112;

	t20 = ((x89==x90)/(x91-x92));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x93 = -1;
	volatile uint16_t x94 = UINT16_MAX;
	volatile int32_t x95 = -1;
	uint64_t x96 = 211777009LLU;
	uint64_t t21 = 0LLU;

	t21 = ((x93==x94)/(x95-x96));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x97 = 5734126538LLU;
	static uint32_t x98 = UINT32_MAX;
	int16_t x99 = INT16_MIN;
	volatile int32_t t22 = -8612296;

	t22 = ((x97==x98)/(x99-x100));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x101 = INT32_MAX;
	int32_t x102 = -6;
	uint8_t x103 = 0U;
	static volatile int16_t x104 = INT16_MAX;
	volatile int32_t t23 = -3;

	t23 = ((x101==x102)/(x103-x104));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x109 = INT16_MIN;
	int64_t x110 = 0LL;
	uint8_t x111 = UINT8_MAX;
	static uint64_t x112 = UINT64_MAX;
	static uint64_t t24 = 3LLU;

	t24 = ((x109==x110)/(x111-x112));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x113 = -32630493071395360LL;
	int16_t x114 = INT16_MAX;
	int64_t x116 = -125LL;

	t25 = ((x113==x114)/(x115-x116));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x121 = INT64_MIN;
	int16_t x122 = INT16_MAX;
	volatile uint16_t x123 = 178U;
	static volatile int64_t t26 = 11938347878989533LL;

	t26 = ((x121==x122)/(x123-x124));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x125 = 2226U;
	uint32_t x126 = 49U;
	int64_t x127 = -48495134LL;
	static uint64_t x128 = 2554123124LLU;
	static volatile uint64_t t27 = 492465407LLU;

	t27 = ((x125==x126)/(x127-x128));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x133 = INT32_MIN;
	int32_t x134 = INT32_MIN;
	volatile int32_t x136 = 7;
	volatile int64_t t28 = -49LL;

	t28 = ((x133==x134)/(x135-x136));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x137 = -1;
	static uint16_t x138 = 10U;
	volatile int8_t x139 = -21;
	static volatile uint16_t x140 = 1318U;

	t29 = ((x137==x138)/(x139-x140));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x141 = INT32_MIN;
	int8_t x142 = INT8_MIN;
	volatile int32_t x143 = INT32_MIN;
	int64_t x144 = INT64_MIN;
	volatile int64_t t30 = 5LL;

	t30 = ((x141==x142)/(x143-x144));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x149 = 23296113845LLU;
	int16_t x150 = INT16_MIN;
	uint8_t x151 = UINT8_MAX;
	volatile int64_t t31 = 1LL;

	t31 = ((x149==x150)/(x151-x152));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x153 = -821499720;
	uint64_t x154 = 978035541676LLU;
	volatile int8_t x155 = INT8_MIN;
	volatile int32_t t32 = 1;

	t32 = ((x153==x154)/(x155-x156));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x157 = INT64_MIN;
	int16_t x158 = INT16_MAX;
	int8_t x159 = INT8_MAX;
	int16_t x160 = -122;
	volatile int32_t t33 = 65056992;

	t33 = ((x157==x158)/(x159-x160));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x165 = INT8_MIN;
	int8_t x166 = -1;
	int32_t x167 = INT32_MIN;
	uint32_t t34 = 33068858U;

	t34 = ((x165==x166)/(x167-x168));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint64_t x170 = UINT64_MAX;
	uint64_t x171 = UINT64_MAX;
	uint32_t x172 = UINT32_MAX;
	uint64_t t35 = 59669391LLU;

	t35 = ((x169==x170)/(x171-x172));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x173 = INT32_MAX;
	uint64_t x174 = 241751528854LLU;
	uint64_t x175 = 2371LLU;
	volatile int16_t x176 = -49;
	uint64_t t36 = 5330498757308LLU;

	t36 = ((x173==x174)/(x175-x176));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x178 = -15;
	volatile int64_t x179 = 201LL;
	int16_t x180 = INT16_MIN;

	t37 = ((x177==x178)/(x179-x180));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x181 = INT64_MIN;
	int8_t x183 = 3;
	volatile int64_t x184 = -1LL;
	int64_t t38 = 49585484071284505LL;

	t38 = ((x181==x182)/(x183-x184));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int8_t x186 = INT8_MIN;
	static int32_t x187 = INT32_MIN;
	volatile int64_t t39 = 15241073548843LL;

	t39 = ((x185==x186)/(x187-x188));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint16_t x194 = 2958U;
	uint64_t x195 = 2483717192065977LLU;
	volatile int64_t x196 = -1LL;

	t40 = ((x193==x194)/(x195-x196));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x197 = 25LL;
	volatile int64_t x198 = INT64_MIN;
	volatile int16_t x200 = 327;
	volatile int32_t t41 = -205250291;

	t41 = ((x197==x198)/(x199-x200));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x202 = INT32_MAX;
	uint64_t x203 = 16705750697LLU;
	static int64_t x204 = 4195LL;
	uint64_t t42 = 7049LLU;

	t42 = ((x201==x202)/(x203-x204));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x205 = -3;
	uint32_t x206 = 15778U;
	uint64_t x208 = 73997LLU;
	volatile uint64_t t43 = 1977698231620LLU;

	t43 = ((x205==x206)/(x207-x208));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x209 = INT8_MAX;
	uint64_t x210 = UINT64_MAX;
	static int16_t x211 = INT16_MIN;
	int16_t x212 = INT16_MAX;
	volatile int32_t t44 = -7133117;

	t44 = ((x209==x210)/(x211-x212));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x213 = INT32_MAX;
	uint64_t x214 = UINT64_MAX;
	int16_t x215 = INT16_MIN;
	int32_t x216 = INT32_MIN;

	t45 = ((x213==x214)/(x215-x216));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x217 = INT32_MAX;
	uint16_t x218 = UINT16_MAX;
	int32_t x219 = INT32_MIN;
	static int16_t x220 = INT16_MIN;
	volatile int32_t t46 = 262134;

	t46 = ((x217==x218)/(x219-x220));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x225 = 117U;
	int16_t x226 = 0;
	uint64_t x227 = 450LLU;
	uint32_t x228 = UINT32_MAX;

	t47 = ((x225==x226)/(x227-x228));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x233 = INT32_MIN;
	static int32_t x234 = 146;
	int64_t x235 = -13LL;
	int64_t x236 = -1LL;
	int64_t t48 = 1714368924118LL;

	t48 = ((x233==x234)/(x235-x236));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x237 = INT8_MIN;
	int16_t x238 = 911;
	int32_t x239 = INT32_MIN;
	int64_t x240 = 10466888975780453LL;
	static volatile int64_t t49 = -102311183LL;

	t49 = ((x237==x238)/(x239-x240));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x241 = INT8_MAX;
	uint32_t x242 = 38U;
	uint64_t x243 = 990782544LLU;
	volatile uint64_t t50 = 3635LLU;

	t50 = ((x241==x242)/(x243-x244));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x245 = 579044083U;
	volatile uint64_t x246 = 4884058LLU;
	static volatile uint16_t x247 = 24U;
	static int32_t t51 = -3571;

	t51 = ((x245==x246)/(x247-x248));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x250 = -1LL;
	volatile int32_t x251 = -236830226;
	int32_t t52 = -5980;

	t52 = ((x249==x250)/(x251-x252));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x253 = INT32_MIN;
	volatile uint32_t x255 = 7U;
	volatile uint32_t t53 = 336236U;

	t53 = ((x253==x254)/(x255-x256));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int8_t x257 = INT8_MIN;
	uint32_t x258 = 24U;
	uint8_t x259 = 1U;
	int32_t t54 = 1752;

	t54 = ((x257==x258)/(x259-x260));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x262 = INT64_MAX;
	int8_t x264 = 14;
	volatile int32_t t55 = -110;

	t55 = ((x261==x262)/(x263-x264));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x265 = 99U;
	uint64_t x266 = 10933993LLU;
	static int32_t t56 = 3214540;

	t56 = ((x265==x266)/(x267-x268));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x269 = 60U;
	int8_t x270 = -1;
	static volatile int32_t x272 = INT32_MIN;
	static int32_t t57 = -6;

	t57 = ((x269==x270)/(x271-x272));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x273 = UINT64_MAX;
	static int64_t x274 = -247288LL;
	static volatile uint32_t x275 = 20451U;
	volatile uint64_t x276 = UINT64_MAX;
	uint64_t t58 = 3733120326115LLU;

	t58 = ((x273==x274)/(x275-x276));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int8_t x277 = -1;
	static int8_t x278 = INT8_MAX;
	int32_t x279 = INT32_MIN;
	int8_t x280 = -1;
	volatile int32_t t59 = -1689;

	t59 = ((x277==x278)/(x279-x280));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int64_t x281 = -1065860LL;
	uint8_t x282 = UINT8_MAX;
	int8_t x283 = -31;
	int16_t x284 = -1;

	t60 = ((x281==x282)/(x283-x284));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x285 = 3720295305LLU;
	uint8_t x287 = 2U;
	int16_t x288 = INT16_MAX;
	volatile int32_t t61 = -378765;

	t61 = ((x285==x286)/(x287-x288));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x290 = INT8_MIN;
	int16_t x291 = INT16_MIN;
	volatile int64_t x292 = -6LL;
	volatile int64_t t62 = 278339712662729464LL;

	t62 = ((x289==x290)/(x291-x292));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x296 = UINT8_MAX;

	t63 = ((x293==x294)/(x295-x296));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x298 = INT16_MIN;
	volatile int64_t x299 = -3578708931371LL;
	volatile int64_t x300 = INT64_MIN;
	int64_t t64 = 125760LL;

	t64 = ((x297==x298)/(x299-x300));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x305 = INT16_MIN;
	uint8_t x306 = 59U;
	static int8_t x307 = INT8_MIN;
	int32_t t65 = -64786;

	t65 = ((x305==x306)/(x307-x308));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x309 = UINT8_MAX;
	static int16_t x311 = -1;

	t66 = ((x309==x310)/(x311-x312));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x313 = INT32_MIN;
	int8_t x314 = INT8_MAX;
	int64_t x315 = INT64_MIN;
	volatile int16_t x316 = INT16_MIN;
	static volatile int64_t t67 = 0LL;

	t67 = ((x313==x314)/(x315-x316));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x317 = -1LL;
	static int8_t x318 = -1;
	static int16_t x319 = INT16_MIN;
	uint32_t x320 = 0U;
	volatile uint32_t t68 = 4039379U;

	t68 = ((x317==x318)/(x319-x320));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x321 = 16U;
	static uint8_t x322 = 12U;
	static volatile int32_t x323 = -1;

	t69 = ((x321==x322)/(x323-x324));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x325 = 1;
	int16_t x326 = INT16_MIN;
	uint8_t x327 = 2U;
	volatile int32_t t70 = -266461314;

	t70 = ((x325==x326)/(x327-x328));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x329 = -1;
	uint32_t x330 = 4645158U;
	uint64_t x331 = UINT64_MAX;
	uint32_t x332 = 52518501U;

	t71 = ((x329==x330)/(x331-x332));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x333 = INT16_MAX;
	static volatile int32_t x334 = INT32_MIN;
	int8_t x335 = -1;
	uint32_t x336 = 1388U;
	volatile uint32_t t72 = 9327004U;

	t72 = ((x333==x334)/(x335-x336));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x341 = 1562470810814292LLU;
	static int8_t x342 = INT8_MAX;
	uint64_t x343 = UINT64_MAX;
	uint64_t x344 = 1389734LLU;
	uint64_t t73 = 0LLU;

	t73 = ((x341==x342)/(x343-x344));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x345 = INT8_MIN;
	static volatile uint8_t x346 = 1U;
	int8_t x347 = -1;
	int64_t x348 = 1LL;
	int64_t t74 = 1507733052LL;

	t74 = ((x345==x346)/(x347-x348));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x349 = INT8_MIN;
	static int64_t x351 = -1LL;
	int8_t x352 = INT8_MIN;
	static int64_t t75 = 17109867569LL;

	t75 = ((x349==x350)/(x351-x352));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int8_t x353 = INT8_MIN;
	volatile uint16_t x354 = UINT16_MAX;
	int32_t x355 = -1;
	static int8_t x356 = 0;
	volatile int32_t t76 = 462;

	t76 = ((x353==x354)/(x355-x356));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x357 = 1508LL;
	int32_t x358 = INT32_MAX;
	int64_t x359 = INT64_MIN;
	static volatile int16_t x360 = -46;
	static int64_t t77 = -1LL;

	t77 = ((x357==x358)/(x359-x360));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x361 = INT16_MAX;
	int32_t x362 = -75900692;
	uint8_t x363 = 60U;
	int16_t x364 = INT16_MIN;

	t78 = ((x361==x362)/(x363-x364));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x365 = UINT64_MAX;
	volatile uint64_t x366 = 168071LLU;
	volatile int8_t x367 = -1;
	uint64_t x368 = 531132189LLU;

	t79 = ((x365==x366)/(x367-x368));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x369 = INT64_MIN;
	int32_t x370 = 4;

	t80 = ((x369==x370)/(x371-x372));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x374 = INT16_MIN;
	volatile int8_t x375 = -43;
	uint64_t x376 = 12LLU;
	volatile uint64_t t81 = 4501919285431202952LLU;

	t81 = ((x373==x374)/(x375-x376));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x378 = 15;
	uint32_t x379 = 263U;
	int8_t x380 = INT8_MIN;
	uint32_t t82 = 11162U;

	t82 = ((x377==x378)/(x379-x380));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x381 = 0;
	int32_t x382 = -44355003;
	uint32_t x384 = UINT32_MAX;
	static volatile uint32_t t83 = 307172641U;

	t83 = ((x381==x382)/(x383-x384));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int32_t x385 = INT32_MIN;
	int16_t x386 = INT16_MIN;
	static int32_t x387 = 516269;
	volatile int64_t t84 = -2753494456073LL;

	t84 = ((x385==x386)/(x387-x388));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x389 = INT64_MIN;
	int8_t x392 = 0;
	static int64_t t85 = -18510395LL;

	t85 = ((x389==x390)/(x391-x392));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x393 = INT16_MAX;
	int32_t x394 = INT32_MIN;
	volatile uint32_t x395 = 397920U;
	static int8_t x396 = INT8_MAX;
	static volatile uint32_t t86 = 742013933U;

	t86 = ((x393==x394)/(x395-x396));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x397 = INT16_MIN;
	static int8_t x400 = INT8_MIN;
	static int32_t t87 = -2;

	t87 = ((x397==x398)/(x399-x400));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x401 = INT64_MAX;
	static int8_t x403 = -1;
	int32_t x404 = INT32_MIN;
	int32_t t88 = 117985748;

	t88 = ((x401==x402)/(x403-x404));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x410 = -1;
	uint64_t t89 = 3653429551436892170LLU;

	t89 = ((x409==x410)/(x411-x412));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x413 = 110855312;
	int32_t x414 = 221125125;
	uint64_t x416 = 229LLU;
	volatile uint64_t t90 = 517187611829LLU;

	t90 = ((x413==x414)/(x415-x416));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x417 = -12;
	static int64_t x418 = INT64_MAX;
	volatile int64_t t91 = -312885973264745LL;

	t91 = ((x417==x418)/(x419-x420));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x425 = INT16_MAX;
	int16_t x426 = -1;
	int16_t x428 = -29;
	static int32_t t92 = 49902;

	t92 = ((x425==x426)/(x427-x428));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x433 = INT64_MIN;
	volatile int32_t x434 = INT32_MAX;
	int32_t x435 = -320382860;
	static uint64_t x436 = 529833258134LLU;
	volatile uint64_t t93 = 868009LLU;

	t93 = ((x433==x434)/(x435-x436));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x437 = 329U;
	uint64_t x439 = 36163LLU;
	uint16_t x440 = UINT16_MAX;

	t94 = ((x437==x438)/(x439-x440));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x442 = -330244824;
	uint64_t x443 = 459249923943LLU;
	int64_t x444 = INT64_MAX;
	uint64_t t95 = 4383259468LLU;

	t95 = ((x441==x442)/(x443-x444));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x453 = -1;
	static int16_t x454 = 0;
	int8_t x456 = INT8_MAX;

	t96 = ((x453==x454)/(x455-x456));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint16_t x457 = UINT16_MAX;
	volatile uint8_t x458 = 0U;
	int8_t x459 = 0;
	int16_t x460 = 208;

	t97 = ((x457==x458)/(x459-x460));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x461 = 27333257642LL;
	volatile uint8_t x462 = 6U;
	int16_t x463 = -1;
	uint8_t x464 = 6U;

	t98 = ((x461==x462)/(x463-x464));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x465 = 4;
	int32_t x466 = INT32_MIN;
	volatile uint64_t x467 = UINT64_MAX;
	int64_t x468 = INT64_MIN;
	volatile uint64_t t99 = 20637138LLU;

	t99 = ((x465==x466)/(x467-x468));

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

