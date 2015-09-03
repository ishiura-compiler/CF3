#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x4 = 1001391624LLU;
uint32_t x6 = 401687934U;
int64_t t3 = -4161417355013253LL;
volatile int32_t x21 = 4;
volatile uint32_t x29 = 178U;
uint64_t x32 = 118LLU;
uint32_t x33 = 75U;
int16_t x35 = -1;
int32_t x37 = 5;
int8_t x43 = -28;
static int32_t x53 = 51428127;
int16_t x54 = INT16_MAX;
static volatile int8_t x64 = -1;
volatile int64_t t15 = -84405025307719LL;
int32_t x71 = 121;
uint8_t x72 = 0U;
volatile int64_t t17 = -114659714554279LL;
volatile int64_t t18 = 986700LL;
static int16_t x78 = -1;
volatile uint16_t x79 = UINT16_MAX;
int16_t x80 = 76;
int32_t x84 = -1;
uint8_t x86 = 89U;
int8_t x88 = -1;
volatile int16_t x91 = -17;
uint16_t x92 = 12333U;
static uint16_t x100 = 1U;
static int8_t x101 = INT8_MAX;
int64_t x102 = -1LL;
int64_t t25 = -7363116622447LL;
uint64_t x115 = 2354246LLU;
static uint64_t t28 = 6425671895581074LLU;
uint32_t x118 = 3U;
int64_t x119 = INT64_MIN;
volatile int64_t t29 = -994860LL;
int8_t x121 = INT8_MIN;
uint16_t x124 = 1876U;
int8_t x128 = INT8_MIN;
int16_t x130 = INT16_MAX;
volatile uint32_t t34 = 1042U;
volatile int32_t x143 = -1;
static int64_t x144 = 0LL;
static volatile uint8_t x153 = 82U;
int8_t x156 = -1;
uint8_t x160 = 7U;
int32_t t39 = -40;
uint8_t x162 = 120U;
static volatile int16_t x166 = -14794;
int32_t x168 = INT32_MIN;
static int32_t x169 = INT32_MAX;
int16_t x174 = -961;
volatile uint8_t x176 = UINT8_MAX;
volatile int64_t x179 = -3LL;
int16_t x186 = -1;
volatile int32_t t46 = 395;
static int32_t x191 = 2543309;
volatile int64_t t47 = -3762174107806652627LL;
static int16_t x194 = -3;
volatile uint64_t x205 = 183770LLU;
int8_t x212 = INT8_MIN;
volatile int32_t x213 = -13008;
int32_t t53 = 15;
int16_t x225 = INT16_MIN;
int64_t x228 = INT64_MIN;
int64_t x242 = 24531LL;
static uint64_t x244 = 10779591146702LLU;
volatile uint64_t t60 = 15LLU;
static int64_t x245 = -982052100506751LL;
uint32_t x254 = UINT32_MAX;
int32_t x259 = 72953;
static int64_t t64 = 927184LL;
static int8_t x262 = INT8_MIN;
static int64_t x273 = -3LL;
static int64_t x275 = INT64_MIN;
uint64_t x278 = 18050LLU;
uint16_t x283 = 7U;
uint16_t x296 = 2U;
volatile int64_t t73 = 17LL;
volatile int32_t x297 = INT32_MAX;
int64_t x298 = -368675411LL;
volatile int8_t x302 = INT8_MIN;
uint8_t x305 = 7U;
static int8_t x312 = 0;
volatile int32_t x315 = -1;
volatile int8_t x317 = INT8_MIN;
uint32_t x320 = 232185357U;
static uint64_t x323 = 59LLU;
int64_t x324 = INT64_MIN;
int8_t x327 = -1;
volatile int64_t t82 = 4LL;
static volatile uint64_t t83 = 10LLU;
uint32_t x339 = 87U;
int64_t x347 = -1LL;
int64_t x349 = INT64_MIN;
volatile int64_t t87 = -2462494311875LL;
uint16_t x358 = 0U;
int64_t x360 = INT64_MAX;
static int64_t t89 = 117369LL;
int32_t x362 = -369085;
static uint64_t x364 = 854185LLU;
uint64_t t90 = 218LLU;
uint32_t x376 = 4359615U;
uint64_t x378 = 1718765LLU;
volatile int8_t x383 = INT8_MIN;
static int32_t x387 = INT32_MIN;
volatile int32_t t96 = -1;
static int32_t x390 = -551349;
volatile uint64_t t97 = 11081086LLU;


void f0(void) {
	volatile int32_t x1 = 14;
	int32_t x2 = INT32_MIN;
	static int8_t x3 = INT8_MIN;
	uint64_t t0 = 459406228871LLU;

	t0 = ((x1^x2)/(x3|x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = -540000788;
	volatile int32_t x7 = 0;
	int8_t x8 = INT8_MIN;
	uint32_t t1 = 640292689U;

	t1 = ((x5^x6)/(x7|x8));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	int8_t x10 = 6;
	int8_t x11 = INT8_MIN;
	uint16_t x12 = 0U;
	volatile uint32_t t2 = 121869483U;

	t2 = ((x9^x10)/(x11|x12));

	if (t2 != 1U) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 5U;
	int32_t x14 = INT32_MIN;
	volatile int8_t x15 = INT8_MIN;
	int64_t x16 = -403718LL;

	t3 = ((x13^x14)/(x15|x16));

	if (t3 != 357913940LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	volatile uint32_t x18 = UINT32_MAX;
	uint8_t x19 = UINT8_MAX;
	volatile int8_t x20 = INT8_MIN;
	volatile uint32_t t4 = 323322U;

	t4 = ((x17^x18)/(x19|x20));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x22 = 2588801638492907244LL;
	uint8_t x23 = 1U;
	volatile int16_t x24 = INT16_MIN;
	volatile int64_t t5 = 657927LL;

	t5 = ((x21^x22)/(x23|x24));

	if (t5 != -79006367335822LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = INT64_MIN;
	static uint16_t x26 = UINT16_MAX;
	static int32_t x27 = INT32_MAX;
	uint32_t x28 = 21986U;
	volatile int64_t t6 = 937558270199523908LL;

	t6 = ((x25^x26)/(x27|x28));

	if (t6 != -4294967297LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x30 = -1;
	int8_t x31 = INT8_MIN;
	volatile uint64_t t7 = 23598048030073360LLU;

	t7 = ((x29^x30)/(x31|x32));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x34 = 14292U;
	int64_t x36 = 3074093LL;
	volatile int64_t t8 = -1049LL;

	t8 = ((x33^x34)/(x35|x36));

	if (t8 != -14239LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x38 = 140723384860120452LLU;
	int64_t x39 = INT64_MIN;
	int64_t x40 = INT64_MIN;
	volatile uint64_t t9 = 354252501LLU;

	t9 = ((x37^x38)/(x39|x40));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x41 = UINT32_MAX;
	int64_t x42 = INT64_MIN;
	int32_t x44 = INT32_MIN;
	volatile int64_t t10 = -21LL;

	t10 = ((x41^x42)/(x43|x44));

	if (t10 != 329406144019993161LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x45 = -1;
	uint16_t x46 = 24U;
	uint32_t x47 = UINT32_MAX;
	int64_t x48 = 97LL;
	volatile int64_t t11 = 99573LL;

	t11 = ((x45^x46)/(x47|x48));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MAX;
	int32_t x50 = INT32_MIN;
	static int64_t x51 = INT64_MIN;
	int32_t x52 = INT32_MAX;
	static int64_t t12 = -1446592096015583199LL;

	t12 = ((x49^x50)/(x51|x52));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x55 = INT64_MIN;
	uint32_t x56 = 3729U;
	int64_t t13 = 65555692LL;

	t13 = ((x53^x54)/(x55|x56));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x57 = INT8_MAX;
	int16_t x58 = -2505;
	int16_t x59 = 1205;
	static int16_t x60 = 14400;
	volatile int32_t t14 = 197;

	t14 = ((x57^x58)/(x59|x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x61 = INT32_MIN;
	int64_t x62 = INT64_MIN;
	int32_t x63 = INT32_MAX;

	t15 = ((x61^x62)/(x63|x64));

	if (t15 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = 4LLU;
	int32_t x66 = INT32_MIN;
	volatile int32_t x67 = 56336272;
	int8_t x68 = INT8_MAX;
	static volatile uint64_t t16 = 145117LLU;

	t16 = ((x65^x66)/(x67|x68));

	if (t16 != 327439269069LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x69 = UINT8_MAX;
	int64_t x70 = 4349498592117095LL;

	t17 = ((x69^x70)/(x71|x72));

	if (t17 != 35946269356340LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MIN;
	int16_t x74 = -1;
	int64_t x75 = INT64_MIN;
	static volatile uint8_t x76 = UINT8_MAX;

	t18 = ((x73^x74)/(x75|x76));

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = -215;
	volatile int32_t t19 = -12002;

	t19 = ((x77^x78)/(x79|x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = UINT32_MAX;
	volatile int16_t x82 = 66;
	uint32_t x83 = UINT32_MAX;
	uint32_t t20 = 2863119U;

	t20 = ((x81^x82)/(x83|x84));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = 2LLU;
	int16_t x87 = -4055;
	volatile uint64_t t21 = 4067636986640261876LLU;

	t21 = ((x85^x86)/(x87|x88));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = UINT32_MAX;
	int16_t x90 = 0;
	volatile uint32_t t22 = 18846U;

	t22 = ((x89^x90)/(x91|x92));

	if (t22 != 1U) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = 1212U;
	static uint64_t x94 = 2648LLU;
	static int32_t x95 = -34076;
	int32_t x96 = -1;
	volatile uint64_t t23 = 2518222092LLU;

	t23 = ((x93^x94)/(x95|x96));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = UINT8_MAX;
	uint32_t x98 = 212837U;
	volatile int8_t x99 = INT8_MIN;
	volatile uint32_t t24 = 213U;

	t24 = ((x97^x98)/(x99|x100));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x103 = INT8_MIN;
	int8_t x104 = INT8_MAX;

	t25 = ((x101^x102)/(x103|x104));

	if (t25 != 128LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x105 = INT32_MAX;
	uint8_t x106 = 5U;
	uint32_t x107 = 412U;
	int16_t x108 = -1;
	static uint32_t t26 = 16834U;

	t26 = ((x105^x106)/(x107|x108));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x109 = 6144733LLU;
	uint32_t x110 = 2U;
	int32_t x111 = 115087476;
	int8_t x112 = -46;
	volatile uint64_t t27 = 55018099709LLU;

	t27 = ((x109^x110)/(x111|x112));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x113 = INT8_MAX;
	volatile int64_t x114 = 244918LL;
	int32_t x116 = 0;

	t28 = ((x113^x114)/(x115|x116));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MIN;
	static int16_t x120 = 393;

	t29 = ((x117^x118)/(x119|x120));

	if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x122 = INT16_MIN;
	int32_t x123 = -1;
	volatile int32_t t30 = 26;

	t30 = ((x121^x122)/(x123|x124));

	if (t30 != -32640) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MIN;
	static uint32_t x126 = UINT32_MAX;
	int16_t x127 = -1;
	volatile uint32_t t31 = 63U;

	t31 = ((x125^x126)/(x127|x128));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MIN;
	static uint16_t x131 = 114U;
	int64_t x132 = INT64_MAX;
	int64_t t32 = -191496968341184LL;

	t32 = ((x129^x130)/(x131|x132));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x133 = -1;
	int8_t x134 = INT8_MIN;
	int64_t x135 = INT64_MAX;
	int32_t x136 = INT32_MIN;
	static volatile int64_t t33 = -804389372443104587LL;

	t33 = ((x133^x134)/(x135|x136));

	if (t33 != -127LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = INT16_MIN;
	volatile uint32_t x138 = 606U;
	int32_t x139 = -15779;
	int8_t x140 = INT8_MIN;

	t34 = ((x137^x138)/(x139|x140));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = 1397;
	static volatile int8_t x142 = -1;
	static volatile int64_t t35 = -26650022LL;

	t35 = ((x141^x142)/(x143|x144));

	if (t35 != 1398LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MAX;
	int64_t x146 = INT64_MAX;
	int32_t x147 = INT32_MAX;
	int16_t x148 = 1;
	static volatile int64_t t36 = -29519102480LL;

	t36 = ((x145^x146)/(x147|x148));

	if (t36 != 4294967297LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = 2;
	int64_t x150 = INT64_MIN;
	int8_t x151 = -6;
	uint16_t x152 = 12U;
	volatile int64_t t37 = 208362065804913172LL;

	t37 = ((x149^x150)/(x151|x152));

	if (t37 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x154 = INT32_MAX;
	static uint32_t x155 = 0U;
	uint32_t t38 = 78U;

	t38 = ((x153^x154)/(x155|x156));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = -2;
	uint16_t x158 = UINT16_MAX;
	int32_t x159 = -1;

	t39 = ((x157^x158)/(x159|x160));

	if (t39 != 65535) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = UINT8_MAX;
	static int16_t x163 = -1;
	int32_t x164 = -1;
	volatile int32_t t40 = 41439;

	t40 = ((x161^x162)/(x163|x164));

	if (t40 != -135) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = -15964LL;
	volatile int64_t x167 = INT64_MIN;
	int64_t t41 = -447064840462205400LL;

	t41 = ((x165^x166)/(x167|x168));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x170 = -186;
	static int64_t x171 = -1LL;
	uint16_t x172 = 228U;
	volatile int64_t t42 = 3155LL;

	t42 = ((x169^x170)/(x171|x172));

	if (t42 != 2147483463LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x173 = INT32_MIN;
	static int32_t x175 = -43387;
	int32_t t43 = -435289;

	t43 = ((x173^x174)/(x175|x176));

	if (t43 != -49635) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x177 = -1;
	int32_t x178 = -50;
	int32_t x180 = 2915451;
	int64_t t44 = 90750534485290LL;

	t44 = ((x177^x178)/(x179|x180));

	if (t44 != -49LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = 18236607240LLU;
	int64_t x182 = -1207LL;
	static volatile int32_t x183 = -1;
	int16_t x184 = INT16_MAX;
	volatile uint64_t t45 = 839764LLU;

	t45 = ((x181^x182)/(x183|x184));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = 33U;
	int16_t x187 = -1;
	static uint16_t x188 = UINT16_MAX;

	t46 = ((x185^x186)/(x187|x188));

	if (t46 != 34) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MIN;
	int64_t x190 = -1LL;
	int16_t x192 = INT16_MAX;

	t47 = ((x189^x190)/(x191|x192));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = 1;
	uint8_t x195 = 15U;
	int8_t x196 = 3;
	volatile int32_t t48 = 188844;

	t48 = ((x193^x194)/(x195|x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int64_t x197 = -1LL;
	static uint64_t x198 = 119924LLU;
	volatile int16_t x199 = 951;
	uint16_t x200 = UINT16_MAX;
	static uint64_t t49 = 151018LLU;

	t49 = ((x197^x198)/(x199|x200));

	if (t49 != 281479271743487LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = 226340;
	volatile int8_t x202 = 7;
	volatile int16_t x203 = INT16_MIN;
	static uint8_t x204 = 0U;
	static int32_t t50 = -53541;

	t50 = ((x201^x202)/(x203|x204));

	if (t50 != -6) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x206 = INT16_MIN;
	int64_t x207 = -1LL;
	int16_t x208 = 2;
	volatile uint64_t t51 = 806000LLU;

	t51 = ((x205^x206)/(x207|x208));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x209 = INT16_MIN;
	int8_t x210 = 3;
	int16_t x211 = 1;
	volatile int32_t t52 = 75786;

	t52 = ((x209^x210)/(x211|x212));

	if (t52 != 257) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x214 = -1;
	int32_t x215 = -1;
	int8_t x216 = -1;

	t53 = ((x213^x214)/(x215|x216));

	if (t53 != -13007) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x217 = 5U;
	uint16_t x218 = UINT16_MAX;
	uint16_t x219 = 212U;
	static int8_t x220 = INT8_MAX;
	volatile int32_t t54 = -25314;

	t54 = ((x217^x218)/(x219|x220));

	if (t54 != 256) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x221 = 4U;
	volatile int32_t x222 = INT32_MIN;
	volatile uint8_t x223 = 4U;
	uint32_t x224 = UINT32_MAX;
	static volatile uint32_t t55 = 713997U;

	t55 = ((x221^x222)/(x223|x224));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x226 = INT8_MIN;
	int16_t x227 = INT16_MIN;
	static volatile int64_t t56 = 62362028604657705LL;

	t56 = ((x225^x226)/(x227|x228));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = INT8_MIN;
	volatile uint64_t x230 = 1LLU;
	int16_t x231 = INT16_MAX;
	uint32_t x232 = 5209U;
	volatile uint64_t t57 = 1812LLU;

	t57 = ((x229^x230)/(x231|x232));

	if (t57 != 562967133814799LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x233 = INT16_MIN;
	volatile uint8_t x234 = UINT8_MAX;
	uint32_t x235 = 619U;
	int16_t x236 = 1;
	uint32_t t58 = 7U;

	t58 = ((x233^x234)/(x235|x236));

	if (t58 != 6938505U) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = 45267;
	int32_t x238 = -1;
	volatile int16_t x239 = -1539;
	uint32_t x240 = 36U;
	static uint32_t t59 = 9U;

	t59 = ((x237^x238)/(x239|x240));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = 466238293LL;
	static int32_t x243 = INT32_MAX;

	t60 = ((x241^x242)/(x243|x244));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x246 = -3;
	int64_t x247 = -1LL;
	static int64_t x248 = -298015226815738LL;
	int64_t t61 = -1LL;

	t61 = ((x245^x246)/(x247|x248));

	if (t61 != -982052100506748LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x249 = UINT16_MAX;
	uint16_t x250 = UINT16_MAX;
	uint32_t x251 = 1914567U;
	int16_t x252 = INT16_MAX;
	volatile uint32_t t62 = 3476U;

	t62 = ((x249^x250)/(x251|x252));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = 93404175LL;
	static int32_t x255 = INT32_MIN;
	uint16_t x256 = UINT16_MAX;
	static int64_t t63 = -5226LL;

	t63 = ((x253^x254)/(x255|x256));

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x257 = INT64_MAX;
	static uint16_t x258 = UINT16_MAX;
	uint32_t x260 = UINT32_MAX;

	t64 = ((x257^x258)/(x259|x260));

	if (t64 != 2147483648LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x261 = 81084238698850LLU;
	uint32_t x263 = 0U;
	static int16_t x264 = INT16_MIN;
	static volatile uint64_t t65 = 145425100LLU;

	t65 = ((x261^x262)/(x263|x264));

	if (t65 != 4294981185LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = -1;
	int64_t x266 = -1LL;
	uint32_t x267 = UINT32_MAX;
	int32_t x268 = INT32_MAX;
	static int64_t t66 = -242898703341789079LL;

	t66 = ((x265^x266)/(x267|x268));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x269 = INT8_MIN;
	int64_t x270 = -1LL;
	int32_t x271 = 0;
	volatile int32_t x272 = 197926;
	volatile int64_t t67 = -1131066214230364LL;

	t67 = ((x269^x270)/(x271|x272));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x274 = 16U;
	int64_t x276 = INT64_MIN;
	int64_t t68 = 504708869566575LL;

	t68 = ((x273^x274)/(x275|x276));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int16_t x277 = INT16_MIN;
	volatile uint32_t x279 = UINT32_MAX;
	int32_t x280 = INT32_MIN;
	volatile uint64_t t69 = 193LLU;

	t69 = ((x277^x278)/(x279|x280));

	if (t69 != 4294967296LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x281 = UINT8_MAX;
	volatile int8_t x282 = INT8_MIN;
	int8_t x284 = -1;
	volatile int32_t t70 = -1;

	t70 = ((x281^x282)/(x283|x284));

	if (t70 != 129) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MIN;
	volatile int32_t x286 = 192002;
	int32_t x287 = -31619;
	static int64_t x288 = INT64_MAX;
	volatile int64_t t71 = -66558351LL;

	t71 = ((x285^x286)/(x287|x288));

	if (t71 != 192126LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = INT32_MIN;
	int8_t x290 = 60;
	int64_t x291 = -53LL;
	static uint64_t x292 = 239110396326LLU;
	volatile uint64_t t72 = 10191898929774LLU;

	t72 = ((x289^x290)/(x291|x292));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = INT64_MIN;
	volatile uint8_t x294 = 0U;
	int16_t x295 = INT16_MIN;

	t73 = ((x293^x294)/(x295|x296));

	if (t73 != 281492157628480LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x299 = INT8_MIN;
	volatile int32_t x300 = INT32_MIN;
	int64_t t74 = -4677074428748LL;

	t74 = ((x297^x298)/(x299|x300));

	if (t74 != 13896939LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = -1;
	int16_t x303 = -1;
	static int64_t x304 = 765LL;
	volatile int64_t t75 = -5817166LL;

	t75 = ((x301^x302)/(x303|x304));

	if (t75 != -127LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x306 = INT64_MAX;
	int64_t x307 = -1LL;
	int32_t x308 = INT32_MIN;
	int64_t t76 = 106LL;

	t76 = ((x305^x306)/(x307|x308));

	if (t76 != -9223372036854775800LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x309 = UINT32_MAX;
	int8_t x310 = -1;
	volatile uint64_t x311 = 43LLU;
	uint64_t t77 = 28544LLU;

	t77 = ((x309^x310)/(x311|x312));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x313 = INT8_MAX;
	static uint32_t x314 = 0U;
	uint16_t x316 = 19U;
	static volatile uint32_t t78 = 56541983U;

	t78 = ((x313^x314)/(x315|x316));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x318 = 41835028242890LLU;
	volatile uint16_t x319 = UINT16_MAX;
	volatile uint64_t t79 = 80144938LLU;

	t79 = ((x317^x318)/(x319|x320));

	if (t79 != 79445198862LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = 10380U;
	int32_t x322 = INT32_MIN;
	volatile uint64_t t80 = 118623185730LLU;

	t80 = ((x321^x322)/(x323|x324));

	if (t80 != 1LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = 285247308LL;
	uint32_t x326 = UINT32_MAX;
	int32_t x328 = INT32_MIN;
	volatile int64_t t81 = 11983920LL;

	t81 = ((x325^x326)/(x327|x328));

	if (t81 != -4009719987LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = INT32_MIN;
	uint16_t x330 = UINT16_MAX;
	int64_t x331 = -111528241227082856LL;
	uint32_t x332 = 2103845626U;

	t82 = ((x329^x330)/(x331|x332));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x333 = UINT64_MAX;
	int16_t x334 = -1;
	static uint16_t x335 = UINT16_MAX;
	static uint32_t x336 = 285U;

	t83 = ((x333^x334)/(x335|x336));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = INT8_MIN;
	int32_t x338 = INT32_MAX;
	volatile uint8_t x340 = 116U;
	uint32_t t84 = 739U;

	t84 = ((x337^x338)/(x339|x340));

	if (t84 != 18046082U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x341 = 15786543LL;
	static int8_t x342 = INT8_MAX;
	static volatile int16_t x343 = 3;
	uint8_t x344 = 17U;
	volatile int64_t t85 = -10386973267862LL;

	t85 = ((x341^x342)/(x343|x344));

	if (t85 != 830872LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x345 = INT8_MIN;
	int16_t x346 = -1;
	uint16_t x348 = 106U;
	int64_t t86 = 883057618959185LL;

	t86 = ((x345^x346)/(x347|x348));

	if (t86 != -127LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x350 = -6;
	int64_t x351 = INT64_MIN;
	int32_t x352 = INT32_MIN;

	t87 = ((x349^x350)/(x351|x352));

	if (t87 != -4294967295LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = 0;
	int16_t x354 = INT16_MIN;
	volatile int32_t x355 = INT32_MIN;
	int16_t x356 = -1;
	int32_t t88 = -1;

	t88 = ((x353^x354)/(x355|x356));

	if (t88 != 32768) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = INT64_MIN;
	uint8_t x359 = 1U;

	t89 = ((x357^x358)/(x359|x360));

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = INT8_MAX;
	uint32_t x363 = 1437556U;

	t90 = ((x361^x362)/(x363|x364));

	if (t90 != 9402101281158LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x365 = INT32_MIN;
	volatile int16_t x366 = INT16_MAX;
	int32_t x367 = INT32_MAX;
	volatile int8_t x368 = 0;
	int32_t t91 = 2077079;

	t91 = ((x365^x366)/(x367|x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MAX;
	int64_t x370 = INT64_MIN;
	int32_t x371 = 12621467;
	volatile int16_t x372 = INT16_MIN;
	int64_t t92 = -50LL;

	t92 = ((x369^x370)/(x371|x372));

	if (t92 != 341846930686585LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = -1;
	static volatile int16_t x374 = INT16_MAX;
	volatile int16_t x375 = 6;
	volatile uint32_t t93 = 0U;

	t93 = ((x373^x374)/(x375|x376));

	if (t93 != 985U) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x377 = UINT16_MAX;
	int16_t x379 = 1514;
	volatile int64_t x380 = -14288032380740LL;
	uint64_t t94 = 2LLU;

	t94 = ((x377^x378)/(x379|x380));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = INT32_MIN;
	volatile int32_t x382 = 25083046;
	int8_t x384 = INT8_MAX;
	int32_t t95 = 1061131;

	t95 = ((x381^x382)/(x383|x384));

	if (t95 != 2122400602) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x385 = INT16_MAX;
	int8_t x386 = 51;
	int32_t x388 = 22902773;

	t96 = ((x385^x386)/(x387|x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = INT32_MAX;
	volatile uint64_t x391 = 3LLU;
	volatile uint8_t x392 = 58U;

	t97 = ((x389^x390)/(x391|x392));

	if (t97 != 312656679179027446LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x393 = 73937871169391LLU;
	static int64_t x394 = -1LL;
	volatile int64_t x395 = INT64_MIN;
	int32_t x396 = INT32_MIN;
	static uint64_t t98 = 1026573100567588645LLU;

	t98 = ((x393^x394)/(x395|x396));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x397 = 2U;
	int64_t x398 = -121132803037585LL;
	static int64_t x399 = 254359908LL;
	volatile int64_t x400 = INT64_MAX;
	volatile int64_t t99 = -1LL;

	t99 = ((x397^x398)/(x399|x400));

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

