#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x3 = 11U;
int64_t x4 = INT64_MIN;
static int32_t x7 = INT32_MIN;
volatile int8_t x9 = -43;
uint32_t x10 = 1791288648U;
static int64_t x16 = 464171147087LL;
int64_t t3 = 828918315771934136LL;
volatile int8_t x22 = INT8_MAX;
uint8_t x23 = UINT8_MAX;
int16_t x28 = 27;
int64_t x32 = INT64_MIN;
int64_t x45 = -224568LL;
int32_t x49 = -1;
int8_t x57 = INT8_MIN;
static int32_t t12 = 50;
static int8_t x65 = -1;
volatile uint64_t x66 = UINT64_MAX;
static int64_t x74 = INT64_MIN;
volatile int64_t t16 = 290184511LL;
volatile int8_t x89 = -1;
static int64_t x98 = INT64_MIN;
uint8_t x101 = 21U;
uint64_t t22 = 105870130179LLU;
uint8_t x107 = 57U;
volatile int64_t t23 = 43768132559LL;
uint64_t x111 = 7019563262354LLU;
uint64_t t26 = UINT64_MAX;
uint32_t x125 = 2620U;
volatile int64_t t28 = 1038346575363LL;
int8_t x140 = -1;
uint64_t t31 = 3970855103460160481LLU;
int32_t x150 = -1;
uint32_t x151 = 0U;
int32_t x161 = 151;
static int8_t x162 = INT8_MIN;
uint32_t x165 = 70589776U;
int16_t x168 = 85;
uint64_t t34 = 2095895784016853LLU;
int8_t x173 = 7;
int32_t x178 = INT32_MAX;
static int64_t x181 = INT64_MAX;
uint16_t x193 = UINT16_MAX;
int32_t x196 = -1;
int32_t x199 = INT32_MAX;
static volatile int64_t t41 = -3924127475LL;
volatile uint32_t t44 = 31592U;
volatile int32_t t45 = -813;
volatile uint64_t t46 = 273159737985144LLU;
uint32_t x229 = 71105U;
int16_t x236 = 885;
volatile int64_t x237 = -34100109LL;
int32_t x240 = INT32_MIN;
int16_t x243 = INT16_MAX;
int8_t x244 = INT8_MAX;
uint64_t x255 = 13186044858638336LLU;
uint64_t x260 = UINT64_MAX;
volatile int16_t x267 = 12454;
int8_t x279 = -1;
static volatile int64_t t58 = 3LL;
uint32_t x290 = 2U;
int64_t x305 = -255LL;
volatile int32_t x308 = -1;
uint64_t t64 = 110719248LLU;
static int32_t x320 = -1;
volatile int64_t t67 = 5114LL;
volatile int8_t x330 = INT8_MIN;
int64_t t69 = 29084054712091LL;
volatile uint16_t x347 = UINT16_MAX;
int8_t x348 = INT8_MAX;
static volatile int64_t x351 = -558942912LL;
static int64_t t73 = -23LL;
int64_t x353 = -1LL;
int16_t x369 = INT16_MIN;
int32_t x381 = INT32_MIN;
volatile int16_t x382 = INT16_MIN;
volatile int32_t t78 = INT32_MIN;
static volatile int8_t x385 = INT8_MIN;
volatile int64_t x389 = -89850108048822LL;
static volatile uint64_t x405 = 9LLU;
static int16_t x413 = -1;
int16_t x414 = -1;
static uint16_t x417 = UINT16_MAX;
uint16_t x418 = 1030U;
int32_t x419 = -1;
uint32_t x422 = UINT32_MAX;
uint64_t t87 = 11446621153667281LLU;
int16_t x434 = INT16_MAX;
volatile int16_t x446 = -1427;
int32_t x447 = 23;
uint32_t t92 = 28U;
int32_t x453 = 209;
static uint16_t x461 = UINT16_MAX;
uint64_t x463 = UINT64_MAX;
volatile uint16_t x475 = 4053U;
static uint32_t x476 = 19067935U;
uint64_t x483 = 1714LLU;
uint64_t x485 = 1683551610911LLU;
uint32_t x488 = 15177U;
uint64_t t98 = 2791582894LLU;
static int16_t x492 = INT16_MIN;


void f0(void) {
	static uint32_t x1 = 25708U;
	int16_t x2 = INT16_MAX;
	int64_t t0 = 11660066LL;

	t0 = (x1-((x2-x3)%x4));

	if (t0 != -7048LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 1U;
	static volatile uint64_t x6 = 3975634LLU;
	uint16_t x8 = 30U;
	volatile uint64_t t1 = 53347742LLU;

	t1 = (x5-((x6-x7)%x8));

	if (t1 != 18446744073709551605LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x11 = 10747U;
	int16_t x12 = -1;
	volatile uint32_t t2 = 148U;

	t2 = (x9-((x10-x11)%x12));

	if (t2 != 2503689352U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	volatile int16_t x14 = INT16_MIN;
	volatile uint32_t x15 = 49U;

	t3 = (x13-((x14-x15)%x16));

	if (t3 != -6442418127LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x21 = UINT8_MAX;
	static int8_t x24 = -1;
	volatile int32_t t4 = 8013885;

	t4 = (x21-((x22-x23)%x24));

	if (t4 != 255) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = 0;
	uint64_t x26 = 61207201LLU;
	static int8_t x27 = -1;
	uint64_t t5 = 14808774598857LLU;

	t5 = (x25-((x26-x27)%x28));

	if (t5 != 18446744073709551605LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = -22328938916LL;
	int64_t x30 = INT64_MAX;
	volatile int64_t x31 = INT64_MAX;
	volatile int64_t t6 = -2437826322784LL;

	t6 = (x29-((x30-x31)%x32));

	if (t6 != -22328938916LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x33 = INT64_MIN;
	uint64_t x34 = UINT64_MAX;
	static int8_t x35 = INT8_MAX;
	int8_t x36 = 55;
	uint64_t t7 = 22824279998424579LLU;

	t7 = (x33-((x34-x35)%x36));

	if (t7 != 9223372036854775755LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x41 = 8;
	int16_t x42 = 4763;
	uint8_t x43 = UINT8_MAX;
	volatile uint32_t x44 = UINT32_MAX;
	uint32_t t8 = 219U;

	t8 = (x41-((x42-x43)%x44));

	if (t8 != 4294962796U) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x46 = 20U;
	volatile uint16_t x47 = 3U;
	int8_t x48 = INT8_MAX;
	volatile int64_t t9 = -86399380LL;

	t9 = (x45-((x46-x47)%x48));

	if (t9 != -224585LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x50 = 1U;
	uint32_t x51 = 1U;
	uint16_t x52 = 31U;
	volatile uint32_t t10 = UINT32_MAX;

	t10 = (x49-((x50-x51)%x52));

	if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x53 = INT8_MAX;
	int32_t x54 = -1;
	uint16_t x55 = 1U;
	int32_t x56 = INT32_MIN;
	int32_t t11 = -29;

	t11 = (x53-((x54-x55)%x56));

	if (t11 != 129) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x58 = INT16_MIN;
	int16_t x59 = -1;
	int8_t x60 = -14;

	t12 = (x57-((x58-x59)%x60));

	if (t12 != -121) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x61 = 3173U;
	uint64_t x62 = UINT64_MAX;
	uint32_t x63 = 1179486U;
	int8_t x64 = 1;
	uint64_t t13 = 2762395378753931795LLU;

	t13 = (x61-((x62-x63)%x64));

	if (t13 != 3173LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x67 = INT8_MIN;
	static int16_t x68 = INT16_MIN;
	volatile uint64_t t14 = 6312403252397LLU;

	t14 = (x65-((x66-x67)%x68));

	if (t14 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x69 = INT8_MIN;
	int8_t x70 = -1;
	static int16_t x71 = INT16_MIN;
	volatile int8_t x72 = -1;
	volatile int32_t t15 = 358515;

	t15 = (x69-((x70-x71)%x72));

	if (t15 != -128) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x73 = -1;
	int64_t x75 = INT64_MIN;
	int8_t x76 = -1;

	t16 = (x73-((x74-x75)%x76));

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x77 = 57U;
	volatile uint32_t x78 = 8452534U;
	int64_t x79 = 8013569767350LL;
	int16_t x80 = -12483;
	int64_t t17 = 631488660LL;

	t17 = (x77-((x78-x79)%x80));

	if (t17 != 329LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x81 = INT32_MIN;
	int64_t x82 = -1LL;
	uint16_t x83 = 0U;
	volatile int16_t x84 = -1;
	volatile int64_t t18 = -6397098113LL;

	t18 = (x81-((x82-x83)%x84));

	if (t18 != -2147483648LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x90 = INT8_MIN;
	uint64_t x91 = UINT64_MAX;
	static int64_t x92 = -1LL;
	volatile uint64_t t19 = 61065215LLU;

	t19 = (x89-((x90-x91)%x92));

	if (t19 != 126LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x93 = INT8_MIN;
	static volatile uint32_t x94 = 4800597U;
	uint32_t x95 = 7050357U;
	int64_t x96 = INT64_MAX;
	int64_t t20 = 71426807702LL;

	t20 = (x93-((x94-x95)%x96));

	if (t20 != -4292717664LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x97 = -1;
	int64_t x99 = INT64_MIN;
	static volatile int64_t x100 = 765008243107LL;
	volatile int64_t t21 = 332827254686LL;

	t21 = (x97-((x98-x99)%x100));

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x102 = 2052514492889914LLU;
	uint32_t x103 = 22U;
	uint64_t x104 = UINT64_MAX;

	t22 = (x101-((x102-x103)%x104));

	if (t22 != 18444691559216661745LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x105 = INT64_MIN;
	int16_t x106 = -1940;
	volatile int8_t x108 = INT8_MIN;

	t23 = (x105-((x106-x107)%x108));

	if (t23 != -9223372036854775731LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x109 = UINT8_MAX;
	static int8_t x110 = INT8_MAX;
	int8_t x112 = INT8_MAX;
	static volatile uint64_t t24 = 350421LLU;

	t24 = (x109-((x110-x111)%x112));

	if (t24 != 136LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x113 = INT64_MIN;
	static int64_t x114 = INT64_MIN;
	int16_t x115 = -2951;
	int64_t x116 = INT64_MIN;
	volatile int64_t t25 = -19765511LL;

	t25 = (x113-((x114-x115)%x116));

	if (t25 != -2951LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x117 = UINT64_MAX;
	uint64_t x118 = UINT64_MAX;
	static int16_t x119 = INT16_MIN;
	uint32_t x120 = 1U;

	t26 = (x117-((x118-x119)%x120));

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x126 = UINT32_MAX;
	static uint8_t x127 = 30U;
	int16_t x128 = INT16_MAX;
	static volatile uint32_t t27 = 15139950U;

	t27 = (x125-((x126-x127)%x128));

	if (t27 != 4294937176U) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int16_t x129 = -1;
	volatile int16_t x130 = INT16_MIN;
	static volatile int8_t x131 = 1;
	static int64_t x132 = -19742232LL;

	t28 = (x129-((x130-x131)%x132));

	if (t28 != 32768LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x133 = INT16_MIN;
	volatile int8_t x134 = -30;
	uint16_t x135 = 399U;
	uint32_t x136 = UINT32_MAX;
	volatile uint32_t t29 = 3U;

	t29 = (x133-((x134-x135)%x136));

	if (t29 != 4294934957U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x137 = -1LL;
	volatile int8_t x138 = 3;
	volatile int32_t x139 = 6532;
	volatile int64_t t30 = -440897413LL;

	t30 = (x137-((x138-x139)%x140));

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x141 = UINT8_MAX;
	static int64_t x142 = INT64_MIN;
	volatile uint64_t x143 = 4406186266270671465LLU;
	int64_t x144 = -1LL;

	t31 = (x141-((x142-x143)%x144));

	if (t31 != 13629558303125447528LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x149 = INT16_MIN;
	uint32_t x152 = 340156622U;
	uint32_t t32 = 9609U;

	t32 = (x149-((x150-x151)%x152));

	if (t32 != 4081846697U) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x163 = 42U;
	uint32_t x164 = UINT32_MAX;
	uint32_t t33 = 106246408U;

	t33 = (x161-((x162-x163)%x164));

	if (t33 != 321U) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x166 = 1083385943835057870LLU;
	int64_t x167 = INT64_MAX;

	t34 = (x165-((x166-x167)%x168));

	if (t34 != 70589692LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x169 = 7U;
	static volatile int8_t x170 = INT8_MIN;
	uint16_t x171 = 28251U;
	volatile uint8_t x172 = 3U;
	static volatile int32_t t35 = 1249;

	t35 = (x169-((x170-x171)%x172));

	if (t35 != 9) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x174 = 39987906LLU;
	static int8_t x175 = 1;
	volatile int32_t x176 = 11895138;
	volatile uint64_t t36 = 1515602538LLU;

	t36 = (x173-((x174-x175)%x176));

	if (t36 != 18446744073705249132LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x177 = INT16_MIN;
	static int16_t x179 = INT16_MAX;
	int64_t x180 = INT64_MIN;
	int64_t t37 = -116851561LL;

	t37 = (x177-((x178-x179)%x180));

	if (t37 != -2147483648LL) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x182 = 1075LLU;
	int32_t x183 = INT32_MAX;
	int32_t x184 = INT32_MAX;
	volatile uint64_t t38 = 1855LLU;

	t38 = (x181-((x182-x183)%x184));

	if (t38 != 9223372036854774728LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x185 = -1354150LL;
	int32_t x186 = INT32_MIN;
	int64_t x187 = -6131393LL;
	int16_t x188 = INT16_MAX;
	volatile int64_t t39 = -191208646LL;

	t39 = (x185-((x186-x187)%x188));

	if (t39 != -1325345LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x194 = -1;
	uint16_t x195 = 54U;
	int32_t t40 = 4128398;

	t40 = (x193-((x194-x195)%x196));

	if (t40 != 65535) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x197 = -1LL;
	volatile int32_t x198 = 94295913;
	int8_t x200 = -1;

	t41 = (x197-((x198-x199)%x200));

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x201 = INT8_MIN;
	int8_t x202 = INT8_MIN;
	volatile int8_t x203 = INT8_MIN;
	int64_t x204 = INT64_MIN;
	int64_t t42 = 52LL;

	t42 = (x201-((x202-x203)%x204));

	if (t42 != -128LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x209 = -27992781LL;
	volatile int8_t x210 = -1;
	int32_t x211 = INT32_MIN;
	int32_t x212 = -1;
	volatile int64_t t43 = -203198647LL;

	t43 = (x209-((x210-x211)%x212));

	if (t43 != -27992781LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x213 = INT8_MIN;
	uint16_t x214 = 3U;
	uint32_t x215 = UINT32_MAX;
	volatile int32_t x216 = -86886;

	t44 = (x213-((x214-x215)%x216));

	if (t44 != 4294967164U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x217 = -1;
	static int16_t x218 = INT16_MIN;
	uint8_t x219 = 0U;
	volatile uint16_t x220 = 21U;

	t45 = (x217-((x218-x219)%x220));

	if (t45 != 7) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x221 = 2336608671LL;
	volatile uint64_t x222 = 123LLU;
	static int8_t x223 = INT8_MAX;
	volatile int16_t x224 = INT16_MIN;

	t46 = (x221-((x222-x223)%x224));

	if (t46 != 2336575907LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int64_t x225 = INT64_MIN;
	int64_t x226 = INT64_MIN;
	volatile uint64_t x227 = 834234045938LLU;
	int8_t x228 = -2;
	uint64_t t47 = 67345358LLU;

	t47 = (x225-((x226-x227)%x228));

	if (t47 != 834234045938LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x230 = -1LL;
	int16_t x231 = INT16_MIN;
	volatile uint32_t x232 = 5948U;
	static int64_t t48 = -565265675114421535LL;

	t48 = (x229-((x230-x231)%x232));

	if (t48 != 68078LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x233 = 30;
	uint8_t x234 = 4U;
	static volatile uint32_t x235 = 312U;
	static uint32_t t49 = 427237U;

	t49 = (x233-((x234-x235)%x236));

	if (t49 != 4294967288U) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x238 = 5U;
	volatile uint16_t x239 = UINT16_MAX;
	static volatile int64_t t50 = 494LL;

	t50 = (x237-((x238-x239)%x240));

	if (t50 != -2181518227LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x241 = -2350;
	int32_t x242 = 72614;
	static int32_t t51 = -4554875;

	t51 = (x241-((x242-x243)%x244));

	if (t51 != -2446) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x245 = 1868469686553LLU;
	static volatile int32_t x246 = -1;
	volatile int32_t x247 = INT32_MIN;
	int16_t x248 = 65;
	uint64_t t52 = 2823779LLU;

	t52 = (x245-((x246-x247)%x248));

	if (t52 != 1868469686491LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint32_t x253 = 1554988932U;
	static uint32_t x254 = 0U;
	int32_t x256 = -1;
	static uint64_t t53 = 3798827078LLU;

	t53 = (x253-((x254-x255)%x256));

	if (t53 != 13186046413627268LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x257 = 7U;
	static int32_t x258 = -31;
	int8_t x259 = 1;
	uint64_t t54 = 2485622248320LLU;

	t54 = (x257-((x258-x259)%x260));

	if (t54 != 39LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x261 = -1;
	int16_t x262 = -24;
	int16_t x263 = INT16_MIN;
	static uint16_t x264 = 20554U;
	int32_t t55 = -32;

	t55 = (x261-((x262-x263)%x264));

	if (t55 != -12191) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x265 = 124;
	uint8_t x266 = 0U;
	int32_t x268 = INT32_MIN;
	int32_t t56 = -614621373;

	t56 = (x265-((x266-x267)%x268));

	if (t56 != 12578) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint32_t x277 = UINT32_MAX;
	uint64_t x278 = UINT64_MAX;
	int32_t x280 = INT32_MIN;
	volatile uint64_t t57 = 263LLU;

	t57 = (x277-((x278-x279)%x280));

	if (t57 != 4294967295LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x281 = -1;
	int64_t x282 = -1LL;
	int16_t x283 = INT16_MIN;
	static volatile int32_t x284 = 99185;

	t58 = (x281-((x282-x283)%x284));

	if (t58 != -32768LL) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int64_t x285 = 497378LL;
	uint64_t x286 = 7425397282LLU;
	static uint8_t x287 = 61U;
	uint16_t x288 = 385U;
	uint64_t t59 = 593344074001017LLU;

	t59 = (x285-((x286-x287)%x288));

	if (t59 != 497367LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x289 = INT32_MIN;
	int16_t x291 = INT16_MIN;
	uint64_t x292 = 880952974693929201LLU;
	uint64_t t60 = 5524961625147LLU;

	t60 = (x289-((x290-x291)%x292));

	if (t60 != 18446744071562035198LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x293 = -69;
	uint16_t x294 = UINT16_MAX;
	static volatile int8_t x295 = -1;
	int16_t x296 = -64;
	int32_t t61 = -4;

	t61 = (x293-((x294-x295)%x296));

	if (t61 != -69) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x297 = -1;
	uint32_t x298 = 186623478U;
	static int16_t x299 = -1;
	static int64_t x300 = INT64_MIN;
	volatile int64_t t62 = 25517LL;

	t62 = (x297-((x298-x299)%x300));

	if (t62 != -186623480LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x301 = INT8_MIN;
	int64_t x302 = 415352070814LL;
	uint8_t x303 = 0U;
	int16_t x304 = -1;
	volatile int64_t t63 = -10436LL;

	t63 = (x301-((x302-x303)%x304));

	if (t63 != -128LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x306 = 0;
	uint64_t x307 = 975679LLU;

	t64 = (x305-((x306-x307)%x308));

	if (t64 != 975424LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x313 = 5U;
	int16_t x314 = INT16_MAX;
	int8_t x315 = 16;
	static volatile uint16_t x316 = 57U;
	volatile int32_t t65 = -1661;

	t65 = (x313-((x314-x315)%x316));

	if (t65 != -28) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x317 = 145U;
	static int8_t x318 = 14;
	int8_t x319 = -1;
	static int32_t t66 = 239594;

	t66 = (x317-((x318-x319)%x320));

	if (t66 != 145) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x325 = -265548581251509650LL;
	uint8_t x326 = UINT8_MAX;
	int16_t x327 = INT16_MIN;
	int32_t x328 = 4;

	t67 = (x325-((x326-x327)%x328));

	if (t67 != -265548581251509653LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x329 = 11U;
	int8_t x331 = INT8_MAX;
	uint32_t x332 = 20013486U;
	volatile uint32_t t68 = 51993971U;

	t68 = (x329-((x330-x331)%x332));

	if (t68 != 4282886270U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x333 = 146;
	int8_t x334 = INT8_MIN;
	volatile int32_t x335 = -639;
	int64_t x336 = INT64_MAX;

	t69 = (x333-((x334-x335)%x336));

	if (t69 != -365LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x337 = -1;
	uint32_t x338 = 2U;
	volatile int8_t x339 = INT8_MIN;
	int64_t x340 = INT64_MIN;
	static int64_t t70 = -1544934LL;

	t70 = (x337-((x338-x339)%x340));

	if (t70 != -131LL) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint16_t x341 = 2335U;
	uint16_t x342 = 0U;
	uint16_t x343 = 9U;
	int64_t x344 = INT64_MAX;
	int64_t t71 = -7LL;

	t71 = (x341-((x342-x343)%x344));

	if (t71 != 2344LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x345 = 0;
	uint8_t x346 = UINT8_MAX;
	static volatile int32_t t72 = -137864;

	t72 = (x345-((x346-x347)%x348));

	if (t72 != 2) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x349 = 1U;
	uint8_t x350 = UINT8_MAX;
	int8_t x352 = INT8_MIN;

	t73 = (x349-((x350-x351)%x352));

	if (t73 != -62LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x354 = 3;
	int32_t x355 = -2512689;
	int8_t x356 = INT8_MIN;
	int64_t t74 = 512351139LL;

	t74 = (x353-((x354-x355)%x356));

	if (t74 != -53LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x357 = 5276U;
	uint16_t x358 = 762U;
	int32_t x359 = -41250490;
	static int8_t x360 = INT8_MIN;
	int32_t t75 = -12696087;

	t75 = (x357-((x358-x359)%x360));

	if (t75 != 5224) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x365 = -1;
	int64_t x366 = INT64_MAX;
	uint8_t x367 = 40U;
	int8_t x368 = -1;
	static volatile int64_t t76 = -1895645690LL;

	t76 = (x365-((x366-x367)%x368));

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x370 = -8;
	uint16_t x371 = UINT16_MAX;
	uint16_t x372 = UINT16_MAX;
	int32_t t77 = -1225780;

	t77 = (x369-((x370-x371)%x372));

	if (t77 != -32760) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int8_t x383 = INT8_MIN;
	uint16_t x384 = 1U;

	t78 = (x381-((x382-x383)%x384));

	if (t78 != INT32_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x386 = 30613U;
	int8_t x387 = INT8_MIN;
	uint16_t x388 = UINT16_MAX;
	int32_t t79 = -110;

	t79 = (x385-((x386-x387)%x388));

	if (t79 != -30869) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x390 = 332695824LLU;
	uint64_t x391 = 236603LLU;
	int32_t x392 = -1;
	volatile uint64_t t80 = 14185LLU;

	t80 = (x389-((x390-x391)%x392));

	if (t80 != 18446654223269043573LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x393 = INT32_MIN;
	int16_t x394 = INT16_MAX;
	int8_t x395 = INT8_MIN;
	int32_t x396 = -1;
	static volatile int32_t t81 = INT32_MIN;

	t81 = (x393-((x394-x395)%x396));

	if (t81 != INT32_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x406 = INT16_MIN;
	volatile int8_t x407 = -23;
	uint32_t x408 = UINT32_MAX;
	static volatile uint64_t t82 = 582386831691794426LLU;

	t82 = (x405-((x406-x407)%x408));

	if (t82 != 18446744069414617074LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x409 = 89567858U;
	int16_t x410 = -1;
	int64_t x411 = -53LL;
	int8_t x412 = 9;
	int64_t t83 = -153081248634892416LL;

	t83 = (x409-((x410-x411)%x412));

	if (t83 != 89567851LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x415 = 744U;
	int32_t x416 = INT32_MIN;
	volatile int32_t t84 = 24770775;

	t84 = (x413-((x414-x415)%x416));

	if (t84 != 744) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x420 = 94378747U;
	volatile uint32_t t85 = 0U;

	t85 = (x417-((x418-x419)%x420));

	if (t85 != 64504U) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x421 = 270U;
	int32_t x423 = -897669;
	int64_t x424 = -9LL;
	volatile int64_t t86 = -175806LL;

	t86 = (x421-((x422-x423)%x424));

	if (t86 != 262LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x425 = -179104579939430LL;
	uint64_t x426 = 5983LLU;
	volatile int64_t x427 = -185LL;
	uint64_t x428 = 563790053394514585LLU;

	t87 = (x425-((x426-x427)%x428));

	if (t87 != 18446564969129606018LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x429 = INT64_MIN;
	int16_t x430 = INT16_MIN;
	static uint8_t x431 = 25U;
	volatile int16_t x432 = 1683;
	volatile int64_t t88 = -26132LL;

	t88 = (x429-((x430-x431)%x432));

	if (t88 != -9223372036854774992LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x433 = -1;
	uint32_t x435 = UINT32_MAX;
	static int64_t x436 = 2203112417949564LL;
	int64_t t89 = -91159945219LL;

	t89 = (x433-((x434-x435)%x436));

	if (t89 != -32769LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x437 = 4LL;
	uint16_t x438 = 396U;
	int64_t x439 = -105165307LL;
	int8_t x440 = INT8_MIN;
	int64_t t90 = 40598166852711LL;

	t90 = (x437-((x438-x439)%x440));

	if (t90 != -3LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x441 = UINT64_MAX;
	volatile int16_t x442 = -1;
	int8_t x443 = INT8_MAX;
	int16_t x444 = INT16_MIN;
	volatile uint64_t t91 = 363245775395938031LLU;

	t91 = (x441-((x442-x443)%x444));

	if (t91 != 127LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x445 = -1;
	static uint32_t x448 = 3861U;

	t92 = (x445-((x446-x447)%x448));

	if (t92 != 4294966266U) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x454 = UINT32_MAX;
	static volatile int32_t x455 = -1;
	int8_t x456 = INT8_MIN;
	uint32_t t93 = 298U;

	t93 = (x453-((x454-x455)%x456));

	if (t93 != 209U) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x457 = -510501762LL;
	volatile int64_t x458 = -1LL;
	int64_t x459 = INT64_MIN;
	volatile int16_t x460 = 208;
	static int64_t t94 = 31993534521268020LL;

	t94 = (x457-((x458-x459)%x460));

	if (t94 != -510501873LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x462 = INT64_MAX;
	uint32_t x464 = 265299U;
	static volatile uint64_t t95 = 225606LLU;

	t95 = (x461-((x462-x463)%x464));

	if (t95 != 38782LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x473 = INT32_MIN;
	uint64_t x474 = 86023304120946461LLU;
	uint64_t t96 = 8LLU;

	t96 = (x473-((x474-x475)%x476));

	if (t96 != 18446744071560636245LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x481 = INT64_MIN;
	int16_t x482 = INT16_MAX;
	static int8_t x484 = INT8_MIN;
	uint64_t t97 = 281617LLU;

	t97 = (x481-((x482-x483)%x484));

	if (t97 != 9223372036854744755LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x486 = 38U;
	int64_t x487 = INT64_MAX;

	t98 = (x485-((x486-x487)%x488));

	if (t98 != 1683551617900LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x489 = 12;
	int32_t x490 = -1;
	uint64_t x491 = UINT64_MAX;
	static volatile uint64_t t99 = 13811044008LLU;

	t99 = (x489-((x490-x491)%x492));

	if (t99 != 12LLU) { NG(); } else { ; }
	
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

