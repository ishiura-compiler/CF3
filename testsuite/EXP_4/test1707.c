#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = -3406;
uint32_t x10 = UINT32_MAX;
uint32_t x14 = 1U;
uint16_t x26 = UINT16_MAX;
volatile uint32_t t6 = 15U;
int16_t x29 = -1;
volatile int32_t x32 = INT32_MAX;
static int64_t t7 = 11465905LL;
int32_t x33 = INT32_MAX;
int32_t t8 = 609426999;
int16_t x38 = -289;
static int64_t x39 = INT64_MIN;
volatile uint8_t x40 = 23U;
static int8_t x52 = INT8_MIN;
uint32_t x64 = UINT32_MAX;
volatile uint8_t x67 = 64U;
static volatile int64_t t17 = -119685394283650250LL;
volatile int32_t t21 = -138077;
volatile int64_t t24 = 2LL;
volatile int32_t t25 = -10520;
volatile int16_t x123 = -983;
volatile int16_t x126 = INT16_MIN;
int16_t x130 = -1;
int16_t x131 = 174;
uint16_t x134 = 631U;
int64_t t36 = -24242540168LL;
int8_t x169 = INT8_MIN;
int64_t t40 = 266932688LL;
volatile int32_t t41 = 13084157;
int64_t x183 = 10562970LL;
uint16_t x188 = 771U;
int32_t x189 = INT32_MIN;
static int64_t t44 = 1088688036LL;
static int64_t x195 = 1118301154567063689LL;
volatile uint64_t t45 = 174LLU;
int8_t x211 = -1;
int32_t t48 = 173244609;
static volatile uint32_t t49 = 1U;
volatile int8_t x235 = INT8_MIN;
volatile uint8_t x236 = 2U;
static volatile int8_t x240 = -35;
int8_t x243 = -1;
uint32_t x247 = 5811400U;
uint16_t x260 = 2437U;
int64_t t58 = 862401LL;
static volatile uint32_t x278 = 11U;
uint32_t x280 = 3591698U;
int16_t x281 = INT16_MIN;
volatile int32_t t62 = -24316;
volatile int8_t x289 = -3;
int16_t x290 = INT16_MIN;
uint32_t x301 = UINT32_MAX;
uint64_t t68 = 370436756LLU;
uint32_t x312 = 120U;
uint32_t t69 = 1595336U;
volatile int32_t x320 = INT32_MIN;
uint8_t x321 = 23U;
uint8_t x324 = 17U;
volatile uint32_t x327 = UINT32_MAX;
uint64_t t78 = 11728977892LLU;
uint8_t x350 = 0U;
int64_t x351 = INT64_MIN;
volatile uint64_t t79 = 5LLU;
int64_t x353 = INT64_MIN;
static volatile uint64_t t81 = 4LLU;
uint64_t x364 = UINT64_MAX;
uint64_t x366 = 7071340802182072109LLU;
static uint8_t x367 = 0U;
volatile int16_t x369 = -1;
int32_t t84 = -1811;
uint8_t x375 = 1U;
static int8_t x378 = INT8_MIN;
uint64_t x381 = UINT64_MAX;
volatile int8_t x385 = INT8_MAX;
int8_t x390 = 57;
uint32_t x395 = 432620205U;
uint8_t x399 = 4U;
int16_t x403 = INT16_MIN;
volatile int16_t x404 = 23;
volatile int16_t x408 = INT16_MIN;
uint64_t x415 = 25139056510565640LLU;
int8_t x426 = 1;
static uint32_t x430 = UINT32_MAX;


void f0(void) {
	uint64_t x1 = 820LLU;
	static int16_t x3 = INT16_MIN;
	volatile uint64_t x4 = 2118849095482468966LLU;
	uint64_t t0 = 10361673960LLU;

	t0 = (x1/(x2-(x3&x4)));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	int64_t x6 = 4729958573LL;
	uint64_t x7 = UINT64_MAX;
	volatile int16_t x8 = -1;
	uint64_t t1 = 25916121LLU;

	t1 = (x5/(x6-(x7&x8)));

	if (t1 != 3899980049LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -348LL;
	int64_t x11 = 35296329441791932LL;
	static uint32_t x12 = 2U;
	int64_t t2 = -20057090750468303LL;

	t2 = (x9/(x10-(x11&x12)));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = INT16_MIN;
	int32_t x15 = 2484877;
	volatile int8_t x16 = -1;
	volatile uint32_t t3 = 52U;

	t3 = (x13/(x14-(x15&x16)));

	if (t3 != 1U) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = -1;
	volatile int64_t x18 = 24089LL;
	int8_t x19 = INT8_MIN;
	int32_t x20 = INT32_MAX;
	int64_t t4 = -384294174192LL;

	t4 = (x17/(x18-(x19&x20)));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	uint32_t x22 = 590685U;
	int8_t x23 = INT8_MIN;
	static uint64_t x24 = 27746LLU;
	static uint64_t t5 = 1176907642429187352LLU;

	t5 = (x21/(x22-(x23&x24)));

	if (t5 != 32762934001783LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x25 = 16369U;
	volatile int8_t x27 = INT8_MIN;
	volatile uint8_t x28 = UINT8_MAX;

	t6 = (x25/(x26-(x27&x28)));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x30 = 14963;
	volatile int64_t x31 = INT64_MIN;

	t7 = (x29/(x30-(x31&x32)));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x34 = 2U;
	int16_t x35 = 7;
	int8_t x36 = INT8_MAX;

	t8 = (x33/(x34-(x35&x36)));

	if (t8 != -429496729) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 6U;
	int64_t t9 = -201LL;

	t9 = (x37/(x38-(x39&x40)));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x41 = -1;
	int16_t x42 = -15;
	static int8_t x43 = 1;
	uint16_t x44 = 48U;
	int32_t t10 = -1;

	t10 = (x41/(x42-(x43&x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 148U;
	int16_t x46 = 86;
	uint16_t x47 = 1U;
	static int16_t x48 = INT16_MIN;
	static int32_t t11 = 29;

	t11 = (x45/(x46-(x47&x48)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = UINT32_MAX;
	static uint8_t x50 = UINT8_MAX;
	int16_t x51 = -2621;
	volatile uint32_t t12 = 3543U;

	t12 = (x49/(x50-(x51&x52)));

	if (t12 != 1459384U) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x53 = INT8_MIN;
	volatile int64_t x54 = -65LL;
	volatile int8_t x55 = -1;
	uint64_t x56 = 6865040897182079LLU;
	uint64_t t13 = 60936629143674438LLU;

	t13 = (x53/(x54-(x55&x56)));

	if (t13 != 1LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = -1;
	int8_t x58 = INT8_MIN;
	static volatile uint16_t x59 = 0U;
	volatile uint16_t x60 = 13533U;
	int32_t t14 = 30077;

	t14 = (x57/(x58-(x59&x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MAX;
	int16_t x62 = INT16_MIN;
	volatile uint32_t x63 = UINT32_MAX;
	int64_t t15 = -248632539LL;

	t15 = (x61/(x62-(x63&x64)));

	if (t15 != 2147500031LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MIN;
	static int8_t x66 = 1;
	int64_t x68 = INT64_MIN;
	volatile int64_t t16 = -24824LL;

	t16 = (x65/(x66-(x67&x68)));

	if (t16 != -32768LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	static int32_t x70 = -1;
	int64_t x71 = -1LL;
	static volatile int64_t x72 = INT64_MIN;

	t17 = (x69/(x70-(x71&x72)));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x77 = INT8_MIN;
	static int16_t x78 = -1;
	static int32_t x79 = INT32_MAX;
	volatile uint8_t x80 = UINT8_MAX;
	int32_t t18 = 1;

	t18 = (x77/(x78-(x79&x80)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x81 = 37U;
	uint32_t x82 = 64692345U;
	static int32_t x83 = INT32_MIN;
	static int16_t x84 = INT16_MAX;
	volatile uint32_t t19 = 23306U;

	t19 = (x81/(x82-(x83&x84)));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x85 = UINT16_MAX;
	uint8_t x86 = UINT8_MAX;
	static uint64_t x87 = UINT64_MAX;
	int32_t x88 = 215977;
	static uint64_t t20 = 0LLU;

	t20 = (x85/(x86-(x87&x88)));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x89 = 33037;
	int32_t x90 = INT32_MIN;
	uint8_t x91 = 99U;
	uint16_t x92 = 0U;

	t21 = (x89/(x90-(x91&x92)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x93 = UINT32_MAX;
	int16_t x94 = 1904;
	int16_t x95 = -1;
	volatile uint16_t x96 = 24U;
	volatile uint32_t t22 = 10U;

	t22 = (x93/(x94-(x95&x96)));

	if (t22 != 2284557U) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x97 = 0U;
	int16_t x98 = INT16_MIN;
	int32_t x99 = 1;
	static int32_t x100 = 62;
	volatile int32_t t23 = -613708;

	t23 = (x97/(x98-(x99&x100)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x101 = -1;
	static int32_t x102 = 66072576;
	int16_t x103 = INT16_MIN;
	volatile int64_t x104 = -1LL;

	t24 = (x101/(x102-(x103&x104)));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int32_t x109 = INT32_MIN;
	uint8_t x110 = 3U;
	int16_t x111 = -45;
	int32_t x112 = 657845;

	t25 = (x109/(x110-(x111&x112)));

	if (t25 != 3264) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x113 = 723U;
	int64_t x114 = INT64_MIN;
	uint32_t x115 = 3U;
	int64_t x116 = INT64_MIN;
	volatile int64_t t26 = -61570055388545LL;

	t26 = (x113/(x114-(x115&x116)));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x117 = INT64_MIN;
	int16_t x118 = INT16_MAX;
	uint8_t x119 = UINT8_MAX;
	static int8_t x120 = INT8_MIN;
	int64_t t27 = -836620478646LL;

	t27 = (x117/(x118-(x119&x120)));

	if (t27 != -282587457852715LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x121 = UINT8_MAX;
	static volatile uint8_t x122 = UINT8_MAX;
	volatile int32_t x124 = INT32_MAX;
	int32_t t28 = 6;

	t28 = (x121/(x122-(x123&x124)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x125 = UINT64_MAX;
	static uint64_t x127 = 7LLU;
	uint64_t x128 = 1505LLU;
	static uint64_t t29 = 4288701531LLU;

	t29 = (x125/(x126-(x127&x128)));

	if (t29 != 1LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x129 = -1;
	int8_t x132 = -1;
	int32_t t30 = -4770;

	t30 = (x129/(x130-(x131&x132)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x133 = INT8_MIN;
	static int64_t x135 = 55LL;
	static int8_t x136 = 23;
	int64_t t31 = -1734301401332153152LL;

	t31 = (x133/(x134-(x135&x136)));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x137 = INT16_MIN;
	uint32_t x138 = 3U;
	int16_t x139 = 803;
	int64_t x140 = INT64_MIN;
	int64_t t32 = -1176904851LL;

	t32 = (x137/(x138-(x139&x140)));

	if (t32 != -10922LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x141 = 23;
	int64_t x142 = 107LL;
	uint16_t x143 = 6U;
	static int16_t x144 = 1911;
	int64_t t33 = -159494751467LL;

	t33 = (x141/(x142-(x143&x144)));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x145 = 15;
	int8_t x146 = -30;
	uint8_t x147 = 17U;
	volatile uint16_t x148 = UINT16_MAX;
	static int32_t t34 = 2747805;

	t34 = (x145/(x146-(x147&x148)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x149 = 639U;
	volatile uint64_t x150 = 272017631841330LLU;
	volatile int8_t x151 = INT8_MIN;
	int64_t x152 = -1LL;
	uint64_t t35 = 7LLU;

	t35 = (x149/(x150-(x151&x152)));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x157 = -4242884LL;
	uint32_t x158 = 91519363U;
	int32_t x159 = INT32_MIN;
	static int64_t x160 = -1LL;

	t36 = (x157/(x158-(x159&x160)));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x161 = -1;
	uint64_t x162 = UINT64_MAX;
	int64_t x163 = INT64_MAX;
	uint8_t x164 = 35U;
	volatile uint64_t t37 = 683237627LLU;

	t37 = (x161/(x162-(x163&x164)));

	if (t37 != 1LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x165 = 751LLU;
	uint32_t x166 = 0U;
	volatile int64_t x167 = -1028LL;
	int32_t x168 = INT32_MIN;
	static uint64_t t38 = 1LLU;

	t38 = (x165/(x166-(x167&x168)));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x170 = -1;
	int32_t x171 = 7662936;
	static volatile int64_t x172 = INT64_MAX;
	volatile int64_t t39 = -382261651319719277LL;

	t39 = (x169/(x170-(x171&x172)));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x173 = -1LL;
	int32_t x174 = INT32_MIN;
	int64_t x175 = INT64_MIN;
	int64_t x176 = -1130919LL;

	t40 = (x173/(x174-(x175&x176)));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x177 = 3;
	int16_t x178 = INT16_MIN;
	uint16_t x179 = 4U;
	static volatile uint8_t x180 = 114U;

	t41 = (x177/(x178-(x179&x180)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x181 = INT8_MAX;
	volatile int32_t x182 = 374592;
	int64_t x184 = -1441LL;
	volatile int64_t t42 = -3LL;

	t42 = (x181/(x182-(x183&x184)));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x185 = 0U;
	uint64_t x186 = UINT64_MAX;
	int8_t x187 = INT8_MAX;
	static uint64_t t43 = 518978184515858498LLU;

	t43 = (x185/(x186-(x187&x188)));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x190 = 1;
	static uint8_t x191 = UINT8_MAX;
	int64_t x192 = -56851049480167529LL;

	t44 = (x189/(x190-(x191&x192)));

	if (t44 != 14316557LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x193 = 5415385LL;
	uint64_t x194 = UINT64_MAX;
	volatile int32_t x196 = 42276;

	t45 = (x193/(x194-(x195&x196)));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x201 = 408U;
	static uint64_t x202 = 62071221587LLU;
	uint16_t x203 = UINT16_MAX;
	int64_t x204 = -25452260LL;
	static volatile uint64_t t46 = 2676635883694LLU;

	t46 = (x201/(x202-(x203&x204)));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x205 = INT32_MIN;
	int64_t x206 = -1LL;
	int8_t x207 = -1;
	volatile int16_t x208 = INT16_MAX;
	int64_t t47 = 219261LL;

	t47 = (x205/(x206-(x207&x208)));

	if (t47 != 65536LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x209 = INT32_MIN;
	int32_t x210 = -1;
	static int16_t x212 = INT16_MIN;

	t48 = (x209/(x210-(x211&x212)));

	if (t48 != -65538) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x213 = UINT32_MAX;
	static int32_t x214 = -1870076;
	uint32_t x215 = 1U;
	int8_t x216 = 6;

	t49 = (x213/(x214-(x215&x216)));

	if (t49 != 1U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x217 = -1;
	int16_t x218 = INT16_MIN;
	int64_t x219 = -12018603LL;
	int32_t x220 = INT32_MIN;
	int64_t t50 = -32929611176900LL;

	t50 = (x217/(x218-(x219&x220)));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x225 = INT32_MIN;
	int16_t x226 = INT16_MIN;
	int16_t x227 = -1;
	static uint64_t x228 = 185783672LLU;
	uint64_t t51 = 10360335404791LLU;

	t51 = (x225/(x226-(x227&x228)));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int64_t x229 = -1LL;
	static uint16_t x230 = UINT16_MAX;
	uint8_t x231 = 1U;
	int8_t x232 = INT8_MIN;
	volatile int64_t t52 = -4000028170142LL;

	t52 = (x229/(x230-(x231&x232)));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x233 = INT16_MIN;
	static volatile int64_t x234 = -60283365637704LL;
	volatile int64_t t53 = -56878212015693LL;

	t53 = (x233/(x234-(x235&x236)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int64_t x237 = 13103548750005784LL;
	int32_t x238 = -1;
	int32_t x239 = INT32_MIN;
	int64_t t54 = 92249516LL;

	t54 = (x237/(x238-(x239&x240)));

	if (t54 != 6101815LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x241 = 14U;
	uint64_t x242 = UINT64_MAX;
	uint16_t x244 = 1778U;
	uint64_t t55 = 2437LLU;

	t55 = (x241/(x242-(x243&x244)));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x245 = INT32_MAX;
	volatile int8_t x246 = INT8_MAX;
	uint64_t x248 = 26332503394LLU;
	static uint64_t t56 = 169055672797LLU;

	t56 = (x245/(x246-(x247&x248)));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x257 = -1;
	uint64_t x258 = 93493797LLU;
	int64_t x259 = -53180LL;
	static uint64_t t57 = 32911944LLU;

	t57 = (x257/(x258-(x259&x260)));

	if (t57 != 197304478530LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x261 = -1;
	int16_t x262 = INT16_MIN;
	int64_t x263 = 87441072782072LL;
	int32_t x264 = 1890;

	t58 = (x261/(x262-(x263&x264)));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x269 = INT16_MAX;
	static int32_t x270 = -6;
	int64_t x271 = -1LL;
	static int64_t x272 = INT64_MIN;
	int64_t t59 = -1712490LL;

	t59 = (x269/(x270-(x271&x272)));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x273 = 97U;
	static int32_t x274 = -1;
	int32_t x275 = INT32_MIN;
	int32_t x276 = -721;
	volatile int32_t t60 = -17679832;

	t60 = (x273/(x274-(x275&x276)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x277 = -39871576;
	uint32_t x279 = 1577164U;
	volatile uint32_t t61 = 997526U;

	t61 = (x277/(x278-(x279&x280)));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x282 = INT16_MAX;
	int8_t x283 = INT8_MIN;
	int16_t x284 = -6384;

	t62 = (x281/(x282-(x283&x284)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x285 = -183499476LL;
	int8_t x286 = INT8_MIN;
	volatile int32_t x287 = 15;
	int8_t x288 = -1;
	int64_t t63 = 11LL;

	t63 = (x285/(x286-(x287&x288)));

	if (t63 != 1283213LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x291 = 0;
	uint16_t x292 = 3840U;
	int32_t t64 = 882;

	t64 = (x289/(x290-(x291&x292)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x293 = 49U;
	uint8_t x294 = UINT8_MAX;
	int64_t x295 = -1LL;
	int8_t x296 = INT8_MIN;
	int64_t t65 = 74098875131091238LL;

	t65 = (x293/(x294-(x295&x296)));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x297 = UINT16_MAX;
	uint64_t x298 = 3361LLU;
	static volatile uint16_t x299 = 3U;
	int8_t x300 = INT8_MIN;
	uint64_t t66 = 18626069973280021LLU;

	t66 = (x297/(x298-(x299&x300)));

	if (t66 != 19LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x302 = INT8_MAX;
	int32_t x303 = 6813;
	static int32_t x304 = INT32_MIN;
	static uint32_t t67 = 7685U;

	t67 = (x301/(x302-(x303&x304)));

	if (t67 != 33818640U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x305 = INT32_MIN;
	static uint64_t x306 = UINT64_MAX;
	static int16_t x307 = -19;
	volatile int32_t x308 = -1;

	t68 = (x305/(x306-(x307&x308)));

	if (t68 != 1024819115086781553LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x309 = 1364;
	volatile int8_t x310 = INT8_MAX;
	int32_t x311 = -1;

	t69 = (x309/(x310-(x311&x312)));

	if (t69 != 194U) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x313 = -1LL;
	uint32_t x314 = UINT32_MAX;
	volatile uint8_t x315 = UINT8_MAX;
	static volatile int32_t x316 = INT32_MAX;
	volatile int64_t t70 = 45926LL;

	t70 = (x313/(x314-(x315&x316)));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x317 = 4918U;
	int64_t x318 = INT64_MIN;
	volatile int32_t x319 = -1;
	int64_t t71 = -9824863033LL;

	t71 = (x317/(x318-(x319&x320)));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x322 = INT16_MIN;
	static int16_t x323 = 1;
	volatile int32_t t72 = -39;

	t72 = (x321/(x322-(x323&x324)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x325 = 1U;
	static int8_t x326 = -1;
	static int64_t x328 = INT64_MIN;
	static volatile int64_t t73 = 27154357LL;

	t73 = (x325/(x326-(x327&x328)));

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x329 = INT64_MIN;
	int16_t x330 = INT16_MIN;
	volatile uint16_t x331 = 31966U;
	uint32_t x332 = UINT32_MAX;
	volatile int64_t t74 = 46534397LL;

	t74 = (x329/(x330-(x331&x332)));

	if (t74 != -2147516015LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x333 = -1LL;
	int32_t x334 = INT32_MAX;
	int32_t x335 = -29186;
	uint64_t x336 = UINT64_MAX;
	volatile uint64_t t75 = 119449769266989LLU;

	t75 = (x333/(x334-(x335&x336)));

	if (t75 != 8589817853LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x337 = INT8_MIN;
	uint32_t x338 = UINT32_MAX;
	int64_t x339 = -9LL;
	int32_t x340 = -58940;
	volatile int64_t t76 = 460868142193734LL;

	t76 = (x337/(x338-(x339&x340)));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x341 = UINT32_MAX;
	volatile int16_t x342 = INT16_MAX;
	volatile uint32_t x343 = UINT32_MAX;
	uint16_t x344 = 445U;
	uint32_t t77 = 350U;

	t77 = (x341/(x342-(x343&x344)));

	if (t77 != 132880U) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x345 = 9U;
	int8_t x346 = -1;
	static uint16_t x347 = 45U;
	volatile uint64_t x348 = 1907534044LLU;

	t78 = (x345/(x346-(x347&x348)));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x349 = -1;
	static uint64_t x352 = UINT64_MAX;

	t79 = (x349/(x350-(x351&x352)));

	if (t79 != 1LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x354 = -240135;
	uint8_t x355 = UINT8_MAX;
	int16_t x356 = INT16_MIN;
	int64_t t80 = 17LL;

	t80 = (x353/(x354-(x355&x356)));

	if (t80 != 38409111694899LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x357 = -1;
	uint64_t x358 = 15970776345LLU;
	int64_t x359 = -1LL;
	int8_t x360 = INT8_MIN;

	t81 = (x357/(x358-(x359&x360)));

	if (t81 != 1155031134LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x361 = UINT16_MAX;
	volatile uint8_t x362 = UINT8_MAX;
	static int32_t x363 = -16406633;
	static volatile uint64_t t82 = 0LLU;

	t82 = (x361/(x362-(x363&x364)));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int64_t x365 = INT64_MIN;
	int16_t x368 = INT16_MAX;
	static uint64_t t83 = 216421408494LLU;

	t83 = (x365/(x366-(x367&x368)));

	if (t83 != 1LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x370 = 1U;
	volatile int32_t x371 = 164;
	int16_t x372 = INT16_MAX;

	t84 = (x369/(x370-(x371&x372)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x373 = 70U;
	int64_t x374 = -1LL;
	int8_t x376 = INT8_MIN;
	int64_t t85 = -61598230LL;

	t85 = (x373/(x374-(x375&x376)));

	if (t85 != -70LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x377 = INT16_MIN;
	volatile uint64_t x379 = UINT64_MAX;
	static int64_t x380 = 3783139LL;
	uint64_t t86 = 1612623300235993625LLU;

	t86 = (x377/(x378-(x379&x380)));

	if (t86 != 1LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x382 = INT16_MIN;
	int64_t x383 = -1LL;
	static volatile uint64_t x384 = UINT64_MAX;
	static volatile uint64_t t87 = 3934338153558985LLU;

	t87 = (x381/(x382-(x383&x384)));

	if (t87 != 1LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x386 = 166013U;
	int32_t x387 = INT32_MIN;
	uint64_t x388 = 10922555112LLU;
	volatile uint64_t t88 = 12319340LLU;

	t88 = (x385/(x386-(x387&x388)));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int16_t x389 = INT16_MIN;
	int16_t x391 = -9104;
	uint16_t x392 = 0U;
	volatile int32_t t89 = -1844;

	t89 = (x389/(x390-(x391&x392)));

	if (t89 != -574) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x393 = 15U;
	uint16_t x394 = 20U;
	static volatile uint8_t x396 = 51U;
	uint32_t t90 = 38476U;

	t90 = (x393/(x394-(x395&x396)));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x397 = 35788469969247LLU;
	static volatile int8_t x398 = -1;
	uint16_t x400 = 100U;
	static uint64_t t91 = 3814590842607727LLU;

	t91 = (x397/(x398-(x399&x400)));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x401 = 219U;
	int8_t x402 = 3;
	volatile uint32_t t92 = 682897202U;

	t92 = (x401/(x402-(x403&x404)));

	if (t92 != 73U) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x405 = 17U;
	static volatile int32_t x406 = INT32_MIN;
	uint32_t x407 = UINT32_MAX;
	volatile uint32_t t93 = 29U;

	t93 = (x405/(x406-(x407&x408)));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x409 = 11615LL;
	static uint64_t x410 = 118LLU;
	int16_t x411 = INT16_MAX;
	int32_t x412 = -1;
	volatile uint64_t t94 = 1712900531837LLU;

	t94 = (x409/(x410-(x411&x412)));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x413 = -1;
	int64_t x414 = -726988470LL;
	int32_t x416 = INT32_MIN;
	volatile uint64_t t95 = 424255770266LLU;

	t95 = (x413/(x414-(x415&x416)));

	if (t95 != 1LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x417 = -1;
	static uint32_t x418 = UINT32_MAX;
	int32_t x419 = -1;
	int32_t x420 = -123202040;
	volatile uint32_t t96 = 7U;

	t96 = (x417/(x418-(x419&x420)));

	if (t96 != 34U) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x421 = 48LLU;
	volatile int64_t x422 = -32729085LL;
	volatile int8_t x423 = INT8_MIN;
	uint32_t x424 = UINT32_MAX;
	volatile uint64_t t97 = 7743182766677980LLU;

	t97 = (x421/(x422-(x423&x424)));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x425 = 7U;
	static volatile uint32_t x427 = 4181631U;
	int16_t x428 = -2;
	volatile uint32_t t98 = 495765U;

	t98 = (x425/(x426-(x427&x428)));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x429 = 2748057789644843296LL;
	uint64_t x431 = UINT64_MAX;
	uint8_t x432 = UINT8_MAX;
	volatile uint64_t t99 = 1854477666LLU;

	t99 = (x429/(x430-(x431&x432)));

	if (t99 != 639832102LLU) { NG(); } else { ; }
	
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

