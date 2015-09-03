#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint64_t x10 = 411505LLU;
int32_t t2 = -31;
int32_t x20 = -1;
int32_t x27 = -359530024;
volatile int32_t t5 = 149370;
int32_t x29 = -26499;
volatile int8_t x37 = INT8_MAX;
int32_t t8 = -3;
uint32_t x43 = 123516U;
int64_t x44 = -160279697827286388LL;
static uint16_t x46 = 747U;
int64_t x47 = 359467941484LL;
int64_t x50 = -13104321002LL;
int16_t x52 = -35;
int16_t x54 = INT16_MAX;
static volatile uint8_t x56 = 95U;
int64_t x59 = 5814LL;
uint32_t x61 = 14U;
static volatile int64_t x63 = -1LL;
uint16_t x83 = 11309U;
static int8_t x95 = INT8_MIN;
uint64_t t22 = 4482976848LLU;
static volatile int16_t x97 = INT16_MAX;
uint8_t x100 = 2U;
volatile int32_t x103 = -19791;
static int32_t x109 = INT32_MAX;
int64_t x119 = -1LL;
uint32_t x125 = 14011030U;
static uint32_t t29 = 6517435U;
int8_t x137 = INT8_MIN;
int16_t x152 = INT16_MIN;
volatile int32_t x158 = INT32_MIN;
int8_t x165 = 0;
uint64_t x167 = 117792048020LLU;
int64_t x181 = INT64_MIN;
volatile uint8_t x190 = 5U;
volatile int32_t t46 = 3613;
int32_t x199 = INT32_MIN;
uint8_t x201 = UINT8_MAX;
volatile int32_t t49 = -27;
int64_t t53 = 16690254475147LL;
int64_t x225 = INT64_MIN;
uint8_t x227 = 31U;
int16_t x231 = INT16_MIN;
volatile int64_t t55 = 10561041461254353LL;
static int32_t x233 = INT32_MIN;
int8_t x238 = INT8_MIN;
static int32_t t57 = 2055118;
int64_t x241 = INT64_MIN;
int64_t x243 = -612666LL;
uint32_t x249 = 14701U;
uint16_t x251 = 20U;
int8_t x252 = 1;
int16_t x255 = 727;
int64_t t61 = 51172625128LL;
static int32_t x257 = 19;
volatile int8_t x263 = 45;
int16_t x284 = -1602;
volatile int32_t t67 = -21670458;
int8_t x295 = -1;
static uint64_t x309 = 11199LLU;
static volatile int64_t x312 = 2349LL;
volatile uint64_t t73 = 564LLU;
int8_t x314 = -1;
uint64_t t76 = 10034372155639823LLU;
uint32_t x325 = UINT32_MAX;
int64_t x326 = INT64_MAX;
int64_t x327 = -13731374LL;
volatile uint64_t x335 = 2157758117134079LLU;
volatile int64_t x336 = INT64_MIN;
int64_t t79 = INT64_MAX;
static uint8_t x340 = 0U;
static uint16_t x347 = UINT16_MAX;
uint64_t t82 = 129808815915851LLU;
int16_t x350 = -1;
int16_t x366 = 1063;
volatile int64_t t87 = 950273LL;
int8_t x370 = INT8_MIN;
static int8_t x372 = -56;
int64_t x393 = 4043877172549LL;
int64_t x395 = 9LL;
static uint64_t t93 = 4330620981142978LLU;
int64_t x406 = -1LL;
uint32_t x414 = UINT32_MAX;
int32_t t98 = -2628580;


void f0(void) {
	volatile uint64_t x1 = 16353733LLU;
	uint64_t x2 = 2401LLU;
	int32_t x3 = INT32_MIN;
	volatile uint16_t x4 = UINT16_MAX;
	uint64_t t0 = 223615223LLU;

	t0 = ((x1*(x2<=x3))-x4);

	if (t0 != 16288198LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -62;
	uint32_t x6 = 7736U;
	volatile int64_t x7 = INT64_MAX;
	volatile uint16_t x8 = 15856U;
	int32_t t1 = 50802;

	t1 = ((x5*(x6<=x7))-x8);

	if (t1 != -15918) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = 0;
	static uint32_t x11 = 75559770U;
	uint8_t x12 = UINT8_MAX;

	t2 = ((x9*(x10<=x11))-x12);

	if (t2 != -255) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = INT32_MIN;
	int32_t x18 = INT32_MIN;
	int32_t x19 = INT32_MAX;
	volatile int32_t t3 = -767005481;

	t3 = ((x17*(x18<=x19))-x20);

	if (t3 != -2147483647) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = -6;
	volatile uint64_t x22 = 148LLU;
	int64_t x23 = 1483626855450932891LL;
	int64_t x24 = INT64_MIN;
	int64_t t4 = 2721569439753457LL;

	t4 = ((x21*(x22<=x23))-x24);

	if (t4 != 9223372036854775802LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = -17;
	uint8_t x26 = 33U;
	uint16_t x28 = 1U;

	t5 = ((x25*(x26<=x27))-x28);

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x30 = INT32_MIN;
	volatile uint8_t x31 = UINT8_MAX;
	uint32_t x32 = 313147459U;
	uint32_t t6 = 560U;

	t6 = ((x29*(x30<=x31))-x32);

	if (t6 != 3981793338U) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x33 = INT32_MAX;
	uint8_t x34 = 0U;
	int16_t x35 = 2154;
	volatile int32_t x36 = INT32_MAX;
	int32_t t7 = 163;

	t7 = ((x33*(x34<=x35))-x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x38 = 311U;
	static int16_t x39 = -1;
	uint8_t x40 = UINT8_MAX;

	t8 = ((x37*(x38<=x39))-x40);

	if (t8 != -128) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int16_t x41 = INT16_MAX;
	uint64_t x42 = 966645899LLU;
	static int64_t t9 = 0LL;

	t9 = ((x41*(x42<=x43))-x44);

	if (t9 != 160279697827286388LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = 15215;
	uint16_t x48 = 4U;
	int32_t t10 = -69;

	t10 = ((x45*(x46<=x47))-x48);

	if (t10 != 15211) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x49 = INT32_MIN;
	int32_t x51 = INT32_MAX;
	volatile int32_t t11 = -661505602;

	t11 = ((x49*(x50<=x51))-x52);

	if (t11 != -2147483613) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x53 = 1909U;
	volatile int32_t x55 = 15575;
	static int32_t t12 = -120668;

	t12 = ((x53*(x54<=x55))-x56);

	if (t12 != -95) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x57 = 30;
	static int32_t x58 = INT32_MIN;
	static uint32_t x60 = 11219U;
	uint32_t t13 = 2988U;

	t13 = ((x57*(x58<=x59))-x60);

	if (t13 != 4294956107U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x62 = INT8_MAX;
	volatile int64_t x64 = -1LL;
	int64_t t14 = -2LL;

	t14 = ((x61*(x62<=x63))-x64);

	if (t14 != 1LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = -886;
	uint64_t x66 = 143120LLU;
	int64_t x67 = INT64_MIN;
	static volatile int64_t x68 = INT64_MIN;
	volatile int64_t t15 = 82667964LL;

	t15 = ((x65*(x66<=x67))-x68);

	if (t15 != 9223372036854774922LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x69 = UINT16_MAX;
	int64_t x70 = -10742595333499LL;
	volatile int64_t x71 = INT64_MIN;
	int16_t x72 = -1;
	int32_t t16 = 1685807;

	t16 = ((x69*(x70<=x71))-x72);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x73 = -1LL;
	int32_t x74 = -1;
	volatile uint32_t x75 = 4011U;
	uint32_t x76 = 240399U;
	int64_t t17 = 1LL;

	t17 = ((x73*(x74<=x75))-x76);

	if (t17 != -240399LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x77 = 988U;
	uint16_t x78 = 1275U;
	int32_t x79 = -1;
	uint32_t x80 = 13870U;
	uint32_t t18 = 668U;

	t18 = ((x77*(x78<=x79))-x80);

	if (t18 != 4294953426U) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x81 = 784U;
	static int8_t x82 = 1;
	uint16_t x84 = 119U;
	int32_t t19 = -3839;

	t19 = ((x81*(x82<=x83))-x84);

	if (t19 != 665) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = INT32_MIN;
	int64_t x86 = INT64_MIN;
	volatile int32_t x87 = -233709;
	volatile uint64_t x88 = 164376530LLU;
	volatile uint64_t t20 = 0LLU;

	t20 = ((x85*(x86<=x87))-x88);

	if (t20 != 18446744071397691438LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x89 = 62230U;
	static volatile int32_t x90 = INT32_MAX;
	int8_t x91 = INT8_MIN;
	uint64_t x92 = 1916LLU;
	uint64_t t21 = 6LLU;

	t21 = ((x89*(x90<=x91))-x92);

	if (t21 != 18446744073709549700LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x93 = INT8_MAX;
	int16_t x94 = -1;
	uint64_t x96 = 159659494716993567LLU;

	t22 = ((x93*(x94<=x95))-x96);

	if (t22 != 18287084578992558049LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x98 = 707958156LL;
	volatile int32_t x99 = INT32_MIN;
	static volatile int32_t t23 = 7;

	t23 = ((x97*(x98<=x99))-x100);

	if (t23 != -2) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x101 = 1;
	int16_t x102 = -1;
	int64_t x104 = -7LL;
	int64_t t24 = -301974037LL;

	t24 = ((x101*(x102<=x103))-x104);

	if (t24 != 7LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x105 = 2;
	int64_t x106 = -1LL;
	static volatile int64_t x107 = INT64_MIN;
	volatile int8_t x108 = 17;
	int32_t t25 = -30;

	t25 = ((x105*(x106<=x107))-x108);

	if (t25 != -17) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x110 = UINT8_MAX;
	uint64_t x111 = 87LLU;
	uint8_t x112 = 4U;
	int32_t t26 = 106;

	t26 = ((x109*(x110<=x111))-x112);

	if (t26 != -4) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x117 = INT32_MIN;
	int8_t x118 = INT8_MIN;
	uint64_t x120 = UINT64_MAX;
	volatile uint64_t t27 = 563357537076LLU;

	t27 = ((x117*(x118<=x119))-x120);

	if (t27 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x121 = INT16_MIN;
	uint8_t x122 = 93U;
	int16_t x123 = INT16_MAX;
	uint32_t x124 = 80380U;
	uint32_t t28 = 0U;

	t28 = ((x121*(x122<=x123))-x124);

	if (t28 != 4294854148U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x126 = UINT16_MAX;
	int8_t x127 = INT8_MIN;
	uint16_t x128 = UINT16_MAX;

	t29 = ((x125*(x126<=x127))-x128);

	if (t29 != 4294901761U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x129 = -56;
	static volatile int8_t x130 = -1;
	volatile int64_t x131 = INT64_MAX;
	int32_t x132 = INT32_MIN;
	static volatile int32_t t30 = -17425;

	t30 = ((x129*(x130<=x131))-x132);

	if (t30 != 2147483592) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x133 = UINT32_MAX;
	uint8_t x134 = UINT8_MAX;
	volatile int32_t x135 = INT32_MAX;
	uint8_t x136 = 0U;
	uint32_t t31 = UINT32_MAX;

	t31 = ((x133*(x134<=x135))-x136);

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x138 = -10706;
	int16_t x139 = 6289;
	volatile int32_t x140 = INT32_MIN;
	volatile int32_t t32 = -104357;

	t32 = ((x137*(x138<=x139))-x140);

	if (t32 != 2147483520) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x141 = -1LL;
	int8_t x142 = -1;
	volatile uint32_t x143 = UINT32_MAX;
	static uint64_t x144 = 24951896175LLU;
	volatile uint64_t t33 = 34964878674876219LLU;

	t33 = ((x141*(x142<=x143))-x144);

	if (t33 != 18446744048757655440LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x145 = UINT8_MAX;
	int16_t x146 = INT16_MIN;
	int64_t x147 = INT64_MAX;
	int16_t x148 = -1;
	volatile int32_t t34 = -129071;

	t34 = ((x145*(x146<=x147))-x148);

	if (t34 != 256) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x149 = -476668714568046LL;
	static int64_t x150 = INT64_MIN;
	uint8_t x151 = UINT8_MAX;
	int64_t t35 = -4199494LL;

	t35 = ((x149*(x150<=x151))-x152);

	if (t35 != -476668714535278LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x153 = -1;
	int64_t x154 = INT64_MIN;
	int64_t x155 = INT64_MAX;
	int16_t x156 = -529;
	volatile int32_t t36 = -734803219;

	t36 = ((x153*(x154<=x155))-x156);

	if (t36 != 528) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x157 = UINT32_MAX;
	int32_t x159 = INT32_MAX;
	int16_t x160 = -1;
	volatile uint32_t t37 = 3516555U;

	t37 = ((x157*(x158<=x159))-x160);

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x161 = 3066U;
	uint32_t x162 = 398211646U;
	volatile uint32_t x163 = UINT32_MAX;
	uint16_t x164 = 1U;
	static uint32_t t38 = 2041544U;

	t38 = ((x161*(x162<=x163))-x164);

	if (t38 != 3065U) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x166 = 7386LLU;
	int16_t x168 = 2907;
	static int32_t t39 = 887385665;

	t39 = ((x165*(x166<=x167))-x168);

	if (t39 != -2907) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x169 = 15927217;
	uint32_t x170 = 265290609U;
	int16_t x171 = INT16_MIN;
	int16_t x172 = INT16_MIN;
	int32_t t40 = -3027;

	t40 = ((x169*(x170<=x171))-x172);

	if (t40 != 15959985) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x173 = INT16_MIN;
	uint64_t x174 = 64846420472104LLU;
	int8_t x175 = 3;
	int16_t x176 = INT16_MIN;
	static int32_t t41 = 14597;

	t41 = ((x173*(x174<=x175))-x176);

	if (t41 != 32768) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x177 = -1LL;
	uint32_t x178 = 7164U;
	volatile int64_t x179 = INT64_MIN;
	int64_t x180 = INT64_MAX;
	volatile int64_t t42 = 1502399239054091LL;

	t42 = ((x177*(x178<=x179))-x180);

	if (t42 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x182 = INT8_MIN;
	int32_t x183 = 23;
	static int32_t x184 = INT32_MIN;
	volatile int64_t t43 = 822549506413LL;

	t43 = ((x181*(x182<=x183))-x184);

	if (t43 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x185 = INT32_MIN;
	uint8_t x186 = UINT8_MAX;
	volatile int32_t x187 = -483662;
	uint64_t x188 = 6763963LLU;
	static uint64_t t44 = 16LLU;

	t44 = ((x185*(x186<=x187))-x188);

	if (t44 != 18446744073702787653LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x189 = INT8_MIN;
	int32_t x191 = INT32_MIN;
	static volatile int64_t x192 = INT64_MAX;
	volatile int64_t t45 = -1LL;

	t45 = ((x189*(x190<=x191))-x192);

	if (t45 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x193 = INT8_MIN;
	static volatile int32_t x194 = -47786;
	volatile int32_t x195 = INT32_MAX;
	static uint8_t x196 = 72U;

	t46 = ((x193*(x194<=x195))-x196);

	if (t46 != -200) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x197 = 17U;
	volatile int32_t x198 = 25;
	uint32_t x200 = UINT32_MAX;
	static volatile uint32_t t47 = 127620U;

	t47 = ((x197*(x198<=x199))-x200);

	if (t47 != 1U) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x202 = 297263955U;
	static volatile uint16_t x203 = 4188U;
	uint32_t x204 = 86431U;
	volatile uint32_t t48 = 33847U;

	t48 = ((x201*(x202<=x203))-x204);

	if (t48 != 4294880865U) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x205 = -1;
	int16_t x206 = INT16_MIN;
	volatile uint32_t x207 = 0U;
	uint16_t x208 = 0U;

	t49 = ((x205*(x206<=x207))-x208);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x209 = -10312921033018LL;
	uint16_t x210 = UINT16_MAX;
	static int8_t x211 = INT8_MIN;
	int32_t x212 = 187062453;
	volatile int64_t t50 = -377LL;

	t50 = ((x209*(x210<=x211))-x212);

	if (t50 != -187062453LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x213 = INT64_MIN;
	static int8_t x214 = INT8_MIN;
	static uint32_t x215 = UINT32_MAX;
	int8_t x216 = -1;
	volatile int64_t t51 = -1LL;

	t51 = ((x213*(x214<=x215))-x216);

	if (t51 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x217 = -153LL;
	static volatile uint32_t x218 = 85407543U;
	int8_t x219 = -29;
	volatile int8_t x220 = 62;
	volatile int64_t t52 = -650060LL;

	t52 = ((x217*(x218<=x219))-x220);

	if (t52 != -215LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x221 = UINT16_MAX;
	static int8_t x222 = INT8_MAX;
	int16_t x223 = 0;
	int64_t x224 = INT64_MAX;

	t53 = ((x221*(x222<=x223))-x224);

	if (t53 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x226 = 29U;
	static uint64_t x228 = 2226LLU;
	volatile uint64_t t54 = 36LLU;

	t54 = ((x225*(x226<=x227))-x228);

	if (t54 != 9223372036854773582LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x229 = INT64_MAX;
	uint64_t x230 = 6506147711566228LLU;
	uint32_t x232 = 2278U;

	t55 = ((x229*(x230<=x231))-x232);

	if (t55 != 9223372036854773529LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x234 = 50;
	volatile int32_t x235 = -70;
	uint32_t x236 = UINT32_MAX;
	volatile uint32_t t56 = 62U;

	t56 = ((x233*(x234<=x235))-x236);

	if (t56 != 1U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x237 = INT16_MIN;
	static uint64_t x239 = 2494553610309LLU;
	static int8_t x240 = INT8_MIN;

	t57 = ((x237*(x238<=x239))-x240);

	if (t57 != 128) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x242 = -1;
	uint32_t x244 = UINT32_MAX;
	volatile int64_t t58 = 22324484LL;

	t58 = ((x241*(x242<=x243))-x244);

	if (t58 != -4294967295LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x245 = INT32_MIN;
	volatile int64_t x246 = 22055942960LL;
	volatile uint64_t x247 = 417793426LLU;
	int64_t x248 = -1LL;
	int64_t t59 = -464954230840LL;

	t59 = ((x245*(x246<=x247))-x248);

	if (t59 != 1LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x250 = INT8_MIN;
	uint32_t t60 = 201U;

	t60 = ((x249*(x250<=x251))-x252);

	if (t60 != 14700U) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x253 = INT64_MIN;
	volatile uint32_t x254 = UINT32_MAX;
	volatile int16_t x256 = -6592;

	t61 = ((x253*(x254<=x255))-x256);

	if (t61 != 6592LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x258 = UINT8_MAX;
	int16_t x259 = INT16_MAX;
	static volatile uint64_t x260 = 863240888598893682LLU;
	volatile uint64_t t62 = 3878LLU;

	t62 = ((x257*(x258<=x259))-x260);

	if (t62 != 17583503185110657953LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x261 = 127770054LL;
	int64_t x262 = INT64_MIN;
	int32_t x264 = INT32_MIN;
	volatile int64_t t63 = 770923931LL;

	t63 = ((x261*(x262<=x263))-x264);

	if (t63 != 2275253702LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x265 = INT32_MIN;
	int64_t x266 = INT64_MAX;
	int32_t x267 = -507353;
	static volatile int16_t x268 = 7;
	int32_t t64 = -338535;

	t64 = ((x265*(x266<=x267))-x268);

	if (t64 != -7) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x273 = INT16_MIN;
	int64_t x274 = INT64_MIN;
	int32_t x275 = -1;
	uint64_t x276 = UINT64_MAX;
	uint64_t t65 = 619615156LLU;

	t65 = ((x273*(x274<=x275))-x276);

	if (t65 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x277 = -555731250513010175LL;
	uint32_t x278 = 51U;
	int8_t x279 = INT8_MIN;
	volatile int64_t x280 = -1303567157281295LL;
	int64_t t66 = 115436LL;

	t66 = ((x277*(x278<=x279))-x280);

	if (t66 != -554427683355728880LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x281 = 11700U;
	int8_t x282 = INT8_MIN;
	static int16_t x283 = INT16_MAX;

	t67 = ((x281*(x282<=x283))-x284);

	if (t67 != 13302) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x285 = -1;
	uint16_t x286 = UINT16_MAX;
	static int16_t x287 = INT16_MIN;
	volatile int32_t x288 = 17;
	volatile int32_t t68 = 127;

	t68 = ((x285*(x286<=x287))-x288);

	if (t68 != -17) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x289 = 18643538999855051LL;
	int8_t x290 = -1;
	int64_t x291 = INT64_MIN;
	static int32_t x292 = INT32_MIN;
	int64_t t69 = -1061005491799485140LL;

	t69 = ((x289*(x290<=x291))-x292);

	if (t69 != 2147483648LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x293 = 9755U;
	static volatile int32_t x294 = INT32_MIN;
	int64_t x296 = INT64_MAX;
	static int64_t t70 = -1LL;

	t70 = ((x293*(x294<=x295))-x296);

	if (t70 != -9223372036854766052LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x297 = 2368;
	int8_t x298 = INT8_MAX;
	static int8_t x299 = INT8_MAX;
	int16_t x300 = INT16_MAX;
	volatile int32_t t71 = 55493;

	t71 = ((x297*(x298<=x299))-x300);

	if (t71 != -30399) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x301 = -1LL;
	uint16_t x302 = UINT16_MAX;
	int64_t x303 = -1LL;
	static int32_t x304 = -1;
	volatile int64_t t72 = -179276484363LL;

	t72 = ((x301*(x302<=x303))-x304);

	if (t72 != 1LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x310 = INT16_MAX;
	static uint16_t x311 = 0U;

	t73 = ((x309*(x310<=x311))-x312);

	if (t73 != 18446744073709549267LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x313 = INT8_MIN;
	int64_t x315 = INT64_MIN;
	int8_t x316 = 15;
	volatile int32_t t74 = -720036;

	t74 = ((x313*(x314<=x315))-x316);

	if (t74 != -15) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x317 = 15;
	volatile int16_t x318 = INT16_MIN;
	int16_t x319 = INT16_MIN;
	uint64_t x320 = 43LLU;
	uint64_t t75 = 3239451768481LLU;

	t75 = ((x317*(x318<=x319))-x320);

	if (t75 != 18446744073709551588LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x321 = INT8_MIN;
	int16_t x322 = INT16_MIN;
	uint16_t x323 = UINT16_MAX;
	volatile uint64_t x324 = UINT64_MAX;

	t76 = ((x321*(x322<=x323))-x324);

	if (t76 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint8_t x328 = 53U;
	uint32_t t77 = 8408U;

	t77 = ((x325*(x326<=x327))-x328);

	if (t77 != 4294967243U) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x329 = UINT64_MAX;
	int32_t x330 = -898359975;
	int64_t x331 = -7010995LL;
	int64_t x332 = INT64_MIN;
	uint64_t t78 = 2LLU;

	t78 = ((x329*(x330<=x331))-x332);

	if (t78 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x333 = -1;
	int16_t x334 = INT16_MAX;

	t79 = ((x333*(x334<=x335))-x336);

	if (t79 != INT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x337 = INT32_MIN;
	int8_t x338 = -1;
	volatile uint16_t x339 = UINT16_MAX;
	int32_t t80 = INT32_MIN;

	t80 = ((x337*(x338<=x339))-x340);

	if (t80 != INT32_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x341 = UINT8_MAX;
	int64_t x342 = INT64_MIN;
	uint32_t x343 = 2052272638U;
	int8_t x344 = -7;
	int32_t t81 = -1;

	t81 = ((x341*(x342<=x343))-x344);

	if (t81 != 262) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x345 = INT64_MIN;
	volatile int32_t x346 = INT32_MAX;
	uint64_t x348 = UINT64_MAX;

	t82 = ((x345*(x346<=x347))-x348);

	if (t82 != 1LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x349 = INT64_MIN;
	int64_t x351 = -1LL;
	static volatile int8_t x352 = INT8_MIN;
	volatile int64_t t83 = 345643807804334338LL;

	t83 = ((x349*(x350<=x351))-x352);

	if (t83 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x353 = UINT64_MAX;
	int8_t x354 = INT8_MAX;
	uint64_t x355 = 5168491LLU;
	int32_t x356 = INT32_MIN;
	uint64_t t84 = 18606782028LLU;

	t84 = ((x353*(x354<=x355))-x356);

	if (t84 != 2147483647LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x357 = 263958395881807188LLU;
	static uint32_t x358 = 18246U;
	int8_t x359 = -1;
	static int64_t x360 = INT64_MIN;
	volatile uint64_t t85 = 34659LLU;

	t85 = ((x357*(x358<=x359))-x360);

	if (t85 != 9487330432736582996LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x361 = 1;
	int8_t x362 = INT8_MIN;
	static volatile int8_t x363 = -1;
	int64_t x364 = 96625314LL;
	volatile int64_t t86 = 7528684773LL;

	t86 = ((x361*(x362<=x363))-x364);

	if (t86 != -96625313LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x365 = 2671U;
	int8_t x367 = INT8_MIN;
	volatile int64_t x368 = -1LL;

	t87 = ((x365*(x366<=x367))-x368);

	if (t87 != 1LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x369 = 37U;
	int64_t x371 = INT64_MIN;
	int32_t t88 = 338;

	t88 = ((x369*(x370<=x371))-x372);

	if (t88 != 56) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x381 = INT16_MIN;
	volatile int32_t x382 = INT32_MIN;
	static uint16_t x383 = UINT16_MAX;
	int64_t x384 = -1LL;
	int64_t t89 = -32120LL;

	t89 = ((x381*(x382<=x383))-x384);

	if (t89 != -32767LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x389 = INT8_MIN;
	int64_t x390 = 144903582083873670LL;
	int32_t x391 = INT32_MIN;
	static int16_t x392 = INT16_MIN;
	volatile int32_t t90 = 14534131;

	t90 = ((x389*(x390<=x391))-x392);

	if (t90 != 32768) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x394 = 19423LL;
	int8_t x396 = -20;
	volatile int64_t t91 = -188LL;

	t91 = ((x393*(x394<=x395))-x396);

	if (t91 != 20LL) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint8_t x397 = 83U;
	volatile int16_t x398 = -1;
	volatile int32_t x399 = -40;
	int64_t x400 = INT64_MAX;
	volatile int64_t t92 = -107376566968330411LL;

	t92 = ((x397*(x398<=x399))-x400);

	if (t92 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x401 = 8547502385671594098LLU;
	int16_t x402 = INT16_MIN;
	int16_t x403 = INT16_MIN;
	static int32_t x404 = -14305;

	t93 = ((x401*(x402<=x403))-x404);

	if (t93 != 8547502385671608403LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x405 = INT8_MIN;
	int8_t x407 = 45;
	static int16_t x408 = 73;
	volatile int32_t t94 = -116;

	t94 = ((x405*(x406<=x407))-x408);

	if (t94 != -201) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x409 = 12021;
	volatile int32_t x410 = 201331506;
	int64_t x411 = INT64_MIN;
	uint64_t x412 = UINT64_MAX;
	static volatile uint64_t t95 = 2018755650630607626LLU;

	t95 = ((x409*(x410<=x411))-x412);

	if (t95 != 1LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x413 = -1;
	int16_t x415 = -1;
	int8_t x416 = INT8_MIN;
	static volatile int32_t t96 = 628830793;

	t96 = ((x413*(x414<=x415))-x416);

	if (t96 != 127) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x417 = 910505U;
	uint16_t x418 = 194U;
	static uint64_t x419 = 2064538828738382177LLU;
	volatile uint64_t x420 = 785LLU;
	volatile uint64_t t97 = 2060601013629LLU;

	t97 = ((x417*(x418<=x419))-x420);

	if (t97 != 909720LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x425 = UINT8_MAX;
	int32_t x426 = -1824;
	static uint64_t x427 = 59LLU;
	int32_t x428 = INT32_MAX;

	t98 = ((x425*(x426<=x427))-x428);

	if (t98 != -2147483647) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x429 = 318921140U;
	int64_t x430 = INT64_MAX;
	static int8_t x431 = INT8_MIN;
	uint8_t x432 = 10U;
	volatile uint32_t t99 = 858U;

	t99 = ((x429*(x430<=x431))-x432);

	if (t99 != 4294967286U) { NG(); } else { ; }
	
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

