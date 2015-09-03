#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x7 = -1LL;
uint64_t x8 = UINT64_MAX;
volatile uint32_t x9 = 1210205U;
uint32_t x11 = 111U;
static int32_t x15 = INT32_MIN;
volatile int64_t t2 = -128214124LL;
int16_t x25 = 2902;
int16_t x28 = -1;
volatile int64_t x39 = INT64_MIN;
static int32_t x47 = 932504;
static uint32_t x52 = 443563U;
uint8_t x55 = 1U;
int32_t t11 = -431;
uint64_t x74 = 2601613LLU;
int32_t x84 = 10;
volatile int64_t x86 = 8600250653512205LL;
int64_t x88 = -1LL;
static volatile uint64_t t19 = 6LLU;
int32_t x89 = -450;
int8_t x91 = 1;
int8_t x96 = INT8_MAX;
uint32_t x101 = UINT32_MAX;
volatile int16_t x105 = INT16_MIN;
int16_t x109 = 3946;
uint16_t x115 = 30U;
int64_t x117 = INT64_MIN;
static volatile int64_t x119 = -3211LL;
volatile uint64_t t27 = 0LLU;
int32_t x122 = -17909899;
int64_t x127 = -854552176076903155LL;
volatile int16_t x135 = INT16_MAX;
static volatile int16_t x138 = INT16_MAX;
uint64_t t32 = 123591LLU;
static int32_t x150 = 25;
static int8_t x152 = -1;
static volatile int32_t t34 = 727847504;
volatile uint32_t t35 = 4640U;
int32_t x169 = INT32_MIN;
int8_t x170 = INT8_MIN;
int32_t t37 = 219862;
uint8_t x173 = UINT8_MAX;
volatile uint32_t t38 = 1631U;
int64_t x190 = -1LL;
int8_t x193 = -3;
volatile uint16_t x199 = 3U;
int64_t x201 = INT64_MIN;
int8_t x214 = -1;
volatile uint32_t t52 = 906540214U;
int32_t t53 = 30135;
int16_t x244 = INT16_MIN;
volatile int64_t t54 = 2613766608032509454LL;
int32_t x246 = -1;
uint32_t x247 = 190084U;
volatile uint16_t x248 = 4500U;
volatile uint8_t x250 = 13U;
volatile int32_t t56 = -47805343;
volatile int64_t x253 = -28560424785814923LL;
int64_t t57 = -444507509065257LL;
uint32_t x262 = 786271091U;
int16_t x268 = INT16_MIN;
static int64_t x269 = -881LL;
int64_t x276 = INT64_MIN;
int16_t x281 = INT16_MIN;
uint64_t x289 = 227057029LLU;
int32_t x290 = INT32_MIN;
volatile int8_t x296 = INT8_MAX;
volatile int64_t t68 = -2123369356921405499LL;
static volatile int8_t x306 = INT8_MAX;
int32_t x309 = INT32_MAX;
static int64_t t71 = -637110LL;
int64_t x323 = 255900963LL;
static uint32_t x328 = 221U;
int32_t x329 = INT32_MIN;
volatile uint64_t t75 = 38496LLU;
uint32_t t76 = 41897987U;
int32_t t77 = 6;
int16_t x341 = -1;
int16_t x342 = INT16_MAX;
int8_t x349 = 6;
static volatile int32_t t81 = -1550;
int16_t x361 = INT16_MIN;
static int64_t x363 = INT64_MIN;
static int32_t x364 = -132235256;
volatile int64_t t82 = -49LL;
int32_t x371 = -200562443;
volatile int8_t x373 = -19;
int64_t x393 = -3482367585960LL;
static int8_t x395 = -1;
static uint64_t x396 = 0LLU;
static int64_t x398 = INT64_MIN;
uint32_t x399 = 178055455U;
volatile int64_t t91 = 3648524578LL;
int8_t x404 = INT8_MAX;
static int16_t x410 = INT16_MIN;
static int16_t x412 = INT16_MIN;
static volatile int64_t x420 = 5569759122LL;
volatile uint64_t t96 = 106017614936277528LLU;
volatile int8_t x433 = INT8_MAX;


void f0(void) {
	uint8_t x5 = UINT8_MAX;
	int16_t x6 = INT16_MAX;
	static uint64_t t0 = 61606LLU;

	t0 = (((x5|x6)^x7)+x8);

	if (t0 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x10 = INT8_MAX;
	volatile int16_t x12 = -757;
	uint32_t t1 = 76U;

	t1 = (((x9|x10)^x11)+x12);

	if (t1 != 1209371U) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = 50784788911LL;
	int16_t x14 = INT16_MAX;
	int32_t x16 = 152042695;

	t2 = (((x13|x14)^x15)+x16);

	if (t2 != -49994892090LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x17 = INT8_MIN;
	volatile int16_t x18 = -20;
	static uint32_t x19 = 589U;
	int8_t x20 = -1;
	uint32_t t3 = 65U;

	t3 = (((x17|x18)^x19)+x20);

	if (t3 != 4294966688U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = INT8_MIN;
	static int8_t x22 = INT8_MIN;
	volatile int64_t x23 = INT64_MAX;
	volatile uint8_t x24 = UINT8_MAX;
	volatile int64_t t4 = 224LL;

	t4 = (((x21|x22)^x23)+x24);

	if (t4 != -9223372036854775426LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x26 = -1;
	static int8_t x27 = INT8_MAX;
	static volatile int32_t t5 = -71370097;

	t5 = (((x25|x26)^x27)+x28);

	if (t5 != -129) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x29 = 75U;
	volatile uint16_t x30 = 21160U;
	uint64_t x31 = 1008923177LLU;
	static volatile int64_t x32 = 34LL;
	volatile uint64_t t6 = 137827LLU;

	t6 = (((x29|x30)^x31)+x32);

	if (t6 != 1008902372LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = INT16_MAX;
	int32_t x38 = 1101514;
	volatile uint16_t x40 = UINT16_MAX;
	static int64_t t7 = -132854LL;

	t7 = (((x37|x38)^x39)+x40);

	if (t7 != -9223372036853596162LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x41 = UINT32_MAX;
	int8_t x42 = -1;
	volatile uint32_t x43 = 6497U;
	int8_t x44 = INT8_MIN;
	volatile uint32_t t8 = 4U;

	t8 = (((x41|x42)^x43)+x44);

	if (t8 != 4294960670U) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x45 = 5U;
	volatile int8_t x46 = 31;
	uint32_t x48 = 1497327U;
	volatile uint32_t t9 = 261343974U;

	t9 = (((x45|x46)^x47)+x48);

	if (t9 != 2429814U) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x49 = 99U;
	volatile int16_t x50 = 5860;
	uint8_t x51 = UINT8_MAX;
	volatile uint32_t t10 = 33211800U;

	t10 = (((x49|x50)^x51)+x52);

	if (t10 != 449219U) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x53 = UINT8_MAX;
	volatile int8_t x54 = INT8_MIN;
	int32_t x56 = INT32_MAX;

	t11 = (((x53|x54)^x55)+x56);

	if (t11 != 2147483645) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x57 = 15677226U;
	int32_t x58 = INT32_MIN;
	static volatile int32_t x59 = 806118;
	static int64_t x60 = -1LL;
	volatile int64_t t12 = -28955593LL;

	t12 = (((x57|x58)^x59)+x60);

	if (t12 != 2162392011LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x61 = INT16_MIN;
	static int32_t x62 = INT32_MAX;
	uint32_t x63 = 3989611U;
	static int16_t x64 = INT16_MAX;
	static uint32_t t13 = 15827U;

	t13 = (((x61|x62)^x63)+x64);

	if (t13 != 4291010451U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x65 = -1;
	static volatile int64_t x66 = INT64_MAX;
	static int16_t x67 = INT16_MAX;
	uint32_t x68 = 1U;
	int64_t t14 = 30896498LL;

	t14 = (((x65|x66)^x67)+x68);

	if (t14 != -32767LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x69 = INT16_MAX;
	int32_t x70 = INT32_MIN;
	static volatile uint64_t x71 = UINT64_MAX;
	static int32_t x72 = INT32_MAX;
	volatile uint64_t t15 = 8276926935750547LLU;

	t15 = (((x69|x70)^x71)+x72);

	if (t15 != 4294934527LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x73 = INT32_MIN;
	int8_t x75 = -1;
	uint16_t x76 = UINT16_MAX;
	volatile uint64_t t16 = 307200887619071LLU;

	t16 = (((x73|x74)^x75)+x76);

	if (t16 != 2144947569LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x77 = INT16_MIN;
	int16_t x78 = 1;
	int32_t x79 = -11754;
	int16_t x80 = -222;
	int32_t t17 = 15420;

	t17 = (((x77|x78)^x79)+x80);

	if (t17 != 20793) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x81 = 411370U;
	static volatile int32_t x82 = -1;
	uint8_t x83 = 1U;
	volatile uint32_t t18 = 1742U;

	t18 = (((x81|x82)^x83)+x84);

	if (t18 != 8U) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x85 = UINT32_MAX;
	uint64_t x87 = 48842437906LLU;

	t19 = (((x85|x86)^x87)+x88);

	if (t19 != 8600288160353004LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x90 = 0;
	int16_t x92 = -1;
	static volatile int32_t t20 = -1056677;

	t20 = (((x89|x90)^x91)+x92);

	if (t20 != -450) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x93 = 114;
	int16_t x94 = 12;
	uint64_t x95 = 50LLU;
	uint64_t t21 = 105689772639537134LLU;

	t21 = (((x93|x94)^x95)+x96);

	if (t21 != 203LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x97 = UINT64_MAX;
	int8_t x98 = INT8_MAX;
	volatile int64_t x99 = -1LL;
	static uint64_t x100 = 75047LLU;
	static volatile uint64_t t22 = 85376035030823475LLU;

	t22 = (((x97|x98)^x99)+x100);

	if (t22 != 75047LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x102 = -1;
	int8_t x103 = 0;
	uint32_t x104 = UINT32_MAX;
	uint32_t t23 = 908U;

	t23 = (((x101|x102)^x103)+x104);

	if (t23 != 4294967294U) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x106 = UINT16_MAX;
	static int32_t x107 = INT32_MAX;
	int64_t x108 = -26LL;
	int64_t t24 = -2908256630LL;

	t24 = (((x105|x106)^x107)+x108);

	if (t24 != -2147483674LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x110 = -1;
	static int32_t x111 = -1;
	int32_t x112 = INT32_MAX;
	int32_t t25 = INT32_MAX;

	t25 = (((x109|x110)^x111)+x112);

	if (t25 != INT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x113 = UINT32_MAX;
	int64_t x114 = 3824LL;
	volatile int32_t x116 = 105777;
	static int64_t t26 = -7061447939107543LL;

	t26 = (((x113|x114)^x115)+x116);

	if (t26 != 4295073042LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x118 = 276285880777245988LLU;
	uint32_t x120 = UINT32_MAX;

	t27 = (((x117|x118)^x119)+x120);

	if (t27 != 8947086160372495952LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x121 = 0U;
	int32_t x123 = 32331613;
	uint64_t x124 = UINT64_MAX;
	uint64_t t28 = 2LLU;

	t28 = (((x121|x122)^x123)+x124);

	if (t28 != 18446744073693028391LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x125 = 1U;
	int16_t x126 = 1;
	int16_t x128 = -1;
	int64_t t29 = -4LL;

	t29 = (((x125|x126)^x127)+x128);

	if (t29 != -854552176076903157LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x129 = -1LL;
	int8_t x130 = INT8_MAX;
	volatile uint64_t x131 = UINT64_MAX;
	uint8_t x132 = 1U;
	volatile uint64_t t30 = 190LLU;

	t30 = (((x129|x130)^x131)+x132);

	if (t30 != 1LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x133 = INT64_MIN;
	int8_t x134 = 1;
	volatile int16_t x136 = -1;
	volatile int64_t t31 = -973LL;

	t31 = (((x133|x134)^x135)+x136);

	if (t31 != -9223372036854743043LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x137 = 138366736013LLU;
	uint16_t x139 = UINT16_MAX;
	static volatile uint16_t x140 = 24U;

	t32 = (((x137|x138)^x139)+x140);

	if (t32 != 138366681112LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x141 = UINT32_MAX;
	static int32_t x142 = 203391;
	static uint64_t x143 = 435070LLU;
	int64_t x144 = 236622175379756LL;
	static uint64_t t33 = 9112LLU;

	t33 = (((x141|x142)^x143)+x144);

	if (t33 != 236626469911981LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x149 = -1;
	uint8_t x151 = 64U;

	t34 = (((x149|x150)^x151)+x152);

	if (t34 != -66) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x153 = UINT32_MAX;
	int16_t x154 = -1;
	static int8_t x155 = INT8_MIN;
	int32_t x156 = INT32_MAX;

	t35 = (((x153|x154)^x155)+x156);

	if (t35 != 2147483774U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x165 = INT16_MAX;
	int16_t x166 = INT16_MIN;
	int64_t x167 = -1LL;
	volatile int64_t x168 = INT64_MIN;
	volatile int64_t t36 = INT64_MIN;

	t36 = (((x165|x166)^x167)+x168);

	if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x171 = -1;
	int16_t x172 = INT16_MAX;

	t37 = (((x169|x170)^x171)+x172);

	if (t37 != 32894) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x174 = 146;
	static int32_t x175 = INT32_MIN;
	volatile uint32_t x176 = 29460374U;

	t38 = (((x173|x174)^x175)+x176);

	if (t38 != 2176944277U) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int8_t x177 = INT8_MAX;
	static volatile int64_t x178 = INT64_MIN;
	static volatile int64_t x179 = -222135605924LL;
	volatile int16_t x180 = INT16_MIN;
	static volatile int64_t t39 = -2958901699403315739LL;

	t39 = (((x177|x178)^x179)+x180);

	if (t39 != 9223371814719137059LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x181 = UINT16_MAX;
	uint16_t x182 = 5618U;
	static int64_t x183 = 130291486071141073LL;
	uint32_t x184 = 62U;
	static volatile int64_t t40 = 56LL;

	t40 = (((x181|x182)^x183)+x184);

	if (t40 != 130291486071180652LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x185 = INT8_MIN;
	uint32_t x186 = UINT32_MAX;
	uint64_t x187 = UINT64_MAX;
	int32_t x188 = -1771567;
	static volatile uint64_t t41 = 5515732679497147631LLU;

	t41 = (((x185|x186)^x187)+x188);

	if (t41 != 18446744069412812753LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x189 = 31U;
	uint64_t x191 = UINT64_MAX;
	static uint64_t x192 = UINT64_MAX;
	volatile uint64_t t42 = UINT64_MAX;

	t42 = (((x189|x190)^x191)+x192);

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x194 = -1LL;
	static volatile uint8_t x195 = 0U;
	int16_t x196 = -1;
	volatile int64_t t43 = 208970LL;

	t43 = (((x193|x194)^x195)+x196);

	if (t43 != -2LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x197 = -1;
	int16_t x198 = -620;
	volatile int16_t x200 = -4378;
	volatile int32_t t44 = 7969147;

	t44 = (((x197|x198)^x199)+x200);

	if (t44 != -4382) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x202 = -32;
	volatile int16_t x203 = INT16_MIN;
	int8_t x204 = INT8_MIN;
	volatile int64_t t45 = -54LL;

	t45 = (((x201|x202)^x203)+x204);

	if (t45 != 32608LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x205 = -8147638;
	int16_t x206 = 15;
	int64_t x207 = 179LL;
	static int64_t x208 = INT64_MAX;
	int64_t t46 = 1490043749311894LL;

	t46 = (((x205|x206)^x207)+x208);

	if (t46 != 9223372036846628347LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x209 = 947870370U;
	int16_t x210 = -20;
	uint32_t x211 = 51U;
	volatile uint64_t x212 = 6496571090488271096LLU;
	volatile uint64_t t47 = 46LLU;

	t47 = (((x209|x210)^x211)+x212);

	if (t47 != 6496571094783238357LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x213 = INT8_MIN;
	static uint8_t x215 = UINT8_MAX;
	int64_t x216 = -48LL;
	int64_t t48 = 37933183170202722LL;

	t48 = (((x213|x214)^x215)+x216);

	if (t48 != -304LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x217 = INT64_MIN;
	static volatile int16_t x218 = INT16_MAX;
	uint64_t x219 = UINT64_MAX;
	static int32_t x220 = INT32_MAX;
	uint64_t t49 = 4377500171019339LLU;

	t49 = (((x217|x218)^x219)+x220);

	if (t49 != 9223372039002226687LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x221 = INT8_MIN;
	volatile uint32_t x222 = UINT32_MAX;
	uint8_t x223 = 57U;
	int16_t x224 = -1;
	volatile uint32_t t50 = 1648936804U;

	t50 = (((x221|x222)^x223)+x224);

	if (t50 != 4294967237U) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x225 = 1U;
	volatile uint64_t x226 = 10501050370LLU;
	volatile int64_t x227 = INT64_MIN;
	uint64_t x228 = 309383742056LLU;
	volatile uint64_t t51 = 3879409199925LLU;

	t51 = (((x225|x226)^x227)+x228);

	if (t51 != 9223372356739568235LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x229 = INT32_MAX;
	uint32_t x230 = 18151374U;
	uint32_t x231 = 552U;
	int32_t x232 = INT32_MIN;

	t52 = (((x229|x230)^x231)+x232);

	if (t52 != 4294966743U) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x233 = 1540U;
	volatile int8_t x234 = -1;
	int8_t x235 = INT8_MIN;
	volatile uint8_t x236 = 53U;

	t53 = (((x233|x234)^x235)+x236);

	if (t53 != 180) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x241 = INT64_MIN;
	int8_t x242 = -1;
	static volatile int16_t x243 = -328;

	t54 = (((x241|x242)^x243)+x244);

	if (t54 != -32441LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x245 = INT16_MAX;
	volatile uint32_t t55 = 1661643135U;

	t55 = (((x245|x246)^x247)+x248);

	if (t55 != 4294781711U) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x249 = INT32_MIN;
	int16_t x251 = INT16_MIN;
	static int32_t x252 = INT32_MIN;

	t56 = (((x249|x250)^x251)+x252);

	if (t56 != -32755) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x254 = -1;
	int64_t x255 = -31535770536LL;
	volatile uint32_t x256 = 19U;

	t57 = (((x253|x254)^x255)+x256);

	if (t57 != 31535770554LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x257 = -56710520718021LL;
	uint64_t x258 = UINT64_MAX;
	static int8_t x259 = INT8_MIN;
	int8_t x260 = -9;
	volatile uint64_t t58 = 20398398659529012LLU;

	t58 = (((x257|x258)^x259)+x260);

	if (t58 != 118LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x261 = UINT8_MAX;
	int16_t x263 = -1;
	static volatile uint32_t x264 = UINT32_MAX;
	static volatile uint32_t t59 = 428U;

	t59 = (((x261|x262)^x263)+x264);

	if (t59 != 3508696063U) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint64_t x265 = UINT64_MAX;
	volatile int32_t x266 = INT32_MIN;
	static int32_t x267 = -1;
	volatile uint64_t t60 = 1702223856593839LLU;

	t60 = (((x265|x266)^x267)+x268);

	if (t60 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint64_t x270 = 116047LLU;
	int8_t x271 = -4;
	uint64_t x272 = UINT64_MAX;
	uint64_t t61 = 109535627647103009LLU;

	t61 = (((x269|x270)^x271)+x272);

	if (t61 != 562LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x273 = 69U;
	int16_t x274 = INT16_MIN;
	int64_t x275 = INT64_MIN;
	volatile int64_t t62 = -1LL;

	t62 = (((x273|x274)^x275)+x276);

	if (t62 != -32699LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x277 = INT8_MIN;
	static int64_t x278 = INT64_MIN;
	static int32_t x279 = -1;
	volatile int8_t x280 = 13;
	int64_t t63 = -454132859738830167LL;

	t63 = (((x277|x278)^x279)+x280);

	if (t63 != 140LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x282 = INT8_MAX;
	static int8_t x283 = INT8_MAX;
	static int16_t x284 = -1;
	int32_t t64 = 5;

	t64 = (((x281|x282)^x283)+x284);

	if (t64 != -32769) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x285 = 24204U;
	uint32_t x286 = UINT32_MAX;
	volatile int64_t x287 = -1LL;
	static volatile uint8_t x288 = UINT8_MAX;
	static volatile int64_t t65 = -227202LL;

	t65 = (((x285|x286)^x287)+x288);

	if (t65 != -4294967041LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x291 = UINT64_MAX;
	int64_t x292 = INT64_MAX;
	uint64_t t66 = 98285366019443688LLU;

	t66 = (((x289|x290)^x291)+x292);

	if (t66 != 9223372038775202425LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x293 = UINT64_MAX;
	uint64_t x294 = UINT64_MAX;
	static volatile int8_t x295 = 0;
	static uint64_t t67 = 55958219927589537LLU;

	t67 = (((x293|x294)^x295)+x296);

	if (t67 != 126LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x297 = 470416748U;
	static volatile int32_t x298 = -1;
	static int64_t x299 = -1LL;
	int32_t x300 = INT32_MIN;

	t68 = (((x297|x298)^x299)+x300);

	if (t68 != -6442450944LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x301 = UINT16_MAX;
	int64_t x302 = INT64_MIN;
	static int32_t x303 = INT32_MAX;
	int64_t x304 = 387654508849088488LL;
	volatile int64_t t69 = -299253089829218LL;

	t69 = (((x301|x302)^x303)+x304);

	if (t69 != -8835717525858269208LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x305 = -1;
	static uint8_t x307 = 5U;
	int64_t x308 = 11238089LL;
	int64_t t70 = -1512LL;

	t70 = (((x305|x306)^x307)+x308);

	if (t70 != 11238083LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x310 = -1;
	static uint32_t x311 = UINT32_MAX;
	int64_t x312 = -1LL;

	t71 = (((x309|x310)^x311)+x312);

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x313 = INT32_MIN;
	volatile uint64_t x314 = 112LLU;
	uint64_t x315 = 383LLU;
	uint16_t x316 = 7U;
	uint64_t t72 = 662697458998LLU;

	t72 = (((x313|x314)^x315)+x316);

	if (t72 != 18446744071562068246LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x321 = 1342914384LLU;
	volatile uint8_t x322 = UINT8_MAX;
	static int64_t x324 = INT64_MIN;
	static uint64_t t73 = 764642729627238LLU;

	t73 = (((x321|x322)^x323)+x324);

	if (t73 != 9223372038453560028LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x325 = UINT16_MAX;
	uint64_t x326 = 140877646567109951LLU;
	int16_t x327 = INT16_MIN;
	uint64_t t74 = 0LLU;

	t74 = (((x325|x326)^x327)+x328);

	if (t74 != 18305866427142471900LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x330 = -121;
	uint64_t x331 = 482120231246303LLU;
	uint64_t x332 = 7LLU;

	t75 = (((x329|x330)^x331)+x332);

	if (t75 != 18446261953478305375LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x333 = 1191951965U;
	uint8_t x334 = 19U;
	volatile int32_t x335 = -242838817;
	volatile uint16_t x336 = 1U;

	t76 = (((x333|x334)^x335)+x336);

	if (t76 != 3062705281U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x337 = INT16_MIN;
	int16_t x338 = -2;
	uint8_t x339 = UINT8_MAX;
	int32_t x340 = INT32_MAX;

	t77 = (((x337|x338)^x339)+x340);

	if (t77 != 2147483392) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x343 = UINT64_MAX;
	int8_t x344 = -1;
	static volatile uint64_t t78 = UINT64_MAX;

	t78 = (((x341|x342)^x343)+x344);

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x350 = 0U;
	static uint32_t x351 = UINT32_MAX;
	volatile uint32_t x352 = 1205703U;
	static uint32_t t79 = 2U;

	t79 = (((x349|x350)^x351)+x352);

	if (t79 != 1205696U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x353 = -88;
	static int8_t x354 = INT8_MIN;
	int64_t x355 = -1LL;
	int32_t x356 = INT32_MIN;
	volatile int64_t t80 = -1869198LL;

	t80 = (((x353|x354)^x355)+x356);

	if (t80 != -2147483561LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x357 = 17;
	volatile int16_t x358 = 15504;
	int16_t x359 = INT16_MAX;
	volatile int16_t x360 = INT16_MAX;

	t81 = (((x357|x358)^x359)+x360);

	if (t81 != 50029) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x362 = INT32_MIN;

	t82 = (((x361|x362)^x363)+x364);

	if (t82 != 9223372036722507784LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x365 = INT64_MIN;
	int32_t x366 = INT32_MIN;
	static uint64_t x367 = UINT64_MAX;
	int32_t x368 = INT32_MAX;
	uint64_t t83 = 9LLU;

	t83 = (((x365|x366)^x367)+x368);

	if (t83 != 4294967294LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x369 = INT32_MIN;
	int16_t x370 = INT16_MAX;
	volatile int16_t x372 = INT16_MIN;
	int32_t t84 = 1;

	t84 = (((x369|x370)^x371)+x372);

	if (t84 != 1946900234) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x374 = UINT8_MAX;
	int64_t x375 = -1LL;
	static int8_t x376 = INT8_MIN;
	static int64_t t85 = 338LL;

	t85 = (((x373|x374)^x375)+x376);

	if (t85 != -128LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x377 = 1U;
	uint64_t x378 = 605LLU;
	uint64_t x379 = UINT64_MAX;
	int64_t x380 = -1LL;
	uint64_t t86 = 2752867015450LLU;

	t86 = (((x377|x378)^x379)+x380);

	if (t86 != 18446744073709551009LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x381 = 7U;
	volatile uint64_t x382 = 6729322337712977LLU;
	uint64_t x383 = 6LLU;
	int8_t x384 = INT8_MIN;
	volatile uint64_t t87 = 3882426LLU;

	t87 = (((x381|x382)^x383)+x384);

	if (t87 != 6729322337712849LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x385 = INT64_MAX;
	static int8_t x386 = 52;
	uint64_t x387 = UINT64_MAX;
	static uint16_t x388 = 593U;
	uint64_t t88 = 1272931639359449200LLU;

	t88 = (((x385|x386)^x387)+x388);

	if (t88 != 9223372036854776401LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x389 = 110481528887LLU;
	static int32_t x390 = 480;
	uint32_t x391 = 1769977U;
	int8_t x392 = -1;
	static uint64_t t89 = 221LLU;

	t89 = (((x389|x390)^x391)+x392);

	if (t89 != 110480939021LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x394 = 562190538;
	static uint64_t t90 = 128357768LLU;

	t90 = (((x393|x394)^x395)+x396);

	if (t90 != 3482350790181LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x397 = INT64_MAX;
	int16_t x400 = 13;

	t91 = (((x397|x398)^x399)+x400);

	if (t91 != -178055443LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x401 = INT16_MIN;
	int16_t x402 = -6;
	static volatile int64_t x403 = 3363861043352450LL;
	static int64_t t92 = -6583614LL;

	t92 = (((x401|x402)^x403)+x404);

	if (t92 != -3363861043352329LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x409 = UINT64_MAX;
	int16_t x411 = 1;
	volatile uint64_t t93 = 1LLU;

	t93 = (((x409|x410)^x411)+x412);

	if (t93 != 18446744073709518846LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x413 = UINT16_MAX;
	uint8_t x414 = UINT8_MAX;
	int8_t x415 = -1;
	volatile int32_t x416 = -11;
	int32_t t94 = -18972840;

	t94 = (((x413|x414)^x415)+x416);

	if (t94 != -65547) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x417 = -2;
	int16_t x418 = INT16_MIN;
	int16_t x419 = 3;
	static int64_t t95 = -7LL;

	t95 = (((x417|x418)^x419)+x420);

	if (t95 != 5569759119LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x421 = INT8_MIN;
	int32_t x422 = INT32_MIN;
	static uint64_t x423 = 230179301585243674LLU;
	volatile uint32_t x424 = UINT32_MAX;

	t96 = (((x421|x422)^x423)+x424);

	if (t96 != 18216564776419275161LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x425 = -1;
	uint16_t x426 = 2412U;
	int64_t x427 = -1LL;
	static volatile int64_t x428 = -1LL;
	int64_t t97 = 238LL;

	t97 = (((x425|x426)^x427)+x428);

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x429 = 257525LL;
	static uint16_t x430 = UINT16_MAX;
	static uint8_t x431 = 107U;
	int16_t x432 = INT16_MIN;
	int64_t t98 = 437LL;

	t98 = (((x429|x430)^x431)+x432);

	if (t98 != 229268LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x434 = 0;
	int32_t x435 = -1;
	int16_t x436 = -1377;
	int32_t t99 = 11233871;

	t99 = (((x433|x434)^x435)+x436);

	if (t99 != -1505) { NG(); } else { ; }
	
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

