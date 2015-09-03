#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t3 = 0;
int32_t x18 = 1025379;
int8_t x31 = INT8_MIN;
static int32_t t7 = 1;
uint8_t x34 = 3U;
uint32_t x36 = 20412118U;
volatile uint32_t t9 = 168654U;
volatile uint32_t t10 = 489930U;
int32_t x46 = INT32_MAX;
static int64_t t12 = -303359054196581996LL;
uint64_t x57 = 506862625459LLU;
static int8_t x58 = -1;
uint16_t x62 = 1U;
static volatile int64_t t15 = -201781LL;
static int16_t x65 = INT16_MIN;
int16_t x68 = INT16_MIN;
uint64_t t16 = 305865516593865LLU;
static uint64_t x70 = 4LLU;
uint64_t x75 = 1926690109307LLU;
int64_t x81 = 7724775356402671LL;
int16_t x84 = -1;
int64_t t22 = -32681062123279059LL;
int32_t x97 = INT32_MAX;
uint64_t x100 = 8631655853879LLU;
volatile int8_t x104 = INT8_MIN;
int8_t x110 = 54;
int32_t t26 = 17;
int64_t x116 = -1LL;
uint64_t t27 = 1689669304483462526LLU;
uint16_t x121 = UINT16_MAX;
int8_t x131 = 0;
uint16_t x134 = 7759U;
int16_t x138 = INT16_MIN;
int8_t x143 = INT8_MIN;
uint16_t x148 = UINT16_MAX;
int16_t x149 = INT16_MIN;
int16_t x157 = INT16_MIN;
int8_t x159 = INT8_MAX;
int32_t t38 = -9592057;
int16_t x168 = INT16_MAX;
static uint8_t x169 = 0U;
int32_t x187 = INT32_MIN;
int8_t x188 = 26;
volatile int8_t x190 = INT8_MIN;
int16_t x197 = 0;
volatile uint64_t t49 = 114707LLU;
int8_t x208 = INT8_MIN;
int64_t x209 = INT64_MAX;
uint16_t x213 = 1U;
int64_t x214 = 490915356LL;
int64_t x220 = 10707703851400700LL;
volatile uint64_t t53 = 10LLU;
static int32_t x222 = INT32_MIN;
volatile uint32_t t56 = 36U;
volatile uint64_t x233 = UINT64_MAX;
uint8_t x234 = 1U;
uint32_t x244 = 133541508U;
int32_t t61 = 41529817;
volatile uint16_t x258 = 10523U;
static int8_t x264 = 4;
int16_t x266 = -1;
int32_t x267 = INT32_MIN;
int32_t x268 = INT32_MIN;
volatile uint32_t x274 = 530615U;
uint32_t x280 = UINT32_MAX;
uint32_t t67 = 3877U;
int32_t x281 = -1;
int8_t x284 = 26;
static int64_t t70 = 96285523358674LL;
volatile int32_t t71 = 6650;
int8_t x298 = -4;
int32_t x299 = INT32_MIN;
int16_t x300 = 2;
int32_t x302 = INT32_MIN;
static uint32_t x303 = 241133U;
int8_t x308 = INT8_MAX;
int8_t x312 = -47;
volatile int64_t t77 = -395042LL;
int8_t x324 = INT8_MIN;
int8_t x327 = INT8_MIN;
volatile uint32_t x333 = 17U;
uint16_t x336 = UINT16_MAX;
uint16_t x337 = UINT16_MAX;
uint8_t x338 = 0U;
static volatile int64_t t82 = -39278726369550LL;
static int64_t x349 = INT64_MAX;
int32_t x352 = -72991;
uint8_t x359 = UINT8_MAX;
int64_t x361 = INT64_MIN;
int8_t x363 = -12;
static int64_t x364 = INT64_MIN;
uint64_t x365 = 348646637153586106LLU;
volatile int64_t x368 = INT64_MAX;
volatile int32_t t90 = -45607872;
int64_t x374 = 1LL;
uint64_t t93 = 744LLU;
volatile uint8_t x386 = 13U;
volatile uint8_t x391 = 99U;
uint64_t x392 = 2266055152845200499LLU;
int32_t x396 = INT32_MIN;
int64_t x398 = -5356439LL;
static uint64_t x402 = UINT64_MAX;
int8_t x404 = INT8_MIN;


void f0(void) {
	static int16_t x1 = -1;
	static volatile int16_t x2 = INT16_MIN;
	uint32_t x3 = UINT32_MAX;
	int32_t x4 = -1;
	uint32_t t0 = 862U;

	t0 = ((x1/(x2|x3))&x4);

	if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -33792;
	static int64_t x6 = INT64_MAX;
	uint32_t x7 = UINT32_MAX;
	uint32_t x8 = 6049255U;
	volatile int64_t t1 = -703LL;

	t1 = ((x5/(x6|x7))&x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = -1;
	volatile int16_t x10 = -1;
	static volatile int32_t x11 = INT32_MIN;
	int8_t x12 = -1;
	volatile int32_t t2 = 40523580;

	t2 = ((x9/(x10|x11))&x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	uint16_t x14 = 456U;
	static int16_t x15 = INT16_MAX;
	int32_t x16 = 178759;

	t3 = ((x13/(x14|x15))&x16);

	if (t3 != 178758) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = -1;
	volatile uint32_t x19 = 25657638U;
	int16_t x20 = INT16_MAX;
	volatile uint32_t t4 = 130U;

	t4 = ((x17/(x18|x19))&x20);

	if (t4 != 163U) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 78U;
	static volatile int8_t x22 = INT8_MIN;
	uint8_t x23 = UINT8_MAX;
	static int64_t x24 = INT64_MIN;
	static volatile int64_t t5 = INT64_MIN;

	t5 = ((x21/(x22|x23))&x24);

	if (t5 != INT64_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = -1LL;
	int8_t x26 = INT8_MIN;
	static uint64_t x27 = 60491344229337LLU;
	volatile uint64_t x28 = 84223034957567LLU;
	volatile uint64_t t6 = 3LLU;

	t6 = ((x25/(x26|x27))&x28);

	if (t6 != 1LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 0U;
	int8_t x30 = INT8_MAX;
	int32_t x32 = INT32_MAX;

	t7 = ((x29/(x30|x31))&x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 556U;
	volatile uint32_t x35 = 11361652U;
	uint32_t t8 = 586339U;

	t8 = ((x33/(x34|x35))&x36);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 7099U;
	static uint8_t x38 = UINT8_MAX;
	int8_t x39 = INT8_MIN;
	volatile uint8_t x40 = 56U;

	t9 = ((x37/(x38|x39))&x40);

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x41 = 1;
	uint32_t x42 = 3758482U;
	static uint32_t x43 = 1U;
	int16_t x44 = INT16_MIN;

	t10 = ((x41/(x42|x43))&x44);

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = UINT32_MAX;
	int8_t x47 = 3;
	static int8_t x48 = 20;
	static volatile uint32_t t11 = 205U;

	t11 = ((x45/(x46|x47))&x48);

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	static int16_t x50 = -1;
	volatile uint16_t x51 = 12U;
	int64_t x52 = -516293160LL;

	t12 = ((x49/(x50|x51))&x52);

	if (t12 != 128LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = UINT8_MAX;
	static uint32_t x54 = 133209U;
	int32_t x55 = INT32_MIN;
	static uint16_t x56 = 3U;
	uint32_t t13 = 91U;

	t13 = ((x53/(x54|x55))&x56);

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x59 = INT32_MAX;
	int8_t x60 = 1;
	volatile uint64_t t14 = 4LLU;

	t14 = ((x57/(x58|x59))&x60);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -1LL;
	uint32_t x63 = 84623990U;
	uint16_t x64 = 7333U;

	t15 = ((x61/(x62|x63))&x64);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x66 = -1;
	uint64_t x67 = 226724562578356LLU;

	t16 = ((x65/(x66|x67))&x68);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	uint16_t x71 = 10970U;
	static volatile int64_t x72 = INT64_MAX;
	volatile uint64_t t17 = 4223990792LLU;

	t17 = ((x69/(x70|x71))&x72);

	if (t17 != 1680949888059237LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x73 = INT16_MAX;
	int8_t x74 = -4;
	static int16_t x76 = INT16_MIN;
	volatile uint64_t t18 = 1939LLU;

	t18 = ((x73/(x74|x75))&x76);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MIN;
	uint16_t x78 = 1U;
	int64_t x79 = INT64_MAX;
	int32_t x80 = INT32_MIN;
	static volatile int64_t t19 = 11403557LL;

	t19 = ((x77/(x78|x79))&x80);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x82 = UINT32_MAX;
	int32_t x83 = INT32_MIN;
	volatile int64_t t20 = 547288474822265LL;

	t20 = ((x81/(x82|x83))&x84);

	if (t20 != 1798564LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x85 = -1LL;
	uint16_t x86 = 3442U;
	int32_t x87 = -1;
	volatile int8_t x88 = -1;
	static int64_t t21 = -101663169047LL;

	t21 = ((x85/(x86|x87))&x88);

	if (t21 != 1LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x89 = 44U;
	int64_t x90 = INT64_MIN;
	static volatile int64_t x91 = 30799199152LL;
	int32_t x92 = INT32_MIN;

	t22 = ((x89/(x90|x91))&x92);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint64_t x93 = UINT64_MAX;
	static int32_t x94 = INT32_MIN;
	int16_t x95 = 832;
	int64_t x96 = 266703LL;
	volatile uint64_t t23 = 988972LLU;

	t23 = ((x93/(x94|x95))&x96);

	if (t23 != 1LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x98 = -2500015LL;
	int16_t x99 = 28;
	volatile uint64_t t24 = 61765LLU;

	t24 = ((x97/(x98|x99))&x100);

	if (t24 != 8631655853094LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = UINT32_MAX;
	int32_t x102 = INT32_MIN;
	int32_t x103 = -1;
	static volatile uint32_t t25 = 8016U;

	t25 = ((x101/(x102|x103))&x104);

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x109 = -6;
	int16_t x111 = INT16_MIN;
	volatile uint8_t x112 = UINT8_MAX;

	t26 = ((x109/(x110|x111))&x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x113 = 162528577410308458LLU;
	volatile int16_t x114 = INT16_MIN;
	int16_t x115 = INT16_MAX;

	t27 = ((x113/(x114|x115))&x116);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x117 = UINT8_MAX;
	int8_t x118 = INT8_MAX;
	int64_t x119 = -1LL;
	volatile int8_t x120 = INT8_MIN;
	int64_t t28 = -1908781LL;

	t28 = ((x117/(x118|x119))&x120);

	if (t28 != -256LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x122 = -4128334353LL;
	int64_t x123 = INT64_MIN;
	static uint16_t x124 = 7U;
	volatile int64_t t29 = 1380254686232LL;

	t29 = ((x121/(x122|x123))&x124);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x125 = 1;
	volatile int32_t x126 = INT32_MAX;
	int16_t x127 = -1;
	int64_t x128 = INT64_MIN;
	volatile int64_t t30 = INT64_MIN;

	t30 = ((x125/(x126|x127))&x128);

	if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x129 = -1;
	uint16_t x130 = 14520U;
	int32_t x132 = INT32_MAX;
	int32_t t31 = 0;

	t31 = ((x129/(x130|x131))&x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x133 = INT16_MIN;
	int32_t x135 = 13693;
	int32_t x136 = INT32_MIN;
	static int32_t t32 = INT32_MIN;

	t32 = ((x133/(x134|x135))&x136);

	if (t32 != INT32_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x137 = INT64_MAX;
	uint16_t x139 = 1U;
	int8_t x140 = INT8_MIN;
	static volatile int64_t t33 = -7LL;

	t33 = ((x137/(x138|x139))&x140);

	if (t33 != -281483566907520LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x141 = -57;
	volatile uint32_t x142 = 40577184U;
	int16_t x144 = INT16_MAX;
	volatile uint32_t t34 = 21445652U;

	t34 = ((x141/(x142|x143))&x144);

	if (t34 != 1U) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x145 = 24U;
	volatile int64_t x146 = 967050LL;
	int64_t x147 = 44LL;
	static int64_t t35 = -8302766642729225LL;

	t35 = ((x145/(x146|x147))&x148);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x150 = 13U;
	int8_t x151 = INT8_MIN;
	int64_t x152 = INT64_MAX;
	volatile int64_t t36 = 7157LL;

	t36 = ((x149/(x150|x151))&x152);

	if (t36 != 284LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int64_t x153 = 14492427453LL;
	int16_t x154 = INT16_MAX;
	int32_t x155 = INT32_MAX;
	uint8_t x156 = 118U;
	int64_t t37 = -374051605575899LL;

	t37 = ((x153/(x154|x155))&x156);

	if (t37 != 6LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x158 = INT8_MAX;
	int8_t x160 = -1;

	t38 = ((x157/(x158|x159))&x160);

	if (t38 != -258) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x161 = 0;
	static uint64_t x162 = 7083974778700661LLU;
	static int32_t x163 = 22;
	int32_t x164 = 4534258;
	volatile uint64_t t39 = 564247186570183LLU;

	t39 = ((x161/(x162|x163))&x164);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x165 = INT8_MAX;
	uint32_t x166 = 0U;
	int32_t x167 = 2;
	uint32_t t40 = 254514U;

	t40 = ((x165/(x166|x167))&x168);

	if (t40 != 63U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x170 = 7560989369018LLU;
	static volatile int16_t x171 = -15;
	uint8_t x172 = 30U;
	volatile uint64_t t41 = 28332936677LLU;

	t41 = ((x169/(x170|x171))&x172);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x173 = UINT16_MAX;
	int16_t x174 = -1;
	uint16_t x175 = 0U;
	volatile int32_t x176 = -1;
	int32_t t42 = -182163957;

	t42 = ((x173/(x174|x175))&x176);

	if (t42 != -65535) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x177 = INT32_MIN;
	int64_t x178 = INT64_MAX;
	int32_t x179 = 52;
	volatile int32_t x180 = INT32_MAX;
	volatile int64_t t43 = -2787204712932206778LL;

	t43 = ((x177/(x178|x179))&x180);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x181 = INT32_MAX;
	int8_t x182 = 0;
	uint8_t x183 = UINT8_MAX;
	int8_t x184 = INT8_MIN;
	volatile int32_t t44 = -83;

	t44 = ((x181/(x182|x183))&x184);

	if (t44 != 8421504) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x185 = -1;
	int8_t x186 = INT8_MAX;
	int32_t t45 = 659337;

	t45 = ((x185/(x186|x187))&x188);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x189 = UINT8_MAX;
	uint8_t x191 = UINT8_MAX;
	volatile uint16_t x192 = 7623U;
	volatile int32_t t46 = -59131;

	t46 = ((x189/(x190|x191))&x192);

	if (t46 != 7425) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x193 = 17559068380449863LLU;
	static uint64_t x194 = UINT64_MAX;
	static int64_t x195 = -412688428314LL;
	int8_t x196 = INT8_MAX;
	static volatile uint64_t t47 = 2835672518226LLU;

	t47 = ((x193/(x194|x195))&x196);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x198 = UINT64_MAX;
	volatile uint32_t x199 = 2368U;
	int32_t x200 = INT32_MIN;
	uint64_t t48 = 252737072314266816LLU;

	t48 = ((x197/(x198|x199))&x200);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x201 = UINT64_MAX;
	volatile int32_t x202 = 65784648;
	volatile int16_t x203 = INT16_MIN;
	static uint8_t x204 = UINT8_MAX;

	t49 = ((x201/(x202|x203))&x204);

	if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x205 = INT32_MAX;
	static uint32_t x206 = 10195U;
	volatile int32_t x207 = -34679;
	uint32_t t50 = 3722U;

	t50 = ((x205/(x206|x207))&x208);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x210 = -341;
	int64_t x211 = -1LL;
	volatile uint16_t x212 = 0U;
	volatile int64_t t51 = 11853620LL;

	t51 = ((x209/(x210|x211))&x212);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x215 = INT16_MIN;
	uint16_t x216 = UINT16_MAX;
	int64_t t52 = -23795837691LL;

	t52 = ((x213/(x214|x215))&x216);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int32_t x217 = INT32_MAX;
	uint8_t x218 = 3U;
	uint64_t x219 = UINT64_MAX;

	t53 = ((x217/(x218|x219))&x220);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x221 = INT8_MIN;
	int32_t x223 = 7981;
	int8_t x224 = 0;
	int32_t t54 = 3;

	t54 = ((x221/(x222|x223))&x224);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x225 = INT16_MAX;
	uint8_t x226 = UINT8_MAX;
	int64_t x227 = INT64_MIN;
	static uint64_t x228 = UINT64_MAX;
	static volatile uint64_t t55 = 1474840125299791LLU;

	t55 = ((x225/(x226|x227))&x228);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x229 = INT32_MIN;
	uint32_t x230 = 238119U;
	static volatile int8_t x231 = 3;
	int32_t x232 = 12;

	t56 = ((x229/(x230|x231))&x232);

	if (t56 != 8U) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x235 = 824711410567LL;
	static uint16_t x236 = 9701U;
	uint64_t t57 = 65611159LLU;

	t57 = ((x233/(x234|x235))&x236);

	if (t57 != 1280LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x237 = INT64_MIN;
	static int8_t x238 = 1;
	int8_t x239 = INT8_MIN;
	int32_t x240 = 64;
	volatile int64_t t58 = 8141050442LL;

	t58 = ((x237/(x238|x239))&x240);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x241 = INT16_MIN;
	volatile uint32_t x242 = UINT32_MAX;
	int16_t x243 = INT16_MIN;
	volatile uint32_t t59 = 366000399U;

	t59 = ((x241/(x242|x243))&x244);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x245 = UINT8_MAX;
	volatile uint64_t x246 = 12LLU;
	static int64_t x247 = INT64_MIN;
	int32_t x248 = INT32_MIN;
	volatile uint64_t t60 = 21LLU;

	t60 = ((x245/(x246|x247))&x248);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x249 = -7;
	uint8_t x250 = 3U;
	static int32_t x251 = INT32_MIN;
	static volatile int32_t x252 = 2;

	t61 = ((x249/(x250|x251))&x252);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x257 = INT16_MIN;
	static volatile uint16_t x259 = 2U;
	volatile int32_t x260 = INT32_MIN;
	int32_t t62 = INT32_MIN;

	t62 = ((x257/(x258|x259))&x260);

	if (t62 != INT32_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x261 = UINT32_MAX;
	volatile uint8_t x262 = 0U;
	int16_t x263 = INT16_MAX;
	uint32_t t63 = 49U;

	t63 = ((x261/(x262|x263))&x264);

	if (t63 != 4U) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x265 = INT16_MAX;
	volatile int32_t t64 = INT32_MIN;

	t64 = ((x265/(x266|x267))&x268);

	if (t64 != INT32_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x269 = 85U;
	uint8_t x270 = 24U;
	static int16_t x271 = -1;
	uint16_t x272 = UINT16_MAX;
	int32_t t65 = 104;

	t65 = ((x269/(x270|x271))&x272);

	if (t65 != 65451) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x273 = -1;
	int8_t x275 = INT8_MIN;
	static int64_t x276 = INT64_MIN;
	int64_t t66 = 2638660502LL;

	t66 = ((x273/(x274|x275))&x276);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x277 = INT8_MIN;
	int8_t x278 = 12;
	int8_t x279 = -1;

	t67 = ((x277/(x278|x279))&x280);

	if (t67 != 128U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x282 = INT8_MIN;
	int32_t x283 = 0;
	int32_t t68 = 2834326;

	t68 = ((x281/(x282|x283))&x284);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x285 = 2022166924889980LL;
	int16_t x286 = -13773;
	int16_t x287 = 12;
	int64_t x288 = -1LL;
	static int64_t t69 = -35011896618440LL;

	t69 = ((x285/(x286|x287))&x288);

	if (t69 != -146949126145LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x289 = INT8_MIN;
	static volatile int32_t x290 = INT32_MIN;
	int64_t x291 = INT64_MAX;
	static uint32_t x292 = 11U;

	t70 = ((x289/(x290|x291))&x292);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x293 = -1;
	volatile uint8_t x294 = UINT8_MAX;
	volatile int16_t x295 = INT16_MAX;
	volatile int8_t x296 = -1;

	t71 = ((x293/(x294|x295))&x296);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x297 = INT32_MIN;
	volatile int32_t t72 = 0;

	t72 = ((x297/(x298|x299))&x300);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x301 = INT32_MIN;
	int64_t x304 = 228LL;
	volatile int64_t t73 = 30999430416345LL;

	t73 = ((x301/(x302|x303))&x304);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x305 = 5821LLU;
	int16_t x306 = INT16_MAX;
	static int32_t x307 = INT32_MAX;
	volatile uint64_t t74 = 24LLU;

	t74 = ((x305/(x306|x307))&x308);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x309 = 1U;
	int32_t x310 = 3404319;
	int8_t x311 = INT8_MIN;
	static int32_t t75 = -156966554;

	t75 = ((x309/(x310|x311))&x312);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x313 = 24201039LLU;
	volatile uint64_t x314 = 3669399955142860769LLU;
	volatile uint16_t x315 = UINT16_MAX;
	int8_t x316 = -1;
	uint64_t t76 = 1674529262940529282LLU;

	t76 = ((x313/(x314|x315))&x316);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x317 = INT16_MIN;
	int64_t x318 = 41165LL;
	uint16_t x319 = 46U;
	static volatile uint32_t x320 = UINT32_MAX;

	t77 = ((x317/(x318|x319))&x320);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x321 = 382337U;
	uint32_t x322 = 454U;
	uint8_t x323 = 3U;
	volatile uint32_t t78 = 2681821U;

	t78 = ((x321/(x322|x323))&x324);

	if (t78 != 768U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x325 = INT64_MAX;
	volatile int64_t x326 = 236937662716823LL;
	static int8_t x328 = INT8_MIN;
	static volatile int64_t t79 = 9855LL;

	t79 = ((x325/(x326|x327))&x328);

	if (t79 != -87841638446236032LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x329 = INT64_MIN;
	int32_t x330 = INT32_MIN;
	int32_t x331 = INT32_MIN;
	static uint16_t x332 = 2U;
	int64_t t80 = -4395934504LL;

	t80 = ((x329/(x330|x331))&x332);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x334 = UINT16_MAX;
	volatile int64_t x335 = INT64_MIN;
	volatile int64_t t81 = -1651333423485441LL;

	t81 = ((x333/(x334|x335))&x336);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x339 = INT64_MIN;
	int16_t x340 = -1;

	t82 = ((x337/(x338|x339))&x340);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x341 = 10;
	int16_t x342 = INT16_MAX;
	static int8_t x343 = -1;
	int8_t x344 = INT8_MAX;
	volatile int32_t t83 = 43;

	t83 = ((x341/(x342|x343))&x344);

	if (t83 != 118) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x345 = 15U;
	int16_t x346 = INT16_MIN;
	uint64_t x347 = 24517LLU;
	int16_t x348 = INT16_MIN;
	static uint64_t t84 = 86395149LLU;

	t84 = ((x345/(x346|x347))&x348);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x350 = UINT16_MAX;
	uint32_t x351 = 114U;
	static int64_t t85 = -7087LL;

	t85 = ((x349/(x350|x351))&x352);

	if (t85 != 140739635871744LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x353 = 0U;
	int32_t x354 = -6;
	uint32_t x355 = 256495876U;
	uint32_t x356 = UINT32_MAX;
	uint32_t t86 = 969202402U;

	t86 = ((x353/(x354|x355))&x356);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x357 = 291933727618763022LL;
	int8_t x358 = INT8_MAX;
	int16_t x360 = -921;
	volatile int64_t t87 = 1LL;

	t87 = ((x357/(x358|x359))&x360);

	if (t87 != 1144838147523648LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x362 = 25U;
	static int64_t t88 = 150LL;

	t88 = ((x361/(x362|x363))&x364);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x366 = INT32_MIN;
	static int64_t x367 = -15LL;
	static uint64_t t89 = 3875372965145412188LLU;

	t89 = ((x365/(x366|x367))&x368);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x369 = -1;
	uint8_t x370 = UINT8_MAX;
	static uint16_t x371 = 0U;
	uint8_t x372 = 3U;

	t90 = ((x369/(x370|x371))&x372);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x373 = 8805888U;
	volatile uint64_t x375 = UINT64_MAX;
	int64_t x376 = INT64_MAX;
	static volatile uint64_t t91 = 2299745LLU;

	t91 = ((x373/(x374|x375))&x376);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x377 = UINT16_MAX;
	uint8_t x378 = UINT8_MAX;
	int16_t x379 = INT16_MIN;
	static int8_t x380 = INT8_MIN;
	int32_t t92 = 1317065;

	t92 = ((x377/(x378|x379))&x380);

	if (t92 != -128) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x381 = INT8_MAX;
	int64_t x382 = INT64_MIN;
	uint64_t x383 = UINT64_MAX;
	uint32_t x384 = 3U;

	t93 = ((x381/(x382|x383))&x384);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x385 = -187096;
	int64_t x387 = 3LL;
	static int8_t x388 = -1;
	int64_t t94 = -1099633465800851118LL;

	t94 = ((x385/(x386|x387))&x388);

	if (t94 != -12473LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x389 = -1LL;
	uint16_t x390 = 11U;
	volatile uint64_t t95 = 24278481329933728LLU;

	t95 = ((x389/(x390|x391))&x392);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x393 = INT16_MAX;
	int8_t x394 = -1;
	static int32_t x395 = -68743479;
	int32_t t96 = INT32_MIN;

	t96 = ((x393/(x394|x395))&x396);

	if (t96 != INT32_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int32_t x397 = INT32_MIN;
	volatile uint32_t x399 = UINT32_MAX;
	int32_t x400 = -1;
	int64_t t97 = 2019899434LL;

	t97 = ((x397/(x398|x399))&x400);

	if (t97 != 2147483648LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x401 = INT8_MIN;
	int64_t x403 = -4025LL;
	volatile uint64_t t98 = 74865113318011333LLU;

	t98 = ((x401/(x402|x403))&x404);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x405 = UINT8_MAX;
	static int64_t x406 = INT64_MAX;
	int32_t x407 = INT32_MAX;
	volatile int16_t x408 = 109;
	int64_t t99 = 1092689277355055752LL;

	t99 = ((x405/(x406|x407))&x408);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

