#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x2 = 5LLU;
static int32_t x17 = -1;
static int16_t x21 = -1;
static volatile int32_t x22 = 820111;
int8_t x27 = INT8_MIN;
volatile int32_t x34 = -1956;
static int32_t x35 = INT32_MIN;
int8_t x36 = 0;
static volatile int32_t t7 = 7603;
int16_t x57 = INT16_MIN;
static volatile int32_t t12 = 63;
int32_t t13 = -1454;
int8_t x71 = 1;
uint32_t x72 = UINT32_MAX;
volatile uint32_t t15 = UINT32_MAX;
volatile int8_t x73 = INT8_MIN;
int64_t x78 = INT64_MIN;
volatile int32_t t17 = 374140;
volatile uint64_t x95 = 2206024641LLU;
volatile int32_t t21 = -402857;
int64_t x101 = INT64_MAX;
static int64_t x104 = -1LL;
static uint8_t x109 = UINT8_MAX;
int16_t x116 = INT16_MAX;
volatile uint64_t t24 = 313988102575999LLU;
volatile uint64_t t26 = 75LLU;
static volatile int64_t x128 = 26598219162LL;
int64_t x135 = -1LL;
int8_t x136 = -1;
int32_t x137 = -1;
static volatile int64_t x146 = INT64_MAX;
int8_t x147 = -3;
uint16_t x155 = UINT16_MAX;
volatile uint32_t x158 = UINT32_MAX;
static int64_t x159 = INT64_MIN;
int8_t x160 = 0;
static int64_t t34 = -10151077LL;
int16_t x167 = -10;
int32_t t35 = 1100;
volatile uint32_t t36 = 6430U;
int8_t x173 = INT8_MIN;
volatile int32_t t39 = -11358670;
int8_t x193 = -23;
int32_t x202 = 620977922;
uint8_t x205 = 1U;
int8_t x207 = -34;
int32_t x208 = 3;
static uint8_t x226 = UINT8_MAX;
volatile int64_t x229 = -64026042LL;
int8_t x240 = INT8_MIN;
volatile int8_t x242 = INT8_MIN;
int8_t x251 = INT8_MIN;
int16_t x252 = INT16_MIN;
uint32_t x261 = 378693U;
volatile int64_t t53 = 109LL;
int64_t x273 = -359LL;
uint8_t x279 = 2U;
int32_t x285 = INT32_MIN;
volatile int64_t x289 = INT64_MIN;
volatile int64_t t59 = 921192929772629LL;
volatile uint32_t t60 = 381U;
int32_t x299 = -1336;
int32_t x301 = INT32_MIN;
int8_t x320 = INT8_MIN;
uint32_t x326 = UINT32_MAX;
int32_t x334 = INT32_MIN;
uint32_t x337 = 40270U;
int16_t x339 = INT16_MIN;
int64_t x340 = -1991154543LL;
static volatile int32_t t69 = 5677618;
static int32_t x354 = -3085;
uint16_t x355 = 302U;
static uint16_t x362 = UINT16_MAX;
uint64_t x373 = 3251493351810LLU;
uint32_t x378 = UINT32_MAX;
uint32_t x379 = 58781453U;
static uint16_t x408 = 164U;
volatile uint64_t t80 = 157038496590534LLU;
uint16_t x419 = 104U;
int16_t x422 = 174;
int32_t x423 = INT32_MAX;
int32_t x437 = -1;
int8_t x448 = -7;
volatile uint16_t x450 = UINT16_MAX;
int8_t x454 = 0;
volatile int32_t x455 = -1408;
static volatile uint32_t t90 = 3U;
int32_t x473 = INT32_MAX;
static int8_t x474 = 3;
static volatile uint16_t x484 = 1U;
int8_t x485 = -1;
static int16_t x498 = INT16_MIN;
static uint64_t x506 = 11075765677194LLU;
uint32_t t97 = 41478025U;
uint32_t x513 = 45250U;
int8_t x516 = INT8_MIN;


void f0(void) {
	int32_t x1 = -1;
	static int64_t x3 = -800069214372LL;
	volatile int8_t x4 = -2;
	volatile int64_t t0 = 6174LL;

	t0 = (((x1==x2)^x3)*x4);

	if (t0 != 1600138428744LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x5 = UINT32_MAX;
	int8_t x6 = 0;
	int16_t x7 = INT16_MIN;
	int8_t x8 = INT8_MIN;
	volatile int32_t t1 = -24;

	t1 = (((x5==x6)^x7)*x8);

	if (t1 != 4194304) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	int32_t x10 = -10039;
	int16_t x11 = INT16_MIN;
	int8_t x12 = INT8_MAX;
	static volatile int32_t t2 = 2935;

	t2 = (((x9==x10)^x11)*x12);

	if (t2 != -4161536) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x18 = 268280149U;
	uint32_t x19 = 10U;
	int32_t x20 = INT32_MIN;
	uint32_t t3 = 8118U;

	t3 = (((x17==x18)^x19)*x20);

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x23 = -1LL;
	int8_t x24 = -19;
	volatile int64_t t4 = 278LL;

	t4 = (((x21==x22)^x23)*x24);

	if (t4 != 19LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = 132673LL;
	int32_t x26 = INT32_MIN;
	volatile int8_t x28 = -1;
	int32_t t5 = 33348811;

	t5 = (((x25==x26)^x27)*x28);

	if (t5 != 128) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x29 = UINT64_MAX;
	int8_t x30 = -1;
	int32_t x31 = -1;
	int8_t x32 = -1;
	volatile int32_t t6 = -4941675;

	t6 = (((x29==x30)^x31)*x32);

	if (t6 != 2) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = INT16_MIN;

	t7 = (((x33==x34)^x35)*x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x41 = 124U;
	int8_t x42 = INT8_MIN;
	static volatile uint8_t x43 = 9U;
	uint16_t x44 = 0U;
	int32_t t8 = -103650;

	t8 = (((x41==x42)^x43)*x44);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x45 = INT16_MIN;
	static int8_t x46 = -3;
	uint16_t x47 = 6U;
	static int8_t x48 = INT8_MIN;
	static volatile int32_t t9 = -1221042;

	t9 = (((x45==x46)^x47)*x48);

	if (t9 != -768) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x49 = 25U;
	int64_t x50 = INT64_MIN;
	int64_t x51 = 1LL;
	int64_t x52 = -1258867681228LL;
	int64_t t10 = -14041860186081471LL;

	t10 = (((x49==x50)^x51)*x52);

	if (t10 != -1258867681228LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x53 = -1LL;
	int8_t x54 = -1;
	static int32_t x55 = 7992532;
	int16_t x56 = -1;
	static volatile int32_t t11 = 9313524;

	t11 = (((x53==x54)^x55)*x56);

	if (t11 != -7992533) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x58 = -6305282305763183LL;
	static int8_t x59 = INT8_MIN;
	int16_t x60 = -653;

	t12 = (((x57==x58)^x59)*x60);

	if (t12 != 83584) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x61 = INT32_MIN;
	int32_t x62 = INT32_MIN;
	volatile int8_t x63 = 3;
	uint8_t x64 = 1U;

	t13 = (((x61==x62)^x63)*x64);

	if (t13 != 2) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int32_t x65 = -1;
	static int64_t x66 = -1198355896844753LL;
	uint8_t x67 = UINT8_MAX;
	volatile uint64_t x68 = UINT64_MAX;
	static volatile uint64_t t14 = 75651322605603149LLU;

	t14 = (((x65==x66)^x67)*x68);

	if (t14 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x69 = 2977526947836956100LLU;
	static uint8_t x70 = 10U;

	t15 = (((x69==x70)^x71)*x72);

	if (t15 != UINT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x74 = 1;
	uint8_t x75 = UINT8_MAX;
	uint64_t x76 = 13704940255303LLU;
	static volatile uint64_t t16 = 11525763202168948LLU;

	t16 = (((x73==x74)^x75)*x76);

	if (t16 != 3494759765102265LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x77 = INT16_MAX;
	uint16_t x79 = 8902U;
	uint16_t x80 = 1U;

	t17 = (((x77==x78)^x79)*x80);

	if (t17 != 8902) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x81 = INT8_MIN;
	uint64_t x82 = UINT64_MAX;
	int32_t x83 = -1;
	int16_t x84 = -1;
	int32_t t18 = 1067503220;

	t18 = (((x81==x82)^x83)*x84);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x85 = INT64_MIN;
	volatile int8_t x86 = 0;
	volatile uint32_t x87 = 4059134U;
	int32_t x88 = INT32_MAX;
	volatile uint32_t t19 = 512806618U;

	t19 = (((x85==x86)^x87)*x88);

	if (t19 != 4290908162U) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x93 = -309344LL;
	static volatile int64_t x94 = -1LL;
	static uint64_t x96 = UINT64_MAX;
	uint64_t t20 = 102796272956LLU;

	t20 = (((x93==x94)^x95)*x96);

	if (t20 != 18446744071503526975LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x97 = INT8_MIN;
	static int32_t x98 = INT32_MIN;
	volatile int8_t x99 = INT8_MIN;
	static volatile int32_t x100 = 680;

	t21 = (((x97==x98)^x99)*x100);

	if (t21 != -87040) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x102 = INT16_MAX;
	uint8_t x103 = 1U;
	int64_t t22 = -1LL;

	t22 = (((x101==x102)^x103)*x104);

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x110 = 23408U;
	int16_t x111 = 1970;
	volatile uint16_t x112 = UINT16_MAX;
	static int32_t t23 = 0;

	t23 = (((x109==x110)^x111)*x112);

	if (t23 != 129103950) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x113 = INT64_MAX;
	volatile int32_t x114 = -1;
	static uint64_t x115 = 538211756855945LLU;

	t24 = (((x113==x114)^x115)*x116);

	if (t24 != 17635584636898749815LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x117 = 3U;
	static int64_t x118 = INT64_MIN;
	uint64_t x119 = 30766LLU;
	volatile int32_t x120 = INT32_MAX;
	volatile uint64_t t25 = 23LLU;

	t25 = (((x117==x118)^x119)*x120);

	if (t25 != 66069481883602LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x121 = 7880557U;
	uint16_t x122 = 21U;
	volatile uint8_t x123 = 62U;
	uint64_t x124 = UINT64_MAX;

	t26 = (((x121==x122)^x123)*x124);

	if (t26 != 18446744073709551554LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x125 = INT8_MAX;
	volatile uint8_t x126 = 6U;
	static uint16_t x127 = UINT16_MAX;
	static int64_t t27 = 52832659465945700LL;

	t27 = (((x125==x126)^x127)*x128);

	if (t27 != 1743114292781670LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x129 = 1;
	int32_t x130 = -6;
	uint64_t x131 = UINT64_MAX;
	int16_t x132 = 42;
	static uint64_t t28 = 226LLU;

	t28 = (((x129==x130)^x131)*x132);

	if (t28 != 18446744073709551574LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x133 = 2U;
	int16_t x134 = -5;
	volatile int64_t t29 = 434579761129LL;

	t29 = (((x133==x134)^x135)*x136);

	if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x138 = 57145LL;
	uint16_t x139 = UINT16_MAX;
	volatile int8_t x140 = INT8_MIN;
	int32_t t30 = 3167;

	t30 = (((x137==x138)^x139)*x140);

	if (t30 != -8388480) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x145 = -1;
	uint16_t x148 = UINT16_MAX;
	int32_t t31 = -2;

	t31 = (((x145==x146)^x147)*x148);

	if (t31 != -196605) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x149 = -1;
	int32_t x150 = -1;
	uint8_t x151 = UINT8_MAX;
	uint64_t x152 = 21271850LLU;
	uint64_t t32 = 1925733LLU;

	t32 = (((x149==x150)^x151)*x152);

	if (t32 != 5403049900LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x153 = -782222515213LL;
	int64_t x154 = INT64_MIN;
	static volatile int64_t x156 = -193105820LL;
	int64_t t33 = 26247343696LL;

	t33 = (((x153==x154)^x155)*x156);

	if (t33 != -12655189913700LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x157 = -1;

	t34 = (((x157==x158)^x159)*x160);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x165 = -1;
	uint16_t x166 = 1U;
	volatile int16_t x168 = INT16_MAX;

	t35 = (((x165==x166)^x167)*x168);

	if (t35 != -327670) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x169 = INT32_MIN;
	static int16_t x170 = -7;
	uint32_t x171 = 1710U;
	int8_t x172 = 1;

	t36 = (((x169==x170)^x171)*x172);

	if (t36 != 1710U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x174 = -11;
	volatile int64_t x175 = 671869456863372LL;
	int8_t x176 = -11;
	int64_t t37 = 649LL;

	t37 = (((x173==x174)^x175)*x176);

	if (t37 != -7390564025497092LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x181 = INT64_MAX;
	static uint8_t x182 = 8U;
	int64_t x183 = -1LL;
	static int16_t x184 = INT16_MIN;
	volatile int64_t t38 = 88178539LL;

	t38 = (((x181==x182)^x183)*x184);

	if (t38 != 32768LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x189 = 231695401823LLU;
	uint8_t x190 = UINT8_MAX;
	int16_t x191 = -1;
	uint16_t x192 = UINT16_MAX;

	t39 = (((x189==x190)^x191)*x192);

	if (t39 != -65535) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x194 = 6;
	volatile int8_t x195 = 5;
	static int16_t x196 = INT16_MIN;
	volatile int32_t t40 = 17365048;

	t40 = (((x193==x194)^x195)*x196);

	if (t40 != -163840) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x197 = INT16_MIN;
	int64_t x198 = 104154LL;
	volatile uint8_t x199 = UINT8_MAX;
	static int8_t x200 = INT8_MIN;
	static int32_t t41 = -13785763;

	t41 = (((x197==x198)^x199)*x200);

	if (t41 != -32640) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x201 = -1LL;
	static volatile int8_t x203 = 1;
	static int64_t x204 = INT64_MIN;
	volatile int64_t t42 = INT64_MIN;

	t42 = (((x201==x202)^x203)*x204);

	if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x206 = UINT32_MAX;
	volatile int32_t t43 = -198595;

	t43 = (((x205==x206)^x207)*x208);

	if (t43 != -102) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x209 = 213U;
	int16_t x210 = INT16_MIN;
	int32_t x211 = 291766650;
	volatile uint32_t x212 = 24183U;
	volatile uint32_t t44 = 18U;

	t44 = (((x209==x210)^x211)*x212);

	if (t44 != 3456596918U) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x213 = 65596691U;
	static int64_t x214 = INT64_MIN;
	int64_t x215 = -56144LL;
	int8_t x216 = 0;
	int64_t t45 = -174701903209132808LL;

	t45 = (((x213==x214)^x215)*x216);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x225 = INT32_MIN;
	volatile int8_t x227 = INT8_MIN;
	volatile int8_t x228 = INT8_MIN;
	static int32_t t46 = -184514;

	t46 = (((x225==x226)^x227)*x228);

	if (t46 != 16384) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x230 = INT64_MIN;
	int32_t x231 = INT32_MIN;
	uint32_t x232 = 3683041U;
	uint32_t t47 = 2101042U;

	t47 = (((x229==x230)^x231)*x232);

	if (t47 != 2147483648U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x237 = INT64_MIN;
	int64_t x238 = -1LL;
	int16_t x239 = INT16_MIN;
	int32_t t48 = -494891661;

	t48 = (((x237==x238)^x239)*x240);

	if (t48 != 4194304) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x241 = INT64_MIN;
	int16_t x243 = INT16_MIN;
	int8_t x244 = INT8_MIN;
	volatile int32_t t49 = 28;

	t49 = (((x241==x242)^x243)*x244);

	if (t49 != 4194304) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x249 = UINT16_MAX;
	static int64_t x250 = 230072559LL;
	int32_t t50 = 257903;

	t50 = (((x249==x250)^x251)*x252);

	if (t50 != 4194304) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x253 = -1LL;
	int16_t x254 = INT16_MAX;
	int8_t x255 = INT8_MAX;
	uint32_t x256 = UINT32_MAX;
	volatile uint32_t t51 = 6415U;

	t51 = (((x253==x254)^x255)*x256);

	if (t51 != 4294967169U) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x262 = UINT64_MAX;
	int64_t x263 = 5235563LL;
	int64_t x264 = -796683LL;
	int64_t t52 = 123LL;

	t52 = (((x261==x262)^x263)*x264);

	if (t52 != -4171084037529LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x265 = UINT8_MAX;
	static int16_t x266 = INT16_MIN;
	int32_t x267 = -1;
	int64_t x268 = -1936365416LL;

	t53 = (((x265==x266)^x267)*x268);

	if (t53 != 1936365416LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x269 = INT8_MIN;
	int32_t x270 = 166;
	uint32_t x271 = 3877393U;
	uint64_t x272 = 8782514004LLU;
	static uint64_t t54 = 4797938578LLU;

	t54 = (((x269==x270)^x271)*x272);

	if (t54 != 34053258321511572LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x274 = INT16_MIN;
	uint32_t x275 = 414U;
	volatile int8_t x276 = 4;
	uint32_t t55 = 0U;

	t55 = (((x273==x274)^x275)*x276);

	if (t55 != 1656U) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x277 = 11U;
	static uint16_t x278 = 85U;
	int8_t x280 = -1;
	int32_t t56 = -121420;

	t56 = (((x277==x278)^x279)*x280);

	if (t56 != -2) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x281 = 1U;
	int8_t x282 = 0;
	int8_t x283 = -1;
	int32_t x284 = 898763689;
	volatile int32_t t57 = 3;

	t57 = (((x281==x282)^x283)*x284);

	if (t57 != -898763689) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x286 = -1;
	int64_t x287 = 423639LL;
	uint32_t x288 = 33294330U;
	int64_t t58 = 1399574626LL;

	t58 = (((x285==x286)^x287)*x288);

	if (t58 != 14104776666870LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x290 = 3118U;
	volatile int64_t x291 = -2702138758778703917LL;
	static int8_t x292 = -1;

	t59 = (((x289==x290)^x291)*x292);

	if (t59 != 2702138758778703917LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x293 = 9;
	uint64_t x294 = UINT64_MAX;
	int8_t x295 = INT8_MIN;
	static uint32_t x296 = 206497837U;

	t60 = (((x293==x294)^x295)*x296);

	if (t60 != 3633047936U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x297 = -1;
	volatile uint8_t x298 = 12U;
	int16_t x300 = -206;
	int32_t t61 = -472;

	t61 = (((x297==x298)^x299)*x300);

	if (t61 != 275216) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x302 = -451357340258LL;
	static int16_t x303 = INT16_MIN;
	int16_t x304 = INT16_MIN;
	int32_t t62 = -957866;

	t62 = (((x301==x302)^x303)*x304);

	if (t62 != 1073741824) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x317 = INT32_MIN;
	uint64_t x318 = 20305378552403665LLU;
	int32_t x319 = -1;
	volatile int32_t t63 = -21537;

	t63 = (((x317==x318)^x319)*x320);

	if (t63 != 128) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x325 = -4834412124846LL;
	uint32_t x327 = 117020085U;
	uint8_t x328 = 15U;
	volatile uint32_t t64 = 235U;

	t64 = (((x325==x326)^x327)*x328);

	if (t64 != 1755301275U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x329 = -1;
	volatile int32_t x330 = -118;
	int64_t x331 = -1LL;
	static int16_t x332 = INT16_MAX;
	volatile int64_t t65 = 1280889006270627LL;

	t65 = (((x329==x330)^x331)*x332);

	if (t65 != -32767LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x333 = -1;
	int32_t x335 = INT32_MIN;
	int64_t x336 = 3657LL;
	int64_t t66 = 95200LL;

	t66 = (((x333==x334)^x335)*x336);

	if (t66 != -7853347700736LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x338 = 26833037LLU;
	volatile int64_t t67 = -277326370324762LL;

	t67 = (((x337==x338)^x339)*x340);

	if (t67 != 65246152065024LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x341 = INT64_MIN;
	int16_t x342 = -1;
	volatile uint16_t x343 = UINT16_MAX;
	int16_t x344 = -3;
	static int32_t t68 = 3915;

	t68 = (((x341==x342)^x343)*x344);

	if (t68 != -196605) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x349 = INT32_MAX;
	uint64_t x350 = 6617235LLU;
	volatile int16_t x351 = INT16_MIN;
	uint16_t x352 = 84U;

	t69 = (((x349==x350)^x351)*x352);

	if (t69 != -2752512) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x353 = 112;
	volatile int8_t x356 = INT8_MIN;
	volatile int32_t t70 = -33861;

	t70 = (((x353==x354)^x355)*x356);

	if (t70 != -38656) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x361 = INT16_MAX;
	static uint32_t x363 = 2U;
	uint8_t x364 = 0U;
	volatile uint32_t t71 = 136144240U;

	t71 = (((x361==x362)^x363)*x364);

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x365 = -96029;
	uint64_t x366 = 4786LLU;
	uint64_t x367 = 68384115625748LLU;
	int8_t x368 = -1;
	uint64_t t72 = 1281LLU;

	t72 = (((x365==x366)^x367)*x368);

	if (t72 != 18446675689593925868LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x369 = INT16_MIN;
	uint64_t x370 = UINT64_MAX;
	int8_t x371 = INT8_MIN;
	int32_t x372 = 0;
	int32_t t73 = 3949743;

	t73 = (((x369==x370)^x371)*x372);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x374 = INT16_MIN;
	uint8_t x375 = UINT8_MAX;
	int16_t x376 = -1;
	int32_t t74 = -721248;

	t74 = (((x373==x374)^x375)*x376);

	if (t74 != -255) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x377 = -3762;
	volatile int8_t x380 = 56;
	volatile uint32_t t75 = 27193U;

	t75 = (((x377==x378)^x379)*x380);

	if (t75 != 3291761368U) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x385 = -7625093304635LL;
	static uint8_t x386 = 0U;
	static uint16_t x387 = 2035U;
	uint64_t x388 = UINT64_MAX;
	uint64_t t76 = 447LLU;

	t76 = (((x385==x386)^x387)*x388);

	if (t76 != 18446744073709549581LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x397 = -4857457LL;
	volatile int16_t x398 = 1;
	uint64_t x399 = 538789383921349098LLU;
	volatile uint16_t x400 = 9787U;
	volatile uint64_t t77 = 991286LLU;

	t77 = (((x397==x398)^x399)*x400);

	if (t77 != 15809639431021411566LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x401 = UINT8_MAX;
	int32_t x402 = INT32_MIN;
	uint16_t x403 = 94U;
	volatile int32_t x404 = 678;
	volatile int32_t t78 = -8083711;

	t78 = (((x401==x402)^x403)*x404);

	if (t78 != 63732) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x405 = 957U;
	static volatile int16_t x406 = -12;
	int16_t x407 = INT16_MAX;
	static volatile int32_t t79 = 85;

	t79 = (((x405==x406)^x407)*x408);

	if (t79 != 5373788) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x409 = INT32_MAX;
	uint16_t x410 = 215U;
	uint64_t x411 = UINT64_MAX;
	int16_t x412 = -1;

	t80 = (((x409==x410)^x411)*x412);

	if (t80 != 1LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x417 = 47U;
	static volatile int8_t x418 = INT8_MAX;
	volatile int8_t x420 = -3;
	volatile int32_t t81 = 30;

	t81 = (((x417==x418)^x419)*x420);

	if (t81 != -312) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x421 = INT16_MAX;
	uint32_t x424 = UINT32_MAX;
	static uint32_t t82 = 37524761U;

	t82 = (((x421==x422)^x423)*x424);

	if (t82 != 2147483649U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x425 = 14LL;
	int64_t x426 = -1LL;
	int8_t x427 = INT8_MIN;
	uint64_t x428 = UINT64_MAX;
	volatile uint64_t t83 = 379463208LLU;

	t83 = (((x425==x426)^x427)*x428);

	if (t83 != 128LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x433 = INT8_MAX;
	static int8_t x434 = INT8_MAX;
	uint8_t x435 = 55U;
	uint64_t x436 = 3009731747817321LLU;
	uint64_t t84 = 238582669LLU;

	t84 = (((x433==x434)^x435)*x436);

	if (t84 != 162525514382135334LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x438 = UINT64_MAX;
	static int32_t x439 = -1;
	static volatile uint64_t x440 = 821655008956012LLU;
	volatile uint64_t t85 = 68LLU;

	t85 = (((x437==x438)^x439)*x440);

	if (t85 != 18445100763691639592LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x445 = INT8_MAX;
	volatile uint64_t x446 = 922488LLU;
	int16_t x447 = -1;
	int32_t t86 = -4871;

	t86 = (((x445==x446)^x447)*x448);

	if (t86 != 7) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x449 = UINT8_MAX;
	uint16_t x451 = UINT16_MAX;
	static uint32_t x452 = 0U;
	uint32_t t87 = 3U;

	t87 = (((x449==x450)^x451)*x452);

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x453 = 1994539283U;
	volatile int8_t x456 = INT8_MIN;
	int32_t t88 = -25;

	t88 = (((x453==x454)^x455)*x456);

	if (t88 != 180224) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x465 = -57;
	static int8_t x466 = 1;
	volatile int16_t x467 = -1;
	volatile int32_t x468 = -12826954;
	static int32_t t89 = 1923;

	t89 = (((x465==x466)^x467)*x468);

	if (t89 != 12826954) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x469 = INT8_MAX;
	int32_t x470 = 170;
	int8_t x471 = INT8_MIN;
	uint32_t x472 = 215660U;

	t90 = (((x469==x470)^x471)*x472);

	if (t90 != 4267362816U) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x475 = 1U;
	int8_t x476 = -1;
	volatile int32_t t91 = -334763;

	t91 = (((x473==x474)^x475)*x476);

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x481 = INT64_MIN;
	int8_t x482 = 0;
	int64_t x483 = INT64_MIN;
	int64_t t92 = INT64_MIN;

	t92 = (((x481==x482)^x483)*x484);

	if (t92 != INT64_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x486 = -1;
	int16_t x487 = INT16_MIN;
	volatile uint8_t x488 = 8U;
	volatile int32_t t93 = -9152852;

	t93 = (((x485==x486)^x487)*x488);

	if (t93 != -262136) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x489 = INT16_MAX;
	uint8_t x490 = 34U;
	int32_t x491 = -1;
	volatile uint16_t x492 = 2U;
	volatile int32_t t94 = 45568;

	t94 = (((x489==x490)^x491)*x492);

	if (t94 != -2) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x493 = -10760;
	uint16_t x494 = 0U;
	volatile int32_t x495 = -1;
	int16_t x496 = -1;
	volatile int32_t t95 = 2409910;

	t95 = (((x493==x494)^x495)*x496);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x497 = INT32_MIN;
	int8_t x499 = -1;
	int16_t x500 = INT16_MAX;
	static int32_t t96 = 34;

	t96 = (((x497==x498)^x499)*x500);

	if (t96 != -32767) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x505 = 2287946008493538012LLU;
	int16_t x507 = -1;
	uint32_t x508 = 143776U;

	t97 = (((x505==x506)^x507)*x508);

	if (t97 != 4294823520U) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x509 = 201U;
	volatile uint16_t x510 = 31914U;
	static int8_t x511 = INT8_MIN;
	volatile uint64_t x512 = UINT64_MAX;
	uint64_t t98 = 868208332813LLU;

	t98 = (((x509==x510)^x511)*x512);

	if (t98 != 128LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x514 = INT16_MIN;
	uint64_t x515 = 70116LLU;
	volatile uint64_t t99 = 11642387877063452LLU;

	t99 = (((x513==x514)^x515)*x516);

	if (t99 != 18446744073700576768LLU) { NG(); } else { ; }
	
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

