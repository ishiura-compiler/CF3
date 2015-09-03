#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x8 = -1;
uint16_t x17 = 15U;
int32_t x32 = INT32_MIN;
volatile int32_t t6 = 53;
static uint32_t x34 = UINT32_MAX;
int16_t x39 = -1;
volatile int32_t x47 = INT32_MIN;
int8_t x48 = -3;
int8_t x49 = INT8_MIN;
static volatile uint16_t x51 = 1583U;
volatile int64_t t12 = 35397609LL;
int64_t t14 = -91319327794574LL;
volatile int32_t x75 = INT32_MAX;
int64_t x76 = -278786LL;
volatile int32_t t16 = 5978030;
int8_t x81 = INT8_MAX;
uint32_t x90 = 31U;
int64_t x91 = INT64_MAX;
volatile int64_t t18 = 12LL;
uint32_t x93 = 22868U;
int32_t t20 = -1889;
static volatile uint32_t t22 = 1132668175U;
volatile uint32_t x117 = UINT32_MAX;
static volatile uint16_t x119 = 1U;
int16_t x129 = -15649;
volatile uint64_t t27 = 1589328932274975LLU;
int16_t x138 = -1;
int8_t x140 = INT8_MIN;
volatile int64_t t30 = -1076301LL;
static int8_t x150 = 31;
uint16_t x158 = UINT16_MAX;
static int32_t x160 = INT32_MIN;
int16_t x166 = 0;
volatile uint64_t x173 = UINT64_MAX;
static volatile uint32_t x175 = 627516U;
static volatile int8_t x180 = 1;
int8_t x196 = INT8_MAX;
uint8_t x198 = 7U;
int16_t x205 = INT16_MIN;
uint8_t x206 = 2U;
uint32_t x207 = UINT32_MAX;
uint64_t x209 = 350247009047157LLU;
int64_t x210 = -1LL;
volatile uint64_t t45 = 7318LLU;
int64_t x214 = -1LL;
static uint32_t x215 = 778419491U;
static int32_t x223 = INT32_MAX;
volatile int8_t x224 = INT8_MAX;
volatile uint64_t t48 = 0LLU;
volatile int8_t x236 = 0;
volatile int32_t x238 = -317036406;
volatile int64_t x241 = INT64_MIN;
volatile uint64_t x245 = 909299LLU;
uint64_t x258 = UINT64_MAX;
uint8_t x259 = 96U;
static int16_t x274 = -1;
volatile int64_t x287 = INT64_MIN;
uint16_t x289 = 15U;
volatile int64_t x294 = -1LL;
static volatile int64_t x296 = 40972146LL;
int64_t x297 = INT64_MIN;
volatile int64_t t65 = 116649970152374876LL;
int64_t x308 = INT64_MAX;
int64_t x309 = -1LL;
volatile int8_t x310 = -1;
uint64_t x316 = 22345725006LLU;
volatile int64_t x327 = -219130133548091LL;
int64_t t71 = -5LL;
volatile int64_t x342 = INT64_MAX;
int64_t x343 = INT64_MAX;
uint16_t x344 = 1028U;
int16_t x345 = 4;
int8_t x348 = INT8_MAX;
int64_t x353 = -373453923128636369LL;
int32_t x360 = INT32_MAX;
uint8_t x362 = UINT8_MAX;
volatile int64_t x372 = -1285564917842LL;
int32_t x373 = -34;
uint64_t x391 = 1LLU;
uint64_t x394 = UINT64_MAX;
static int8_t x400 = INT8_MIN;
int64_t x404 = INT64_MIN;
static int64_t x405 = 1LL;
int32_t x411 = INT32_MIN;
int8_t x415 = -1;
static volatile int32_t t93 = -33;
uint64_t x421 = 27775345849LLU;
int64_t t95 = -388780277969LL;
uint64_t x431 = 1424LLU;
volatile uint64_t x436 = UINT64_MAX;
volatile uint8_t x440 = 0U;
static uint64_t x442 = 12627635425LLU;


void f0(void) {
	static int64_t x1 = INT64_MIN;
	int8_t x2 = -5;
	int64_t x3 = INT64_MIN;
	static uint64_t x4 = UINT64_MAX;
	volatile uint64_t t0 = 27LLU;

	t0 = (x1/(x2-(x3^x4)));

	if (t0 != 1LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = INT8_MAX;
	uint8_t x6 = 9U;
	int16_t x7 = 398;
	volatile int32_t t1 = 118;

	t1 = (x5/(x6-(x7^x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x13 = 3855U;
	volatile int32_t x14 = -49;
	uint16_t x15 = UINT16_MAX;
	volatile uint32_t x16 = 731428U;
	static volatile uint32_t t2 = 735963585U;

	t2 = (x13/(x14-(x15^x16)));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x18 = 439315;
	int32_t x19 = -95258;
	int16_t x20 = INT16_MIN;
	volatile int32_t t3 = -466;

	t3 = (x17/(x18-(x19^x20)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x21 = 7U;
	int32_t x22 = 31837653;
	volatile int8_t x23 = -1;
	int8_t x24 = 0;
	volatile int32_t t4 = 740015;

	t4 = (x21/(x22-(x23^x24)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x25 = 1248U;
	uint64_t x26 = 2932LLU;
	int32_t x27 = -1;
	int64_t x28 = -686970615539090494LL;
	volatile uint64_t t5 = 719203661423558LLU;

	t5 = (x25/(x26-(x27^x28)));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = -1;
	uint8_t x30 = UINT8_MAX;
	int8_t x31 = INT8_MIN;

	t6 = (x29/(x30-(x31^x32)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x33 = 3U;
	int64_t x35 = INT64_MAX;
	int16_t x36 = 4;
	int64_t t7 = 179218356LL;

	t7 = (x33/(x34-(x35^x36)));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x37 = INT8_MIN;
	uint32_t x38 = UINT32_MAX;
	static uint32_t x40 = 20338551U;
	volatile uint32_t t8 = 1026079258U;

	t8 = (x37/(x38-(x39^x40)));

	if (t8 != 211U) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x41 = 31;
	static volatile int8_t x42 = INT8_MIN;
	int8_t x43 = INT8_MIN;
	int8_t x44 = INT8_MIN;
	static volatile int32_t t9 = 22580;

	t9 = (x41/(x42-(x43^x44)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = INT8_MIN;
	volatile uint64_t x46 = UINT64_MAX;
	volatile uint64_t t10 = 399LLU;

	t10 = (x45/(x46-(x47^x48)));

	if (t10 != 1LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x50 = 1;
	volatile uint32_t x52 = 16U;
	uint32_t t11 = 167996U;

	t11 = (x49/(x50-(x51^x52)));

	if (t11 != 1U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x53 = 6803U;
	volatile uint8_t x54 = UINT8_MAX;
	int64_t x55 = INT64_MIN;
	static int64_t x56 = INT64_MIN;

	t12 = (x53/(x54-(x55^x56)));

	if (t12 != 26LL) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int8_t x57 = 0;
	volatile int16_t x58 = -8932;
	volatile uint64_t x59 = UINT64_MAX;
	int32_t x60 = -589640779;
	static volatile uint64_t t13 = 204535483312148LLU;

	t13 = (x57/(x58-(x59^x60)));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = INT64_MIN;
	int64_t x62 = 3853095362829LL;
	int8_t x63 = INT8_MAX;
	int32_t x64 = INT32_MAX;

	t14 = (x61/(x62-(x63^x64)));

	if (t14 != -2395091LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x73 = 8868449;
	int8_t x74 = INT8_MAX;
	static int64_t t15 = -369739551251LL;

	t15 = (x73/(x74-(x75^x76)));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x77 = 0;
	static int32_t x78 = -4;
	int16_t x79 = INT16_MAX;
	int32_t x80 = INT32_MIN;

	t16 = (x77/(x78-(x79^x80)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x82 = UINT64_MAX;
	int64_t x83 = -61509850996950LL;
	int64_t x84 = 40532696LL;
	volatile uint64_t t17 = 1833385220919LLU;

	t17 = (x81/(x82-(x83^x84)));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x89 = INT8_MAX;
	int16_t x92 = INT16_MIN;

	t18 = (x89/(x90-(x91^x92)));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x94 = 25683092232197LLU;
	int64_t x95 = -31775862174LL;
	static int32_t x96 = 5;
	uint64_t t19 = 3LLU;

	t19 = (x93/(x94-(x95^x96)));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x97 = 19285;
	int16_t x98 = INT16_MAX;
	volatile int16_t x99 = INT16_MIN;
	static int8_t x100 = INT8_MAX;

	t20 = (x97/(x98-(x99^x100)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x101 = -1LL;
	int64_t x102 = 63834393005LL;
	int64_t x103 = INT64_MAX;
	uint64_t x104 = 5796LLU;
	static volatile uint64_t t21 = 37287724LLU;

	t21 = (x101/(x102-(x103^x104)));

	if (t21 != 1LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x109 = -1;
	static volatile int32_t x110 = -82919;
	static int32_t x111 = 36;
	uint32_t x112 = 28819283U;

	t22 = (x109/(x110-(x111^x112)));

	if (t22 != 1U) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x113 = 1033U;
	uint64_t x114 = 580283923LLU;
	int16_t x115 = INT16_MIN;
	volatile int8_t x116 = 5;
	uint64_t t23 = 0LLU;

	t23 = (x113/(x114-(x115^x116)));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x118 = INT16_MIN;
	volatile uint8_t x120 = UINT8_MAX;
	uint32_t t24 = 1U;

	t24 = (x117/(x118-(x119^x120)));

	if (t24 != 1U) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x121 = 5224U;
	int8_t x122 = INT8_MIN;
	int64_t x123 = INT64_MAX;
	int64_t x124 = -1LL;
	volatile int64_t t25 = -615LL;

	t25 = (x121/(x122-(x123^x124)));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x125 = -1;
	static int32_t x126 = INT32_MIN;
	volatile int64_t x127 = INT64_MIN;
	static uint32_t x128 = UINT32_MAX;
	volatile int64_t t26 = -97427850597946LL;

	t26 = (x125/(x126-(x127^x128)));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x130 = UINT64_MAX;
	static int64_t x131 = INT64_MIN;
	static int64_t x132 = -1LL;

	t27 = (x129/(x130-(x131^x132)));

	if (t27 != 1LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x133 = INT16_MAX;
	int32_t x134 = INT32_MIN;
	int64_t x135 = -1LL;
	static uint64_t x136 = 36791954LLU;
	uint64_t t28 = 33373122LLU;

	t28 = (x133/(x134-(x135^x136)));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint8_t x137 = 3U;
	volatile uint8_t x139 = UINT8_MAX;
	static volatile int32_t t29 = -65058;

	t29 = (x137/(x138-(x139^x140)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x141 = INT32_MAX;
	volatile int8_t x142 = -9;
	int64_t x143 = INT64_MIN;
	int16_t x144 = -606;

	t30 = (x141/(x142-(x143^x144)));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x145 = -1;
	volatile uint8_t x146 = 37U;
	int64_t x147 = 984925620239370719LL;
	uint64_t x148 = 11759312713LLU;
	static uint64_t t31 = 16407949471047947LLU;

	t31 = (x145/(x146-(x147^x148)));

	if (t31 != 1LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x149 = 54439U;
	volatile int16_t x151 = 1118;
	int64_t x152 = 0LL;
	int64_t t32 = 352895LL;

	t32 = (x149/(x150-(x151^x152)));

	if (t32 != -50LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x157 = -1;
	volatile int64_t x159 = -13326717492602405LL;
	static int64_t t33 = -405930919639219216LL;

	t33 = (x157/(x158-(x159^x160)));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x161 = 1U;
	static uint64_t x162 = 7779LLU;
	uint64_t x163 = 2324070692098035LLU;
	int16_t x164 = 4170;
	volatile uint64_t t34 = 768LLU;

	t34 = (x161/(x162-(x163^x164)));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x165 = -1;
	volatile uint8_t x167 = UINT8_MAX;
	uint16_t x168 = 11U;
	int32_t t35 = 1445583;

	t35 = (x165/(x166-(x167^x168)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x169 = 16709194;
	int8_t x170 = -1;
	int64_t x171 = INT64_MIN;
	int16_t x172 = INT16_MIN;
	static volatile int64_t t36 = -45746727737713737LL;

	t36 = (x169/(x170-(x171^x172)));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x174 = 66376095LLU;
	int32_t x176 = INT32_MAX;
	static volatile uint64_t t37 = 632610250284LLU;

	t37 = (x173/(x174-(x175^x176)));

	if (t37 != 1LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x177 = UINT32_MAX;
	int32_t x178 = INT32_MAX;
	int32_t x179 = 3;
	volatile uint32_t t38 = 64338U;

	t38 = (x177/(x178-(x179^x180)));

	if (t38 != 2U) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x181 = INT32_MIN;
	int64_t x182 = INT64_MIN;
	uint64_t x183 = 208414301143344LLU;
	uint64_t x184 = 3973LLU;
	uint64_t t39 = 61942LLU;

	t39 = (x181/(x182-(x183^x184)));

	if (t39 != 2LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x185 = 0LLU;
	static volatile uint16_t x186 = 510U;
	volatile uint8_t x187 = 2U;
	static uint16_t x188 = UINT16_MAX;
	volatile uint64_t t40 = 1152134936271954383LLU;

	t40 = (x185/(x186-(x187^x188)));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x193 = UINT16_MAX;
	static int64_t x194 = INT64_MIN;
	static int8_t x195 = INT8_MIN;
	int64_t t41 = 148891728309163LL;

	t41 = (x193/(x194-(x195^x196)));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x197 = UINT64_MAX;
	static uint16_t x199 = UINT16_MAX;
	static int64_t x200 = INT64_MAX;
	uint64_t t42 = 450372690123504LLU;

	t42 = (x197/(x198-(x199^x200)));

	if (t42 != 1LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x201 = -9460944916844LL;
	static volatile int64_t x202 = INT64_MIN;
	int8_t x203 = -1;
	int32_t x204 = INT32_MAX;
	volatile int64_t t43 = 4LL;

	t43 = (x201/(x202-(x203^x204)));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x208 = INT8_MIN;
	volatile uint32_t t44 = 684971U;

	t44 = (x205/(x206-(x207^x208)));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x211 = INT32_MIN;
	int8_t x212 = 41;

	t45 = (x209/(x210-(x211^x212)));

	if (t45 != 163096LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x213 = INT64_MAX;
	int32_t x216 = INT32_MIN;
	int64_t t46 = -91277878855504336LL;

	t46 = (x213/(x214-(x215^x216)));

	if (t46 != -3152316257LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x221 = 4265439901017714748LLU;
	uint8_t x222 = UINT8_MAX;
	uint64_t t47 = 239323188LLU;

	t47 = (x221/(x222-(x223^x224)));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x225 = 6LLU;
	uint32_t x226 = UINT32_MAX;
	volatile int16_t x227 = INT16_MAX;
	volatile uint32_t x228 = 20668U;

	t48 = (x225/(x226-(x227^x228)));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x229 = UINT32_MAX;
	int8_t x230 = 1;
	static uint64_t x231 = 22829LLU;
	static int64_t x232 = 57602LL;
	static uint64_t t49 = 13929839388LLU;

	t49 = (x229/(x230-(x231^x232)));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x233 = 9U;
	volatile int64_t x234 = -1LL;
	uint32_t x235 = UINT32_MAX;
	int64_t t50 = 6408382LL;

	t50 = (x233/(x234-(x235^x236)));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x237 = 6217LL;
	static int64_t x239 = -242LL;
	int16_t x240 = INT16_MIN;
	int64_t t51 = 40053699039080503LL;

	t51 = (x237/(x238-(x239^x240)));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x242 = 1789439U;
	int32_t x243 = -1;
	static uint8_t x244 = 2U;
	volatile int64_t t52 = -9722311186905LL;

	t52 = (x241/(x242-(x243^x244)));

	if (t52 != -5154328576648LL) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint16_t x246 = 10874U;
	uint32_t x247 = 4U;
	uint64_t x248 = 2LLU;
	uint64_t t53 = 10LLU;

	t53 = (x245/(x246-(x247^x248)));

	if (t53 != 83LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x249 = INT16_MAX;
	volatile int16_t x250 = -3689;
	int8_t x251 = -1;
	int16_t x252 = INT16_MIN;
	static volatile int32_t t54 = 5067452;

	t54 = (x249/(x250-(x251^x252)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x257 = UINT32_MAX;
	int64_t x260 = -1LL;
	volatile uint64_t t55 = 1883766LLU;

	t55 = (x257/(x258-(x259^x260)));

	if (t55 != 44739242LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x261 = -1;
	static int16_t x262 = 0;
	uint8_t x263 = 88U;
	int16_t x264 = -118;
	int32_t t56 = 287799;

	t56 = (x261/(x262-(x263^x264)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x265 = 2U;
	int64_t x266 = INT64_MAX;
	uint8_t x267 = 1U;
	uint32_t x268 = 1242895U;
	volatile int64_t t57 = -157LL;

	t57 = (x265/(x266-(x267^x268)));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x269 = 5291;
	int16_t x270 = INT16_MIN;
	int64_t x271 = 392571964796366169LL;
	uint16_t x272 = 19186U;
	int64_t t58 = 435168426077210950LL;

	t58 = (x269/(x270-(x271^x272)));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x273 = -1;
	uint64_t x275 = UINT64_MAX;
	static volatile uint16_t x276 = 11858U;
	volatile uint64_t t59 = 5246308594297590253LLU;

	t59 = (x273/(x274-(x275^x276)));

	if (t59 != 1555637044502407LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x277 = 0U;
	static volatile uint16_t x278 = UINT16_MAX;
	int64_t x279 = -1LL;
	int16_t x280 = INT16_MIN;
	int64_t t60 = -15293LL;

	t60 = (x277/(x278-(x279^x280)));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x281 = -1;
	int32_t x282 = -13358201;
	uint8_t x283 = 26U;
	int64_t x284 = 2025464LL;
	volatile int64_t t61 = -62338237360LL;

	t61 = (x281/(x282-(x283^x284)));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x285 = 396239214U;
	uint16_t x286 = 1U;
	volatile uint32_t x288 = 251309U;
	volatile int64_t t62 = -2946LL;

	t62 = (x285/(x286-(x287^x288)));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint8_t x290 = 1U;
	uint64_t x291 = UINT64_MAX;
	uint16_t x292 = UINT16_MAX;
	static uint64_t t63 = 26048197LLU;

	t63 = (x289/(x290-(x291^x292)));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x293 = 6U;
	int64_t x295 = -1LL;
	static volatile int64_t t64 = 1981830394095692392LL;

	t64 = (x293/(x294-(x295^x296)));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x298 = INT32_MIN;
	static volatile int64_t x299 = -506800LL;
	uint8_t x300 = 5U;

	t65 = (x297/(x298-(x299^x300)));

	if (t65 != 4295981125LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x301 = 20U;
	static uint32_t x302 = 230337764U;
	uint64_t x303 = UINT64_MAX;
	static int64_t x304 = -1LL;
	uint64_t t66 = 3324LLU;

	t66 = (x301/(x302-(x303^x304)));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x305 = 1U;
	int8_t x306 = INT8_MIN;
	int8_t x307 = INT8_MIN;
	static volatile int64_t t67 = 199581740950486127LL;

	t67 = (x305/(x306-(x307^x308)));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x311 = INT64_MAX;
	volatile uint16_t x312 = 12U;
	int64_t t68 = 31882953338LL;

	t68 = (x309/(x310-(x311^x312)));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x313 = -1;
	int32_t x314 = INT32_MAX;
	int8_t x315 = INT8_MIN;
	uint64_t t69 = 702309395336LLU;

	t69 = (x313/(x314-(x315^x316)));

	if (t69 != 753137098LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x317 = INT8_MIN;
	int32_t x318 = 790457777;
	int32_t x319 = INT32_MIN;
	int64_t x320 = -96308420766LL;
	volatile int64_t t70 = 132797419LL;

	t70 = (x317/(x318-(x319^x320)));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x325 = INT8_MAX;
	volatile int64_t x326 = -1LL;
	static uint8_t x328 = 13U;

	t71 = (x325/(x326-(x327^x328)));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x333 = UINT32_MAX;
	static volatile int8_t x334 = -1;
	uint32_t x335 = 23400396U;
	static int64_t x336 = 4232662369270LL;
	volatile int64_t t72 = 17LL;

	t72 = (x333/(x334-(x335^x336)));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x337 = -1LL;
	int32_t x338 = 859722584;
	volatile int32_t x339 = INT32_MIN;
	static uint32_t x340 = 6063U;
	volatile int64_t t73 = -1364LL;

	t73 = (x337/(x338-(x339^x340)));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x341 = INT64_MIN;
	int64_t t74 = -1LL;

	t74 = (x341/(x342-(x343^x344)));

	if (t74 != -8972151786823711LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x346 = UINT32_MAX;
	static int8_t x347 = -1;
	uint32_t t75 = 188690U;

	t75 = (x345/(x346-(x347^x348)));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x349 = UINT32_MAX;
	uint16_t x350 = 767U;
	uint64_t x351 = UINT64_MAX;
	int64_t x352 = -9969732383203551LL;
	volatile uint64_t t76 = 1LLU;

	t76 = (x349/(x350-(x351^x352)));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x354 = -1LL;
	uint8_t x355 = 3U;
	static volatile int16_t x356 = INT16_MIN;
	volatile int64_t t77 = -55414LL;

	t77 = (x353/(x354-(x355^x356)));

	if (t77 != -11398300669290LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x357 = 621LLU;
	uint16_t x358 = 0U;
	int16_t x359 = INT16_MIN;
	uint64_t t78 = 60422022408641313LLU;

	t78 = (x357/(x358-(x359^x360)));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x361 = 9U;
	int8_t x363 = -6;
	volatile uint64_t x364 = 22414LLU;
	static uint64_t t79 = 32325684547554LLU;

	t79 = (x361/(x362-(x363^x364)));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x365 = -20;
	int16_t x366 = -1;
	int8_t x367 = 13;
	int16_t x368 = 2;
	static volatile int32_t t80 = -37731;

	t80 = (x365/(x366-(x367^x368)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x369 = INT32_MAX;
	volatile int16_t x370 = INT16_MIN;
	uint8_t x371 = 126U;
	int64_t t81 = 4LL;

	t81 = (x369/(x370-(x371^x372)));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x374 = -1;
	uint32_t x375 = 171771U;
	static uint32_t x376 = UINT32_MAX;
	uint32_t t82 = 6759U;

	t82 = (x373/(x374-(x375^x376)));

	if (t82 != 25004U) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x377 = INT32_MIN;
	int16_t x378 = INT16_MIN;
	static int64_t x379 = INT64_MIN;
	volatile int16_t x380 = 0;
	static int64_t t83 = -372449915LL;

	t83 = (x377/(x378-(x379^x380)));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x381 = 29LLU;
	int8_t x382 = -4;
	int8_t x383 = INT8_MIN;
	int64_t x384 = -11170789072LL;
	uint64_t t84 = 2223835122930LLU;

	t84 = (x381/(x382-(x383^x384)));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x385 = -1296LL;
	int16_t x386 = INT16_MIN;
	volatile int32_t x387 = -67609;
	uint64_t x388 = 321681364647794056LLU;
	volatile uint64_t t85 = 7547768176737631502LLU;

	t85 = (x385/(x386-(x387^x388)));

	if (t85 != 57LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x389 = INT32_MIN;
	int32_t x390 = INT32_MAX;
	int8_t x392 = -1;
	volatile uint64_t t86 = 0LLU;

	t86 = (x389/(x390-(x391^x392)));

	if (t86 != 8589934587LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x393 = -1LL;
	int64_t x395 = INT64_MIN;
	volatile int64_t x396 = INT64_MIN;
	uint64_t t87 = 8497620LLU;

	t87 = (x393/(x394-(x395^x396)));

	if (t87 != 1LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x397 = UINT8_MAX;
	static int16_t x398 = INT16_MIN;
	static int32_t x399 = INT32_MAX;
	int32_t t88 = -90384;

	t88 = (x397/(x398-(x399^x400)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x401 = INT16_MAX;
	volatile int8_t x402 = -1;
	uint8_t x403 = 32U;
	int64_t t89 = 128LL;

	t89 = (x401/(x402-(x403^x404)));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x406 = 2949U;
	int32_t x407 = INT32_MIN;
	static int64_t x408 = INT64_MIN;
	volatile int64_t t90 = 1113863135903226874LL;

	t90 = (x405/(x406-(x407^x408)));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x409 = 169U;
	uint16_t x410 = 1U;
	static volatile uint64_t x412 = 749131772615459105LLU;
	volatile uint64_t t91 = 846894298553805LLU;

	t91 = (x409/(x410-(x411^x412)));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x413 = INT16_MIN;
	static uint8_t x414 = 2U;
	int64_t x416 = INT64_MIN;
	static int64_t t92 = 1255319747748549LL;

	t92 = (x413/(x414-(x415^x416)));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x417 = INT32_MAX;
	static uint16_t x418 = 18U;
	int8_t x419 = INT8_MIN;
	int8_t x420 = 3;

	t93 = (x417/(x418-(x419^x420)));

	if (t93 != 15017368) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x422 = INT16_MIN;
	int8_t x423 = -1;
	int8_t x424 = INT8_MIN;
	volatile uint64_t t94 = 181549797170128180LLU;

	t94 = (x421/(x422-(x423^x424)));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x425 = -1;
	static int8_t x426 = INT8_MIN;
	volatile int32_t x427 = -1;
	volatile int64_t x428 = INT64_MAX;

	t95 = (x425/(x426-(x427^x428)));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x429 = INT16_MIN;
	volatile uint32_t x430 = UINT32_MAX;
	static int16_t x432 = INT16_MIN;
	uint64_t t96 = 2459783770721490600LLU;

	t96 = (x429/(x430-(x431^x432)));

	if (t96 != 4294935953LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x433 = INT64_MIN;
	static int64_t x434 = -65142LL;
	static int16_t x435 = INT16_MIN;
	static volatile uint64_t t97 = 0LLU;

	t97 = (x433/(x434-(x435^x436)));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x437 = 72027214305377LL;
	volatile uint8_t x438 = UINT8_MAX;
	uint32_t x439 = UINT32_MAX;
	int64_t t98 = -3965798223868635LL;

	t98 = (x437/(x438-(x439^x440)));

	if (t98 != 281356305880LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x441 = 2;
	static int16_t x443 = INT16_MAX;
	static int8_t x444 = INT8_MIN;
	static uint64_t t99 = 5001272797LLU;

	t99 = (x441/(x442-(x443^x444)));

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

