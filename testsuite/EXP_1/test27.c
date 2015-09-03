#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t t0 = 1U;
int64_t x12 = -1LL;
uint64_t x21 = 304222225370270LLU;
uint32_t x26 = 1795408U;
int8_t x27 = 1;
static volatile int64_t x28 = 864008420LL;
volatile int64_t t3 = 78271582383212220LL;
static uint64_t x30 = UINT64_MAX;
static volatile int8_t x39 = INT8_MIN;
volatile int32_t t6 = 5;
int16_t x47 = INT16_MIN;
static volatile uint64_t t8 = 1430903LLU;
int32_t x54 = 960729868;
int32_t t13 = 0;
uint32_t x75 = UINT32_MAX;
volatile int32_t t15 = 1;
int16_t x92 = INT16_MIN;
uint32_t x98 = 1206159U;
volatile int32_t x111 = -378;
uint8_t x117 = 3U;
int8_t x118 = INT8_MIN;
uint8_t x130 = UINT8_MAX;
volatile uint64_t x131 = 1LLU;
int64_t t26 = 2894589184LL;
int64_t x151 = INT64_MIN;
volatile int64_t t28 = -13815294LL;
volatile int8_t x165 = INT8_MIN;
uint32_t x167 = 989259065U;
uint64_t x178 = 299309689520830LLU;
static volatile uint64_t x179 = 1004689LLU;
int64_t x184 = INT64_MAX;
volatile int64_t t32 = -286821546861027919LL;
int32_t x190 = -1;
static int64_t x197 = INT64_MAX;
uint64_t t36 = 51545LLU;
int16_t x209 = INT16_MAX;
static int8_t x226 = INT8_MIN;
volatile int32_t t39 = -4;
static uint8_t x236 = 17U;
volatile int8_t x245 = INT8_MIN;
int16_t x247 = 167;
static volatile int8_t x254 = 15;
uint16_t x270 = 17U;
static int64_t x274 = -7514207LL;
int8_t x284 = 1;
volatile uint64_t x286 = 1LLU;
int16_t x288 = 1;
uint16_t x290 = 4U;
static int8_t x291 = INT8_MIN;
static int64_t x294 = 94898803LL;
int16_t x298 = -1;
int32_t x300 = 4981;
int32_t x302 = 47226;
int64_t x318 = -1LL;
uint16_t x319 = UINT16_MAX;
uint16_t x320 = UINT16_MAX;
int16_t x332 = -1;
int16_t x335 = -1308;
int32_t x336 = -1;
volatile int8_t x343 = 0;
int8_t x344 = -1;
int64_t x352 = 15332854LL;
uint64_t x356 = 134256942966984170LLU;
static uint64_t x361 = 825438370678496747LLU;
int8_t x364 = INT8_MIN;
int32_t x366 = INT32_MAX;
uint16_t x369 = UINT16_MAX;
volatile uint64_t t68 = 35344529308683657LLU;
volatile int32_t x377 = INT32_MIN;
static int8_t x378 = INT8_MAX;
int64_t x380 = 111904337640442975LL;
volatile int32_t x381 = -94437;
uint64_t x382 = 373638353510667944LLU;
int64_t t71 = 2488LL;
int8_t x406 = -1;
int8_t x416 = -1;
volatile uint64_t t74 = 627LLU;
static int8_t x418 = -1;
int32_t x419 = -122;
volatile uint64_t x421 = 101310550452490LLU;
uint32_t t77 = 6039151U;
uint32_t x447 = UINT32_MAX;
uint32_t x461 = 1U;
static volatile int64_t t82 = -89521527428120LL;
static volatile uint64_t t83 = 15167LLU;
static int8_t x476 = INT8_MAX;
volatile uint32_t t84 = 921U;
uint16_t x485 = 13U;
volatile uint32_t x491 = UINT32_MAX;
volatile uint32_t t86 = 12U;
int32_t t89 = INT32_MIN;
int64_t x509 = -1LL;
int64_t x522 = INT64_MIN;
static int32_t x530 = -1;
volatile uint32_t t95 = 9913595U;
static uint64_t t96 = 1LLU;
int64_t x542 = -1LL;
int64_t x545 = INT64_MIN;
int16_t x565 = -540;


void f0(void) {
	int16_t x1 = INT16_MAX;
	int16_t x2 = -1;
	int8_t x3 = INT8_MAX;
	static uint32_t x4 = 3735U;

	t0 = (((x1+x2)*x3)+x4);

	if (t0 != 4165017U) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x9 = 0U;
	static int32_t x10 = 51;
	volatile int8_t x11 = INT8_MAX;
	int64_t t1 = -4105762LL;

	t1 = (((x9+x10)*x11)+x12);

	if (t1 != 6476LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x22 = INT64_MIN;
	uint16_t x23 = UINT16_MAX;
	int32_t x24 = INT32_MIN;
	uint64_t t2 = 2049398955091237844LLU;

	t2 = (((x21+x22)*x23)+x24);

	if (t2 != 10713831500638384994LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x25 = UINT32_MAX;

	t3 = (((x25+x26)*x27)+x28);

	if (t3 != 865803827LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x29 = UINT16_MAX;
	volatile int8_t x31 = 1;
	int64_t x32 = -1LL;
	uint64_t t4 = 196477LLU;

	t4 = (((x29+x30)*x31)+x32);

	if (t4 != 65533LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x33 = UINT16_MAX;
	static volatile int8_t x34 = -1;
	int16_t x35 = INT16_MIN;
	volatile int8_t x36 = INT8_MAX;
	volatile int32_t t5 = -20339;

	t5 = (((x33+x34)*x35)+x36);

	if (t5 != -2147417985) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x37 = INT16_MIN;
	int32_t x38 = -24;
	int16_t x40 = INT16_MAX;

	t6 = (((x37+x38)*x39)+x40);

	if (t6 != 4230143) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x41 = -38;
	volatile int16_t x42 = INT16_MAX;
	int64_t x43 = -1942895LL;
	volatile int32_t x44 = -491954620;
	volatile int64_t t7 = -3385LL;

	t7 = (((x41+x42)*x43)+x44);

	if (t7 != -64080965075LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x45 = 6U;
	volatile uint64_t x46 = UINT64_MAX;
	static int8_t x48 = 1;

	t8 = (((x45+x46)*x47)+x48);

	if (t8 != 18446744073709387777LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x49 = 5;
	uint64_t x50 = 8278LLU;
	int16_t x51 = INT16_MIN;
	static uint16_t x52 = UINT16_MAX;
	static volatile uint64_t t9 = 1919LLU;

	t9 = (((x49+x50)*x51)+x52);

	if (t9 != 18446744073438199807LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x53 = 29471399205LLU;
	static volatile int16_t x55 = INT16_MIN;
	uint64_t x56 = 60760075819LLU;
	volatile uint64_t t10 = 11433695601484032LLU;

	t10 = (((x53+x54)*x55)+x56);

	if (t10 != 18445746934464163371LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x57 = 2925;
	static uint8_t x58 = 0U;
	int32_t x59 = -1;
	volatile int16_t x60 = -1520;
	volatile int32_t t11 = -25000;

	t11 = (((x57+x58)*x59)+x60);

	if (t11 != -4445) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x61 = UINT16_MAX;
	int16_t x62 = INT16_MIN;
	int16_t x63 = INT16_MAX;
	int8_t x64 = INT8_MIN;
	volatile int32_t t12 = -1040469807;

	t12 = (((x61+x62)*x63)+x64);

	if (t12 != 1073676161) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x69 = -1;
	int16_t x70 = INT16_MAX;
	volatile int16_t x71 = -1;
	int16_t x72 = 3;

	t13 = (((x69+x70)*x71)+x72);

	if (t13 != -32763) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x73 = 12993;
	volatile int8_t x74 = INT8_MAX;
	int8_t x76 = INT8_MAX;
	uint32_t t14 = 148230U;

	t14 = (((x73+x74)*x75)+x76);

	if (t14 != 4294954303U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x81 = -1;
	int8_t x82 = INT8_MIN;
	static volatile int8_t x83 = INT8_MIN;
	int8_t x84 = 0;

	t15 = (((x81+x82)*x83)+x84);

	if (t15 != 16512) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x85 = -1;
	uint16_t x86 = 433U;
	int8_t x87 = -1;
	volatile uint8_t x88 = 1U;
	int32_t t16 = 134647720;

	t16 = (((x85+x86)*x87)+x88);

	if (t16 != -431) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x89 = 8235071281LL;
	uint16_t x90 = 0U;
	int16_t x91 = -2959;
	volatile int64_t t17 = -36489994973LL;

	t17 = (((x89+x90)*x91)+x92);

	if (t17 != -24367575953247LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x97 = INT32_MIN;
	int16_t x99 = 16;
	volatile uint64_t x100 = 470431332352686241LLU;
	uint64_t t18 = 29123598749133LLU;

	t18 = (((x97+x98)*x99)+x100);

	if (t18 != 470431332371984785LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int8_t x101 = -3;
	uint8_t x102 = 16U;
	static int32_t x103 = -90;
	int16_t x104 = -1;
	volatile int32_t t19 = -1;

	t19 = (((x101+x102)*x103)+x104);

	if (t19 != -1171) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x105 = 449U;
	int32_t x106 = -735158305;
	int8_t x107 = -1;
	int32_t x108 = 19640936;
	volatile uint32_t t20 = 34455704U;

	t20 = (((x105+x106)*x107)+x108);

	if (t20 != 754798792U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x109 = 5671U;
	uint32_t x110 = 113U;
	int8_t x112 = INT8_MAX;
	volatile uint32_t t21 = 29U;

	t21 = (((x109+x110)*x111)+x112);

	if (t21 != 4292781071U) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x119 = 1274U;
	volatile uint16_t x120 = 9183U;
	int32_t t22 = 9899476;

	t22 = (((x117+x118)*x119)+x120);

	if (t22 != -150067) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x121 = -1;
	uint16_t x122 = 60U;
	int8_t x123 = -1;
	static volatile int64_t x124 = INT64_MAX;
	volatile int64_t t23 = 0LL;

	t23 = (((x121+x122)*x123)+x124);

	if (t23 != 9223372036854775748LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x129 = INT16_MAX;
	int16_t x132 = 0;
	uint64_t t24 = 4676808LLU;

	t24 = (((x129+x130)*x131)+x132);

	if (t24 != 33022LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x133 = UINT8_MAX;
	uint16_t x134 = 1U;
	uint32_t x135 = UINT32_MAX;
	int8_t x136 = INT8_MAX;
	uint32_t t25 = 254U;

	t25 = (((x133+x134)*x135)+x136);

	if (t25 != 4294967167U) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x137 = INT8_MIN;
	static int8_t x138 = INT8_MIN;
	int64_t x139 = -187550465662LL;
	int64_t x140 = INT64_MIN;

	t26 = (((x137+x138)*x139)+x140);

	if (t26 != -9223324023935566336LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x149 = INT16_MIN;
	uint64_t x150 = UINT64_MAX;
	uint32_t x152 = UINT32_MAX;
	static uint64_t t27 = 2LLU;

	t27 = (((x149+x150)*x151)+x152);

	if (t27 != 9223372041149743103LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x157 = INT8_MAX;
	static int8_t x158 = 48;
	int64_t x159 = 511140570LL;
	int64_t x160 = -12867874614010LL;

	t28 = (((x157+x158)*x159)+x160);

	if (t28 != -12778425014260LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x161 = INT16_MIN;
	int16_t x162 = -1;
	int8_t x163 = -1;
	int32_t x164 = -1;
	volatile int32_t t29 = -1423;

	t29 = (((x161+x162)*x163)+x164);

	if (t29 != 32768) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int16_t x166 = 829;
	volatile int8_t x168 = INT8_MAX;
	volatile uint32_t t30 = 2757296U;

	t30 = (((x165+x166)*x167)+x168);

	if (t30 != 1980870036U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x177 = INT16_MIN;
	uint16_t x180 = 1U;
	uint64_t t31 = 8040LLU;

	t31 = (((x177+x178)*x179)+x180);

	if (t31 != 5565247442718696863LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x181 = INT8_MIN;
	int16_t x182 = INT16_MIN;
	volatile uint8_t x183 = 2U;

	t32 = (((x181+x182)*x183)+x184);

	if (t32 != 9223372036854710015LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x185 = INT16_MAX;
	uint64_t x186 = 13221658925017LLU;
	int16_t x187 = -1;
	uint32_t x188 = UINT32_MAX;
	static volatile uint64_t t33 = 37582245LLU;

	t33 = (((x185+x186)*x187)+x188);

	if (t33 != 18446730856345561127LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x189 = INT16_MAX;
	int8_t x191 = 2;
	int16_t x192 = INT16_MIN;
	volatile int32_t t34 = -454936;

	t34 = (((x189+x190)*x191)+x192);

	if (t34 != 32764) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x198 = -3;
	volatile uint64_t x199 = 13LLU;
	int8_t x200 = INT8_MAX;
	volatile uint64_t t35 = 8676995LLU;

	t35 = (((x197+x198)*x199)+x200);

	if (t35 != 9223372036854775883LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x205 = 1LL;
	uint32_t x206 = 2111244U;
	int32_t x207 = -92282;
	static uint64_t x208 = 217053583LLU;

	t36 = (((x205+x206)*x207)+x208);

	if (t36 != 18446743879096694109LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x210 = UINT32_MAX;
	uint16_t x211 = UINT16_MAX;
	static uint64_t x212 = 1310743LLU;
	uint64_t t37 = 1012904LLU;

	t37 = (((x209+x210)*x211)+x212);

	if (t37 != 2148630553LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x213 = 122U;
	int16_t x214 = -10;
	uint16_t x215 = 16270U;
	uint32_t x216 = 15755U;
	uint32_t t38 = 1773U;

	t38 = (((x213+x214)*x215)+x216);

	if (t38 != 1837995U) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x225 = -6;
	static int16_t x227 = -1;
	volatile uint8_t x228 = 120U;

	t39 = (((x225+x226)*x227)+x228);

	if (t39 != 254) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x229 = UINT16_MAX;
	static uint16_t x230 = 10U;
	static volatile uint16_t x231 = 3232U;
	int16_t x232 = INT16_MIN;
	volatile int32_t t40 = 837405;

	t40 = (((x229+x230)*x231)+x232);

	if (t40 != 211808672) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x233 = 0U;
	uint16_t x234 = UINT16_MAX;
	volatile int32_t x235 = -1;
	int32_t t41 = 97;

	t41 = (((x233+x234)*x235)+x236);

	if (t41 != -65518) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x246 = -63;
	uint8_t x248 = UINT8_MAX;
	volatile int32_t t42 = -46928;

	t42 = (((x245+x246)*x247)+x248);

	if (t42 != -31642) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x249 = UINT64_MAX;
	int16_t x250 = -1;
	uint8_t x251 = UINT8_MAX;
	uint8_t x252 = UINT8_MAX;
	volatile uint64_t t43 = 17903748524081583LLU;

	t43 = (((x249+x250)*x251)+x252);

	if (t43 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x253 = 13908441312412LLU;
	volatile int32_t x255 = INT32_MAX;
	int16_t x256 = INT16_MIN;
	volatile uint64_t t44 = 54170601LLU;

	t44 = (((x253+x254)*x255)+x256);

	if (t44 != 2871618360436282197LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x265 = UINT16_MAX;
	int64_t x266 = -1LL;
	int32_t x267 = 0;
	static int64_t x268 = -8006LL;
	int64_t t45 = -652LL;

	t45 = (((x265+x266)*x267)+x268);

	if (t45 != -8006LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x269 = UINT16_MAX;
	int64_t x271 = 0LL;
	int64_t x272 = -1LL;
	volatile int64_t t46 = -177657002LL;

	t46 = (((x269+x270)*x271)+x272);

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x273 = UINT64_MAX;
	int16_t x275 = 12;
	uint8_t x276 = 0U;
	static volatile uint64_t t47 = 10345152533699514LLU;

	t47 = (((x273+x274)*x275)+x276);

	if (t47 != 18446744073619381120LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x277 = 1;
	int32_t x278 = -1;
	uint64_t x279 = 28935718LLU;
	int32_t x280 = INT32_MAX;
	static uint64_t t48 = 32226990490LLU;

	t48 = (((x277+x278)*x279)+x280);

	if (t48 != 2147483647LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x281 = 1;
	uint16_t x282 = 634U;
	int8_t x283 = INT8_MIN;
	static int32_t t49 = 32478;

	t49 = (((x281+x282)*x283)+x284);

	if (t49 != -81279) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x285 = INT64_MAX;
	static uint32_t x287 = UINT32_MAX;
	uint64_t t50 = 4408LLU;

	t50 = (((x285+x286)*x287)+x288);

	if (t50 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x289 = -1LL;
	int8_t x292 = INT8_MIN;
	volatile int64_t t51 = -1085011066779128LL;

	t51 = (((x289+x290)*x291)+x292);

	if (t51 != -512LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x293 = 1327474595U;
	int8_t x295 = INT8_MIN;
	volatile uint32_t x296 = UINT32_MAX;
	volatile int64_t t52 = 490328456027674LL;

	t52 = (((x293+x294)*x295)+x296);

	if (t52 != -177768827649LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x297 = 80U;
	static int8_t x299 = INT8_MIN;
	int32_t t53 = 2329;

	t53 = (((x297+x298)*x299)+x300);

	if (t53 != -5131) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int32_t x301 = 30210766;
	static volatile uint64_t x303 = UINT64_MAX;
	static int32_t x304 = INT32_MIN;
	static volatile uint64_t t54 = 156775099339LLU;

	t54 = (((x301+x302)*x303)+x304);

	if (t54 != 18446744071531809976LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int8_t x305 = INT8_MAX;
	int8_t x306 = 2;
	static uint64_t x307 = 6964310181284216LLU;
	int64_t x308 = INT64_MIN;
	static volatile uint64_t t55 = 388673367987434LLU;

	t55 = (((x305+x306)*x307)+x308);

	if (t55 != 10121768050240439672LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x309 = -31643626LL;
	int8_t x310 = -1;
	int32_t x311 = -1;
	int16_t x312 = INT16_MIN;
	static int64_t t56 = -1876024LL;

	t56 = (((x309+x310)*x311)+x312);

	if (t56 != 31610859LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x313 = INT8_MAX;
	int32_t x314 = -1;
	static uint64_t x315 = UINT64_MAX;
	volatile int64_t x316 = INT64_MAX;
	static uint64_t t57 = 97972543623LLU;

	t57 = (((x313+x314)*x315)+x316);

	if (t57 != 9223372036854775681LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x317 = INT16_MIN;
	volatile int64_t t58 = 1450LL;

	t58 = (((x317+x318)*x319)+x320);

	if (t58 != -2147450880LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x329 = 2759U;
	volatile int64_t x330 = -1LL;
	static int8_t x331 = -2;
	static int64_t t59 = 7163211LL;

	t59 = (((x329+x330)*x331)+x332);

	if (t59 != -5517LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x333 = -10985461LL;
	int16_t x334 = -1;
	int64_t t60 = -1998LL;

	t60 = (((x333+x334)*x335)+x336);

	if (t60 != 14368984295LL) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint16_t x337 = 51U;
	static uint16_t x338 = 1U;
	static int64_t x339 = -1LL;
	volatile int16_t x340 = -15467;
	int64_t t61 = -5269612LL;

	t61 = (((x337+x338)*x339)+x340);

	if (t61 != -15519LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x341 = 46;
	static uint32_t x342 = UINT32_MAX;
	volatile uint32_t t62 = UINT32_MAX;

	t62 = (((x341+x342)*x343)+x344);

	if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int16_t x345 = INT16_MAX;
	int8_t x346 = INT8_MAX;
	static volatile int16_t x347 = INT16_MAX;
	int8_t x348 = -1;
	static volatile int32_t t63 = -14691;

	t63 = (((x345+x346)*x347)+x348);

	if (t63 != 1077837697) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x349 = -1;
	int32_t x350 = -1;
	uint64_t x351 = 57120618852LLU;
	uint64_t t64 = 2221650079150887027LLU;

	t64 = (((x349+x350)*x351)+x352);

	if (t64 != 18446743959483646766LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x353 = INT16_MIN;
	uint8_t x354 = 0U;
	uint32_t x355 = UINT32_MAX;
	volatile uint64_t t65 = 307713441LLU;

	t65 = (((x353+x354)*x355)+x356);

	if (t65 != 134256942967016938LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x362 = INT8_MAX;
	uint32_t x363 = 244U;
	uint64_t t66 = 465066LLU;

	t66 = (((x361+x362)*x363)+x364);

	if (t66 != 16939521708457720968LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint32_t x365 = 1U;
	int8_t x367 = INT8_MIN;
	int8_t x368 = -15;
	volatile uint32_t t67 = 56130161U;

	t67 = (((x365+x366)*x367)+x368);

	if (t67 != 4294967281U) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x370 = 9750787496310989LLU;
	int32_t x371 = INT32_MAX;
	static volatile int32_t x372 = INT32_MIN;

	t68 = (((x369+x370)*x371)+x372);

	if (t68 != 1179265920766281524LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x379 = 1;
	volatile int64_t t69 = -9725413LL;

	t69 = (((x377+x378)*x379)+x380);

	if (t69 != 111904335492959454LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x383 = INT64_MIN;
	volatile int32_t x384 = INT32_MAX;
	uint64_t t70 = 1053710900845LLU;

	t70 = (((x381+x382)*x383)+x384);

	if (t70 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x389 = INT64_MAX;
	int64_t x390 = INT64_MIN;
	volatile uint16_t x391 = UINT16_MAX;
	uint8_t x392 = 31U;

	t71 = (((x389+x390)*x391)+x392);

	if (t71 != -65504LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x393 = INT16_MIN;
	int16_t x394 = INT16_MIN;
	int16_t x395 = -1;
	static int8_t x396 = INT8_MAX;
	volatile int32_t t72 = 89818;

	t72 = (((x393+x394)*x395)+x396);

	if (t72 != 65663) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x405 = 3;
	uint8_t x407 = 32U;
	uint32_t x408 = 7931U;
	uint32_t t73 = 39868U;

	t73 = (((x405+x406)*x407)+x408);

	if (t73 != 7995U) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x413 = 1904U;
	int64_t x414 = 3532LL;
	uint64_t x415 = 17170666615240LLU;

	t74 = (((x413+x414)*x415)+x416);

	if (t74 != 93339743720444639LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x417 = 16;
	uint32_t x420 = UINT32_MAX;
	uint32_t t75 = 6U;

	t75 = (((x417+x418)*x419)+x420);

	if (t75 != 4294965465U) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x422 = 342;
	uint8_t x423 = UINT8_MAX;
	static int32_t x424 = 14964;
	volatile uint64_t t76 = 196491041LLU;

	t76 = (((x421+x422)*x423)+x424);

	if (t76 != 25834190365487124LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x425 = 16U;
	int16_t x426 = 60;
	int16_t x427 = INT16_MAX;
	int16_t x428 = INT16_MAX;

	t77 = (((x425+x426)*x427)+x428);

	if (t77 != 2523059U) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x433 = 5390793373689LLU;
	int8_t x434 = INT8_MAX;
	int32_t x435 = 11;
	int32_t x436 = INT32_MAX;
	volatile uint64_t t78 = 2LLU;

	t78 = (((x433+x434)*x435)+x436);

	if (t78 != 59300874595623LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x437 = -1;
	volatile uint64_t x438 = 414977154847LLU;
	uint8_t x439 = 7U;
	int8_t x440 = INT8_MIN;
	volatile uint64_t t79 = 3LLU;

	t79 = (((x437+x438)*x439)+x440);

	if (t79 != 2904840083794LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x445 = INT8_MIN;
	static int8_t x446 = -1;
	volatile int16_t x448 = -1;
	uint32_t t80 = 461U;

	t80 = (((x445+x446)*x447)+x448);

	if (t80 != 128U) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x457 = UINT16_MAX;
	int64_t x458 = -1LL;
	int8_t x459 = 63;
	uint8_t x460 = 4U;
	static volatile int64_t t81 = -37568669420901LL;

	t81 = (((x457+x458)*x459)+x460);

	if (t81 != 4128646LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x462 = INT64_MIN;
	static volatile int64_t x463 = -1LL;
	int16_t x464 = INT16_MIN;

	t82 = (((x461+x462)*x463)+x464);

	if (t82 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x469 = INT16_MAX;
	static int8_t x470 = 43;
	static int64_t x471 = -1LL;
	volatile uint64_t x472 = 20087695LLU;

	t83 = (((x469+x470)*x471)+x472);

	if (t83 != 20054885LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x473 = UINT32_MAX;
	static int8_t x474 = -1;
	uint8_t x475 = 7U;

	t84 = (((x473+x474)*x475)+x476);

	if (t84 != 113U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x486 = -1;
	int16_t x487 = -1;
	int64_t x488 = -3139414642844632324LL;
	volatile int64_t t85 = -397575234596LL;

	t85 = (((x485+x486)*x487)+x488);

	if (t85 != -3139414642844632336LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x489 = 280732278;
	static int8_t x490 = -1;
	volatile int32_t x492 = -112971550;

	t86 = (((x489+x490)*x491)+x492);

	if (t86 != 3901263469U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x493 = 234077670247LLU;
	int32_t x494 = -1;
	static int64_t x495 = INT64_MIN;
	static int8_t x496 = -1;
	uint64_t t87 = UINT64_MAX;

	t87 = (((x493+x494)*x495)+x496);

	if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x497 = 13U;
	uint16_t x498 = UINT16_MAX;
	volatile int64_t x499 = -93LL;
	volatile uint16_t x500 = 2031U;
	int64_t t88 = 40726017LL;

	t88 = (((x497+x498)*x499)+x500);

	if (t88 != -6093933LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x501 = INT16_MAX;
	int8_t x502 = 5;
	int16_t x503 = 0;
	static int32_t x504 = INT32_MIN;

	t89 = (((x501+x502)*x503)+x504);

	if (t89 != INT32_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x505 = INT8_MAX;
	int64_t x506 = 19885LL;
	uint64_t x507 = 121257731716727463LLU;
	int8_t x508 = INT8_MIN;
	volatile uint64_t t90 = 1494118LLU;

	t90 = (((x505+x506)*x507)+x508);

	if (t90 != 10086253459198727732LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x510 = INT8_MAX;
	static uint8_t x511 = 0U;
	volatile uint32_t x512 = UINT32_MAX;
	static volatile int64_t t91 = -1918099834312LL;

	t91 = (((x509+x510)*x511)+x512);

	if (t91 != 4294967295LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x513 = 1;
	uint64_t x514 = 1801540LLU;
	volatile int32_t x515 = INT32_MIN;
	int64_t x516 = -2245561449582115LL;
	static uint64_t t92 = 31LLU;

	t92 = (((x513+x514)*x515)+x516);

	if (t92 != 18440629732421267933LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x521 = UINT64_MAX;
	int64_t x523 = INT64_MIN;
	int16_t x524 = 0;
	static volatile uint64_t t93 = 0LLU;

	t93 = (((x521+x522)*x523)+x524);

	if (t93 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x525 = INT8_MAX;
	volatile int16_t x526 = 1;
	static int16_t x527 = INT16_MIN;
	static uint64_t x528 = 15487343LLU;
	static volatile uint64_t t94 = 5086227183LLU;

	t94 = (((x525+x526)*x527)+x528);

	if (t94 != 11293039LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x529 = 49748U;
	static int8_t x531 = -1;
	uint8_t x532 = 10U;

	t95 = (((x529+x530)*x531)+x532);

	if (t95 != 4294917559U) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x537 = INT32_MIN;
	static uint32_t x538 = UINT32_MAX;
	volatile uint64_t x539 = UINT64_MAX;
	uint8_t x540 = 93U;

	t96 = (((x537+x538)*x539)+x540);

	if (t96 != 18446744071562068062LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x541 = INT16_MIN;
	int16_t x543 = -10089;
	int16_t x544 = INT16_MIN;
	volatile int64_t t97 = 119319LL;

	t97 = (((x541+x542)*x543)+x544);

	if (t97 != 330573673LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x546 = INT16_MAX;
	static volatile int32_t x547 = -1;
	uint16_t x548 = 62U;
	int64_t t98 = 1016LL;

	t98 = (((x545+x546)*x547)+x548);

	if (t98 != 9223372036854743103LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x566 = -1;
	static int8_t x567 = INT8_MIN;
	uint8_t x568 = 51U;
	volatile int32_t t99 = 132734428;

	t99 = (((x565+x566)*x567)+x568);

	if (t99 != 69299) { NG(); } else { ; }
	
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

