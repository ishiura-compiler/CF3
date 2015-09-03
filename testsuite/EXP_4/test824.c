#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x2 = INT16_MIN;
int64_t t0 = -1LL;
volatile int32_t t1 = -149;
static int64_t x9 = 34014176896678LL;
int8_t x16 = -1;
uint64_t t3 = 58942028391LLU;
uint16_t x20 = 2338U;
int8_t x23 = INT8_MIN;
uint32_t t6 = 19038U;
static volatile int64_t x29 = -1LL;
static volatile uint8_t x33 = 0U;
int32_t x34 = INT32_MIN;
static volatile int32_t x35 = INT32_MIN;
static int16_t x36 = INT16_MIN;
int32_t x39 = INT32_MIN;
int32_t x41 = 4957174;
static int32_t x52 = 111348;
int64_t x56 = INT64_MIN;
int8_t x59 = INT8_MIN;
static int8_t x63 = INT8_MIN;
uint16_t x68 = 15684U;
static int16_t x70 = 0;
static volatile int32_t t17 = 13;
uint32_t x77 = UINT32_MAX;
uint16_t x83 = UINT16_MAX;
int64_t x84 = INT64_MAX;
volatile int64_t t20 = 320027678579LL;
uint64_t t23 = 5070814LLU;
uint64_t x103 = 472LLU;
static uint64_t t25 = 1116759168174331929LLU;
int64_t x118 = INT64_MIN;
int32_t x123 = INT32_MAX;
int32_t x124 = INT32_MAX;
int32_t t30 = -9948235;
int64_t x129 = INT64_MIN;
int32_t x130 = INT32_MIN;
int8_t x131 = INT8_MAX;
volatile int16_t x136 = INT16_MIN;
volatile int64_t t33 = -25618645196LL;
int64_t x139 = INT64_MAX;
int32_t x140 = -58589868;
uint64_t t34 = 397450065973691114LLU;
int16_t x141 = INT16_MIN;
int8_t x143 = 1;
int8_t x145 = -3;
uint16_t x150 = UINT16_MAX;
int32_t x164 = INT32_MIN;
volatile int32_t x166 = -346811498;
int8_t x167 = INT8_MAX;
static int16_t x168 = INT16_MIN;
int64_t x169 = -1LL;
uint32_t x179 = 2842U;
uint8_t x180 = 1U;
volatile int32_t x182 = INT32_MIN;
static int8_t x187 = INT8_MIN;
volatile int64_t t46 = -28LL;
static int8_t x204 = INT8_MIN;
uint64_t x205 = UINT64_MAX;
int16_t x206 = -1;
uint8_t x209 = UINT8_MAX;
volatile uint64_t t52 = 1725LLU;
int16_t x224 = 1305;
static int64_t x228 = INT64_MAX;
int16_t x232 = INT16_MIN;
static int8_t x235 = -1;
static uint32_t t57 = 7988U;
int64_t x239 = INT64_MIN;
volatile uint16_t x242 = 0U;
int32_t x245 = INT32_MIN;
int64_t t60 = -8448237398LL;
uint16_t x251 = 0U;
uint64_t x254 = 1638553294261LLU;
uint32_t x257 = UINT32_MAX;
static volatile uint16_t x265 = UINT16_MAX;
static uint8_t x271 = 45U;
int64_t t66 = -566LL;
int16_t x274 = INT16_MAX;
int32_t x278 = -390386148;
static int32_t x288 = -1;
volatile uint32_t x295 = 111717U;
uint32_t t72 = 1630U;
int64_t x300 = -1LL;
uint64_t x301 = UINT64_MAX;
volatile uint16_t x316 = 655U;
volatile int8_t x323 = INT8_MIN;
uint8_t x327 = UINT8_MAX;
static int32_t x333 = -1;
int64_t x334 = -1LL;
volatile int64_t x340 = INT64_MIN;
uint16_t x346 = 665U;
static int32_t x348 = 2;
volatile int32_t t85 = -2777;
int64_t x355 = INT64_MAX;
static uint32_t x357 = UINT32_MAX;
int32_t x360 = INT32_MIN;
uint32_t t88 = 1320198160U;
int64_t x361 = -3106134830557177LL;
volatile int64_t t89 = -1LL;
int8_t x372 = -1;
int16_t x373 = INT16_MAX;
int32_t x376 = INT32_MIN;
volatile int64_t t92 = 68985854LL;
static int64_t x378 = INT64_MAX;
volatile int64_t t93 = -148083707119LL;
int16_t x381 = INT16_MAX;
uint8_t x384 = UINT8_MAX;
volatile int64_t t94 = 357141311269247637LL;
static int64_t t96 = -142944515915656255LL;
int16_t x398 = -1;
volatile uint8_t x406 = 4U;
uint64_t x407 = UINT64_MAX;


void f0(void) {
	int64_t x1 = INT64_MIN;
	int16_t x3 = INT16_MIN;
	int16_t x4 = 7769;

	t0 = (x1%(x2|(x3%x4)));

	if (t0 != -224LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	volatile int16_t x6 = -1;
	int8_t x7 = -1;
	volatile uint8_t x8 = UINT8_MAX;

	t1 = (x5%(x6|(x7%x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x10 = -72;
	uint32_t x11 = UINT32_MAX;
	int16_t x12 = -1;
	int64_t t2 = 179LL;

	t2 = (x9%(x10|(x11%x12)));

	if (t2 != 2331449822LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = UINT64_MAX;
	uint16_t x14 = UINT16_MAX;
	int8_t x15 = -1;

	t3 = (x13%(x14|(x15%x16)));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	static int8_t x18 = INT8_MIN;
	int16_t x19 = INT16_MAX;
	volatile int64_t t4 = -217361508495560311LL;

	t4 = (x17%(x18|(x19%x20)));

	if (t4 != -8LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = INT64_MIN;
	int32_t x22 = INT32_MAX;
	int8_t x24 = 38;
	volatile int64_t t5 = -12550836LL;

	t5 = (x21%(x22|(x23%x24)));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	static int8_t x26 = 15;
	uint32_t x27 = UINT32_MAX;
	static int32_t x28 = INT32_MIN;

	t6 = (x25%(x26|(x27%x28)));

	if (t6 != 1U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x30 = INT8_MAX;
	int32_t x31 = -1;
	int8_t x32 = -58;
	int64_t t7 = -63LL;

	t7 = (x29%(x30|(x31%x32)));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t t8 = -5426070;

	t8 = (x33%(x34|(x35%x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	volatile uint64_t x38 = 325687965LLU;
	uint64_t x40 = UINT64_MAX;
	volatile uint64_t t9 = 4586187LLU;

	t9 = (x37%(x38|(x39%x40)));

	if (t9 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x42 = -1;
	uint32_t x43 = 14619628U;
	volatile uint8_t x44 = 27U;
	static volatile uint32_t t10 = 168241U;

	t10 = (x41%(x42|(x43%x44)));

	if (t10 != 4957174U) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MAX;
	int8_t x46 = INT8_MAX;
	int32_t x47 = INT32_MIN;
	int32_t x48 = 2;
	int32_t t11 = 29;

	t11 = (x45%(x46|(x47%x48)));

	if (t11 != 7) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x49 = 7760577U;
	int8_t x50 = INT8_MIN;
	int64_t x51 = INT64_MIN;
	volatile int64_t t12 = 577573LL;

	t12 = (x49%(x50|(x51%x52)));

	if (t12 != 97LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = 21U;
	static int16_t x54 = INT16_MIN;
	static volatile uint16_t x55 = UINT16_MAX;
	int64_t t13 = -1830345446742435329LL;

	t13 = (x53%(x54|(x55%x56)));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x57 = 3;
	uint32_t x58 = 3U;
	static int32_t x60 = -117;
	uint32_t t14 = 847073563U;

	t14 = (x57%(x58|(x59%x60)));

	if (t14 != 3U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x61 = 3894874LLU;
	static int16_t x62 = 1011;
	volatile int8_t x64 = INT8_MIN;
	volatile uint64_t t15 = 288229684940482LLU;

	t15 = (x61%(x62|(x63%x64)));

	if (t15 != 502LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = 1;
	int8_t x66 = INT8_MIN;
	volatile int16_t x67 = -1;
	int32_t t16 = 5849;

	t16 = (x65%(x66|(x67%x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x69 = INT8_MAX;
	volatile int32_t x71 = -52236;
	int8_t x72 = INT8_MAX;

	t17 = (x69%(x70|(x71%x72)));

	if (t17 != 10) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x73 = UINT16_MAX;
	int8_t x74 = INT8_MIN;
	int32_t x75 = -103680;
	volatile uint64_t x76 = 20274032LLU;
	static uint64_t t18 = 29219534004213508LLU;

	t18 = (x73%(x74|(x75%x76)));

	if (t18 != 65535LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x78 = INT8_MAX;
	volatile uint8_t x79 = 3U;
	int64_t x80 = INT64_MIN;
	static volatile int64_t t19 = 348381719397LL;

	t19 = (x77%(x78|(x79%x80)));

	if (t19 != 15LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x81 = INT8_MIN;
	volatile int64_t x82 = -159LL;

	t20 = (x81%(x82|(x83%x84)));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x85 = 22293U;
	int32_t x86 = 1891;
	uint16_t x87 = UINT16_MAX;
	static uint16_t x88 = UINT16_MAX;
	uint32_t t21 = 10843797U;

	t21 = (x85%(x86|(x87%x88)));

	if (t21 != 1492U) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MIN;
	uint8_t x90 = 1U;
	static uint8_t x91 = 14U;
	volatile uint64_t x92 = 504596285190007500LLU;
	volatile uint64_t t22 = 108272445LLU;

	t22 = (x89%(x90|(x91%x92)));

	if (t22 != 8LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = 118145U;
	int32_t x94 = INT32_MIN;
	uint64_t x95 = 3161093651LLU;
	volatile int16_t x96 = -1;

	t23 = (x93%(x94|(x95%x96)));

	if (t23 != 118145LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MAX;
	volatile uint16_t x98 = 8U;
	static int64_t x99 = -1LL;
	static volatile uint64_t x100 = 954190642307851577LLU;
	volatile uint64_t t24 = 7083060LLU;

	t24 = (x97%(x98|(x99%x100)));

	if (t24 != 26837810903997667LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x101 = INT8_MAX;
	static uint64_t x102 = 2LLU;
	static int64_t x104 = INT64_MIN;

	t25 = (x101%(x102|(x103%x104)));

	if (t25 != 127LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MAX;
	int64_t x106 = INT64_MIN;
	int32_t x107 = 1;
	volatile uint64_t x108 = UINT64_MAX;
	static uint64_t t26 = 381778LLU;

	t26 = (x105%(x106|(x107%x108)));

	if (t26 != 32767LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x109 = 187403423U;
	volatile uint32_t x110 = 3U;
	int64_t x111 = INT64_MAX;
	int8_t x112 = INT8_MIN;
	int64_t t27 = -927678540LL;

	t27 = (x109%(x110|(x111%x112)));

	if (t27 != 64LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MIN;
	int8_t x114 = 1;
	volatile int8_t x115 = -1;
	uint64_t x116 = 1756133546611331LLU;
	volatile uint64_t t28 = 3LLU;

	t28 = (x113%(x114|(x115%x116)));

	if (t28 != 92609980943020LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MIN;
	uint8_t x119 = 0U;
	volatile uint64_t x120 = 212438831LLU;
	volatile uint64_t t29 = 273636091LLU;

	t29 = (x117%(x118|(x119%x120)));

	if (t29 != 9223372036854743040LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MIN;
	static uint16_t x122 = 56U;

	t30 = (x121%(x122|(x123%x124)));

	if (t30 != -16) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = INT16_MAX;
	static int64_t x126 = INT64_MIN;
	static int32_t x127 = INT32_MAX;
	static int64_t x128 = INT64_MIN;
	volatile int64_t t31 = 728845421LL;

	t31 = (x125%(x126|(x127%x128)));

	if (t31 != 32767LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x132 = INT32_MIN;
	int64_t t32 = -219LL;

	t32 = (x129%(x130|(x131%x132)));

	if (t32 != -32258LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x133 = 80U;
	int8_t x134 = INT8_MAX;
	volatile int64_t x135 = -523588589261378327LL;

	t33 = (x133%(x134|(x135%x136)));

	if (t33 != 80LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x137 = 16860029LLU;
	static uint32_t x138 = UINT32_MAX;

	t34 = (x137%(x138|(x139%x140)));

	if (t34 != 16860029LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x142 = 25U;
	int8_t x144 = INT8_MAX;
	static int32_t t35 = 58282;

	t35 = (x141%(x142|(x143%x144)));

	if (t35 != -18) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x146 = INT8_MIN;
	int16_t x147 = -1;
	volatile uint32_t x148 = UINT32_MAX;
	uint32_t t36 = 51U;

	t36 = (x145%(x146|(x147%x148)));

	if (t36 != 125U) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x149 = 99U;
	int64_t x151 = -55799437LL;
	int16_t x152 = -93;
	volatile int64_t t37 = 13LL;

	t37 = (x149%(x150|(x151%x152)));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = -1;
	int64_t x154 = 1LL;
	int64_t x155 = INT64_MAX;
	int16_t x156 = -1;
	volatile int64_t t38 = 788LL;

	t38 = (x153%(x154|(x155%x156)));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x157 = INT64_MAX;
	int64_t x158 = INT64_MIN;
	static int64_t x159 = -1LL;
	int64_t x160 = -1422918157008192847LL;
	volatile int64_t t39 = -732044LL;

	t39 = (x157%(x158|(x159%x160)));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int32_t x161 = INT32_MIN;
	int64_t x162 = 889202667LL;
	int8_t x163 = INT8_MIN;
	volatile int64_t t40 = -15332998LL;

	t40 = (x161%(x162|(x163%x164)));

	if (t40 != -2LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = 1;
	volatile int32_t t41 = 7085163;

	t41 = (x165%(x166|(x167%x168)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x170 = 185939574U;
	int16_t x171 = -14;
	volatile uint32_t x172 = 461U;
	int64_t t42 = -798571615521784644LL;

	t42 = (x169%(x170|(x171%x172)));

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x173 = 73874580701044LLU;
	static int64_t x174 = 2538LL;
	int32_t x175 = INT32_MIN;
	volatile int8_t x176 = 38;
	uint64_t t43 = 168865077444LLU;

	t43 = (x173%(x174|(x175%x176)));

	if (t43 != 73874580701044LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x177 = 8164479U;
	static volatile uint8_t x178 = UINT8_MAX;
	uint32_t t44 = 108U;

	t44 = (x177%(x178|(x179%x180)));

	if (t44 != 144U) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint8_t x181 = UINT8_MAX;
	int8_t x183 = -1;
	uint32_t x184 = 157918U;
	volatile uint32_t t45 = 378U;

	t45 = (x181%(x182|(x183%x184)));

	if (t45 != 255U) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MAX;
	int64_t x186 = INT64_MAX;
	uint8_t x188 = 3U;

	t46 = (x185%(x186|(x187%x188)));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x193 = -10;
	uint8_t x194 = 4U;
	static int64_t x195 = INT64_MAX;
	uint32_t x196 = 2602919U;
	int64_t t47 = -300255064641753436LL;

	t47 = (x193%(x194|(x195%x196)));

	if (t47 != -10LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x197 = 21U;
	int8_t x198 = 1;
	volatile int32_t x199 = INT32_MIN;
	volatile uint16_t x200 = 5624U;
	int32_t t48 = -2705;

	t48 = (x197%(x198|(x199%x200)));

	if (t48 != 21) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x201 = INT16_MIN;
	uint64_t x202 = 97333125459665260LLU;
	static int64_t x203 = -1LL;
	uint64_t t49 = 1879629LLU;

	t49 = (x201%(x202|(x203%x204)));

	if (t49 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x207 = 3690028;
	int32_t x208 = INT32_MIN;
	volatile uint64_t t50 = 15610504460LLU;

	t50 = (x205%(x206|(x207%x208)));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x210 = INT64_MIN;
	uint16_t x211 = 262U;
	int32_t x212 = -1;
	int64_t t51 = -25269LL;

	t51 = (x209%(x210|(x211%x212)));

	if (t51 != 255LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x213 = -1491;
	uint64_t x214 = 107130602853927LLU;
	volatile int64_t x215 = INT64_MAX;
	static int64_t x216 = INT64_MIN;

	t52 = (x213%(x214|(x215%x216)));

	if (t52 != 9223372036854774318LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x217 = 3U;
	int32_t x218 = INT32_MIN;
	uint8_t x219 = 2U;
	int64_t x220 = INT64_MAX;
	volatile int64_t t53 = -796601505LL;

	t53 = (x217%(x218|(x219%x220)));

	if (t53 != 3LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x221 = 3U;
	int8_t x222 = INT8_MIN;
	volatile uint64_t x223 = 31909392LLU;
	volatile uint64_t t54 = 2042529172268LLU;

	t54 = (x221%(x222|(x223%x224)));

	if (t54 != 3LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x225 = -1;
	int32_t x226 = -325878;
	volatile uint64_t x227 = 7865407572699125LLU;
	static uint64_t t55 = 231888LLU;

	t55 = (x225%(x226|(x227%x228)));

	if (t55 != 301056LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x229 = 6718;
	uint32_t x230 = UINT32_MAX;
	volatile int16_t x231 = INT16_MIN;
	uint32_t t56 = 8121U;

	t56 = (x229%(x230|(x231%x232)));

	if (t56 != 6718U) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x233 = UINT32_MAX;
	uint8_t x234 = UINT8_MAX;
	int32_t x236 = INT32_MAX;

	t57 = (x233%(x234|(x235%x236)));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x237 = 14LLU;
	int8_t x238 = INT8_MIN;
	volatile int64_t x240 = 2LL;
	volatile uint64_t t58 = 7682319774736LLU;

	t58 = (x237%(x238|(x239%x240)));

	if (t58 != 14LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int32_t x241 = -1;
	int16_t x243 = 2375;
	static volatile uint8_t x244 = UINT8_MAX;
	static volatile int32_t t59 = -7433787;

	t59 = (x241%(x242|(x243%x244)));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x246 = -7LL;
	int32_t x247 = -1;
	int8_t x248 = INT8_MIN;

	t60 = (x245%(x246|(x247%x248)));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x249 = INT8_MIN;
	volatile int64_t x250 = INT64_MIN;
	int32_t x252 = 1;
	int64_t t61 = 883496697023551671LL;

	t61 = (x249%(x250|(x251%x252)));

	if (t61 != -128LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x253 = INT16_MAX;
	int8_t x255 = INT8_MIN;
	static int32_t x256 = INT32_MIN;
	uint64_t t62 = 1213068368343275106LLU;

	t62 = (x253%(x254|(x255%x256)));

	if (t62 != 32767LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x258 = INT64_MIN;
	int8_t x259 = INT8_MIN;
	volatile int8_t x260 = INT8_MIN;
	volatile int64_t t63 = -222839933LL;

	t63 = (x257%(x258|(x259%x260)));

	if (t63 != 4294967295LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x261 = 18499LLU;
	int32_t x262 = INT32_MIN;
	uint16_t x263 = 3932U;
	static uint8_t x264 = 1U;
	uint64_t t64 = 57324533LLU;

	t64 = (x261%(x262|(x263%x264)));

	if (t64 != 18499LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x266 = 17896546458LL;
	int32_t x267 = INT32_MAX;
	int16_t x268 = 16349;
	volatile int64_t t65 = 49585711LL;

	t65 = (x265%(x266|(x267%x268)));

	if (t65 != 65535LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x269 = 1105834192269666268LL;
	static uint32_t x270 = UINT32_MAX;
	int8_t x272 = INT8_MIN;

	t66 = (x269%(x270|(x271%x272)));

	if (t66 != 3524238898LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x273 = INT64_MIN;
	int16_t x275 = INT16_MAX;
	static int16_t x276 = -9;
	volatile int64_t t67 = 21199506002LL;

	t67 = (x273%(x274|(x275%x276)));

	if (t67 != -8LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x277 = INT16_MIN;
	int32_t x279 = INT32_MIN;
	int32_t x280 = INT32_MAX;
	volatile int32_t t68 = 207859;

	t68 = (x277%(x278|(x279%x280)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x281 = UINT16_MAX;
	static uint16_t x282 = 25U;
	uint64_t x283 = UINT64_MAX;
	static int64_t x284 = -1LL;
	static uint64_t t69 = 29418049LLU;

	t69 = (x281%(x282|(x283%x284)));

	if (t69 != 10LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x285 = -1;
	uint32_t x286 = 4295U;
	static int16_t x287 = -7675;
	uint32_t t70 = 46573549U;

	t70 = (x285%(x286|(x287%x288)));

	if (t70 != 1655U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x289 = -1;
	uint16_t x290 = UINT16_MAX;
	int32_t x291 = INT32_MAX;
	static uint16_t x292 = 64U;
	volatile int32_t t71 = 143849126;

	t71 = (x289%(x290|(x291%x292)));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x293 = INT32_MIN;
	int16_t x294 = INT16_MAX;
	int32_t x296 = INT32_MAX;

	t72 = (x293%(x294|(x295%x296)));

	if (t72 != 16384U) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x297 = INT32_MAX;
	volatile int32_t x298 = INT32_MIN;
	static int8_t x299 = INT8_MAX;
	static volatile int64_t t73 = 968036659797550337LL;

	t73 = (x297%(x298|(x299%x300)));

	if (t73 != 2147483647LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x302 = 1;
	uint64_t x303 = 300111709947581545LLU;
	int16_t x304 = 465;
	static uint64_t t74 = 5628995LLU;

	t74 = (x301%(x302|(x303%x304)));

	if (t74 != 120LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x305 = -9;
	uint8_t x306 = 0U;
	uint32_t x307 = 500724692U;
	uint64_t x308 = 12LLU;
	volatile uint64_t t75 = 8605354096391LLU;

	t75 = (x305%(x306|(x307%x308)));

	if (t75 != 7LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x309 = 156896768163426LLU;
	int64_t x310 = -1LL;
	int8_t x311 = -4;
	uint32_t x312 = 3U;
	uint64_t t76 = 1536976825878148331LLU;

	t76 = (x309%(x310|(x311%x312)));

	if (t76 != 156896768163426LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x313 = UINT32_MAX;
	uint8_t x314 = 1U;
	int16_t x315 = INT16_MIN;
	uint32_t t77 = 219U;

	t77 = (x313%(x314|(x315%x316)));

	if (t77 != 16U) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x317 = -66LL;
	static uint16_t x318 = 6280U;
	int64_t x319 = 627098736959085594LL;
	int32_t x320 = -1;
	int64_t t78 = 27348298525LL;

	t78 = (x317%(x318|(x319%x320)));

	if (t78 != -66LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x321 = 0U;
	volatile int16_t x322 = 0;
	uint32_t x324 = UINT32_MAX;
	static uint32_t t79 = 13439U;

	t79 = (x321%(x322|(x323%x324)));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x325 = 3692642208957648LL;
	static int64_t x326 = INT64_MIN;
	uint16_t x328 = 42U;
	int64_t t80 = -1766161802494LL;

	t80 = (x325%(x326|(x327%x328)));

	if (t80 != 3692642208957648LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x329 = 0;
	uint16_t x330 = 23032U;
	int16_t x331 = INT16_MAX;
	static int32_t x332 = INT32_MIN;
	int32_t t81 = -8;

	t81 = (x329%(x330|(x331%x332)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x335 = UINT8_MAX;
	static int8_t x336 = -2;
	volatile int64_t t82 = 2217931096LL;

	t82 = (x333%(x334|(x335%x336)));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x337 = -1;
	volatile int32_t x338 = INT32_MIN;
	volatile int16_t x339 = INT16_MIN;
	int64_t t83 = -1LL;

	t83 = (x337%(x338|(x339%x340)));

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x341 = 1U;
	uint64_t x342 = 9548306150179377LLU;
	int32_t x343 = 2049584;
	int8_t x344 = INT8_MIN;
	volatile uint64_t t84 = 309LLU;

	t84 = (x341%(x342|(x343%x344)));

	if (t84 != 1LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x345 = INT32_MIN;
	int32_t x347 = INT32_MIN;

	t85 = (x345%(x346|(x347%x348)));

	if (t85 != -478) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x349 = -3979;
	uint16_t x350 = 19591U;
	uint8_t x351 = 3U;
	uint32_t x352 = 257642356U;
	volatile uint32_t t86 = 82U;

	t86 = (x349%(x350|(x351%x352)));

	if (t86 != 8796U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x353 = -60;
	int8_t x354 = INT8_MAX;
	int32_t x356 = INT32_MIN;
	volatile int64_t t87 = 7860095708LL;

	t87 = (x353%(x354|(x355%x356)));

	if (t87 != -60LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x358 = INT8_MIN;
	int32_t x359 = 2879441;

	t88 = (x357%(x358|(x359%x360)));

	if (t88 != 46U) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x362 = 6404U;
	int8_t x363 = INT8_MIN;
	int64_t x364 = 121136232069LL;

	t89 = (x361%(x362|(x363%x364)));

	if (t89 != -29LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x365 = 618186770U;
	int32_t x366 = INT32_MIN;
	int32_t x367 = 13385;
	int32_t x368 = INT32_MIN;
	static uint32_t t90 = 2140656581U;

	t90 = (x365%(x366|(x367%x368)));

	if (t90 != 618186770U) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x369 = 7U;
	int64_t x370 = INT64_MIN;
	int64_t x371 = INT64_MIN;
	volatile int64_t t91 = -29837220979LL;

	t91 = (x369%(x370|(x371%x372)));

	if (t91 != 7LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x374 = INT64_MIN;
	int32_t x375 = 665423537;

	t92 = (x373%(x374|(x375%x376)));

	if (t92 != 32767LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x377 = INT8_MIN;
	static int8_t x379 = 0;
	uint16_t x380 = UINT16_MAX;

	t93 = (x377%(x378|(x379%x380)));

	if (t93 != -128LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x382 = INT64_MIN;
	volatile uint32_t x383 = 47692U;

	t94 = (x381%(x382|(x383%x384)));

	if (t94 != 32767LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x385 = INT16_MIN;
	int64_t x386 = -5874579270708066LL;
	uint16_t x387 = 917U;
	volatile uint64_t x388 = 26013771921554913LLU;
	uint64_t t95 = 113684757LLU;

	t95 = (x385%(x386|(x387%x388)));

	if (t95 != 5874579270674529LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x389 = 1U;
	int64_t x390 = -9503844LL;
	static uint32_t x391 = 83638268U;
	int8_t x392 = INT8_MAX;

	t96 = (x389%(x390|(x391%x392)));

	if (t96 != 1LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x393 = UINT32_MAX;
	int32_t x394 = -8561;
	int32_t x395 = INT32_MAX;
	int16_t x396 = INT16_MIN;
	volatile uint32_t t97 = 5743U;

	t97 = (x393%(x394|(x395%x396)));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x397 = INT16_MIN;
	int16_t x399 = -1;
	int64_t x400 = INT64_MIN;
	static volatile int64_t t98 = 685026LL;

	t98 = (x397%(x398|(x399%x400)));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x405 = -1;
	int32_t x408 = 621522;
	volatile uint64_t t99 = 95027680259219076LLU;

	t99 = (x405%(x406|(x407%x408)));

	if (t99 != 126765LLU) { NG(); } else { ; }
	
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

