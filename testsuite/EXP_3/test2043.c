#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x2 = 1U;
static int32_t x5 = INT32_MIN;
volatile int64_t t1 = -175LL;
int32_t x10 = -655580978;
static volatile int64_t x12 = INT64_MIN;
uint8_t x20 = 12U;
static uint32_t t4 = 256514068U;
uint16_t x30 = UINT16_MAX;
static int8_t x31 = INT8_MAX;
uint8_t x32 = 35U;
uint64_t x36 = 4395794LLU;
static int32_t t9 = -112;
static uint8_t x46 = 1U;
int8_t x47 = -1;
int8_t x54 = INT8_MIN;
volatile int64_t t12 = -7495LL;
static volatile uint64_t t13 = 6LLU;
int32_t x68 = 165;
int16_t x69 = -2028;
int8_t x70 = 5;
int64_t x73 = 29025974697101939LL;
int8_t x76 = -1;
int64_t x83 = INT64_MIN;
uint16_t x84 = 132U;
uint64_t t18 = 19018789LLU;
static volatile uint64_t x86 = 16436280LLU;
volatile uint16_t x91 = 3U;
uint8_t x93 = 48U;
uint16_t x94 = UINT16_MAX;
volatile uint8_t x96 = UINT8_MAX;
int32_t t22 = 2;
uint64_t t23 = 2866930786234LLU;
volatile int16_t x106 = INT16_MAX;
uint64_t x111 = UINT64_MAX;
int16_t x113 = INT16_MIN;
int16_t x117 = INT16_MIN;
static int64_t x118 = INT64_MIN;
int64_t x119 = INT64_MIN;
uint64_t x121 = 38164259433428LLU;
static uint16_t x126 = 7U;
int16_t x133 = INT16_MAX;
int32_t x138 = INT32_MAX;
int16_t x142 = -7;
uint8_t x146 = 63U;
volatile int64_t t37 = -64924LL;
volatile uint64_t t39 = 27818686228LLU;
uint64_t t40 = 10174429LLU;
volatile int64_t t43 = -220536810LL;
volatile int8_t x189 = 10;
volatile int16_t x192 = INT16_MIN;
volatile uint64_t t45 = 669382763571LLU;
static volatile int64_t t47 = 1893651190933803LL;
int8_t x214 = -13;
uint16_t x217 = UINT16_MAX;
int16_t x218 = INT16_MAX;
uint8_t x220 = 3U;
static int32_t x221 = INT32_MIN;
static uint64_t x230 = UINT64_MAX;
volatile uint64_t t51 = 2017969LLU;
volatile int64_t x239 = INT64_MIN;
static volatile int32_t x268 = -422306;
int64_t t59 = 22LL;
int8_t x269 = -50;
int8_t x275 = INT8_MIN;
uint32_t x276 = 2876U;
int8_t x277 = INT8_MIN;
int16_t x289 = -1;
uint8_t x290 = 0U;
int8_t x294 = -12;
int64_t x305 = 7269LL;
int32_t x308 = INT32_MAX;
int64_t x318 = -24LL;
uint64_t t70 = UINT64_MAX;
volatile int64_t x333 = -1LL;
static uint8_t x336 = 0U;
volatile int64_t t73 = 5100157LL;
uint32_t t74 = 1397471U;
volatile int64_t x341 = -1LL;
uint16_t x344 = 481U;
volatile int64_t t76 = 887417057153675LL;
static volatile int8_t x362 = INT8_MIN;
uint64_t x378 = 1622LLU;
static volatile int16_t x382 = INT16_MIN;
uint16_t x383 = UINT16_MAX;
static volatile int8_t x384 = INT8_MIN;
int32_t t82 = -4;
int32_t x386 = -12443;
int32_t x387 = INT32_MAX;
static uint64_t x389 = UINT64_MAX;
static int16_t x391 = -13436;
int8_t x401 = INT8_MIN;
int16_t x412 = INT16_MIN;
volatile int32_t t87 = 5427;
volatile int16_t x414 = INT16_MIN;
static int8_t x416 = INT8_MIN;
static int32_t t89 = 2926;
volatile uint8_t x431 = 19U;
int16_t x438 = INT16_MAX;
uint8_t x439 = 2U;
volatile uint16_t x442 = 11407U;
volatile uint64_t t94 = 1116100LLU;
int32_t t95 = -1;
int32_t x458 = -1;
int8_t x460 = INT8_MIN;
int32_t t97 = 4253;
int64_t x464 = -188717335950217LL;
volatile uint64_t x468 = 2206304150LLU;


void f0(void) {
	volatile int8_t x1 = INT8_MIN;
	volatile int8_t x3 = 1;
	int16_t x4 = INT16_MAX;
	int32_t t0 = 3767;

	t0 = ((x1-x2)-(x3^x4));

	if (t0 != -32895) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = INT16_MIN;
	static int64_t x7 = INT64_MAX;
	int32_t x8 = INT32_MAX;

	t1 = ((x5-x6)-(x7^x8));

	if (t1 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -161574717676486LL;
	static volatile int16_t x11 = 6298;
	volatile int64_t t2 = 0LL;

	t2 = ((x9-x10)-(x11^x12));

	if (t2 != 9223210462792674002LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 14LLU;
	uint16_t x14 = 4189U;
	volatile uint8_t x15 = 39U;
	int64_t x16 = INT64_MAX;
	static uint64_t t3 = 1798LLU;

	t3 = ((x13-x14)-(x15^x16));

	if (t3 != 9223372036854771673LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 79464U;
	uint16_t x18 = 12U;
	int32_t x19 = INT32_MIN;

	t4 = ((x17-x18)-(x19^x20));

	if (t4 != 2147563088U) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = UINT16_MAX;
	static int32_t x22 = -1117244;
	int16_t x23 = -184;
	uint32_t x24 = 87003143U;
	volatile uint32_t t5 = 1U;

	t5 = ((x21-x22)-(x23^x24));

	if (t5 != 88186092U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = -1;
	uint8_t x26 = 6U;
	static int64_t x27 = INT64_MAX;
	int16_t x28 = -1;
	volatile int64_t t6 = -188LL;

	t6 = ((x25-x26)-(x27^x28));

	if (t6 != 9223372036854775801LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x29 = 12741364277988LLU;
	volatile uint64_t t7 = 3540233LLU;

	t7 = ((x29-x30)-(x31^x32));

	if (t7 != 12741364212361LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -1LL;
	volatile int8_t x34 = 15;
	static int32_t x35 = INT32_MIN;
	uint64_t t8 = 1LLU;

	t8 = ((x33-x34)-(x35^x36));

	if (t8 != 2143087838LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x37 = 1U;
	uint16_t x38 = 141U;
	int8_t x39 = INT8_MIN;
	static uint16_t x40 = 2U;

	t9 = ((x37-x38)-(x39^x40));

	if (t9 != -14) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x41 = -1LL;
	uint64_t x42 = 1LLU;
	uint8_t x43 = 0U;
	int8_t x44 = 0;
	uint64_t t10 = 1804287818LLU;

	t10 = ((x41-x42)-(x43^x44));

	if (t10 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = UINT16_MAX;
	volatile uint64_t x48 = UINT64_MAX;
	uint64_t t11 = 1210518028LLU;

	t11 = ((x45-x46)-(x47^x48));

	if (t11 != 65534LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = -124LL;
	int32_t x55 = INT32_MIN;
	int16_t x56 = 1;

	t12 = ((x53-x54)-(x55^x56));

	if (t12 != 2147483651LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x57 = UINT64_MAX;
	int8_t x58 = 16;
	uint16_t x59 = UINT16_MAX;
	int8_t x60 = INT8_MIN;

	t13 = ((x57-x58)-(x59^x60));

	if (t13 != 65392LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = INT32_MIN;
	static int32_t x62 = INT32_MIN;
	int32_t x63 = -1;
	static int16_t x64 = -3562;
	static int32_t t14 = 297;

	t14 = ((x61-x62)-(x63^x64));

	if (t14 != -3561) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = INT64_MIN;
	static int32_t x66 = -1;
	int8_t x67 = -1;
	static volatile int64_t t15 = -2925LL;

	t15 = ((x65-x66)-(x67^x68));

	if (t15 != -9223372036854775641LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x71 = UINT32_MAX;
	static int64_t x72 = -1LL;
	int64_t t16 = 4LL;

	t16 = ((x69-x70)-(x71^x72));

	if (t16 != 4294965263LL) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint32_t x74 = UINT32_MAX;
	int64_t x75 = INT64_MIN;
	int64_t t17 = -6468406LL;

	t17 = ((x73-x74)-(x75^x76));

	if (t17 != -9194346066452641163LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x81 = -55;
	uint64_t x82 = 1978079423139767485LLU;

	t18 = ((x81-x82)-(x83^x84));

	if (t18 != 7245292613715008136LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x85 = -1;
	int64_t x87 = INT64_MIN;
	int64_t x88 = 224441LL;
	uint64_t t19 = 975339LLU;

	t19 = ((x85-x86)-(x87^x88));

	if (t19 != 9223372036838115086LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x89 = -8873842;
	static int64_t x90 = 34LL;
	static uint64_t x92 = 1756790064LLU;
	uint64_t t20 = 7096330LLU;

	t20 = ((x89-x90)-(x91^x92));

	if (t20 != 18446744071943887673LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x95 = 4;
	volatile int32_t t21 = -20840473;

	t21 = ((x93-x94)-(x95^x96));

	if (t21 != -65738) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x97 = 1U;
	static volatile uint16_t x98 = 322U;
	int8_t x99 = INT8_MIN;
	uint16_t x100 = 23029U;

	t22 = ((x97-x98)-(x99^x100));

	if (t22 != 22602) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x101 = 4U;
	uint64_t x102 = UINT64_MAX;
	int64_t x103 = INT64_MIN;
	int16_t x104 = INT16_MIN;

	t23 = ((x101-x102)-(x103^x104));

	if (t23 != 9223372036854808581LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int8_t x105 = -19;
	static int8_t x107 = -6;
	uint32_t x108 = 1794632993U;
	uint32_t t24 = 1491772U;

	t24 = ((x105-x106)-(x107^x108));

	if (t24 != 1794600211U) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x109 = 1U;
	uint64_t x110 = UINT64_MAX;
	static int64_t x112 = 0LL;
	volatile uint64_t t25 = 2813490LLU;

	t25 = ((x109-x110)-(x111^x112));

	if (t25 != 3LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x114 = 15739LL;
	uint32_t x115 = 33632U;
	static uint16_t x116 = UINT16_MAX;
	int64_t t26 = 1461590515LL;

	t26 = ((x113-x114)-(x115^x116));

	if (t26 != -80410LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x120 = -1;
	int64_t t27 = 1003435LL;

	t27 = ((x117-x118)-(x119^x120));

	if (t27 != -32767LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x122 = -1LL;
	int64_t x123 = INT64_MAX;
	volatile uint64_t x124 = 13023362726LLU;
	static volatile uint64_t t28 = 3695076274LLU;

	t28 = ((x121-x122)-(x123^x124));

	if (t28 != 9223410214137571964LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x125 = 29;
	uint64_t x127 = 286795241195648630LLU;
	uint8_t x128 = 0U;
	uint64_t t29 = 19769115814505238LLU;

	t29 = ((x125-x126)-(x127^x128));

	if (t29 != 18159948832513903008LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x129 = -1964671572037522888LL;
	volatile uint16_t x130 = 247U;
	int16_t x131 = INT16_MIN;
	int64_t x132 = -113381553LL;
	static volatile int64_t t30 = -283LL;

	t30 = ((x129-x130)-(x131^x132));

	if (t30 != -1964671572150928910LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x134 = -31;
	static int16_t x135 = -7898;
	int16_t x136 = INT16_MIN;
	volatile int32_t t31 = -9;

	t31 = ((x133-x134)-(x135^x136));

	if (t31 != 7928) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x137 = 52LLU;
	int8_t x139 = -3;
	int32_t x140 = 30198059;
	static volatile uint64_t t32 = 51199680LLU;

	t32 = ((x137-x138)-(x139^x140));

	if (t32 != 18446744071592266079LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint32_t x141 = UINT32_MAX;
	volatile int8_t x143 = 2;
	int64_t x144 = 153086796324108LL;
	volatile int64_t t33 = 974460LL;

	t33 = ((x141-x142)-(x143^x144));

	if (t33 != -153086796324104LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x145 = -1;
	uint16_t x147 = 28U;
	int8_t x148 = 0;
	static int32_t t34 = 7;

	t34 = ((x145-x146)-(x147^x148));

	if (t34 != -92) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int16_t x153 = INT16_MIN;
	int32_t x154 = INT32_MIN;
	uint16_t x155 = UINT16_MAX;
	uint8_t x156 = UINT8_MAX;
	int32_t t35 = -5048;

	t35 = ((x153-x154)-(x155^x156));

	if (t35 != 2147385600) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint16_t x157 = 16907U;
	volatile int64_t x158 = -1LL;
	int8_t x159 = INT8_MIN;
	int8_t x160 = INT8_MIN;
	int64_t t36 = 1LL;

	t36 = ((x157-x158)-(x159^x160));

	if (t36 != 16908LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x161 = 4U;
	int16_t x162 = INT16_MIN;
	int64_t x163 = 14384172456LL;
	int8_t x164 = 10;

	t37 = ((x161-x162)-(x163^x164));

	if (t37 != -14384139678LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x165 = -1LL;
	static uint8_t x166 = 4U;
	int32_t x167 = INT32_MAX;
	int64_t x168 = INT64_MIN;
	int64_t t38 = 83581742264471LL;

	t38 = ((x165-x166)-(x167^x168));

	if (t38 != 9223372034707292156LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x169 = INT8_MIN;
	uint64_t x170 = UINT64_MAX;
	uint8_t x171 = 0U;
	int8_t x172 = 0;

	t39 = ((x169-x170)-(x171^x172));

	if (t39 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x173 = INT16_MAX;
	uint64_t x174 = UINT64_MAX;
	int32_t x175 = 30;
	int32_t x176 = 5031218;

	t40 = ((x173-x174)-(x175^x176));

	if (t40 != 18446744073704553172LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x177 = 44272138761971LLU;
	static int64_t x178 = INT64_MAX;
	uint32_t x179 = 465U;
	volatile int16_t x180 = -1;
	uint64_t t41 = 3403002184LLU;

	t41 = ((x177-x178)-(x179^x180));

	if (t41 != 9223416304698570950LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x181 = -1;
	int32_t x182 = INT32_MIN;
	uint16_t x183 = 0U;
	static int64_t x184 = -38929168077237LL;
	volatile int64_t t42 = -2593259820499LL;

	t42 = ((x181-x182)-(x183^x184));

	if (t42 != 38931315560884LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x185 = -1;
	volatile int32_t x186 = INT32_MIN;
	static int32_t x187 = -1;
	int64_t x188 = -556663750225884LL;

	t43 = ((x185-x186)-(x187^x188));

	if (t43 != -556661602742236LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x190 = INT8_MAX;
	int64_t x191 = -1202LL;
	int64_t t44 = -17067499779LL;

	t44 = ((x189-x190)-(x191^x192));

	if (t44 != -31683LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x197 = -385;
	int32_t x198 = 45756958;
	uint16_t x199 = 2858U;
	uint64_t x200 = UINT64_MAX;

	t45 = ((x197-x198)-(x199^x200));

	if (t45 != 18446744073663797132LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x201 = 16495003U;
	uint32_t x202 = 2989U;
	int16_t x203 = INT16_MAX;
	volatile uint16_t x204 = UINT16_MAX;
	uint32_t t46 = 32785802U;

	t46 = ((x201-x202)-(x203^x204));

	if (t46 != 16459246U) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x205 = INT8_MAX;
	uint8_t x206 = 0U;
	int64_t x207 = -1LL;
	int8_t x208 = INT8_MIN;

	t47 = ((x205-x206)-(x207^x208));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x213 = UINT8_MAX;
	volatile int64_t x215 = -1LL;
	uint8_t x216 = UINT8_MAX;
	int64_t t48 = 61572LL;

	t48 = ((x213-x214)-(x215^x216));

	if (t48 != 524LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x219 = UINT8_MAX;
	int32_t t49 = 14;

	t49 = ((x217-x218)-(x219^x220));

	if (t49 != 32516) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x222 = -495LL;
	static int16_t x223 = 255;
	int8_t x224 = INT8_MIN;
	int64_t t50 = -823542LL;

	t50 = ((x221-x222)-(x223^x224));

	if (t50 != -2147483024LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x229 = 33;
	int32_t x231 = INT32_MIN;
	int64_t x232 = -26253LL;

	t51 = ((x229-x230)-(x231^x232));

	if (t51 != 18446744071562094255LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int8_t x233 = -1;
	int16_t x234 = INT16_MIN;
	volatile int16_t x235 = INT16_MIN;
	static int32_t x236 = -1;
	volatile int32_t t52 = 2021;

	t52 = ((x233-x234)-(x235^x236));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x237 = 56LL;
	volatile uint32_t x238 = UINT32_MAX;
	int16_t x240 = INT16_MAX;
	int64_t t53 = 3LL;

	t53 = ((x237-x238)-(x239^x240));

	if (t53 != 9223372032559775802LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x241 = -1;
	static volatile int32_t x242 = -1;
	uint32_t x243 = 26937752U;
	volatile int8_t x244 = INT8_MIN;
	volatile uint32_t t54 = 372394U;

	t54 = ((x241-x242)-(x243^x244));

	if (t54 != 26937832U) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x249 = -1LL;
	static volatile uint64_t x250 = UINT64_MAX;
	uint64_t x251 = 41600124590760LLU;
	int64_t x252 = 82446787796173891LL;
	volatile uint64_t t55 = 32166200935150843LLU;

	t55 = ((x249-x250)-(x251^x252));

	if (t55 != 18364327708368789781LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x253 = INT32_MIN;
	int32_t x254 = INT32_MIN;
	static uint8_t x255 = UINT8_MAX;
	uint64_t x256 = UINT64_MAX;
	uint64_t t56 = 961LLU;

	t56 = ((x253-x254)-(x255^x256));

	if (t56 != 256LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x257 = INT64_MIN;
	volatile int64_t x258 = INT64_MIN;
	int8_t x259 = INT8_MAX;
	static int8_t x260 = INT8_MIN;
	volatile int64_t t57 = 348234LL;

	t57 = ((x257-x258)-(x259^x260));

	if (t57 != 1LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x261 = 145008129LL;
	int64_t x262 = 1LL;
	static int64_t x263 = -1LL;
	static int16_t x264 = INT16_MIN;
	int64_t t58 = 3LL;

	t58 = ((x261-x262)-(x263^x264));

	if (t58 != 144975361LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x265 = INT64_MAX;
	int64_t x266 = 16629979674LL;
	int8_t x267 = -1;

	t59 = ((x265-x266)-(x267^x268));

	if (t59 != 9223372020224373828LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x270 = -1;
	int16_t x271 = 4095;
	int16_t x272 = -20;
	int32_t t60 = -110056555;

	t60 = ((x269-x270)-(x271^x272));

	if (t60 != 4028) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x273 = 4U;
	int32_t x274 = -1;
	volatile uint32_t t61 = 8008645U;

	t61 = ((x273-x274)-(x275^x276));

	if (t61 != 2889U) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x278 = -1LL;
	uint8_t x279 = 2U;
	int8_t x280 = INT8_MIN;
	int64_t t62 = 7450736050338LL;

	t62 = ((x277-x278)-(x279^x280));

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x281 = -1;
	volatile int32_t x282 = INT32_MIN;
	int64_t x283 = -1LL;
	uint8_t x284 = 65U;
	int64_t t63 = -19204031LL;

	t63 = ((x281-x282)-(x283^x284));

	if (t63 != 2147483713LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x291 = INT8_MIN;
	uint64_t x292 = UINT64_MAX;
	static volatile uint64_t t64 = 33251389LLU;

	t64 = ((x289-x290)-(x291^x292));

	if (t64 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x293 = INT16_MIN;
	int8_t x295 = 47;
	int64_t x296 = INT64_MIN;
	volatile int64_t t65 = 82637963339165LL;

	t65 = ((x293-x294)-(x295^x296));

	if (t65 != 9223372036854743005LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x306 = 257231844201351470LLU;
	static volatile int32_t x307 = INT32_MAX;
	volatile uint64_t t66 = 7990LLU;

	t66 = ((x305-x306)-(x307^x308));

	if (t66 != 18189512229508207415LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x309 = 19967385U;
	static int32_t x310 = 228;
	int16_t x311 = INT16_MAX;
	int32_t x312 = INT32_MIN;
	static volatile uint32_t t67 = 8U;

	t67 = ((x309-x310)-(x311^x312));

	if (t67 != 2167418038U) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x313 = INT64_MIN;
	static int64_t x314 = INT64_MIN;
	uint8_t x315 = UINT8_MAX;
	volatile uint16_t x316 = UINT16_MAX;
	static int64_t t68 = 578112LL;

	t68 = ((x313-x314)-(x315^x316));

	if (t68 != -65280LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x317 = 0LL;
	int32_t x319 = -1;
	uint16_t x320 = 1870U;
	volatile int64_t t69 = 14939LL;

	t69 = ((x317-x318)-(x319^x320));

	if (t69 != 1895LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x321 = 4LLU;
	uint16_t x322 = 5U;
	static int64_t x323 = -1LL;
	volatile int16_t x324 = -1;

	t70 = ((x321-x322)-(x323^x324));

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x325 = INT16_MIN;
	uint8_t x326 = 2U;
	uint64_t x327 = 42562LLU;
	int32_t x328 = INT32_MIN;
	volatile uint64_t t71 = 13571899LLU;

	t71 = ((x325-x326)-(x327^x328));

	if (t71 != 2147408316LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x329 = UINT16_MAX;
	int16_t x330 = INT16_MIN;
	uint16_t x331 = 3120U;
	int32_t x332 = -1;
	int32_t t72 = -107;

	t72 = ((x329-x330)-(x331^x332));

	if (t72 != 101424) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int8_t x334 = INT8_MIN;
	int32_t x335 = -1;

	t73 = ((x333-x334)-(x335^x336));

	if (t73 != 128LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x337 = 37173U;
	static int32_t x338 = -1;
	volatile int32_t x339 = 7249;
	uint32_t x340 = 16616830U;

	t74 = ((x337-x338)-(x339^x340));

	if (t74 != 4278386695U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x342 = INT8_MIN;
	int32_t x343 = INT32_MAX;
	volatile int64_t t75 = 4742273LL;

	t75 = ((x341-x342)-(x343^x344));

	if (t75 != -2147483039LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x353 = INT32_MIN;
	int32_t x354 = -424;
	uint32_t x355 = 192U;
	int64_t x356 = 1929LL;

	t76 = ((x353-x354)-(x355^x356));

	if (t76 != -2147485089LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x357 = -1;
	int16_t x358 = -126;
	volatile uint32_t x359 = UINT32_MAX;
	int8_t x360 = INT8_MAX;
	static uint32_t t77 = 78212914U;

	t77 = ((x357-x358)-(x359^x360));

	if (t77 != 253U) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x361 = 78U;
	uint32_t x363 = 21504953U;
	int32_t x364 = -1;
	volatile uint32_t t78 = 101499U;

	t78 = ((x361-x362)-(x363^x364));

	if (t78 != 21505160U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x365 = 4;
	static uint64_t x366 = 32613366221695468LLU;
	int32_t x367 = INT32_MIN;
	static volatile uint16_t x368 = 8860U;
	static volatile uint64_t t79 = 112942065655360LLU;

	t79 = ((x365-x366)-(x367^x368));

	if (t79 != 18414130709635330940LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int16_t x369 = INT16_MAX;
	uint8_t x370 = 1U;
	static uint16_t x371 = UINT16_MAX;
	uint32_t x372 = 12933052U;
	volatile uint32_t t80 = 386U;

	t80 = ((x369-x370)-(x371^x372));

	if (t80 != 4282046395U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x377 = INT16_MAX;
	int16_t x379 = -3645;
	volatile int8_t x380 = INT8_MIN;
	volatile uint64_t t81 = 169018802173LLU;

	t81 = ((x377-x378)-(x379^x380));

	if (t81 != 27494LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x381 = -6841085;

	t82 = ((x381-x382)-(x383^x384));

	if (t82 != -6742908) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x385 = INT64_MIN;
	int8_t x388 = INT8_MIN;
	int64_t t83 = 12262389LL;

	t83 = ((x385-x386)-(x387^x388));

	if (t83 != -9223372034707279844LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x390 = INT32_MAX;
	int16_t x392 = 1;
	uint64_t t84 = 3570266LLU;

	t84 = ((x389-x390)-(x391^x392));

	if (t84 != 18446744071562081403LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x393 = 178U;
	volatile int64_t x394 = -125041LL;
	int32_t x395 = INT32_MAX;
	int16_t x396 = INT16_MIN;
	int64_t t85 = 62541067256452LL;

	t85 = ((x393-x394)-(x395^x396));

	if (t85 != 2147576100LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x402 = -1LL;
	int16_t x403 = INT16_MIN;
	uint64_t x404 = 254797577LLU;
	static uint64_t t86 = 47121634LLU;

	t86 = ((x401-x402)-(x403^x404));

	if (t86 != 254777464LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x409 = INT16_MIN;
	volatile int8_t x410 = -1;
	uint8_t x411 = UINT8_MAX;

	t87 = ((x409-x410)-(x411^x412));

	if (t87 != -254) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x413 = UINT64_MAX;
	int16_t x415 = -1;
	static volatile uint64_t t88 = 8616209361500445118LLU;

	t88 = ((x413-x414)-(x415^x416));

	if (t88 != 32640LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x421 = INT32_MIN;
	int16_t x422 = INT16_MIN;
	volatile int16_t x423 = INT16_MAX;
	int8_t x424 = INT8_MIN;

	t89 = ((x421-x422)-(x423^x424));

	if (t89 != -2147418239) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x425 = 68926135LLU;
	int64_t x426 = 993986440LL;
	uint8_t x427 = UINT8_MAX;
	volatile int8_t x428 = INT8_MIN;
	uint64_t t90 = 2174501393LLU;

	t90 = ((x425-x426)-(x427^x428));

	if (t90 != 18446744072784491440LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x429 = 11LLU;
	int8_t x430 = 0;
	uint64_t x432 = 3167573087277380024LLU;
	volatile uint64_t t91 = 1LLU;

	t91 = ((x429-x430)-(x431^x432));

	if (t91 != 15279170986432171616LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x437 = 558782189U;
	volatile uint16_t x440 = 0U;
	volatile uint32_t t92 = 3319993U;

	t92 = ((x437-x438)-(x439^x440));

	if (t92 != 558749420U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x441 = INT16_MIN;
	int32_t x443 = INT32_MAX;
	uint64_t x444 = UINT64_MAX;
	uint64_t t93 = 6902341LLU;

	t93 = ((x441-x442)-(x443^x444));

	if (t93 != 2147439473LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x445 = UINT64_MAX;
	int32_t x446 = INT32_MIN;
	uint16_t x447 = 27U;
	uint16_t x448 = 3901U;

	t94 = ((x445-x446)-(x447^x448));

	if (t94 != 2147479769LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x449 = 249;
	int32_t x450 = INT32_MAX;
	int8_t x451 = -1;
	volatile int32_t x452 = 30027452;

	t95 = ((x449-x450)-(x451^x452));

	if (t95 != -2117455945) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x453 = -2776099;
	volatile int8_t x454 = -40;
	int8_t x455 = INT8_MAX;
	uint64_t x456 = UINT64_MAX;
	uint64_t t96 = 678576824812887704LLU;

	t96 = ((x453-x454)-(x455^x456));

	if (t96 != 18446744073706775685LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x457 = UINT8_MAX;
	volatile uint8_t x459 = UINT8_MAX;

	t97 = ((x457-x458)-(x459^x460));

	if (t97 != 385) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x461 = 0U;
	uint16_t x462 = UINT16_MAX;
	int32_t x463 = INT32_MIN;
	int64_t t98 = -27LL;

	t98 = ((x461-x462)-(x463^x464));

	if (t98 != -188713652669558LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x465 = INT64_MIN;
	uint64_t x466 = UINT64_MAX;
	int8_t x467 = INT8_MIN;
	uint64_t t99 = 296474888005529LLU;

	t99 = ((x465-x466)-(x467^x468));

	if (t99 != 9223372039061080043LLU) { NG(); } else { ; }
	
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

