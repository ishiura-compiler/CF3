#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x7 = 186843849LLU;
int32_t x13 = INT32_MAX;
static int32_t t3 = -7124026;
int16_t x19 = -1;
int64_t x22 = 15020363743LL;
int64_t x33 = INT64_MIN;
int64_t x39 = -1LL;
static volatile int64_t t10 = -6868589370LL;
int8_t x53 = INT8_MAX;
int8_t x56 = -1;
volatile int64_t x58 = 853674350LL;
int64_t x60 = INT64_MAX;
volatile int64_t t14 = -1LL;
int64_t x62 = INT64_MIN;
static int64_t x70 = -980680787LL;
int32_t x71 = INT32_MIN;
uint8_t x72 = 6U;
uint64_t x78 = 479284008656008335LLU;
uint16_t x86 = UINT16_MAX;
volatile int64_t t21 = 946832363LL;
int64_t x93 = 2221983268043985381LL;
int16_t x94 = 6367;
uint64_t t22 = 445966650404187LLU;
int32_t x101 = INT32_MIN;
static int8_t x102 = 2;
static uint8_t x103 = UINT8_MAX;
int64_t t23 = 259851077LL;
static volatile uint64_t x110 = UINT64_MAX;
volatile int16_t x115 = INT16_MIN;
static int32_t x117 = 28483429;
int8_t x123 = INT8_MIN;
volatile uint32_t t27 = 17U;
int32_t x128 = INT32_MIN;
uint8_t x130 = 19U;
static int16_t x131 = 4;
static int16_t x132 = 3;
uint32_t x133 = 60765719U;
uint32_t t30 = 7185U;
volatile int16_t x144 = INT16_MAX;
static int32_t x145 = INT32_MIN;
static volatile uint8_t x148 = UINT8_MAX;
int16_t x154 = 3010;
int32_t x161 = INT32_MAX;
int8_t x162 = -1;
static int16_t x164 = -1;
static volatile int32_t t37 = -24081855;
uint16_t x169 = UINT16_MAX;
static volatile int32_t x175 = INT32_MAX;
int8_t x176 = INT8_MAX;
volatile uint8_t x178 = 1U;
volatile int16_t x180 = 7900;
volatile uint32_t t45 = 3927U;
int32_t x206 = INT32_MIN;
volatile int64_t t46 = -100754546693LL;
int16_t x210 = INT16_MIN;
int16_t x215 = -399;
int16_t x218 = INT16_MIN;
static int32_t x219 = INT32_MIN;
volatile int32_t t49 = 312103227;
static volatile int64_t x223 = INT64_MIN;
volatile int16_t x225 = 2320;
uint64_t t51 = 76359469242217LLU;
uint64_t x230 = 141962970742451864LLU;
uint16_t x237 = 1247U;
uint8_t x239 = 47U;
int8_t x240 = INT8_MIN;
uint32_t x246 = 345U;
uint32_t t56 = 37329242U;
static volatile uint64_t x253 = UINT64_MAX;
int16_t x256 = -1;
volatile uint64_t t58 = 2047LLU;
int16_t x260 = INT16_MIN;
int32_t x262 = -1046;
int64_t x274 = INT64_MIN;
static int64_t x278 = INT64_MIN;
int16_t x281 = INT16_MIN;
int8_t x282 = -1;
uint16_t x283 = 6U;
int64_t x288 = -1LL;
volatile uint8_t x289 = UINT8_MAX;
static int8_t x298 = INT8_MIN;
uint32_t x300 = UINT32_MAX;
volatile uint32_t t69 = 1U;
static int8_t x303 = -1;
uint16_t x304 = UINT16_MAX;
static int64_t x305 = INT64_MIN;
uint32_t x310 = 202030U;
uint8_t x313 = 113U;
static volatile uint64_t x317 = UINT64_MAX;
static volatile int8_t x323 = 41;
volatile int16_t x326 = -1;
int16_t x328 = INT16_MIN;
int64_t t76 = 256111LL;
volatile uint32_t t77 = 22195U;
int8_t x341 = -1;
static int16_t x345 = INT16_MAX;
static uint64_t x349 = UINT64_MAX;
uint8_t x351 = 1U;
volatile uint64_t t84 = 50LLU;
uint32_t x361 = 3426U;
volatile int64_t t85 = -144158980436LL;
int32_t x365 = 33708869;
volatile int16_t x369 = -1;
static uint32_t x370 = 1548U;
uint16_t x381 = 1858U;
volatile uint8_t x382 = 53U;
int64_t x385 = INT64_MIN;
int32_t x386 = INT32_MAX;
static int64_t x392 = INT64_MIN;
int32_t x393 = -1;
int16_t x395 = INT16_MIN;
static int32_t x403 = INT32_MAX;
int64_t t95 = -32321208304632LL;
int64_t x408 = INT64_MAX;
uint64_t x410 = UINT64_MAX;
int16_t x411 = INT16_MIN;


void f0(void) {
	static uint64_t x1 = 7865224LLU;
	uint64_t x2 = UINT64_MAX;
	int32_t x3 = INT32_MAX;
	static int32_t x4 = -1;
	static volatile uint64_t t0 = 6902054LLU;

	t0 = (((x1&x2)%x3)%x4);

	if (t0 != 7865224LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -58;
	int16_t x6 = -1;
	int16_t x8 = 8;
	uint64_t t1 = 991LLU;

	t1 = (((x5&x6)%x7)%x8);

	if (t1 != 7LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -13;
	int64_t x10 = -1LL;
	int32_t x11 = INT32_MIN;
	int8_t x12 = 3;
	int64_t t2 = 48482708140LL;

	t2 = (((x9&x10)%x11)%x12);

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x14 = -1;
	uint16_t x15 = 1797U;
	int16_t x16 = INT16_MIN;

	t3 = (((x13&x14)%x15)%x16);

	if (t3 != 361) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = INT16_MAX;
	uint64_t x18 = 46101519306571LLU;
	uint16_t x20 = 54U;
	static volatile uint64_t t4 = 33492LLU;

	t4 = (((x17&x18)%x19)%x20);

	if (t4 != 27LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = INT16_MIN;
	static uint8_t x23 = UINT8_MAX;
	static uint64_t x24 = UINT64_MAX;
	uint64_t t5 = 134007LLU;

	t5 = (((x21&x22)%x23)%x24);

	if (t5 != 75LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = INT16_MIN;
	uint64_t x26 = UINT64_MAX;
	int32_t x27 = -87079807;
	int16_t x28 = INT16_MAX;
	volatile uint64_t t6 = 95929LLU;

	t6 = (((x25&x26)%x27)%x28);

	if (t6 != 17887LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x29 = -1;
	uint8_t x30 = 1U;
	int32_t x31 = -880585568;
	int32_t x32 = -1;
	volatile int32_t t7 = 8;

	t7 = (((x29&x30)%x31)%x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x34 = 6U;
	int64_t x35 = INT64_MAX;
	volatile uint16_t x36 = 7197U;
	volatile int64_t t8 = 2061228732LL;

	t8 = (((x33&x34)%x35)%x36);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x37 = 8212036880LLU;
	volatile int64_t x38 = INT64_MIN;
	int16_t x40 = -12341;
	volatile uint64_t t9 = 127314976LLU;

	t9 = (((x37&x38)%x39)%x40);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MAX;
	int64_t x42 = INT64_MAX;
	int8_t x43 = 8;
	static uint8_t x44 = 1U;

	t10 = (((x41&x42)%x43)%x44);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x45 = INT16_MAX;
	int16_t x46 = INT16_MIN;
	uint16_t x47 = 124U;
	int64_t x48 = INT64_MAX;
	static volatile int64_t t11 = -69709868093422LL;

	t11 = (((x45&x46)%x47)%x48);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x49 = UINT16_MAX;
	int16_t x50 = 0;
	int64_t x51 = INT64_MIN;
	static uint8_t x52 = 10U;
	int64_t t12 = -834538989LL;

	t12 = (((x49&x50)%x51)%x52);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x54 = UINT8_MAX;
	int32_t x55 = INT32_MIN;
	int32_t t13 = -7;

	t13 = (((x53&x54)%x55)%x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = UINT32_MAX;
	int16_t x59 = INT16_MAX;

	t14 = (((x57&x58)%x59)%x60);

	if (t14 != 28466LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MIN;
	uint8_t x63 = 1U;
	int8_t x64 = -1;
	int64_t t15 = -3655LL;

	t15 = (((x61&x62)%x63)%x64);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int64_t x65 = INT64_MIN;
	int16_t x66 = -1;
	uint64_t x67 = UINT64_MAX;
	static int32_t x68 = -1;
	uint64_t t16 = 189959LLU;

	t16 = (((x65&x66)%x67)%x68);

	if (t16 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = -1;
	static int64_t t17 = -101458467LL;

	t17 = (((x69&x70)%x71)%x72);

	if (t17 != -5LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = -185100877774306LL;
	volatile int8_t x79 = -1;
	int8_t x80 = INT8_MIN;
	volatile uint64_t t18 = 246402186989450LLU;

	t18 = (((x77&x78)%x79)%x80);

	if (t18 != 479142995617529870LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x81 = UINT8_MAX;
	static int64_t x82 = -1LL;
	int8_t x83 = 4;
	static int64_t x84 = -1LL;
	int64_t t19 = 82535844489LL;

	t19 = (((x81&x82)%x83)%x84);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x85 = INT16_MIN;
	uint32_t x87 = 618U;
	int16_t x88 = -6697;
	uint32_t t20 = 3761724U;

	t20 = (((x85&x86)%x87)%x88);

	if (t20 != 14U) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x89 = INT16_MAX;
	int64_t x90 = -468952LL;
	uint32_t x91 = UINT32_MAX;
	int64_t x92 = INT64_MIN;

	t21 = (((x89&x90)%x91)%x92);

	if (t21 != 22568LL) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int32_t x95 = -1;
	uint64_t x96 = 5LLU;

	t22 = (((x93&x94)%x95)%x96);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x104 = -62LL;

	t23 = (((x101&x102)%x103)%x104);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x109 = INT16_MIN;
	static uint8_t x111 = 2U;
	uint8_t x112 = 2U;
	uint64_t t24 = 74230699848629LLU;

	t24 = (((x109&x110)%x111)%x112);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x113 = 20780U;
	volatile int64_t x114 = INT64_MIN;
	static int16_t x116 = INT16_MIN;
	int64_t t25 = 27455354706641LL;

	t25 = (((x113&x114)%x115)%x116);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x118 = -1;
	static int16_t x119 = INT16_MIN;
	int32_t x120 = 221533;
	volatile int32_t t26 = -414421701;

	t26 = (((x117&x118)%x119)%x120);

	if (t26 != 8037) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x121 = INT16_MAX;
	int16_t x122 = INT16_MAX;
	uint32_t x124 = 291291288U;

	t27 = (((x121&x122)%x123)%x124);

	if (t27 != 127U) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x125 = UINT16_MAX;
	uint64_t x126 = UINT64_MAX;
	int16_t x127 = -1;
	static volatile uint64_t t28 = 67640291517050LLU;

	t28 = (((x125&x126)%x127)%x128);

	if (t28 != 65535LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x129 = INT8_MIN;
	volatile int32_t t29 = -63878131;

	t29 = (((x129&x130)%x131)%x132);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x134 = UINT32_MAX;
	int16_t x135 = 37;
	int32_t x136 = INT32_MIN;

	t30 = (((x133&x134)%x135)%x136);

	if (t30 != 27U) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x137 = INT64_MIN;
	uint64_t x138 = UINT64_MAX;
	static int64_t x139 = -45932585322LL;
	volatile int64_t x140 = INT64_MAX;
	volatile uint64_t t31 = 2011LLU;

	t31 = (((x137&x138)%x139)%x140);

	if (t31 != 1LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x141 = 11408U;
	int8_t x142 = INT8_MIN;
	int64_t x143 = INT64_MIN;
	int64_t t32 = -427297204LL;

	t32 = (((x141&x142)%x143)%x144);

	if (t32 != 11392LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x146 = UINT16_MAX;
	int32_t x147 = INT32_MAX;
	volatile int32_t t33 = -13715541;

	t33 = (((x145&x146)%x147)%x148);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x149 = 5U;
	static volatile int8_t x150 = INT8_MIN;
	uint32_t x151 = 53848U;
	int8_t x152 = -6;
	static uint32_t t34 = 581U;

	t34 = (((x149&x150)%x151)%x152);

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x153 = UINT8_MAX;
	uint8_t x155 = 95U;
	uint64_t x156 = UINT64_MAX;
	volatile uint64_t t35 = 56573837486LLU;

	t35 = (((x153&x154)%x155)%x156);

	if (t35 != 4LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x157 = 1369U;
	int64_t x158 = INT64_MIN;
	int64_t x159 = 667166LL;
	static int8_t x160 = -1;
	volatile int64_t t36 = 1130513324020126LL;

	t36 = (((x157&x158)%x159)%x160);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x163 = 147494854;

	t37 = (((x161&x162)%x163)%x164);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x170 = INT32_MAX;
	static int8_t x171 = INT8_MIN;
	volatile int16_t x172 = INT16_MAX;
	int32_t t38 = -1831856;

	t38 = (((x169&x170)%x171)%x172);

	if (t38 != 127) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x173 = 2U;
	static uint16_t x174 = 2U;
	volatile int32_t t39 = 751861;

	t39 = (((x173&x174)%x175)%x176);

	if (t39 != 2) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x177 = 1U;
	volatile int32_t x179 = INT32_MAX;
	static volatile int32_t t40 = 17;

	t40 = (((x177&x178)%x179)%x180);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x181 = 11U;
	int64_t x182 = INT64_MAX;
	int8_t x183 = -1;
	volatile int8_t x184 = INT8_MAX;
	int64_t t41 = -47658369130LL;

	t41 = (((x181&x182)%x183)%x184);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int8_t x185 = -2;
	int64_t x186 = 1252950480295638779LL;
	int32_t x187 = INT32_MIN;
	int8_t x188 = 24;
	volatile int64_t t42 = -158LL;

	t42 = (((x185&x186)%x187)%x188);

	if (t42 != 10LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x189 = 124706982753883585LLU;
	uint8_t x190 = 7U;
	volatile uint64_t x191 = 3432778030913120120LLU;
	int8_t x192 = -1;
	static volatile uint64_t t43 = 1545442367858690214LLU;

	t43 = (((x189&x190)%x191)%x192);

	if (t43 != 1LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x193 = 4120807183517LLU;
	volatile uint16_t x194 = 907U;
	int64_t x195 = 166961LL;
	static int32_t x196 = INT32_MIN;
	uint64_t t44 = 5037827821LLU;

	t44 = (((x193&x194)%x195)%x196);

	if (t44 != 137LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x197 = 0U;
	int32_t x198 = -632;
	static int8_t x199 = INT8_MAX;
	volatile int16_t x200 = -1;

	t45 = (((x197&x198)%x199)%x200);

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x205 = 61U;
	int32_t x207 = 51619;
	volatile int64_t x208 = INT64_MIN;

	t46 = (((x205&x206)%x207)%x208);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x209 = -258043096257LL;
	uint32_t x211 = 414028U;
	uint8_t x212 = 4U;
	int64_t t47 = 2243928391433782664LL;

	t47 = (((x209&x210)%x211)%x212);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int64_t x213 = INT64_MIN;
	int64_t x214 = INT64_MIN;
	static uint32_t x216 = 3719U;
	int64_t t48 = 2464659LL;

	t48 = (((x213&x214)%x215)%x216);

	if (t48 != -113LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x217 = INT8_MIN;
	int32_t x220 = INT32_MIN;

	t49 = (((x217&x218)%x219)%x220);

	if (t49 != -32768) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x221 = INT64_MAX;
	int64_t x222 = -429647370475461LL;
	int8_t x224 = -3;
	static volatile int64_t t50 = 2194710253543LL;

	t50 = (((x221&x222)%x223)%x224);

	if (t50 != 2LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x226 = -1;
	uint64_t x227 = 986146650958889LLU;
	uint16_t x228 = 3U;

	t51 = (((x225&x226)%x227)%x228);

	if (t51 != 1LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x229 = -14;
	volatile uint16_t x231 = 281U;
	volatile int8_t x232 = INT8_MAX;
	uint64_t t52 = 58871993LLU;

	t52 = (((x229&x230)%x231)%x232);

	if (t52 != 88LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x233 = UINT16_MAX;
	static int32_t x234 = -572;
	uint8_t x235 = 1U;
	static int16_t x236 = -1;
	static int32_t t53 = 421883409;

	t53 = (((x233&x234)%x235)%x236);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x238 = 1LL;
	volatile int64_t t54 = -533153LL;

	t54 = (((x237&x238)%x239)%x240);

	if (t54 != 1LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x241 = UINT16_MAX;
	uint32_t x242 = 120U;
	int16_t x243 = INT16_MIN;
	static uint16_t x244 = 1955U;
	uint32_t t55 = 14U;

	t55 = (((x241&x242)%x243)%x244);

	if (t55 != 120U) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int32_t x245 = -1;
	int16_t x247 = 363;
	int16_t x248 = 2;

	t56 = (((x245&x246)%x247)%x248);

	if (t56 != 1U) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x249 = -39;
	uint64_t x250 = 1896394239LLU;
	static int64_t x251 = INT64_MIN;
	volatile int8_t x252 = -3;
	static volatile uint64_t t57 = 0LLU;

	t57 = (((x249&x250)%x251)%x252);

	if (t57 != 1896394201LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x254 = INT32_MAX;
	volatile int8_t x255 = INT8_MIN;

	t58 = (((x253&x254)%x255)%x256);

	if (t58 != 2147483647LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x257 = INT8_MIN;
	int8_t x258 = INT8_MIN;
	int8_t x259 = -1;
	static volatile int32_t t59 = -719695062;

	t59 = (((x257&x258)%x259)%x260);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x261 = UINT16_MAX;
	int16_t x263 = INT16_MIN;
	uint16_t x264 = 4547U;
	volatile int32_t t60 = -9128;

	t60 = (((x261&x262)%x263)%x264);

	if (t60 != 4440) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x265 = INT16_MIN;
	int8_t x266 = -4;
	int64_t x267 = INT64_MIN;
	volatile uint64_t x268 = 32833849865237844LLU;
	uint64_t t61 = 2106501405042889072LLU;

	t61 = (((x265&x266)%x267)%x268);

	if (t61 != 26954299311088364LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x269 = INT16_MIN;
	int8_t x270 = 0;
	static int16_t x271 = 13;
	int8_t x272 = 3;
	int32_t t62 = 709;

	t62 = (((x269&x270)%x271)%x272);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x273 = -1;
	uint64_t x275 = 4LLU;
	static uint32_t x276 = 36411880U;
	volatile uint64_t t63 = 421LLU;

	t63 = (((x273&x274)%x275)%x276);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x277 = UINT8_MAX;
	uint32_t x279 = 13042U;
	int16_t x280 = -1;
	volatile int64_t t64 = -29985LL;

	t64 = (((x277&x278)%x279)%x280);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x284 = 21916476756608LL;
	int64_t t65 = -142LL;

	t65 = (((x281&x282)%x283)%x284);

	if (t65 != -2LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x285 = INT8_MAX;
	uint64_t x286 = 103423LLU;
	int32_t x287 = -152274;
	uint64_t t66 = 5994615439855700LLU;

	t66 = (((x285&x286)%x287)%x288);

	if (t66 != 127LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x290 = 371311LL;
	int32_t x291 = -4146;
	int64_t x292 = -1LL;
	volatile int64_t t67 = -88590518LL;

	t67 = (((x289&x290)%x291)%x292);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x293 = 16LLU;
	int8_t x294 = INT8_MIN;
	int8_t x295 = INT8_MIN;
	int16_t x296 = INT16_MAX;
	volatile uint64_t t68 = 7058087276130080LLU;

	t68 = (((x293&x294)%x295)%x296);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x297 = -1;
	int8_t x299 = INT8_MIN;

	t69 = (((x297&x298)%x299)%x300);

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x301 = INT8_MIN;
	int8_t x302 = INT8_MIN;
	volatile int32_t t70 = 17;

	t70 = (((x301&x302)%x303)%x304);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x306 = UINT64_MAX;
	volatile uint16_t x307 = 1U;
	int16_t x308 = INT16_MAX;
	static volatile uint64_t t71 = 29432135LLU;

	t71 = (((x305&x306)%x307)%x308);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x309 = INT8_MIN;
	uint16_t x311 = 51U;
	int16_t x312 = -1;
	uint32_t t72 = 584U;

	t72 = (((x309&x310)%x311)%x312);

	if (t72 != 24U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x314 = INT16_MAX;
	int16_t x315 = -12152;
	int8_t x316 = -31;
	static int32_t t73 = -1;

	t73 = (((x313&x314)%x315)%x316);

	if (t73 != 20) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x318 = -1;
	int8_t x319 = INT8_MAX;
	uint32_t x320 = 2899U;
	volatile uint64_t t74 = 25968527879176229LLU;

	t74 = (((x317&x318)%x319)%x320);

	if (t74 != 1LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x321 = 48U;
	int8_t x322 = INT8_MIN;
	volatile int8_t x324 = 8;
	int32_t t75 = -1700261;

	t75 = (((x321&x322)%x323)%x324);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x325 = INT64_MIN;
	volatile int64_t x327 = INT64_MAX;

	t76 = (((x325&x326)%x327)%x328);

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x329 = INT32_MAX;
	static uint32_t x330 = 6U;
	uint32_t x331 = UINT32_MAX;
	int8_t x332 = -1;

	t77 = (((x329&x330)%x331)%x332);

	if (t77 != 6U) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x333 = INT16_MIN;
	static int8_t x334 = INT8_MIN;
	int8_t x335 = INT8_MIN;
	int8_t x336 = INT8_MAX;
	int32_t t78 = -84294168;

	t78 = (((x333&x334)%x335)%x336);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x337 = INT8_MIN;
	uint64_t x338 = 3213499105324LLU;
	uint32_t x339 = UINT32_MAX;
	int64_t x340 = INT64_MIN;
	volatile uint64_t t79 = 7405532537318LLU;

	t79 = (((x337&x338)%x339)%x340);

	if (t79 != 863568620LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x342 = -1;
	uint32_t x343 = UINT32_MAX;
	uint8_t x344 = UINT8_MAX;
	uint32_t t80 = 63664U;

	t80 = (((x341&x342)%x343)%x344);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x346 = -1;
	volatile uint64_t x347 = UINT64_MAX;
	int32_t x348 = -8819;
	static uint64_t t81 = 578155830LLU;

	t81 = (((x345&x346)%x347)%x348);

	if (t81 != 32767LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x350 = INT8_MIN;
	static volatile int16_t x352 = -1;
	static uint64_t t82 = 3649059LLU;

	t82 = (((x349&x350)%x351)%x352);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x353 = INT16_MAX;
	int64_t x354 = INT64_MAX;
	int16_t x355 = INT16_MAX;
	volatile int8_t x356 = 29;
	volatile int64_t t83 = -7391161172649LL;

	t83 = (((x353&x354)%x355)%x356);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x357 = 929375734646LLU;
	int32_t x358 = -1;
	uint32_t x359 = 5U;
	int32_t x360 = -1;

	t84 = (((x357&x358)%x359)%x360);

	if (t84 != 1LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x362 = INT64_MIN;
	static uint32_t x363 = 21729164U;
	static int64_t x364 = INT64_MIN;

	t85 = (((x361&x362)%x363)%x364);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x366 = UINT64_MAX;
	static uint16_t x367 = UINT16_MAX;
	int32_t x368 = INT32_MAX;
	volatile uint64_t t86 = 9592354096LLU;

	t86 = (((x365&x366)%x367)%x368);

	if (t86 != 23879LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x371 = 33256741063LLU;
	volatile int64_t x372 = -50210060582999LL;
	volatile uint64_t t87 = 511620801734420LLU;

	t87 = (((x369&x370)%x371)%x372);

	if (t87 != 1548LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x373 = UINT32_MAX;
	int16_t x374 = 7;
	volatile uint64_t x375 = 129614LLU;
	uint16_t x376 = 14473U;
	uint64_t t88 = 7LLU;

	t88 = (((x373&x374)%x375)%x376);

	if (t88 != 7LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x377 = INT32_MAX;
	int8_t x378 = INT8_MIN;
	int8_t x379 = INT8_MIN;
	static volatile int8_t x380 = INT8_MIN;
	volatile int32_t t89 = -7055580;

	t89 = (((x377&x378)%x379)%x380);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x383 = INT16_MIN;
	int8_t x384 = 7;
	volatile int32_t t90 = 39;

	t90 = (((x381&x382)%x383)%x384);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x387 = 34261770441LL;
	volatile int32_t x388 = INT32_MIN;
	volatile int64_t t91 = 21LL;

	t91 = (((x385&x386)%x387)%x388);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x389 = INT16_MAX;
	static uint8_t x390 = 83U;
	static uint16_t x391 = UINT16_MAX;
	int64_t t92 = 1142800910761899423LL;

	t92 = (((x389&x390)%x391)%x392);

	if (t92 != 83LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x394 = 953;
	uint32_t x396 = UINT32_MAX;
	volatile uint32_t t93 = 40420260U;

	t93 = (((x393&x394)%x395)%x396);

	if (t93 != 953U) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x397 = 6790938U;
	int16_t x398 = INT16_MAX;
	volatile int8_t x399 = INT8_MAX;
	int8_t x400 = -1;
	volatile uint32_t t94 = 8U;

	t94 = (((x397&x398)%x399)%x400);

	if (t94 != 88U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x401 = -10;
	int64_t x402 = 13162879LL;
	int32_t x404 = -308987076;

	t95 = (((x401&x402)%x403)%x404);

	if (t95 != 13162870LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x405 = INT16_MIN;
	static uint16_t x406 = UINT16_MAX;
	static int32_t x407 = INT32_MIN;
	volatile int64_t t96 = -846881LL;

	t96 = (((x405&x406)%x407)%x408);

	if (t96 != 32768LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x409 = UINT8_MAX;
	int16_t x412 = INT16_MAX;
	volatile uint64_t t97 = 434211902LLU;

	t97 = (((x409&x410)%x411)%x412);

	if (t97 != 255LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x413 = INT64_MIN;
	int8_t x414 = INT8_MIN;
	volatile int16_t x415 = INT16_MAX;
	uint16_t x416 = 147U;
	int64_t t98 = -10348628LL;

	t98 = (((x413&x414)%x415)%x416);

	if (t98 != -8LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x417 = -34071969535916LL;
	volatile int64_t x418 = INT64_MIN;
	int64_t x419 = -149LL;
	int64_t x420 = INT64_MAX;
	volatile int64_t t99 = -13240840273LL;

	t99 = (((x417&x418)%x419)%x420);

	if (t99 != -51LL) { NG(); } else { ; }
	
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

