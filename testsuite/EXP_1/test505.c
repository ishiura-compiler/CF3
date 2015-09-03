#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = -1LL;
static uint32_t x3 = 9098U;
uint64_t x5 = UINT64_MAX;
int64_t x17 = -23227369735LL;
int16_t x27 = INT16_MIN;
int8_t x29 = -1;
uint16_t x30 = 2U;
volatile uint64_t x33 = UINT64_MAX;
int64_t x35 = -804LL;
int16_t x36 = 1626;
int32_t x39 = -1;
volatile uint8_t x40 = UINT8_MAX;
static volatile uint32_t t7 = 185U;
int32_t x43 = -20647;
volatile int16_t x45 = 23;
volatile int8_t x48 = 1;
int64_t x55 = INT64_MIN;
static int16_t x56 = -1;
int8_t x61 = INT8_MIN;
uint32_t t13 = 234741706U;
static int32_t x71 = INT32_MAX;
int16_t x74 = -4138;
int8_t x81 = 1;
static uint64_t x83 = 28434869LLU;
static int8_t x86 = -1;
static int16_t x95 = INT16_MAX;
uint8_t x98 = UINT8_MAX;
int8_t x99 = -48;
static int8_t x104 = INT8_MIN;
int8_t x105 = 13;
static volatile int32_t x108 = 6;
int64_t x117 = -1LL;
static int16_t x126 = INT16_MIN;
volatile uint64_t t26 = 171LLU;
volatile int32_t x131 = INT32_MIN;
static uint8_t x140 = 122U;
volatile uint32_t t28 = 1147354U;
int8_t x146 = -1;
uint64_t x148 = UINT64_MAX;
volatile uint64_t t29 = 979LLU;
static volatile uint32_t x153 = UINT32_MAX;
static int32_t x164 = INT32_MAX;
volatile int64_t t31 = 54636LL;
int16_t x166 = INT16_MIN;
int8_t x177 = 0;
volatile int32_t x179 = INT32_MIN;
uint64_t t35 = 63569493333LLU;
uint32_t x193 = UINT32_MAX;
int64_t x196 = INT64_MAX;
int16_t x197 = INT16_MAX;
static int32_t x200 = -1;
volatile int16_t x204 = 20;
uint16_t x222 = 29138U;
uint32_t x226 = 139245800U;
static uint64_t x237 = UINT64_MAX;
int64_t x239 = INT64_MIN;
uint64_t x245 = UINT64_MAX;
uint64_t t45 = 5221064855158083LLU;
volatile uint64_t t46 = 404565LLU;
int32_t t47 = -5860456;
int8_t x281 = -1;
int64_t x284 = INT64_MIN;
int64_t t49 = INT64_MIN;
uint32_t x285 = 14U;
int8_t x288 = INT8_MIN;
int32_t x292 = -66431015;
volatile uint64_t t51 = 137LLU;
volatile int32_t t55 = 683;
volatile uint32_t x321 = UINT32_MAX;
int16_t x341 = INT16_MIN;
uint16_t x348 = 5444U;
int8_t x371 = 11;
int8_t x372 = INT8_MIN;
static uint32_t x378 = 16870U;
volatile uint32_t t64 = 7U;
uint32_t x383 = 0U;
int8_t x395 = INT8_MIN;
static uint64_t x401 = 334752385LLU;
int64_t x404 = INT64_MAX;
static volatile uint64_t t67 = 370978824034965LLU;
uint16_t x434 = 554U;
static uint16_t x435 = UINT16_MAX;
volatile uint32_t x436 = 495746964U;
uint32_t t72 = 6U;
static int32_t x441 = -1;
uint64_t x442 = 30084632318046583LLU;
int16_t x443 = -3172;
volatile uint64_t t73 = 315LLU;
uint64_t x461 = 157827106876227832LLU;
static int8_t x463 = 28;
volatile uint64_t t77 = 8303102437771LLU;
uint64_t x468 = 62685896504LLU;
volatile uint32_t t79 = 0U;
volatile int16_t x474 = 0;
uint64_t t80 = 1019LLU;
volatile uint8_t x490 = 10U;
int16_t x496 = INT16_MAX;
int8_t x498 = INT8_MIN;
int8_t x501 = INT8_MAX;
volatile uint16_t x509 = 18U;
static int32_t x518 = 1922;
int8_t x519 = -1;
static int32_t x521 = -48;
int64_t x531 = -3058754058643586LL;
volatile uint16_t x532 = UINT16_MAX;
volatile int64_t t92 = -4LL;
static int64_t x538 = -1LL;
int32_t x539 = -1;
static volatile int64_t t93 = 224921999025248LL;
uint64_t t95 = 270226605343522LLU;
volatile uint32_t x556 = 76516U;
int64_t x557 = -500940210914LL;
volatile int32_t t99 = 79;


void f0(void) {
	int8_t x2 = 1;
	static volatile int16_t x4 = 1;
	volatile int64_t t0 = 18LL;

	t0 = (((x1*x2)^x3)&x4);

	if (t0 != 1LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = INT16_MIN;
	uint8_t x7 = UINT8_MAX;
	static uint8_t x8 = 44U;
	uint64_t t1 = 1105646467671LLU;

	t1 = (((x5*x6)^x7)&x8);

	if (t1 != 44LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x18 = 1;
	static int16_t x19 = 4619;
	static volatile uint8_t x20 = 61U;
	volatile int64_t t2 = 2200LL;

	t2 = (((x17*x18)^x19)&x20);

	if (t2 != 48LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x21 = UINT16_MAX;
	int8_t x22 = 24;
	uint16_t x23 = 37U;
	volatile uint64_t x24 = 369203563101LLU;
	volatile uint64_t t3 = 23102417471LLU;

	t3 = (((x21*x22)^x23)&x24);

	if (t3 != 1526349LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x25 = 1U;
	int32_t x26 = 37;
	volatile int16_t x28 = -1;
	int32_t t4 = 27;

	t4 = (((x25*x26)^x27)&x28);

	if (t4 != -32731) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x31 = 7523;
	static int8_t x32 = INT8_MAX;
	volatile int32_t t5 = 64117517;

	t5 = (((x29*x30)^x31)&x32);

	if (t5 != 29) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x34 = INT8_MIN;
	volatile uint64_t t6 = 3089558651161LLU;

	t6 = (((x33*x34)^x35)&x36);

	if (t6 != 1112LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x37 = UINT32_MAX;
	int32_t x38 = INT32_MAX;

	t7 = (((x37*x38)^x39)&x40);

	if (t7 != 254U) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x41 = -1;
	volatile int16_t x42 = INT16_MIN;
	uint32_t x44 = 50693U;
	uint32_t t8 = 461742736U;

	t8 = (((x41*x42)^x43)&x44);

	if (t8 != 1537U) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x46 = INT16_MIN;
	int16_t x47 = INT16_MAX;
	volatile int32_t t9 = 44002549;

	t9 = (((x45*x46)^x47)&x48);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x49 = 22U;
	static int16_t x50 = -1;
	int64_t x51 = INT64_MIN;
	uint8_t x52 = UINT8_MAX;
	static volatile int64_t t10 = 338129103LL;

	t10 = (((x49*x50)^x51)&x52);

	if (t10 != 234LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x53 = INT16_MIN;
	volatile uint64_t x54 = 23233948874252LLU;
	uint64_t t11 = 15025790012LLU;

	t11 = (((x53*x54)^x55)&x56);

	if (t11 != 8462042000143286272LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x62 = 5183462LL;
	volatile uint16_t x63 = UINT16_MAX;
	uint8_t x64 = 29U;
	int64_t t12 = 107516719518LL;

	t12 = (((x61*x62)^x63)&x64);

	if (t12 != 29LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x65 = 18;
	static volatile int32_t x66 = 12583111;
	int32_t x67 = 15;
	uint32_t x68 = 59587U;

	t13 = (((x65*x66)^x67)&x68);

	if (t13 != 2241U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x69 = INT8_MIN;
	uint16_t x70 = 244U;
	int64_t x72 = INT64_MAX;
	int64_t t14 = -129508740451031583LL;

	t14 = (((x69*x70)^x71)&x72);

	if (t14 != 9223372034707323391LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x73 = 14;
	uint64_t x75 = 1LLU;
	int16_t x76 = INT16_MAX;
	volatile uint64_t t15 = 0LLU;

	t15 = (((x73*x74)^x75)&x76);

	if (t15 != 7605LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x77 = INT32_MAX;
	int64_t x78 = -39LL;
	int32_t x79 = 12078993;
	int64_t x80 = INT64_MIN;
	volatile int64_t t16 = INT64_MIN;

	t16 = (((x77*x78)^x79)&x80);

	if (t16 != INT64_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x82 = 0U;
	volatile uint32_t x84 = 52011704U;
	uint64_t t17 = 202664LLU;

	t17 = (((x81*x82)^x83)&x84);

	if (t17 != 17932464LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x85 = 737821155U;
	uint8_t x87 = 0U;
	int8_t x88 = INT8_MIN;
	volatile uint32_t t18 = 249U;

	t18 = (((x85*x86)^x87)&x88);

	if (t18 != 3557146112U) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x93 = -1;
	int16_t x94 = INT16_MIN;
	int64_t x96 = INT64_MIN;
	static int64_t t19 = 58373667428LL;

	t19 = (((x93*x94)^x95)&x96);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x97 = INT16_MIN;
	int8_t x100 = INT8_MIN;
	static volatile int32_t t20 = -31754;

	t20 = (((x97*x98)^x99)&x100);

	if (t20 != 8355712) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x101 = INT16_MIN;
	volatile int16_t x102 = INT16_MAX;
	int64_t x103 = -13LL;
	int64_t t21 = 9554LL;

	t21 = (((x101*x102)^x103)&x104);

	if (t21 != 1073708928LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x106 = -62;
	int32_t x107 = -1;
	static volatile int32_t t22 = -20;

	t22 = (((x105*x106)^x107)&x108);

	if (t22 != 4) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x109 = INT16_MIN;
	int16_t x110 = INT16_MIN;
	uint32_t x111 = 219U;
	int32_t x112 = 31;
	static uint32_t t23 = 65876502U;

	t23 = (((x109*x110)^x111)&x112);

	if (t23 != 27U) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x113 = INT8_MAX;
	volatile uint8_t x114 = 1U;
	int16_t x115 = -1;
	int64_t x116 = 15076LL;
	volatile int64_t t24 = 1556172433161LL;

	t24 = (((x113*x114)^x115)&x116);

	if (t24 != 14976LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x118 = -1LL;
	static int8_t x119 = INT8_MIN;
	uint16_t x120 = 54U;
	volatile int64_t t25 = -861688880981931048LL;

	t25 = (((x117*x118)^x119)&x120);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x125 = INT16_MIN;
	int64_t x127 = -92986994235LL;
	uint64_t x128 = 1590708LLU;

	t26 = (((x125*x126)^x127)&x128);

	if (t26 != 524676LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x129 = INT64_MAX;
	uint64_t x130 = UINT64_MAX;
	uint16_t x132 = UINT16_MAX;
	volatile uint64_t t27 = 1097555365141424LLU;

	t27 = (((x129*x130)^x131)&x132);

	if (t27 != 1LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x137 = 31U;
	static uint32_t x138 = 4137769U;
	uint16_t x139 = UINT16_MAX;

	t28 = (((x137*x138)^x139)&x140);

	if (t28 != 8U) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x145 = UINT64_MAX;
	int8_t x147 = 15;

	t29 = (((x145*x146)^x147)&x148);

	if (t29 != 14LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x154 = UINT8_MAX;
	volatile int32_t x155 = INT32_MIN;
	volatile uint32_t x156 = 27706U;
	uint32_t t30 = 6450U;

	t30 = (((x153*x154)^x155)&x156);

	if (t30 != 27648U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x161 = INT8_MIN;
	uint16_t x162 = 0U;
	int64_t x163 = -846LL;

	t31 = (((x161*x162)^x163)&x164);

	if (t31 != 2147482802LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x165 = 962U;
	int32_t x167 = INT32_MIN;
	int16_t x168 = INT16_MIN;
	uint32_t t32 = 128092U;

	t32 = (((x165*x166)^x167)&x168);

	if (t32 != 2115960832U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x169 = -1;
	static uint16_t x170 = 11490U;
	uint32_t x171 = 3631822U;
	static volatile int64_t x172 = INT64_MIN;
	volatile int64_t t33 = -47808251008LL;

	t33 = (((x169*x170)^x171)&x172);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x173 = -1LL;
	volatile uint32_t x174 = 309060U;
	int64_t x175 = INT64_MAX;
	volatile uint64_t x176 = 6170LLU;
	static volatile uint64_t t34 = 3432666010583881055LLU;

	t34 = (((x173*x174)^x175)&x176);

	if (t34 != 4098LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x178 = 3483050789LLU;
	static int16_t x180 = INT16_MIN;

	t35 = (((x177*x178)^x179)&x180);

	if (t35 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x185 = -1LL;
	int8_t x186 = -1;
	int64_t x187 = -66068LL;
	int32_t x188 = INT32_MIN;
	volatile int64_t t36 = 969LL;

	t36 = (((x185*x186)^x187)&x188);

	if (t36 != -2147483648LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x194 = 889962190LLU;
	volatile uint16_t x195 = UINT16_MAX;
	volatile uint64_t t37 = 295LLU;

	t37 = (((x193*x194)^x195)&x196);

	if (t37 != 3822358499836608205LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x198 = 1LLU;
	static int16_t x199 = INT16_MIN;
	uint64_t t38 = UINT64_MAX;

	t38 = (((x197*x198)^x199)&x200);

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x201 = 16U;
	int8_t x202 = INT8_MAX;
	uint8_t x203 = 1U;
	volatile uint32_t t39 = 1U;

	t39 = (((x201*x202)^x203)&x204);

	if (t39 != 16U) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x209 = 11U;
	static uint64_t x210 = 12346523215773189LLU;
	volatile int8_t x211 = -6;
	static int8_t x212 = INT8_MAX;
	static volatile uint64_t t40 = 15971675LLU;

	t40 = (((x209*x210)^x211)&x212);

	if (t40 != 77LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x221 = UINT32_MAX;
	uint64_t x223 = UINT64_MAX;
	uint8_t x224 = UINT8_MAX;
	uint64_t t41 = 122LLU;

	t41 = (((x221*x222)^x223)&x224);

	if (t41 != 209LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x225 = 6551;
	int32_t x227 = INT32_MIN;
	static volatile uint64_t x228 = UINT64_MAX;
	volatile uint64_t t42 = 15598770LLU;

	t42 = (((x225*x226)^x227)&x228);

	if (t42 != 3813652696LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x238 = -5410170LL;
	int32_t x240 = INT32_MAX;
	volatile uint64_t t43 = 6818789189976LLU;

	t43 = (((x237*x238)^x239)&x240);

	if (t43 != 5410170LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x246 = INT16_MAX;
	int64_t x247 = -1LL;
	volatile uint16_t x248 = UINT16_MAX;
	volatile uint64_t t44 = 12048313046797537LLU;

	t44 = (((x245*x246)^x247)&x248);

	if (t44 != 32766LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x249 = UINT64_MAX;
	static int32_t x250 = INT32_MAX;
	static int64_t x251 = INT64_MAX;
	static int64_t x252 = INT64_MIN;

	t45 = (((x249*x250)^x251)&x252);

	if (t45 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x257 = 14815360824494LL;
	int64_t x258 = -1LL;
	uint64_t x259 = 43LLU;
	uint8_t x260 = UINT8_MAX;

	t46 = (((x257*x258)^x259)&x260);

	if (t46 != 121LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x269 = INT8_MIN;
	int32_t x270 = -1;
	static int8_t x271 = 14;
	static int8_t x272 = 58;

	t47 = (((x269*x270)^x271)&x272);

	if (t47 != 10) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x273 = 0U;
	volatile uint64_t x274 = 30297609LLU;
	uint32_t x275 = 565U;
	int64_t x276 = INT64_MAX;
	uint64_t t48 = 2232634258841558LLU;

	t48 = (((x273*x274)^x275)&x276);

	if (t48 != 565LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x282 = 355U;
	uint8_t x283 = 37U;

	t49 = (((x281*x282)^x283)&x284);

	if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x286 = INT16_MIN;
	uint8_t x287 = 20U;
	uint32_t t50 = 184849861U;

	t50 = (((x285*x286)^x287)&x288);

	if (t50 != 4294508544U) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint32_t x289 = 103648241U;
	int8_t x290 = INT8_MAX;
	uint64_t x291 = 1205505LLU;

	t51 = (((x289*x290)^x291)&x292);

	if (t51 != 269091208LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint64_t x293 = UINT64_MAX;
	static int64_t x294 = -20840954657LL;
	int8_t x295 = INT8_MIN;
	int8_t x296 = INT8_MIN;
	uint64_t t52 = 421LLU;

	t52 = (((x293*x294)^x295)&x296);

	if (t52 != 18446744052868596864LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x297 = 10440U;
	uint16_t x298 = 49U;
	int16_t x299 = INT16_MAX;
	volatile uint16_t x300 = 6459U;
	static int32_t t53 = -486;

	t53 = (((x297*x298)^x299)&x300);

	if (t53 != 4403) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x301 = -1;
	static volatile uint16_t x302 = 2634U;
	volatile int64_t x303 = 11123604225467351LL;
	int8_t x304 = -1;
	static volatile int64_t t54 = -1417LL;

	t54 = (((x301*x302)^x303)&x304);

	if (t54 != -11123604225468831LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x305 = 14U;
	volatile int16_t x306 = -5073;
	volatile int16_t x307 = -1;
	volatile int8_t x308 = INT8_MAX;

	t55 = (((x305*x306)^x307)&x308);

	if (t55 != 109) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x322 = INT32_MAX;
	static int16_t x323 = -1;
	static volatile uint8_t x324 = UINT8_MAX;
	volatile uint32_t t56 = 8374U;

	t56 = (((x321*x322)^x323)&x324);

	if (t56 != 254U) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x333 = -1;
	int8_t x334 = INT8_MAX;
	uint8_t x335 = 51U;
	uint32_t x336 = 5U;
	volatile uint32_t t57 = 0U;

	t57 = (((x333*x334)^x335)&x336);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x337 = 6;
	volatile int32_t x338 = 139191;
	int8_t x339 = INT8_MIN;
	volatile uint16_t x340 = UINT16_MAX;
	int32_t t58 = -11;

	t58 = (((x337*x338)^x339)&x340);

	if (t58 != 16842) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x342 = 46;
	int64_t x343 = -16233610LL;
	volatile uint8_t x344 = UINT8_MAX;
	volatile int64_t t59 = 8455LL;

	t59 = (((x341*x342)^x343)&x344);

	if (t59 != 118LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x345 = -74;
	uint16_t x346 = UINT16_MAX;
	static uint16_t x347 = UINT16_MAX;
	static int32_t t60 = 69203173;

	t60 = (((x345*x346)^x347)&x348);

	if (t60 != 5380) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x353 = UINT8_MAX;
	static uint32_t x354 = 80306102U;
	uint16_t x355 = 459U;
	volatile int8_t x356 = INT8_MAX;
	volatile uint32_t t61 = 4841689U;

	t61 = (((x353*x354)^x355)&x356);

	if (t61 != 1U) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x357 = UINT16_MAX;
	int8_t x358 = INT8_MIN;
	int16_t x359 = INT16_MAX;
	int8_t x360 = -1;
	volatile int32_t t62 = 6871208;

	t62 = (((x357*x358)^x359)&x360);

	if (t62 != -8355969) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x369 = 1296;
	static volatile int8_t x370 = 1;
	volatile int32_t t63 = -3;

	t63 = (((x369*x370)^x371)&x372);

	if (t63 != 1280) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x377 = 7842;
	int32_t x379 = INT32_MIN;
	int8_t x380 = -1;

	t64 = (((x377*x378)^x379)&x380);

	if (t64 != 2279778188U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x381 = 68U;
	uint32_t x382 = 10282945U;
	int64_t x384 = -1332079665737LL;
	int64_t t65 = 0LL;

	t65 = (((x381*x382)^x383)&x384);

	if (t65 != 160238852LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x393 = INT32_MIN;
	int8_t x394 = 1;
	uint32_t x396 = UINT32_MAX;
	uint32_t t66 = 175U;

	t66 = (((x393*x394)^x395)&x396);

	if (t66 != 2147483520U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x402 = INT32_MAX;
	uint64_t x403 = 156182686LLU;

	t67 = (((x401*x402)^x403)&x404);

	if (t67 != 718875272467922401LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x405 = 285769436078059968LLU;
	static uint32_t x406 = UINT32_MAX;
	static volatile uint32_t x407 = UINT32_MAX;
	uint32_t x408 = 68U;
	volatile uint64_t t68 = 25168LLU;

	t68 = (((x405*x406)^x407)&x408);

	if (t68 != 4LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x413 = -536839112;
	uint32_t x414 = UINT32_MAX;
	static int16_t x415 = INT16_MAX;
	int64_t x416 = -224480LL;
	volatile int64_t t69 = -115731685LL;

	t69 = (((x413*x414)^x415)&x416);

	if (t69 != 536645664LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x425 = 1636333331532801LLU;
	int8_t x426 = -1;
	uint32_t x427 = 0U;
	int8_t x428 = -1;
	static uint64_t t70 = 3740004906830LLU;

	t70 = (((x425*x426)^x427)&x428);

	if (t70 != 18445107740378018815LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x433 = INT16_MAX;
	volatile uint32_t t71 = 885289U;

	t71 = (((x433*x434)^x435)&x436);

	if (t71 != 17039872U) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x437 = 91U;
	int32_t x438 = 640;
	uint32_t x439 = UINT32_MAX;
	static int8_t x440 = INT8_MIN;

	t72 = (((x437*x438)^x439)&x440);

	if (t72 != 4294908928U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x444 = 25209427463972LLU;

	t73 = (((x441*x442)^x443)&x444);

	if (t73 != 824742776068LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x445 = 22520U;
	static volatile uint32_t x446 = UINT32_MAX;
	uint8_t x447 = 57U;
	uint32_t x448 = UINT32_MAX;
	volatile uint32_t t74 = 62U;

	t74 = (((x445*x446)^x447)&x448);

	if (t74 != 4294944817U) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x449 = -1LL;
	volatile int64_t x450 = -7749089778134LL;
	int64_t x451 = INT64_MIN;
	int32_t x452 = INT32_MAX;
	static volatile int64_t t75 = 16059354LL;

	t75 = (((x449*x450)^x451)&x452);

	if (t75 != 968776150LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x457 = 1;
	int16_t x458 = -1;
	static int32_t x459 = INT32_MIN;
	volatile uint8_t x460 = 1U;
	int32_t t76 = -334537748;

	t76 = (((x457*x458)^x459)&x460);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x462 = 1;
	int32_t x464 = INT32_MAX;

	t77 = (((x461*x462)^x463)&x464);

	if (t77 != 1632174308LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x465 = UINT8_MAX;
	uint64_t x466 = UINT64_MAX;
	int16_t x467 = 1;
	static volatile uint64_t t78 = 768LLU;

	t78 = (((x465*x466)^x467)&x468);

	if (t78 != 62685896448LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int8_t x469 = INT8_MIN;
	uint32_t x470 = 26378803U;
	static int8_t x471 = 0;
	int32_t x472 = -249;

	t79 = (((x469*x470)^x471)&x472);

	if (t79 != 918480384U) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x473 = 37392602766837LLU;
	uint8_t x475 = UINT8_MAX;
	int32_t x476 = INT32_MIN;

	t80 = (((x473*x474)^x475)&x476);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x477 = INT8_MIN;
	uint32_t x478 = 403U;
	uint64_t x479 = 1305382LLU;
	uint16_t x480 = UINT16_MAX;
	uint64_t t81 = 1941322717LLU;

	t81 = (((x477*x478)^x479)&x480);

	if (t81 != 56742LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x481 = INT32_MIN;
	int64_t x482 = -1LL;
	static volatile int8_t x483 = INT8_MIN;
	int8_t x484 = INT8_MIN;
	int64_t t82 = -4462345121067601727LL;

	t82 = (((x481*x482)^x483)&x484);

	if (t82 != -2147483776LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x485 = 2U;
	int32_t x486 = -1;
	uint64_t x487 = UINT64_MAX;
	uint16_t x488 = UINT16_MAX;
	uint64_t t83 = 2126676733177501018LLU;

	t83 = (((x485*x486)^x487)&x488);

	if (t83 != 1LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x489 = INT16_MAX;
	int8_t x491 = -52;
	int32_t x492 = -1;
	static int32_t t84 = 40208;

	t84 = (((x489*x490)^x491)&x492);

	if (t84 != -327622) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x493 = 12;
	int16_t x494 = INT16_MIN;
	int16_t x495 = INT16_MIN;
	static int32_t t85 = 1;

	t85 = (((x493*x494)^x495)&x496);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int16_t x497 = 3;
	volatile uint16_t x499 = UINT16_MAX;
	int32_t x500 = INT32_MIN;
	static int32_t t86 = INT32_MIN;

	t86 = (((x497*x498)^x499)&x500);

	if (t86 != INT32_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x502 = UINT16_MAX;
	int16_t x503 = 303;
	static int32_t x504 = INT32_MIN;
	volatile int32_t t87 = -2;

	t87 = (((x501*x502)^x503)&x504);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x510 = 184757U;
	static uint32_t x511 = 52519U;
	int16_t x512 = INT16_MAX;
	uint32_t t88 = 2399U;

	t88 = (((x509*x510)^x511)&x512);

	if (t88 != 29597U) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x517 = UINT8_MAX;
	int8_t x520 = -1;
	int32_t t89 = 959566637;

	t89 = (((x517*x518)^x519)&x520);

	if (t89 != -490111) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x522 = INT8_MIN;
	int32_t x523 = 2;
	static volatile int32_t x524 = INT32_MAX;
	volatile int32_t t90 = -7942;

	t90 = (((x521*x522)^x523)&x524);

	if (t90 != 6146) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x525 = UINT32_MAX;
	int8_t x526 = INT8_MIN;
	uint8_t x527 = UINT8_MAX;
	int64_t x528 = INT64_MAX;
	volatile int64_t t91 = 6346305828601LL;

	t91 = (((x525*x526)^x527)&x528);

	if (t91 != 127LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x529 = INT64_MAX;
	int16_t x530 = -1;

	t92 = (((x529*x530)^x531)&x532);

	if (t92 != 6015LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x537 = UINT8_MAX;
	static volatile uint16_t x540 = UINT16_MAX;

	t93 = (((x537*x538)^x539)&x540);

	if (t93 != 254LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x541 = UINT32_MAX;
	int8_t x542 = INT8_MIN;
	volatile int64_t x543 = 369520956029575240LL;
	int8_t x544 = 7;
	int64_t t94 = 41954928522LL;

	t94 = (((x541*x542)^x543)&x544);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x545 = -1LL;
	uint64_t x546 = 3013920765902610LLU;
	int16_t x547 = -93;
	static int32_t x548 = -1;

	t95 = (((x545*x546)^x547)&x548);

	if (t95 != 3013920765902669LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x549 = 546;
	uint16_t x550 = 178U;
	int64_t x551 = -372057728460354846LL;
	volatile int64_t x552 = -12028327829LL;
	volatile int64_t t96 = 7065LL;

	t96 = (((x549*x550)^x551)&x552);

	if (t96 != -372057739334107070LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x553 = INT16_MAX;
	static int32_t x554 = -1;
	uint32_t x555 = 1368318277U;
	uint32_t t97 = 424U;

	t97 = (((x553*x554)^x555)&x556);

	if (t97 != 73796U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x558 = INT8_MIN;
	uint16_t x559 = UINT16_MAX;
	int64_t x560 = INT64_MIN;
	volatile int64_t t98 = -42014290LL;

	t98 = (((x557*x558)^x559)&x560);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x561 = 3U;
	int32_t x562 = -29199743;
	int16_t x563 = INT16_MIN;
	volatile int32_t x564 = INT32_MIN;

	t99 = (((x561*x562)^x563)&x564);

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

