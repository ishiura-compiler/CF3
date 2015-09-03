#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x1 = UINT32_MAX;
volatile uint8_t x5 = 26U;
uint8_t x13 = 51U;
int8_t x28 = 2;
uint16_t x29 = UINT16_MAX;
int16_t x30 = INT16_MIN;
static int16_t x31 = INT16_MIN;
volatile int64_t t7 = 667479094090124627LL;
int8_t x42 = 0;
volatile int32_t t8 = -393937;
uint32_t x51 = 1U;
volatile uint16_t x53 = 21396U;
uint64_t x59 = UINT64_MAX;
int32_t t11 = -1;
static volatile uint32_t x67 = UINT32_MAX;
int32_t x75 = -1;
int32_t x78 = INT32_MIN;
uint32_t x81 = UINT32_MAX;
int64_t t16 = -256130069967427470LL;
uint32_t x102 = UINT32_MAX;
int8_t x104 = INT8_MIN;
uint32_t t19 = 1252U;
int64_t x105 = -1LL;
volatile int16_t x108 = INT16_MAX;
static int64_t x110 = -390079846614329046LL;
volatile int64_t t21 = -149596080LL;
static int16_t x114 = INT16_MIN;
int64_t x123 = 40757LL;
static uint32_t t25 = 174U;
uint64_t x133 = UINT64_MAX;
uint8_t x145 = 23U;
volatile int32_t t30 = -2;
static volatile uint64_t x160 = 98687700669LLU;
volatile int64_t t31 = 31909LL;
static int64_t x161 = 2717677425156LL;
static volatile int64_t t32 = 218270952LL;
volatile uint64_t x172 = UINT64_MAX;
static volatile int32_t t36 = -1352464;
int16_t x197 = INT16_MIN;
uint16_t x198 = 110U;
volatile int8_t x200 = -1;
volatile int32_t t39 = -30;
int32_t t41 = 49682;
int32_t x221 = -9644702;
uint64_t x224 = 37250277066037955LLU;
volatile int64_t t44 = 3528754053754LL;
uint32_t x233 = 692436U;
int32_t x234 = 1;
int16_t x239 = INT16_MAX;
static int64_t x240 = INT64_MIN;
static volatile uint64_t x248 = 7727277112LLU;
int16_t x256 = 0;
static uint64_t t52 = 429681949602176916LLU;
uint32_t x268 = 13309390U;
uint8_t x275 = 47U;
uint16_t x276 = 505U;
static int64_t x277 = -1LL;
uint64_t x290 = 111741610LLU;
int32_t x294 = 87;
volatile uint64_t t58 = 1962315363328080LLU;
static volatile int8_t x297 = INT8_MIN;
static volatile uint16_t x314 = 296U;
volatile int16_t x321 = -1;
static uint64_t x327 = 117912207295959021LLU;
int16_t x337 = -1;
uint64_t x339 = 459261996242347964LLU;
volatile uint16_t x343 = 490U;
volatile int16_t x364 = INT16_MIN;
int64_t x368 = INT64_MIN;
uint32_t x372 = 0U;
uint8_t x377 = 51U;
int16_t x380 = INT16_MIN;
static int16_t x382 = 1;
int8_t x389 = INT8_MAX;
static int64_t x397 = 52429LL;
static int32_t x417 = INT32_MIN;
uint32_t x436 = 555303340U;
int16_t x454 = -1;
int8_t x455 = -1;
uint8_t x457 = UINT8_MAX;
uint8_t x464 = 5U;
volatile int64_t t86 = 5LL;
uint8_t x467 = 61U;
volatile int32_t x468 = -1;
volatile uint8_t x483 = 62U;
int8_t x485 = -1;
int32_t x488 = INT32_MIN;
uint32_t t90 = 1991414U;
int8_t x493 = 1;
int32_t x502 = INT32_MIN;
int16_t x504 = 15;
uint64_t x517 = 0LLU;
volatile int32_t t95 = 11996172;
int32_t x528 = INT32_MAX;
uint8_t x539 = 115U;
static int32_t x540 = -7976645;


void f0(void) {
	static int16_t x2 = -383;
	int8_t x3 = 0;
	uint16_t x4 = UINT16_MAX;
	volatile uint32_t t0 = 6267U;

	t0 = (x1*(x2+(x3<=x4)));

	if (t0 != 382U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x6 = 0U;
	int32_t x7 = INT32_MIN;
	uint64_t x8 = 23135532LLU;
	volatile int32_t t1 = 160511;

	t1 = (x5*(x6+(x7<=x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x14 = -37;
	int64_t x15 = -1LL;
	volatile int16_t x16 = -1;
	int32_t t2 = -3842565;

	t2 = (x13*(x14+(x15<=x16)));

	if (t2 != -1836) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x17 = UINT8_MAX;
	int32_t x18 = -1;
	volatile int8_t x19 = -2;
	volatile uint32_t x20 = 1988007U;
	volatile int32_t t3 = -2;

	t3 = (x17*(x18+(x19<=x20)));

	if (t3 != -255) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x21 = 4U;
	int8_t x22 = -1;
	int64_t x23 = INT64_MIN;
	static int8_t x24 = 0;
	static volatile uint32_t t4 = 351298U;

	t4 = (x21*(x22+(x23<=x24)));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x25 = UINT64_MAX;
	int64_t x26 = 8892243348043LL;
	volatile int64_t x27 = -1LL;
	volatile uint64_t t5 = 226103331594763LLU;

	t5 = (x25*(x26+(x27<=x28)));

	if (t5 != 18446735181466203572LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x32 = 18U;
	volatile int32_t t6 = 82;

	t6 = (x29*(x30+(x31<=x32)));

	if (t6 != -2147385345) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x37 = 3605890558985LL;
	int32_t x38 = -1;
	static uint32_t x39 = 1344540U;
	int8_t x40 = -1;

	t7 = (x37*(x38+(x39<=x40)));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x41 = INT16_MAX;
	int32_t x43 = INT32_MIN;
	static uint8_t x44 = 78U;

	t8 = (x41*(x42+(x43<=x44)));

	if (t8 != 32767) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x49 = INT16_MIN;
	volatile uint8_t x50 = 84U;
	int64_t x52 = -24286478841097750LL;
	int32_t t9 = -89294448;

	t9 = (x49*(x50+(x51<=x52)));

	if (t9 != -2752512) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x54 = -1;
	volatile int32_t x55 = INT32_MIN;
	static int64_t x56 = -94307798679LL;
	volatile int32_t t10 = 25;

	t10 = (x53*(x54+(x55<=x56)));

	if (t10 != -21396) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int8_t x57 = -1;
	int32_t x58 = -1;
	int32_t x60 = 1;

	t11 = (x57*(x58+(x59<=x60)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x65 = -2;
	int32_t x66 = -108508869;
	static int8_t x68 = INT8_MIN;
	volatile int32_t t12 = 1;

	t12 = (x65*(x66+(x67<=x68)));

	if (t12 != 217017738) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x73 = -1;
	volatile int32_t x74 = -1;
	int64_t x76 = INT64_MIN;
	volatile int32_t t13 = 61543422;

	t13 = (x73*(x74+(x75<=x76)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x77 = 1;
	volatile int32_t x79 = 71560597;
	uint64_t x80 = 542216670370LLU;
	int32_t t14 = 213347771;

	t14 = (x77*(x78+(x79<=x80)));

	if (t14 != -2147483647) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x82 = UINT64_MAX;
	int16_t x83 = INT16_MIN;
	volatile int64_t x84 = 1151648739318203LL;
	uint64_t t15 = 24244437LLU;

	t15 = (x81*(x82+(x83<=x84)));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x85 = 3328633788736LL;
	int16_t x86 = INT16_MIN;
	uint8_t x87 = UINT8_MAX;
	volatile uint16_t x88 = 0U;

	t16 = (x85*(x86+(x87<=x88)));

	if (t16 != -109072671989301248LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x89 = 2U;
	int64_t x90 = -1LL;
	int32_t x91 = -1;
	int16_t x92 = INT16_MIN;
	static volatile int64_t t17 = 1335623222LL;

	t17 = (x89*(x90+(x91<=x92)));

	if (t17 != -2LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x97 = 334U;
	volatile uint64_t x98 = UINT64_MAX;
	static int16_t x99 = -1;
	uint64_t x100 = UINT64_MAX;
	uint64_t t18 = 13902130419858690LLU;

	t18 = (x97*(x98+(x99<=x100)));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x101 = 423342451U;
	int32_t x103 = INT32_MAX;

	t19 = (x101*(x102+(x103<=x104)));

	if (t19 != 3871624845U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x106 = INT8_MIN;
	int16_t x107 = -9;
	volatile int64_t t20 = 110646001018LL;

	t20 = (x105*(x106+(x107<=x108)));

	if (t20 != 127LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x109 = 1U;
	volatile int64_t x111 = INT64_MAX;
	static uint64_t x112 = 3463188352358LLU;

	t21 = (x109*(x110+(x111<=x112)));

	if (t21 != -390079846614329046LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x113 = -13596;
	static int64_t x115 = INT64_MIN;
	uint8_t x116 = 0U;
	volatile int32_t t22 = 1;

	t22 = (x113*(x114+(x115<=x116)));

	if (t22 != 445500132) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x117 = -1;
	volatile int16_t x118 = INT16_MIN;
	static int8_t x119 = -3;
	int8_t x120 = -1;
	int32_t t23 = -3297926;

	t23 = (x117*(x118+(x119<=x120)));

	if (t23 != 32767) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x121 = -24;
	int8_t x122 = 0;
	uint8_t x124 = 32U;
	int32_t t24 = -1113011;

	t24 = (x121*(x122+(x123<=x124)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint32_t x129 = 1327721966U;
	int16_t x130 = INT16_MAX;
	volatile int32_t x131 = -1;
	static volatile uint8_t x132 = 28U;

	t25 = (x129*(x130+(x131<=x132)));

	if (t25 != 3069640704U) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x134 = INT16_MAX;
	volatile int64_t x135 = -1LL;
	int64_t x136 = 2284LL;
	volatile uint64_t t26 = 805LLU;

	t26 = (x133*(x134+(x135<=x136)));

	if (t26 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x141 = 1LL;
	volatile uint32_t x142 = 3U;
	static uint32_t x143 = UINT32_MAX;
	int16_t x144 = -1;
	volatile int64_t t27 = -2023977606118LL;

	t27 = (x141*(x142+(x143<=x144)));

	if (t27 != 4LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x146 = -1;
	static int32_t x147 = 411303604;
	uint32_t x148 = UINT32_MAX;
	static int32_t t28 = -65121;

	t28 = (x145*(x146+(x147<=x148)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x149 = -1;
	uint8_t x150 = 3U;
	int64_t x151 = -43331558145970556LL;
	uint64_t x152 = 55238342088507LLU;
	int32_t t29 = -455802942;

	t29 = (x149*(x150+(x151<=x152)));

	if (t29 != -3) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x153 = 13;
	volatile int8_t x154 = -1;
	int8_t x155 = -1;
	uint32_t x156 = UINT32_MAX;

	t30 = (x153*(x154+(x155<=x156)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x157 = -1LL;
	int8_t x158 = INT8_MAX;
	int64_t x159 = INT64_MIN;

	t31 = (x157*(x158+(x159<=x160)));

	if (t31 != -127LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x162 = -2;
	uint64_t x163 = 1332623876519LLU;
	uint32_t x164 = UINT32_MAX;

	t32 = (x161*(x162+(x163<=x164)));

	if (t32 != -5435354850312LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x165 = -1;
	uint64_t x166 = 1626096LLU;
	int8_t x167 = INT8_MIN;
	uint64_t x168 = 521678722934425LLU;
	volatile uint64_t t33 = 666180689LLU;

	t33 = (x165*(x166+(x167<=x168)));

	if (t33 != 18446744073707925520LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x169 = INT64_MIN;
	int64_t x170 = -1LL;
	int64_t x171 = INT64_MAX;
	volatile int64_t t34 = -11483881863376LL;

	t34 = (x169*(x170+(x171<=x172)));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x173 = 1405487LLU;
	volatile int64_t x174 = -80633389698LL;
	int16_t x175 = -325;
	int32_t x176 = -1;
	volatile uint64_t t35 = 1802708LLU;

	t35 = (x173*(x174+(x175<=x176)));

	if (t35 != 18333414892724484177LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x177 = 0;
	int32_t x178 = -4758;
	static uint32_t x179 = 1315801U;
	uint32_t x180 = 7U;

	t36 = (x177*(x178+(x179<=x180)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x181 = 5;
	int8_t x182 = INT8_MIN;
	volatile uint16_t x183 = UINT16_MAX;
	uint32_t x184 = UINT32_MAX;
	volatile int32_t t37 = -62;

	t37 = (x181*(x182+(x183<=x184)));

	if (t37 != -635) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x193 = -1;
	int32_t x194 = INT32_MIN;
	int16_t x195 = -1;
	static int64_t x196 = -1LL;
	static int32_t t38 = INT32_MAX;

	t38 = (x193*(x194+(x195<=x196)));

	if (t38 != INT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x199 = -4190793318162998LL;

	t39 = (x197*(x198+(x199<=x200)));

	if (t39 != -3637248) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x201 = INT16_MIN;
	int8_t x202 = INT8_MIN;
	int32_t x203 = 3771121;
	static uint64_t x204 = 3434402453607853096LLU;
	int32_t t40 = 3606;

	t40 = (x201*(x202+(x203<=x204)));

	if (t40 != 4161536) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x209 = 107;
	static uint16_t x210 = 4U;
	int64_t x211 = 8720918948807306LL;
	int64_t x212 = -5854474186315LL;

	t41 = (x209*(x210+(x211<=x212)));

	if (t41 != 428) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x213 = 87402157342LL;
	uint32_t x214 = UINT32_MAX;
	uint16_t x215 = 1U;
	int32_t x216 = INT32_MAX;
	int64_t t42 = 1650579781137LL;

	t42 = (x213*(x214+(x215<=x216)));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x222 = INT8_MIN;
	int8_t x223 = 1;
	volatile int32_t t43 = 27626639;

	t43 = (x221*(x222+(x223<=x224)));

	if (t43 != 1224877154) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x229 = -1LL;
	int32_t x230 = INT32_MIN;
	int64_t x231 = 157LL;
	uint8_t x232 = UINT8_MAX;

	t44 = (x229*(x230+(x231<=x232)));

	if (t44 != 2147483647LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x235 = 134020926LLU;
	volatile int8_t x236 = -1;
	volatile uint32_t t45 = 60835U;

	t45 = (x233*(x234+(x235<=x236)));

	if (t45 != 1384872U) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x237 = 9U;
	int32_t x238 = -1;
	static uint32_t t46 = 120679U;

	t46 = (x237*(x238+(x239<=x240)));

	if (t46 != 4294967287U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x241 = INT8_MIN;
	volatile uint16_t x242 = UINT16_MAX;
	uint64_t x243 = 73468478934604LLU;
	uint16_t x244 = 2U;
	volatile int32_t t47 = -20;

	t47 = (x241*(x242+(x243<=x244)));

	if (t47 != -8388480) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x245 = -1LL;
	int32_t x246 = -1;
	uint8_t x247 = 15U;
	int64_t t48 = 14835474462500LL;

	t48 = (x245*(x246+(x247<=x248)));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x249 = -224678594688553237LL;
	uint64_t x250 = 1470LLU;
	int16_t x251 = -29;
	volatile uint32_t x252 = UINT32_MAX;
	volatile uint64_t t49 = 228902397446LLU;

	t49 = (x249*(x250+(x251<=x252)));

	if (t49 != 1539180539910117461LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x253 = -38;
	volatile uint64_t x254 = 29664355LLU;
	uint64_t x255 = 16359LLU;
	volatile uint64_t t50 = 6491340525LLU;

	t50 = (x253*(x254+(x255<=x256)));

	if (t50 != 18446744072582306126LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x257 = 55825LL;
	int16_t x258 = 1;
	static int32_t x259 = -1;
	int32_t x260 = INT32_MIN;
	volatile int64_t t51 = -87362LL;

	t51 = (x257*(x258+(x259<=x260)));

	if (t51 != 55825LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x261 = -49865;
	uint64_t x262 = 2941358LLU;
	static volatile uint64_t x263 = 6743054LLU;
	volatile int64_t x264 = -3946899369870LL;

	t52 = (x261*(x262+(x263<=x264)));

	if (t52 != 18446743927038685081LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x265 = 7LLU;
	static volatile int32_t x266 = INT32_MIN;
	volatile int8_t x267 = -1;
	uint64_t t53 = 19523911466LLU;

	t53 = (x265*(x266+(x267<=x268)));

	if (t53 != 18446744058677166080LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x269 = 43U;
	uint64_t x270 = UINT64_MAX;
	static int8_t x271 = INT8_MIN;
	static int32_t x272 = INT32_MIN;
	volatile uint64_t t54 = 79093155LLU;

	t54 = (x269*(x270+(x271<=x272)));

	if (t54 != 18446744073709551573LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x273 = -233622427LL;
	static int16_t x274 = INT16_MAX;
	volatile int64_t t55 = 1319LL;

	t55 = (x273*(x274+(x275<=x276)));

	if (t55 != -7655339687936LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x278 = 16;
	int8_t x279 = 3;
	static int16_t x280 = INT16_MAX;
	static int64_t t56 = -9072470227LL;

	t56 = (x277*(x278+(x279<=x280)));

	if (t56 != -17LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x289 = INT64_MIN;
	int16_t x291 = -1;
	int32_t x292 = -8374848;
	uint64_t t57 = 1711781126439568LLU;

	t57 = (x289*(x290+(x291<=x292)));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint64_t x293 = 1645LLU;
	uint64_t x295 = 6LLU;
	int64_t x296 = INT64_MAX;

	t58 = (x293*(x294+(x295<=x296)));

	if (t58 != 144760LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x298 = 100U;
	int64_t x299 = 503275725550608LL;
	int64_t x300 = -1088157915317911LL;
	static volatile int32_t t59 = -2847441;

	t59 = (x297*(x298+(x299<=x300)));

	if (t59 != -12800) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x305 = INT16_MAX;
	static int8_t x306 = -1;
	uint64_t x307 = 22383137152541490LLU;
	int16_t x308 = INT16_MIN;
	int32_t t60 = 301541;

	t60 = (x305*(x306+(x307<=x308)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x309 = INT8_MIN;
	uint32_t x310 = 7412598U;
	int16_t x311 = INT16_MIN;
	int32_t x312 = 1805021;
	uint32_t t61 = 1453002U;

	t61 = (x309*(x310+(x311<=x312)));

	if (t61 != 3346154624U) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x313 = 22242;
	static volatile int8_t x315 = -1;
	static int8_t x316 = INT8_MIN;
	int32_t t62 = 2195251;

	t62 = (x313*(x314+(x315<=x316)));

	if (t62 != 6583632) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x317 = -1;
	uint8_t x318 = UINT8_MAX;
	static volatile int8_t x319 = -1;
	int32_t x320 = INT32_MIN;
	int32_t t63 = 92;

	t63 = (x317*(x318+(x319<=x320)));

	if (t63 != -255) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x322 = 0;
	int32_t x323 = INT32_MIN;
	volatile uint8_t x324 = UINT8_MAX;
	int32_t t64 = 27461651;

	t64 = (x321*(x322+(x323<=x324)));

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x325 = -1;
	static int8_t x326 = INT8_MAX;
	static int32_t x328 = 25518451;
	volatile int32_t t65 = 856696;

	t65 = (x325*(x326+(x327<=x328)));

	if (t65 != -127) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x338 = 78U;
	uint8_t x340 = UINT8_MAX;
	volatile int32_t t66 = -90172591;

	t66 = (x337*(x338+(x339<=x340)));

	if (t66 != -78) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x341 = -1;
	uint32_t x342 = 9508U;
	int64_t x344 = 155145265833303LL;
	static uint32_t t67 = 14391640U;

	t67 = (x341*(x342+(x343<=x344)));

	if (t67 != 4294957787U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x349 = INT16_MIN;
	volatile uint32_t x350 = 486757757U;
	int8_t x351 = -1;
	int16_t x352 = 14;
	volatile uint32_t t68 = 1687U;

	t68 = (x349*(x350+(x351<=x352)));

	if (t68 != 1430323200U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x353 = -1;
	int32_t x354 = 705326;
	int8_t x355 = -1;
	static int64_t x356 = INT64_MIN;
	int32_t t69 = -24942567;

	t69 = (x353*(x354+(x355<=x356)));

	if (t69 != -705326) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x357 = 205433751931LLU;
	volatile int8_t x358 = INT8_MIN;
	int64_t x359 = -1LL;
	int32_t x360 = -1;
	volatile uint64_t t70 = 728379LLU;

	t70 = (x357*(x358+(x359<=x360)));

	if (t70 != 18446717983623056379LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x361 = 101722667185868LL;
	int32_t x362 = -218;
	uint8_t x363 = 6U;
	volatile int64_t t71 = 7LL;

	t71 = (x361*(x362+(x363<=x364)));

	if (t71 != -22175541446519224LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x365 = INT16_MIN;
	int16_t x366 = INT16_MIN;
	volatile int64_t x367 = INT64_MAX;
	volatile int32_t t72 = 12219910;

	t72 = (x365*(x366+(x367<=x368)));

	if (t72 != 1073741824) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x369 = 3U;
	int16_t x370 = INT16_MIN;
	int64_t x371 = -1LL;
	int32_t t73 = 1046945;

	t73 = (x369*(x370+(x371<=x372)));

	if (t73 != -98301) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x378 = 367607LL;
	uint32_t x379 = 2U;
	volatile int64_t t74 = 5194172759371333LL;

	t74 = (x377*(x378+(x379<=x380)));

	if (t74 != 18748008LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x381 = -1;
	static volatile uint8_t x383 = UINT8_MAX;
	static volatile int16_t x384 = 9;
	volatile int32_t t75 = -359038920;

	t75 = (x381*(x382+(x383<=x384)));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x385 = -1;
	int64_t x386 = 936158976790035LL;
	volatile int32_t x387 = INT32_MAX;
	int32_t x388 = INT32_MIN;
	volatile int64_t t76 = 2276289939010169891LL;

	t76 = (x385*(x386+(x387<=x388)));

	if (t76 != -936158976790035LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x390 = -64;
	static uint32_t x391 = 674671U;
	int32_t x392 = -20654;
	int32_t t77 = -1;

	t77 = (x389*(x390+(x391<=x392)));

	if (t77 != -8001) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x398 = 5825U;
	static int64_t x399 = -1392844LL;
	static int32_t x400 = 4;
	int64_t t78 = 75092696LL;

	t78 = (x397*(x398+(x399<=x400)));

	if (t78 != 305451354LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x413 = INT8_MIN;
	volatile uint16_t x414 = 0U;
	uint8_t x415 = UINT8_MAX;
	uint32_t x416 = UINT32_MAX;
	static int32_t t79 = -536784121;

	t79 = (x413*(x414+(x415<=x416)));

	if (t79 != -128) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x418 = -1;
	volatile int64_t x419 = INT64_MIN;
	uint16_t x420 = UINT16_MAX;
	static volatile int32_t t80 = -194427707;

	t80 = (x417*(x418+(x419<=x420)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x433 = -28LL;
	volatile int16_t x434 = -1;
	static int32_t x435 = -1;
	volatile int64_t t81 = 2008904867062LL;

	t81 = (x433*(x434+(x435<=x436)));

	if (t81 != 28LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x437 = INT32_MAX;
	int32_t x438 = -1;
	uint8_t x439 = UINT8_MAX;
	static volatile int8_t x440 = -1;
	volatile int32_t t82 = -50657;

	t82 = (x437*(x438+(x439<=x440)));

	if (t82 != -2147483647) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x449 = 31;
	volatile int8_t x450 = 14;
	int64_t x451 = -1LL;
	uint8_t x452 = 0U;
	volatile int32_t t83 = -2015864;

	t83 = (x449*(x450+(x451<=x452)));

	if (t83 != 465) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x453 = -1;
	static int64_t x456 = -1LL;
	static volatile int32_t t84 = 129934;

	t84 = (x453*(x454+(x455<=x456)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x458 = 14083;
	uint8_t x459 = UINT8_MAX;
	static int32_t x460 = INT32_MIN;
	static int32_t t85 = 16672;

	t85 = (x457*(x458+(x459<=x460)));

	if (t85 != 3591165) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x461 = -674546171167LL;
	volatile int16_t x462 = INT16_MIN;
	int8_t x463 = INT8_MAX;

	t86 = (x461*(x462+(x463<=x464)));

	if (t86 != 22103528936800256LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x465 = 74U;
	volatile int8_t x466 = INT8_MIN;
	uint32_t t87 = 3373817U;

	t87 = (x465*(x466+(x467<=x468)));

	if (t87 != 4294957824U) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x469 = 4U;
	int32_t x470 = -1;
	uint8_t x471 = 30U;
	volatile int16_t x472 = INT16_MIN;
	int32_t t88 = 25;

	t88 = (x469*(x470+(x471<=x472)));

	if (t88 != -4) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x481 = INT16_MIN;
	int16_t x482 = -11;
	uint64_t x484 = 251916828205045LLU;
	int32_t t89 = -61240;

	t89 = (x481*(x482+(x483<=x484)));

	if (t89 != 327680) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x486 = 955841U;
	uint16_t x487 = 7010U;

	t90 = (x485*(x486+(x487<=x488)));

	if (t90 != 4294011455U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x494 = INT8_MIN;
	int8_t x495 = -1;
	uint64_t x496 = 207634679817564514LLU;
	volatile int32_t t91 = -93876;

	t91 = (x493*(x494+(x495<=x496)));

	if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x501 = UINT32_MAX;
	int16_t x503 = INT16_MIN;
	volatile uint32_t t92 = 3798019U;

	t92 = (x501*(x502+(x503<=x504)));

	if (t92 != 2147483647U) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x505 = UINT64_MAX;
	int16_t x506 = INT16_MIN;
	int32_t x507 = 1;
	volatile uint64_t x508 = UINT64_MAX;
	uint64_t t93 = 15203881420155138LLU;

	t93 = (x505*(x506+(x507<=x508)));

	if (t93 != 32767LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x518 = INT8_MAX;
	uint64_t x519 = 7250478926740507LLU;
	int8_t x520 = -1;
	volatile uint64_t t94 = 2367013667232276LLU;

	t94 = (x517*(x518+(x519<=x520)));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x521 = -1;
	static int8_t x522 = INT8_MAX;
	int64_t x523 = INT64_MIN;
	volatile int16_t x524 = 11633;

	t95 = (x521*(x522+(x523<=x524)));

	if (t95 != -128) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x525 = UINT64_MAX;
	uint16_t x526 = UINT16_MAX;
	static uint32_t x527 = 312890291U;
	volatile uint64_t t96 = 320201926LLU;

	t96 = (x525*(x526+(x527<=x528)));

	if (t96 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x529 = -1;
	int64_t x530 = -1LL;
	int16_t x531 = -1;
	uint32_t x532 = UINT32_MAX;
	static volatile int64_t t97 = -14138980960LL;

	t97 = (x529*(x530+(x531<=x532)));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x537 = 33382U;
	volatile uint64_t x538 = 4LLU;
	uint64_t t98 = 1920065366637095507LLU;

	t98 = (x537*(x538+(x539<=x540)));

	if (t98 != 133528LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x541 = 2U;
	uint32_t x542 = 29U;
	int8_t x543 = INT8_MIN;
	static volatile uint32_t x544 = 23288U;
	uint32_t t99 = 3146203U;

	t99 = (x541*(x542+(x543<=x544)));

	if (t99 != 58U) { NG(); } else { ; }
	
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

