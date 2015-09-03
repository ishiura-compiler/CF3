#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = INT8_MAX;
uint32_t x7 = 1808U;
uint32_t x8 = 252U;
volatile uint64_t t1 = UINT64_MAX;
volatile uint64_t x14 = UINT64_MAX;
uint64_t x15 = 144765759LLU;
volatile uint64_t t3 = UINT64_MAX;
int32_t x21 = -121822510;
volatile uint16_t x26 = UINT16_MAX;
volatile uint16_t x28 = 30U;
int8_t x31 = INT8_MIN;
static volatile int8_t x32 = -1;
uint32_t x33 = 4543517U;
uint16_t x35 = 27U;
static int64_t x40 = INT64_MIN;
int32_t t10 = -29;
int32_t x49 = -1;
int16_t x51 = INT16_MIN;
int16_t x59 = 8925;
volatile int64_t x61 = INT64_MIN;
static int64_t t16 = -266425220LL;
static int16_t x72 = INT16_MIN;
int8_t x73 = -1;
int8_t x93 = INT8_MAX;
volatile int32_t t23 = 16792131;
static int32_t x97 = 2770;
int8_t x102 = INT8_MAX;
static int16_t x106 = INT16_MIN;
uint64_t x107 = 16589248201592LLU;
int64_t x111 = -1LL;
uint32_t x114 = 92U;
static volatile int8_t x117 = -49;
static int8_t x118 = INT8_MIN;
int64_t x124 = INT64_MAX;
int64_t x126 = INT64_MAX;
static int8_t x128 = INT8_MIN;
volatile int32_t t32 = 148;
uint64_t x134 = 91903756365206784LLU;
int16_t x142 = 13;
uint8_t x146 = 17U;
int16_t x147 = -1;
volatile uint64_t t36 = 14748LLU;
volatile int16_t x151 = INT16_MIN;
int64_t x155 = -101654398671548734LL;
volatile uint64_t x158 = UINT64_MAX;
volatile uint64_t x161 = 787877446990LLU;
int32_t x164 = INT32_MIN;
volatile uint64_t t40 = 7816338LLU;
int64_t x167 = -1LL;
uint64_t x170 = 7555594300LLU;
static volatile uint16_t x174 = 205U;
int16_t x177 = INT16_MIN;
int16_t x182 = INT16_MAX;
static int8_t x183 = 0;
static int16_t x191 = -166;
int32_t x194 = -1;
int32_t x200 = -1;
int16_t x202 = INT16_MIN;
volatile int16_t x212 = 6940;
volatile int64_t t52 = 5LL;
int32_t t54 = -5482586;
uint64_t x225 = 4555325926402844664LLU;
uint8_t x230 = 10U;
static int8_t x235 = INT8_MAX;
uint32_t x236 = 112931869U;
int8_t x243 = 7;
int32_t t60 = 53;
static uint16_t x249 = 2121U;
uint64_t x255 = 5LLU;
volatile int32_t t65 = -165;
int64_t x265 = 220539109174224LL;
static int32_t x266 = INT32_MIN;
int64_t t66 = 1596242LL;
int32_t t67 = 0;
volatile uint8_t x274 = 50U;
static uint32_t x277 = 14U;
int64_t x278 = INT64_MIN;
volatile uint32_t t71 = 2889U;
static uint16_t x307 = 1U;
static int64_t x313 = INT64_MIN;
uint32_t x316 = UINT32_MAX;
int8_t x318 = -3;
int8_t x322 = INT8_MIN;
static int16_t x323 = -1;
volatile int32_t t80 = 169436;
static int16_t x325 = 5;
volatile uint64_t x328 = UINT64_MAX;
static volatile int32_t t82 = 1;
int8_t x336 = INT8_MAX;
static volatile uint64_t t83 = 2793LLU;
int32_t x340 = -654250;
int64_t t85 = -3399193745LL;
volatile int32_t x345 = INT32_MAX;
int16_t x352 = 8961;
int32_t t87 = -1;
volatile int32_t x353 = -1;
uint8_t x357 = UINT8_MAX;
static uint32_t t90 = 11332U;
uint32_t x365 = 77502463U;
int64_t x367 = 1LL;
static volatile int64_t t91 = INT64_MAX;
uint32_t x370 = 0U;
uint64_t x380 = 6882483075604032LLU;
uint16_t x381 = UINT16_MAX;
int64_t x382 = INT64_MIN;
uint8_t x386 = 64U;
static uint64_t x392 = UINT64_MAX;
int8_t x393 = 4;
int32_t t99 = -701736609;


void f0(void) {
	static int32_t x2 = INT32_MIN;
	uint32_t x3 = UINT32_MAX;
	int8_t x4 = INT8_MAX;
	int32_t t0 = -246559982;

	t0 = ((x1|x2)^(x3==x4));

	if (t0 != -2147483521) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	int16_t x6 = -1;

	t1 = ((x5|x6)^(x7==x8));

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	static int16_t x10 = -56;
	volatile int64_t x11 = INT64_MIN;
	int32_t x12 = -1;
	int32_t t2 = -88608;

	t2 = ((x9|x10)^(x11==x12));

	if (t2 != -56) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = UINT64_MAX;
	int64_t x16 = INT64_MAX;

	t3 = ((x13|x14)^(x15==x16));

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = INT64_MIN;
	int64_t x18 = INT64_MAX;
	static uint16_t x19 = UINT16_MAX;
	int64_t x20 = INT64_MAX;
	volatile int64_t t4 = -36470993852593LL;

	t4 = ((x17|x18)^(x19==x20));

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x22 = INT32_MAX;
	int64_t x23 = -1LL;
	static uint8_t x24 = UINT8_MAX;
	volatile int32_t t5 = -13;

	t5 = ((x21|x22)^(x23==x24));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	static uint64_t x27 = 3819LLU;
	int32_t t6 = 939;

	t6 = ((x25|x26)^(x27==x28));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MAX;
	static int64_t x30 = 169353678864130047LL;
	volatile int64_t t7 = INT64_MAX;

	t7 = ((x29|x30)^(x31==x32));

	if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x34 = UINT32_MAX;
	static uint32_t x36 = 8337325U;
	volatile uint32_t t8 = UINT32_MAX;

	t8 = ((x33|x34)^(x35==x36));

	if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -4903;
	int64_t x38 = INT64_MAX;
	static uint8_t x39 = UINT8_MAX;
	int64_t t9 = -3195LL;

	t9 = ((x37|x38)^(x39==x40));

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = -7285;
	static volatile uint8_t x42 = UINT8_MAX;
	uint16_t x43 = UINT16_MAX;
	int8_t x44 = INT8_MIN;

	t10 = ((x41|x42)^(x43==x44));

	if (t10 != -7169) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 13U;
	int16_t x46 = INT16_MIN;
	uint8_t x47 = 0U;
	volatile uint8_t x48 = 63U;
	int32_t t11 = 495684;

	t11 = ((x45|x46)^(x47==x48));

	if (t11 != -32755) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x50 = UINT64_MAX;
	static uint32_t x52 = 990U;
	volatile uint64_t t12 = UINT64_MAX;

	t12 = ((x49|x50)^(x51==x52));

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x53 = -1;
	int32_t x54 = -1;
	static int64_t x55 = -146552926214704LL;
	int16_t x56 = -1;
	volatile int32_t t13 = 261668269;

	t13 = ((x53|x54)^(x55==x56));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = -4;
	uint64_t x58 = UINT64_MAX;
	static int64_t x60 = -1796LL;
	uint64_t t14 = UINT64_MAX;

	t14 = ((x57|x58)^(x59==x60));

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x62 = UINT32_MAX;
	volatile int16_t x63 = INT16_MAX;
	static int64_t x64 = INT64_MAX;
	int64_t t15 = 6LL;

	t15 = ((x61|x62)^(x63==x64));

	if (t15 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MIN;
	uint16_t x66 = 2091U;
	uint32_t x67 = 12U;
	int8_t x68 = INT8_MIN;

	t16 = ((x65|x66)^(x67==x68));

	if (t16 != -9223372036854773717LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x69 = -1488316639LL;
	volatile int8_t x70 = 3;
	volatile int16_t x71 = -169;
	int64_t t17 = -72774996260LL;

	t17 = ((x69|x70)^(x71==x72));

	if (t17 != -1488316637LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x74 = UINT8_MAX;
	int8_t x75 = INT8_MIN;
	int8_t x76 = -55;
	int32_t t18 = 263633404;

	t18 = ((x73|x74)^(x75==x76));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x77 = INT16_MIN;
	uint32_t x78 = UINT32_MAX;
	uint64_t x79 = 949208973014595LLU;
	static uint32_t x80 = 515719U;
	volatile uint32_t t19 = UINT32_MAX;

	t19 = ((x77|x78)^(x79==x80));

	if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MAX;
	uint16_t x82 = 2U;
	int32_t x83 = INT32_MIN;
	int64_t x84 = -36228157LL;
	static int32_t t20 = 1;

	t20 = ((x81|x82)^(x83==x84));

	if (t20 != 32767) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MIN;
	volatile int16_t x86 = INT16_MIN;
	volatile uint8_t x87 = UINT8_MAX;
	int64_t x88 = -13139LL;
	volatile int32_t t21 = -5;

	t21 = ((x85|x86)^(x87==x88));

	if (t21 != -128) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = 1631642LLU;
	int8_t x90 = INT8_MIN;
	uint64_t x91 = 165LLU;
	volatile int16_t x92 = 14948;
	volatile uint64_t t22 = 74509161194LLU;

	t22 = ((x89|x90)^(x91==x92));

	if (t22 != 18446744073709551514LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x94 = -17314102;
	static int8_t x95 = 1;
	volatile uint8_t x96 = 3U;

	t23 = ((x93|x94)^(x95==x96));

	if (t23 != -17314049) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x98 = 6U;
	int16_t x99 = INT16_MIN;
	int8_t x100 = -3;
	int32_t t24 = 22;

	t24 = ((x97|x98)^(x99==x100));

	if (t24 != 2774) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = 589U;
	uint64_t x103 = 6LLU;
	uint32_t x104 = UINT32_MAX;
	int32_t t25 = -18203;

	t25 = ((x101|x102)^(x103==x104));

	if (t25 != 639) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = 81615378842660496LLU;
	int8_t x108 = INT8_MIN;
	uint64_t t26 = 258891471598699428LLU;

	t26 = ((x105|x106)^(x107==x108));

	if (t26 != 18446744073709530768LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MIN;
	int32_t x110 = -1;
	int32_t x112 = INT32_MIN;
	int32_t t27 = 2;

	t27 = ((x109|x110)^(x111==x112));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x113 = -1LL;
	uint8_t x115 = 3U;
	volatile int64_t x116 = 7861691364LL;
	volatile int64_t t28 = -1314150430676LL;

	t28 = ((x113|x114)^(x115==x116));

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x119 = 25411611767LLU;
	volatile int64_t x120 = 15989LL;
	int32_t t29 = -46;

	t29 = ((x117|x118)^(x119==x120));

	if (t29 != -49) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = -1LL;
	uint16_t x122 = UINT16_MAX;
	uint32_t x123 = 59312268U;
	static volatile int64_t t30 = -1711550121906512226LL;

	t30 = ((x121|x122)^(x123==x124));

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = 1;
	int16_t x127 = INT16_MAX;
	static int64_t t31 = INT64_MAX;

	t31 = ((x125|x126)^(x127==x128));

	if (t31 != INT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x129 = 13U;
	volatile int8_t x130 = 7;
	volatile uint16_t x131 = 16129U;
	uint8_t x132 = 0U;

	t32 = ((x129|x130)^(x131==x132));

	if (t32 != 15) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int8_t x133 = INT8_MIN;
	int64_t x135 = INT64_MIN;
	static volatile int64_t x136 = 5LL;
	uint64_t t33 = 32069349LLU;

	t33 = ((x133|x134)^(x135==x136));

	if (t33 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MIN;
	uint64_t x138 = 329253185887LLU;
	uint16_t x139 = 0U;
	uint32_t x140 = UINT32_MAX;
	uint64_t t34 = 4295409761LLU;

	t34 = ((x137|x138)^(x139==x140));

	if (t34 != 18446744072250255711LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = 6;
	int16_t x143 = INT16_MIN;
	static int16_t x144 = -1;
	int32_t t35 = 129;

	t35 = ((x141|x142)^(x143==x144));

	if (t35 != 15) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = 832LLU;
	volatile uint64_t x148 = 186858848003058LLU;

	t36 = ((x145|x146)^(x147==x148));

	if (t36 != 849LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = INT32_MAX;
	static int64_t x150 = -1LL;
	static volatile int16_t x152 = 19;
	static int64_t t37 = 1321913809LL;

	t37 = ((x149|x150)^(x151==x152));

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = 0;
	volatile uint8_t x154 = UINT8_MAX;
	volatile int8_t x156 = INT8_MAX;
	int32_t t38 = -1411519;

	t38 = ((x153|x154)^(x155==x156));

	if (t38 != 255) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x157 = INT32_MAX;
	int16_t x159 = 1407;
	static int8_t x160 = 7;
	uint64_t t39 = UINT64_MAX;

	t39 = ((x157|x158)^(x159==x160));

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x162 = 67404866;
	static int8_t x163 = INT8_MIN;

	t40 = ((x161|x162)^(x163==x164));

	if (t40 != 787944555854LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = INT32_MIN;
	uint64_t x166 = UINT64_MAX;
	uint64_t x168 = 46406142645659324LLU;
	uint64_t t41 = UINT64_MAX;

	t41 = ((x165|x166)^(x167==x168));

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = UINT32_MAX;
	uint16_t x171 = 198U;
	int64_t x172 = INT64_MAX;
	volatile uint64_t t42 = 0LLU;

	t42 = ((x169|x170)^(x171==x172));

	if (t42 != 8589934591LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = 1258842U;
	volatile int32_t x175 = INT32_MIN;
	uint32_t x176 = 233U;
	uint32_t t43 = 6356900U;

	t43 = ((x173|x174)^(x175==x176));

	if (t43 != 1258975U) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x178 = 12433U;
	static int32_t x179 = -1;
	static int32_t x180 = INT32_MIN;
	static volatile uint32_t t44 = 9127238U;

	t44 = ((x177|x178)^(x179==x180));

	if (t44 != 4294946961U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = 1;
	static int64_t x184 = INT64_MIN;
	int32_t t45 = 188;

	t45 = ((x181|x182)^(x183==x184));

	if (t45 != 32767) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = 1;
	volatile int16_t x186 = 1;
	static uint64_t x187 = 450739677620505LLU;
	static int8_t x188 = -1;
	int32_t t46 = 199;

	t46 = ((x185|x186)^(x187==x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = -4;
	uint64_t x190 = 1151745209958605528LLU;
	volatile int16_t x192 = 904;
	static uint64_t t47 = 370458LLU;

	t47 = ((x189|x190)^(x191==x192));

	if (t47 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = 5344U;
	int32_t x195 = -9732106;
	volatile uint16_t x196 = 775U;
	volatile int32_t t48 = -752200801;

	t48 = ((x193|x194)^(x195==x196));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x197 = 15077404U;
	volatile int8_t x198 = -63;
	volatile int8_t x199 = -13;
	uint32_t t49 = 335U;

	t49 = ((x197|x198)^(x199==x200));

	if (t49 != 4294967261U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = 3570;
	volatile int64_t x203 = -1LL;
	int32_t x204 = -1;
	static volatile int32_t t50 = -5;

	t50 = ((x201|x202)^(x203==x204));

	if (t50 != -29197) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x205 = INT32_MAX;
	volatile int8_t x206 = INT8_MIN;
	int64_t x207 = INT64_MIN;
	int64_t x208 = -1913434317287769570LL;
	volatile int32_t t51 = -73;

	t51 = ((x205|x206)^(x207==x208));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = -437861832;
	volatile int64_t x210 = -301573520315812728LL;
	volatile uint16_t x211 = 1306U;

	t52 = ((x209|x210)^(x211==x212));

	if (t52 != -403704136LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = INT8_MIN;
	int64_t x214 = INT64_MAX;
	int16_t x215 = INT16_MIN;
	int64_t x216 = -1LL;
	static volatile int64_t t53 = 49232LL;

	t53 = ((x213|x214)^(x215==x216));

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MIN;
	uint16_t x218 = 4U;
	int32_t x219 = 206771;
	uint32_t x220 = UINT32_MAX;

	t54 = ((x217|x218)^(x219==x220));

	if (t54 != -2147483644) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = -1;
	volatile int32_t x222 = INT32_MIN;
	int8_t x223 = -16;
	static int8_t x224 = -24;
	int32_t t55 = 12632;

	t55 = ((x221|x222)^(x223==x224));

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x226 = -1;
	volatile int32_t x227 = -32527535;
	int64_t x228 = 1LL;
	uint64_t t56 = UINT64_MAX;

	t56 = ((x225|x226)^(x227==x228));

	if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x229 = -1;
	int64_t x231 = -110962627799LL;
	int64_t x232 = 3299795232716587LL;
	int32_t t57 = 886758;

	t57 = ((x229|x230)^(x231==x232));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x233 = UINT8_MAX;
	int32_t x234 = -461493;
	int32_t t58 = -198390;

	t58 = ((x233|x234)^(x235==x236));

	if (t58 != -461313) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x237 = -1;
	static int32_t x238 = INT32_MIN;
	int64_t x239 = -10294983436LL;
	static uint16_t x240 = 208U;
	int32_t t59 = -27;

	t59 = ((x237|x238)^(x239==x240));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = INT32_MIN;
	int8_t x242 = 1;
	int16_t x244 = -1;

	t60 = ((x241|x242)^(x243==x244));

	if (t60 != -2147483647) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x245 = 27;
	uint16_t x246 = 2U;
	volatile int32_t x247 = INT32_MIN;
	volatile int32_t x248 = -1537931;
	int32_t t61 = 862;

	t61 = ((x245|x246)^(x247==x248));

	if (t61 != 27) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x250 = 3;
	int8_t x251 = -1;
	int32_t x252 = -1;
	volatile int32_t t62 = -9549257;

	t62 = ((x249|x250)^(x251==x252));

	if (t62 != 2122) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x253 = UINT16_MAX;
	int16_t x254 = INT16_MAX;
	volatile int32_t x256 = -1;
	volatile int32_t t63 = 96002781;

	t63 = ((x253|x254)^(x255==x256));

	if (t63 != 65535) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = INT64_MAX;
	int8_t x258 = INT8_MIN;
	static volatile uint64_t x259 = 7865915547LLU;
	uint32_t x260 = 6522U;
	int64_t t64 = -3623LL;

	t64 = ((x257|x258)^(x259==x260));

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x261 = 6U;
	static uint8_t x262 = UINT8_MAX;
	uint64_t x263 = 11558485506515336LLU;
	int8_t x264 = INT8_MIN;

	t65 = ((x261|x262)^(x263==x264));

	if (t65 != 255) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x267 = 4701U;
	volatile int64_t x268 = 26074854786412LL;

	t66 = ((x265|x266)^(x267==x268));

	if (t66 != -1019024432LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = INT8_MIN;
	uint16_t x270 = UINT16_MAX;
	static uint8_t x271 = 124U;
	int64_t x272 = INT64_MIN;

	t67 = ((x269|x270)^(x271==x272));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MAX;
	uint16_t x275 = 7259U;
	volatile int64_t x276 = INT64_MIN;
	int64_t t68 = INT64_MAX;

	t68 = ((x273|x274)^(x275==x276));

	if (t68 != INT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x279 = -1;
	int8_t x280 = -1;
	int64_t t69 = 822201749788334077LL;

	t69 = ((x277|x278)^(x279==x280));

	if (t69 != -9223372036854775793LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = 1;
	int32_t x282 = INT32_MIN;
	int64_t x283 = -1LL;
	volatile int64_t x284 = -1LL;
	volatile int32_t t70 = INT32_MIN;

	t70 = ((x281|x282)^(x283==x284));

	if (t70 != INT32_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = -3865;
	uint32_t x286 = 1904626U;
	uint64_t x287 = 5LLU;
	int8_t x288 = INT8_MIN;

	t71 = ((x285|x286)^(x287==x288));

	if (t71 != 4294967287U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = INT32_MIN;
	volatile int64_t x290 = -33495046787565LL;
	int16_t x291 = -1;
	static volatile int8_t x292 = -14;
	int64_t t72 = -26067LL;

	t72 = ((x289|x290)^(x291==x292));

	if (t72 != -744329709LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x293 = 643382925U;
	volatile int16_t x294 = -1613;
	volatile uint32_t x295 = 12574U;
	uint32_t x296 = 1U;
	volatile uint32_t t73 = 44U;

	t73 = ((x293|x294)^(x295==x296));

	if (t73 != 4294967231U) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = -1LL;
	static volatile int16_t x298 = INT16_MAX;
	static uint8_t x299 = UINT8_MAX;
	uint32_t x300 = 80078708U;
	static volatile int64_t t74 = 27823699522LL;

	t74 = ((x297|x298)^(x299==x300));

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x301 = 9U;
	int64_t x302 = INT64_MIN;
	int32_t x303 = 252729849;
	int8_t x304 = INT8_MIN;
	static volatile int64_t t75 = 145402759LL;

	t75 = ((x301|x302)^(x303==x304));

	if (t75 != -9223372036854775799LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x305 = 14;
	uint8_t x306 = 0U;
	uint16_t x308 = UINT16_MAX;
	volatile int32_t t76 = 237155199;

	t76 = ((x305|x306)^(x307==x308));

	if (t76 != 14) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = INT16_MAX;
	static uint16_t x310 = 0U;
	volatile int32_t x311 = -1;
	static uint32_t x312 = 2635966U;
	volatile int32_t t77 = 790;

	t77 = ((x309|x310)^(x311==x312));

	if (t77 != 32767) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x314 = INT64_MAX;
	uint8_t x315 = 6U;
	int64_t t78 = -18300LL;

	t78 = ((x313|x314)^(x315==x316));

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x317 = INT16_MIN;
	uint32_t x319 = 1237364U;
	int64_t x320 = -44008327LL;
	volatile int32_t t79 = -28;

	t79 = ((x317|x318)^(x319==x320));

	if (t79 != -3) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x321 = 28;
	static volatile int32_t x324 = INT32_MIN;

	t80 = ((x321|x322)^(x323==x324));

	if (t80 != -100) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x326 = -1;
	int16_t x327 = 213;
	volatile int32_t t81 = 2;

	t81 = ((x325|x326)^(x327==x328));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = INT32_MIN;
	int16_t x330 = -1;
	int16_t x331 = 124;
	int16_t x332 = INT16_MIN;

	t82 = ((x329|x330)^(x331==x332));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x333 = 67LLU;
	uint16_t x334 = 892U;
	volatile uint64_t x335 = 28014LLU;

	t83 = ((x333|x334)^(x335==x336));

	if (t83 != 895LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x337 = 738U;
	static volatile int16_t x338 = INT16_MIN;
	int16_t x339 = -1;
	int32_t t84 = -63907;

	t84 = ((x337|x338)^(x339==x340));

	if (t84 != -32030) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = -105530921;
	volatile int64_t x342 = -1LL;
	uint32_t x343 = 528773U;
	uint8_t x344 = 1U;

	t85 = ((x341|x342)^(x343==x344));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x346 = UINT64_MAX;
	static int16_t x347 = INT16_MIN;
	volatile int32_t x348 = -4605;
	volatile uint64_t t86 = UINT64_MAX;

	t86 = ((x345|x346)^(x347==x348));

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MIN;
	int32_t x350 = -1;
	uint16_t x351 = UINT16_MAX;

	t87 = ((x349|x350)^(x351==x352));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x354 = INT32_MAX;
	int32_t x355 = -113884974;
	uint32_t x356 = 10U;
	volatile int32_t t88 = -4638;

	t88 = ((x353|x354)^(x355==x356));

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint32_t x358 = UINT32_MAX;
	static volatile int32_t x359 = -870077;
	static int32_t x360 = -1;
	volatile uint32_t t89 = UINT32_MAX;

	t89 = ((x357|x358)^(x359==x360));

	if (t89 != UINT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x361 = 14U;
	int32_t x362 = INT32_MAX;
	int16_t x363 = INT16_MIN;
	volatile int64_t x364 = INT64_MAX;

	t90 = ((x361|x362)^(x363==x364));

	if (t90 != 2147483647U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x366 = INT64_MAX;
	uint8_t x368 = 3U;

	t91 = ((x365|x366)^(x367==x368));

	if (t91 != INT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = -1;
	uint32_t x371 = 0U;
	int8_t x372 = INT8_MAX;
	uint32_t t92 = UINT32_MAX;

	t92 = ((x369|x370)^(x371==x372));

	if (t92 != UINT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = INT8_MIN;
	int64_t x374 = INT64_MIN;
	static uint64_t x375 = 46344584310201LLU;
	static int32_t x376 = -3001;
	static int64_t t93 = 60171078500918143LL;

	t93 = ((x373|x374)^(x375==x376));

	if (t93 != -128LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x377 = INT32_MIN;
	static int16_t x378 = -82;
	volatile int32_t x379 = INT32_MIN;
	static int32_t t94 = -3484199;

	t94 = ((x377|x378)^(x379==x380));

	if (t94 != -82) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x383 = UINT8_MAX;
	int8_t x384 = 3;
	static int64_t t95 = -2179LL;

	t95 = ((x381|x382)^(x383==x384));

	if (t95 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = INT32_MAX;
	int64_t x387 = INT64_MIN;
	volatile int8_t x388 = INT8_MIN;
	volatile int32_t t96 = INT32_MAX;

	t96 = ((x385|x386)^(x387==x388));

	if (t96 != INT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x389 = UINT32_MAX;
	int8_t x390 = -1;
	uint32_t x391 = UINT32_MAX;
	uint32_t t97 = UINT32_MAX;

	t97 = ((x389|x390)^(x391==x392));

	if (t97 != UINT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x394 = INT32_MIN;
	volatile int64_t x395 = INT64_MIN;
	int32_t x396 = INT32_MIN;
	volatile int32_t t98 = -386;

	t98 = ((x393|x394)^(x395==x396));

	if (t98 != -2147483644) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x397 = -1;
	uint16_t x398 = 8126U;
	int64_t x399 = -1LL;
	int16_t x400 = 0;

	t99 = ((x397|x398)^(x399==x400));

	if (t99 != -1) { NG(); } else { ; }
	
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

