#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int64_t x1 = -1LL;
int16_t x6 = INT16_MIN;
int64_t x7 = INT64_MIN;
int8_t x10 = -1;
uint32_t x14 = 15708116U;
static int64_t t3 = -105947LL;
int16_t x22 = INT16_MAX;
uint32_t t5 = 1342904939U;
int64_t x25 = -18482812173LL;
int32_t x28 = -1;
int8_t x35 = 5;
int16_t x39 = -1;
uint64_t x47 = UINT64_MAX;
int32_t x49 = INT32_MIN;
int64_t t13 = 18161045LL;
uint64_t x61 = 0LLU;
volatile uint8_t x63 = UINT8_MAX;
uint32_t x65 = UINT32_MAX;
int32_t x68 = INT32_MIN;
uint64_t t15 = 3LLU;
int16_t x70 = INT16_MIN;
static volatile uint32_t x72 = UINT32_MAX;
uint64_t x74 = 6749811LLU;
volatile int16_t x75 = INT16_MIN;
volatile int64_t x81 = INT64_MIN;
uint64_t x83 = 6LLU;
volatile int64_t x84 = 29056341533379LL;
static volatile uint64_t t18 = 19LLU;
static volatile uint32_t t20 = 112360340U;
volatile uint16_t x93 = UINT16_MAX;
int8_t x94 = INT8_MIN;
uint8_t x97 = 4U;
static int16_t x101 = INT16_MIN;
int32_t x113 = INT32_MIN;
int32_t x121 = INT32_MIN;
int64_t x122 = -74862LL;
uint64_t x124 = 7LLU;
int64_t x130 = INT64_MIN;
int64_t x131 = -1787717892539LL;
static uint64_t x133 = UINT64_MAX;
int64_t x134 = INT64_MAX;
int8_t x135 = INT8_MAX;
int16_t x137 = -1178;
static uint64_t t33 = 7LLU;
uint64_t x150 = UINT64_MAX;
int16_t x154 = -1;
static uint16_t x161 = 7U;
static int64_t t36 = -2449639956820743LL;
int32_t x165 = INT32_MIN;
volatile int64_t x170 = -2802386843LL;
volatile int64_t t38 = -6179524770367LL;
uint64_t x174 = UINT64_MAX;
int16_t x176 = INT16_MIN;
uint64_t t39 = 70387200813203536LLU;
volatile uint8_t x180 = UINT8_MAX;
int8_t x193 = INT8_MIN;
static int16_t x210 = INT16_MIN;
volatile uint32_t x212 = 692864706U;
int8_t x216 = INT8_MAX;
int64_t x219 = INT64_MIN;
volatile int32_t x220 = 69;
static volatile int64_t t46 = -4929LL;
uint8_t x222 = UINT8_MAX;
int32_t x226 = -7;
uint64_t x229 = 47LLU;
static int8_t x237 = -1;
uint32_t x238 = 72U;
int64_t x248 = 12LL;
volatile int8_t x250 = 1;
static volatile int32_t x253 = INT32_MIN;
volatile uint32_t x254 = UINT32_MAX;
int8_t x262 = 6;
int32_t x265 = -308854;
int64_t x270 = INT64_MIN;
uint32_t t58 = 6574U;
int64_t t62 = -14LL;
volatile uint16_t x296 = UINT16_MAX;
static uint16_t x299 = 10944U;
int64_t t64 = 15706516750674LL;
volatile int32_t t65 = 11189273;
uint8_t x305 = 1U;
static int32_t x332 = INT32_MAX;
volatile uint64_t t70 = 3842039610032216760LLU;
int16_t x336 = -1;
int32_t x337 = 1;
volatile int16_t x339 = 2000;
volatile int64_t x340 = -386839126LL;
volatile int8_t x346 = 14;
int16_t x348 = INT16_MAX;
int16_t x352 = -254;
int8_t x353 = INT8_MAX;
uint64_t x359 = 3LLU;
uint32_t x360 = 1U;
static int64_t t78 = -4195418264LL;
uint64_t t79 = 1455177410LLU;
static int16_t x375 = INT16_MIN;
volatile int16_t x379 = 13;
int32_t t81 = -12014415;
int32_t x382 = INT32_MIN;
uint64_t x388 = 5792LLU;
int16_t x390 = INT16_MIN;
static volatile uint64_t t84 = 17380334204683LLU;
static uint32_t x395 = 902984276U;
static int64_t x396 = -14352209387538012LL;
int32_t x399 = INT32_MIN;
uint64_t t86 = 216757981706749LLU;
static int8_t x404 = INT8_MIN;
static volatile int16_t x405 = 42;
volatile uint8_t x408 = UINT8_MAX;
int64_t x410 = INT64_MAX;
uint32_t x411 = 1428U;
volatile int16_t x419 = -1;
int16_t x424 = -101;
volatile int32_t t92 = 78244791;
int64_t x426 = -1428523218LL;
int32_t x431 = INT32_MIN;
uint32_t x433 = 2075483U;
uint32_t t95 = 39813U;
int64_t x442 = INT64_MAX;
int64_t x443 = 6835LL;
volatile int8_t x444 = 6;
volatile int8_t x447 = INT8_MIN;
int8_t x452 = 0;


void f0(void) {
	uint32_t x2 = 1U;
	uint64_t x3 = UINT64_MAX;
	static volatile uint32_t x4 = 3120U;
	uint64_t t0 = 34674LLU;

	t0 = (((x1|x2)%x3)*x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = 3;
	int8_t x8 = INT8_MIN;
	int64_t t1 = -2726625950LL;

	t1 = (((x5|x6)%x7)*x8);

	if (t1 != 4193920LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	int64_t x11 = INT64_MIN;
	int32_t x12 = INT32_MIN;
	volatile int64_t t2 = -5LL;

	t2 = (((x9|x10)%x11)*x12);

	if (t2 != 2147483648LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 2104822347U;
	volatile int64_t x15 = 6LL;
	int8_t x16 = INT8_MIN;

	t3 = (((x13|x14)%x15)*x16);

	if (t3 != -128LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = 0;
	uint16_t x18 = 6U;
	uint8_t x19 = UINT8_MAX;
	int32_t x20 = 233;
	static int32_t t4 = 1578447;

	t4 = (((x17|x18)%x19)*x20);

	if (t4 != 1398) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 0U;
	int16_t x23 = INT16_MAX;
	int32_t x24 = -1;

	t5 = (((x21|x22)%x23)*x24);

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x26 = -1;
	int32_t x27 = INT32_MAX;
	static int64_t t6 = 54291251LL;

	t6 = (((x25|x26)%x27)*x28);

	if (t6 != 1LL) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int8_t x29 = INT8_MIN;
	static int64_t x30 = 183705873698653LL;
	volatile int32_t x31 = INT32_MIN;
	volatile uint8_t x32 = 29U;
	volatile int64_t t7 = -1459189022LL;

	t7 = (((x29|x30)%x31)*x32);

	if (t7 != -1015LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x33 = 1U;
	int64_t x34 = INT64_MIN;
	static uint8_t x36 = 1U;
	volatile int64_t t8 = 425LL;

	t8 = (((x33|x34)%x35)*x36);

	if (t8 != -2LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MAX;
	volatile int32_t x38 = INT32_MAX;
	volatile int8_t x40 = INT8_MIN;
	volatile int32_t t9 = -4;

	t9 = (((x37|x38)%x39)*x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = 5;
	int64_t x42 = INT64_MIN;
	static volatile uint32_t x43 = 468U;
	static volatile int16_t x44 = -192;
	int64_t t10 = 9073079LL;

	t10 = (((x41|x42)%x43)*x44);

	if (t10 != 576LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x45 = 31225U;
	int32_t x46 = -6511;
	int8_t x48 = 0;
	volatile uint64_t t11 = 8922422316349445LLU;

	t11 = (((x45|x46)%x47)*x48);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint16_t x50 = 79U;
	uint8_t x51 = 13U;
	int16_t x52 = INT16_MIN;
	static int32_t t12 = 127153;

	t12 = (((x49|x50)%x51)*x52);

	if (t12 != 327680) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = -91975727435LL;
	int8_t x58 = -1;
	uint16_t x59 = 15203U;
	int8_t x60 = 1;

	t13 = (((x57|x58)%x59)*x60);

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x62 = -2;
	uint8_t x64 = UINT8_MAX;
	uint64_t t14 = 3918914159LLU;

	t14 = (((x61|x62)%x63)*x64);

	if (t14 != 64770LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x66 = 423845491451388LLU;
	volatile int64_t x67 = INT64_MAX;

	t15 = (((x65|x66)%x67)*x68);

	if (t15 != 9223372039002259456LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = INT64_MIN;
	volatile int32_t x71 = INT32_MIN;
	volatile int64_t t16 = 16LL;

	t16 = (((x69|x70)%x71)*x72);

	if (t16 != -140737488322560LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x73 = INT16_MIN;
	int16_t x76 = -1;
	static uint64_t t17 = 124517463922255767LLU;

	t17 = (((x73|x74)%x75)*x76);

	if (t17 != 18446744073709519245LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x82 = INT8_MAX;

	t18 = (((x81|x82)%x83)*x84);

	if (t18 != 87169024600137LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x85 = -1LL;
	volatile int32_t x86 = -98347493;
	uint64_t x87 = 1458986923LLU;
	int64_t x88 = -7904533LL;
	volatile uint64_t t19 = 6205LLU;

	t19 = (((x85|x86)%x87)*x88);

	if (t19 != 18438557567528738929LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x89 = UINT16_MAX;
	volatile int32_t x90 = INT32_MAX;
	int32_t x91 = -46136;
	static uint32_t x92 = UINT32_MAX;

	t20 = (((x89|x90)%x91)*x92);

	if (t20 != 4294929905U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x95 = -1;
	uint8_t x96 = 123U;
	volatile int32_t t21 = -1;

	t21 = (((x93|x94)%x95)*x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x98 = -1;
	int8_t x99 = INT8_MIN;
	uint16_t x100 = 16893U;
	volatile int32_t t22 = 56;

	t22 = (((x97|x98)%x99)*x100);

	if (t22 != -16893) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x102 = 1U;
	volatile int64_t x103 = INT64_MIN;
	static volatile int16_t x104 = INT16_MAX;
	volatile int64_t t23 = -15440LL;

	t23 = (((x101|x102)%x103)*x104);

	if (t23 != -1073676289LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x109 = UINT64_MAX;
	int8_t x110 = INT8_MIN;
	int8_t x111 = INT8_MIN;
	volatile uint8_t x112 = UINT8_MAX;
	static volatile uint64_t t24 = 33LLU;

	t24 = (((x109|x110)%x111)*x112);

	if (t24 != 32385LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x114 = UINT8_MAX;
	uint8_t x115 = 1U;
	uint32_t x116 = UINT32_MAX;
	static uint32_t t25 = 11120U;

	t25 = (((x113|x114)%x115)*x116);

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x117 = INT16_MAX;
	int16_t x118 = INT16_MIN;
	int32_t x119 = 568;
	int64_t x120 = INT64_MAX;
	static volatile int64_t t26 = -4318896LL;

	t26 = (((x117|x118)%x119)*x120);

	if (t26 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x123 = 211;
	uint64_t t27 = 339767069348476LLU;

	t27 = (((x121|x122)%x123)*x124);

	if (t27 != 18446744073709550440LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x125 = INT8_MAX;
	static int8_t x126 = -1;
	uint32_t x127 = 5429397U;
	int32_t x128 = INT32_MIN;
	uint32_t t28 = 897871U;

	t28 = (((x125|x126)%x127)*x128);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x129 = 1U;
	volatile uint16_t x132 = UINT16_MAX;
	static int64_t t29 = 143LL;

	t29 = (((x129|x130)%x131)*x132);

	if (t29 != -59086107337010610LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x136 = -1;
	uint64_t t30 = UINT64_MAX;

	t30 = (((x133|x134)%x135)*x136);

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x138 = -1LL;
	int32_t x139 = -1210834;
	uint8_t x140 = UINT8_MAX;
	volatile int64_t t31 = -240831410470857934LL;

	t31 = (((x137|x138)%x139)*x140);

	if (t31 != -255LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x141 = 0U;
	volatile int16_t x142 = INT16_MIN;
	uint8_t x143 = 5U;
	int32_t x144 = INT32_MAX;
	uint32_t t32 = 21535169U;

	t32 = (((x141|x142)%x143)*x144);

	if (t32 != 2147483645U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x145 = 2328150580071293287LLU;
	uint32_t x146 = 7820506U;
	int8_t x147 = -1;
	static int8_t x148 = INT8_MAX;

	t33 = (((x145|x146)%x147)*x148);

	if (t33 != 527218490126567809LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x149 = -434541290;
	volatile uint32_t x151 = UINT32_MAX;
	uint16_t x152 = 24042U;
	uint64_t t34 = 129200929239865009LLU;

	t34 = (((x149|x150)%x151)*x152);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x153 = 1LL;
	int32_t x155 = INT32_MIN;
	int64_t x156 = INT64_MAX;
	int64_t t35 = -3783060596LL;

	t35 = (((x153|x154)%x155)*x156);

	if (t35 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x162 = INT16_MIN;
	static volatile int64_t x163 = INT64_MIN;
	volatile uint16_t x164 = 197U;

	t36 = (((x161|x162)%x163)*x164);

	if (t36 != -6453917LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x166 = -1;
	static uint64_t x167 = UINT64_MAX;
	volatile uint32_t x168 = UINT32_MAX;
	static uint64_t t37 = 5726116049813LLU;

	t37 = (((x165|x166)%x167)*x168);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x169 = UINT8_MAX;
	uint8_t x171 = 5U;
	static int8_t x172 = -1;

	t38 = (((x169|x170)%x171)*x172);

	if (t38 != 4LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x173 = -42470248354877688LL;
	int16_t x175 = INT16_MIN;

	t39 = (((x173|x174)%x175)*x176);

	if (t39 != 18446744072635842560LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x177 = 475U;
	volatile uint64_t x178 = 45001LLU;
	volatile int32_t x179 = -1;
	volatile uint64_t t40 = 8197LLU;

	t40 = (((x177|x178)%x179)*x180);

	if (t40 != 11479845LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x185 = -1;
	uint16_t x186 = 14188U;
	uint64_t x187 = 115707441103LLU;
	int64_t x188 = -120863LL;
	uint64_t t41 = 17710LLU;

	t41 = (((x185|x186)%x187)*x188);

	if (t41 != 18432822212244003175LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint64_t x194 = UINT64_MAX;
	int32_t x195 = INT32_MIN;
	uint16_t x196 = 4U;
	uint64_t t42 = 12100979392107831LLU;

	t42 = (((x193|x194)%x195)*x196);

	if (t42 != 8589934588LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x197 = INT32_MIN;
	int16_t x198 = -1;
	int16_t x199 = -1;
	int32_t x200 = INT32_MIN;
	int32_t t43 = 453444888;

	t43 = (((x197|x198)%x199)*x200);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x209 = INT8_MAX;
	int8_t x211 = INT8_MIN;
	volatile uint32_t t44 = 26764U;

	t44 = (((x209|x210)%x211)*x212);

	if (t44 != 3602102590U) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x213 = -4011808;
	static uint16_t x214 = 143U;
	volatile uint32_t x215 = UINT32_MAX;
	uint32_t t45 = 3462052U;

	t45 = (((x213|x214)%x215)*x216);

	if (t45 != 3785469585U) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x217 = 1628;
	int16_t x218 = INT16_MIN;

	t46 = (((x217|x218)%x219)*x220);

	if (t46 != -2148660LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x221 = INT32_MIN;
	volatile uint16_t x223 = UINT16_MAX;
	int8_t x224 = INT8_MIN;
	int32_t t47 = 562370863;

	t47 = (((x221|x222)%x223)*x224);

	if (t47 != 4161664) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x225 = UINT32_MAX;
	static volatile uint32_t x227 = 86850U;
	static uint32_t x228 = UINT32_MAX;
	static uint32_t t48 = 2844U;

	t48 = (((x225|x226)%x227)*x228);

	if (t48 != 4294906201U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x230 = UINT32_MAX;
	uint32_t x231 = UINT32_MAX;
	int64_t x232 = INT64_MIN;
	uint64_t t49 = 467132775LLU;

	t49 = (((x229|x230)%x231)*x232);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x233 = 7227LL;
	int64_t x234 = INT64_MAX;
	int32_t x235 = -1;
	uint16_t x236 = 86U;
	int64_t t50 = -9762LL;

	t50 = (((x233|x234)%x235)*x236);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x239 = INT16_MIN;
	uint32_t x240 = 33425U;
	uint32_t t51 = 1082334744U;

	t51 = (((x237|x238)%x239)*x240);

	if (t51 != 1095236975U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x245 = INT64_MAX;
	static int64_t x246 = -10883658249764LL;
	int64_t x247 = INT64_MIN;
	int64_t t52 = 3241177099589669501LL;

	t52 = (((x245|x246)%x247)*x248);

	if (t52 != -12LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x249 = 50;
	static int16_t x251 = -1;
	int32_t x252 = INT32_MIN;
	int32_t t53 = -103297147;

	t53 = (((x249|x250)%x251)*x252);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x255 = 39LLU;
	volatile int32_t x256 = -6;
	volatile uint64_t t54 = 993205588257180LLU;

	t54 = (((x253|x254)%x255)*x256);

	if (t54 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x261 = 6U;
	static volatile int8_t x263 = INT8_MAX;
	int32_t x264 = -1;
	volatile int32_t t55 = 392088801;

	t55 = (((x261|x262)%x263)*x264);

	if (t55 != -6) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x266 = 13273;
	static int16_t x267 = -29;
	static uint16_t x268 = 24U;
	static int32_t t56 = -99;

	t56 = (((x265|x266)%x267)*x268);

	if (t56 != -672) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x269 = -1;
	static int16_t x271 = -1;
	uint16_t x272 = 17U;
	int64_t t57 = 229960LL;

	t57 = (((x269|x270)%x271)*x272);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x273 = 12250U;
	int8_t x274 = INT8_MAX;
	uint32_t x275 = 363109U;
	int16_t x276 = INT16_MIN;

	t58 = (((x273|x274)%x275)*x276);

	if (t58 != 3892346880U) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x277 = 2976;
	static int16_t x278 = INT16_MIN;
	uint8_t x279 = 68U;
	int8_t x280 = 3;
	volatile int32_t t59 = 29471;

	t59 = (((x277|x278)%x279)*x280);

	if (t59 != -24) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x281 = -260747;
	int64_t x282 = -1189545504382149LL;
	int64_t x283 = INT64_MIN;
	int32_t x284 = INT32_MIN;
	static int64_t t60 = 75316072755016LL;

	t60 = (((x281|x282)%x283)*x284);

	if (t60 != 506052374167552LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x285 = INT64_MIN;
	static volatile uint32_t x286 = 1225U;
	static int8_t x287 = INT8_MIN;
	int32_t x288 = INT32_MAX;
	volatile int64_t t61 = 1659670LL;

	t61 = (((x285|x286)%x287)*x288);

	if (t61 != -118111600585LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x289 = INT64_MIN;
	int16_t x290 = INT16_MIN;
	volatile int16_t x291 = INT16_MIN;
	uint16_t x292 = 1U;

	t62 = (((x289|x290)%x291)*x292);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x293 = 81017684656586LLU;
	uint16_t x294 = 1U;
	static int16_t x295 = -1;
	volatile uint64_t t63 = 25982497LLU;

	t63 = (((x293|x294)%x295)*x296);

	if (t63 != 5309493963969429045LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x297 = INT16_MIN;
	volatile int64_t x298 = -1LL;
	int16_t x300 = -1;

	t64 = (((x297|x298)%x299)*x300);

	if (t64 != 1LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x301 = INT16_MIN;
	static volatile uint8_t x302 = UINT8_MAX;
	static uint8_t x303 = 10U;
	static volatile uint8_t x304 = 14U;

	t65 = (((x301|x302)%x303)*x304);

	if (t65 != -42) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x306 = -1;
	int64_t x307 = -863LL;
	volatile int16_t x308 = 1;
	volatile int64_t t66 = -777644LL;

	t66 = (((x305|x306)%x307)*x308);

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x309 = 199028169879799LLU;
	int64_t x310 = -1LL;
	uint16_t x311 = 895U;
	uint32_t x312 = 2U;
	volatile uint64_t t67 = 1618899700621LLU;

	t67 = (((x309|x310)%x311)*x312);

	if (t67 != 1320LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x317 = INT8_MAX;
	int8_t x318 = -1;
	static uint64_t x319 = UINT64_MAX;
	uint16_t x320 = 3488U;
	volatile uint64_t t68 = 79781LLU;

	t68 = (((x317|x318)%x319)*x320);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x325 = INT16_MAX;
	static int16_t x326 = INT16_MIN;
	int8_t x327 = -17;
	int64_t x328 = 0LL;
	volatile int64_t t69 = -14097538272875542LL;

	t69 = (((x325|x326)%x327)*x328);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x329 = 87423529U;
	int8_t x330 = 32;
	uint64_t x331 = UINT64_MAX;

	t70 = (((x329|x330)%x331)*x332);

	if (t70 != 187740598890530263LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x333 = -1806048646193817351LL;
	int32_t x334 = 1;
	int32_t x335 = -1605461;
	static volatile int64_t t71 = -13LL;

	t71 = (((x333|x334)%x335)*x336);

	if (t71 != 70825LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x338 = INT64_MIN;
	volatile int64_t t72 = 338363087LL;

	t72 = (((x337|x338)%x339)*x340);

	if (t72 != 699018300682LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x345 = INT64_MAX;
	int16_t x347 = -3;
	volatile int64_t t73 = -498255LL;

	t73 = (((x345|x346)%x347)*x348);

	if (t73 != 32767LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x349 = -67699765;
	volatile int64_t x350 = INT64_MIN;
	volatile uint32_t x351 = 4U;
	int64_t t74 = -15LL;

	t74 = (((x349|x350)%x351)*x352);

	if (t74 != 254LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x354 = UINT64_MAX;
	uint16_t x355 = UINT16_MAX;
	static uint16_t x356 = 14U;
	volatile uint64_t t75 = 509970LLU;

	t75 = (((x353|x354)%x355)*x356);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x357 = 11;
	static int32_t x358 = INT32_MIN;
	volatile uint64_t t76 = 5640017879566LLU;

	t76 = (((x357|x358)%x359)*x360);

	if (t76 != 1LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x361 = INT64_MIN;
	uint16_t x362 = 1U;
	int16_t x363 = -1;
	int64_t x364 = INT64_MIN;
	int64_t t77 = -7910932377LL;

	t77 = (((x361|x362)%x363)*x364);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x365 = 14454;
	volatile int16_t x366 = 7;
	int64_t x367 = INT64_MAX;
	static int32_t x368 = INT32_MAX;

	t78 = (((x365|x366)%x367)*x368);

	if (t78 != 31041876117385LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x369 = 1U;
	uint64_t x370 = UINT64_MAX;
	volatile int64_t x371 = -1678718590641LL;
	int32_t x372 = INT32_MIN;

	t79 = (((x369|x370)%x371)*x372);

	if (t79 != 10541115454066262016LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x373 = INT64_MIN;
	uint16_t x374 = 26641U;
	uint16_t x376 = 24U;
	volatile int64_t t80 = 628393649LL;

	t80 = (((x373|x374)%x375)*x376);

	if (t80 != -147048LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x377 = -1;
	volatile int16_t x378 = INT16_MIN;
	volatile int32_t x380 = INT32_MAX;

	t81 = (((x377|x378)%x379)*x380);

	if (t81 != -2147483647) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x381 = 63044896614LLU;
	volatile uint32_t x383 = 6808274U;
	int32_t x384 = -1;
	static volatile uint64_t t82 = 413201122740513LLU;

	t82 = (((x381|x382)%x383)*x384);

	if (t82 != 18446744073706990094LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x385 = 30U;
	int16_t x386 = -1;
	int16_t x387 = INT16_MIN;
	uint64_t t83 = 65305LLU;

	t83 = (((x385|x386)%x387)*x388);

	if (t83 != 189786464LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x389 = 46612LLU;
	uint16_t x391 = UINT16_MAX;
	int8_t x392 = INT8_MIN;

	t84 = (((x389|x390)%x391)*x392);

	if (t84 != 18446744073703585280LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x393 = 0U;
	uint64_t x394 = 14132175LLU;
	uint64_t t85 = 91128233876565LLU;

	t85 = (((x393|x394)%x395)*x396);

	if (t85 != 12463133180224833436LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x397 = UINT16_MAX;
	static uint64_t x398 = 8794816944758777444LLU;
	int16_t x400 = 5;

	t86 = (((x397|x398)%x399)*x400);

	if (t86 != 7080596576374816763LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x401 = INT8_MIN;
	static int64_t x402 = -1LL;
	int64_t x403 = INT64_MAX;
	int64_t t87 = 41898030980430LL;

	t87 = (((x401|x402)%x403)*x404);

	if (t87 != 128LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x406 = 3633137967233LLU;
	int8_t x407 = INT8_MIN;
	volatile uint64_t t88 = 20641110182LLU;

	t88 = (((x405|x406)%x407)*x408);

	if (t88 != 926450181655125LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x409 = 1794862323U;
	uint16_t x412 = 13U;
	volatile int64_t t89 = -29778996029LL;

	t89 = (((x409|x410)%x411)*x412);

	if (t89 != 17563LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x413 = -1LL;
	uint8_t x414 = 0U;
	static volatile uint16_t x415 = UINT16_MAX;
	int64_t x416 = 9353583771777131LL;
	volatile int64_t t90 = -1LL;

	t90 = (((x413|x414)%x415)*x416);

	if (t90 != -9353583771777131LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x417 = -352020186;
	uint64_t x418 = 8237390LLU;
	volatile uint16_t x420 = 0U;
	volatile uint64_t t91 = 5379237995777239LLU;

	t91 = (((x417|x418)%x419)*x420);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x421 = -1;
	int32_t x422 = INT32_MIN;
	static int8_t x423 = INT8_MIN;

	t92 = (((x421|x422)%x423)*x424);

	if (t92 != 101) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x425 = INT8_MIN;
	uint64_t x427 = 7260055191LLU;
	int32_t x428 = INT32_MIN;
	uint64_t t93 = 530LLU;

	t93 = (((x425|x426)%x427)*x428);

	if (t93 != 8938604226829877248LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x429 = INT16_MIN;
	int8_t x430 = 0;
	uint32_t x432 = UINT32_MAX;
	volatile uint32_t t94 = 33U;

	t94 = (((x429|x430)%x431)*x432);

	if (t94 != 32768U) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x434 = 2523U;
	int32_t x435 = 1883567;
	int8_t x436 = INT8_MIN;

	t95 = (((x433|x434)%x435)*x436);

	if (t95 != 4270385664U) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x437 = -225LL;
	static uint32_t x438 = 7U;
	int8_t x439 = 34;
	volatile uint16_t x440 = 15U;
	volatile int64_t t96 = 11247572LL;

	t96 = (((x437|x438)%x439)*x440);

	if (t96 != -315LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x441 = INT32_MIN;
	volatile int64_t t97 = -1056961152018050LL;

	t97 = (((x441|x442)%x443)*x444);

	if (t97 != -6LL) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int16_t x445 = INT16_MIN;
	uint32_t x446 = 401U;
	int16_t x448 = INT16_MIN;
	static uint32_t t98 = 1823705121U;

	t98 = (((x445|x446)%x447)*x448);

	if (t98 != 1060601856U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x449 = -6132;
	volatile uint8_t x450 = 1U;
	static volatile int32_t x451 = 966498;
	volatile int32_t t99 = 90968;

	t99 = (((x449|x450)%x451)*x452);

	if (t99 != 0) { NG(); } else { ; }
	
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

