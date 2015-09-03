#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x5 = -1;
uint16_t x18 = 3U;
int16_t x22 = 1;
int16_t x24 = INT16_MAX;
volatile uint32_t t6 = 713652852U;
int8_t x36 = -1;
static int64_t t8 = 1LL;
uint64_t x37 = UINT64_MAX;
int8_t x42 = INT8_MIN;
int8_t x57 = 0;
int16_t x60 = INT16_MIN;
volatile uint64_t x78 = 55LLU;
volatile uint64_t t15 = UINT64_MAX;
static int16_t x84 = -1;
int32_t t17 = 7;
int32_t x89 = 4996;
int16_t x90 = INT16_MIN;
volatile uint32_t t18 = 1898537978U;
int16_t x93 = INT16_MIN;
uint64_t t19 = UINT64_MAX;
int16_t x103 = -2583;
int32_t x104 = -28;
int64_t x106 = INT64_MIN;
uint64_t t22 = 42LLU;
int32_t x110 = -1;
int32_t x112 = -13;
volatile int8_t x114 = INT8_MAX;
int32_t x115 = 375700254;
volatile int64_t x116 = INT64_MIN;
static int16_t x120 = INT16_MIN;
volatile uint64_t x121 = 520702996807899952LLU;
int8_t x128 = 1;
int32_t x142 = INT32_MIN;
uint64_t x147 = 4182808362590679233LLU;
volatile int16_t x150 = -1;
volatile int32_t t31 = -690991735;
int32_t x156 = 8645039;
int32_t x158 = INT32_MAX;
uint16_t x164 = 0U;
uint64_t t34 = 512478372796849LLU;
int8_t x183 = -1;
int16_t x185 = -13;
int16_t x189 = INT16_MAX;
int16_t x193 = INT16_MIN;
volatile int16_t x209 = INT16_MIN;
uint32_t x210 = 11839U;
int8_t x211 = INT8_MIN;
int64_t x212 = -2919LL;
uint64_t x214 = 119446578449LLU;
int64_t t46 = -93651689277698327LL;
uint32_t x221 = UINT32_MAX;
int8_t x223 = -1;
uint8_t x225 = 1U;
volatile uint32_t t49 = 282251579U;
volatile int64_t x234 = INT64_MIN;
int32_t x238 = INT32_MAX;
static int8_t x243 = 1;
int32_t x259 = INT32_MIN;
volatile uint64_t x260 = 1585728131LLU;
volatile int64_t x263 = -9996738LL;
uint64_t x269 = 5128003628206677060LLU;
int64_t x278 = 14812LL;
uint64_t x279 = 722LLU;
static uint64_t t60 = 7595209005139LLU;
int8_t x285 = INT8_MIN;
uint64_t t62 = UINT64_MAX;
int32_t t64 = 178353;
static int64_t t65 = 72628330547945LL;
int64_t x306 = -1LL;
uint16_t x308 = 808U;
int16_t x310 = INT16_MIN;
uint64_t x324 = 0LLU;
static uint64_t x328 = 0LLU;
volatile int32_t x329 = 447;
volatile uint64_t t71 = 4109577038LLU;
int16_t x339 = INT16_MIN;
volatile int16_t x340 = -245;
static int16_t x343 = -1;
volatile uint32_t t74 = 2U;
static volatile uint16_t x351 = UINT16_MAX;
static int64_t x355 = -1LL;
int32_t x359 = INT32_MIN;
volatile uint64_t t80 = UINT64_MAX;
int32_t x381 = -1;
uint64_t x383 = 1446277LLU;
int32_t x386 = INT32_MAX;
int16_t x391 = INT16_MIN;
static uint64_t x399 = 508242LLU;
uint8_t x400 = UINT8_MAX;
int8_t x403 = INT8_MIN;
int64_t t88 = 20823023530187893LL;
int64_t x407 = -136LL;
int16_t x409 = -25;
int8_t x413 = -1;
int8_t x415 = INT8_MIN;
uint64_t x418 = UINT64_MAX;
int64_t x423 = INT64_MIN;
volatile int32_t x427 = INT32_MIN;
volatile uint16_t x443 = 289U;
static int8_t x446 = 1;


void f0(void) {
	static int32_t x1 = -58;
	int64_t x2 = -1LL;
	volatile uint8_t x3 = 14U;
	int8_t x4 = INT8_MAX;
	static volatile int64_t t0 = 1606234308865964LL;

	t0 = ((x1+(x2|x3))|x4);

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x6 = 2507U;
	static int8_t x7 = -1;
	int64_t x8 = INT64_MAX;
	int64_t t1 = 799629708656LL;

	t1 = ((x5+(x6|x7))|x8);

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 17U;
	int32_t x10 = INT32_MAX;
	int32_t x11 = -35;
	uint8_t x12 = UINT8_MAX;
	static volatile int32_t t2 = 7965769;

	t2 = ((x9+(x10|x11))|x12);

	if (t2 != 255) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MAX;
	uint16_t x14 = 81U;
	static int8_t x15 = -1;
	uint16_t x16 = UINT16_MAX;
	int32_t t3 = 148868;

	t3 = ((x13+(x14|x15))|x16);

	if (t3 != 65535) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = -3878;
	int64_t x19 = -30754132781758695LL;
	int32_t x20 = INT32_MIN;
	int64_t t4 = -4942318537428399LL;

	t4 = ((x17+(x18|x19))|x20);

	if (t4 != -131401739LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = 660;
	uint32_t x23 = 3592633U;
	uint32_t t5 = 111458U;

	t5 = ((x21+(x22|x23))|x24);

	if (t5 != 3604479U) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 54U;
	static uint32_t x26 = 62U;
	int8_t x27 = INT8_MAX;
	static volatile uint8_t x28 = 0U;

	t6 = ((x25+(x26|x27))|x28);

	if (t6 != 181U) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	uint32_t x30 = 0U;
	int8_t x31 = 4;
	int8_t x32 = INT8_MAX;
	volatile int64_t t7 = -366525554LL;

	t7 = ((x29+(x30|x31))|x32);

	if (t7 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -1;
	uint32_t x34 = 890284U;
	int64_t x35 = INT64_MIN;

	t8 = ((x33+(x34|x35))|x36);

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x38 = 1U;
	int8_t x39 = -1;
	int16_t x40 = -1;
	uint64_t t9 = UINT64_MAX;

	t9 = ((x37+(x38|x39))|x40);

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 2436289LLU;
	uint32_t x43 = 6U;
	int16_t x44 = INT16_MAX;
	uint64_t t10 = 36420139LLU;

	t10 = ((x41+(x42|x43))|x44);

	if (t10 != 4297424895LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = UINT32_MAX;
	volatile int16_t x46 = -1;
	int64_t x47 = -1485LL;
	int32_t x48 = INT32_MIN;
	int64_t t11 = 250189706LL;

	t11 = ((x45+(x46|x47))|x48);

	if (t11 != -2LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x58 = 51U;
	int8_t x59 = INT8_MIN;
	int32_t t12 = -1979324;

	t12 = ((x57+(x58|x59))|x60);

	if (t12 != -77) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x65 = 5U;
	int64_t x66 = INT64_MIN;
	int8_t x67 = INT8_MIN;
	int32_t x68 = INT32_MAX;
	int64_t t13 = -121629LL;

	t13 = ((x65+(x66|x67))|x68);

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x73 = 1U;
	int64_t x74 = INT64_MIN;
	int64_t x75 = 13171539320483LL;
	int8_t x76 = 1;
	static int64_t t14 = 6LL;

	t14 = ((x73+(x74|x75))|x76);

	if (t14 != -9223358865315455323LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x77 = 158556LLU;
	int16_t x79 = INT16_MIN;
	int32_t x80 = -1;

	t15 = ((x77+(x78|x79))|x80);

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x81 = -1;
	int16_t x82 = INT16_MIN;
	int8_t x83 = INT8_MIN;
	int32_t t16 = -8;

	t16 = ((x81+(x82|x83))|x84);

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x85 = 34;
	volatile int8_t x86 = 4;
	int16_t x87 = 23;
	int8_t x88 = -52;

	t17 = ((x85+(x86|x87))|x88);

	if (t17 != -3) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x91 = 6U;
	uint32_t x92 = 48842040U;

	t18 = ((x89+(x90|x91))|x92);

	if (t18 != 4294956986U) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x94 = UINT16_MAX;
	volatile uint64_t x95 = 44778936664LLU;
	volatile int16_t x96 = INT16_MIN;

	t19 = ((x93+(x94|x95))|x96);

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x97 = INT8_MIN;
	uint16_t x98 = 49U;
	int32_t x99 = -1;
	static int32_t x100 = INT32_MAX;
	static volatile int32_t t20 = -248876;

	t20 = ((x97+(x98|x99))|x100);

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x101 = INT16_MIN;
	uint64_t x102 = 4521390LLU;
	volatile uint64_t t21 = 30320333162954127LLU;

	t21 = ((x101+(x102|x103))|x104);

	if (t21 != 18446744073709551599LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x105 = 189;
	volatile int16_t x107 = INT16_MAX;
	static uint64_t x108 = 1782495087986251LLU;

	t22 = ((x105+(x106|x107))|x108);

	if (t22 != 9225154531942762239LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int16_t x109 = 0;
	uint8_t x111 = 16U;
	int32_t t23 = -8794104;

	t23 = ((x109+(x110|x111))|x112);

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x113 = 29;
	volatile int64_t t24 = 125695655LL;

	t24 = ((x113+(x114|x115))|x116);

	if (t24 != -9223372036479075428LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x117 = 44U;
	static uint8_t x118 = UINT8_MAX;
	uint16_t x119 = 3917U;
	static volatile int32_t t25 = 690834646;

	t25 = ((x117+(x118|x119))|x120);

	if (t25 != -28629) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x122 = UINT64_MAX;
	volatile uint8_t x123 = 1U;
	int16_t x124 = INT16_MIN;
	static uint64_t t26 = 854291LLU;

	t26 = ((x121+(x122|x123))|x124);

	if (t26 != 18446744073709542191LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x125 = 368862544687685LL;
	int8_t x126 = 1;
	int8_t x127 = INT8_MAX;
	int64_t t27 = 702LL;

	t27 = ((x125+(x126|x127))|x128);

	if (t27 != 368862544687813LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x129 = 193462123LL;
	uint16_t x130 = 1637U;
	int32_t x131 = -1;
	uint8_t x132 = 91U;
	volatile int64_t t28 = -144149654614934LL;

	t28 = ((x129+(x130|x131))|x132);

	if (t28 != 193462139LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x141 = 5758U;
	int32_t x143 = INT32_MIN;
	static int16_t x144 = INT16_MIN;
	int32_t t29 = 1286380;

	t29 = ((x141+(x142|x143))|x144);

	if (t29 != -27010) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x145 = -38;
	static volatile uint64_t x146 = UINT64_MAX;
	int8_t x148 = INT8_MIN;
	uint64_t t30 = 12315946088536LLU;

	t30 = ((x145+(x146|x147))|x148);

	if (t30 != 18446744073709551577LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x149 = 1U;
	volatile int32_t x151 = -1;
	uint16_t x152 = 278U;

	t31 = ((x149+(x150|x151))|x152);

	if (t31 != 278) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x153 = 4;
	int32_t x154 = INT32_MIN;
	uint64_t x155 = 6LLU;
	uint64_t t32 = 946079LLU;

	t32 = ((x153+(x154|x155))|x156);

	if (t32 != 18446744071570713007LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x157 = -121223111;
	int16_t x159 = INT16_MAX;
	static volatile uint64_t x160 = UINT64_MAX;
	static uint64_t t33 = UINT64_MAX;

	t33 = ((x157+(x158|x159))|x160);

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x161 = 10U;
	uint64_t x162 = UINT64_MAX;
	uint16_t x163 = 20182U;

	t34 = ((x161+(x162|x163))|x164);

	if (t34 != 9LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x165 = INT8_MIN;
	static int16_t x166 = INT16_MIN;
	int32_t x167 = INT32_MAX;
	static int8_t x168 = -28;
	volatile int32_t t35 = 1;

	t35 = ((x165+(x166|x167))|x168);

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x177 = -645261;
	uint64_t x178 = 224009197LLU;
	int8_t x179 = 0;
	volatile int32_t x180 = -1;
	volatile uint64_t t36 = UINT64_MAX;

	t36 = ((x177+(x178|x179))|x180);

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x181 = UINT8_MAX;
	int8_t x182 = -1;
	uint16_t x184 = 69U;
	static int32_t t37 = 108220849;

	t37 = ((x181+(x182|x183))|x184);

	if (t37 != 255) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x186 = 1;
	int8_t x187 = INT8_MIN;
	static int32_t x188 = INT32_MIN;
	volatile int32_t t38 = 1;

	t38 = ((x185+(x186|x187))|x188);

	if (t38 != -140) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x190 = -37;
	int16_t x191 = -1;
	volatile int64_t x192 = INT64_MIN;
	volatile int64_t t39 = -1LL;

	t39 = ((x189+(x190|x191))|x192);

	if (t39 != -9223372036854743042LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x194 = UINT8_MAX;
	int32_t x195 = INT32_MAX;
	int8_t x196 = 2;
	volatile int32_t t40 = -9039;

	t40 = ((x193+(x194|x195))|x196);

	if (t40 != 2147450879) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x197 = -1LL;
	volatile int32_t x198 = INT32_MIN;
	static int64_t x199 = 1LL;
	int32_t x200 = -1;
	volatile int64_t t41 = -227838485153277LL;

	t41 = ((x197+(x198|x199))|x200);

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x201 = 30713496U;
	volatile int16_t x202 = -1;
	int32_t x203 = -1;
	int32_t x204 = INT32_MIN;
	static volatile uint32_t t42 = 7U;

	t42 = ((x201+(x202|x203))|x204);

	if (t42 != 2178197143U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x205 = INT8_MIN;
	uint32_t x206 = UINT32_MAX;
	static int16_t x207 = -1;
	int16_t x208 = INT16_MAX;
	uint32_t t43 = UINT32_MAX;

	t43 = ((x205+(x206|x207))|x208);

	if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t t44 = 151507084752243590LL;

	t44 = ((x209+(x210|x211))|x212);

	if (t44 != -65LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x213 = INT64_MIN;
	int8_t x215 = INT8_MIN;
	uint8_t x216 = 64U;
	volatile uint64_t t45 = 274958872374LLU;

	t45 = ((x213+(x214|x215))|x216);

	if (t45 != 9223372036854775761LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x217 = -1;
	volatile int64_t x218 = 283LL;
	int8_t x219 = INT8_MAX;
	volatile int8_t x220 = -9;

	t46 = ((x217+(x218|x219))|x220);

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x222 = INT32_MIN;
	static int32_t x224 = INT32_MIN;
	static volatile uint32_t t47 = 787673392U;

	t47 = ((x221+(x222|x223))|x224);

	if (t47 != 4294967294U) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x226 = -1;
	int64_t x227 = -1LL;
	static uint16_t x228 = UINT16_MAX;
	static int64_t t48 = -44472992LL;

	t48 = ((x225+(x226|x227))|x228);

	if (t48 != 65535LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x229 = 86U;
	int16_t x230 = -1;
	int32_t x231 = INT32_MIN;
	static int32_t x232 = -41949;

	t49 = ((x229+(x230|x231))|x232);

	if (t49 != 4294925431U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x233 = -5127;
	volatile int8_t x235 = INT8_MIN;
	static uint32_t x236 = 0U;
	volatile int64_t t50 = 6LL;

	t50 = ((x233+(x234|x235))|x236);

	if (t50 != -5255LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x237 = UINT8_MAX;
	uint64_t x239 = 51331014649815LLU;
	uint8_t x240 = 21U;
	uint64_t t51 = 1726088686463692LLU;

	t51 = ((x237+(x238|x239))|x240);

	if (t51 != 51331301638399LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x241 = -1LL;
	static uint16_t x242 = 6189U;
	int16_t x244 = -1;
	volatile int64_t t52 = 35615751425LL;

	t52 = ((x241+(x242|x243))|x244);

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x249 = -2993;
	uint64_t x250 = UINT64_MAX;
	volatile uint32_t x251 = 29836U;
	int8_t x252 = -1;
	static uint64_t t53 = UINT64_MAX;

	t53 = ((x249+(x250|x251))|x252);

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint32_t x253 = 2496995U;
	uint8_t x254 = UINT8_MAX;
	static uint8_t x255 = 6U;
	static int16_t x256 = -1;
	volatile uint32_t t54 = UINT32_MAX;

	t54 = ((x253+(x254|x255))|x256);

	if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x257 = -1;
	uint64_t x258 = 55LLU;
	volatile uint64_t t55 = 822441420038LLU;

	t55 = ((x257+(x258|x259))|x260);

	if (t55 != 18446744073147796151LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x261 = -1;
	uint8_t x262 = 3U;
	static int64_t x264 = -142154356466417279LL;
	volatile int64_t t56 = 427144102873395LL;

	t56 = ((x261+(x262|x263))|x264);

	if (t56 != -1050689LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x265 = 3U;
	uint8_t x266 = 43U;
	int8_t x267 = -13;
	volatile int32_t x268 = 395953;
	volatile int32_t t57 = 0;

	t57 = ((x265+(x266|x267))|x268);

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x270 = 24612U;
	int8_t x271 = 2;
	uint64_t x272 = UINT64_MAX;
	volatile uint64_t t58 = UINT64_MAX;

	t58 = ((x269+(x270|x271))|x272);

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x273 = 5121;
	static volatile uint8_t x274 = 20U;
	int16_t x275 = 27;
	int8_t x276 = INT8_MAX;
	volatile int32_t t59 = -187;

	t59 = ((x273+(x274|x275))|x276);

	if (t59 != 5247) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x277 = 5192U;
	uint8_t x280 = 69U;

	t60 = ((x277+(x278|x279))|x280);

	if (t60 != 20583LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x281 = -1LL;
	uint16_t x282 = UINT16_MAX;
	static uint16_t x283 = 130U;
	static int8_t x284 = INT8_MIN;
	int64_t t61 = -1LL;

	t61 = ((x281+(x282|x283))|x284);

	if (t61 != -2LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x286 = INT16_MIN;
	static uint64_t x287 = 412955773310235553LLU;
	static int8_t x288 = -1;

	t62 = ((x285+(x286|x287))|x288);

	if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x289 = 19U;
	int64_t x290 = -72LL;
	int8_t x291 = -1;
	int64_t x292 = INT64_MIN;
	volatile int64_t t63 = 9577661458LL;

	t63 = ((x289+(x290|x291))|x292);

	if (t63 != -9223372036854775790LL) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int16_t x297 = INT16_MIN;
	int32_t x298 = -6995464;
	int32_t x299 = -1;
	static uint8_t x300 = 7U;

	t64 = ((x297+(x298|x299))|x300);

	if (t64 != -32769) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x301 = INT32_MAX;
	int64_t x302 = -183LL;
	static int32_t x303 = -1;
	int32_t x304 = INT32_MIN;

	t65 = ((x301+(x302|x303))|x304);

	if (t65 != -2LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x305 = INT16_MAX;
	int32_t x307 = INT32_MAX;
	static int64_t t66 = 194LL;

	t66 = ((x305+(x306|x307))|x308);

	if (t66 != 32766LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x309 = -1;
	int32_t x311 = INT32_MIN;
	uint64_t x312 = 229388LLU;
	static volatile uint64_t t67 = UINT64_MAX;

	t67 = ((x309+(x310|x311))|x312);

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x317 = 124066LLU;
	int32_t x318 = INT32_MAX;
	int64_t x319 = 8682688LL;
	int64_t x320 = -21171955LL;
	uint64_t t68 = 759372218690LLU;

	t68 = ((x317+(x318|x319))|x320);

	if (t68 != 18446744073688446381LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x321 = UINT64_MAX;
	int16_t x322 = INT16_MAX;
	int64_t x323 = INT64_MIN;
	uint64_t t69 = 817302384LLU;

	t69 = ((x321+(x322|x323))|x324);

	if (t69 != 9223372036854808574LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x325 = -5;
	uint32_t x326 = UINT32_MAX;
	uint16_t x327 = UINT16_MAX;
	static volatile uint64_t t70 = 1010099251LLU;

	t70 = ((x325+(x326|x327))|x328);

	if (t70 != 4294967290LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x330 = UINT32_MAX;
	static uint64_t x331 = 23720225831216LLU;
	int32_t x332 = 204440;

	t71 = ((x329+(x330|x331))|x332);

	if (t71 != 23721104580542LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x333 = -1LL;
	static uint64_t x334 = UINT64_MAX;
	int8_t x335 = 15;
	static uint64_t x336 = UINT64_MAX;
	uint64_t t72 = UINT64_MAX;

	t72 = ((x333+(x334|x335))|x336);

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x337 = INT32_MAX;
	static volatile uint16_t x338 = 22U;
	volatile int32_t t73 = 2;

	t73 = ((x337+(x338|x339))|x340);

	if (t73 != -225) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x341 = 913U;
	uint16_t x342 = UINT16_MAX;
	uint32_t x344 = 3330U;

	t74 = ((x341+(x342|x343))|x344);

	if (t74 != 3986U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x345 = -1;
	int64_t x346 = INT64_MAX;
	uint8_t x347 = UINT8_MAX;
	int16_t x348 = -1;
	static int64_t t75 = -418536839172580LL;

	t75 = ((x345+(x346|x347))|x348);

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x349 = INT16_MIN;
	static volatile uint16_t x350 = 4U;
	int16_t x352 = -13;
	int32_t t76 = -1;

	t76 = ((x349+(x350|x351))|x352);

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x353 = -791864416;
	static uint64_t x354 = UINT64_MAX;
	static int32_t x356 = -1;
	uint64_t t77 = UINT64_MAX;

	t77 = ((x353+(x354|x355))|x356);

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x357 = 31;
	static uint8_t x358 = 30U;
	static int64_t x360 = 146360784083755LL;
	volatile int64_t t78 = -353057714401LL;

	t78 = ((x357+(x358|x359))|x360);

	if (t78 != -963945665LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x361 = 227LLU;
	int32_t x362 = 373351;
	int32_t x363 = 119290;
	static int8_t x364 = 10;
	static uint64_t t79 = 152149224LLU;

	t79 = ((x361+(x362|x363))|x364);

	if (t79 != 390378LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x369 = UINT64_MAX;
	volatile uint8_t x370 = 82U;
	volatile int16_t x371 = -1;
	int64_t x372 = INT64_MAX;

	t80 = ((x369+(x370|x371))|x372);

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x373 = 0U;
	volatile uint8_t x374 = UINT8_MAX;
	static int32_t x375 = 1004265;
	int8_t x376 = -3;
	int32_t t81 = 30833;

	t81 = ((x373+(x374|x375))|x376);

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x377 = -1;
	int8_t x378 = INT8_MIN;
	int8_t x379 = -1;
	int64_t x380 = 201336787987LL;
	static volatile int64_t t82 = 3982065282272919LL;

	t82 = ((x377+(x378|x379))|x380);

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x382 = INT32_MIN;
	static uint8_t x384 = 5U;
	static uint64_t t83 = 975493293101LLU;

	t83 = ((x381+(x382|x383))|x384);

	if (t83 != 18446744071563514245LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x385 = -1LL;
	static int16_t x387 = -6;
	static uint16_t x388 = UINT16_MAX;
	int64_t t84 = 134265287LL;

	t84 = ((x385+(x386|x387))|x388);

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x389 = -2418328LL;
	uint64_t x390 = UINT64_MAX;
	int8_t x392 = 24;
	volatile uint64_t t85 = 25728105382686LLU;

	t85 = ((x389+(x390|x391))|x392);

	if (t85 != 18446744073707133311LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x393 = UINT32_MAX;
	volatile int64_t x394 = INT64_MIN;
	uint64_t x395 = 54301791150550702LLU;
	uint16_t x396 = 0U;
	volatile uint64_t t86 = 3LLU;

	t86 = ((x393+(x394|x395))|x396);

	if (t86 != 9277673832300293805LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x397 = INT32_MIN;
	int32_t x398 = -1;
	volatile uint64_t t87 = 61394858594LLU;

	t87 = ((x397+(x398|x399))|x400);

	if (t87 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x401 = -18046967156LL;
	int16_t x402 = INT16_MAX;
	uint16_t x404 = 1029U;

	t88 = ((x401+(x402|x403))|x404);

	if (t88 != -18046966129LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x405 = INT8_MIN;
	int16_t x406 = 1;
	volatile int8_t x408 = -3;
	int64_t t89 = 126826LL;

	t89 = ((x405+(x406|x407))|x408);

	if (t89 != -3LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x410 = -26208978;
	static uint16_t x411 = 59U;
	int32_t x412 = INT32_MIN;
	volatile int32_t t90 = 46;

	t90 = ((x409+(x410|x411))|x412);

	if (t90 != -26208986) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x414 = 3385U;
	volatile int32_t x416 = INT32_MAX;
	volatile int32_t t91 = -4047;

	t91 = ((x413+(x414|x415))|x416);

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x417 = 1431U;
	uint16_t x419 = UINT16_MAX;
	volatile int32_t x420 = -1;
	static uint64_t t92 = UINT64_MAX;

	t92 = ((x417+(x418|x419))|x420);

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x421 = -594;
	static volatile int8_t x422 = -62;
	volatile int8_t x424 = 51;
	int64_t t93 = -2LL;

	t93 = ((x421+(x422|x423))|x424);

	if (t93 != -653LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x425 = -27477722815845LL;
	int32_t x426 = INT32_MAX;
	uint32_t x428 = 6U;
	volatile int64_t t94 = 3993LL;

	t94 = ((x425+(x426|x427))|x428);

	if (t94 != -27477722815842LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x429 = UINT64_MAX;
	uint64_t x430 = 14LLU;
	int8_t x431 = -1;
	int32_t x432 = -1;
	uint64_t t95 = UINT64_MAX;

	t95 = ((x429+(x430|x431))|x432);

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x433 = -1LL;
	volatile int32_t x434 = INT32_MAX;
	int32_t x435 = INT32_MIN;
	static int32_t x436 = 0;
	volatile int64_t t96 = 27648LL;

	t96 = ((x433+(x434|x435))|x436);

	if (t96 != -2LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x437 = -455;
	int64_t x438 = -1LL;
	int32_t x439 = 177122;
	uint32_t x440 = 93U;
	int64_t t97 = 7964616LL;

	t97 = ((x437+(x438|x439))|x440);

	if (t97 != -387LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x441 = 95188019430LL;
	uint8_t x442 = UINT8_MAX;
	volatile uint32_t x444 = 3125U;
	int64_t t98 = -12002998182368LL;

	t98 = ((x441+(x442|x443))|x444);

	if (t98 != 95188020981LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x445 = 0;
	int8_t x447 = INT8_MAX;
	volatile uint32_t x448 = 40511U;
	volatile uint32_t t99 = 632U;

	t99 = ((x445+(x446|x447))|x448);

	if (t99 != 40575U) { NG(); } else { ; }
	
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

