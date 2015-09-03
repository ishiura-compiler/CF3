#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = 381;
int8_t x11 = -4;
uint64_t t4 = 711LLU;
volatile int64_t x41 = -1LL;
static int16_t x53 = INT16_MIN;
uint32_t x73 = 144U;
static volatile uint64_t x82 = 11796LLU;
int32_t x83 = 311046;
int32_t x85 = -1;
volatile uint64_t x88 = UINT64_MAX;
int8_t x91 = INT8_MIN;
volatile int8_t x108 = 3;
volatile uint64_t t20 = 237589781LLU;
int32_t x113 = -4083017;
uint64_t x118 = 202400893707LLU;
volatile int16_t x122 = -6;
static int64_t x126 = INT64_MAX;
int16_t x135 = -730;
static volatile uint32_t t27 = 27197U;
int64_t x137 = INT64_MIN;
int8_t x168 = -3;
uint32_t x171 = UINT32_MAX;
static volatile int64_t x172 = INT64_MIN;
int64_t t36 = -14201144999LL;
uint8_t x182 = 99U;
volatile int64_t t38 = 191257LL;
volatile uint64_t t39 = 526LLU;
uint32_t x196 = 1678U;
uint64_t t42 = 217555648LLU;
uint8_t x205 = UINT8_MAX;
int8_t x217 = INT8_MIN;
int16_t x220 = INT16_MAX;
static int64_t t48 = -37625910727447LL;
uint8_t x240 = UINT8_MAX;
uint64_t t50 = 0LLU;
int8_t x252 = -1;
int8_t x265 = 6;
volatile uint8_t x269 = 93U;
int8_t x277 = INT8_MIN;
int32_t t57 = 1;
static int16_t x282 = 185;
volatile int32_t t58 = -825774;
uint32_t x300 = UINT32_MAX;
int32_t x308 = 3599272;
static volatile uint16_t x314 = UINT16_MAX;
int16_t x315 = -2;
uint16_t x318 = 929U;
uint64_t x319 = UINT64_MAX;
static uint16_t x332 = 10U;
static int16_t x333 = INT16_MAX;
uint32_t x336 = 577514U;
static volatile int32_t x338 = -51174860;
uint32_t x339 = 15689U;
static int32_t x342 = 0;
int32_t x343 = -3212;
int32_t t70 = -10;
static int64_t x349 = 546918299684129LL;
uint16_t x353 = 1U;
uint32_t t73 = 8690751U;
int8_t x359 = INT8_MIN;
uint64_t t78 = 74924061613181216LLU;
volatile int64_t t79 = 11891150LL;
int64_t x396 = INT64_MIN;
volatile uint16_t x398 = UINT16_MAX;
uint32_t x404 = UINT32_MAX;
uint64_t x413 = 158257481LLU;
volatile int8_t x416 = -5;
int64_t t87 = -891800293584963LL;
int16_t x428 = -1;
int64_t t88 = 109670312LL;
uint32_t x435 = 987789U;
int64_t x439 = 2891264354157LL;
volatile int64_t t91 = -5749390210107LL;
static uint32_t x454 = 7U;
uint64_t t94 = 3480LLU;
int64_t t95 = 28LL;
int32_t x461 = -169;
static int16_t x467 = -15608;
int32_t x468 = -4;
volatile int64_t t97 = -30188232LL;
volatile uint16_t x469 = UINT16_MAX;
volatile int32_t x472 = INT32_MAX;
int8_t x474 = INT8_MAX;
volatile uint64_t t99 = 73353LLU;


void f0(void) {
	uint32_t x1 = 453U;
	static uint32_t x2 = UINT32_MAX;
	static int64_t x4 = 142LL;
	int64_t t0 = 2044113050LL;

	t0 = (((x1-x2)+x3)^x4);

	if (t0 != 973LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = -1;
	uint32_t x10 = 11U;
	uint64_t x12 = UINT64_MAX;
	uint64_t t1 = 11606LLU;

	t1 = (((x9-x10)+x11)^x12);

	if (t1 != 18446744069414584335LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x17 = 765313563LLU;
	int8_t x18 = 20;
	uint8_t x19 = UINT8_MAX;
	int16_t x20 = -1;
	static volatile uint64_t t2 = 906486219854727LLU;

	t2 = (((x17-x18)+x19)^x20);

	if (t2 != 18446744072944237817LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x21 = -1;
	static uint32_t x22 = 950908350U;
	uint16_t x23 = 7U;
	volatile int8_t x24 = INT8_MIN;
	volatile uint32_t t3 = 371728U;

	t3 = (((x21-x22)+x23)^x24);

	if (t3 != 950908360U) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x29 = 1807LLU;
	static volatile uint64_t x30 = 2018731755107357368LLU;
	volatile uint32_t x31 = 15728U;
	int32_t x32 = -2;

	t4 = (((x29-x30)+x31)^x32);

	if (t4 != 2018731755107339833LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x37 = 9011;
	uint64_t x38 = 1780756LLU;
	static int16_t x39 = -1;
	int8_t x40 = 1;
	uint64_t t5 = 4090132342046779LLU;

	t5 = (((x37-x38)+x39)^x40);

	if (t5 != 18446744073707779871LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x42 = -26594LL;
	static uint8_t x43 = 2U;
	static int8_t x44 = -1;
	int64_t t6 = 611224LL;

	t6 = (((x41-x42)+x43)^x44);

	if (t6 != -26596LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x45 = INT64_MAX;
	uint32_t x46 = UINT32_MAX;
	volatile int16_t x47 = INT16_MAX;
	volatile int32_t x48 = 1058873;
	int64_t t7 = 4337329LL;

	t7 = (((x45-x46)+x47)^x48);

	if (t7 != 9223372032560879558LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x54 = 72516;
	volatile int16_t x55 = -1;
	static uint32_t x56 = UINT32_MAX;
	static uint32_t t8 = 429493U;

	t8 = (((x53-x54)+x55)^x56);

	if (t8 != 105284U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x57 = INT16_MIN;
	int32_t x58 = INT32_MIN;
	static volatile uint8_t x59 = 19U;
	volatile int64_t x60 = -1LL;
	int64_t t9 = 22638LL;

	t9 = (((x57-x58)+x59)^x60);

	if (t9 != -2147450900LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x61 = 65U;
	volatile int8_t x62 = INT8_MIN;
	volatile int32_t x63 = 37923359;
	uint64_t x64 = 28015LLU;
	static volatile uint64_t t10 = 0LLU;

	t10 = (((x61-x62)+x63)^x64);

	if (t10 != 37930895LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x65 = 1U;
	static int64_t x66 = -1LL;
	int8_t x67 = -1;
	uint16_t x68 = 62U;
	int64_t t11 = -248983687LL;

	t11 = (((x65-x66)+x67)^x68);

	if (t11 != 63LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x69 = -3863436;
	static volatile int32_t x70 = -9874287;
	int32_t x71 = INT32_MIN;
	int32_t x72 = -1;
	volatile int32_t t12 = -62984;

	t12 = (((x69-x70)+x71)^x72);

	if (t12 != 2141472796) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x74 = INT32_MAX;
	uint16_t x75 = UINT16_MAX;
	int16_t x76 = 0;
	uint32_t t13 = 13377828U;

	t13 = (((x73-x74)+x75)^x76);

	if (t13 != 2147549328U) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x77 = 443138LLU;
	uint8_t x78 = 40U;
	int64_t x79 = INT64_MIN;
	int32_t x80 = INT32_MAX;
	uint64_t t14 = 108521LLU;

	t14 = (((x77-x78)+x79)^x80);

	if (t14 != 9223372039001816357LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x81 = 8U;
	int16_t x84 = INT16_MIN;
	static uint64_t t15 = 3824365270LLU;

	t15 = (((x81-x82)+x83)^x84);

	if (t15 != 18446744073709228282LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x86 = INT16_MIN;
	volatile int8_t x87 = 7;
	static volatile uint64_t t16 = 500860LLU;

	t16 = (((x85-x86)+x87)^x88);

	if (t16 != 18446744073709518841LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x89 = 5U;
	volatile int16_t x90 = 6817;
	uint64_t x92 = UINT64_MAX;
	uint64_t t17 = 10437592032LLU;

	t17 = (((x89-x90)+x91)^x92);

	if (t17 != 6939LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x97 = INT32_MIN;
	int8_t x98 = -2;
	volatile int32_t x99 = 738;
	uint16_t x100 = 2U;
	volatile int32_t t18 = -551205283;

	t18 = (((x97-x98)+x99)^x100);

	if (t18 != -2147482906) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x101 = 353044317;
	volatile int32_t x102 = 3354;
	int8_t x103 = -1;
	static uint64_t x104 = UINT64_MAX;
	uint64_t t19 = 263223555167549183LLU;

	t19 = (((x101-x102)+x103)^x104);

	if (t19 != 18446744073356510653LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x105 = UINT64_MAX;
	uint32_t x106 = UINT32_MAX;
	int32_t x107 = INT32_MAX;

	t20 = (((x105-x106)+x107)^x108);

	if (t20 != 18446744071562067964LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x109 = INT32_MIN;
	volatile int64_t x110 = INT64_MIN;
	volatile uint16_t x111 = 763U;
	volatile uint32_t x112 = 0U;
	volatile int64_t t21 = 0LL;

	t21 = (((x109-x110)+x111)^x112);

	if (t21 != 9223372034707292923LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x114 = -1;
	int8_t x115 = -42;
	volatile int16_t x116 = -23;
	int32_t t22 = -1205987;

	t22 = (((x113-x114)+x115)^x116);

	if (t22 != 4083047) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x117 = 42;
	int16_t x119 = INT16_MAX;
	static int64_t x120 = 171361999487931312LL;
	uint64_t t23 = 46635632887936355LLU;

	t23 = (((x117-x118)+x119)^x120);

	if (t23 != 18275381907255289518LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x121 = 0;
	volatile int32_t x123 = 71371;
	uint32_t x124 = 7163941U;
	uint32_t t24 = 216363U;

	t24 = (((x121-x122)+x123)^x124);

	if (t24 != 7096052U) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x125 = 344LLU;
	static int64_t x127 = INT64_MAX;
	int64_t x128 = INT64_MIN;
	volatile uint64_t t25 = 1407LLU;

	t25 = (((x125-x126)+x127)^x128);

	if (t25 != 9223372036854776152LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x129 = -1LL;
	uint32_t x130 = UINT32_MAX;
	int8_t x131 = INT8_MIN;
	int8_t x132 = INT8_MIN;
	int64_t t26 = 2LL;

	t26 = (((x129-x130)+x131)^x132);

	if (t26 != 4294967296LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x133 = UINT32_MAX;
	static int8_t x134 = -41;
	volatile int16_t x136 = 107;

	t27 = (((x133-x134)+x135)^x136);

	if (t27 != 4294966565U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x138 = INT16_MIN;
	int8_t x139 = INT8_MIN;
	uint32_t x140 = 102541U;
	int64_t t28 = 2520102LL;

	t28 = (((x137-x138)+x139)^x140);

	if (t28 != -9223372036854649075LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x141 = UINT32_MAX;
	int16_t x142 = 0;
	int8_t x143 = INT8_MAX;
	int32_t x144 = -1;
	uint32_t t29 = 79800049U;

	t29 = (((x141-x142)+x143)^x144);

	if (t29 != 4294967169U) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x145 = 5U;
	int32_t x146 = -1;
	uint32_t x147 = 1350771U;
	uint32_t x148 = 48838451U;
	volatile uint32_t t30 = 2U;

	t30 = (((x145-x146)+x147)^x148);

	if (t30 != 50178890U) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint8_t x149 = 68U;
	static volatile int32_t x150 = INT32_MAX;
	static int8_t x151 = -3;
	uint32_t x152 = UINT32_MAX;
	static uint32_t t31 = 0U;

	t31 = (((x149-x150)+x151)^x152);

	if (t31 != 2147483581U) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x157 = 30U;
	uint16_t x158 = UINT16_MAX;
	int8_t x159 = 8;
	uint32_t x160 = 14U;
	volatile uint32_t t32 = 94947U;

	t32 = (((x157-x158)+x159)^x160);

	if (t32 != 4294901801U) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x161 = 58U;
	int8_t x162 = 0;
	uint32_t x163 = 4877U;
	static uint64_t x164 = 15283LLU;
	uint64_t t33 = 25622136408LLU;

	t33 = (((x161-x162)+x163)^x164);

	if (t33 != 10484LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x165 = 1;
	static uint8_t x166 = 5U;
	static uint64_t x167 = 617430234216LLU;
	uint64_t t34 = 603337788104619071LLU;

	t34 = (((x165-x166)+x167)^x168);

	if (t34 != 18446743456279317401LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x169 = 354316375639331LLU;
	volatile int16_t x170 = INT16_MIN;
	volatile uint64_t t35 = 285329977850190701LLU;

	t35 = (((x169-x170)+x171)^x172);

	if (t35 != 9223726357525415202LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x173 = INT16_MAX;
	int8_t x174 = -1;
	int64_t x175 = INT64_MIN;
	int8_t x176 = 0;

	t36 = (((x173-x174)+x175)^x176);

	if (t36 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x177 = 9748735U;
	volatile int8_t x178 = INT8_MAX;
	int32_t x179 = INT32_MIN;
	int64_t x180 = INT64_MAX;
	static int64_t t37 = 44815270LL;

	t37 = (((x177-x178)+x179)^x180);

	if (t37 != 9223372034697543551LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x181 = -12;
	static int16_t x183 = -1;
	int64_t x184 = -1LL;

	t38 = (((x181-x182)+x183)^x184);

	if (t38 != 111LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x189 = 43669505275472811LLU;
	uint8_t x190 = 38U;
	int16_t x191 = INT16_MAX;
	int32_t x192 = INT32_MIN;

	t39 = (((x189-x190)+x191)^x192);

	if (t39 != 18403074566469888900LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x193 = INT16_MIN;
	uint32_t x194 = 15232U;
	int64_t x195 = -7499159616LL;
	volatile int64_t t40 = -39966980LL;

	t40 = (((x193-x194)+x195)^x196);

	if (t40 != -3204240690LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x197 = 1713349413LLU;
	uint32_t x198 = 331370U;
	int16_t x199 = INT16_MIN;
	uint32_t x200 = 510U;
	uint64_t t41 = 11622631787706866LLU;

	t41 = (((x197-x198)+x199)^x200);

	if (t41 != 1712985413LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x201 = 18186672102341037LLU;
	int16_t x202 = INT16_MIN;
	static uint64_t x203 = 57LLU;
	int64_t x204 = 1LL;

	t42 = (((x201-x202)+x203)^x204);

	if (t42 != 18186672102373863LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x206 = 3LLU;
	int32_t x207 = -1;
	int64_t x208 = -1LL;
	uint64_t t43 = 158983757LLU;

	t43 = (((x205-x206)+x207)^x208);

	if (t43 != 18446744073709551364LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int32_t x213 = -10;
	static int64_t x214 = -1LL;
	static int16_t x215 = INT16_MIN;
	uint32_t x216 = 1U;
	static volatile int64_t t44 = 637044234148685766LL;

	t44 = (((x213-x214)+x215)^x216);

	if (t44 != -32778LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x218 = -1;
	uint8_t x219 = 0U;
	int32_t t45 = 13469506;

	t45 = (((x217-x218)+x219)^x220);

	if (t45 != -32642) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x221 = 9140912535268985LLU;
	volatile uint32_t x222 = 1829U;
	uint16_t x223 = UINT16_MAX;
	int16_t x224 = 1;
	static volatile uint64_t t46 = 16031LLU;

	t46 = (((x221-x222)+x223)^x224);

	if (t46 != 9140912535332690LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x225 = 5U;
	uint32_t x226 = 1U;
	int16_t x227 = INT16_MAX;
	static int64_t x228 = 75552766034LL;
	volatile int64_t t47 = 4LL;

	t47 = (((x225-x226)+x227)^x228);

	if (t47 != 75552733265LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x229 = -1LL;
	int16_t x230 = 31;
	volatile int16_t x231 = -1;
	int8_t x232 = -33;

	t48 = (((x229-x230)+x231)^x232);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x233 = UINT64_MAX;
	int8_t x234 = INT8_MAX;
	uint32_t x235 = UINT32_MAX;
	volatile uint8_t x236 = 1U;
	uint64_t t49 = 3169341LLU;

	t49 = (((x233-x234)+x235)^x236);

	if (t49 != 4294967166LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x237 = -328547006871LL;
	static uint64_t x238 = 15267LLU;
	volatile int16_t x239 = INT16_MAX;

	t50 = (((x237-x238)+x239)^x240);

	if (t50 != 18446743745162562106LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x241 = -1;
	volatile uint8_t x242 = UINT8_MAX;
	volatile int16_t x243 = INT16_MIN;
	volatile int32_t x244 = -83309119;
	int32_t t51 = -26;

	t51 = (((x241-x242)+x243)^x244);

	if (t51 != 83342017) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x245 = 1;
	int32_t x246 = -3275;
	int16_t x247 = INT16_MIN;
	static uint64_t x248 = UINT64_MAX;
	volatile uint64_t t52 = 2109053589612182661LLU;

	t52 = (((x245-x246)+x247)^x248);

	if (t52 != 29491LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x249 = 1691;
	static int32_t x250 = -1335;
	static volatile int8_t x251 = -23;
	int32_t t53 = -45510;

	t53 = (((x249-x250)+x251)^x252);

	if (t53 != -3004) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x261 = 4376315703102485215LL;
	int8_t x262 = -1;
	int8_t x263 = 2;
	int8_t x264 = INT8_MAX;
	volatile int64_t t54 = -1LL;

	t54 = (((x261-x262)+x263)^x264);

	if (t54 != 4376315703102485149LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x266 = 20U;
	volatile uint64_t x267 = 5121688222457149759LLU;
	int16_t x268 = INT16_MIN;
	uint64_t t55 = 5152521877LLU;

	t55 = (((x265-x266)+x267)^x268);

	if (t55 != 13325055851252398385LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x270 = UINT8_MAX;
	int64_t x271 = INT64_MAX;
	static int32_t x272 = -4;
	volatile int64_t t56 = 101695645484LL;

	t56 = (((x269-x270)+x271)^x272);

	if (t56 != -9223372036854775647LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x278 = INT16_MIN;
	int8_t x279 = INT8_MIN;
	int32_t x280 = INT32_MIN;

	t57 = (((x277-x278)+x279)^x280);

	if (t57 != -2147451136) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x281 = INT8_MIN;
	int8_t x283 = 3;
	volatile int16_t x284 = 394;

	t58 = (((x281-x282)+x283)^x284);

	if (t58 != -192) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x289 = 0U;
	static volatile uint8_t x290 = UINT8_MAX;
	int16_t x291 = -13175;
	int8_t x292 = 2;
	int32_t t59 = 1153;

	t59 = (((x289-x290)+x291)^x292);

	if (t59 != -13432) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x293 = INT16_MAX;
	volatile uint64_t x294 = 815LLU;
	volatile uint8_t x295 = UINT8_MAX;
	uint64_t x296 = 686482LLU;
	uint64_t t60 = 1375837842LLU;

	t60 = (((x293-x294)+x295)^x296);

	if (t60 != 656477LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int16_t x297 = INT16_MAX;
	uint64_t x298 = 7190401953729810LLU;
	static int64_t x299 = -1LL;
	uint64_t t61 = 130402850573218119LLU;

	t61 = (((x297-x298)+x299)^x300);

	if (t61 != 18439553675320757523LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x305 = -1;
	volatile int8_t x306 = -1;
	int64_t x307 = INT64_MAX;
	static int64_t t62 = -281641LL;

	t62 = (((x305-x306)+x307)^x308);

	if (t62 != 9223372036851176535LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x309 = 3356521688345LLU;
	int32_t x310 = INT32_MAX;
	volatile int32_t x311 = -1;
	static int64_t x312 = INT64_MIN;
	uint64_t t63 = 506080525336LLU;

	t63 = (((x309-x310)+x311)^x312);

	if (t63 != 9223375391228980505LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x313 = 1;
	volatile int64_t x316 = 998728393461373LL;
	static volatile int64_t t64 = -924875LL;

	t64 = (((x313-x314)+x315)^x316);

	if (t64 != -998728393453955LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x317 = INT8_MIN;
	uint64_t x320 = 2008679883806569LLU;
	uint64_t t65 = 610652339209250045LLU;

	t65 = (((x317-x318)+x319)^x320);

	if (t65 != 18444735393825746103LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x321 = 6238U;
	int64_t x322 = -1LL;
	int8_t x323 = -1;
	volatile uint64_t x324 = 3982426965000383935LLU;
	volatile uint64_t t66 = 2LLU;

	t66 = (((x321-x322)+x323)^x324);

	if (t66 != 3982426965000386017LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x329 = 2133885272LLU;
	int16_t x330 = INT16_MIN;
	volatile int32_t x331 = INT32_MIN;
	volatile uint64_t t67 = 1014377LLU;

	t67 = (((x329-x330)+x331)^x332);

	if (t67 != 18446744073695986002LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x334 = -5921;
	static int16_t x335 = INT16_MAX;
	static volatile uint32_t t68 = 243U;

	t68 = (((x333-x334)+x335)^x336);

	if (t68 != 645365U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x337 = -8;
	volatile int8_t x340 = INT8_MIN;
	volatile uint32_t t69 = 7624U;

	t69 = (((x337-x338)+x339)^x340);

	if (t69 != 4243776653U) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x341 = INT32_MAX;
	static volatile uint16_t x344 = 14353U;

	t70 = (((x341-x342)+x343)^x344);

	if (t70 != 2147470178) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x345 = -6;
	static uint16_t x346 = 2U;
	uint32_t x347 = 14581U;
	volatile int16_t x348 = INT16_MIN;
	uint32_t t71 = 3U;

	t71 = (((x345-x346)+x347)^x348);

	if (t71 != 4294949101U) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x350 = UINT32_MAX;
	int64_t x351 = -1LL;
	int32_t x352 = INT32_MAX;
	int64_t t72 = 11543519840013021LL;

	t72 = (((x349-x350)+x351)^x352);

	if (t72 != 546913233842910LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x354 = 7347;
	uint32_t x355 = 31U;
	uint32_t x356 = 7014U;

	t73 = (((x353-x354)+x355)^x356);

	if (t73 != 4294965259U) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x357 = INT64_MIN;
	int32_t x358 = -118992827;
	uint64_t x360 = UINT64_MAX;
	volatile uint64_t t74 = 3360468558LLU;

	t74 = (((x357-x358)+x359)^x360);

	if (t74 != 9223372036735783108LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x365 = INT64_MIN;
	static int64_t x366 = INT64_MIN;
	volatile uint16_t x367 = 10U;
	uint64_t x368 = UINT64_MAX;
	static volatile uint64_t t75 = 367131630456335LLU;

	t75 = (((x365-x366)+x367)^x368);

	if (t75 != 18446744073709551605LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x369 = -1LL;
	static int32_t x370 = INT32_MAX;
	uint8_t x371 = UINT8_MAX;
	uint32_t x372 = UINT32_MAX;
	volatile int64_t t76 = 67258179927747769LL;

	t76 = (((x369-x370)+x371)^x372);

	if (t76 != -2147483904LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x373 = 49LLU;
	static int16_t x374 = INT16_MAX;
	int32_t x375 = 20088;
	int64_t x376 = -1277589652LL;
	uint64_t t77 = 139222127688384042LLU;

	t77 = (((x373-x374)+x375)^x376);

	if (t77 != 1277577670LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x377 = 4417250964LLU;
	volatile int64_t x378 = 38306826589LL;
	int32_t x379 = INT32_MAX;
	int8_t x380 = -1;

	t78 = (((x377-x378)+x379)^x380);

	if (t78 != 31742091977LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x381 = 22U;
	volatile uint32_t x382 = UINT32_MAX;
	volatile int64_t x383 = -1LL;
	int8_t x384 = INT8_MAX;

	t79 = (((x381-x382)+x383)^x384);

	if (t79 != 105LL) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x393 = UINT64_MAX;
	static uint32_t x394 = 17432U;
	int8_t x395 = INT8_MAX;
	static uint64_t t80 = 3506790477905LLU;

	t80 = (((x393-x394)+x395)^x396);

	if (t80 != 9223372036854758502LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x397 = UINT8_MAX;
	static uint8_t x399 = 7U;
	uint8_t x400 = 5U;
	int32_t t81 = -1;

	t81 = (((x397-x398)+x399)^x400);

	if (t81 != -65278) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x401 = 1U;
	static volatile uint16_t x402 = UINT16_MAX;
	static volatile int16_t x403 = INT16_MIN;
	static volatile uint32_t t82 = 110048U;

	t82 = (((x401-x402)+x403)^x404);

	if (t82 != 98301U) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x405 = 7U;
	uint16_t x406 = 220U;
	uint64_t x407 = 180483775636181683LLU;
	int8_t x408 = -1;
	volatile uint64_t t83 = 56761502LLU;

	t83 = (((x405-x406)+x407)^x408);

	if (t83 != 18266260298073370145LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x409 = -1;
	int16_t x410 = INT16_MAX;
	static volatile uint32_t x411 = 86616969U;
	int8_t x412 = -1;
	volatile uint32_t t84 = 171268750U;

	t84 = (((x409-x410)+x411)^x412);

	if (t84 != 4208383094U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x414 = INT64_MAX;
	volatile int8_t x415 = -19;
	volatile uint64_t t85 = 1206086LLU;

	t85 = (((x413-x414)+x415)^x416);

	if (t85 != 9223372036696518348LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x417 = -1LL;
	int16_t x418 = -1;
	volatile int32_t x419 = -1;
	int8_t x420 = -1;
	volatile int64_t t86 = 21241702940LL;

	t86 = (((x417-x418)+x419)^x420);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x421 = -1;
	volatile int32_t x422 = -1;
	int64_t x423 = INT64_MAX;
	static uint8_t x424 = UINT8_MAX;

	t87 = (((x421-x422)+x423)^x424);

	if (t87 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x425 = -1LL;
	int16_t x426 = INT16_MAX;
	int32_t x427 = INT32_MAX;

	t88 = (((x425-x426)+x427)^x428);

	if (t88 != -2147450880LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x433 = -1;
	uint32_t x434 = 4060190U;
	volatile uint16_t x436 = 1209U;
	uint32_t t89 = 26607U;

	t89 = (((x433-x434)+x435)^x436);

	if (t89 != 4291893975U) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x437 = 3U;
	uint32_t x438 = UINT32_MAX;
	uint16_t x440 = 4076U;
	int64_t t90 = 15LL;

	t90 = (((x437-x438)+x439)^x440);

	if (t90 != 2891264354461LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x441 = INT16_MIN;
	int64_t x442 = -1LL;
	int64_t x443 = -5919444472103475LL;
	int64_t x444 = INT64_MIN;

	t91 = (((x441-x442)+x443)^x444);

	if (t91 != 9217452592382639566LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x445 = 128;
	volatile uint16_t x446 = 3U;
	int8_t x447 = INT8_MAX;
	int8_t x448 = INT8_MIN;
	volatile int32_t t92 = -178588867;

	t92 = (((x445-x446)+x447)^x448);

	if (t92 != -132) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x449 = UINT64_MAX;
	int8_t x450 = INT8_MIN;
	uint32_t x451 = 63600891U;
	uint16_t x452 = UINT16_MAX;
	volatile uint64_t t93 = 0LLU;

	t93 = (((x449-x450)+x451)^x452);

	if (t93 != 63604357LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x453 = INT8_MIN;
	volatile uint16_t x455 = UINT16_MAX;
	uint64_t x456 = 875952271884LLU;

	t94 = (((x453-x454)+x455)^x456);

	if (t94 != 875952213364LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x457 = INT16_MIN;
	volatile int64_t x458 = INT64_MIN;
	int8_t x459 = INT8_MIN;
	uint16_t x460 = UINT16_MAX;

	t95 = (((x457-x458)+x459)^x460);

	if (t95 != 9223372036854743167LL) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int16_t x462 = 4;
	uint64_t x463 = 6062129123356LLU;
	volatile int8_t x464 = 0;
	volatile uint64_t t96 = 51367009065LLU;

	t96 = (((x461-x462)+x463)^x464);

	if (t96 != 6062129123183LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x465 = 159226666202261975LL;
	volatile int32_t x466 = -1;

	t97 = (((x465-x466)+x467)^x468);

	if (t97 != -159226666202246372LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x470 = 66;
	uint32_t x471 = 29934U;
	volatile uint32_t t98 = 1932U;

	t98 = (((x469-x470)+x471)^x472);

	if (t98 != 2147388244U) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x473 = 29995LLU;
	uint32_t x475 = 0U;
	int32_t x476 = -1;

	t99 = (((x473-x474)+x475)^x476);

	if (t99 != 18446744073709521747LLU) { NG(); } else { ; }
	
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

