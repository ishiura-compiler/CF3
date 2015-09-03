#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x3 = INT32_MIN;
volatile uint64_t t0 = 1140280687LLU;
uint8_t x7 = 1U;
int8_t x9 = -1;
int8_t x10 = 0;
volatile int32_t x15 = 83650;
int32_t x17 = -1;
static int16_t x19 = 1636;
uint16_t x24 = 12U;
volatile int64_t x25 = 2143786LL;
int16_t x29 = INT16_MIN;
uint16_t x38 = 0U;
static int16_t x40 = -1;
volatile int32_t t9 = -832575576;
uint64_t x44 = 314789611478LLU;
uint64_t t10 = 123522LLU;
int64_t x46 = INT64_MIN;
volatile int16_t x47 = INT16_MIN;
int64_t t11 = 1750290752108000LL;
int8_t x51 = -1;
static uint32_t x60 = UINT32_MAX;
int8_t x62 = INT8_MIN;
static volatile int32_t x77 = -1;
int32_t x79 = -216349546;
int16_t x80 = INT16_MIN;
uint64_t x83 = 5694448LLU;
uint16_t x85 = 3908U;
volatile int32_t x99 = INT32_MIN;
uint16_t x100 = 27U;
int8_t x102 = -1;
volatile uint8_t x104 = 1U;
uint32_t t26 = 23U;
int64_t x116 = -1LL;
static int8_t x122 = INT8_MIN;
int8_t x124 = INT8_MIN;
int8_t x126 = INT8_MAX;
uint32_t x132 = 3279999U;
volatile int64_t t32 = -2LL;
int16_t x157 = INT16_MAX;
int8_t x159 = INT8_MIN;
int64_t t39 = 3707814LL;
static uint32_t x165 = UINT32_MAX;
uint64_t t41 = 35LLU;
uint8_t x172 = UINT8_MAX;
uint64_t t43 = 7005998880LLU;
static int8_t x182 = INT8_MAX;
int16_t x188 = INT16_MIN;
int16_t x189 = -8440;
uint16_t x190 = UINT16_MAX;
int8_t x200 = -1;
int64_t x201 = INT64_MIN;
int32_t x212 = INT32_MIN;
int32_t t52 = -16547996;
volatile int32_t t53 = -72;
int64_t x220 = INT64_MIN;
static volatile int32_t x224 = -619;
uint8_t x237 = UINT8_MAX;
static int64_t t60 = -38314744955223LL;
int8_t x256 = -1;
int64_t x260 = -1LL;
volatile int32_t x266 = -1;
int64_t x267 = -1LL;
int16_t x269 = 38;
int8_t x271 = -1;
int16_t x274 = 18;
uint32_t x280 = UINT32_MAX;
int8_t x281 = INT8_MAX;
int64_t t70 = -840375389009393LL;
uint32_t x285 = 61703U;
int8_t x286 = INT8_MAX;
int8_t x287 = INT8_MIN;
static int8_t x288 = 1;
uint64_t x290 = 6LLU;
volatile int32_t x293 = INT32_MIN;
volatile uint16_t x296 = 5U;
int16_t x299 = -666;
int64_t t74 = -1236499965219142LL;
int64_t x304 = 190303590889LL;
volatile int32_t x306 = 367741709;
int8_t x309 = -1;
int64_t x312 = INT64_MAX;
uint32_t x316 = 8335025U;
int64_t t78 = 110852242LL;
static volatile uint64_t t81 = 3631529606130920LLU;
volatile int64_t t82 = -1581468202947075LL;
static int16_t x349 = 1;
volatile int32_t x350 = INT32_MIN;
volatile int8_t x352 = 1;
volatile int32_t x353 = INT32_MIN;
int32_t x355 = -165082;
uint64_t x357 = 129734630LLU;
int64_t x358 = -1LL;
volatile uint64_t t92 = 4425978815956031197LLU;
volatile int64_t t93 = -22979660975566LL;
int64_t x381 = INT64_MIN;
uint16_t x384 = 827U;
volatile uint64_t t94 = 3973714496725816LLU;
uint64_t t95 = 729841864734878LLU;
volatile uint64_t x399 = 6777474587LLU;
int64_t x403 = INT64_MAX;
int64_t t99 = 10078048408LL;


void f0(void) {
	static int8_t x1 = INT8_MAX;
	volatile uint64_t x2 = 949116922446041LLU;
	int8_t x4 = 1;

	t0 = (((x1|x2)&x3)/x4);

	if (t0 != 949116905455616LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint16_t x5 = 371U;
	int16_t x6 = -1;
	uint64_t x8 = 8780441LLU;
	volatile uint64_t t1 = 2748593730268425882LLU;

	t1 = (((x5|x6)&x7)/x8);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x11 = UINT16_MAX;
	volatile uint32_t x12 = 372U;
	volatile uint32_t t2 = 405526430U;

	t2 = (((x9|x10)&x11)/x12);

	if (t2 != 176U) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	uint16_t x14 = UINT16_MAX;
	int16_t x16 = -124;
	int64_t t3 = 436412094614826254LL;

	t3 = (((x13|x14)&x15)/x16);

	if (t3 != -146LL) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int64_t x18 = -1LL;
	uint64_t x20 = 31LLU;
	uint64_t t4 = 1192932338982880LLU;

	t4 = (((x17|x18)&x19)/x20);

	if (t4 != 52LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 16908600LLU;
	int32_t x22 = -106882525;
	uint64_t x23 = UINT64_MAX;
	static volatile uint64_t t5 = 6899699540713455836LLU;

	t5 = (((x21|x22)&x23)/x24);

	if (t5 != 1537228672800233370LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x26 = 136558483354492504LL;
	volatile int8_t x27 = 44;
	uint8_t x28 = UINT8_MAX;
	volatile int64_t t6 = -50757455LL;

	t6 = (((x25|x26)&x27)/x28);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x30 = INT16_MIN;
	static uint32_t x31 = 5588323U;
	uint8_t x32 = UINT8_MAX;
	volatile uint32_t t7 = 312990570U;

	t7 = (((x29|x30)&x31)/x32);

	if (t7 != 21845U) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x33 = -12595;
	int32_t x34 = INT32_MAX;
	int32_t x35 = -16;
	int8_t x36 = INT8_MIN;
	static int32_t t8 = 112467;

	t8 = (((x33|x34)&x35)/x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x37 = INT16_MIN;
	volatile int8_t x39 = -12;

	t9 = (((x37|x38)&x39)/x40);

	if (t9 != 32768) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 13651167LLU;
	volatile uint32_t x42 = 635822U;
	static uint8_t x43 = 2U;

	t10 = (((x41|x42)&x43)/x44);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -11639;
	int16_t x48 = INT16_MIN;

	t11 = (((x45|x46)&x47)/x48);

	if (t11 != 1LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x49 = INT32_MIN;
	int8_t x50 = 1;
	volatile int32_t x52 = -1;
	int32_t t12 = INT32_MAX;

	t12 = (((x49|x50)&x51)/x52);

	if (t12 != INT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = 1;
	volatile uint16_t x54 = 16144U;
	int64_t x55 = INT64_MIN;
	int32_t x56 = INT32_MIN;
	volatile int64_t t13 = 592275962805245LL;

	t13 = (((x53|x54)&x55)/x56);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint32_t x57 = UINT32_MAX;
	uint8_t x58 = UINT8_MAX;
	volatile uint64_t x59 = UINT64_MAX;
	static volatile uint64_t t14 = 183LLU;

	t14 = (((x57|x58)&x59)/x60);

	if (t14 != 1LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MIN;
	uint64_t x63 = UINT64_MAX;
	int32_t x64 = 1;
	volatile uint64_t t15 = 39218522LLU;

	t15 = (((x61|x62)&x63)/x64);

	if (t15 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 21U;
	static uint16_t x66 = 14U;
	volatile int8_t x67 = INT8_MIN;
	int16_t x68 = INT16_MIN;
	int32_t t16 = -46607;

	t16 = (((x65|x66)&x67)/x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = -1;
	static int16_t x70 = INT16_MAX;
	int64_t x71 = INT64_MIN;
	static int64_t x72 = -4130975969594137260LL;
	volatile int64_t t17 = 57LL;

	t17 = (((x69|x70)&x71)/x72);

	if (t17 != 2LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = UINT64_MAX;
	int32_t x74 = INT32_MAX;
	int32_t x75 = 5167258;
	uint8_t x76 = 63U;
	volatile uint64_t t18 = 0LLU;

	t18 = (((x73|x74)&x75)/x76);

	if (t18 != 82019LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x78 = 12U;
	static int32_t t19 = 3488;

	t19 = (((x77|x78)&x79)/x80);

	if (t19 != 6602) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x81 = 62300268099LLU;
	uint8_t x82 = 2U;
	uint32_t x84 = 5U;
	volatile uint64_t t20 = 36600813135LLU;

	t20 = (((x81|x82)&x83)/x84);

	if (t20 != 873382LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x86 = -1;
	int64_t x87 = -3085718191149LL;
	uint8_t x88 = 2U;
	volatile int64_t t21 = 3801125585082LL;

	t21 = (((x85|x86)&x87)/x88);

	if (t21 != -1542859095574LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = UINT8_MAX;
	int8_t x90 = 1;
	volatile int64_t x91 = 444413798554503053LL;
	int16_t x92 = INT16_MIN;
	int64_t t22 = -58583LL;

	t22 = (((x89|x90)&x91)/x92);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x93 = INT8_MAX;
	volatile uint16_t x94 = 0U;
	int32_t x95 = INT32_MAX;
	int32_t x96 = INT32_MAX;
	int32_t t23 = -494848409;

	t23 = (((x93|x94)&x95)/x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MAX;
	int8_t x98 = -1;
	static int64_t t24 = 16178LL;

	t24 = (((x97|x98)&x99)/x100);

	if (t24 != -79536431LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MAX;
	int64_t x103 = INT64_MIN;
	static volatile int64_t t25 = INT64_MIN;

	t25 = (((x101|x102)&x103)/x104);

	if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x105 = INT8_MIN;
	static int8_t x106 = -27;
	uint32_t x107 = 2U;
	int16_t x108 = INT16_MAX;

	t26 = (((x105|x106)&x107)/x108);

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MAX;
	static int64_t x110 = -275648384LL;
	int8_t x111 = INT8_MIN;
	int32_t x112 = INT32_MIN;
	volatile int64_t t27 = -575282407238511LL;

	t27 = (((x109|x110)&x111)/x112);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = -1LL;
	volatile int64_t x114 = INT64_MAX;
	volatile int32_t x115 = INT32_MIN;
	volatile int64_t t28 = 334LL;

	t28 = (((x113|x114)&x115)/x116);

	if (t28 != 2147483648LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MIN;
	uint32_t x118 = 533U;
	static int32_t x119 = INT32_MIN;
	uint32_t x120 = 9U;
	static volatile uint32_t t29 = 1610615U;

	t29 = (((x117|x118)&x119)/x120);

	if (t29 != 238609294U) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MIN;
	uint32_t x123 = 23U;
	static uint32_t t30 = 5130U;

	t30 = (((x121|x122)&x123)/x124);

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = UINT32_MAX;
	volatile int64_t x127 = 6186LL;
	static volatile uint16_t x128 = UINT16_MAX;
	int64_t t31 = -1293450LL;

	t31 = (((x125|x126)&x127)/x128);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MIN;
	int64_t x130 = INT64_MIN;
	int32_t x131 = INT32_MIN;

	t32 = (((x129|x130)&x131)/x132);

	if (t32 != -2812004527091LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MIN;
	static int64_t x134 = -16395413LL;
	int8_t x135 = -1;
	int8_t x136 = INT8_MIN;
	int64_t t33 = -10LL;

	t33 = (((x133|x134)&x135)/x136);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MAX;
	volatile int8_t x138 = INT8_MIN;
	uint8_t x139 = 0U;
	volatile int32_t x140 = -2062402;
	static volatile int32_t t34 = -3;

	t34 = (((x137|x138)&x139)/x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = 105838U;
	int64_t x142 = INT64_MAX;
	int64_t x143 = -1LL;
	uint16_t x144 = UINT16_MAX;
	int64_t t35 = 193313299478934LL;

	t35 = (((x141|x142)&x143)/x144);

	if (t35 != 140739635871744LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = 51;
	uint64_t x146 = 106250586LLU;
	static uint64_t x147 = 3025846892720907LLU;
	int64_t x148 = -46087352LL;
	static uint64_t t36 = 118988319113LLU;

	t36 = (((x145|x146)&x147)/x148);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x149 = INT8_MAX;
	uint32_t x150 = UINT32_MAX;
	static uint64_t x151 = UINT64_MAX;
	int64_t x152 = INT64_MIN;
	static uint64_t t37 = 338741296472252133LLU;

	t37 = (((x149|x150)&x151)/x152);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = 43U;
	static int16_t x154 = -1;
	uint8_t x155 = 2U;
	uint16_t x156 = 2577U;
	int32_t t38 = 0;

	t38 = (((x153|x154)&x155)/x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x158 = -1LL;
	uint32_t x160 = UINT32_MAX;

	t39 = (((x157|x158)&x159)/x160);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x161 = 0;
	int16_t x162 = 10552;
	int32_t x163 = INT32_MIN;
	uint8_t x164 = 1U;
	volatile int32_t t40 = 28633;

	t40 = (((x161|x162)&x163)/x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x166 = -1;
	int64_t x167 = -1388LL;
	static volatile uint64_t x168 = 5286907340627LLU;

	t41 = (((x165|x166)&x167)/x168);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x169 = 527431483358LL;
	int64_t x170 = -1LL;
	volatile int32_t x171 = INT32_MIN;
	static int64_t t42 = 53118500041805LL;

	t42 = (((x169|x170)&x171)/x172);

	if (t42 != -8421504LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x173 = 141489132134LLU;
	int8_t x174 = INT8_MAX;
	static volatile int8_t x175 = INT8_MIN;
	volatile int8_t x176 = INT8_MIN;

	t43 = (((x173|x174)&x175)/x176);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x177 = 122420U;
	int16_t x178 = -9;
	uint8_t x179 = UINT8_MAX;
	uint32_t x180 = 1253145847U;
	static volatile uint32_t t44 = 483309U;

	t44 = (((x177|x178)&x179)/x180);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x181 = 5U;
	int8_t x183 = INT8_MIN;
	volatile int32_t x184 = -1;
	volatile int32_t t45 = -2;

	t45 = (((x181|x182)&x183)/x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x185 = 0U;
	int32_t x186 = -3515897;
	int32_t x187 = 1517959;
	uint32_t t46 = 102U;

	t46 = (((x185|x186)&x187)/x188);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x191 = 53U;
	static uint8_t x192 = UINT8_MAX;
	volatile int32_t t47 = 433;

	t47 = (((x189|x190)&x191)/x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int16_t x193 = INT16_MAX;
	static uint32_t x194 = 7921830U;
	volatile uint64_t x195 = 21220070LLU;
	uint16_t x196 = 976U;
	volatile uint64_t t48 = 4606209397LLU;

	t48 = (((x193|x194)&x195)/x196);

	if (t48 != 4350LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x197 = -1;
	volatile int16_t x198 = -199;
	volatile uint8_t x199 = 1U;
	volatile int32_t t49 = 0;

	t49 = (((x197|x198)&x199)/x200);

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x202 = 3U;
	int16_t x203 = INT16_MAX;
	int8_t x204 = 13;
	volatile int64_t t50 = 2LL;

	t50 = (((x201|x202)&x203)/x204);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x205 = 6U;
	static int8_t x206 = INT8_MIN;
	int8_t x207 = -12;
	static int16_t x208 = INT16_MIN;
	volatile int32_t t51 = 0;

	t51 = (((x205|x206)&x207)/x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = INT8_MIN;
	int32_t x210 = -1249;
	int8_t x211 = -1;

	t52 = (((x209|x210)&x211)/x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x213 = 28U;
	volatile int32_t x214 = INT32_MIN;
	volatile uint16_t x215 = 967U;
	int8_t x216 = -1;

	t53 = (((x213|x214)&x215)/x216);

	if (t53 != -4) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x217 = INT16_MIN;
	volatile uint16_t x218 = 59U;
	volatile int16_t x219 = INT16_MIN;
	static volatile int64_t t54 = 309572690370892LL;

	t54 = (((x217|x218)&x219)/x220);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x221 = 184U;
	volatile int32_t x222 = INT32_MAX;
	volatile uint16_t x223 = UINT16_MAX;
	int32_t t55 = 994040088;

	t55 = (((x221|x222)&x223)/x224);

	if (t55 != -105) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x225 = UINT32_MAX;
	int8_t x226 = INT8_MIN;
	uint8_t x227 = UINT8_MAX;
	volatile int8_t x228 = -4;
	static volatile uint32_t t56 = 79U;

	t56 = (((x225|x226)&x227)/x228);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = INT16_MAX;
	int8_t x230 = INT8_MIN;
	volatile uint32_t x231 = UINT32_MAX;
	int16_t x232 = INT16_MIN;
	static uint32_t t57 = 224667493U;

	t57 = (((x229|x230)&x231)/x232);

	if (t57 != 1U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x233 = 9U;
	int64_t x234 = INT64_MIN;
	int16_t x235 = INT16_MIN;
	uint16_t x236 = 293U;
	volatile int64_t t58 = 2150406031724206LL;

	t58 = (((x233|x234)&x235)/x236);

	if (t58 != -31479085450016299LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x238 = 1;
	uint16_t x239 = 8953U;
	volatile int32_t x240 = 2016570;
	int32_t t59 = 3410;

	t59 = (((x237|x238)&x239)/x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = 3290746297LL;
	int32_t x242 = INT32_MAX;
	volatile uint8_t x243 = 57U;
	uint8_t x244 = 27U;

	t60 = (((x241|x242)&x243)/x244);

	if (t60 != 2LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MAX;
	int64_t x246 = INT64_MIN;
	int64_t x247 = INT64_MAX;
	uint8_t x248 = 1U;
	int64_t t61 = 35857795563LL;

	t61 = (((x245|x246)&x247)/x248);

	if (t61 != 127LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = INT8_MIN;
	uint8_t x250 = UINT8_MAX;
	int16_t x251 = -1;
	volatile int16_t x252 = INT16_MIN;
	static volatile int32_t t62 = 3554;

	t62 = (((x249|x250)&x251)/x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x253 = 21479325399301555LLU;
	volatile int32_t x254 = INT32_MIN;
	int8_t x255 = -1;
	uint64_t t63 = 65542921LLU;

	t63 = (((x253|x254)&x255)/x256);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int8_t x257 = INT8_MAX;
	int8_t x258 = -1;
	int64_t x259 = 3179212LL;
	volatile int64_t t64 = 64960LL;

	t64 = (((x257|x258)&x259)/x260);

	if (t64 != -3179212LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = INT32_MAX;
	uint16_t x262 = 632U;
	uint32_t x263 = 323U;
	uint64_t x264 = 259220659LLU;
	uint64_t t65 = 7LLU;

	t65 = (((x261|x262)&x263)/x264);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x265 = 58U;
	int8_t x268 = 20;
	static volatile int64_t t66 = 4522743656880340LL;

	t66 = (((x265|x266)&x267)/x268);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x270 = -424LL;
	int64_t x272 = INT64_MIN;
	volatile int64_t t67 = -7900707367870LL;

	t67 = (((x269|x270)&x271)/x272);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int16_t x273 = INT16_MIN;
	static int16_t x275 = -25;
	static int32_t x276 = -1;
	static int32_t t68 = 1584;

	t68 = (((x273|x274)&x275)/x276);

	if (t68 != 32766) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x277 = UINT64_MAX;
	static int64_t x278 = INT64_MIN;
	int64_t x279 = 126706701909443LL;
	volatile uint64_t t69 = 11118564141257LLU;

	t69 = (((x277|x278)&x279)/x280);

	if (t69 != 29501LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x282 = 4;
	int32_t x283 = -1;
	static int64_t x284 = INT64_MAX;

	t70 = (((x281|x282)&x283)/x284);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t t71 = 31500079U;

	t71 = (((x285|x286)&x287)/x288);

	if (t71 != 61696U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = INT32_MIN;
	static int64_t x291 = INT64_MAX;
	volatile int16_t x292 = 87;
	uint64_t t72 = 2499763745LLU;

	t72 = (((x289|x290)&x291)/x292);

	if (t72 != 106015770513876921LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x294 = INT64_MIN;
	int64_t x295 = INT64_MIN;
	volatile int64_t t73 = -78744057LL;

	t73 = (((x293|x294)&x295)/x296);

	if (t73 != -1844674407370955161LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = -1LL;
	volatile int16_t x298 = -14816;
	static volatile int64_t x300 = 714811566125312LL;

	t74 = (((x297|x298)&x299)/x300);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = INT64_MIN;
	int64_t x302 = INT64_MIN;
	uint32_t x303 = UINT32_MAX;
	int64_t t75 = 5338LL;

	t75 = (((x301|x302)&x303)/x304);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int16_t x305 = 634;
	int32_t x307 = -138;
	uint16_t x308 = 5602U;
	int32_t t76 = 166354222;

	t76 = (((x305|x306)&x307)/x308);

	if (t76 != 65644) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x310 = 27004U;
	int32_t x311 = INT32_MIN;
	static volatile int64_t t77 = 5125LL;

	t77 = (((x309|x310)&x311)/x312);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = -1LL;
	volatile int8_t x314 = INT8_MIN;
	uint32_t x315 = 50469237U;

	t78 = (((x313|x314)&x315)/x316);

	if (t78 != 6LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x317 = 30U;
	volatile int64_t x318 = INT64_MIN;
	static int64_t x319 = -1LL;
	int64_t x320 = INT64_MAX;
	int64_t t79 = -160337850065LL;

	t79 = (((x317|x318)&x319)/x320);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = -1;
	static volatile int8_t x322 = INT8_MAX;
	static int16_t x323 = 1204;
	int8_t x324 = 1;
	int32_t t80 = 304;

	t80 = (((x321|x322)&x323)/x324);

	if (t80 != 1204) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x325 = 502041LLU;
	static int8_t x326 = -1;
	int16_t x327 = INT16_MIN;
	static volatile int16_t x328 = INT16_MIN;

	t81 = (((x325|x326)&x327)/x328);

	if (t81 != 1LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = -1;
	uint16_t x330 = 11278U;
	uint32_t x331 = 1346808662U;
	int64_t x332 = -118220246351764937LL;

	t82 = (((x329|x330)&x331)/x332);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x333 = INT32_MIN;
	int16_t x334 = INT16_MIN;
	volatile uint16_t x335 = 13716U;
	int32_t x336 = 2570808;
	int32_t t83 = 3;

	t83 = (((x333|x334)&x335)/x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = INT32_MIN;
	uint32_t x338 = 36U;
	volatile int8_t x339 = INT8_MAX;
	volatile uint16_t x340 = 20U;
	volatile uint32_t t84 = 12U;

	t84 = (((x337|x338)&x339)/x340);

	if (t84 != 1U) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x341 = INT16_MIN;
	volatile int8_t x342 = -21;
	uint8_t x343 = 45U;
	static volatile int64_t x344 = INT64_MIN;
	static volatile int64_t t85 = 20800107053324797LL;

	t85 = (((x341|x342)&x343)/x344);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x345 = 231182262U;
	uint64_t x346 = 6951488788980753669LLU;
	int32_t x347 = INT32_MAX;
	volatile uint8_t x348 = 10U;
	uint64_t t86 = 1628952LLU;

	t86 = (((x345|x346)&x347)/x348);

	if (t86 != 53372101LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x351 = UINT8_MAX;
	int32_t t87 = -795072218;

	t87 = (((x349|x350)&x351)/x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x354 = INT64_MIN;
	uint16_t x356 = 455U;
	volatile int64_t t88 = -466332663LL;

	t88 = (((x353|x354)&x355)/x356);

	if (t88 != -4719744LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x359 = INT8_MAX;
	int32_t x360 = INT32_MAX;
	static uint64_t t89 = 477398712LLU;

	t89 = (((x357|x358)&x359)/x360);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x365 = -1;
	int64_t x366 = INT64_MIN;
	static int16_t x367 = 5084;
	uint64_t x368 = UINT64_MAX;
	volatile uint64_t t90 = 1268477468LLU;

	t90 = (((x365|x366)&x367)/x368);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x369 = -1;
	int16_t x370 = INT16_MIN;
	volatile int16_t x371 = 2249;
	uint32_t x372 = UINT32_MAX;
	static volatile uint32_t t91 = 26U;

	t91 = (((x369|x370)&x371)/x372);

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x373 = INT8_MIN;
	uint64_t x374 = 8918184LLU;
	static int8_t x375 = -17;
	int16_t x376 = -1;

	t92 = (((x373|x374)&x375)/x376);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x377 = INT16_MIN;
	volatile int64_t x378 = INT64_MAX;
	int64_t x379 = -1LL;
	int32_t x380 = -435936;

	t93 = (((x377|x378)&x379)/x380);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x382 = 16162U;
	static uint64_t x383 = 2192LLU;

	t94 = (((x381|x382)&x383)/x384);

	if (t94 != 2LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x385 = 93LLU;
	volatile int16_t x386 = -1;
	static volatile uint16_t x387 = 20714U;
	int64_t x388 = INT64_MIN;

	t95 = (((x385|x386)&x387)/x388);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x389 = 0U;
	volatile int32_t x390 = 960;
	uint32_t x391 = 6051344U;
	volatile int64_t x392 = INT64_MAX;
	int64_t t96 = 40504665625LL;

	t96 = (((x389|x390)&x391)/x392);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x393 = 259264744LLU;
	static int64_t x394 = INT64_MAX;
	int8_t x395 = INT8_MAX;
	int8_t x396 = 3;
	static uint64_t t97 = 2581311542728LLU;

	t97 = (((x393|x394)&x395)/x396);

	if (t97 != 42LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x397 = INT64_MAX;
	int32_t x398 = -1;
	int32_t x400 = INT32_MAX;
	uint64_t t98 = 742LLU;

	t98 = (((x397|x398)&x399)/x400);

	if (t98 != 3LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x401 = INT64_MIN;
	int32_t x402 = INT32_MAX;
	static int16_t x404 = -1;

	t99 = (((x401|x402)&x403)/x404);

	if (t99 != -2147483647LL) { NG(); } else { ; }
	
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

