#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x4 = 0U;
int32_t x9 = -3504;
int64_t t3 = -82905511207604LL;
int8_t x21 = INT8_MIN;
static int32_t x25 = 0;
static uint32_t x28 = 241126U;
static uint8_t x38 = 125U;
int8_t x40 = 1;
int16_t x44 = -4;
static int64_t t11 = -11301892835LL;
volatile int8_t x60 = -1;
static volatile uint64_t x61 = 56945LLU;
int8_t x67 = 1;
uint64_t x70 = 1658059980LLU;
uint64_t x76 = UINT64_MAX;
static volatile uint64_t t16 = 7LLU;
int32_t x83 = INT32_MAX;
int64_t x94 = INT64_MAX;
uint8_t x103 = UINT8_MAX;
uint8_t x105 = 109U;
uint64_t x110 = UINT64_MAX;
int64_t x113 = INT64_MAX;
volatile uint32_t x114 = 187157165U;
int8_t x119 = 1;
int8_t x121 = -1;
int32_t x123 = INT32_MAX;
volatile uint16_t x124 = 0U;
volatile uint64_t x132 = 15185LLU;
int16_t x133 = INT16_MIN;
uint16_t x148 = 49U;
uint64_t x158 = UINT64_MAX;
volatile int64_t x163 = 90815LL;
volatile int16_t x167 = INT16_MAX;
volatile int64_t t37 = INT64_MAX;
uint16_t x169 = 1356U;
static int8_t x172 = INT8_MAX;
int8_t x186 = INT8_MIN;
volatile int64_t t42 = -801556798LL;
uint64_t x189 = 25101067720172705LLU;
volatile int16_t x192 = -1805;
int64_t x196 = -1LL;
int64_t x226 = INT64_MIN;
int64_t x229 = INT64_MIN;
int16_t x230 = INT16_MAX;
volatile uint32_t t53 = 488364U;
int16_t x243 = INT16_MIN;
volatile int64_t t54 = -30952502320LL;
int32_t x245 = 924696970;
static uint64_t t56 = UINT64_MAX;
int16_t x260 = INT16_MIN;
uint64_t x262 = 1058182496130231004LLU;
static uint32_t x263 = UINT32_MAX;
volatile uint64_t t59 = 3821089051852682369LLU;
uint8_t x275 = 7U;
volatile uint32_t x283 = 6807U;
volatile uint64_t x284 = UINT64_MAX;
int32_t x285 = INT32_MIN;
int32_t x287 = INT32_MIN;
int16_t x298 = -1;
volatile uint64_t t67 = 11677798LLU;
int8_t x305 = -22;
static uint16_t x310 = 6922U;
volatile int16_t x316 = INT16_MIN;
int16_t x321 = -1;
static volatile uint64_t x322 = 0LLU;
int32_t x324 = INT32_MIN;
uint64_t t71 = UINT64_MAX;
static volatile int64_t t73 = 78304351255021328LL;
int8_t x336 = INT8_MIN;
volatile int16_t x337 = INT16_MAX;
int16_t x338 = INT16_MIN;
volatile int32_t t75 = -3693;
volatile uint8_t x342 = 33U;
int64_t x343 = -1LL;
static volatile int64_t x344 = -1LL;
uint32_t t77 = UINT32_MAX;
static volatile int16_t x351 = INT16_MIN;
int64_t x352 = INT64_MIN;
int16_t x355 = -1;
int8_t x364 = -12;
static uint16_t x369 = UINT16_MAX;
volatile uint32_t x371 = 51U;
static uint16_t x377 = 16U;
int32_t x378 = 4060334;
int32_t t84 = -2;
int32_t x395 = -1;
int8_t x396 = 1;
uint32_t x401 = 82285U;
int16_t x404 = 2881;
static uint8_t x412 = UINT8_MAX;
int64_t x430 = -17127232LL;
volatile int64_t t95 = 42LL;
uint32_t x434 = 11299U;
volatile uint64_t t97 = 3985LLU;
static int8_t x446 = INT8_MIN;
static int64_t t99 = -940320893610803517LL;


void f0(void) {
	static uint64_t x1 = UINT64_MAX;
	volatile int32_t x2 = 366741230;
	int32_t x3 = 4735;
	volatile uint64_t t0 = UINT64_MAX;

	t0 = (x1|((x2%x3)*x4));

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint64_t x5 = UINT64_MAX;
	volatile int32_t x6 = -14464;
	int64_t x7 = -1LL;
	volatile int64_t x8 = -1113LL;
	volatile uint64_t t1 = UINT64_MAX;

	t1 = (x5|((x6%x7)*x8));

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x10 = INT8_MIN;
	uint8_t x11 = UINT8_MAX;
	static uint8_t x12 = 1U;
	int32_t t2 = 11952;

	t2 = (x9|((x10%x11)*x12));

	if (t2 != -48) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = 0;
	volatile int8_t x14 = INT8_MIN;
	int64_t x15 = INT64_MIN;
	uint8_t x16 = UINT8_MAX;

	t3 = (x13|((x14%x15)*x16));

	if (t3 != -32640LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x17 = 31U;
	int16_t x18 = -1;
	int8_t x19 = 1;
	int16_t x20 = INT16_MAX;
	volatile uint32_t t4 = 889068710U;

	t4 = (x17|((x18%x19)*x20));

	if (t4 != 31U) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x22 = INT64_MIN;
	uint32_t x23 = 49144U;
	uint16_t x24 = UINT16_MAX;
	volatile int64_t t5 = -2LL;

	t5 = (x21|((x22%x23)*x24));

	if (t5 != -104LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x26 = -27959723584LL;
	uint8_t x27 = 115U;
	int64_t t6 = 3844943110781805LL;

	t6 = (x25|((x26%x27)*x28));

	if (t6 != -4581394LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = UINT8_MAX;
	int64_t x30 = 140403701574927LL;
	int64_t x31 = INT64_MIN;
	int16_t x32 = INT16_MIN;
	volatile int64_t t7 = 9610012204LL;

	t7 = (x29|((x30%x31)*x32));

	if (t7 != -4600748493207207681LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 998U;
	int32_t x34 = 1030457;
	uint8_t x35 = 1U;
	uint32_t x36 = UINT32_MAX;
	static uint32_t t8 = 14466624U;

	t8 = (x33|((x34%x35)*x36));

	if (t8 != 998U) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint64_t x37 = 305LLU;
	int16_t x39 = -264;
	volatile uint64_t t9 = 937003LLU;

	t9 = (x37|((x38%x39)*x40));

	if (t9 != 381LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 6U;
	int64_t x42 = INT64_MAX;
	uint16_t x43 = 6U;
	volatile int64_t t10 = -23LL;

	t10 = (x41|((x42%x43)*x44));

	if (t10 != -2LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x53 = INT64_MIN;
	uint16_t x54 = UINT16_MAX;
	volatile uint8_t x55 = 10U;
	int16_t x56 = 62;

	t11 = (x53|((x54%x55)*x56));

	if (t11 != -9223372036854775498LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x57 = INT64_MAX;
	static int8_t x58 = 0;
	int8_t x59 = 41;
	int64_t t12 = INT64_MAX;

	t12 = (x57|((x58%x59)*x60));

	if (t12 != INT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x62 = INT64_MAX;
	static int16_t x63 = INT16_MIN;
	static volatile int8_t x64 = 2;
	uint64_t t13 = 281804568LLU;

	t13 = (x61|((x62%x63)*x64));

	if (t13 != 65535LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x65 = 6750780987LLU;
	int32_t x66 = -1;
	int64_t x68 = INT64_MIN;
	volatile uint64_t t14 = 92741446371155LLU;

	t14 = (x65|((x66%x67)*x68));

	if (t14 != 6750780987LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x69 = 111U;
	int16_t x71 = -1;
	int16_t x72 = -15;
	volatile uint64_t t15 = 119702075LLU;

	t15 = (x69|((x70%x71)*x72));

	if (t15 != 18446744048838652015LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x73 = 90676LLU;
	static int16_t x74 = INT16_MIN;
	int64_t x75 = INT64_MIN;

	t16 = (x73|((x74%x75)*x76));

	if (t16 != 123444LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x77 = 0;
	int8_t x78 = -24;
	int64_t x79 = INT64_MIN;
	uint32_t x80 = 684336U;
	int64_t t17 = -26345LL;

	t17 = (x77|((x78%x79)*x80));

	if (t17 != -16424064LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x81 = INT8_MIN;
	uint16_t x82 = 3831U;
	static int64_t x84 = -1LL;
	volatile int64_t t18 = 8LL;

	t18 = (x81|((x82%x83)*x84));

	if (t18 != -119LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x85 = 15012;
	volatile int64_t x86 = 15180174LL;
	volatile int64_t x87 = INT64_MIN;
	uint64_t x88 = 5430811997360117LLU;
	uint64_t t19 = 28604066933LLU;

	t19 = (x85|((x86%x87)*x88));

	if (t19 != 2171815806130552550LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x89 = -1LL;
	static volatile int64_t x90 = INT64_MAX;
	uint8_t x91 = UINT8_MAX;
	uint64_t x92 = UINT64_MAX;
	volatile uint64_t t20 = UINT64_MAX;

	t20 = (x89|((x90%x91)*x92));

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x93 = -1;
	int8_t x95 = -1;
	int16_t x96 = INT16_MIN;
	int64_t t21 = 0LL;

	t21 = (x93|((x94%x95)*x96));

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x101 = INT64_MAX;
	int32_t x102 = INT32_MIN;
	uint16_t x104 = 3495U;
	volatile int64_t t22 = 18895931549575931LL;

	t22 = (x101|((x102%x103)*x104));

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x106 = INT32_MAX;
	uint16_t x107 = UINT16_MAX;
	static int8_t x108 = -20;
	int32_t t23 = -1006;

	t23 = (x105|((x106%x107)*x108));

	if (t23 != -655235) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x109 = UINT16_MAX;
	uint64_t x111 = 1417027LLU;
	static int32_t x112 = INT32_MIN;
	volatile uint64_t t24 = 95275012229LLU;

	t24 = (x109|((x110%x111)*x112));

	if (t24 != 18444311359136006143LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x115 = INT64_MAX;
	int8_t x116 = -57;
	volatile int64_t t25 = 3324741647298LL;

	t25 = (x113|((x114%x115)*x116));

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x117 = -1;
	volatile int64_t x118 = INT64_MAX;
	uint8_t x120 = 1U;
	volatile int64_t t26 = -928640173LL;

	t26 = (x117|((x118%x119)*x120));

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x122 = -1;
	int32_t t27 = -227727;

	t27 = (x121|((x122%x123)*x124));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x129 = 48989134737LLU;
	static int64_t x130 = 0LL;
	int16_t x131 = -1;
	volatile uint64_t t28 = 214655143877LLU;

	t28 = (x129|((x130%x131)*x132));

	if (t28 != 48989134737LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x134 = 1;
	static int8_t x135 = INT8_MIN;
	int16_t x136 = INT16_MAX;
	volatile int32_t t29 = -9;

	t29 = (x133|((x134%x135)*x136));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x137 = -1;
	static int16_t x138 = INT16_MIN;
	static int64_t x139 = 3448726148106LL;
	volatile int8_t x140 = -1;
	int64_t t30 = -19815323728240LL;

	t30 = (x137|((x138%x139)*x140));

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x141 = -1;
	int8_t x142 = 0;
	uint8_t x143 = 95U;
	static int8_t x144 = 1;
	volatile int32_t t31 = 5232;

	t31 = (x141|((x142%x143)*x144));

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x145 = 18;
	int8_t x146 = -4;
	uint8_t x147 = 5U;
	static int32_t t32 = 44238;

	t32 = (x145|((x146%x147)*x148));

	if (t32 != -194) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x149 = INT64_MIN;
	int64_t x150 = -1LL;
	uint64_t x151 = UINT64_MAX;
	uint64_t x152 = 10290167LLU;
	uint64_t t33 = 29294324LLU;

	t33 = (x149|((x150%x151)*x152));

	if (t33 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x153 = INT64_MAX;
	volatile int32_t x154 = INT32_MIN;
	static int8_t x155 = INT8_MAX;
	uint64_t x156 = UINT64_MAX;
	uint64_t t34 = 946612085272908232LLU;

	t34 = (x153|((x154%x155)*x156));

	if (t34 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x157 = -56;
	int64_t x159 = -1LL;
	volatile uint32_t x160 = 9844U;
	uint64_t t35 = 197396LLU;

	t35 = (x157|((x158%x159)*x160));

	if (t35 != 18446744073709551560LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x161 = 311U;
	int32_t x162 = -1;
	int64_t x164 = -1LL;
	volatile int64_t t36 = 2LL;

	t36 = (x161|((x162%x163)*x164));

	if (t36 != 311LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x165 = INT64_MAX;
	static int16_t x166 = INT16_MIN;
	int8_t x168 = -19;

	t37 = (x165|((x166%x167)*x168));

	if (t37 != INT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x170 = -92378;
	int64_t x171 = -1LL;
	int64_t t38 = 61592LL;

	t38 = (x169|((x170%x171)*x172));

	if (t38 != 1356LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x173 = 8406667361337LL;
	uint32_t x174 = 154915924U;
	uint8_t x175 = 12U;
	volatile int8_t x176 = -1;
	int64_t t39 = 5669838624076LL;

	t39 = (x173|((x174%x175)*x176));

	if (t39 != 8409545965565LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x177 = -160;
	uint64_t x178 = UINT64_MAX;
	int16_t x179 = -1;
	int8_t x180 = -1;
	volatile uint64_t t40 = 447108443431039206LLU;

	t40 = (x177|((x178%x179)*x180));

	if (t40 != 18446744073709551456LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x181 = INT32_MAX;
	static volatile int32_t x182 = -1;
	int16_t x183 = -1;
	int64_t x184 = -1LL;
	volatile int64_t t41 = -2100453705206851678LL;

	t41 = (x181|((x182%x183)*x184));

	if (t41 != 2147483647LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x185 = -1LL;
	int64_t x187 = -1LL;
	uint32_t x188 = UINT32_MAX;

	t42 = (x185|((x186%x187)*x188));

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x190 = UINT32_MAX;
	uint64_t x191 = 69987233965712179LLU;
	volatile uint64_t t43 = 393LLU;

	t43 = (x189|((x190%x191)*x192));

	if (t43 != 18446741856448522157LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x193 = 150U;
	int16_t x194 = INT16_MIN;
	volatile int8_t x195 = -1;
	volatile int64_t t44 = -542331960580513997LL;

	t44 = (x193|((x194%x195)*x196));

	if (t44 != 150LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x197 = INT8_MAX;
	int32_t x198 = -1;
	uint32_t x199 = UINT32_MAX;
	static uint8_t x200 = UINT8_MAX;
	volatile uint32_t t45 = 30788118U;

	t45 = (x197|((x198%x199)*x200));

	if (t45 != 127U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x205 = 365978191LLU;
	static int32_t x206 = -1;
	static int8_t x207 = INT8_MIN;
	uint8_t x208 = 5U;
	volatile uint64_t t46 = UINT64_MAX;

	t46 = (x205|((x206%x207)*x208));

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x209 = -1;
	static int8_t x210 = INT8_MIN;
	static int32_t x211 = -1;
	uint32_t x212 = UINT32_MAX;
	volatile uint32_t t47 = UINT32_MAX;

	t47 = (x209|((x210%x211)*x212));

	if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int8_t x213 = INT8_MIN;
	volatile int32_t x214 = INT32_MAX;
	int16_t x215 = -41;
	static uint8_t x216 = 55U;
	int32_t t48 = -38105;

	t48 = (x213|((x214%x215)*x216));

	if (t48 != -86) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x217 = -1;
	static int64_t x218 = INT64_MIN;
	uint16_t x219 = 384U;
	uint64_t x220 = 91388LLU;
	volatile uint64_t t49 = UINT64_MAX;

	t49 = (x217|((x218%x219)*x220));

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x225 = INT64_MAX;
	int16_t x227 = INT16_MAX;
	static int32_t x228 = INT32_MAX;
	int64_t t50 = -37453298562855LL;

	t50 = (x225|((x226%x227)*x228));

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x231 = -2;
	static int8_t x232 = INT8_MIN;
	static volatile int64_t t51 = -925672667066LL;

	t51 = (x229|((x230%x231)*x232));

	if (t51 != -128LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x233 = 1U;
	int32_t x234 = -150014;
	uint64_t x235 = 1481LLU;
	static uint32_t x236 = 31U;
	volatile uint64_t t52 = 6417273640534LLU;

	t52 = (x233|((x234%x235)*x236));

	if (t52 != 39773LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x237 = INT16_MIN;
	uint8_t x238 = UINT8_MAX;
	uint32_t x239 = UINT32_MAX;
	int32_t x240 = INT32_MAX;

	t53 = (x237|((x238%x239)*x240));

	if (t53 != 4294967041U) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x241 = 21U;
	int64_t x242 = INT64_MAX;
	uint8_t x244 = 1U;

	t54 = (x241|((x242%x243)*x244));

	if (t54 != 32767LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x246 = UINT64_MAX;
	int32_t x247 = -1;
	static int32_t x248 = -1;
	static uint64_t t55 = 23817470LLU;

	t55 = (x245|((x246%x247)*x248));

	if (t55 != 924696970LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x249 = -1;
	volatile int8_t x250 = -1;
	static int32_t x251 = 641092529;
	uint64_t x252 = 153165451983LLU;

	t56 = (x249|((x250%x251)*x252));

	if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x253 = INT32_MIN;
	static uint16_t x254 = UINT16_MAX;
	int16_t x255 = -1;
	volatile int8_t x256 = INT8_MIN;
	volatile int32_t t57 = INT32_MIN;

	t57 = (x253|((x254%x255)*x256));

	if (t57 != INT32_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x257 = 21;
	int8_t x258 = 3;
	uint32_t x259 = 152U;
	uint32_t t58 = 598858U;

	t58 = (x257|((x258%x259)*x260));

	if (t58 != 4294869013U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x261 = UINT32_MAX;
	volatile int32_t x264 = INT32_MAX;

	t59 = (x261|((x262%x263)*x264));

	if (t59 != 6775713042932957183LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x265 = 3U;
	int64_t x266 = INT64_MAX;
	volatile int64_t x267 = -1LL;
	int16_t x268 = INT16_MAX;
	static volatile int64_t t60 = -1LL;

	t60 = (x265|((x266%x267)*x268));

	if (t60 != 3LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x269 = -553;
	int16_t x270 = INT16_MAX;
	int32_t x271 = 8;
	int32_t x272 = -140017;
	static volatile int32_t t61 = -61897;

	t61 = (x269|((x270%x271)*x272));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x273 = 28948905111LLU;
	static uint32_t x274 = UINT32_MAX;
	volatile int16_t x276 = 1;
	volatile uint64_t t62 = 106LLU;

	t62 = (x273|((x274%x275)*x276));

	if (t62 != 28948905111LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x277 = INT32_MIN;
	int8_t x278 = -6;
	int32_t x279 = 1;
	int16_t x280 = INT16_MIN;
	int32_t t63 = INT32_MIN;

	t63 = (x277|((x278%x279)*x280));

	if (t63 != INT32_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x281 = 228296629886310309LLU;
	uint16_t x282 = 1U;
	uint64_t t64 = UINT64_MAX;

	t64 = (x281|((x282%x283)*x284));

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x286 = INT64_MAX;
	static int8_t x288 = INT8_MAX;
	int64_t t65 = 29LL;

	t65 = (x285|((x286%x287)*x288));

	if (t65 != -127LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x289 = 6564605696454LLU;
	uint32_t x290 = 21402U;
	int32_t x291 = INT32_MIN;
	volatile int32_t x292 = INT32_MIN;
	volatile uint64_t t66 = 400406LLU;

	t66 = (x289|((x290%x291)*x292));

	if (t66 != 6564605696454LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x297 = 101136U;
	uint64_t x299 = 19LLU;
	uint8_t x300 = UINT8_MAX;

	t67 = (x297|((x298%x299)*x300));

	if (t67 != 102384LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x306 = -1;
	static volatile uint32_t x307 = UINT32_MAX;
	uint64_t x308 = 6952085937965755LLU;
	volatile uint64_t t68 = 2147262484259307698LLU;

	t68 = (x305|((x306%x307)*x308));

	if (t68 != 18446744073709551594LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x309 = 47U;
	int8_t x311 = -7;
	volatile int8_t x312 = -54;
	int32_t t69 = -133799;

	t69 = (x309|((x310%x311)*x312));

	if (t69 != -321) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x313 = INT16_MIN;
	int8_t x314 = INT8_MAX;
	int16_t x315 = INT16_MAX;
	volatile int32_t t70 = -3;

	t70 = (x313|((x314%x315)*x316));

	if (t70 != -32768) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x323 = 78U;

	t71 = (x321|((x322%x323)*x324));

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x325 = INT32_MAX;
	int64_t x326 = INT64_MAX;
	uint8_t x327 = 49U;
	int8_t x328 = INT8_MIN;
	volatile int64_t t72 = -1716657115587LL;

	t72 = (x325|((x326%x327)*x328));

	if (t72 != 2147483647LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x329 = INT16_MAX;
	int64_t x330 = 53849391541LL;
	int8_t x331 = INT8_MIN;
	int32_t x332 = 1;

	t73 = (x329|((x330%x331)*x332));

	if (t73 != 32767LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x333 = -1;
	int32_t x334 = INT32_MAX;
	int64_t x335 = 1968168695LL;
	int64_t t74 = -9LL;

	t74 = (x333|((x334%x335)*x336));

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x339 = -3;
	volatile uint16_t x340 = 880U;

	t75 = (x337|((x338%x339)*x340));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x341 = UINT32_MAX;
	int64_t t76 = 26553125581412LL;

	t76 = (x341|((x342%x343)*x344));

	if (t76 != 4294967295LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x345 = -1;
	int32_t x346 = -1;
	uint32_t x347 = 1U;
	static volatile int8_t x348 = INT8_MAX;

	t77 = (x345|((x346%x347)*x348));

	if (t77 != UINT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x349 = UINT32_MAX;
	static uint64_t x350 = UINT64_MAX;
	uint64_t t78 = 643835LLU;

	t78 = (x349|((x350%x351)*x352));

	if (t78 != 9223372041149743103LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x353 = UINT16_MAX;
	volatile int32_t x354 = INT32_MIN;
	uint64_t x356 = 2436314154311274806LLU;
	uint64_t t79 = 247941484LLU;

	t79 = (x353|((x354%x355)*x356));

	if (t79 != 65535LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x357 = INT16_MAX;
	static uint64_t x358 = UINT64_MAX;
	int32_t x359 = INT32_MAX;
	volatile int8_t x360 = INT8_MIN;
	uint64_t t80 = UINT64_MAX;

	t80 = (x357|((x358%x359)*x360));

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x361 = -1;
	int32_t x362 = INT32_MAX;
	static volatile int32_t x363 = -1;
	volatile int32_t t81 = 4;

	t81 = (x361|((x362%x363)*x364));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x365 = -1LL;
	int64_t x366 = INT64_MAX;
	uint16_t x367 = 432U;
	int32_t x368 = INT32_MAX;
	int64_t t82 = -5LL;

	t82 = (x365|((x366%x367)*x368));

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x370 = 1;
	int64_t x372 = 22125088121529LL;
	int64_t t83 = 152149213LL;

	t83 = (x369|((x370%x371)*x372));

	if (t83 != 22125088145407LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x379 = 2;
	volatile uint8_t x380 = 1U;

	t84 = (x377|((x378%x379)*x380));

	if (t84 != 16) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint8_t x381 = 7U;
	volatile int64_t x382 = INT64_MAX;
	static uint64_t x383 = 17146762240LLU;
	int8_t x384 = INT8_MIN;
	volatile uint64_t t85 = 140485905338915LLU;

	t85 = (x381|((x382%x383)*x384));

	if (t85 != 18446742781522215047LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x385 = INT32_MIN;
	int8_t x386 = INT8_MAX;
	int16_t x387 = INT16_MIN;
	int32_t x388 = -1;
	volatile int32_t t86 = 172247332;

	t86 = (x385|((x386%x387)*x388));

	if (t86 != -127) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x389 = 1;
	int16_t x390 = INT16_MIN;
	static int16_t x391 = -1060;
	int64_t x392 = -27227LL;
	volatile int64_t t87 = -31877LL;

	t87 = (x389|((x390%x391)*x392));

	if (t87 != 26355737LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x393 = INT32_MAX;
	uint32_t x394 = 5915U;
	volatile uint32_t t88 = 0U;

	t88 = (x393|((x394%x395)*x396));

	if (t88 != 2147483647U) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x397 = -1;
	int16_t x398 = -1;
	int8_t x399 = INT8_MIN;
	uint8_t x400 = 1U;
	int32_t t89 = -25165;

	t89 = (x397|((x398%x399)*x400));

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x402 = -1LL;
	int16_t x403 = INT16_MIN;
	static volatile int64_t t90 = -342289515255LL;

	t90 = (x401|((x402%x403)*x404));

	if (t90 != -2561LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x405 = 118;
	volatile int32_t x406 = -1;
	volatile uint32_t x407 = 748210149U;
	uint8_t x408 = 0U;
	volatile uint32_t t91 = 58U;

	t91 = (x405|((x406%x407)*x408));

	if (t91 != 118U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x409 = INT64_MIN;
	int64_t x410 = -1LL;
	int16_t x411 = -1;
	int64_t t92 = INT64_MIN;

	t92 = (x409|((x410%x411)*x412));

	if (t92 != INT64_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x413 = INT8_MIN;
	volatile uint16_t x414 = 3U;
	static uint8_t x415 = UINT8_MAX;
	static volatile int64_t x416 = 43286464641275LL;
	int64_t t93 = 20644044893029LL;

	t93 = (x413|((x414%x415)*x416));

	if (t93 != -15LL) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint32_t x425 = 252325U;
	volatile int64_t x426 = -1LL;
	uint16_t x427 = 1038U;
	static uint32_t x428 = 49705U;
	static int64_t t94 = 38109279434232LL;

	t94 = (x425|((x426%x427)*x428));

	if (t94 != -521LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x429 = INT32_MIN;
	static volatile int32_t x431 = -9;
	int32_t x432 = INT32_MIN;

	t95 = (x429|((x430%x431)*x432));

	if (t95 != -2147483648LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x433 = 2143450040993LLU;
	int64_t x435 = -1LL;
	volatile int16_t x436 = 436;
	static volatile uint64_t t96 = 57733365153229LLU;

	t96 = (x433|((x434%x435)*x436));

	if (t96 != 2143450040993LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x437 = INT64_MIN;
	volatile int8_t x438 = INT8_MAX;
	static uint64_t x439 = UINT64_MAX;
	volatile int8_t x440 = INT8_MAX;

	t97 = (x437|((x438%x439)*x440));

	if (t97 != 9223372036854791937LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x441 = UINT32_MAX;
	volatile int8_t x442 = INT8_MIN;
	static int32_t x443 = -1;
	volatile int32_t x444 = -1;
	volatile uint32_t t98 = UINT32_MAX;

	t98 = (x441|((x442%x443)*x444));

	if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x445 = -587947968272257LL;
	static uint32_t x447 = UINT32_MAX;
	uint8_t x448 = 3U;

	t99 = (x445|((x446%x447)*x448));

	if (t99 != -587946663084289LL) { NG(); } else { ; }
	
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

