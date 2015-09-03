#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t1 = 681951615301199933LLU;
static int32_t x9 = INT32_MAX;
int64_t x10 = -1LL;
int8_t x13 = 41;
int64_t t5 = -66164220241477LL;
uint32_t x26 = UINT32_MAX;
uint32_t x31 = UINT32_MAX;
volatile uint16_t x40 = 1141U;
volatile uint64_t t8 = 7253077LLU;
int64_t x44 = -1LL;
int64_t t11 = -3189229757109037648LL;
int64_t x57 = INT64_MIN;
int64_t x68 = -1LL;
int16_t x70 = -1;
uint64_t x82 = 425963760713LLU;
uint64_t x83 = UINT64_MAX;
static volatile uint64_t t19 = 44121838868971872LLU;
int32_t x85 = INT32_MIN;
volatile uint32_t x92 = 121703U;
int16_t x94 = -1;
int64_t x97 = INT64_MIN;
int64_t x99 = INT64_MIN;
static uint32_t x100 = 118348U;
int8_t x115 = INT8_MAX;
uint32_t x125 = 1753939U;
int64_t x127 = INT64_MIN;
volatile uint64_t t28 = 867660LLU;
static int16_t x130 = 10;
int32_t x138 = INT32_MIN;
int32_t x142 = -1;
volatile uint32_t t32 = 2837U;
volatile int32_t x154 = INT32_MIN;
int32_t t36 = 1;
volatile int32_t x165 = INT32_MIN;
static int64_t x167 = INT64_MIN;
static int64_t x171 = INT64_MAX;
int64_t t39 = 22872LL;
volatile uint64_t x191 = 6930LLU;
static int64_t x192 = -12LL;
static volatile uint64_t t41 = 13LLU;
static volatile int32_t x199 = -158;
volatile uint64_t t43 = 7712394091LLU;
int64_t x203 = -2933253497966421083LL;
int8_t x207 = INT8_MAX;
volatile int8_t x209 = -1;
int64_t x212 = 116463092000LL;
static int64_t t47 = 43433279409423179LL;
uint16_t x225 = 74U;
volatile uint32_t x227 = 6U;
static volatile uint16_t x231 = UINT16_MAX;
int64_t x235 = 21LL;
static int8_t x237 = INT8_MIN;
int64_t t53 = 613073288LL;
static volatile uint8_t x245 = 6U;
uint32_t x248 = 6U;
volatile int8_t x254 = -3;
static uint16_t x257 = 3U;
int16_t x270 = 144;
int64_t x275 = INT64_MAX;
static uint64_t x276 = 2202779374891993LLU;
volatile int32_t x277 = INT32_MIN;
int16_t x283 = -6;
uint16_t x294 = 283U;
int32_t t65 = -55907;
int16_t x298 = INT16_MAX;
static uint64_t x299 = 10547LLU;
int32_t x300 = INT32_MIN;
volatile uint64_t t66 = 34283LLU;
static uint32_t x301 = 848U;
uint32_t x315 = 1204U;
int32_t x316 = 30602958;
volatile uint32_t x317 = 519U;
int64_t x319 = -1LL;
int8_t x321 = INT8_MAX;
int8_t x325 = -1;
int8_t x334 = INT8_MAX;
uint16_t x348 = 26599U;
uint32_t x359 = 1621504U;
volatile int16_t x366 = INT16_MIN;
int16_t x372 = -1;
static uint64_t x374 = 240711166864408882LLU;
static int64_t x376 = -7267LL;
uint32_t t82 = 407U;
int32_t x384 = INT32_MIN;
static int8_t x386 = INT8_MIN;
volatile uint64_t x387 = 6590815677958377LLU;
int8_t x394 = INT8_MIN;
int64_t x397 = -1LL;
int64_t x398 = 3LL;
int16_t x405 = INT16_MIN;
int16_t x410 = -1;
static volatile int8_t x412 = -1;
static int64_t x418 = INT64_MIN;
int8_t x419 = INT8_MIN;
int64_t t92 = -725728487033LL;
uint64_t x424 = 219219LLU;
int8_t x425 = -1;
volatile int32_t x427 = INT32_MAX;
uint64_t t95 = 2LLU;
uint64_t x433 = 33724LLU;
int16_t x435 = 551;
static uint16_t x440 = 233U;
int8_t x441 = INT8_MIN;
static int16_t x442 = 0;


void f0(void) {
	int32_t x1 = INT32_MIN;
	volatile int16_t x2 = -2;
	uint16_t x3 = UINT16_MAX;
	volatile uint8_t x4 = 1U;
	volatile int32_t t0 = 5;

	t0 = (x1&((x2/x3)*x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 126293307327LLU;
	static int64_t x6 = 1LL;
	static int16_t x7 = -1;
	uint16_t x8 = UINT16_MAX;

	t1 = (x5&((x6/x7)*x8));

	if (t1 != 126293245953LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x11 = INT32_MIN;
	int16_t x12 = -1;
	static int64_t t2 = -1228531LL;

	t2 = (x9&((x10/x11)*x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x14 = INT8_MIN;
	volatile int16_t x15 = INT16_MIN;
	static int8_t x16 = -15;
	int32_t t3 = 725;

	t3 = (x13&((x14/x15)*x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	int64_t x18 = -8260855026LL;
	int32_t x19 = 798;
	uint32_t x20 = 43060690U;
	int64_t t4 = -172531565157537LL;

	t4 = (x17&((x18/x19)*x20));

	if (t4 != -445762023724160LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -1;
	int32_t x22 = INT32_MIN;
	int64_t x23 = INT64_MAX;
	volatile int64_t x24 = -2119461231LL;

	t5 = (x21&((x22/x23)*x24));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = UINT8_MAX;
	int64_t x27 = INT64_MIN;
	int16_t x28 = INT16_MAX;
	volatile int64_t t6 = -1531341662384032LL;

	t6 = (x25&((x26/x27)*x28));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = INT8_MIN;
	uint64_t x30 = UINT64_MAX;
	static uint16_t x32 = UINT16_MAX;
	uint64_t t7 = 67594163LLU;

	t7 = (x29&((x30/x31)*x32));

	if (t7 != 281470681808768LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x37 = INT64_MIN;
	volatile uint8_t x38 = 2U;
	volatile uint64_t x39 = 4207841756745LLU;

	t8 = (x37&((x38/x39)*x40));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = INT32_MAX;
	int16_t x42 = INT16_MIN;
	uint32_t x43 = 282U;
	static int64_t t9 = -4192666552LL;

	t9 = (x41&((x42/x43)*x44));

	if (t9 != 2132253384LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = 4;
	uint32_t x46 = UINT32_MAX;
	int64_t x47 = INT64_MAX;
	int16_t x48 = INT16_MIN;
	int64_t t10 = -102LL;

	t10 = (x45&((x46/x47)*x48));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int32_t x49 = INT32_MAX;
	int64_t x50 = 11435LL;
	int32_t x51 = INT32_MIN;
	volatile int16_t x52 = INT16_MAX;

	t11 = (x49&((x50/x51)*x52));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x53 = 4853024U;
	volatile int64_t x54 = -1LL;
	int16_t x55 = -1;
	int64_t x56 = -1694LL;
	volatile int64_t t12 = 432548681829LL;

	t12 = (x53&((x54/x55)*x56));

	if (t12 != 4852000LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x58 = 15332522;
	int8_t x59 = -4;
	int8_t x60 = -1;
	int64_t t13 = 1287695286LL;

	t13 = (x57&((x58/x59)*x60));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x61 = 18423U;
	volatile int32_t x62 = -1;
	int32_t x63 = INT32_MAX;
	int64_t x64 = -1LL;
	int64_t t14 = -633627093175168503LL;

	t14 = (x61&((x62/x63)*x64));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = INT64_MAX;
	int32_t x66 = -1;
	int16_t x67 = 188;
	volatile int64_t t15 = -102100139LL;

	t15 = (x65&((x66/x67)*x68));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = INT64_MAX;
	uint16_t x71 = UINT16_MAX;
	int8_t x72 = -29;
	int64_t t16 = -30358139944265LL;

	t16 = (x69&((x70/x71)*x72));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x73 = 0U;
	static volatile uint64_t x74 = 200026551049129LLU;
	uint32_t x75 = 1266035379U;
	int64_t x76 = INT64_MAX;
	volatile uint64_t t17 = 408266322099729LLU;

	t17 = (x73&((x74/x75)*x76));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = INT64_MIN;
	volatile int16_t x78 = -1;
	uint32_t x79 = 460U;
	static uint32_t x80 = 634734414U;
	int64_t t18 = -34LL;

	t18 = (x77&((x78/x79)*x80));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x81 = INT8_MIN;
	uint8_t x84 = 51U;

	t19 = (x81&((x82/x83)*x84));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x86 = UINT64_MAX;
	uint64_t x87 = 128726417LLU;
	static uint16_t x88 = 932U;
	volatile uint64_t t20 = 5LLU;

	t20 = (x85&((x86/x87)*x88));

	if (t20 != 133556303036416LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x89 = INT16_MIN;
	uint16_t x90 = 0U;
	int32_t x91 = INT32_MIN;
	uint32_t t21 = 57U;

	t21 = (x89&((x90/x91)*x92));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = INT8_MIN;
	static int16_t x95 = -3;
	uint16_t x96 = 31891U;
	volatile int32_t t22 = 114467;

	t22 = (x93&((x94/x95)*x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x98 = 7386U;
	volatile int64_t t23 = -77LL;

	t23 = (x97&((x98/x99)*x100));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x101 = UINT8_MAX;
	int16_t x102 = -181;
	uint8_t x103 = 1U;
	uint8_t x104 = UINT8_MAX;
	int32_t t24 = 9320285;

	t24 = (x101&((x102/x103)*x104));

	if (t24 != 181) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x113 = -1;
	volatile int8_t x114 = -1;
	uint32_t x116 = 1829U;
	uint32_t t25 = 14911U;

	t25 = (x113&((x114/x115)*x116));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x117 = -3;
	int16_t x118 = INT16_MAX;
	int64_t x119 = INT64_MIN;
	int8_t x120 = INT8_MAX;
	static int64_t t26 = -3804099322873LL;

	t26 = (x117&((x118/x119)*x120));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x121 = INT8_MAX;
	static uint8_t x122 = UINT8_MAX;
	volatile int16_t x123 = INT16_MIN;
	int32_t x124 = INT32_MAX;
	volatile int32_t t27 = -8083;

	t27 = (x121&((x122/x123)*x124));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x126 = 2576LLU;
	int16_t x128 = -4;

	t28 = (x125&((x126/x127)*x128));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x129 = 887085151LL;
	volatile uint16_t x131 = 816U;
	int32_t x132 = INT32_MAX;
	volatile int64_t t29 = 67326418962LL;

	t29 = (x129&((x130/x131)*x132));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x133 = 26;
	static int8_t x134 = INT8_MAX;
	uint64_t x135 = 7813476654LLU;
	static uint8_t x136 = 7U;
	uint64_t t30 = 31571679055072512LLU;

	t30 = (x133&((x134/x135)*x136));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x137 = -6417;
	static int32_t x139 = -1902539;
	int8_t x140 = 9;
	int32_t t31 = -722;

	t31 = (x137&((x138/x139)*x140));

	if (t31 != 9896) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x141 = INT32_MIN;
	int32_t x143 = -1;
	uint32_t x144 = UINT32_MAX;

	t32 = (x141&((x142/x143)*x144));

	if (t32 != 2147483648U) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x145 = 11LLU;
	static uint64_t x146 = 275LLU;
	volatile int8_t x147 = -4;
	static int32_t x148 = INT32_MAX;
	uint64_t t33 = 30546567449324LLU;

	t33 = (x145&((x146/x147)*x148));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x149 = INT16_MAX;
	uint32_t x150 = 29355U;
	int64_t x151 = -1LL;
	int16_t x152 = -1;
	volatile int64_t t34 = -20560313837LL;

	t34 = (x149&((x150/x151)*x152));

	if (t34 != 29355LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x153 = INT16_MIN;
	volatile int8_t x155 = INT8_MAX;
	volatile int8_t x156 = 6;
	int32_t t35 = -24694419;

	t35 = (x153&((x154/x155)*x156));

	if (t35 != -101482496) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x161 = 55;
	int32_t x162 = -1;
	int16_t x163 = INT16_MAX;
	int8_t x164 = -1;

	t36 = (x161&((x162/x163)*x164));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x166 = INT32_MIN;
	static int32_t x168 = INT32_MIN;
	int64_t t37 = 1LL;

	t37 = (x165&((x166/x167)*x168));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x169 = UINT32_MAX;
	int32_t x170 = INT32_MAX;
	int32_t x172 = -49175178;
	int64_t t38 = -12590LL;

	t38 = (x169&((x170/x171)*x172));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x173 = -1LL;
	volatile int32_t x174 = 458;
	static int64_t x175 = 291172294367472LL;
	int16_t x176 = -1;

	t39 = (x173&((x174/x175)*x176));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x181 = INT64_MIN;
	int64_t x182 = -1LL;
	int16_t x183 = 15632;
	volatile int32_t x184 = -1;
	volatile int64_t t40 = -49207461300LL;

	t40 = (x181&((x182/x183)*x184));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x189 = INT64_MAX;
	uint8_t x190 = 114U;

	t41 = (x189&((x190/x191)*x192));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x193 = -1LL;
	int8_t x194 = INT8_MIN;
	volatile uint8_t x195 = 1U;
	volatile int32_t x196 = -1;
	int64_t t42 = -411456290LL;

	t42 = (x193&((x194/x195)*x196));

	if (t42 != 128LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x197 = 23744LLU;
	int64_t x198 = 54LL;
	volatile uint8_t x200 = UINT8_MAX;

	t43 = (x197&((x198/x199)*x200));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x201 = -1;
	int16_t x202 = 16;
	uint32_t x204 = UINT32_MAX;
	int64_t t44 = 12607317224LL;

	t44 = (x201&((x202/x203)*x204));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x205 = INT16_MIN;
	int64_t x206 = -54LL;
	volatile int8_t x208 = 7;
	int64_t t45 = -392LL;

	t45 = (x205&((x206/x207)*x208));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x210 = UINT16_MAX;
	int64_t x211 = -117180460269LL;
	static int64_t t46 = 19455158107820LL;

	t46 = (x209&((x210/x211)*x212));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x213 = INT32_MIN;
	int8_t x214 = INT8_MIN;
	int64_t x215 = 112748LL;
	uint16_t x216 = UINT16_MAX;

	t47 = (x213&((x214/x215)*x216));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x217 = 3668U;
	int8_t x218 = INT8_MIN;
	int8_t x219 = INT8_MIN;
	uint8_t x220 = 94U;
	volatile int32_t t48 = 223366;

	t48 = (x217&((x218/x219)*x220));

	if (t48 != 84) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x226 = 14885;
	uint32_t x228 = UINT32_MAX;
	volatile uint32_t t49 = 31U;

	t49 = (x225&((x226/x227)*x228));

	if (t49 != 64U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x229 = INT32_MIN;
	volatile int8_t x230 = INT8_MIN;
	static int16_t x232 = -1;
	int32_t t50 = 103390372;

	t50 = (x229&((x230/x231)*x232));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x233 = UINT16_MAX;
	int32_t x234 = INT32_MIN;
	int32_t x236 = INT32_MIN;
	int64_t t51 = -13190LL;

	t51 = (x233&((x234/x235)*x236));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x238 = INT8_MIN;
	static int8_t x239 = INT8_MAX;
	uint32_t x240 = 2U;
	volatile uint32_t t52 = 3913U;

	t52 = (x237&((x238/x239)*x240));

	if (t52 != 4294967168U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x241 = 6327;
	int64_t x242 = INT64_MIN;
	volatile int64_t x243 = 43333998LL;
	static int8_t x244 = 2;

	t53 = (x241&((x242/x243)*x244));

	if (t53 != 6320LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x246 = -1LL;
	volatile int8_t x247 = INT8_MIN;
	volatile int64_t t54 = -23487218722139670LL;

	t54 = (x245&((x246/x247)*x248));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x249 = 390016808908680LLU;
	static int8_t x250 = -1;
	int16_t x251 = INT16_MIN;
	int64_t x252 = 2004805970LL;
	static volatile uint64_t t55 = 1096570536422888LLU;

	t55 = (x249&((x250/x251)*x252));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x253 = INT16_MAX;
	uint8_t x255 = 1U;
	static uint64_t x256 = 11213768841564LLU;
	uint64_t t56 = 55855679532355LLU;

	t56 = (x253&((x254/x255)*x256));

	if (t56 != 29676LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x258 = -41333453952042LL;
	int32_t x259 = -1650;
	int64_t x260 = -1LL;
	static int64_t t57 = 257984394LL;

	t57 = (x257&((x258/x259)*x260));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x261 = UINT16_MAX;
	volatile uint16_t x262 = 0U;
	static uint64_t x263 = UINT64_MAX;
	uint8_t x264 = 54U;
	volatile uint64_t t58 = 224687252841726451LLU;

	t58 = (x261&((x262/x263)*x264));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x265 = INT64_MAX;
	uint32_t x266 = 8571U;
	static uint8_t x267 = 1U;
	int8_t x268 = 1;
	volatile int64_t t59 = 907399562096671581LL;

	t59 = (x265&((x266/x267)*x268));

	if (t59 != 8571LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x269 = -22;
	int32_t x271 = -33314724;
	static uint16_t x272 = UINT16_MAX;
	int32_t t60 = -3;

	t60 = (x269&((x270/x271)*x272));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x273 = -1LL;
	uint64_t x274 = UINT64_MAX;
	static volatile uint64_t t61 = 35270443659758LLU;

	t61 = (x273&((x274/x275)*x276));

	if (t61 != 4405558749783986LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x278 = 11431;
	uint8_t x279 = 39U;
	int64_t x280 = -1LL;
	int64_t t62 = -5LL;

	t62 = (x277&((x278/x279)*x280));

	if (t62 != -2147483648LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x281 = -1;
	int32_t x282 = 43737;
	int16_t x284 = INT16_MIN;
	volatile int32_t t63 = -66152;

	t63 = (x281&((x282/x283)*x284));

	if (t63 != 238845952) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x289 = 51;
	int32_t x290 = 23641;
	uint64_t x291 = 50023476LLU;
	volatile int8_t x292 = INT8_MIN;
	static uint64_t t64 = 533423578LLU;

	t64 = (x289&((x290/x291)*x292));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x293 = 2;
	uint8_t x295 = 27U;
	uint8_t x296 = 1U;

	t65 = (x293&((x294/x295)*x296));

	if (t65 != 2) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x297 = -153439LL;

	t66 = (x297&((x298/x299)*x300));

	if (t66 != 18446744067267100672LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x302 = -251346741150122LL;
	volatile int32_t x303 = INT32_MIN;
	int8_t x304 = 25;
	int64_t t67 = 7459927858LL;

	t67 = (x301&((x302/x303)*x304));

	if (t67 != 320LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x305 = 4411U;
	int32_t x306 = -862014;
	uint64_t x307 = UINT64_MAX;
	volatile int32_t x308 = -1;
	volatile uint64_t t68 = 40310567606998381LLU;

	t68 = (x305&((x306/x307)*x308));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x309 = 354U;
	static int16_t x310 = INT16_MIN;
	int32_t x311 = -1;
	int8_t x312 = -27;
	int32_t t69 = 8009677;

	t69 = (x309&((x310/x311)*x312));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x313 = 44507U;
	static int16_t x314 = 1938;
	uint32_t t70 = 153566U;

	t70 = (x313&((x314/x315)*x316));

	if (t70 != 42186U) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x318 = 18639LLU;
	static int64_t x320 = INT64_MIN;
	uint64_t t71 = 80036180075LLU;

	t71 = (x317&((x318/x319)*x320));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x322 = 75U;
	volatile uint32_t x323 = 49266075U;
	int64_t x324 = -31LL;
	volatile int64_t t72 = 6436827965LL;

	t72 = (x321&((x322/x323)*x324));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x326 = INT16_MIN;
	int16_t x327 = -37;
	uint16_t x328 = UINT16_MAX;
	volatile int32_t t73 = 1036737;

	t73 = (x325&((x326/x327)*x328));

	if (t73 != 57998475) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x329 = 29U;
	volatile int32_t x330 = INT32_MIN;
	static uint8_t x331 = UINT8_MAX;
	uint8_t x332 = 1U;
	volatile int32_t t74 = 93;

	t74 = (x329&((x330/x331)*x332));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x333 = INT32_MIN;
	uint32_t x335 = 3215050U;
	static int32_t x336 = INT32_MIN;
	uint32_t t75 = 0U;

	t75 = (x333&((x334/x335)*x336));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x345 = -1;
	int8_t x346 = INT8_MIN;
	int8_t x347 = INT8_MIN;
	int32_t t76 = -16001403;

	t76 = (x345&((x346/x347)*x348));

	if (t76 != 26599) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x357 = -479;
	int8_t x358 = INT8_MAX;
	int32_t x360 = INT32_MIN;
	static volatile uint32_t t77 = 82937100U;

	t77 = (x357&((x358/x359)*x360));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x361 = -1;
	int64_t x362 = INT64_MIN;
	uint32_t x363 = 108831U;
	uint16_t x364 = UINT16_MAX;
	int64_t t78 = 2422313LL;

	t78 = (x361&((x362/x363)*x364));

	if (t78 != -5554058002180222650LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x365 = INT8_MIN;
	int64_t x367 = INT64_MIN;
	static int64_t x368 = INT64_MAX;
	int64_t t79 = 3766LL;

	t79 = (x365&((x366/x367)*x368));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x369 = UINT32_MAX;
	int16_t x370 = INT16_MAX;
	int32_t x371 = 28812627;
	volatile uint32_t t80 = 8423U;

	t80 = (x369&((x370/x371)*x372));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x373 = INT64_MAX;
	static int64_t x375 = INT64_MAX;
	volatile uint64_t t81 = 470985042846LLU;

	t81 = (x373&((x374/x375)*x376));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x377 = UINT16_MAX;
	uint8_t x378 = 98U;
	volatile uint32_t x379 = 60606230U;
	static int32_t x380 = INT32_MIN;

	t82 = (x377&((x378/x379)*x380));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x381 = 500307U;
	int32_t x382 = INT32_MIN;
	uint32_t x383 = 29116452U;
	static uint32_t t83 = 27539U;

	t83 = (x381&((x382/x383)*x384));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x385 = INT16_MIN;
	volatile uint16_t x388 = 5U;
	volatile uint64_t t84 = 1LLU;

	t84 = (x385&((x386/x387)*x388));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x389 = -1;
	uint8_t x390 = UINT8_MAX;
	int8_t x391 = INT8_MIN;
	int64_t x392 = -1LL;
	volatile int64_t t85 = 2724822214064346LL;

	t85 = (x389&((x390/x391)*x392));

	if (t85 != 1LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x393 = INT32_MIN;
	uint8_t x395 = 3U;
	uint8_t x396 = 7U;
	static volatile int32_t t86 = INT32_MIN;

	t86 = (x393&((x394/x395)*x396));

	if (t86 != INT32_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x399 = INT64_MIN;
	static int16_t x400 = INT16_MIN;
	volatile int64_t t87 = -96552466795182814LL;

	t87 = (x397&((x398/x399)*x400));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x401 = 1450U;
	int64_t x402 = 111984825217LL;
	static uint16_t x403 = 84U;
	uint8_t x404 = 117U;
	volatile int64_t t88 = 193124LL;

	t88 = (x401&((x402/x403)*x404));

	if (t88 != 1064LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x406 = 5895U;
	uint32_t x407 = 9774251U;
	volatile int32_t x408 = -205223;
	volatile uint32_t t89 = 1862U;

	t89 = (x405&((x406/x407)*x408));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x409 = UINT64_MAX;
	int8_t x411 = -1;
	volatile uint64_t t90 = UINT64_MAX;

	t90 = (x409&((x410/x411)*x412));

	if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x413 = 9LLU;
	int64_t x414 = -1LL;
	int64_t x415 = INT64_MAX;
	int64_t x416 = -1LL;
	volatile uint64_t t91 = 18763LLU;

	t91 = (x413&((x414/x415)*x416));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x417 = UINT32_MAX;
	int8_t x420 = 1;

	t92 = (x417&((x418/x419)*x420));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x421 = 222981330LL;
	static uint16_t x422 = 0U;
	int16_t x423 = -1;
	uint64_t t93 = 2757LLU;

	t93 = (x421&((x422/x423)*x424));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x426 = 5U;
	int64_t x428 = INT64_MIN;
	int64_t t94 = 3318566131939137698LL;

	t94 = (x425&((x426/x427)*x428));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x429 = 317311318571LLU;
	int8_t x430 = INT8_MIN;
	uint8_t x431 = 5U;
	volatile uint64_t x432 = 10LLU;

	t95 = (x429&((x430/x431)*x432));

	if (t95 != 317311318530LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x434 = UINT64_MAX;
	uint8_t x436 = 0U;
	volatile uint64_t t96 = 296LLU;

	t96 = (x433&((x434/x435)*x436));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x437 = INT8_MIN;
	int32_t x438 = -1;
	int16_t x439 = INT16_MIN;
	int32_t t97 = 1;

	t97 = (x437&((x438/x439)*x440));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x443 = INT64_MAX;
	int8_t x444 = 0;
	int64_t t98 = -7886377LL;

	t98 = (x441&((x442/x443)*x444));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x445 = 45U;
	int64_t x446 = -51289LL;
	static uint64_t x447 = UINT64_MAX;
	int16_t x448 = INT16_MIN;
	volatile uint64_t t99 = 961756857727504LLU;

	t99 = (x445&((x446/x447)*x448));

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

