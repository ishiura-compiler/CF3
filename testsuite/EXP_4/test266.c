#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x7 = -2953518490704835LL;
uint64_t t3 = 0LLU;
static int32_t t4 = 971830;
static volatile int32_t t5 = -960255265;
uint8_t x38 = 83U;
static int32_t x39 = -1;
volatile uint8_t x66 = 1U;
int32_t x109 = INT32_MAX;
int16_t x110 = -12313;
uint64_t x111 = UINT64_MAX;
int64_t x112 = -1LL;
volatile int32_t t13 = -26972;
int8_t x131 = 2;
static int64_t x132 = -60668981LL;
volatile int16_t x134 = -2;
volatile int32_t t16 = 103792;
int16_t x139 = 1;
uint8_t x152 = 1U;
volatile int32_t t19 = -305340;
uint32_t x161 = UINT32_MAX;
static volatile uint16_t x168 = UINT16_MAX;
static volatile uint64_t x184 = 2267LLU;
uint16_t x186 = 1U;
volatile int16_t x194 = INT16_MAX;
uint64_t x196 = 10094989427649LLU;
int8_t x208 = INT8_MIN;
uint8_t x279 = UINT8_MAX;
uint64_t x280 = 12489183153LLU;
static volatile int16_t x290 = -1;
uint8_t x291 = UINT8_MAX;
int8_t x293 = 1;
uint32_t x296 = 891724769U;
int32_t t34 = 13653;
static int32_t x307 = INT32_MAX;
volatile int64_t x311 = INT64_MIN;
static int32_t x318 = INT32_MIN;
volatile int32_t x320 = 627;
uint64_t t39 = 6459949LLU;
int32_t x342 = INT32_MIN;
int8_t x374 = INT8_MIN;
uint32_t x381 = 5416U;
int8_t x402 = 6;
volatile uint32_t x414 = UINT32_MAX;
volatile uint32_t x423 = 580490U;
int32_t t52 = INT32_MAX;
uint32_t x441 = UINT32_MAX;
uint32_t x464 = UINT32_MAX;
int32_t t55 = 31939;
int64_t x482 = -1LL;
volatile uint8_t x483 = 74U;
uint8_t x492 = UINT8_MAX;
volatile int32_t t58 = -1;
static uint16_t x520 = UINT16_MAX;
int32_t x534 = -1;
uint32_t x535 = UINT32_MAX;
int64_t x548 = INT64_MIN;
static int8_t x551 = -1;
static int16_t x552 = INT16_MIN;
uint8_t x557 = UINT8_MAX;
uint16_t x560 = 7U;
static int64_t x562 = INT64_MAX;
uint32_t t67 = 9377U;
uint32_t x578 = 37533956U;
static int16_t x592 = -181;
static int32_t x597 = 709116;
int16_t x599 = INT16_MAX;
int8_t x606 = -1;
volatile int8_t x608 = -1;
int32_t x619 = 760973;
int64_t x621 = 16098360LL;
static int8_t x635 = -1;
int16_t x641 = 0;
static int16_t x657 = INT16_MAX;
int16_t x679 = INT16_MAX;
volatile uint64_t t81 = 615964515985LLU;
static uint16_t x694 = 806U;
int32_t x695 = 9089;
int16_t x700 = -138;
uint32_t x711 = UINT32_MAX;
static int16_t x713 = 0;
static int32_t x724 = 0;
int64_t x731 = -32528356431758135LL;
uint8_t x748 = 0U;
uint8_t x753 = 0U;
uint16_t x768 = 6U;
uint32_t x773 = 150U;
int32_t x780 = -1;
int16_t x781 = 1421;
static volatile int8_t x785 = 6;
int32_t t98 = -390;
int32_t x792 = INT32_MIN;


void f0(void) {
	int16_t x1 = INT16_MAX;
	int32_t x2 = -1;
	uint64_t x3 = UINT64_MAX;
	int16_t x4 = INT16_MIN;
	int32_t t0 = -12756194;

	t0 = (x1<<(x2==(x3-x4)));

	if (t0 != 32767) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 0U;
	int16_t x6 = INT16_MAX;
	int16_t x8 = -700;
	volatile int32_t t1 = 933858;

	t1 = (x5<<(x6==(x7-x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MAX;
	static int16_t x10 = -1;
	static int16_t x11 = INT16_MIN;
	int8_t x12 = 11;
	static volatile int64_t t2 = INT64_MAX;

	t2 = (x9<<(x10==(x11-x12)));

	if (t2 != INT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 1005309522462LLU;
	static int64_t x14 = 441878225399511487LL;
	static volatile int8_t x15 = -1;
	int64_t x16 = INT64_MIN;

	t3 = (x13<<(x14==(x15-x16)));

	if (t3 != 1005309522462LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x25 = UINT16_MAX;
	static uint8_t x26 = 15U;
	int16_t x27 = 498;
	static uint8_t x28 = 56U;

	t4 = (x25<<(x26==(x27-x28)));

	if (t4 != 65535) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint16_t x33 = 108U;
	static int32_t x34 = -41;
	int64_t x35 = -19284474LL;
	volatile int32_t x36 = INT32_MIN;

	t5 = (x33<<(x34==(x35-x36)));

	if (t5 != 108) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x37 = INT64_MAX;
	int32_t x40 = INT32_MAX;
	static volatile int64_t t6 = INT64_MAX;

	t6 = (x37<<(x38==(x39-x40)));

	if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x57 = UINT64_MAX;
	int16_t x58 = INT16_MIN;
	volatile int64_t x59 = INT64_MIN;
	int16_t x60 = -1;
	volatile uint64_t t7 = UINT64_MAX;

	t7 = (x57<<(x58==(x59-x60)));

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x61 = UINT16_MAX;
	static int32_t x62 = -29583673;
	int8_t x63 = 15;
	uint8_t x64 = UINT8_MAX;
	volatile int32_t t8 = 1;

	t8 = (x61<<(x62==(x63-x64)));

	if (t8 != 65535) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x65 = INT64_MAX;
	volatile int8_t x67 = -1;
	uint8_t x68 = 42U;
	int64_t t9 = INT64_MAX;

	t9 = (x65<<(x66==(x67-x68)));

	if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x69 = 458U;
	static int8_t x70 = INT8_MIN;
	volatile int32_t x71 = INT32_MIN;
	int16_t x72 = INT16_MIN;
	static volatile int32_t t10 = -172419938;

	t10 = (x69<<(x70==(x71-x72)));

	if (t10 != 458) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x97 = UINT16_MAX;
	static uint64_t x98 = 44215607LLU;
	uint32_t x99 = 2932182U;
	static int32_t x100 = INT32_MIN;
	volatile int32_t t11 = -1;

	t11 = (x97<<(x98==(x99-x100)));

	if (t11 != 65535) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t t12 = INT32_MAX;

	t12 = (x109<<(x110==(x111-x112)));

	if (t12 != INT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x121 = 171U;
	uint64_t x122 = UINT64_MAX;
	uint32_t x123 = 1332444U;
	volatile uint64_t x124 = 485668549862LLU;

	t13 = (x121<<(x122==(x123-x124)));

	if (t13 != 171) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x125 = 5U;
	uint16_t x126 = 145U;
	int64_t x127 = INT64_MIN;
	volatile int16_t x128 = -7;
	static volatile uint32_t t14 = 1459488U;

	t14 = (x125<<(x126==(x127-x128)));

	if (t14 != 5U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x129 = INT16_MAX;
	static int64_t x130 = 200730776125LL;
	int32_t t15 = -5910702;

	t15 = (x129<<(x130==(x131-x132)));

	if (t15 != 32767) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x133 = 64U;
	static int8_t x135 = -21;
	static int32_t x136 = -1;

	t16 = (x133<<(x134==(x135-x136)));

	if (t16 != 64) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x137 = 1U;
	uint16_t x138 = 348U;
	volatile int16_t x140 = -2030;
	int32_t t17 = 164863849;

	t17 = (x137<<(x138==(x139-x140)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x149 = INT64_MAX;
	int32_t x150 = INT32_MIN;
	volatile uint8_t x151 = UINT8_MAX;
	volatile int64_t t18 = INT64_MAX;

	t18 = (x149<<(x150==(x151-x152)));

	if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x153 = INT8_MAX;
	static uint8_t x154 = UINT8_MAX;
	uint32_t x155 = 52081U;
	int8_t x156 = 3;

	t19 = (x153<<(x154==(x155-x156)));

	if (t19 != 127) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x162 = -1;
	volatile uint16_t x163 = 14395U;
	int16_t x164 = INT16_MAX;
	volatile uint32_t t20 = UINT32_MAX;

	t20 = (x161<<(x162==(x163-x164)));

	if (t20 != UINT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x165 = INT8_MAX;
	uint8_t x166 = 48U;
	int16_t x167 = -1;
	volatile int32_t t21 = -274;

	t21 = (x165<<(x166==(x167-x168)));

	if (t21 != 127) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x169 = UINT8_MAX;
	uint32_t x170 = 1057816448U;
	int32_t x171 = -1;
	int32_t x172 = INT32_MAX;
	static int32_t t22 = -764;

	t22 = (x169<<(x170==(x171-x172)));

	if (t22 != 255) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x181 = 22U;
	volatile uint16_t x182 = 1U;
	uint64_t x183 = 45951694771LLU;
	volatile int32_t t23 = -13;

	t23 = (x181<<(x182==(x183-x184)));

	if (t23 != 22) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x185 = UINT8_MAX;
	volatile int64_t x187 = 298741274954472LL;
	int32_t x188 = INT32_MAX;
	volatile int32_t t24 = -62868;

	t24 = (x185<<(x186==(x187-x188)));

	if (t24 != 255) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x189 = UINT16_MAX;
	uint8_t x190 = 19U;
	int8_t x191 = INT8_MIN;
	uint16_t x192 = 466U;
	volatile int32_t t25 = 108969591;

	t25 = (x189<<(x190==(x191-x192)));

	if (t25 != 65535) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x193 = 965;
	volatile uint32_t x195 = 528461U;
	volatile int32_t t26 = 1027412;

	t26 = (x193<<(x194==(x195-x196)));

	if (t26 != 965) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x201 = 288;
	int8_t x202 = 6;
	int8_t x203 = INT8_MAX;
	uint16_t x204 = 3U;
	volatile int32_t t27 = 15219;

	t27 = (x201<<(x202==(x203-x204)));

	if (t27 != 288) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x205 = 219U;
	uint8_t x206 = 1U;
	int64_t x207 = -1LL;
	int32_t t28 = -16226;

	t28 = (x205<<(x206==(x207-x208)));

	if (t28 != 219) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x241 = UINT32_MAX;
	int32_t x242 = 890215;
	int64_t x243 = 15211533205594643LL;
	uint16_t x244 = 171U;
	uint32_t t29 = UINT32_MAX;

	t29 = (x241<<(x242==(x243-x244)));

	if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x249 = 14741018U;
	static int64_t x250 = 5LL;
	int8_t x251 = INT8_MAX;
	int16_t x252 = INT16_MIN;
	static uint32_t t30 = 1807589U;

	t30 = (x249<<(x250==(x251-x252)));

	if (t30 != 14741018U) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x257 = INT64_MAX;
	static int8_t x258 = -1;
	int8_t x259 = INT8_MIN;
	static uint64_t x260 = 56649731018LLU;
	static int64_t t31 = INT64_MAX;

	t31 = (x257<<(x258==(x259-x260)));

	if (t31 != INT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x277 = INT64_MAX;
	int64_t x278 = INT64_MAX;
	volatile int64_t t32 = INT64_MAX;

	t32 = (x277<<(x278==(x279-x280)));

	if (t32 != INT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x289 = 266268057034LL;
	static int8_t x292 = INT8_MAX;
	volatile int64_t t33 = -2674LL;

	t33 = (x289<<(x290==(x291-x292)));

	if (t33 != 266268057034LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x294 = 16384961759LLU;
	int64_t x295 = -165LL;

	t34 = (x293<<(x294==(x295-x296)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x297 = UINT16_MAX;
	int64_t x298 = 10280369LL;
	static uint64_t x299 = 4653338776LLU;
	volatile uint64_t x300 = UINT64_MAX;
	int32_t t35 = -125627;

	t35 = (x297<<(x298==(x299-x300)));

	if (t35 != 65535) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x305 = 4U;
	uint16_t x306 = UINT16_MAX;
	int64_t x308 = INT64_MAX;
	static int32_t t36 = 46432725;

	t36 = (x305<<(x306==(x307-x308)));

	if (t36 != 4) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x309 = UINT16_MAX;
	volatile int32_t x310 = -1;
	int16_t x312 = -1;
	volatile int32_t t37 = 83365;

	t37 = (x309<<(x310==(x311-x312)));

	if (t37 != 65535) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x313 = UINT8_MAX;
	int16_t x314 = -6;
	int16_t x315 = INT16_MAX;
	int64_t x316 = 20980971200313LL;
	static volatile int32_t t38 = -10;

	t38 = (x313<<(x314==(x315-x316)));

	if (t38 != 255) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x317 = 12747586212402281LLU;
	int32_t x319 = -489228;

	t39 = (x317<<(x318==(x319-x320)));

	if (t39 != 12747586212402281LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x321 = 1928458493943LL;
	uint32_t x322 = 29526U;
	int64_t x323 = -5551LL;
	int64_t x324 = -259325LL;
	int64_t t40 = 437830123929145LL;

	t40 = (x321<<(x322==(x323-x324)));

	if (t40 != 1928458493943LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x329 = 3386977LL;
	uint8_t x330 = 5U;
	volatile int8_t x331 = -7;
	int16_t x332 = -1;
	static volatile int64_t t41 = -390457620855033LL;

	t41 = (x329<<(x330==(x331-x332)));

	if (t41 != 3386977LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x341 = 1;
	int8_t x343 = -13;
	int16_t x344 = INT16_MAX;
	int32_t t42 = -677528;

	t42 = (x341<<(x342==(x343-x344)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x345 = INT16_MAX;
	int32_t x346 = -67;
	int8_t x347 = INT8_MIN;
	int32_t x348 = 206780217;
	int32_t t43 = -477;

	t43 = (x345<<(x346==(x347-x348)));

	if (t43 != 32767) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x349 = UINT16_MAX;
	uint64_t x350 = 248153229021LLU;
	uint64_t x351 = UINT64_MAX;
	int64_t x352 = 3773028053254749LL;
	volatile int32_t t44 = -711786;

	t44 = (x349<<(x350==(x351-x352)));

	if (t44 != 65535) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x357 = 240U;
	int16_t x358 = INT16_MIN;
	int16_t x359 = INT16_MIN;
	static int32_t x360 = INT32_MIN;
	volatile uint32_t t45 = 14507153U;

	t45 = (x357<<(x358==(x359-x360)));

	if (t45 != 240U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x365 = 420275593LL;
	int64_t x366 = 11LL;
	static volatile int32_t x367 = INT32_MIN;
	int64_t x368 = INT64_MIN;
	volatile int64_t t46 = 156542716249LL;

	t46 = (x365<<(x366==(x367-x368)));

	if (t46 != 420275593LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x373 = UINT64_MAX;
	volatile uint16_t x375 = UINT16_MAX;
	uint64_t x376 = 5216366121641381LLU;
	volatile uint64_t t47 = UINT64_MAX;

	t47 = (x373<<(x374==(x375-x376)));

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x382 = 2U;
	int64_t x383 = -15559775377066321LL;
	volatile int32_t x384 = INT32_MAX;
	uint32_t t48 = 726U;

	t48 = (x381<<(x382==(x383-x384)));

	if (t48 != 5416U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x401 = INT16_MAX;
	int64_t x403 = -1LL;
	static int16_t x404 = -1;
	int32_t t49 = -1012705445;

	t49 = (x401<<(x402==(x403-x404)));

	if (t49 != 32767) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x405 = 7687LLU;
	int16_t x406 = -1;
	int16_t x407 = 37;
	uint32_t x408 = 12174U;
	static volatile uint64_t t50 = 3336478632754730116LLU;

	t50 = (x405<<(x406==(x407-x408)));

	if (t50 != 7687LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x413 = UINT16_MAX;
	int8_t x415 = 3;
	int8_t x416 = INT8_MIN;
	volatile int32_t t51 = -570318411;

	t51 = (x413<<(x414==(x415-x416)));

	if (t51 != 65535) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x421 = INT32_MAX;
	uint16_t x422 = 1U;
	int8_t x424 = INT8_MIN;

	t52 = (x421<<(x422==(x423-x424)));

	if (t52 != INT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x442 = INT64_MIN;
	uint16_t x443 = UINT16_MAX;
	int8_t x444 = INT8_MIN;
	static volatile uint32_t t53 = UINT32_MAX;

	t53 = (x441<<(x442==(x443-x444)));

	if (t53 != UINT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x461 = INT32_MAX;
	int32_t x462 = -7;
	volatile uint64_t x463 = UINT64_MAX;
	static int32_t t54 = INT32_MAX;

	t54 = (x461<<(x462==(x463-x464)));

	if (t54 != INT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x465 = UINT16_MAX;
	int64_t x466 = INT64_MAX;
	uint8_t x467 = UINT8_MAX;
	int64_t x468 = 41740LL;

	t55 = (x465<<(x466==(x467-x468)));

	if (t55 != 65535) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x477 = UINT8_MAX;
	static uint8_t x478 = 6U;
	int32_t x479 = INT32_MIN;
	uint32_t x480 = UINT32_MAX;
	volatile int32_t t56 = -502792;

	t56 = (x477<<(x478==(x479-x480)));

	if (t56 != 255) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x481 = UINT8_MAX;
	volatile int16_t x484 = INT16_MIN;
	static int32_t t57 = 723982000;

	t57 = (x481<<(x482==(x483-x484)));

	if (t57 != 255) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x489 = 12U;
	int64_t x490 = 2507458739312149LL;
	uint32_t x491 = UINT32_MAX;

	t58 = (x489<<(x490==(x491-x492)));

	if (t58 != 12) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x493 = 2278273345812LLU;
	uint16_t x494 = UINT16_MAX;
	int64_t x495 = 6LL;
	int8_t x496 = 14;
	uint64_t t59 = 2LLU;

	t59 = (x493<<(x494==(x495-x496)));

	if (t59 != 2278273345812LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x505 = 91U;
	static int64_t x506 = -39426LL;
	uint32_t x507 = 575U;
	uint64_t x508 = UINT64_MAX;
	volatile int32_t t60 = -133935225;

	t60 = (x505<<(x506==(x507-x508)));

	if (t60 != 91) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x517 = INT8_MAX;
	volatile uint32_t x518 = UINT32_MAX;
	volatile int8_t x519 = INT8_MAX;
	static volatile int32_t t61 = -588883386;

	t61 = (x517<<(x518==(x519-x520)));

	if (t61 != 127) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int8_t x529 = INT8_MAX;
	static volatile int8_t x530 = -1;
	static uint16_t x531 = 8878U;
	volatile int32_t x532 = 389040;
	volatile int32_t t62 = 569056;

	t62 = (x529<<(x530==(x531-x532)));

	if (t62 != 127) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x533 = 73U;
	int32_t x536 = INT32_MAX;
	uint32_t t63 = 3344202U;

	t63 = (x533<<(x534==(x535-x536)));

	if (t63 != 73U) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x545 = 2142466367585LLU;
	int16_t x546 = INT16_MIN;
	int16_t x547 = -403;
	uint64_t t64 = 30051074512LLU;

	t64 = (x545<<(x546==(x547-x548)));

	if (t64 != 2142466367585LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x549 = 4U;
	int64_t x550 = -49784LL;
	volatile int32_t t65 = 418135302;

	t65 = (x549<<(x550==(x551-x552)));

	if (t65 != 4) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x558 = INT8_MIN;
	int16_t x559 = INT16_MIN;
	int32_t t66 = -74042694;

	t66 = (x557<<(x558==(x559-x560)));

	if (t66 != 255) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x561 = 215017U;
	uint32_t x563 = 188U;
	static uint8_t x564 = UINT8_MAX;

	t67 = (x561<<(x562==(x563-x564)));

	if (t67 != 215017U) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x565 = 25090624U;
	static volatile uint8_t x566 = 2U;
	volatile uint32_t x567 = 374057200U;
	int16_t x568 = -1;
	static uint32_t t68 = 43U;

	t68 = (x565<<(x566==(x567-x568)));

	if (t68 != 25090624U) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x577 = 7U;
	volatile int8_t x579 = 0;
	volatile int8_t x580 = -36;
	int32_t t69 = -6;

	t69 = (x577<<(x578==(x579-x580)));

	if (t69 != 7) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x589 = 22114171U;
	volatile uint64_t x590 = 3949LLU;
	static int32_t x591 = INT32_MIN;
	static volatile uint32_t t70 = 2365U;

	t70 = (x589<<(x590==(x591-x592)));

	if (t70 != 22114171U) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x598 = -1LL;
	uint32_t x600 = 653681U;
	int32_t t71 = 5;

	t71 = (x597<<(x598==(x599-x600)));

	if (t71 != 709116) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x605 = 71;
	int32_t x607 = INT32_MIN;
	int32_t t72 = -5744;

	t72 = (x605<<(x606==(x607-x608)));

	if (t72 != 71) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x617 = 7784932U;
	int64_t x618 = INT64_MIN;
	static uint16_t x620 = 2650U;
	uint32_t t73 = 88U;

	t73 = (x617<<(x618==(x619-x620)));

	if (t73 != 7784932U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x622 = 2;
	volatile int8_t x623 = INT8_MIN;
	int16_t x624 = INT16_MIN;
	volatile int64_t t74 = 868904429LL;

	t74 = (x621<<(x622==(x623-x624)));

	if (t74 != 16098360LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x629 = UINT64_MAX;
	int8_t x630 = INT8_MAX;
	int32_t x631 = INT32_MAX;
	int64_t x632 = -3752093962867LL;
	volatile uint64_t t75 = UINT64_MAX;

	t75 = (x629<<(x630==(x631-x632)));

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x633 = 0;
	volatile int16_t x634 = INT16_MIN;
	uint8_t x636 = UINT8_MAX;
	int32_t t76 = 50;

	t76 = (x633<<(x634==(x635-x636)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x637 = INT32_MAX;
	volatile int16_t x638 = -1;
	int8_t x639 = -2;
	int64_t x640 = -420090150627324LL;
	volatile int32_t t77 = INT32_MAX;

	t77 = (x637<<(x638==(x639-x640)));

	if (t77 != INT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x642 = INT16_MIN;
	uint64_t x643 = 532767176LLU;
	volatile int16_t x644 = INT16_MIN;
	volatile int32_t t78 = -19630357;

	t78 = (x641<<(x642==(x643-x644)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x658 = 53;
	volatile int8_t x659 = 13;
	int8_t x660 = -1;
	int32_t t79 = -23498003;

	t79 = (x657<<(x658==(x659-x660)));

	if (t79 != 32767) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x669 = 10385;
	volatile int64_t x670 = 19LL;
	uint16_t x671 = 12U;
	uint8_t x672 = 1U;
	int32_t t80 = 1792864;

	t80 = (x669<<(x670==(x671-x672)));

	if (t80 != 10385) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x677 = 144341502LLU;
	static volatile int8_t x678 = INT8_MAX;
	static int32_t x680 = 9;

	t81 = (x677<<(x678==(x679-x680)));

	if (t81 != 144341502LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x681 = UINT64_MAX;
	uint8_t x682 = 20U;
	uint64_t x683 = UINT64_MAX;
	volatile uint64_t x684 = 2085188826165516827LLU;
	static volatile uint64_t t82 = UINT64_MAX;

	t82 = (x681<<(x682==(x683-x684)));

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint32_t x689 = 118828U;
	int64_t x690 = -1LL;
	uint8_t x691 = 1U;
	uint16_t x692 = UINT16_MAX;
	static uint32_t t83 = 475094U;

	t83 = (x689<<(x690==(x691-x692)));

	if (t83 != 118828U) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x693 = 221336648953449429LLU;
	uint32_t x696 = 115644U;
	volatile uint64_t t84 = 85084520175169579LLU;

	t84 = (x693<<(x694==(x695-x696)));

	if (t84 != 221336648953449429LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x697 = INT8_MAX;
	volatile uint8_t x698 = 9U;
	int64_t x699 = INT64_MIN;
	volatile int32_t t85 = -541062352;

	t85 = (x697<<(x698==(x699-x700)));

	if (t85 != 127) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x709 = 0LL;
	int32_t x710 = 22187;
	volatile int8_t x712 = INT8_MAX;
	volatile int64_t t86 = -14279515880LL;

	t86 = (x709<<(x710==(x711-x712)));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int64_t x714 = -1LL;
	int8_t x715 = INT8_MAX;
	int8_t x716 = INT8_MAX;
	int32_t t87 = 884553;

	t87 = (x713<<(x714==(x715-x716)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x721 = INT64_MAX;
	int16_t x722 = -1;
	uint8_t x723 = 16U;
	volatile int64_t t88 = INT64_MAX;

	t88 = (x721<<(x722==(x723-x724)));

	if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x725 = 45463612LL;
	volatile uint8_t x726 = 2U;
	int8_t x727 = INT8_MIN;
	int16_t x728 = INT16_MIN;
	volatile int64_t t89 = -110LL;

	t89 = (x725<<(x726==(x727-x728)));

	if (t89 != 45463612LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x729 = 32063958630599159LL;
	uint8_t x730 = 27U;
	volatile int8_t x732 = INT8_MIN;
	volatile int64_t t90 = 132265307898LL;

	t90 = (x729<<(x730==(x731-x732)));

	if (t90 != 32063958630599159LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x741 = 11869;
	uint16_t x742 = UINT16_MAX;
	int16_t x743 = -1;
	int64_t x744 = -6994956969LL;
	int32_t t91 = 3;

	t91 = (x741<<(x742==(x743-x744)));

	if (t91 != 11869) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x745 = 20421164;
	uint32_t x746 = 766U;
	uint8_t x747 = UINT8_MAX;
	static int32_t t92 = -2;

	t92 = (x745<<(x746==(x747-x748)));

	if (t92 != 20421164) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x754 = INT32_MAX;
	static uint64_t x755 = UINT64_MAX;
	int32_t x756 = INT32_MAX;
	int32_t t93 = 805560094;

	t93 = (x753<<(x754==(x755-x756)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x765 = INT32_MAX;
	uint16_t x766 = 1U;
	int32_t x767 = -1;
	int32_t t94 = INT32_MAX;

	t94 = (x765<<(x766==(x767-x768)));

	if (t94 != INT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x774 = 1;
	int32_t x775 = -1;
	volatile int64_t x776 = 435206183561964045LL;
	volatile uint32_t t95 = 7259210U;

	t95 = (x773<<(x774==(x775-x776)));

	if (t95 != 150U) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x777 = 368U;
	int16_t x778 = INT16_MIN;
	static uint64_t x779 = UINT64_MAX;
	volatile int32_t t96 = -59;

	t96 = (x777<<(x778==(x779-x780)));

	if (t96 != 368) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x782 = 1194U;
	int8_t x783 = 1;
	int64_t x784 = INT64_MAX;
	volatile int32_t t97 = -325;

	t97 = (x781<<(x782==(x783-x784)));

	if (t97 != 1421) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int16_t x786 = 8951;
	int8_t x787 = -1;
	int8_t x788 = INT8_MIN;

	t98 = (x785<<(x786==(x787-x788)));

	if (t98 != 6) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x789 = 10267149125LLU;
	int16_t x790 = 14;
	uint64_t x791 = 2764235887063985LLU;
	volatile uint64_t t99 = 21605550988LLU;

	t99 = (x789<<(x790==(x791-x792)));

	if (t99 != 10267149125LLU) { NG(); } else { ; }
	
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

