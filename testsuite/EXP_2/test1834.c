#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x7 = 1473U;
volatile int8_t x9 = INT8_MIN;
int64_t x13 = INT64_MIN;
static volatile int8_t x15 = 1;
int32_t x16 = 0;
int16_t x17 = -1;
int64_t x18 = INT64_MAX;
volatile int64_t t4 = -3LL;
uint8_t x21 = 39U;
volatile int64_t t5 = -901623299447LL;
static uint16_t x27 = UINT16_MAX;
uint16_t x28 = 3U;
static uint64_t t6 = 649683532998984LLU;
int16_t x29 = -1;
int32_t t10 = -27177;
uint16_t x52 = UINT16_MAX;
uint32_t x56 = UINT32_MAX;
uint64_t t12 = 308414455570403LLU;
volatile int16_t x62 = INT16_MIN;
uint64_t t15 = 120633646017636841LLU;
uint8_t x73 = UINT8_MAX;
static uint32_t t18 = 7654U;
uint32_t x85 = 0U;
static volatile uint8_t x87 = 30U;
int8_t x98 = INT8_MIN;
volatile uint16_t x99 = 32127U;
int32_t x103 = -1;
static int32_t x104 = INT32_MAX;
uint64_t x113 = UINT64_MAX;
static uint64_t x116 = 16LLU;
int16_t x138 = INT16_MIN;
static volatile int8_t x148 = INT8_MAX;
static int16_t x164 = INT16_MIN;
static int8_t x167 = INT8_MIN;
volatile int32_t x168 = INT32_MIN;
uint16_t x171 = 1303U;
volatile uint32_t t39 = 311U;
int32_t x177 = -1;
uint8_t x179 = 88U;
volatile uint32_t x183 = 364480501U;
int16_t x185 = INT16_MIN;
int16_t x187 = -95;
int16_t x208 = INT16_MIN;
static int16_t x210 = -1;
int64_t x212 = -1LL;
static int16_t x223 = -30;
int16_t x224 = INT16_MAX;
int32_t x227 = INT32_MIN;
static uint16_t x231 = 27367U;
uint64_t x238 = UINT64_MAX;
uint8_t x239 = 3U;
int64_t x242 = INT64_MIN;
int32_t x249 = -342;
static volatile int8_t x250 = 7;
volatile int8_t x253 = INT8_MIN;
int8_t x256 = -1;
volatile int8_t x259 = -1;
static int8_t x279 = INT8_MAX;
int16_t x280 = INT16_MIN;
static int16_t x282 = INT16_MIN;
volatile uint64_t t62 = 63459707349201LLU;
int8_t x286 = INT8_MAX;
uint64_t x287 = UINT64_MAX;
static volatile int16_t x289 = -259;
uint16_t x295 = 5179U;
int32_t x297 = -1;
int32_t x315 = INT32_MAX;
int64_t x316 = INT64_MIN;
uint8_t x318 = 79U;
int64_t x325 = -1LL;
static int16_t x326 = -1;
int64_t t73 = 2LL;
volatile uint8_t x335 = 7U;
int16_t x344 = INT16_MIN;
static int16_t x349 = INT16_MIN;
int8_t x356 = INT8_MIN;
volatile int16_t x360 = 2608;
volatile uint16_t x361 = 3U;
uint64_t t82 = 109LLU;
static uint16_t x366 = 182U;
int8_t x367 = INT8_MAX;
volatile uint16_t x370 = 1192U;
static uint32_t x372 = 57U;
int32_t t85 = 202;
volatile uint64_t t87 = 1955LLU;
int16_t x385 = INT16_MAX;
int64_t t88 = -37922LL;
static uint16_t x394 = 3410U;
uint64_t x396 = UINT64_MAX;
static int64_t t91 = 16385632LL;
volatile uint16_t x404 = 24797U;
volatile uint8_t x406 = UINT8_MAX;
int64_t x407 = 8LL;
volatile int64_t t93 = -1519872552924028141LL;
volatile uint8_t x410 = UINT8_MAX;
int32_t x412 = -343403;
volatile uint16_t x429 = 163U;
int64_t x431 = INT64_MIN;
static int16_t x433 = 10;
uint64_t t98 = 286413737246345816LLU;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	uint16_t x2 = 508U;
	static int64_t x3 = 8473429LL;
	int64_t x4 = INT64_MIN;
	int64_t t0 = 464950769385521289LL;

	t0 = ((x1|(x2&x3))+x4);

	if (t0 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 46970U;
	uint8_t x6 = 1U;
	uint8_t x8 = 1U;
	uint32_t t1 = 750U;

	t1 = ((x5|(x6&x7))+x8);

	if (t1 != 46972U) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x10 = UINT32_MAX;
	int8_t x11 = INT8_MIN;
	int16_t x12 = INT16_MIN;
	static uint32_t t2 = 218335U;

	t2 = ((x9|(x10&x11))+x12);

	if (t2 != 4294934400U) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint16_t x14 = 23U;
	volatile int64_t t3 = -10LL;

	t3 = ((x13|(x14&x15))+x16);

	if (t3 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x19 = INT64_MIN;
	int32_t x20 = INT32_MIN;

	t4 = ((x17|(x18&x19))+x20);

	if (t4 != -2147483649LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x22 = INT64_MIN;
	uint8_t x23 = 14U;
	volatile int64_t x24 = INT64_MIN;

	t5 = ((x21|(x22&x23))+x24);

	if (t5 != -9223372036854775769LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MAX;
	static uint64_t x26 = 28085122473723LLU;

	t6 = ((x25|(x26&x27))+x28);

	if (t6 != 2147483650LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x30 = 2;
	int64_t x31 = -2LL;
	int16_t x32 = INT16_MIN;
	volatile int64_t t7 = -1LL;

	t7 = ((x29|(x30&x31))+x32);

	if (t7 != -32769LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = 186474997;
	int32_t x34 = INT32_MIN;
	int8_t x35 = -2;
	int8_t x36 = -2;
	volatile int32_t t8 = 31;

	t8 = ((x33|(x34&x35))+x36);

	if (t8 != -1961008653) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = -2487858005856639127LL;
	int8_t x42 = INT8_MIN;
	uint16_t x43 = 242U;
	uint32_t x44 = 1596026376U;
	static volatile int64_t t9 = -7129052LL;

	t9 = ((x41|(x42&x43))+x44);

	if (t9 != -2487858004260612623LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x45 = 42U;
	volatile int16_t x46 = INT16_MIN;
	uint8_t x47 = 59U;
	int32_t x48 = -208880920;

	t10 = ((x45|(x46&x47))+x48);

	if (t10 != -208880878) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x49 = 200U;
	volatile int32_t x50 = 1647491;
	int8_t x51 = -2;
	volatile uint32_t t11 = 23U;

	t11 = ((x49|(x50&x51))+x52);

	if (t11 != 1713097U) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x53 = UINT64_MAX;
	uint16_t x54 = 10836U;
	int8_t x55 = INT8_MIN;

	t12 = ((x53|(x54&x55))+x56);

	if (t12 != 4294967294LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x57 = INT64_MIN;
	uint64_t x58 = 268853856458228LLU;
	int16_t x59 = 0;
	int64_t x60 = 3070302452678172LL;
	volatile uint64_t t13 = 36852LLU;

	t13 = ((x57|(x58&x59))+x60);

	if (t13 != 9226442339307453980LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x61 = 58066U;
	int64_t x63 = INT64_MIN;
	volatile uint8_t x64 = 90U;
	volatile int64_t t14 = -4LL;

	t14 = ((x61|(x62&x63))+x64);

	if (t14 != -9223372036854717652LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x65 = 27;
	uint64_t x66 = 51238LLU;
	volatile int32_t x67 = INT32_MIN;
	uint16_t x68 = 14U;

	t15 = ((x65|(x66&x67))+x68);

	if (t15 != 41LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = -367;
	int8_t x70 = INT8_MIN;
	int8_t x71 = INT8_MAX;
	uint32_t x72 = 7U;
	volatile uint32_t t16 = 10841261U;

	t16 = ((x69|(x70&x71))+x72);

	if (t16 != 4294966936U) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x74 = 3840063217228LLU;
	static uint16_t x75 = UINT16_MAX;
	volatile int32_t x76 = -1;
	volatile uint64_t t17 = 621662736044865559LLU;

	t17 = ((x73|(x74&x75))+x76);

	if (t17 != 40702LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x77 = 6U;
	int8_t x78 = INT8_MIN;
	uint16_t x79 = UINT16_MAX;
	uint32_t x80 = UINT32_MAX;

	t18 = ((x77|(x78&x79))+x80);

	if (t18 != 65413U) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int8_t x86 = INT8_MIN;
	int8_t x88 = 1;
	uint32_t t19 = 3U;

	t19 = ((x85|(x86&x87))+x88);

	if (t19 != 1U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x93 = -1LL;
	uint64_t x94 = 1231378787401LLU;
	int32_t x95 = INT32_MIN;
	int8_t x96 = 2;
	uint64_t t20 = 759238LLU;

	t20 = ((x93|(x94&x95))+x96);

	if (t20 != 1LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x97 = 201185933802LLU;
	int16_t x100 = -11330;
	static uint64_t t21 = 3LLU;

	t21 = ((x97|(x98&x99))+x100);

	if (t21 != 201185939880LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x101 = INT8_MIN;
	uint16_t x102 = 8U;
	volatile int32_t t22 = -196;

	t22 = ((x101|(x102&x103))+x104);

	if (t22 != 2147483527) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x105 = INT32_MIN;
	int8_t x106 = -3;
	int32_t x107 = INT32_MIN;
	int8_t x108 = 1;
	volatile int32_t t23 = -1037721478;

	t23 = ((x105|(x106&x107))+x108);

	if (t23 != -2147483647) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x109 = 48914;
	volatile uint32_t x110 = 63157U;
	uint32_t x111 = UINT32_MAX;
	int32_t x112 = INT32_MIN;
	uint32_t t24 = 165637424U;

	t24 = ((x109|(x110&x111))+x112);

	if (t24 != 2147549111U) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x114 = 470U;
	int64_t x115 = INT64_MAX;
	volatile uint64_t t25 = 415418908082LLU;

	t25 = ((x113|(x114&x115))+x116);

	if (t25 != 15LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x117 = 198U;
	volatile uint8_t x118 = 0U;
	volatile int8_t x119 = 3;
	int16_t x120 = -1;
	int32_t t26 = 30;

	t26 = ((x117|(x118&x119))+x120);

	if (t26 != 197) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x121 = INT16_MAX;
	int8_t x122 = 3;
	int32_t x123 = -351;
	int16_t x124 = INT16_MIN;
	static int32_t t27 = 15181;

	t27 = ((x121|(x122&x123))+x124);

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x125 = INT32_MIN;
	int16_t x126 = -7660;
	int32_t x127 = INT32_MIN;
	int16_t x128 = INT16_MAX;
	static volatile int32_t t28 = -1963468;

	t28 = ((x125|(x126&x127))+x128);

	if (t28 != -2147450881) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x129 = UINT16_MAX;
	static int8_t x130 = -1;
	volatile uint16_t x131 = 6816U;
	uint8_t x132 = 17U;
	int32_t t29 = -6584;

	t29 = ((x129|(x130&x131))+x132);

	if (t29 != 65552) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x133 = -9LL;
	int16_t x134 = INT16_MIN;
	int64_t x135 = INT64_MIN;
	int8_t x136 = INT8_MAX;
	static int64_t t30 = -13263LL;

	t30 = ((x133|(x134&x135))+x136);

	if (t30 != 118LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x137 = -1;
	static int8_t x139 = INT8_MAX;
	int16_t x140 = INT16_MAX;
	int32_t t31 = 848271;

	t31 = ((x137|(x138&x139))+x140);

	if (t31 != 32766) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x145 = INT8_MIN;
	int32_t x146 = 11607602;
	static int32_t x147 = 26;
	volatile int32_t t32 = -215712640;

	t32 = ((x145|(x146&x147))+x148);

	if (t32 != 17) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x149 = INT16_MAX;
	int16_t x150 = INT16_MIN;
	volatile int32_t x151 = INT32_MAX;
	static int8_t x152 = INT8_MIN;
	int32_t t33 = -32078550;

	t33 = ((x149|(x150&x151))+x152);

	if (t33 != 2147483519) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x153 = 523U;
	uint32_t x154 = UINT32_MAX;
	uint32_t x155 = 55875649U;
	int16_t x156 = -6523;
	volatile uint32_t t34 = 962555U;

	t34 = ((x153|(x154&x155))+x156);

	if (t34 != 55869648U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x157 = INT32_MIN;
	static int32_t x158 = 137008;
	int8_t x159 = 0;
	uint16_t x160 = UINT16_MAX;
	int32_t t35 = 293;

	t35 = ((x157|(x158&x159))+x160);

	if (t35 != -2147418113) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x161 = INT8_MAX;
	uint32_t x162 = 15U;
	int32_t x163 = 300432953;
	volatile uint32_t t36 = 163U;

	t36 = ((x161|(x162&x163))+x164);

	if (t36 != 4294934655U) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x165 = UINT16_MAX;
	static int16_t x166 = 5396;
	int32_t t37 = 924534;

	t37 = ((x165|(x166&x167))+x168);

	if (t37 != -2147418113) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x169 = -3438102705LL;
	int64_t x170 = INT64_MIN;
	uint16_t x172 = 4701U;
	volatile int64_t t38 = -93LL;

	t38 = ((x169|(x170&x171))+x172);

	if (t38 != -3438098004LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x173 = 694U;
	static uint8_t x174 = 0U;
	int16_t x175 = INT16_MIN;
	int8_t x176 = INT8_MIN;

	t39 = ((x173|(x174&x175))+x176);

	if (t39 != 566U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x178 = 61;
	volatile int8_t x180 = INT8_MIN;
	volatile int32_t t40 = 0;

	t40 = ((x177|(x178&x179))+x180);

	if (t40 != -129) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x181 = 22597U;
	int64_t x182 = INT64_MIN;
	uint16_t x184 = 391U;
	volatile int64_t t41 = -17061514291LL;

	t41 = ((x181|(x182&x183))+x184);

	if (t41 != 22988LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x186 = 1058U;
	uint8_t x188 = 0U;
	static volatile int32_t t42 = -16444136;

	t42 = ((x185|(x186&x187))+x188);

	if (t42 != -31712) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint64_t x189 = 253790125068405LLU;
	uint64_t x190 = 795051784687063LLU;
	volatile uint64_t x191 = 31515723LLU;
	int16_t x192 = -12;
	volatile uint64_t t43 = 11692489LLU;

	t43 = ((x189|(x190&x191))+x192);

	if (t43 != 253790143960171LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x201 = -8;
	static int32_t x202 = -1;
	int64_t x203 = INT64_MIN;
	static int32_t x204 = -404973804;
	static int64_t t44 = -13801392LL;

	t44 = ((x201|(x202&x203))+x204);

	if (t44 != -404973812LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x205 = 24LLU;
	int8_t x206 = -1;
	uint64_t x207 = 7696501834607135LLU;
	static volatile uint64_t t45 = 491862LLU;

	t45 = ((x205|(x206&x207))+x208);

	if (t45 != 7696501834574367LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x209 = 30;
	int8_t x211 = 0;
	int64_t t46 = 1LL;

	t46 = ((x209|(x210&x211))+x212);

	if (t46 != 29LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x213 = INT16_MIN;
	int64_t x214 = -147146LL;
	int32_t x215 = -348;
	uint32_t x216 = 344447698U;
	volatile int64_t t47 = 449306LL;

	t47 = ((x213|(x214&x215))+x216);

	if (t47 != 344431350LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x221 = 6;
	static uint8_t x222 = UINT8_MAX;
	static volatile int32_t t48 = -30338;

	t48 = ((x221|(x222&x223))+x224);

	if (t48 != 32997) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x225 = INT16_MAX;
	static int64_t x226 = 224LL;
	int16_t x228 = -1;
	volatile int64_t t49 = 7472844331334866LL;

	t49 = ((x225|(x226&x227))+x228);

	if (t49 != 32766LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x229 = INT8_MIN;
	static int8_t x230 = INT8_MAX;
	int8_t x232 = 30;
	int32_t t50 = -943;

	t50 = ((x229|(x230&x231))+x232);

	if (t50 != 5) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x233 = 20395U;
	int64_t x234 = 70768193450LL;
	uint8_t x235 = UINT8_MAX;
	uint8_t x236 = 31U;
	static volatile int64_t t51 = -5157130320LL;

	t51 = ((x233|(x234&x235))+x236);

	if (t51 != 20426LL) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int16_t x237 = INT16_MIN;
	int64_t x240 = -64136480694258326LL;
	volatile uint64_t t52 = 916098800236935253LLU;

	t52 = ((x237|(x238&x239))+x240);

	if (t52 != 18382607593015260525LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x241 = UINT8_MAX;
	volatile int8_t x243 = -1;
	volatile uint16_t x244 = 4U;
	static int64_t t53 = -264627986211494LL;

	t53 = ((x241|(x242&x243))+x244);

	if (t53 != -9223372036854775549LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x245 = 55463;
	volatile int16_t x246 = INT16_MIN;
	int16_t x247 = -6;
	int8_t x248 = -1;
	static int32_t t54 = -12962;

	t54 = ((x245|(x246&x247))+x248);

	if (t54 != -10074) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x251 = -1LL;
	uint8_t x252 = 9U;
	volatile int64_t t55 = 702691768693120061LL;

	t55 = ((x249|(x250&x251))+x252);

	if (t55 != -328LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int32_t x254 = INT32_MAX;
	uint8_t x255 = UINT8_MAX;
	volatile int32_t t56 = 257483;

	t56 = ((x253|(x254&x255))+x256);

	if (t56 != -2) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x257 = -485;
	int8_t x258 = -1;
	uint32_t x260 = 490162681U;
	volatile uint32_t t57 = 2067770752U;

	t57 = ((x257|(x258&x259))+x260);

	if (t57 != 490162680U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x261 = INT16_MIN;
	volatile int64_t x262 = INT64_MIN;
	volatile int32_t x263 = -2534;
	volatile int32_t x264 = 1615;
	int64_t t58 = 3703843477495937LL;

	t58 = ((x261|(x262&x263))+x264);

	if (t58 != -31153LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x265 = UINT32_MAX;
	int8_t x266 = INT8_MIN;
	static volatile uint8_t x267 = 2U;
	volatile uint32_t x268 = 15U;
	static uint32_t t59 = 768U;

	t59 = ((x265|(x266&x267))+x268);

	if (t59 != 14U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x273 = INT8_MIN;
	static volatile int32_t x274 = INT32_MAX;
	volatile int32_t x275 = INT32_MIN;
	volatile int64_t x276 = 1594LL;
	int64_t t60 = -45LL;

	t60 = ((x273|(x274&x275))+x276);

	if (t60 != 1466LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x277 = 636069275;
	int8_t x278 = -1;
	int32_t t61 = 170405728;

	t61 = ((x277|(x278&x279))+x280);

	if (t61 != 636036607) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x281 = INT64_MAX;
	volatile uint8_t x283 = 83U;
	uint64_t x284 = 5LLU;

	t62 = ((x281|(x282&x283))+x284);

	if (t62 != 9223372036854775812LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x285 = -1157;
	volatile int16_t x288 = INT16_MAX;
	volatile uint64_t t63 = 10854894092344LLU;

	t63 = ((x285|(x286&x287))+x288);

	if (t63 != 31614LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x290 = UINT8_MAX;
	volatile int32_t x291 = INT32_MIN;
	int32_t x292 = -156262872;
	volatile int32_t t64 = 37;

	t64 = ((x289|(x290&x291))+x292);

	if (t64 != -156263131) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int16_t x293 = INT16_MAX;
	uint8_t x294 = UINT8_MAX;
	int64_t x296 = INT64_MIN;
	int64_t t65 = -132501LL;

	t65 = ((x293|(x294&x295))+x296);

	if (t65 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x298 = 48656U;
	uint32_t x299 = 1075034777U;
	int8_t x300 = -1;
	uint32_t t66 = 1158914U;

	t66 = ((x297|(x298&x299))+x300);

	if (t66 != 4294967294U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x301 = -48;
	uint32_t x302 = 24551U;
	uint8_t x303 = 118U;
	int8_t x304 = -1;
	volatile uint32_t t67 = 13U;

	t67 = ((x301|(x302&x303))+x304);

	if (t67 != 4294967285U) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x305 = INT32_MAX;
	volatile int8_t x306 = INT8_MAX;
	int8_t x307 = INT8_MIN;
	uint64_t x308 = 24LLU;
	uint64_t t68 = 202LLU;

	t68 = ((x305|(x306&x307))+x308);

	if (t68 != 2147483671LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x309 = 1;
	volatile uint64_t x310 = UINT64_MAX;
	int32_t x311 = INT32_MIN;
	volatile int16_t x312 = -1;
	static uint64_t t69 = 502542047965LLU;

	t69 = ((x309|(x310&x311))+x312);

	if (t69 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x313 = 30;
	int64_t x314 = -1LL;
	volatile int64_t t70 = 221853092116404LL;

	t70 = ((x313|(x314&x315))+x316);

	if (t70 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x317 = INT16_MIN;
	uint16_t x319 = 30613U;
	volatile int32_t x320 = -1;
	int32_t t71 = 96618;

	t71 = ((x317|(x318&x319))+x320);

	if (t71 != -32764) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x321 = -1LL;
	int8_t x322 = -1;
	uint64_t x323 = 2948153271011LLU;
	int32_t x324 = 0;
	volatile uint64_t t72 = UINT64_MAX;

	t72 = ((x321|(x322&x323))+x324);

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x327 = 48;
	int8_t x328 = -15;

	t73 = ((x325|(x326&x327))+x328);

	if (t73 != -16LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x329 = -1;
	int8_t x330 = INT8_MIN;
	volatile int64_t x331 = INT64_MAX;
	int8_t x332 = INT8_MAX;
	int64_t t74 = -1LL;

	t74 = ((x329|(x330&x331))+x332);

	if (t74 != 126LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x333 = INT16_MIN;
	static int64_t x334 = INT64_MIN;
	int16_t x336 = INT16_MIN;
	int64_t t75 = 18836984LL;

	t75 = ((x333|(x334&x335))+x336);

	if (t75 != -65536LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x337 = -1;
	volatile int8_t x338 = 1;
	static int8_t x339 = -1;
	uint64_t x340 = UINT64_MAX;
	volatile uint64_t t76 = 770771515859020LLU;

	t76 = ((x337|(x338&x339))+x340);

	if (t76 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x341 = -435227748LL;
	int32_t x342 = -1;
	volatile int64_t x343 = -1LL;
	static int64_t t77 = -4223690LL;

	t77 = ((x341|(x342&x343))+x344);

	if (t77 != -32769LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x345 = INT16_MIN;
	static volatile int32_t x346 = 210193;
	uint8_t x347 = 56U;
	static int8_t x348 = INT8_MIN;
	int32_t t78 = 743366;

	t78 = ((x345|(x346&x347))+x348);

	if (t78 != -32880) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x350 = -1;
	int8_t x351 = 0;
	uint64_t x352 = 1737303708548911566LLU;
	uint64_t t79 = 85LLU;

	t79 = ((x349|(x350&x351))+x352);

	if (t79 != 1737303708548878798LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x353 = INT64_MAX;
	int32_t x354 = -95;
	int32_t x355 = 5;
	volatile int64_t t80 = -25157LL;

	t80 = ((x353|(x354&x355))+x356);

	if (t80 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x357 = INT64_MIN;
	uint16_t x358 = UINT16_MAX;
	static uint16_t x359 = UINT16_MAX;
	volatile int64_t t81 = -370374LL;

	t81 = ((x357|(x358&x359))+x360);

	if (t81 != -9223372036854707665LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x362 = UINT32_MAX;
	volatile uint16_t x363 = 1735U;
	uint64_t x364 = 7884606061LLU;

	t82 = ((x361|(x362&x363))+x364);

	if (t82 != 7884607796LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x365 = 114332LLU;
	uint16_t x368 = UINT16_MAX;
	uint64_t t83 = 16577662966854896LLU;

	t83 = ((x365|(x366&x367))+x368);

	if (t83 != 179901LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x369 = 913LLU;
	volatile uint8_t x371 = 0U;
	uint64_t t84 = 760350463581LLU;

	t84 = ((x369|(x370&x371))+x372);

	if (t84 != 970LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x373 = 11U;
	static uint8_t x374 = UINT8_MAX;
	uint8_t x375 = UINT8_MAX;
	static uint8_t x376 = 24U;

	t85 = ((x373|(x374&x375))+x376);

	if (t85 != 279) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x377 = 122838LLU;
	volatile int64_t x378 = -1LL;
	int8_t x379 = INT8_MIN;
	uint8_t x380 = UINT8_MAX;
	uint64_t t86 = 1LLU;

	t86 = ((x377|(x378&x379))+x380);

	if (t86 != 213LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x381 = INT32_MIN;
	uint64_t x382 = 4LLU;
	static volatile int8_t x383 = INT8_MAX;
	int64_t x384 = -4595LL;

	t87 = ((x381|(x382&x383))+x384);

	if (t87 != 18446744071562063377LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x386 = -150LL;
	volatile int16_t x387 = INT16_MIN;
	int32_t x388 = INT32_MAX;

	t88 = ((x385|(x386&x387))+x388);

	if (t88 != 2147483646LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x389 = 9381432U;
	uint32_t x390 = 338759U;
	static volatile uint8_t x391 = 0U;
	volatile int8_t x392 = INT8_MIN;
	volatile uint32_t t89 = 31910U;

	t89 = ((x389|(x390&x391))+x392);

	if (t89 != 9381304U) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x393 = UINT64_MAX;
	int32_t x395 = INT32_MAX;
	volatile uint64_t t90 = 148043045767955884LLU;

	t90 = ((x393|(x394&x395))+x396);

	if (t90 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x397 = -50;
	volatile int8_t x398 = -1;
	static int64_t x399 = -1LL;
	static int8_t x400 = -1;

	t91 = ((x397|(x398&x399))+x400);

	if (t91 != -2LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x401 = 44557866575075LLU;
	int64_t x402 = -1LL;
	static int8_t x403 = INT8_MIN;
	static uint64_t t92 = 43807178355435LLU;

	t92 = ((x401|(x402&x403))+x404);

	if (t92 != 24768LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x405 = -1;
	int16_t x408 = -1061;

	t93 = ((x405|(x406&x407))+x408);

	if (t93 != -1062LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x409 = UINT32_MAX;
	int64_t x411 = INT64_MIN;
	int64_t t94 = -14800LL;

	t94 = ((x409|(x410&x411))+x412);

	if (t94 != 4294623892LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x417 = UINT16_MAX;
	uint16_t x418 = 130U;
	uint16_t x419 = 14921U;
	int32_t x420 = -1;
	volatile int32_t t95 = -89572;

	t95 = ((x417|(x418&x419))+x420);

	if (t95 != 65534) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x421 = UINT8_MAX;
	uint64_t x422 = 241884LLU;
	static int64_t x423 = INT64_MIN;
	int16_t x424 = INT16_MAX;
	uint64_t t96 = 342676949288LLU;

	t96 = ((x421|(x422&x423))+x424);

	if (t96 != 33022LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x430 = INT8_MIN;
	volatile int64_t x432 = 20059773711LL;
	int64_t t97 = -6LL;

	t97 = ((x429|(x430&x431))+x432);

	if (t97 != -9223372016795001934LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x434 = -11476;
	int16_t x435 = -1;
	uint64_t x436 = 2LLU;

	t98 = ((x433|(x434&x435))+x436);

	if (t98 != 18446744073709540144LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x437 = UINT32_MAX;
	int32_t x438 = INT32_MIN;
	int32_t x439 = 114793;
	int32_t x440 = -1;
	volatile uint32_t t99 = 9U;

	t99 = ((x437|(x438&x439))+x440);

	if (t99 != 4294967294U) { NG(); } else { ; }
	
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

