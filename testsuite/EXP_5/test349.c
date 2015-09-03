#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x15 = UINT16_MAX;
static int16_t x20 = 4300;
int64_t x26 = -1LL;
int16_t x27 = INT16_MIN;
static uint64_t x31 = 43683033LLU;
int16_t x37 = INT16_MIN;
static uint16_t x40 = 5U;
uint32_t t6 = 1310970U;
static int32_t x59 = -1;
static int64_t x60 = 328816253420184LL;
uint64_t x62 = 117650698LLU;
int64_t t11 = -1113508855425827LL;
int16_t x88 = INT16_MAX;
static int64_t x89 = 178838LL;
int64_t x103 = 61375389866LL;
volatile int16_t x104 = -25;
int16_t x106 = -4;
int64_t t18 = -1564LL;
int64_t x128 = 113959589590183950LL;
int64_t x129 = INT64_MIN;
int8_t x149 = -21;
int64_t x152 = INT64_MIN;
int64_t x155 = -1LL;
uint16_t x165 = 3721U;
uint32_t x171 = 1U;
volatile uint64_t t33 = 49475973876LLU;
int64_t t35 = -245LL;
volatile int64_t x196 = INT64_MIN;
int64_t t36 = -6053LL;
int64_t x199 = -1LL;
int16_t x202 = 1;
volatile uint64_t x203 = 1164LLU;
volatile int8_t x214 = -44;
uint16_t x216 = 7986U;
uint64_t x229 = UINT64_MAX;
static int16_t x239 = 1;
int64_t x241 = INT64_MAX;
int32_t x242 = -1;
volatile int64_t t46 = -3893699977346LL;
static volatile int16_t x251 = INT16_MAX;
int32_t x252 = -53147406;
int8_t x254 = -1;
static int64_t t49 = -7049LL;
uint32_t x258 = UINT32_MAX;
uint32_t t50 = 1352U;
static uint64_t x270 = 2LLU;
static volatile uint64_t t52 = 943990LLU;
int8_t x273 = INT8_MAX;
uint16_t x274 = UINT16_MAX;
uint32_t x275 = 1U;
static uint8_t x278 = 0U;
static volatile uint64_t t55 = 183900523320601514LLU;
static int16_t x289 = INT16_MAX;
volatile int8_t x294 = -3;
static volatile uint64_t t60 = 37601860252LLU;
static volatile int64_t t64 = 268484664LL;
int8_t x344 = -5;
int32_t t66 = 84273;
static int32_t x348 = INT32_MIN;
uint32_t x358 = UINT32_MAX;
volatile uint32_t t69 = 30153U;
volatile int64_t x376 = INT64_MIN;
int8_t x377 = 20;
volatile int16_t x379 = INT16_MIN;
int16_t x400 = INT16_MAX;
int64_t t77 = -11575416975883110LL;
uint8_t x401 = 10U;
volatile uint32_t x404 = 2U;
volatile uint32_t t78 = 3087U;
int16_t x405 = INT16_MIN;
static uint64_t x413 = UINT64_MAX;
volatile uint64_t x416 = 17024448641974617LLU;
uint8_t x422 = UINT8_MAX;
static volatile uint8_t x424 = 1U;
int16_t x426 = INT16_MIN;
int16_t x427 = -1;
static uint64_t t86 = 29851LLU;
uint64_t x464 = UINT64_MAX;
static volatile int16_t x466 = -1;
uint32_t x467 = 63327U;
int16_t x468 = INT16_MAX;
int64_t x475 = 3492995042LL;
int64_t x476 = INT64_MAX;
int16_t x482 = INT16_MIN;
uint64_t x488 = 987654107138428LLU;
volatile uint64_t t96 = 46027LLU;
uint8_t x510 = 34U;
static int8_t x519 = INT8_MAX;


void f0(void) {
	int64_t x1 = INT64_MIN;
	volatile int16_t x2 = INT16_MAX;
	int16_t x3 = INT16_MIN;
	static int8_t x4 = INT8_MAX;
	int64_t t0 = INT64_MIN;

	t0 = (x1&((x2*x3)+x4));

	if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x9 = -17513465152568LL;
	int16_t x10 = -1;
	int32_t x11 = -1;
	static uint64_t x12 = UINT64_MAX;
	volatile uint64_t t1 = 7LLU;

	t1 = (x9&((x10*x11)+x12));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x13 = -2683;
	static uint8_t x14 = 1U;
	volatile uint64_t x16 = UINT64_MAX;
	volatile uint64_t t2 = 278249440900LLU;

	t2 = (x13&((x14*x15)+x16));

	if (t2 != 62852LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x17 = UINT16_MAX;
	volatile uint16_t x18 = UINT16_MAX;
	static int8_t x19 = INT8_MAX;
	int32_t t3 = -14553135;

	t3 = (x17&((x18*x19)+x20));

	if (t3 != 4173) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x25 = 30995536LLU;
	uint32_t x28 = 7U;
	volatile uint64_t t4 = 9201LLU;

	t4 = (x25&((x26*x27)+x28));

	if (t4 != 32768LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x29 = -1;
	volatile uint16_t x30 = UINT16_MAX;
	static int8_t x32 = -1;
	static volatile uint64_t t5 = 50LLU;

	t5 = (x29&((x30*x31)+x32));

	if (t5 != 2862767567654LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x38 = 4U;
	int32_t x39 = 2502;

	t6 = (x37&((x38*x39)+x40));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x49 = INT8_MAX;
	int16_t x50 = -3;
	volatile int8_t x51 = INT8_MIN;
	int8_t x52 = INT8_MIN;
	int32_t t7 = -8775;

	t7 = (x49&((x50*x51)+x52));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x53 = INT32_MIN;
	int8_t x54 = INT8_MAX;
	uint64_t x55 = 682778LLU;
	uint16_t x56 = 10U;
	uint64_t t8 = 13601083664LLU;

	t8 = (x53&((x54*x55)+x56));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x57 = INT32_MIN;
	uint16_t x58 = UINT16_MAX;
	static int64_t t9 = -152713779LL;

	t9 = (x57&((x58*x59)+x60));

	if (t9 != 328814106247168LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x61 = INT32_MAX;
	int8_t x63 = -1;
	int32_t x64 = 495739;
	volatile uint64_t t10 = 581003004647LLU;

	t10 = (x61&((x62*x63)+x64));

	if (t10 != 2030328689LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x65 = 39U;
	int16_t x66 = INT16_MAX;
	int64_t x67 = 494620201LL;
	int16_t x68 = -1;

	t11 = (x65&((x66*x67)+x68));

	if (t11 != 6LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x77 = 7;
	static uint16_t x78 = 21U;
	uint16_t x79 = 0U;
	static int8_t x80 = INT8_MIN;
	int32_t t12 = 2;

	t12 = (x77&((x78*x79)+x80));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x85 = 103;
	uint32_t x86 = UINT32_MAX;
	static uint8_t x87 = UINT8_MAX;
	volatile uint32_t t13 = 73949U;

	t13 = (x85&((x86*x87)+x88));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x90 = INT32_MIN;
	uint64_t x91 = 269262LLU;
	int16_t x92 = INT16_MIN;
	uint64_t t14 = 1529392533535028459LLU;

	t14 = (x89&((x90*x91)+x92));

	if (t14 != 163840LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x93 = -1;
	int16_t x94 = INT16_MAX;
	int8_t x95 = INT8_MIN;
	uint16_t x96 = 3U;
	volatile int32_t t15 = 2170697;

	t15 = (x93&((x94*x95)+x96));

	if (t15 != -4194173) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x101 = INT32_MIN;
	volatile uint16_t x102 = UINT16_MAX;
	int64_t t16 = 12511LL;

	t16 = (x101&((x102*x103)+x104));

	if (t16 != 4022234725220352LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x105 = UINT32_MAX;
	volatile uint64_t x107 = 132511486463389LLU;
	uint32_t x108 = 1801560U;
	volatile uint64_t t17 = 60LLU;

	t17 = (x105&((x106*x107)+x108));

	if (t17 != 264914660LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x109 = UINT16_MAX;
	uint16_t x110 = UINT16_MAX;
	int16_t x111 = INT16_MAX;
	static int64_t x112 = -16018241556619235LL;

	t18 = (x109&((x110*x111)+x112));

	if (t18 != 57374LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x117 = 19288835LL;
	static uint32_t x118 = UINT32_MAX;
	uint16_t x119 = 56U;
	static volatile uint8_t x120 = 110U;
	volatile int64_t t19 = 0LL;

	t19 = (x117&((x118*x119)+x120));

	if (t19 != 2LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x121 = 1U;
	static int8_t x122 = INT8_MAX;
	static volatile int8_t x123 = 1;
	static uint16_t x124 = 3U;
	int32_t t20 = -922889488;

	t20 = (x121&((x122*x123)+x124));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x125 = INT8_MAX;
	static uint8_t x126 = 8U;
	volatile int64_t x127 = -1LL;
	volatile int64_t t21 = -40488LL;

	t21 = (x125&((x126*x127)+x128));

	if (t21 != 6LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x130 = 10U;
	int16_t x131 = -1;
	uint16_t x132 = 82U;
	int64_t t22 = 953804794LL;

	t22 = (x129&((x130*x131)+x132));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x133 = 552U;
	uint8_t x134 = UINT8_MAX;
	int16_t x135 = INT16_MAX;
	static int16_t x136 = INT16_MIN;
	int32_t t23 = 85;

	t23 = (x133&((x134*x135)+x136));

	if (t23 != 512) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x137 = 6063295;
	uint8_t x138 = 49U;
	static volatile uint64_t x139 = 25768671485660LLU;
	uint64_t x140 = UINT64_MAX;
	volatile uint64_t t24 = 277231367069LLU;

	t24 = (x137&((x138*x139)+x140));

	if (t24 != 27LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x141 = INT16_MIN;
	int8_t x142 = -1;
	int64_t x143 = -1LL;
	int16_t x144 = INT16_MIN;
	int64_t t25 = -482383886121045LL;

	t25 = (x141&((x142*x143)+x144));

	if (t25 != -32768LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x145 = -3;
	int16_t x146 = INT16_MIN;
	static int16_t x147 = INT16_MAX;
	int8_t x148 = 0;
	int32_t t26 = -5;

	t26 = (x145&((x146*x147)+x148));

	if (t26 != -1073709056) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x150 = 23U;
	static uint64_t x151 = 6074LLU;
	uint64_t t27 = 2346798529687951LLU;

	t27 = (x149&((x150*x151)+x152));

	if (t27 != 9223372036854915490LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x153 = UINT8_MAX;
	static int32_t x154 = INT32_MIN;
	volatile uint8_t x156 = 10U;
	static volatile int64_t t28 = 8861023LL;

	t28 = (x153&((x154*x155)+x156));

	if (t28 != 10LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x157 = INT32_MIN;
	int32_t x158 = INT32_MAX;
	volatile int64_t x159 = -126508LL;
	uint32_t x160 = 1180U;
	static volatile int64_t t29 = -577871025754546591LL;

	t29 = (x157&((x158*x159)+x160));

	if (t29 != -271673861341184LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x161 = -29391859307820021LL;
	uint64_t x162 = UINT64_MAX;
	volatile int16_t x163 = -1;
	int8_t x164 = INT8_MIN;
	uint64_t t30 = 1087672183LLU;

	t30 = (x161&((x162*x163)+x164));

	if (t30 != 18417352214401731585LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x166 = 316U;
	static int8_t x167 = INT8_MAX;
	int16_t x168 = INT16_MAX;
	static int32_t t31 = -65022916;

	t31 = (x165&((x166*x167)+x168));

	if (t31 != 3201) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x169 = 101646U;
	volatile uint64_t x170 = 2888LLU;
	uint8_t x172 = 1U;
	uint64_t t32 = 59451017602173LLU;

	t32 = (x169&((x170*x171)+x172));

	if (t32 != 2312LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x173 = 3245U;
	uint64_t x174 = 431LLU;
	int8_t x175 = INT8_MAX;
	int64_t x176 = -1LL;

	t33 = (x173&((x174*x175)+x176));

	if (t33 != 1152LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x181 = 11U;
	int8_t x182 = INT8_MAX;
	uint32_t x183 = UINT32_MAX;
	int32_t x184 = 57;
	uint32_t t34 = 72U;

	t34 = (x181&((x182*x183)+x184));

	if (t34 != 10U) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x189 = 164650849607848LL;
	uint32_t x190 = 85566951U;
	uint32_t x191 = 1987619525U;
	int16_t x192 = INT16_MAX;

	t35 = (x189&((x190*x191)+x192));

	if (t35 != 52428928LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x193 = -1;
	uint32_t x194 = 37779259U;
	int16_t x195 = -633;

	t36 = (x193&((x194*x195)+x196));

	if (t36 != -9223372034999242979LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x197 = INT8_MAX;
	static volatile uint32_t x198 = UINT32_MAX;
	int16_t x200 = 1;
	volatile int64_t t37 = -25478865036921LL;

	t37 = (x197&((x198*x199)+x200));

	if (t37 != 2LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x201 = 118741170844693LL;
	volatile uint32_t x204 = 3725276U;
	uint64_t t38 = 33238789428752LLU;

	t38 = (x201&((x202*x203)+x204));

	if (t38 != 578560LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x209 = INT32_MAX;
	static int8_t x210 = 3;
	static int8_t x211 = INT8_MIN;
	uint64_t x212 = 630785280044LLU;
	uint64_t t39 = 8610987105LLU;

	t39 = (x209&((x210*x211)+x212));

	if (t39 != 1572570796LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x213 = INT32_MIN;
	int8_t x215 = 1;
	volatile int32_t t40 = 98;

	t40 = (x213&((x214*x215)+x216));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x217 = INT16_MIN;
	int64_t x218 = -1LL;
	int16_t x219 = INT16_MAX;
	uint32_t x220 = 12491U;
	int64_t t41 = -19554188505702LL;

	t41 = (x217&((x218*x219)+x220));

	if (t41 != -32768LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x221 = INT32_MAX;
	volatile int32_t x222 = -14025478;
	uint32_t x223 = UINT32_MAX;
	static int8_t x224 = 0;
	volatile uint32_t t42 = 246U;

	t42 = (x221&((x222*x223)+x224));

	if (t42 != 14025478U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x230 = INT16_MIN;
	static int8_t x231 = INT8_MIN;
	static int8_t x232 = -3;
	volatile uint64_t t43 = 1663251674673296269LLU;

	t43 = (x229&((x230*x231)+x232));

	if (t43 != 4194301LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x233 = 10129941U;
	static volatile uint16_t x234 = 52U;
	uint16_t x235 = UINT16_MAX;
	static int8_t x236 = -1;
	static uint32_t t44 = 1714U;

	t44 = (x233&((x234*x235)+x236));

	if (t44 != 1217025U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x237 = -1;
	int16_t x238 = -173;
	volatile uint32_t x240 = 3344457U;
	volatile uint32_t t45 = 0U;

	t45 = (x237&((x238*x239)+x240));

	if (t45 != 3344284U) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x243 = 126U;
	int16_t x244 = INT16_MAX;

	t46 = (x241&((x242*x243)+x244));

	if (t46 != 32641LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x245 = -10525LL;
	volatile int32_t x246 = INT32_MAX;
	static int16_t x247 = -1;
	uint8_t x248 = UINT8_MAX;
	static int64_t t47 = 2287455306519062522LL;

	t47 = (x245&((x246*x247)+x248));

	if (t47 != -2147483648LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x249 = UINT32_MAX;
	uint32_t x250 = UINT32_MAX;
	uint32_t t48 = 27668942U;

	t48 = (x249&((x250*x251)+x252));

	if (t48 != 4241787123U) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x253 = 7084707;
	int8_t x255 = -15;
	static int64_t x256 = 559477759LL;

	t49 = (x253&((x254*x255)+x256));

	if (t49 != 4722690LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x257 = INT16_MIN;
	volatile int32_t x259 = -37199;
	uint16_t x260 = UINT16_MAX;

	t50 = (x257&((x258*x259)+x260));

	if (t50 != 98304U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x261 = 79LL;
	volatile int16_t x262 = INT16_MIN;
	static volatile int16_t x263 = INT16_MIN;
	uint16_t x264 = 8U;
	int64_t t51 = 62879116743360315LL;

	t51 = (x261&((x262*x263)+x264));

	if (t51 != 8LL) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int64_t x269 = INT64_MAX;
	int16_t x271 = 453;
	int16_t x272 = INT16_MIN;

	t52 = (x269&((x270*x271)+x272));

	if (t52 != 9223372036854743946LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x276 = 15;
	static uint32_t t53 = 536664U;

	t53 = (x273&((x274*x275)+x276));

	if (t53 != 14U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x277 = 47514597U;
	int32_t x279 = 224;
	static volatile int32_t x280 = 122591;
	volatile uint32_t t54 = 233169U;

	t54 = (x277&((x278*x279)+x280));

	if (t54 != 66245U) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x281 = 77731243409LLU;
	uint32_t x282 = 68692760U;
	volatile uint32_t x283 = UINT32_MAX;
	volatile int64_t x284 = INT64_MIN;

	t55 = (x281&((x282*x283)+x284));

	if (t55 != 421823616LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x285 = UINT32_MAX;
	int32_t x286 = 1836064;
	int16_t x287 = -1;
	static uint16_t x288 = 19035U;
	uint32_t t56 = 4716821U;

	t56 = (x285&((x286*x287)+x288));

	if (t56 != 4293150267U) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int16_t x290 = 3;
	uint16_t x291 = UINT16_MAX;
	static volatile uint32_t x292 = 41540638U;
	volatile uint32_t t57 = 15U;

	t57 = (x289&((x290*x291)+x292));

	if (t57 != 23579U) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x293 = INT64_MAX;
	static volatile uint64_t x295 = 4773917052535017LLU;
	int32_t x296 = 16758687;
	static volatile uint64_t t58 = 861809387069648721LLU;

	t58 = (x293&((x294*x295)+x296));

	if (t58 != 9209050285713929444LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x297 = 5U;
	uint64_t x298 = UINT64_MAX;
	volatile int32_t x299 = INT32_MIN;
	int32_t x300 = -3249359;
	uint64_t t59 = 5354632848LLU;

	t59 = (x297&((x298*x299)+x300));

	if (t59 != 1LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x301 = 12;
	static int16_t x302 = 3172;
	uint64_t x303 = UINT64_MAX;
	volatile uint64_t x304 = 139243474423060LLU;

	t60 = (x301&((x302*x303)+x304));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x305 = INT64_MAX;
	uint16_t x306 = 11615U;
	int16_t x307 = INT16_MIN;
	int16_t x308 = -1;
	int64_t t61 = -736415LL;

	t61 = (x305&((x306*x307)+x308));

	if (t61 != 9223372036474175487LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x317 = INT64_MIN;
	static int32_t x318 = INT32_MIN;
	static uint64_t x319 = 147758408287LLU;
	static int16_t x320 = -1;
	uint64_t t62 = 44895871LLU;

	t62 = (x317&((x318*x319)+x320));

	if (t62 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x329 = INT32_MIN;
	int32_t x330 = -3706;
	uint64_t x331 = 1LLU;
	int16_t x332 = 622;
	volatile uint64_t t63 = 7714722039LLU;

	t63 = (x329&((x330*x331)+x332));

	if (t63 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x333 = UINT32_MAX;
	int64_t x334 = -224318LL;
	volatile int64_t x335 = 72455LL;
	int32_t x336 = INT32_MIN;

	t64 = (x333&((x334*x335)+x336));

	if (t64 != 3074392142LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x337 = UINT8_MAX;
	uint64_t x338 = 5904LLU;
	int16_t x339 = -1260;
	int32_t x340 = INT32_MIN;
	volatile uint64_t t65 = 243202LLU;

	t65 = (x337&((x338*x339)+x340));

	if (t65 != 64LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x341 = 1439;
	static int16_t x342 = 1;
	uint16_t x343 = 15U;

	t66 = (x341&((x342*x343)+x344));

	if (t66 != 10) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x345 = 5754507163LL;
	int32_t x346 = 50368;
	volatile uint64_t x347 = UINT64_MAX;
	static volatile uint64_t t67 = 43890905162LLU;

	t67 = (x345&((x346*x347)+x348));

	if (t67 != 5754456832LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x349 = -390;
	static int64_t x350 = INT64_MIN;
	static int16_t x351 = 0;
	uint32_t x352 = UINT32_MAX;
	static int64_t t68 = 3767971LL;

	t68 = (x349&((x350*x351)+x352));

	if (t68 != 4294966906LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x357 = UINT32_MAX;
	int8_t x359 = 9;
	static int32_t x360 = INT32_MIN;

	t69 = (x357&((x358*x359)+x360));

	if (t69 != 2147483639U) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x365 = INT16_MAX;
	volatile int16_t x366 = INT16_MAX;
	uint32_t x367 = UINT32_MAX;
	int8_t x368 = -1;
	uint32_t t70 = 419U;

	t70 = (x365&((x366*x367)+x368));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x369 = 1240627U;
	int16_t x370 = 674;
	uint64_t x371 = 4976360342147687LLU;
	volatile int32_t x372 = 1752;
	uint64_t t71 = 48898310230LLU;

	t71 = (x369&((x370*x371)+x372));

	if (t71 != 1239554LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x373 = INT8_MAX;
	int32_t x374 = INT32_MIN;
	volatile int64_t x375 = -1LL;
	static int64_t t72 = 107LL;

	t72 = (x373&((x374*x375)+x376));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x378 = 276121330U;
	volatile int16_t x380 = 74;
	uint32_t t73 = 76574U;

	t73 = (x377&((x378*x379)+x380));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x381 = 2413;
	int16_t x382 = INT16_MAX;
	uint64_t x383 = UINT64_MAX;
	int16_t x384 = -4622;
	volatile uint64_t t74 = 897LLU;

	t74 = (x381&((x382*x383)+x384));

	if (t74 != 2401LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x385 = 30057230608LLU;
	static volatile int64_t x386 = -66651287604LL;
	static int16_t x387 = INT16_MIN;
	int32_t x388 = INT32_MIN;
	uint64_t t75 = 78442074555LLU;

	t75 = (x385&((x386*x387)+x388));

	if (t75 != 19193659392LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x393 = INT8_MIN;
	static int64_t x394 = 20654060276LL;
	uint16_t x395 = 1U;
	int32_t x396 = INT32_MIN;
	int64_t t76 = 789240855134919611LL;

	t76 = (x393&((x394*x395)+x396));

	if (t76 != 18506576512LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x397 = 7721U;
	int64_t x398 = -352LL;
	int32_t x399 = -1;

	t77 = (x397&((x398*x399)+x400));

	if (t77 != 9LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x402 = INT16_MIN;
	uint16_t x403 = UINT16_MAX;

	t78 = (x401&((x402*x403)+x404));

	if (t78 != 2U) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x406 = -36829659;
	uint16_t x407 = 5U;
	static int16_t x408 = INT16_MIN;
	volatile int32_t t79 = 177439;

	t79 = (x405&((x406*x407)+x408));

	if (t79 != -184188928) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x409 = INT16_MIN;
	int16_t x410 = INT16_MIN;
	int8_t x411 = -1;
	int16_t x412 = 1716;
	volatile int32_t t80 = 30164426;

	t80 = (x409&((x410*x411)+x412));

	if (t80 != 32768) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x414 = 18U;
	volatile int64_t x415 = -402LL;
	uint64_t t81 = 2042LLU;

	t81 = (x413&((x414*x415)+x416));

	if (t81 != 17024448641967381LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x417 = -11;
	uint16_t x418 = 22U;
	int8_t x419 = -1;
	static uint8_t x420 = 2U;
	int32_t t82 = 56309;

	t82 = (x417&((x418*x419)+x420));

	if (t82 != -28) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x421 = UINT32_MAX;
	int32_t x423 = 0;
	uint32_t t83 = 16088U;

	t83 = (x421&((x422*x423)+x424));

	if (t83 != 1U) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x425 = INT16_MIN;
	static uint32_t x428 = UINT32_MAX;
	volatile uint32_t t84 = 851003877U;

	t84 = (x425&((x426*x427)+x428));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x437 = 0U;
	int16_t x438 = INT16_MIN;
	uint32_t x439 = 27295U;
	int64_t x440 = -1LL;
	volatile int64_t t85 = 29010352815LL;

	t85 = (x437&((x438*x439)+x440));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x441 = 0LL;
	static volatile int32_t x442 = INT32_MIN;
	static uint64_t x443 = 1648771LLU;
	int32_t x444 = INT32_MIN;

	t86 = (x441&((x442*x443)+x444));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x445 = 1;
	static volatile int8_t x446 = -1;
	static uint64_t x447 = 142776086344811LLU;
	int32_t x448 = -206;
	uint64_t t87 = 385155LLU;

	t87 = (x445&((x446*x447)+x448));

	if (t87 != 1LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x449 = INT8_MIN;
	int32_t x450 = 3;
	uint8_t x451 = UINT8_MAX;
	uint32_t x452 = 264118749U;
	uint32_t t88 = 12045198U;

	t88 = (x449&((x450*x451)+x452));

	if (t88 != 264119424U) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x453 = -3966LL;
	uint16_t x454 = 0U;
	volatile int8_t x455 = -1;
	uint8_t x456 = 111U;
	volatile int64_t t89 = 11958LL;

	t89 = (x453&((x454*x455)+x456));

	if (t89 != 2LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x457 = 3;
	int16_t x458 = INT16_MIN;
	int32_t x459 = -1;
	volatile uint64_t x460 = 85536917627LLU;
	uint64_t t90 = 57312LLU;

	t90 = (x457&((x458*x459)+x460));

	if (t90 != 3LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x461 = -1285;
	int8_t x462 = INT8_MIN;
	volatile uint64_t x463 = 1LLU;
	volatile uint64_t t91 = 107707374926833412LLU;

	t91 = (x461&((x462*x463)+x464));

	if (t91 != 18446744073709550203LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x465 = -1;
	volatile uint32_t t92 = 164U;

	t92 = (x465&((x466*x467)+x468));

	if (t92 != 4294936736U) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x473 = INT64_MIN;
	volatile uint64_t x474 = 13LLU;
	uint64_t t93 = 31643729134415545LLU;

	t93 = (x473&((x474*x475)+x476));

	if (t93 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x477 = -1;
	uint8_t x478 = 31U;
	volatile int32_t x479 = -19;
	int32_t x480 = -1;
	int32_t t94 = -420;

	t94 = (x477&((x478*x479)+x480));

	if (t94 != -590) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x481 = 3142;
	volatile int32_t x483 = -1;
	int16_t x484 = INT16_MIN;
	volatile int32_t t95 = -101375;

	t95 = (x481&((x482*x483)+x484));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x485 = INT16_MIN;
	int16_t x486 = -8;
	int16_t x487 = -1;

	t96 = (x485&((x486*x487)+x488));

	if (t96 != 987654107136000LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x489 = INT16_MIN;
	uint16_t x490 = UINT16_MAX;
	uint64_t x491 = UINT64_MAX;
	int64_t x492 = 3327380109713LL;
	uint64_t t97 = 35908541344LLU;

	t97 = (x489&((x490*x491)+x492));

	if (t97 != 3327380029440LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x509 = INT64_MIN;
	uint8_t x511 = 2U;
	int8_t x512 = INT8_MAX;
	static int64_t t98 = -7345455410542695LL;

	t98 = (x509&((x510*x511)+x512));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x517 = -1;
	int64_t x518 = -1LL;
	static int8_t x520 = INT8_MIN;
	int64_t t99 = -51440719321051LL;

	t99 = (x517&((x518*x519)+x520));

	if (t99 != -255LL) { NG(); } else { ; }
	
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

