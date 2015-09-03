#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x7 = INT32_MAX;
static uint64_t t0 = 22LLU;
int8_t x13 = INT8_MAX;
static volatile uint8_t x18 = UINT8_MAX;
int8_t x21 = -29;
int64_t t4 = 47803815894LL;
volatile int32_t x32 = INT32_MAX;
int32_t x39 = INT32_MIN;
static int64_t x53 = -1375616247364836692LL;
uint16_t x62 = UINT16_MAX;
static int64_t x63 = INT64_MIN;
int64_t t12 = 12821924026LL;
volatile int64_t x82 = INT64_MIN;
uint32_t x83 = UINT32_MAX;
int16_t x85 = INT16_MIN;
volatile int32_t t15 = -1239049;
int16_t x94 = INT16_MIN;
static int32_t t18 = 52209423;
volatile int32_t x114 = -1;
volatile int64_t t19 = 1487761LL;
uint32_t x117 = 482U;
uint8_t x120 = UINT8_MAX;
volatile int8_t x127 = 1;
static int8_t x130 = -1;
uint8_t x135 = 3U;
uint32_t x138 = UINT32_MAX;
uint8_t x142 = UINT8_MAX;
int32_t x144 = INT32_MIN;
static int8_t x158 = INT8_MIN;
int32_t x159 = -1;
volatile int16_t x160 = INT16_MIN;
int8_t x166 = INT8_MIN;
int16_t x170 = 2;
int16_t x171 = INT16_MAX;
volatile int32_t x175 = INT32_MIN;
static volatile uint64_t x177 = 95666057381577LLU;
uint64_t x178 = 24408810603LLU;
uint64_t x179 = UINT64_MAX;
volatile uint64_t t33 = 12125703964570LLU;
int64_t x182 = -13541878LL;
int32_t x184 = -1;
uint32_t x196 = 2U;
uint32_t t36 = 4U;
static int64_t x223 = INT64_MIN;
volatile uint64_t x231 = UINT64_MAX;
int16_t x251 = INT16_MAX;
volatile uint32_t x254 = UINT32_MAX;
volatile int16_t x255 = INT16_MAX;
int16_t x256 = 1;
int64_t x267 = INT64_MIN;
static volatile uint32_t t47 = 4737769U;
static uint16_t x276 = 9U;
int8_t x279 = INT8_MIN;
uint64_t t49 = 561645LLU;
uint8_t x282 = 7U;
volatile int64_t t50 = 2099197878LL;
uint64_t x285 = 8919840785399985066LLU;
int16_t x288 = INT16_MIN;
uint8_t x291 = 103U;
uint64_t x292 = 461986218830340LLU;
static int8_t x301 = -6;
volatile int8_t x308 = INT8_MAX;
uint64_t x309 = UINT64_MAX;
uint32_t x311 = 1114581635U;
int32_t x316 = -49827;
volatile uint32_t x318 = 13772U;
int32_t x321 = -1;
uint64_t x329 = 98790LLU;
int16_t x335 = INT16_MAX;
int8_t x338 = -37;
volatile uint8_t x345 = 12U;
uint8_t x347 = 1U;
uint64_t t64 = 1959756437617LLU;
volatile int32_t x350 = -1;
volatile int8_t x352 = INT8_MIN;
int32_t x370 = -1;
static volatile int64_t x371 = INT64_MIN;
uint32_t x375 = 322U;
uint64_t x382 = 105365015770179LLU;
volatile uint64_t t77 = 198909436431319909LLU;
volatile uint64_t t78 = 540023073350385483LLU;
volatile uint64_t x421 = 2863LLU;
static uint64_t t79 = 40869483LLU;
uint8_t x425 = 3U;
static uint8_t x437 = 0U;
volatile int32_t t83 = 5037;
uint64_t x449 = UINT64_MAX;
static volatile int16_t x452 = 713;
int8_t x456 = 1;
volatile int16_t x466 = 6;
volatile int16_t x468 = INT16_MIN;
int64_t x477 = INT64_MIN;
volatile int8_t x484 = INT8_MAX;
uint32_t x488 = UINT32_MAX;
volatile uint64_t t92 = 1723028735872192LLU;
int8_t x507 = INT8_MIN;
int8_t x514 = -2;
uint32_t x525 = 7735U;
uint64_t x526 = 1211033734115630447LLU;
int8_t x528 = INT8_MAX;
uint64_t t98 = 21458070707138773LLU;
int32_t x532 = -2;


void f0(void) {
	volatile uint16_t x5 = 535U;
	volatile uint64_t x6 = 759891902226LLU;
	int32_t x8 = INT32_MIN;

	t0 = ((x5*(x6|x7))%x8);

	if (t0 != 406711928094185LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = INT64_MIN;
	static uint64_t x10 = 452370421085LLU;
	uint16_t x11 = UINT16_MAX;
	int64_t x12 = -1LL;
	volatile uint64_t t1 = 1801LLU;

	t1 = ((x9*(x10|x11))%x12);

	if (t1 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int8_t x14 = INT8_MIN;
	int32_t x15 = 5635421;
	uint16_t x16 = UINT16_MAX;
	int32_t t2 = 478167461;

	t2 = ((x13*(x14|x15))%x16);

	if (t2 != -4445) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x17 = -61;
	uint8_t x19 = 6U;
	int32_t x20 = 6396246;
	int32_t t3 = -51986578;

	t3 = ((x17*(x18|x19))%x20);

	if (t3 != -15555) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x22 = INT16_MIN;
	static int8_t x23 = INT8_MAX;
	static int64_t x24 = 385LL;

	t4 = ((x21*(x22|x23))%x24);

	if (t4 != 259LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = INT8_MIN;
	uint64_t x26 = 964721LLU;
	int64_t x27 = INT64_MIN;
	volatile int16_t x28 = -1067;
	volatile uint64_t t5 = 644895902159LLU;

	t5 = ((x25*(x26|x27))%x28);

	if (t5 != 18446744073586067328LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = -1LL;
	int8_t x30 = 3;
	static volatile uint64_t x31 = UINT64_MAX;
	static uint64_t t6 = 8958LLU;

	t6 = ((x29*(x30|x31))%x32);

	if (t6 != 1LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = INT16_MAX;
	int32_t x38 = INT32_MAX;
	int32_t x40 = -7;
	int32_t t7 = 875985;

	t7 = ((x37*(x38|x39))%x40);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x41 = INT8_MAX;
	uint32_t x42 = UINT32_MAX;
	int16_t x43 = 1;
	static volatile int8_t x44 = INT8_MAX;
	volatile uint32_t t8 = 2411318U;

	t8 = ((x41*(x42|x43))%x44);

	if (t8 != 16U) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x49 = UINT64_MAX;
	int32_t x50 = -3956215;
	static int64_t x51 = INT64_MIN;
	int64_t x52 = INT64_MIN;
	volatile uint64_t t9 = 2444188243675LLU;

	t9 = ((x49*(x50|x51))%x52);

	if (t9 != 3956215LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x54 = INT64_MIN;
	volatile uint64_t x55 = 31685LLU;
	int16_t x56 = 5;
	volatile uint64_t t10 = 29249LLU;

	t10 = ((x53*(x54|x55))%x56);

	if (t10 != 3LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x57 = 3746;
	static int8_t x58 = 50;
	volatile int64_t x59 = 16854587004323LL;
	int64_t x60 = -1LL;
	volatile int64_t t11 = -10LL;

	t11 = ((x57*(x58|x59))%x60);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x61 = 1;
	int8_t x64 = -1;

	t12 = ((x61*(x62|x63))%x64);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x77 = 893;
	int8_t x78 = INT8_MIN;
	int8_t x79 = INT8_MIN;
	uint8_t x80 = 49U;
	volatile int32_t t13 = 284;

	t13 = ((x77*(x78|x79))%x80);

	if (t13 != -36) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x81 = 0;
	uint64_t x84 = UINT64_MAX;
	volatile uint64_t t14 = 1486252LLU;

	t14 = ((x81*(x82|x83))%x84);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x86 = -1;
	uint8_t x87 = 1U;
	int16_t x88 = 7;

	t15 = ((x85*(x86|x87))%x88);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x93 = INT16_MAX;
	volatile int32_t x95 = INT32_MIN;
	uint8_t x96 = UINT8_MAX;
	int32_t t16 = 224171;

	t16 = ((x93*(x94|x95))%x96);

	if (t16 != -191) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x101 = INT8_MIN;
	int8_t x102 = INT8_MIN;
	static uint16_t x103 = 30U;
	uint8_t x104 = 46U;
	volatile int32_t t17 = 8231;

	t17 = ((x101*(x102|x103))%x104);

	if (t17 != 32) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x109 = -1;
	int32_t x110 = -1;
	uint16_t x111 = UINT16_MAX;
	static int16_t x112 = INT16_MIN;

	t18 = ((x109*(x110|x111))%x112);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x113 = -42LL;
	int32_t x115 = 882333756;
	volatile int8_t x116 = -6;

	t19 = ((x113*(x114|x115))%x116);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x118 = INT16_MIN;
	int32_t x119 = -1;
	volatile uint32_t t20 = 448U;

	t20 = ((x117*(x118|x119))%x120);

	if (t20 != 29U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x121 = INT16_MIN;
	int8_t x122 = INT8_MIN;
	int16_t x123 = INT16_MAX;
	static int32_t x124 = INT32_MIN;
	int32_t t21 = -9040;

	t21 = ((x121*(x122|x123))%x124);

	if (t21 != 32768) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x125 = 17910368804685995LLU;
	int32_t x126 = -1;
	uint32_t x128 = UINT32_MAX;
	uint64_t t22 = 3340624900LLU;

	t22 = ((x125*(x126|x127))%x128);

	if (t22 != 1297749491LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x129 = UINT32_MAX;
	int32_t x131 = INT32_MIN;
	static int16_t x132 = 4;
	uint32_t t23 = 929268U;

	t23 = ((x129*(x130|x131))%x132);

	if (t23 != 1U) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int64_t x133 = -1LL;
	uint16_t x134 = 7U;
	volatile uint16_t x136 = 147U;
	int64_t t24 = -287978534580627230LL;

	t24 = ((x133*(x134|x135))%x136);

	if (t24 != -7LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x137 = -1;
	static int32_t x139 = INT32_MIN;
	static int8_t x140 = 12;
	uint32_t t25 = 15U;

	t25 = ((x137*(x138|x139))%x140);

	if (t25 != 1U) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x141 = -1LL;
	volatile int64_t x143 = INT64_MIN;
	int64_t t26 = -23580456LL;

	t26 = ((x141*(x142|x143))%x144);

	if (t26 != 2147483393LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x149 = 1189151722U;
	int32_t x150 = INT32_MIN;
	int64_t x151 = INT64_MAX;
	uint64_t x152 = 114275LLU;
	uint64_t t27 = 114394209853734LLU;

	t27 = ((x149*(x150|x151))%x152);

	if (t27 != 43469LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x157 = -29370;
	int32_t t28 = -15725054;

	t28 = ((x157*(x158|x159))%x160);

	if (t28 != 29370) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x161 = 40U;
	static uint64_t x162 = 913345345LLU;
	static uint64_t x163 = UINT64_MAX;
	static int16_t x164 = -1;
	uint64_t t29 = 4609LLU;

	t29 = ((x161*(x162|x163))%x164);

	if (t29 != 18446744073709551576LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x165 = INT8_MAX;
	volatile int8_t x167 = INT8_MIN;
	int8_t x168 = INT8_MIN;
	int32_t t30 = -60;

	t30 = ((x165*(x166|x167))%x168);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x169 = 42898LLU;
	static volatile int8_t x172 = -4;
	volatile uint64_t t31 = 7135851302224706LLU;

	t31 = ((x169*(x170|x171))%x172);

	if (t31 != 1405638766LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x173 = INT8_MIN;
	static int8_t x174 = -2;
	int32_t x176 = 59368118;
	int32_t t32 = -1409;

	t32 = ((x173*(x174|x175))%x176);

	if (t32 != 256) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x180 = 259143546124727916LLU;

	t33 = ((x177*(x178|x179))%x180);

	if (t33 != 47456632796488003LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x181 = -1;
	int8_t x183 = 0;
	volatile int64_t t34 = 6790LL;

	t34 = ((x181*(x182|x183))%x184);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x185 = 1U;
	int16_t x186 = -8;
	volatile int16_t x187 = INT16_MIN;
	int32_t x188 = -41612642;
	volatile int32_t t35 = -7946;

	t35 = ((x185*(x186|x187))%x188);

	if (t35 != -8) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x193 = 7U;
	uint32_t x194 = 28113839U;
	static uint32_t x195 = 489U;

	t36 = ((x193*(x194|x195))%x196);

	if (t36 != 1U) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x201 = UINT16_MAX;
	static uint16_t x202 = 2U;
	uint64_t x203 = 1434014142LLU;
	static uint16_t x204 = UINT16_MAX;
	volatile uint64_t t37 = 11836LLU;

	t37 = ((x201*(x202|x203))%x204);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x209 = 3408601U;
	int16_t x210 = INT16_MIN;
	uint8_t x211 = UINT8_MAX;
	int8_t x212 = -1;
	volatile uint32_t t38 = 436925709U;

	t38 = ((x209*(x210|x211))%x212);

	if (t38 != 845305383U) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x221 = INT32_MIN;
	int64_t x222 = -1LL;
	int64_t x224 = INT64_MIN;
	static volatile int64_t t39 = 432278035213407847LL;

	t39 = ((x221*(x222|x223))%x224);

	if (t39 != 2147483648LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x225 = 89738U;
	volatile int32_t x226 = -1;
	volatile uint32_t x227 = 173973U;
	volatile int64_t x228 = INT64_MIN;
	volatile int64_t t40 = -2320117LL;

	t40 = ((x225*(x226|x227))%x228);

	if (t40 != 4294877558LL) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int32_t x229 = INT32_MAX;
	int32_t x230 = INT32_MIN;
	uint16_t x232 = UINT16_MAX;
	volatile uint64_t t41 = 112094LLU;

	t41 = ((x229*(x230|x231))%x232);

	if (t41 != 32769LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x241 = 5U;
	volatile uint32_t x242 = 373881228U;
	volatile int16_t x243 = -166;
	volatile int16_t x244 = -1;
	uint32_t t42 = 172315033U;

	t42 = ((x241*(x242|x243))%x244);

	if (t42 != 4294967126U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x249 = -3;
	int16_t x250 = INT16_MIN;
	static volatile int16_t x252 = -107;
	volatile int32_t t43 = -8505884;

	t43 = ((x249*(x250|x251))%x252);

	if (t43 != 3) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x253 = 32860997LLU;
	volatile uint64_t t44 = 0LLU;

	t44 = ((x253*(x254|x255))%x256);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x261 = 1763;
	int32_t x262 = INT32_MAX;
	int8_t x263 = INT8_MIN;
	uint8_t x264 = 16U;
	int32_t t45 = 23680;

	t45 = ((x261*(x262|x263))%x264);

	if (t45 != -3) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x265 = -1LL;
	int16_t x266 = 15;
	int32_t x268 = -468;
	volatile int64_t t46 = -138444784438017188LL;

	t46 = ((x265*(x266|x267))%x268);

	if (t46 != 461LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x269 = INT8_MIN;
	uint32_t x270 = 264220459U;
	static int16_t x271 = INT16_MIN;
	uint16_t x272 = UINT16_MAX;

	t47 = ((x269*(x270|x271))%x272);

	if (t47 != 27304U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x273 = INT16_MAX;
	int8_t x274 = INT8_MIN;
	static uint32_t x275 = 824U;
	static uint32_t t48 = 362904354U;

	t48 = ((x273*(x274|x275))%x276);

	if (t48 != 4U) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x277 = INT32_MAX;
	uint64_t x278 = 1845399LLU;
	volatile int16_t x280 = INT16_MIN;

	t49 = ((x277*(x278|x279))%x280);

	if (t49 != 18446743848223768681LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x281 = 24U;
	static int8_t x283 = INT8_MIN;
	int64_t x284 = -1LL;

	t50 = ((x281*(x282|x283))%x284);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x286 = UINT8_MAX;
	int64_t x287 = INT64_MAX;
	uint64_t t51 = 39638284311924802LLU;

	t51 = ((x285*(x286|x287))%x288);

	if (t51 != 9526903288309566550LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x289 = -103973740811599LL;
	int8_t x290 = 15;
	volatile uint64_t t52 = 156725LLU;

	t52 = ((x289*(x290|x291))%x292);

	if (t52 != 104912273576767LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x293 = 66U;
	int64_t x294 = -1LL;
	int8_t x295 = INT8_MIN;
	int16_t x296 = -31;
	volatile int64_t t53 = -307144813087256LL;

	t53 = ((x293*(x294|x295))%x296);

	if (t53 != -4LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x302 = 0;
	uint16_t x303 = UINT16_MAX;
	uint64_t x304 = UINT64_MAX;
	volatile uint64_t t54 = 3277744711292LLU;

	t54 = ((x301*(x302|x303))%x304);

	if (t54 != 18446744073709158406LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x305 = INT16_MIN;
	uint8_t x306 = UINT8_MAX;
	int64_t x307 = -1LL;
	int64_t t55 = 38LL;

	t55 = ((x305*(x306|x307))%x308);

	if (t55 != 2LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x310 = INT8_MAX;
	uint32_t x312 = 236U;
	uint64_t t56 = 74648367LLU;

	t56 = ((x309*(x310|x311))%x312);

	if (t56 != 49LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x313 = 1;
	uint8_t x314 = UINT8_MAX;
	uint16_t x315 = 4402U;
	int32_t t57 = -9;

	t57 = ((x313*(x314|x315))%x316);

	if (t57 != 4607) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x317 = INT8_MIN;
	uint32_t x319 = 11952U;
	volatile int8_t x320 = INT8_MIN;
	uint32_t t58 = 43288U;

	t58 = ((x317*(x318|x319))%x320);

	if (t58 != 4292870656U) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int8_t x322 = -1;
	volatile int32_t x323 = 1697280;
	uint8_t x324 = 112U;
	volatile int32_t t59 = -975;

	t59 = ((x321*(x322|x323))%x324);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x325 = 15078291404LLU;
	int64_t x326 = -1LL;
	static int64_t x327 = -11476320604111492LL;
	volatile int32_t x328 = INT32_MIN;
	uint64_t t60 = 75148873637082899LLU;

	t60 = ((x325*(x326|x327))%x328);

	if (t60 != 18446744058631260212LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x330 = 331062LLU;
	int32_t x331 = INT32_MIN;
	int32_t x332 = -1;
	static uint64_t t61 = 94262062981122934LLU;

	t61 = ((x329*(x330|x331))%x332);

	if (t61 != 18446531956505580676LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x333 = INT8_MIN;
	int32_t x334 = -173327;
	volatile uint64_t x336 = UINT64_MAX;
	uint64_t t62 = 247374561380682345LLU;

	t62 = ((x333*(x334|x335))%x336);

	if (t62 != 20971648LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x337 = -1;
	int16_t x339 = -1;
	uint16_t x340 = 279U;
	volatile int32_t t63 = -28086;

	t63 = ((x337*(x338|x339))%x340);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x346 = 7LLU;
	int32_t x348 = -25175138;

	t64 = ((x345*(x346|x347))%x348);

	if (t64 != 84LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x349 = 1;
	int16_t x351 = INT16_MIN;
	volatile int32_t t65 = -2605848;

	t65 = ((x349*(x350|x351))%x352);

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x357 = 14U;
	volatile uint64_t x358 = UINT64_MAX;
	int16_t x359 = 11;
	int32_t x360 = INT32_MAX;
	static volatile uint64_t t66 = 6LLU;

	t66 = ((x357*(x358|x359))%x360);

	if (t66 != 2147483637LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int32_t x365 = INT32_MIN;
	int64_t x366 = -1LL;
	uint32_t x367 = 4328U;
	int8_t x368 = -11;
	int64_t t67 = 321038796870383LL;

	t67 = ((x365*(x366|x367))%x368);

	if (t67 != 2LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x369 = -1;
	int16_t x372 = INT16_MIN;
	static int64_t t68 = -128933037LL;

	t68 = ((x369*(x370|x371))%x372);

	if (t68 != 1LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x373 = INT8_MAX;
	volatile uint64_t x374 = 9677927228153LLU;
	volatile int64_t x376 = -154779445565LL;
	static volatile uint64_t t69 = 4360731670284148LLU;

	t69 = ((x373*(x374|x375))%x376);

	if (t69 != 1229096758008197LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x381 = INT64_MAX;
	int8_t x383 = INT8_MIN;
	int32_t x384 = 81211;
	volatile uint64_t t70 = 17LLU;

	t70 = ((x381*(x382|x383))%x384);

	if (t70 != 29449LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x385 = -17330055LL;
	int16_t x386 = -1;
	int32_t x387 = -1;
	volatile uint8_t x388 = 44U;
	int64_t t71 = 5256957882530LL;

	t71 = ((x385*(x386|x387))%x388);

	if (t71 != 39LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x389 = 38U;
	int32_t x390 = INT32_MIN;
	uint64_t x391 = 6042LLU;
	uint16_t x392 = 112U;
	static uint64_t t72 = 167LLU;

	t72 = ((x389*(x390|x391))%x392);

	if (t72 != 76LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x393 = UINT32_MAX;
	int16_t x394 = 419;
	int16_t x395 = INT16_MAX;
	int32_t x396 = INT32_MAX;
	static volatile uint32_t t73 = 335U;

	t73 = ((x393*(x394|x395))%x396);

	if (t73 != 2147450882U) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x397 = 356225;
	int8_t x398 = INT8_MIN;
	volatile int64_t x399 = INT64_MIN;
	uint8_t x400 = UINT8_MAX;
	int64_t t74 = 5916087LL;

	t74 = ((x397*(x398|x399))%x400);

	if (t74 != -250LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x401 = 0;
	int8_t x402 = INT8_MIN;
	static int8_t x403 = -52;
	static volatile int8_t x404 = -10;
	int32_t t75 = 425363399;

	t75 = ((x401*(x402|x403))%x404);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x405 = INT32_MIN;
	static int64_t x406 = -54240101LL;
	int8_t x407 = INT8_MIN;
	volatile int64_t x408 = -4638938423LL;
	volatile int64_t t76 = 2137205199LL;

	t76 = ((x405*(x406|x407))%x408);

	if (t76 != 3504680990LL) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint64_t x413 = 0LLU;
	volatile uint64_t x414 = 33647721330LLU;
	static uint32_t x415 = UINT32_MAX;
	uint16_t x416 = 9510U;

	t77 = ((x413*(x414|x415))%x416);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x417 = 18483LLU;
	volatile int16_t x418 = INT16_MAX;
	volatile int16_t x419 = -1;
	int16_t x420 = -476;

	t78 = ((x417*(x418|x419))%x420);

	if (t78 != 18446744073709533133LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x422 = INT32_MIN;
	int32_t x423 = -46;
	int16_t x424 = INT16_MIN;

	t79 = ((x421*(x422|x423))%x424);

	if (t79 != 18446744073709419918LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x426 = UINT16_MAX;
	int32_t x427 = 1;
	int64_t x428 = -166LL;
	volatile int64_t t80 = 98476504057200328LL;

	t80 = ((x425*(x426|x427))%x428);

	if (t80 != 61LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x433 = 0U;
	int8_t x434 = INT8_MIN;
	uint16_t x435 = UINT16_MAX;
	int64_t x436 = INT64_MIN;
	int64_t t81 = -6007LL;

	t81 = ((x433*(x434|x435))%x436);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x438 = 3998078U;
	volatile int32_t x439 = 1;
	int16_t x440 = INT16_MIN;
	uint32_t t82 = 88263777U;

	t82 = ((x437*(x438|x439))%x440);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x441 = -1;
	int8_t x442 = INT8_MIN;
	int8_t x443 = INT8_MIN;
	int16_t x444 = -374;

	t83 = ((x441*(x442|x443))%x444);

	if (t83 != 128) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x450 = -18360LL;
	static int32_t x451 = INT32_MIN;
	static uint64_t t84 = 2917046819450LLU;

	t84 = ((x449*(x450|x451))%x452);

	if (t84 != 535LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x453 = -406103LL;
	int32_t x454 = INT32_MIN;
	int64_t x455 = INT64_MAX;
	static volatile int64_t t85 = 6558LL;

	t85 = ((x453*(x454|x455))%x456);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x457 = INT32_MIN;
	static int32_t x458 = INT32_MIN;
	uint32_t x459 = UINT32_MAX;
	volatile int64_t x460 = INT64_MIN;
	volatile int64_t t86 = 1436LL;

	t86 = ((x457*(x458|x459))%x460);

	if (t86 != 2147483648LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x461 = -1;
	int8_t x462 = 6;
	int32_t x463 = INT32_MAX;
	int32_t x464 = INT32_MIN;
	int32_t t87 = -15650149;

	t87 = ((x461*(x462|x463))%x464);

	if (t87 != -2147483647) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x465 = UINT64_MAX;
	int16_t x467 = 40;
	volatile uint64_t t88 = 16405LLU;

	t88 = ((x465*(x466|x467))%x468);

	if (t88 != 32722LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x469 = 13U;
	int16_t x470 = INT16_MIN;
	uint16_t x471 = 636U;
	int8_t x472 = INT8_MIN;
	static int32_t t89 = 423;

	t89 = ((x469*(x470|x471))%x472);

	if (t89 != -52) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x478 = UINT64_MAX;
	int8_t x479 = -1;
	volatile int32_t x480 = INT32_MIN;
	uint64_t t90 = 3559980283LLU;

	t90 = ((x477*(x478|x479))%x480);

	if (t90 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x481 = INT64_MAX;
	int32_t x482 = -1;
	int32_t x483 = 1;
	int64_t t91 = 4135631968854623158LL;

	t91 = ((x481*(x482|x483))%x484);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x485 = -1;
	volatile int8_t x486 = INT8_MAX;
	uint64_t x487 = 3233LLU;

	t92 = ((x485*(x486|x487))%x488);

	if (t92 != 4294963969LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x497 = -1259589;
	static int8_t x498 = -1;
	int32_t x499 = 5012580;
	volatile int8_t x500 = 1;
	int32_t t93 = 91710;

	t93 = ((x497*(x498|x499))%x500);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x501 = INT16_MAX;
	int16_t x502 = -3;
	static int16_t x503 = INT16_MIN;
	static int64_t x504 = -4440729261LL;
	int64_t t94 = -12466667LL;

	t94 = ((x501*(x502|x503))%x504);

	if (t94 != -98301LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x505 = -1;
	int32_t x506 = INT32_MAX;
	int8_t x508 = -3;
	int32_t t95 = 17751499;

	t95 = ((x505*(x506|x507))%x508);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x513 = 486U;
	volatile int8_t x515 = -29;
	int32_t x516 = -124;
	int32_t t96 = 932991;

	t96 = ((x513*(x514|x515))%x516);

	if (t96 != -114) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x517 = UINT32_MAX;
	int64_t x518 = -1LL;
	uint16_t x519 = 318U;
	volatile int32_t x520 = INT32_MAX;
	volatile int64_t t97 = 487711286603132LL;

	t97 = ((x517*(x518|x519))%x520);

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x527 = 2681634LL;

	t98 = ((x525*(x526|x527))%x528);

	if (t98 != 109LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x529 = -104;
	volatile int32_t x530 = INT32_MIN;
	volatile uint32_t x531 = 15931U;
	static volatile uint32_t t99 = 1U;

	t99 = ((x529*(x530|x531))%x532);

	if (t99 != 4293310472U) { NG(); } else { ; }
	
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

